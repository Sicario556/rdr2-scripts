void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iVar0 = 523;
	if (func_1())
	{
		iVar0 = 521;
	}
	if (has_force_cleanup_occurred(iVar0))
	{
		func_2(&Local_14, &(Local_14.f_711), &(Local_14.f_1764), &(Local_14.f_3089));
	}
	func_3(4);
	func_4(&Local_14, -1);
	while (true)
	{
		func_5();
		if (func_6(&Local_14, &(Local_14.f_711)))
		{
			func_7(&Local_14, 5);
		}
		else
		{
			func_8(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
			if (func_9(&Local_14) > 0)
			{
				func_10(&Local_14, &(Local_14.f_711));
				func_11(&(Local_14.f_711), 0);
				func_12(&Local_14, &(Local_14.f_711));
				func_13(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
				func_14(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
				func_15(&Local_14, &(Local_14.f_711));
				if (!func_1())
				{
					func_16(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
					func_17(&Local_14, &(Local_14.f_711));
				}
			}
		}
		switch (func_9(&Local_14))
		{
			case 0:
				func_18(&Local_14);
				break;
			case 1:
				func_19(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
				break;
			case 2:
				func_20(&Local_14, &(Local_14.f_711));
				break;
			case 3:
				func_21(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
				break;
			case 4:
				func_22(&Local_14);
				break;
			case 5:
				func_23(&Local_14, &(Local_14.f_711), &(Local_14.f_1764), &(Local_14.f_3089));
				break;
		}
		func_24(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
		if (func_1())
		{
			func_25(&(Local_14.f_3089));
		}
		wait(0);
	}
}

bool func_1()
{
	return func_26() == 0;
}

void func_2(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_27(uParam0, uParam1, uParam2, 0);
	Global_1900073->f_194 = 0;
	func_28(&(uParam0->f_31));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (&uParam2->f_1[iVar0] == 0)
		{
			func_29(uParam0, uParam1, uParam2, iVar0, 1, 0);
		}
		else
		{
			func_29(uParam0, uParam1, uParam2, iVar0, 0, 0);
		}
		iVar0++;
	}
	func_30(&(Global_1900073->f_195), 1, 1, 1);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < func_31(uParam0))
	{
		func_32(uParam1, iVar1);
		func_33(uParam1, iVar1);
		func_34(uParam1, iVar1);
		func_35(&((*uParam1)[iVar1]->f_13));
		func_36(uParam1, iVar1);
		iVar1++;
	}
	if (func_1())
	{
		func_37(uParam3);
	}
	else
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < func_31(uParam0))
		{
			if (iVar1 > 0 && &Global_1900073->f_7[(iVar1 - 1)] != -1)
			{
				func_38(uParam0, uParam1, iVar1, 0);
			}
			iVar1++;
		}
		func_39();
		func_40(1);
	}
	func_41(uParam0);
	func_42(&(uParam0->f_676), 0);
	func_43(uParam0, uParam2, 0);
	func_44();
	if (func_45(8) || !func_46(&(uParam0->f_676)))
	{
		func_47();
	}
	func_3(32);
	Global_1900073->f_152 = 0;
	if (!func_1())
	{
		terminate_this_thread();
	}
	else
	{
		func_48();
	}
}

void func_3(int iParam0)
{
	if (func_45(iParam0))
	{
		func_49(&(Global_1900073->f_1), iParam0);
	}
}

void func_4(var uParam0, int iParam1)
{
	if (!func_1() || func_50(uParam0, 2))
	{
		return;
	}
	func_51(uParam0, 2);
	network_set_script_is_safe_for_network_game();
	set_this_script_can_be_paused(false);
}

void func_5()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_52(iVar0, 32);
		iVar0++;
	}
}

bool func_6(var uParam0, var uParam1)
{
	if (!does_entity_exist(func_53(uParam1, 0)))
	{
		return true;
	}
	if (is_ped_injured(func_53(uParam1, 0)))
	{
		func_54(uParam1);
		return true;
	}
	if (func_45(4))
	{
		if (!func_45(64))
		{
			func_54(uParam1);
		}
		return true;
	}
	if (func_50(uParam0, 1))
	{
		if (!func_46(&(uParam0->f_676)) || func_45(8))
		{
			if (!func_55(uParam0->f_36) && (uParam0->f_683 == 0 || uParam0->f_683 == 6))
			{
				uParam0->f_58 = func_56(func_53(uParam1, 0), uParam0->f_36, 0);
				if (uParam0->f_58 > 15f)
				{
					return true;
				}
			}
			if (is_ped_on_mount(func_53(uParam1, 0)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_7(var uParam0, int iParam1)
{
	if (func_9(uParam0) != iParam1)
	{
		uParam0->f_10 = iParam1;
	}
}

void func_8(var uParam0, var uParam1, var uParam2)
{
	if (func_50(uParam0, 1))
	{
		return;
	}
	func_51(uParam0, 1);
	if (!func_1())
	{
		func_57(&(uParam0->f_676));
		if (func_58())
		{
		}
		if (uParam0->f_676 == 1)
		{
		}
		else if (uParam0->f_676.f_1 == 1)
		{
		}
		else if (uParam0->f_676.f_2 == 1)
		{
		}
		else if (uParam0->f_676.f_3 == 1)
		{
		}
		else if (uParam0->f_676.f_4 == 1)
		{
		}
		else if (uParam0->f_676.f_5 == 1)
		{
		}
		if (Global_1900073->f_17 == 0 && func_46(&(uParam0->f_676)))
		{
			Global_1900073->f_17 = 1;
		}
	}
	func_44();
	func_59(uParam2);
	func_60(uParam0, uParam1);
	func_42(&(uParam0->f_676), 1);
	func_43(uParam0, uParam2, 1);
	func_61(&(uParam0->f_676), &(uParam0->f_105), 1);
	func_62(uParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		func_63(uParam1, iVar0);
		func_64(uParam0, uParam1, uParam2, iVar0, -1);
		iVar0++;
	}
	*uParam0->f_39[0] = { 0f, 0f, 0f };
	*uParam0->f_39[1] = { -20f, 20f, 0f };
	*uParam0->f_39[2] = { -20f, 50f, 0f };
	*uParam0->f_39[3] = { 20f, 50f, 0f };
	*uParam0->f_39[4] = { 20f, 20f, 0f };
	uParam0->f_36 = { Global_36 };
	uParam0->f_62 = { 2401.026f, -994.4021f, 43.0558f };
	if (!func_1())
	{
		func_65(1);
		func_66();
	}
	func_67();
}

int func_9(var uParam0)
{
	return uParam0->f_10;
}

void func_10(var uParam0, var uParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (!is_entity_dead(func_53(uParam1, iVar0)) && func_68(uParam1, iVar0))
		{
			Global_1900073->f_147[iVar0] = _0xf3735acd11acd500(func_53(uParam1, iVar0), Global_1900073->f_26[iVar0]);
		}
		else
		{
			Global_1900073->f_26[iVar0] = 1;
			Global_1900073->f_147[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_11(var uParam0, int iParam1)
{
	(*uParam0)[iParam1]->f_7 = { get_entity_coords(func_53(uParam0, iParam1), true, false) };
	(*uParam0)[iParam1]->f_10 = get_entity_heading(func_53(uParam0, iParam1));
	if (func_69(iParam1, 1, 1))
	{
		(*uParam0)[iParam1]->f_10 = ((*uParam0)[iParam1]->f_10 + 90f);
	}
}

void func_12(var uParam0, var uParam1)
{
	if (uParam0->f_676.f_4 == 1)
	{
		_0x8ec7cd701f872f87(0.5f, 512, 0, 0, -1, -1);
		_0x8ec7cd701f872f87(4f, 0, 0, 430222648, -1, -1);
	}
	else
	{
		_0x8ec7cd701f872f87(2f, 512, 0, 0, -1, -1);
	}
	_0x8ec7cd701f872f87(0.1f, 1024, 0, 0, -1, -1);
	if (func_9(uParam0) == 0)
	{
		return;
	}
	func_70(uParam0);
	if (func_71() || func_45(256))
	{
		func_72(uParam0);
	}
	if (func_45(512))
	{
		func_73(0);
		func_3(512);
	}
	if (func_45(1024))
	{
		func_73(1);
		func_3(1024);
	}
	if (func_74(&(uParam0->f_102)))
	{
		if (func_75(&(uParam0->f_102)) < 500)
		{
			disable_control_action(0, -1404316431, false);
		}
		else
		{
			func_76(&(uParam0->f_102));
		}
	}
	if (func_68(uParam1, 0))
	{
		if (!is_entity_dead(func_53(uParam1, 0)))
		{
			set_ped_reset_flag(func_53(uParam1, 0), 134, true);
			set_ped_max_move_blend_ratio(func_53(uParam1, 0), 1.5f);
		}
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
		func_77();
		_0x8910c24b7e0046ec();
		if (&Global_1900073->f_147[0] == 1)
		{
			if (&Global_1900073->f_26[0] > 1 && &Global_1900073->f_26[0] != 12)
			{
				func_78(0);
			}
			if (&Global_1900073->f_26[0] > 1)
			{
				disable_control_action(0, -1879280170, false);
				disable_control_action(0, -1304887797, false);
			}
			if (&Global_1900073->f_26[0] == 12)
			{
				disable_control_action(0, -813019446, false);
			}
		}
		if ((&Global_1900073->f_26[0] > 1 && &Global_1900073->f_26[0] != 6) || func_79(uParam1, 0, 4096))
		{
			disable_control_action(0, -1404316431, false);
		}
		uParam0->f_36 = { Global_36 };
		if ((func_80(0, 8192) && func_69(0, 1, 1)) && func_80(0, 32768))
		{
			_0x88fd60d846d9cd63(func_53(uParam1, 0));
		}
	}
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (&Global_1900073->f_147[iVar0] == 1 && (((&Global_1900073->f_26[iVar0] == 4 || &Global_1900073->f_26[iVar0] == 6) || &Global_1900073->f_26[iVar0] == 7) || &Global_1900073->f_26[iVar0] == 10))
		{
			func_81(uParam1, iVar0);
			func_82(uParam1, iVar0);
			if (&Global_1900073->f_26[iVar0] == 7)
			{
				func_83(uParam0, uParam1, uParam2, iVar0);
			}
		}
		else
		{
			(*uParam1)[iVar0]->f_19 = -99999f;
			(*uParam1)[iVar0]->f_20 = -99999f;
			(*uParam1)[iVar0]->f_21 = -99999f;
			(*uParam1)[iVar0]->f_22 = -99999f;
			(*uParam1)[iVar0]->f_23 = -99999f;
			(*uParam1)[iVar0]->f_24 = -99999f;
		}
		iVar0++;
	}
}

void func_14(var uParam0, var uParam1, var uParam2)
{
	func_84(uParam0, uParam2);
	func_85(uParam0, uParam1);
	uParam2->f_1140 = 0;
	uParam2->f_1141 = 0;
	uParam2->f_705 = 0;
	func_86(uParam2);
	iVar70 = 0;
	iVar70 = 0;
	while (iVar70 < *uParam2)
	{
		bVar69 = is_entity_dead(&(uParam2->f_163[iVar70]));
		if (bVar69 == 0)
		{
			iVar0++;
			if (func_87(&(uParam2->f_327[iVar70])))
			{
				uVar49[&uParam2->f_327[iVar70]] = &uVar49[&uParam2->f_327[iVar70]] + 1;
				if (func_88(iVar70))
				{
					uVar33[&uParam2->f_327[iVar70]] = &uVar33[&uParam2->f_327[iVar70]] + 1;
				}
				else if (&uParam2->f_532[iVar70] == 1)
				{
					uVar17[&uParam2->f_327[iVar70]] = &uVar17[&uParam2->f_327[iVar70]] + 1;
				}
				else
				{
					uVar1[&uParam2->f_327[iVar70]] = &uVar1[&uParam2->f_327[iVar70]] + 1;
				}
				if (func_89(&(uParam2->f_327[iVar70])))
				{
					iVar67++;
				}
				else
				{
					iVar68++;
				}
			}
			if (&uParam2->f_1[iVar70] == 1)
			{
				iVar65++;
			}
			else
			{
				iVar66++;
			}
		}
		if ((&uParam2->f_204[iVar70] >= 3 && &uParam2->f_204[iVar70] < 11) && bVar69 == 1)
		{
			func_29(uParam0, uParam1, uParam2, iVar70, 0, 0);
		}
		else if (func_90(uParam2, iVar70))
		{
			func_29(uParam0, uParam1, uParam2, iVar70, 0, 0);
		}
		switch (&uParam2->f_204[iVar70])
		{
			case 0:
				func_91(&(uParam0->f_676), uParam2, iVar70);
				break;
			case 1:
				func_92(uParam0, uParam1, uParam2, iVar70);
				break;
			case 2:
				func_93(uParam0, uParam1, uParam2, iVar70);
				break;
			case 3:
				func_94(uParam0, uParam1, uParam2, iVar70);
				break;
			case 4:
				func_95(uParam0, uParam1, uParam2, iVar70);
				break;
			case 5:
				func_96(uParam0, uParam1, uParam2, iVar70);
				break;
			case 6:
			case 7:
				func_97(uParam0, uParam1, uParam2, iVar70);
				break;
			case 8:
				func_98(uParam0, uParam1, uParam2, iVar70);
				break;
			case 9:
				func_99(uParam0, uParam1, uParam2, iVar70);
				break;
			case 10:
				func_100(uParam2, iVar70);
				break;
			case 11:
				func_101(uParam0, uParam1, uParam2, iVar70);
				break;
		}
		iVar70++;
	}
	uParam2->f_707 = iVar0;
	iVar71 = 0;
	iVar71 = 0;
	while (iVar71 < 15)
	{
		uParam2->f_708[iVar71] = &uVar1[iVar71];
		uParam2->f_724[iVar71] = &uVar17[iVar71];
		uParam2->f_740[iVar71] = &uVar33[iVar71];
		uParam2->f_756[iVar71] = &uVar49[iVar71];
		iVar71++;
	}
	uParam2->f_772 = iVar65;
	uParam2->f_773 = iVar66;
	uParam2->f_774 = iVar67;
	uParam2->f_775 = iVar68;
	uParam2->f_1142++;
	if (uParam2->f_1142 >= *uParam2)
	{
		uParam2->f_1142 = 0;
	}
}

void func_15(var uParam0, var uParam1)
{
	switch (uParam0->f_683)
	{
		case 0:
			break;
		case 1:
			if (func_102(0, 8192, 1))
			{
				uParam0->f_708 = 1;
			}
			disable_all_control_actions(0);
			disable_all_control_actions(2);
			if (is_screen_faded_in() && !is_screen_fading_out())
			{
				func_72(uParam0);
				func_103();
				do_screen_fade_out(500);
			}
			if (is_screen_faded_out())
			{
				uParam0->f_698 = { get_entity_coords(func_53(uParam1, 0), true, false) };
				uParam0->f_709 = 0;
				func_104(&(uParam0->f_705));
				func_105(uParam0, 2);
			}
			break;
		case 2:
			if (func_102(0, 8192, 1))
			{
				uParam0->f_708 = 1;
			}
			disable_all_control_actions(0);
			disable_all_control_actions(2);
			if (func_106(uParam0) && ((uParam0->f_708 && _is_ped_carrying(func_53(uParam1, 0))) || func_107(&(uParam0->f_705)) > 10f))
			{
				func_104(&(uParam0->f_684));
				if (func_108(uParam0, uParam1))
				{
					func_105(uParam0, 3);
				}
				else
				{
					func_105(uParam0, 4);
				}
			}
			break;
		case 3:
			disable_all_control_actions(0);
			disable_all_control_actions(2);
			if (func_109(uParam0))
			{
				func_105(uParam0, 4);
			}
			break;
		case 4:
			disable_all_control_actions(0);
			disable_all_control_actions(2);
			if ((func_107(&(uParam0->f_684)) > 2f && is_screen_faded_out()) && !is_screen_fading_in())
			{
				set_gameplay_cam_relative_heading(0f, 1f);
				set_gameplay_cam_relative_pitch(0f, 1f);
				do_screen_fade_in(500);
			}
			if (is_screen_faded_in())
			{
				func_105(uParam0, 5);
			}
			break;
		case 5:
			if (_0xcf45df50c7775f2a())
			{
				_0x5a8b01199c3e79c3();
			}
			func_110(uParam0, 58, 1, -2, 1);
			func_111();
			func_105(uParam0, 6);
			func_112(uParam0);
			break;
		case 6:
			break;
	}
}

void func_16(var uParam0, var uParam1, var uParam2)
{
	if ((func_1() || uParam0->f_73 == 0) || !func_46(&(uParam0->f_676)))
	{
		return;
	}
	if (!func_113(uParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (iVar0 > 0 && !func_102(iVar0, 2048, 1))
		{
			func_114(uParam0, uParam1, iVar0);
			switch (func_115(uParam1, iVar0))
			{
				case 0:
					func_116(uParam0, uParam1, iVar0);
					break;
				case 1:
					func_117(uParam1, iVar0);
					break;
				case 2:
					func_118(uParam0, uParam1, iVar0);
					break;
				case 3:
					func_119(uParam1, iVar0);
					break;
				case 4:
					func_120(uParam0, uParam1, uParam2, iVar0);
					break;
				case 5:
					func_121(uParam1, iVar0);
					break;
				case 6:
					func_122(uParam1, iVar0);
					break;
				case 7:
					func_123(uParam0, uParam1, uParam2, iVar0);
					break;
				case 8:
					break;
			}
		}
		iVar0++;
	}
}

void func_17(var uParam0, var uParam1)
{
	if (func_1())
	{
		return;
	}
	if (!func_50(uParam0, 16))
	{
		if (is_entity_in_angled_area(func_53(uParam1, 0), 807.1916f, -1353.353f, 40.95065f, 810.0553f, -1326.595f, 40.97586f, 15f, false, false, 0) && func_124() == 234527101)
		{
			if ((((((func_125(42, 0) != 2 && func_125(42, 1) != 2) && func_126(42) <= 1) && func_127(42, 2) != 1) && !func_128(735.3256f, -1387.221f, 40.5f, 0.1f, 0.9f, 0.1f, 0.9f)) && (func_129(687859577) || ((func_130() != 0 && func_130() != 1) && func_130() != 2))) && func_131(42))
			{
				func_132(42, 1, 735.3256f, -1387.221f, 40.5f, -1, 0, 1);
				func_51(uParam0, 16);
			}
		}
	}
}

void func_18(var uParam0)
{
	if (!func_50(uParam0, 1))
	{
		return;
	}
	func_133();
	if (func_134(uParam0))
	{
		func_7(uParam0, 1);
	}
}

void func_19(var uParam0, var uParam1, var uParam2)
{
	func_135(uParam0, uParam1);
	if (func_68(uParam1, 0))
	{
		func_27(uParam0, uParam1, uParam2, 1);
		if (func_69(0, 1, 1))
		{
			func_7(uParam0, 2);
		}
		else
		{
			func_7(uParam0, 3);
		}
	}
}

void func_20(var uParam0, var uParam1)
{
	if (((func_136(uParam1) && func_137(uParam0, 1)) && func_138(uParam0, uParam1, 0, 1)) && func_139(uParam1, 0))
	{
		func_7(uParam0, 3);
	}
}

void func_21(var uParam0, var uParam1, var uParam2)
{
	if (func_140(uParam0, uParam1, 0))
	{
		func_27(uParam0, uParam1, uParam2, 0);
		func_7(uParam0, 4);
	}
	else
	{
		func_141(uParam0, uParam1, uParam2, 0);
	}
}

void func_22(var uParam0)
{
	func_7(uParam0, 1);
}

void func_23(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_2(uParam0, uParam1, uParam2, uParam3);
}

void func_24(var uParam0, var uParam1, var uParam2)
{
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < func_31(uParam0))
	{
		if ((!is_entity_dead(func_53(uParam1, iVar1)) && func_68(uParam1, iVar1)) && &Global_1900073->f_147[iVar1] == 1)
		{
			iVar0 = func_142(uParam0, uParam1, uParam2, iVar1);
			if (func_143(uParam1, uParam2, iVar1, iVar0))
			{
				Global_1900073->f_26[iVar1]->f_7 = 0;
				Global_1900073->f_26[iVar1]->f_8 = func_144(uParam0, uParam1, uParam2, iVar1);
				Global_1900073->f_26[iVar1]->f_9 = 0f;
				Global_1900073->f_26[iVar1]->f_18 = &uParam2->f_491[iVar0];
				if ((*uParam1)[iVar1]->f_189 == 0)
				{
					Global_1900073->f_26[iVar1]->f_19 = uParam2->f_1323;
				}
				else
				{
					Global_1900073->f_26[iVar1]->f_19 = uParam2->f_1324;
				}
				Global_1900073->f_26[iVar1]->f_17 = 0f;
				Global_1900073->f_26[iVar1]->f_13 = 0f;
				Global_1900073->f_26[iVar1]->f_20 = 0f;
				Global_1900073->f_26[iVar1]->f_21 = 0f;
			}
			else if (func_145(uParam2, iVar1, iVar0))
			{
				Global_1900073->f_26[iVar1]->f_7 = &uParam2->f_163[iVar0];
				Global_1900073->f_26[iVar1]->f_8 = func_144(uParam0, uParam1, uParam2, iVar1);
				Global_1900073->f_26[iVar1]->f_9 = (*uParam1)[iVar1]->f_235;
				Global_1900073->f_26[iVar1]->f_18 = &uParam2->f_491[iVar0];
				if (func_146(uParam2, iVar0))
				{
					Global_1900073->f_26[iVar1]->f_17 = 1f;
				}
				else
				{
					Global_1900073->f_26[iVar1]->f_17 = 0f;
				}
				Global_1900073->f_26[iVar1]->f_13 = func_147(uParam1, iVar1);
				Global_1900073->f_26[iVar1]->f_20 = func_148(uParam1, iVar1);
				Global_1900073->f_26[iVar1]->f_21 = func_149(uParam1, iVar1);
			}
			else if (func_150(uParam1, iVar1))
			{
				Global_1900073->f_26[iVar1]->f_7 = (*uParam1)[iVar1]->f_13;
				Global_1900073->f_26[iVar1]->f_8 = func_151(uParam1, uParam2, iVar1);
				Global_1900073->f_26[iVar1]->f_9 = func_151(uParam1, uParam2, iVar1);
				Global_1900073->f_26[iVar1]->f_18 = func_152(&(Global_1900073->f_154[iVar1]));
				Global_1900073->f_26[iVar1]->f_17 = 0f;
				Global_1900073->f_26[iVar1]->f_13 = 0f;
				Global_1900073->f_26[iVar1]->f_20 = 0f;
				Global_1900073->f_26[iVar1]->f_21 = 0f;
			}
			else
			{
				Global_1900073->f_26[iVar1]->f_7 = 0;
				Global_1900073->f_26[iVar1]->f_8 = 0f;
				Global_1900073->f_26[iVar1]->f_9 = 0f;
				Global_1900073->f_26[iVar1]->f_17 = 0f;
				Global_1900073->f_26[iVar1]->f_13 = 0f;
				Global_1900073->f_26[iVar1]->f_20 = 0f;
				Global_1900073->f_26[iVar1]->f_21 = 0f;
			}
			if (func_69(iVar1, 1, 1))
			{
				if (func_46(&(uParam0->f_676)))
				{
					func_153(iVar1, 65536, 1);
				}
				if (iVar1 == 0 && func_46(&(uParam0->f_676)))
				{
					Global_1900073->f_26[iVar1]->f_27 = func_154((*uParam1)[iVar1]->f_259);
				}
				else
				{
					Global_1900073->f_26[iVar1]->f_27 = -1f;
				}
				if (iVar1 != 0)
				{
					Global_1900073->f_26[iVar1]->f_26 = -1f;
				}
			}
			else
			{
				Global_1900073->f_26[iVar1]->f_27 = -1f;
				Global_1900073->f_26[iVar1]->f_26 = -1f;
			}
			_0xf3735acd11acd501(func_53(uParam1, iVar1), Global_1900073->f_26[iVar1]);
		}
		iVar1++;
	}
}

void func_25(int* iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (iVar1 != player_id())
		{
			if (((!is_bit_set(*iParam0, iVar0) && func_155(iVar1, 1, 1)) && !is_entity_dead(get_player_ped(iVar1))) && func_156(get_player_ped(iVar1)))
			{
				set_bit(iParam0, iVar0);
			}
			if (is_bit_set(*iParam0, iVar0))
			{
				if (func_155(iVar1, 1, 1) && func_156(get_player_ped(iVar1)))
				{
					func_157(iParam0->f_1[iVar0], get_player_ped(iVar1), iVar0);
				}
				else
				{
					clear_bit(iParam0, iVar0);
					func_158(iParam0->f_1[iVar0], iVar0);
				}
			}
		}
		iVar0++;
	}
}

int func_26()
{
	return Global_1572887->f_12;
}

void func_27(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 1)
	{
		func_159(13);
		func_160(uParam1);
		func_161();
		func_162();
		func_104(&(uParam0->f_12));
		func_104(&(uParam0->f_15));
		if (is_waypoint_active())
		{
			set_waypoint_off();
		}
		func_36(uParam1, 0);
		func_163(func_53(uParam1, 0), 0);
		func_164(uParam1, 0, 1);
		func_165(&(uParam0->f_676), 1);
		func_166(uParam1, 0, 1);
		func_167(uParam0);
		if (func_46(&(uParam0->f_676)))
		{
			uParam0->f_74 = 1;
			if (uParam0->f_676.f_2 == 1)
			{
				if (!func_168(-978159653, 1, 0))
				{
					func_169(-978159653, 0);
				}
				_0x9050df2c53801208(func_53(uParam1, 0), (3.141593f * 0.5f));
			}
			else if (uParam0->f_676 == 1)
			{
				if (!func_168(1815744868, 1, 0))
				{
					func_169(1815744868, 0);
				}
				_0x9050df2c53801208(func_53(uParam1, 0), (3.141593f * 0.5f));
			}
		}
		func_170();
		if (func_58())
		{
			func_171(&(uParam0->f_568), func_53(uParam1, 0), "JOHN", 0);
		}
		else
		{
			func_171(&(uParam0->f_568), func_53(uParam1, 0), "ARTHUR", 0);
		}
		func_172(uParam0, 1);
		func_173(uParam0, uParam1);
		func_174();
		func_175();
		func_177(func_176(&(uParam0->f_676)));
		func_178(uParam0, uParam1, 0);
		func_105(uParam0, 0);
		func_112(uParam0);
		set_ped_config_flag(func_53(uParam1, 0), 174, true);
		set_random_trains(false);
		uParam0->f_710 = _0x5952dfa38fa529fe();
	}
	else
	{
		func_179(0);
		func_180(uParam1);
		func_181(0, 0);
		if (!func_182(&(uParam0->f_105[58])))
		{
			func_103();
		}
		func_183(uParam0);
		func_61(&(uParam0->f_676), &(uParam0->f_105), 1);
		func_72(uParam0);
		func_28(&(uParam0->f_31));
		func_184(uParam0, 0);
		func_172(uParam0, 0);
		func_185(1309979101);
		func_185(1872063208);
		func_165(&(uParam0->f_676), 0);
		func_186(uParam1, 0);
		func_187(uParam0, uParam1, uParam2, 0, 0, 0, 0);
		func_36(uParam1, 0);
		func_163(func_53(uParam1, 0), 1);
		func_164(uParam1, 0, 0);
		func_137(uParam0, 0);
		func_138(uParam0, uParam1, 0, 0);
		func_188(uParam0->f_65);
		_0x22cdbf317c40a122(func_53(uParam1, 0));
		uParam0->f_36 = { Global_36 };
		uParam0->f_18 = 0;
		uParam0->f_35 = 0;
		func_189(uParam0);
		func_190(uParam0);
		_0xa33f5069b0cb89b8();
		func_191(uParam1, 0, 0);
		set_ped_config_flag(func_53(uParam1, 0), 174, false);
		set_random_trains(true);
		func_52(0, 2);
	}
}

void func_28(var uParam0)
{
	if (uParam0->f_2 == 0)
	{
		return;
	}
	if (_is_app_active(1749944028))
	{
		_close_app_by_hash(1749944028);
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	_databinding_remove_data_entry(uParam0->f_3);
}

void func_29(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (!is_entity_dead(&(uParam2->f_163[iParam3])))
	{
		set_ped_reset_flag(&(uParam2->f_163[iParam3]), 169, false);
		if (func_88(iParam3))
		{
			iVar0 = func_192(&(uParam2->f_327[iParam3]));
			if (((func_193(iVar0) && &Global_40.f_11184.f_5[iVar0] == 0) && !func_79(uParam1, 0, 32)) && !func_79(uParam1, 0, 64))
			{
				iParam4 = 1;
			}
		}
	}
	iVar1 = func_194(uParam0, uParam1, uParam2, iParam3);
	if (iVar1 != -1)
	{
		func_64(uParam0, uParam1, uParam2, iVar1, -1);
	}
	if (&uParam2->f_573[iParam3] == 1)
	{
		iParam4 = 0;
	}
	if (does_entity_exist(&(uParam2->f_163[iParam3])))
	{
		if (iParam4 == 1 && (!func_1() || iParam5 == 1))
		{
			func_195(uParam2->f_163[iParam3]);
		}
		else
		{
			func_30(uParam2->f_163[iParam3], 1, 1, 1);
		}
	}
	if (&uParam2->f_286[iParam3] != 0)
	{
		set_model_as_no_longer_needed(&(uParam2->f_286[iParam3]));
	}
	func_196(uParam2, iParam3);
}

void func_30(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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
		set_entity_load_collision_flag(*iParam0, false);
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

int func_31(var uParam0)
{
	return uParam0->f_73 + 1;
}

void func_32(var uParam0, int iParam1)
{
	if (!_0x84848e1c0fc67dbb((*uParam0)[iParam1]->f_91))
	{
		_0x3210bcb36af7621b((*uParam0)[iParam1]->f_91);
	}
}

void func_33(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!_0x84848e1c0fc67dbb(&((*uParam0)[iParam1]->f_84[iVar0])))
		{
			_0x3210bcb36af7621b(&((*uParam0)[iParam1]->f_84[iVar0]));
		}
		iVar0++;
	}
}

void func_34(var uParam0, int iParam1)
{
	if (!_0x84848e1c0fc67dbb((*uParam0)[iParam1]->f_90))
	{
		_0x3210bcb36af7621b((*uParam0)[iParam1]->f_90);
	}
}

void func_35(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
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
	if (is_entity_attached_to_any_ped(*iParam0))
	{
		detach_entity(*iParam0, true, true);
	}
	delete_object(iParam0);
}

void func_36(var uParam0, int iParam1)
{
	func_35(&((*uParam0)[iParam1]->f_14));
	(*uParam0)[iParam1]->f_14 = 0;
}

void func_37(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_158(uParam0->f_1[iVar0], iVar0);
		iVar0++;
	}
}

bool func_38(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_115(uParam1, iParam2) != 8 && !is_entity_dead(func_53(uParam1, iParam2)))
	{
		iVar0 = (iParam2 - 1);
		set_ped_config_flag(func_53(uParam1, iParam2), 174, bParam3);
		if (bParam3 == 1)
		{
			Global_1900073->f_2[iParam2] = 0;
			func_197(iParam2, 1);
			set_blocking_of_non_temporary_events(func_53(uParam1, iParam2), true);
			func_198(&(uParam0->f_676), uParam1, iParam2);
			Global_1900073->f_215[iParam2] = 0;
			Global_1900073->f_225[iParam2] = 0;
			Global_1900073->f_235[iParam2] = 0;
			func_178(uParam0, uParam1, iParam2);
			func_104(&((*uParam1)[iParam2]->f_260));
			if (uParam0->f_676.f_2 == 1)
			{
				if (iParam2 == 1)
				{
					_0xd733528b6c35647a(func_53(uParam1, iParam2), 1);
					_0x5bc885ebd75faa7d(func_53(uParam1, iParam2), 1);
				}
				else if (iParam2 == 2)
				{
					_0xd733528b6c35647a(func_53(uParam1, iParam2), 3);
					_0x5bc885ebd75faa7d(func_53(uParam1, iParam2), 3);
				}
			}
		}
		else
		{
			if (uParam0->f_676.f_2 == 0)
			{
				if (!func_80(iParam2, 4096) && func_199(func_53(uParam1, iParam2), 0) == -1415022764)
				{
					set_current_ped_weapon(func_53(uParam1, iParam2), -1569615261, true, 0, false, false);
				}
				set_blocking_of_non_temporary_events(func_53(uParam1, iParam2), false);
			}
			func_138(uParam0, uParam1, iParam2, 0);
			Global_1900073->f_7[iVar0] = -1;
			func_200(uParam1, iParam2, 8);
			Global_1900073->f_2[iParam2] = 0;
			func_52(iParam2, 1);
		}
		if (func_202(func_201(0)) != 11)
		{
			func_164(uParam1, iParam2, bParam3);
			set_entity_load_collision_flag(func_53(uParam1, iParam2), bParam3);
			func_163(func_53(uParam1, iParam2), !bParam3);
			if (func_50(uParam0, 32))
			{
				func_203(&(Global_1900073->f_7[iVar0]), bParam3);
			}
		}
		if (bParam3 == 0)
		{
			func_30((*uParam1)[iParam2], 1, 0, 1);
		}
	}
	return true;
}

void func_39()
{
	Global_1900073->f_7[0] = -1;
	Global_1900073->f_7[1] = -1;
	Global_1900073->f_7[2] = -1;
}

void func_40(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_41(var uParam0)
{
	_text_database_delete("MGFSH");
	_text_database_delete("FISHAUD");
	remove_ptfx_asset();
	release_script_audio_bank();
	_0x531a78d6bf27014b(*uParam0);
}

void func_42(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		_0x247f86595d396344(1493307657);
		set_spawner_info_priority(953996926, 313480217, 3);
		set_spawner_info_priority(953996926, -1227780828, 3);
		set_spawner_info_priority(953996926, -1604520857, 3);
		set_spawner_info_priority(953996926, -1688703117, 3);
		if (uParam0->f_4 == 1)
		{
			set_spawner_info_priority(753476326, -1510975932, 3);
			set_spawner_info_priority(753476326, 168569674, 3);
			set_spawner_info_priority(753476326, -1725785792, 3);
			set_spawner_info_priority(753476326, -1732578984, 3);
		}
		else if (uParam0->f_5 == 1)
		{
			set_spawner_info_priority(753476326, 168569674, 3);
			set_spawner_info_priority(753476326, -1732578984, 3);
		}
		else
		{
			set_spawner_info_priority(753476326, -1510975932, 3);
			set_spawner_info_priority(753476326, 168569674, 3);
			set_spawner_info_priority(753476326, -1725785792, 3);
			set_spawner_info_priority(753476326, -1732578984, 3);
		}
		set_spawner_info_priority(1097366826, 611346020, 3);
		set_spawner_info_priority(1097366826, -1266430074, 3);
		set_spawner_info_priority(1097366826, 190319331, 3);
		set_spawner_info_priority(-1095210956, -1095210956, 3);
		set_spawner_info_priority(-1482332679, -1482332679, 3);
		set_spawner_info_priority(1404193962, 1404193962, 3);
		set_spawner_info_priority(-252502713, -252502713, 3);
		set_spawner_info_priority(207807619, 207807619, 3);
		set_spawner_info_priority(-1477335493, -1477335493, 3);
		set_spawner_info_priority(-1738466917, -1738466917, 3);
		set_spawner_info_priority(-1839535975, -1839535975, 3);
		set_spawner_info_priority(638269552, 638269552, 3);
		set_spawner_info_priority(-1881610067, -1563248673, 3);
		set_spawner_info_priority(-1881610067, 1729337451, 3);
		set_spawner_info_priority(-1881610067, 1031264513, 3);
		set_spawner_info_priority(809951616, -1563248673, 3);
		set_spawner_info_priority(809951616, 1729337451, 3);
		set_spawner_info_priority(809951616, 1031264513, 3);
		set_spawner_info_priority(718901240, -1563248673, 3);
		set_spawner_info_priority(718901240, -1387587743, 3);
		set_spawner_info_priority(718901240, 1119319615, 3);
	}
	else
	{
		clear_spawner_info_priority(953996926, 313480217);
		clear_spawner_info_priority(953996926, -1227780828);
		clear_spawner_info_priority(953996926, -1604520857);
		clear_spawner_info_priority(953996926, -1688703117);
		clear_spawner_info_priority(753476326, -1510975932);
		clear_spawner_info_priority(753476326, 168569674);
		clear_spawner_info_priority(753476326, -1725785792);
		clear_spawner_info_priority(753476326, -1732578984);
		clear_spawner_info_priority(1097366826, 611346020);
		clear_spawner_info_priority(1097366826, -1266430074);
		clear_spawner_info_priority(1097366826, 190319331);
		clear_spawner_info_priority(-1095210956, -1095210956);
		clear_spawner_info_priority(-1482332679, -1482332679);
		clear_spawner_info_priority(1404193962, 1404193962);
		clear_spawner_info_priority(-252502713, -252502713);
		clear_spawner_info_priority(207807619, 207807619);
		clear_spawner_info_priority(-1477335493, -1477335493);
		clear_spawner_info_priority(-1738466917, -1738466917);
		clear_spawner_info_priority(-1839535975, -1839535975);
		clear_spawner_info_priority(638269552, 638269552);
		clear_spawner_info_priority(-1881610067, -1563248673);
		clear_spawner_info_priority(-1881610067, 1729337451);
		clear_spawner_info_priority(-1881610067, 1031264513);
		clear_spawner_info_priority(809951616, -1563248673);
		clear_spawner_info_priority(809951616, 1729337451);
		clear_spawner_info_priority(809951616, 1031264513);
		clear_spawner_info_priority(718901240, -1563248673);
		clear_spawner_info_priority(718901240, -1387587743);
		clear_spawner_info_priority(718901240, 1119319615);
		_0x324ab2a68ad8aee5();
	}
}

void func_43(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (!func_50(uParam0, 64))
		{
			if (func_1())
			{
				reserve_network_client_mission_peds(*uParam1 + 1);
			}
			_0xed9582b3da8f02b4((*uParam1 + uParam0->f_73) + 1);
			func_51(uParam0, 64);
		}
	}
	else if (func_50(uParam0, 64))
	{
		_0x7d4e70a67a651c71((*uParam1 + uParam0->f_73) + 1);
		func_204(uParam0, 64);
	}
}

void func_44()
{
	func_3(1);
	func_3(4);
	Global_1900073->f_16 = 0;
	func_205(0);
	func_206(0);
	Global_1900073->f_215[0] = 0;
	Global_1900073->f_225[0] = 0;
	Global_1900073->f_235[0] = 0;
	Global_1900073->f_153 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1900073->f_2[iVar0] = 0;
		Global_1900073->f_26[iVar0]->f_6 = 0;
		Global_1900073->f_26[iVar0]->f_5 = 0;
		iVar0++;
	}
}

bool func_45(int iParam0)
{
	return func_207(Global_1900073->f_1, iParam0);
}

bool func_46(var uParam0)
{
	if (func_1())
	{
		return false;
	}
	if (((((*uParam0 == 1 || uParam0->f_1 == 1) || uParam0->f_2 == 1) || uParam0->f_3 == 1) || uParam0->f_4 == 1) || uParam0->f_5 == 1)
	{
		return true;
	}
	return false;
}

void func_47()
{
	func_208(0, 0);
	func_208(1, 0);
	func_208(2, 0);
	func_208(3, 0);
	func_209(0, 0);
	func_209(1, 0);
	func_209(2, 0);
	func_209(3, 0);
	func_210(1, 0);
	func_210(2, 0);
	func_210(3, 0);
	func_211(0);
	func_212(0);
	func_205(0);
	func_213(0);
	func_214(1, 0);
	func_214(2, 0);
	func_214(3, 0);
	func_52(0, 2048);
	func_52(1, 2048);
	func_52(2, 2048);
	func_52(3, 2048);
	func_215(0);
	func_206(0);
	func_216(0);
	func_217(0);
	func_218(0);
	func_219(0);
	func_220(0);
	func_221(0);
	func_222(0);
	func_223(0);
	func_224(0);
	func_225(0);
	func_226(0);
	func_175();
	func_227(0f, 0f, 0f);
	_0x160825dadf1b04b3();
	func_3(8);
	func_3(2048);
}

void func_48()
{
	terminate_this_thread();
}

void func_49(int iParam0, int iParam1)
{
	func_228(iParam0, iParam1);
}

bool func_50(var uParam0, int iParam1)
{
	return func_207(uParam0->f_11, iParam1);
}

void func_51(var uParam0, int iParam1)
{
	if (!func_50(uParam0, iParam1))
	{
		func_229(&(uParam0->f_11), iParam1);
	}
}

void func_52(int iParam0, int iParam1)
{
	if (func_80(iParam0, iParam1))
	{
		func_49(Global_1900073->f_2[iParam0], iParam1);
	}
}

int func_53(var uParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		return uParam0[iParam1];
	}
	return player_ped_id();
}

void func_54(var uParam0)
{
	if (is_screen_faded_in())
	{
		set_current_ped_weapon(func_53(uParam0, 0), -1569615261, false, 0, false, false);
	}
	else
	{
		set_current_ped_weapon(func_53(uParam0, 0), -1569615261, true, 0, false, false);
	}
}

bool func_55(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_56(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_57(var uParam0)
{
	if (func_230(148))
	{
		*uParam0 = 1;
	}
	else if (func_230(0))
	{
		uParam0->f_1 = 1;
	}
	else if (func_231(16))
	{
		uParam0->f_2 = 1;
	}
	else if (func_230(96))
	{
		uParam0->f_3 = 1;
	}
	else if (func_124() == 654481153)
	{
		if (func_232() == 581819093)
		{
			uParam0->f_4 = 1;
		}
		else if (func_232() == 687859577)
		{
			uParam0->f_5 = 1;
		}
	}
}

bool func_58()
{
	if (func_26() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_59(var uParam0)
{
	if (((((((((((((func_233() || func_234()) || func_1()) || func_235() == 5) || func_235() == 78) || func_235() == 92) || func_235() == 4) || func_235() == 93) || func_235() == 95) || func_235() == 105) || func_235() == 65) || func_235() == 76) || func_235() == 43) || func_235() == 38)
	{
		*uParam0 = 30;
	}
	else
	{
		*uParam0 = 40;
	}
}

void func_60(var uParam0, var uParam1)
{
	if (!func_1())
	{
		func_52(1, 1);
		func_52(2, 1);
		func_52(3, 1);
		if (uParam0->f_676 == 1)
		{
			uParam0->f_73 = 1;
			func_204(uParam0, 32);
			(*uParam1)[1]->f_1 = -1676898583;
			(*uParam1)[1]->f_2 = "MGFSH_NAME_WV2";
		}
		else if (uParam0->f_676.f_2 == 1)
		{
			uParam0->f_73 = 2;
			func_204(uParam0, 32);
			(*uParam1)[1]->f_1 = 1225208808;
			(*uParam1)[1]->f_2 = "COMP_HOSEA";
			(*uParam1)[2]->f_1 = 1944593012;
			(*uParam1)[2]->f_2 = "COMP_DUTCH";
		}
		else if (uParam0->f_676.f_4 == 1)
		{
			uParam0->f_73 = 1;
			func_51(uParam0, 32);
			(*uParam1)[1]->f_2 = "COMP_JAVIER";
		}
		else if (uParam0->f_676.f_5 == 1)
		{
			uParam0->f_73 = 1;
			func_51(uParam0, 32);
			(*uParam1)[1]->f_2 = "COMP_KIERAN";
		}
		else
		{
			uParam0->f_73 = 0;
		}
	}
	else
	{
		uParam0->f_73 = 0;
	}
	if (uParam0->f_73 > 0)
	{
	}
}

void func_61(var uParam0, var uParam1, int iParam2)
{
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 76)
	{
		iVar0 = iVar1;
		if (iParam2 == 1 || !func_236(uParam0, iVar0))
		{
			func_237(uParam1, iVar0);
		}
		iVar1++;
	}
}

void func_62(var uParam0)
{
	*uParam0 = "MGFSH_Sounds";
	uParam0->f_1 = "Minigame_Fishing_Scenes";
	uParam0->f_2 = "None";
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_4 = "Rod_Equipped";
	uParam0->f_5 = "Cast";
	uParam0->f_6 = "Reel_In";
	uParam0->f_7 = "Fish_On_Line";
	uParam0->f_8 = "Snap";
	uParam0->f_9 = "Caught";
}

void func_63(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam0)[iParam1]->f_79[iVar0] = get_sound_id();
		(*uParam0)[iParam1]->f_84[iVar0] = get_sound_id();
		iVar0++;
	}
	(*uParam0)[iParam1]->f_89 = get_sound_id();
	(*uParam0)[iParam1]->f_90 = get_sound_id();
	(*uParam0)[iParam1]->f_91 = get_sound_id();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		(*uParam0)[iParam1]->f_92[iVar0] = get_sound_id();
		iVar0++;
	}
}

void func_64(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_142(uParam0, uParam1, uParam2, iParam3) != iParam4)
	{
		(*uParam1)[iParam3]->f_4 = iParam4;
		if (func_238(iParam4) && !is_entity_dead(&(uParam2->f_163[iParam4])))
		{
			Global_1900073->f_154[iParam3] = 1;
			Global_1900073->f_159[iParam3] = &uParam2->f_327[iParam4];
			Global_1900073->f_164[iParam3] = &uParam2->f_368[iParam4];
			Global_1900073->f_169[iParam3] = &uParam2->f_409[iParam4];
		}
		else
		{
			Global_1900073->f_154[iParam3] = 0;
			Global_1900073->f_169[iParam3] = 0f;
		}
	}
}

void func_65(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_66()
{
	if (!func_239(&Global_1327479))
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
	func_240(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_67()
{
	iVar3 = 0;
	while (iVar3 < 15)
	{
		iVar1 = iVar3;
		iVar2 = func_192(iVar1);
		iVar0 = func_241(iVar1, 2);
		if (_0x1f56fb3fdb4eaf65(iVar0))
		{
			_0x291cc21d1fb6790e(iVar0);
			if (func_242(iVar2))
			{
				if (!func_245(func_244(func_243(iVar2))))
				{
					func_246(iVar2, 0);
				}
			}
		}
		iVar3++;
	}
}

bool func_68(var uParam0, int iParam1)
{
	bVar1 = get_current_ped_weapon(func_53(uParam0, iParam1), &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == -1415022764);
}

bool func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 1 && func_102(iParam0, 4096, 0))
	{
		return true;
	}
	if (iParam2 == 1 && func_80(iParam0, 524288))
	{
		return true;
	}
	return false;
}

void func_70(var uParam0)
{
	if (((func_247() != 0 || func_248() != 0) || func_249() != 0) || func_250() != 0)
	{
		func_104(&(uParam0->f_12));
	}
	if (func_251(0))
	{
		func_104(&(uParam0->f_15));
	}
}

bool func_71()
{
	return &Global_1898068;
}

void func_72(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_252(uParam0, iVar0);
		iVar0++;
	}
}

void func_73(bool bParam0)
{
	if (func_45(4096))
	{
		_databinding_write_data_bool(Global_1900073->f_247, bParam0);
	}
}

bool func_74(var uParam0)
{
	return func_253(*uParam0, 1);
}

int func_75(var uParam0)
{
	if (!func_74(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_254(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_255() - round((uParam0->f_1 * 1000f)));
}

void func_76(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_77()
{
	Global_1905944->f_5695 = 1;
}

void func_78(bool bParam0)
{
	if (bParam0)
	{
		func_256(4);
	}
	func_256(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_79(var uParam0, int iParam1, int iParam2)
{
	return func_207((*uParam0)[iParam1]->f_3, iParam2);
}

bool func_80(int iParam0, int iParam1)
{
	return func_207(&(Global_1900073->f_2[iParam0]), iParam1);
}

void func_81(var uParam0, int iParam1)
{
	if (does_entity_exist(func_257(iParam1)))
	{
		vVar2 = { func_258(iParam1) };
		bVar5 = test_vertical_probe_against_all_water(func_259(vVar2, 1092616192), 0, &fVar0);
		bVar6 = get_ground_z_for_3d_coord(func_259(vVar2, 1092616192), &fVar1, false);
		if (bVar5 == 1 && bVar6 == 1)
		{
			(*uParam0)[iParam1]->f_19 = (vVar2.z - fVar0);
			(*uParam0)[iParam1]->f_20 = (fVar0 - fVar1);
		}
		else
		{
			(*uParam0)[iParam1]->f_19 = -99999f;
			(*uParam0)[iParam1]->f_20 = -99999f;
		}
	}
}

void func_82(var uParam0, int iParam1)
{
	if (does_entity_exist(func_260(iParam1)))
	{
		vVar2 = { func_261(iParam1) };
		bVar5 = test_vertical_probe_against_all_water(func_259(vVar2, 1092616192), 0, &fVar0);
		bVar6 = get_ground_z_for_3d_coord(func_259(vVar2, 1092616192), &fVar1, false);
		if (bVar5 == 1 && bVar6 == 1)
		{
			(*uParam0)[iParam1]->f_21 = (vVar2.z - fVar0);
			(*uParam0)[iParam1]->f_22 = (fVar0 - fVar1);
		}
		else
		{
			(*uParam0)[iParam1]->f_21 = -99999f;
			(*uParam0)[iParam1]->f_22 = -99999f;
		}
	}
}

void func_83(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (&Global_1900073->f_154[iParam3] == 1)
	{
		iVar3 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar3) && !is_entity_dead(&(uParam2->f_163[iVar3])))
		{
			vVar0 = { func_262(uParam2, iVar3) };
		}
	}
	else if (func_263(&(Global_1900073->f_154[iParam3])))
	{
		if (does_entity_exist((*uParam1)[iParam3]->f_13))
		{
			vVar0 = { func_264(uParam1, iParam3) };
		}
	}
	if (!func_55(vVar0))
	{
		bVar6 = test_vertical_probe_against_all_water(func_259(vVar0, 1092616192), 0, &fVar4);
		bVar7 = get_ground_z_for_3d_coord(func_259(vVar0, 1092616192), &fVar5, false);
		if (bVar6 == 1 && bVar7 == 1)
		{
			(*uParam1)[iParam3]->f_23 = (vVar0.z - fVar4);
			(*uParam1)[iParam3]->f_24 = (fVar4 - fVar5);
		}
		else
		{
			(*uParam1)[iParam3]->f_23 = -99999f;
			(*uParam1)[iParam3]->f_24 = -99999f;
		}
	}
}

void func_84(var uParam0, var uParam1)
{
	if (func_50(uParam0, 8))
	{
		return;
	}
	func_51(uParam0, 8);
	if (func_45(32))
	{
		func_265(uParam1, Global_1900073->f_152, 1);
	}
	else
	{
		func_265(uParam1, 0, 1);
	}
	uParam1->f_706 = func_266();
	func_267(&(uParam1->f_1161));
	func_104(&(uParam1->f_702));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_196(uParam1, iVar0);
		iVar0++;
	}
}

void func_85(var uParam0, var uParam1)
{
	if (func_50(uParam0, 262144))
	{
		return;
	}
	func_51(uParam0, 262144);
	if (func_46(&(uParam0->f_676)))
	{
		return;
	}
	iVar0 = func_268(uParam1);
	iVar1 = func_269(iVar0);
	if (!func_87(iVar1))
	{
		return;
	}
	iVar2 = func_241(iVar1, 2);
	if (iVar2 == 0)
	{
		return;
	}
	iVar3 = func_270(iVar0);
	if (iVar3 == 0)
	{
		return;
	}
	func_271(&iVar4, Global_36, 0f, 0f, 0f, 100f, 100f, 100f);
	iVar6 = create_itemset(true);
	iVar7 = _0x886171a12f400b89(iVar4, iVar6, 1);
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < iVar7)
	{
		iVar5 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar8, iVar6));
		if ((does_entity_exist(iVar5) && get_entity_model(iVar5) == iVar2) && _0x30569f348d126a5a(iVar5) == iVar3)
		{
			destroy_itemset(iVar6);
			func_188(iVar4);
			func_51(uParam0, 524288);
			return;
		}
		iVar8++;
	}
	destroy_itemset(iVar6);
	func_188(iVar4);
}

void func_86(var uParam0)
{
	if (Global_1900073->f_16 == 0)
	{
		return;
	}
	Global_1900073->f_16 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_272(uParam0, iVar0, 11);
		iVar0++;
	}
}

bool func_87(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 14);
}

bool func_88(int iParam0)
{
	return iParam0 == 0;
}

bool func_89(int iParam0)
{
	if (((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
	{
		return true;
	}
	return false;
}

bool func_90(var uParam0, int iParam1)
{
	if (iParam1 == 1 && !is_entity_dead(&(uParam0->f_163[iParam1])))
	{
		if (&Global_1900073->f_26[0] == 1 || &Global_1900073->f_26[0] == 2)
		{
			return true;
		}
	}
	return false;
}

void func_91(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 0 || iParam2 == 1)
	{
		func_272(uParam1, iParam2, 1);
	}
	else if (func_273(uParam0, iParam2))
	{
		func_272(uParam1, iParam2, 1);
	}
	else if (Global_1900073->f_152 == 0)
	{
		func_272(uParam1, iParam2, 2);
	}
	else
	{
		func_272(uParam1, iParam2, 1);
	}
}

void func_92(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_274(uParam0, uParam1, uParam2, iParam3))
	{
		func_272(uParam2, iParam3, 3);
	}
}

void func_93(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_275(uParam0, uParam1, uParam2, iParam3))
	{
		func_272(uParam2, iParam3, 3);
	}
	else if (func_276(uParam2, iParam3) && func_277(uParam2))
	{
		func_272(uParam2, iParam3, 1);
	}
}

void func_94(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_278(uParam0, uParam2, iParam3))
	{
		func_279(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_95(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_276(uParam2, iParam3))
	{
		return;
	}
	if (func_280(uParam0, uParam1, uParam2->f_163[iParam3], func_88(iParam3)))
	{
		func_272(uParam2, iParam3, 11);
	}
	else if (func_281(uParam1, uParam2, iParam3))
	{
		func_282(uParam0, uParam1, uParam2, iParam3);
	}
	else if (func_88(iParam3))
	{
		func_283(uParam0, uParam1, uParam2, iParam3);
	}
	else if (iParam3 == 1)
	{
		func_284(uParam0, uParam1, uParam2, iParam3);
	}
	else if (((!func_285(&(uParam2->f_163[iParam3]), 1139527981) && !func_285(&(uParam2->f_163[iParam3]), 518218985)) && !func_285(&(uParam2->f_163[iParam3]), -773337285)) && !is_ped_fleeing(&(uParam2->f_163[iParam3])))
	{
		set_blocking_of_non_temporary_events(&(uParam2->f_163[iParam3]), false);
		task_animal_unalerted(&(uParam2->f_163[iParam3]), -1, 0, 0, 0);
	}
}

void func_96(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_194(uParam0, uParam1, uParam2, iParam3);
	if (iVar0 == -1)
	{
		func_282(uParam0, uParam1, uParam2, iParam3);
	}
	else if (iVar0 != -1 && !func_285(&(uParam2->f_163[iParam3]), 1227113341))
	{
		if (!_0x88ad6cc10d8d35b2(&(uParam2->f_163[iParam3])))
		{
			set_entity_as_mission_entity(&(uParam2->f_163[iParam3]), true, true);
		}
		set_blocking_of_non_temporary_events(&(uParam2->f_163[iParam3]), true);
		clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
		task_go_to_entity(&(uParam2->f_163[iParam3]), func_260(iVar0), -1, 0f, 2f, 0f, 0);
	}
}

void func_97(var uParam0, var uParam1, var uParam2, int iParam3)
{
	set_ped_reset_flag(&(uParam2->f_163[iParam3]), 64, true);
	iVar0 = func_194(uParam0, uParam1, uParam2, iParam3);
	if (iVar0 != -1 && &Global_1900073->f_26[iVar0] == 7)
	{
		if ((*uParam1)[iVar0]->f_233 != 9)
		{
			func_286(uParam0, uParam1, uParam2, iParam3, iVar0);
		}
		func_287(uParam1, uParam2, iParam3, iVar0);
		func_288(uParam0, uParam1, uParam2, iParam3, iVar0);
		func_289(uParam0, uParam1, uParam2, iParam3, iVar0);
	}
}

void func_98(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (&uParam2->f_614[iParam3] == 0)
	{
		clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
		set_ped_config_flag(&(uParam2->f_163[iParam3]), 436, true);
		task_animal_unalerted(&(uParam2->f_163[iParam3]), -1, 0, 0, 0);
		uParam2->f_614[iParam3] = 1;
	}
	else if (!get_ped_config_flag(&(uParam2->f_163[iParam3]), 436, true))
	{
		func_282(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_99(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (is_entity_dead(&(uParam2->f_163[iParam3])))
	{
		func_272(uParam2, iParam3, 11);
		return;
	}
	if (func_107(uParam2->f_777[iParam3]) >= 6f)
	{
		clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
		func_279(uParam0, uParam1, uParam2, iParam3);
	}
	else if (!func_74(uParam2->f_898[iParam3]) || func_75(uParam2->f_898[iParam3]) >= 250)
	{
		func_104(uParam2->f_898[iParam3]);
		if ((!func_285(&(uParam2->f_163[iParam3]), 518218985) && !func_285(&(uParam2->f_163[iParam3]), -773337285)) && !is_ped_fleeing(&(uParam2->f_163[iParam3])))
		{
			set_blocking_of_non_temporary_events(&(uParam2->f_163[iParam3]), true);
			clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
			task_smart_flee_coord(&(uParam2->f_163[iParam3]), *uParam2->f_1019[iParam3], 10f, 6000, 8, 1077936128);
		}
	}
}

void func_100(var uParam0, int iParam1)
{
	if (func_285(&(uParam0->f_163[iParam1]), 1227113341))
	{
		clear_ped_tasks(&(uParam0->f_163[iParam1]), 1, 0);
	}
	set_ped_reset_flag(&(uParam0->f_163[iParam1]), 64, true);
}

void func_101(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_276(uParam2, iParam3))
	{
		func_29(uParam0, uParam1, uParam2, iParam3, 1, 0);
	}
}

bool func_102(int iParam0, int iParam1, int iParam2)
{
	if (func_207(Global_1900073->f_26[iParam0]->f_5, iParam1))
	{
		if (iParam2 == 1)
		{
		}
		return true;
	}
	return false;
}

void func_103()
{
	if (Global_1900073->f_11 == 1)
	{
		return;
	}
	func_290(1);
}

void func_104(var uParam0)
{
	func_291(uParam0, 0f);
}

void func_105(var uParam0, int iParam1)
{
	if (uParam0->f_683 != iParam1)
	{
		uParam0->f_683 = iParam1;
	}
}

bool func_106(var uParam0)
{
	if ((func_55(uParam0->f_701) && func_58()) && get_distance_between_coords(Global_36, func_292(4), true) < 100f)
	{
		uParam0->f_701 = { 2186.408f, -1494.255f, 40.8597f };
	}
	if (!func_55(uParam0->f_701))
	{
		return true;
	}
	if (uParam0->f_697 == 0)
	{
		_0x0e184495b27bb57d();
		uParam0->f_687.f_1 = _0x74f0209674864cbd();
		_0xe9225354fb7437a7(uParam0->f_687.f_1, 1);
		_0x5d9b0baaf04cf65b(uParam0->f_687.f_1, 50, 2, 0);
		_0x5d9b0baaf04cf65b(uParam0->f_687.f_1, 44, 1, 0);
		_0x5d9b0baaf04cf65b(uParam0->f_687.f_1, 64, 1, 0);
		_0x885d19ac2b6fbff4(uParam0->f_687.f_1, 1);
		_0x2b8af29a78024bd3(uParam0->f_687.f_1);
		uParam0->f_697 = 1;
	}
	if (_0x1ac5a8ab50cfaa33(uParam0->f_687.f_1))
	{
		uParam0->f_696 = _0x0365000d8bf86531(&(uParam0->f_687.f_1));
	}
	else
	{
		func_112(uParam0);
		return false;
	}
	switch (uParam0->f_696)
	{
		case 0:
			uParam0->f_697 = 0;
			break;
		case 3:
			uParam0->f_709++;
			uParam0->f_701 = { _0x865732725536ee39(&(uParam0->f_687.f_1)) };
			if (!func_293(uParam0->f_701))
			{
				func_294(uParam0);
			}
			return true;
		case 4:
			uParam0->f_709++;
			func_112(uParam0);
			if (uParam0->f_709 > 5)
			{
				func_294(uParam0);
				return true;
			}
			break;
	}
	return false;
}

float func_107(var uParam0)
{
	if (!func_74(uParam0))
	{
		return 0f;
	}
	if (func_254(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_295() - uParam0->f_1);
}

bool func_108(var uParam0, var uParam1)
{
	if (func_55(uParam0->f_698) || func_55(uParam0->f_701))
	{
		return false;
	}
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	uParam0->f_704 = func_296(uParam0->f_701, uParam0->f_698);
	_set_entity_coords_and_heading(func_53(uParam1, 0), uParam0->f_701, uParam0->f_704, true, true, true);
	uParam0->f_36 = { uParam0->f_701 };
	return true;
}

bool func_109(var uParam0)
{
	if (func_107(&(uParam0->f_684)) > 5f)
	{
		return true;
	}
	if (!_0xcf45df50c7775f2a())
	{
		_0x513f8aa5bf2f17cf(uParam0->f_701, 50f, 0);
		_0xa8432a14d4dc2101(uParam0->f_701);
	}
	else if (_0x0909f71b5c070797() && _0xda8b2eaf29e872e2(uParam0->f_701))
	{
		return true;
	}
	return false;
}

bool func_110(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (((((((func_297() || func_298(&(uParam0->f_105), iParam1)) || func_182(&(uParam0->f_105[iParam1]))) || func_299(iParam1)) || func_300(&(uParam0->f_105), iParam1)) || ((iParam2 == 0 && func_74(&(uParam0->f_105.f_460))) && func_75(&(uParam0->f_105.f_460)) < 3000)) || (iParam2 == 0 && func_301())) || (uParam0->f_683 >= 1 && uParam0->f_683 <= 4))
	{
		return false;
	}
	func_103();
	if (iParam1 == 61)
	{
		uParam0->f_105[iParam1] = func_304(_create_var_string(10, func_302(iParam1), func_303(&(Global_1900073->f_159[0]))), iParam3, 0, 0, 0, 1);
	}
	else
	{
		uParam0->f_105[iParam1] = func_304(func_302(iParam1), iParam3, 0, 0, 0, 1);
	}
	if (iParam4 == 1)
	{
		uParam0->f_105.f_77[iParam1] = 1;
	}
	func_104(&(uParam0->f_105.f_460));
	return true;
}

void func_111()
{
	func_256(1);
}

void func_112(var uParam0)
{
	uParam0->f_687.f_1 = _0xe1c105e6bba48270();
	uParam0->f_701 = { 0f, 0f, 0f };
	uParam0->f_697 = 0;
	uParam0->f_687 = 0;
	uParam0->f_687.f_3 = { 0f, 0f, 0f };
	uParam0->f_687.f_2 = 0;
}

bool func_113(var uParam0)
{
	if (func_50(uParam0, 4))
	{
		return true;
	}
	if (func_1() || uParam0->f_73 == 0)
	{
		return false;
	}
	func_39();
	if (func_50(uParam0, 32))
	{
		if (!func_305(&(Global_1900073->f_7), 0))
		{
			return false;
		}
		if (uParam0->f_73 > 1)
		{
		}
		if (uParam0->f_73 > 2)
		{
		}
	}
	else if (uParam0->f_676 == 1)
	{
	}
	else if (uParam0->f_676.f_2 == 1)
	{
	}
	func_51(uParam0, 4);
	return true;
}

void func_114(var uParam0, var uParam1, int iParam2)
{
	if ((func_115(uParam1, iParam2) != 0 && func_115(uParam1, iParam2) != 7) && func_115(uParam1, iParam2) != 8)
	{
		if (is_entity_dead(func_53(uParam1, iParam2)))
		{
			func_200(uParam1, iParam2, 7);
		}
		else
		{
			set_ped_reset_flag(func_53(uParam1, iParam2), 134, true);
			set_ped_reset_flag(func_53(uParam1, iParam2), 12, true);
			if (func_80(iParam2, 1024))
			{
				func_200(uParam1, iParam2, 7);
			}
			else if ((!func_80(iParam2, 2) && func_9(uParam0) == 4) && Global_1900073->f_13 == 0)
			{
				func_197(iParam2, 2);
			}
			else if (func_69(iParam2, 1, 1) && func_80(iParam2, 32768))
			{
				_0x88fd60d846d9cd63(func_53(uParam1, iParam2));
			}
		}
	}
}

int func_115(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1]->f_5;
}

void func_116(var uParam0, var uParam1, int iParam2)
{
	if (&Global_1900073->f_174[iParam2] == 0 && !does_entity_exist(func_53(uParam1, iParam2)))
	{
		if (func_50(uParam0, 32))
		{
			if (func_306(&(Global_1900073->f_7[(iParam2 - 1)]), 0))
			{
				(*uParam1)[iParam2] = Global_1360165[&Global_1900073->f_7[(iParam2 - 1)]];
			}
		}
		else
		{
			func_307(uParam1, iParam2);
		}
	}
	if (!is_entity_dead(func_53(uParam1, iParam2)) && func_38(uParam0, uParam1, iParam2, 1))
	{
		if (func_69(iParam2, 1, 1))
		{
			func_200(uParam1, iParam2, 1);
		}
		else
		{
			func_200(uParam1, iParam2, 2);
		}
	}
}

void func_117(var uParam0, int iParam1)
{
	if (func_74(&((*uParam0)[iParam1]->f_260)) && func_75(&((*uParam0)[iParam1]->f_260)) < (iParam1 - 1) * 500)
	{
		return;
	}
	if (is_ped_in_any_vehicle(func_53(uParam0, iParam1), false))
	{
		if (!func_285(func_53(uParam0, iParam1), -828834893))
		{
			task_leave_any_vehicle(func_53(uParam0, iParam1), 0, 67108864);
		}
	}
	else
	{
		func_200(uParam0, iParam1, 2);
	}
}

void func_118(var uParam0, var uParam1, int iParam2)
{
	if (func_74(&((*uParam1)[iParam2]->f_260)) && func_75(&((*uParam1)[iParam2]->f_260)) < (iParam2 - 1) * 500)
	{
		return;
	}
	if (!has_ped_got_weapon(func_53(uParam1, iParam2), -1415022764, 0, false))
	{
		_give_weapon_to_ped_2(func_53(uParam1, iParam2), -1415022764, 1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	if (has_ped_got_weapon(func_53(uParam1, iParam2), -1415022764, 0, false) && !func_285(func_53(uParam1, iParam2), 716706914))
	{
		if (func_199(func_53(uParam1, iParam2), 0) != -1415022764)
		{
			if (func_308())
			{
				set_current_ped_weapon(func_53(uParam1, iParam2), -1415022764, true, 0, false, false);
			}
			else
			{
				set_current_ped_weapon(func_53(uParam1, iParam2), -1415022764, false, 0, false, false);
				task_swap_weapon(func_53(uParam1, iParam2), 1, 0, 0, 0);
			}
			_0x2208438012482a1a(func_53(uParam1, iParam2), false, false);
		}
		else
		{
			if (func_69(iParam2, 1, 1))
			{
				if (!func_138(uParam0, uParam1, iParam2, 1))
				{
					return;
				}
			}
			func_309(uParam0, uParam1, iParam2, 1059426360, 0, 1);
			func_52(iParam2, 128);
			func_200(uParam1, iParam2, 3);
		}
	}
}

void func_119(var uParam0, int iParam1)
{
	func_310(uParam0, iParam1);
	if (func_311(uParam0, iParam1))
	{
		func_312(uParam0, iParam1);
		func_200(uParam0, iParam1, 4);
	}
}

void func_120(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_80(iParam3, 2) && (&Global_1900073->f_26[iParam3] == 1 || &Global_1900073->f_26[iParam3] == 2))
	{
		func_200(uParam1, iParam3, 5);
	}
	else
	{
		func_141(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_121(var uParam0, int iParam1)
{
	if (!func_285(func_53(uParam0, iParam1), 716706914))
	{
		if (!func_80(iParam1, 4096) && func_199(func_53(uParam0, iParam1), 0) == -1415022764)
		{
			if (func_313())
			{
				set_current_ped_weapon(func_53(uParam0, iParam1), -1569615261, true, 0, false, false);
			}
			else
			{
				set_current_ped_weapon(func_53(uParam0, iParam1), -1569615261, false, 0, false, false);
				task_swap_weapon(func_53(uParam0, iParam1), 1, 0, 0, 0);
			}
			_0x2208438012482a1a(func_53(uParam0, iParam1), false, false);
		}
		else
		{
			if (func_80(iParam1, 512))
			{
				func_200(uParam0, iParam1, 7);
			}
			else
			{
				func_200(uParam0, iParam1, 6);
			}
			func_52(iParam1, 256);
		}
	}
}

void func_122(var uParam0, int iParam1)
{
	if (func_80(iParam1, 512))
	{
		func_200(uParam0, iParam1, 7);
	}
	else if (((!func_80(iParam1, 2) && func_68(uParam0, 0)) || (func_80(iParam1, 2) && func_80(iParam1, 256))) || func_68(uParam0, iParam1))
	{
		if (func_69(iParam1, 1, 1))
		{
			func_200(uParam0, iParam1, 1);
		}
		else
		{
			func_200(uParam0, iParam1, 2);
		}
		func_52(iParam1, 2);
	}
}

void func_123(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_186(uParam1, iParam3);
	func_187(uParam0, uParam1, uParam2, iParam3, 0, 0, 0);
	func_36(uParam1, iParam3);
	func_38(uParam0, uParam1, iParam3, 0);
}

int func_124()
{
	return Global_1391438->f_414;
}

int func_125(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		iVar0 = func_127(iParam0, iParam1);
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

int func_126(int iParam0)
{
	if (!func_239(iParam0))
	{
		return 0;
	}
	return &(Global_17504.f_42[iParam0]);
}

int func_127(int iParam0, int iParam1)
{
	iVar0 = func_314(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

bool func_128(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_129(int iParam0)
{
	iVar0 = func_315(func_130(), iParam0);
	return func_316(iVar0) > 0;
}

int func_130()
{
	return Global_40.f_4283;
}

bool func_131(int iParam0)
{
	if (func_317(iParam0, 2048))
	{
		return true;
	}
	if (func_317(iParam0, 4096))
	{
		return Global_1327479->f_5 < get_game_timer();
	}
	return Global_1327479->f_4 < get_game_timer();
}

void func_132(int iParam0, bool bParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7)
{
	if (!func_239(iParam0) && !bParam7)
	{
		return;
	}
	if (Global_1310750->f_16071 != -1 && !bParam6)
	{
		return;
	}
	func_66();
	if (iParam5 == -1)
	{
		iParam5 = player_id();
	}
	Global_1310750->f_16103 = { vParam2 };
	Global_1327479 = iParam0;
	Global_1327479->f_1 = iParam5;
	Global_1327479->f_10 = func_318(iParam0, vParam2);
	func_240(0);
	func_319(0, 0, 1);
	if (bParam1)
	{
		Global_1310750->f_16077 = 0;
		Global_1310750->f_16071 = -1;
		Global_1310750->f_16075 = 1;
		Global_17504.f_42[iParam0]->f_4 = 0;
		func_320(8);
		func_321(Global_36, 1137180672);
	}
	if (bParam7)
	{
		Global_1310750->f_16076 = 1;
	}
}

void func_133()
{
	_text_database_request("MGFSH");
	_text_database_request("FISHAUD");
	request_ptfx_asset();
}

bool func_134(var uParam0)
{
	if (!func_50(uParam0, 1))
	{
		return false;
	}
	if ((!is_string_null_or_empty("MGFSH") && _does_text_database_exist("MGFSH")) && !_text_database_has_loaded("MGFSH"))
	{
		return false;
	}
	if ((!is_string_null_or_empty("FISHAUD") && _does_text_database_exist("FISHAUD")) && !_text_database_has_loaded("FISHAUD"))
	{
		return false;
	}
	if (!has_ptfx_asset_loaded())
	{
		return false;
	}
	if (!_0xd9130842d7226045(*uParam0, 1))
	{
		return false;
	}
	if (!_0x5e420ff293ee5472())
	{
	}
	return true;
}

void func_135(var uParam0, var uParam1)
{
	if ((!func_322() || func_68(uParam1, 0)) || func_285(func_53(uParam1, 0), 716706914))
	{
		uParam0->f_18 = 0;
		func_323(uParam0, 0);
		func_324(uParam0);
	}
	else if (Global_1935496->f_30 == -1415022764)
	{
		uParam0->f_18 = Global_1935496->f_30;
		func_323(uParam0, 1);
		func_326(uParam0, 2, !func_325(&(uParam0->f_25), 4));
		func_327(&(uParam0->f_25), 4);
		func_328(uParam0, 2);
	}
	else if (func_329())
	{
		uParam0->f_18 = Global_1935496->f_30;
		func_323(uParam0, 1);
		func_326(uParam0, 1, !func_325(&(uParam0->f_25), 2));
		func_327(&(uParam0->f_25), 2);
		func_328(uParam0, 1);
	}
	else if (uParam0->f_18 != -1415022764)
	{
		func_323(uParam0, 1);
		func_326(uParam0, 0, !func_325(&(uParam0->f_25), 1));
		func_327(&(uParam0->f_25), 1);
		func_328(uParam0, 0);
	}
	else
	{
		func_324(uParam0);
	}
}

bool func_136(var uParam0)
{
	if (is_entity_dead(Global_1900073->f_194))
	{
		if (is_ped_in_any_vehicle(func_53(uParam0, 0), true))
		{
			Global_1900073->f_194 = get_vehicle_ped_is_in(func_53(uParam0, 0), false);
		}
		else
		{
			iVar0 = get_closest_vehicle(Global_36, 10f, 0, 75782);
			if (!is_entity_dead(iVar0))
			{
				Global_1900073->f_194 = iVar0;
			}
		}
		if (does_entity_exist(Global_1900073->f_194))
		{
			vVar1 = { get_entity_coords(Global_1900073->f_194, true, false) };
			vVar4 = { get_entity_rotation(Global_1900073->f_194, 2) };
		}
	}
	return !is_entity_dead(Global_1900073->f_194);
}

bool func_137(var uParam0, bool bParam1)
{
	if ((bParam1 == 1 && func_50(uParam0, 16384)) || (bParam1 == 0 && !func_50(uParam0, 16384)))
	{
		return true;
	}
	if (!is_entity_dead(Global_1900073->f_194))
	{
		if (bParam1 == 1)
		{
			bring_vehicle_to_halt(Global_1900073->f_194, 0.1f, 1, false);
		}
		set_boat_anchor(Global_1900073->f_194, bParam1);
		_set_boat_frozen_when_anchored(Global_1900073->f_194, bParam1, 0);
		set_vehicle_is_considered_by_player(Global_1900073->f_194, !bParam1);
		if (bParam1 == 1)
		{
			func_51(uParam0, 16384);
		}
		else
		{
			func_204(uParam0, 16384);
		}
		return true;
	}
	return false;
}

bool func_138(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 1)
	{
		if (!func_80(iParam2, 16384) && !is_entity_dead(Global_1900073->f_194))
		{
			func_197(iParam2, 16384);
			fVar0 = get_entity_heading(Global_1900073->f_194);
			(*uParam1)[iParam2]->f_258 = func_330(&(uParam0->f_676), iParam2);
			(*uParam1)[iParam2]->f_259 = func_331(iParam2);
			(*uParam1)[iParam2]->f_10 = func_332((fVar0 + (*uParam1)[iParam2]->f_258), 0f, 360f);
		}
		return func_80(iParam2, 16384);
	}
	else
	{
		func_52(iParam2, 8192);
		func_52(iParam2, 16384);
		func_52(iParam2, 32768);
		func_52(iParam2, 524288);
		func_333(iParam2, 65536);
		return true;
	}
	return false;
}

bool func_139(var uParam0, int iParam1)
{
	if (!func_80(iParam1, 16384))
	{
		return false;
	}
	if (func_80(iParam1, 32768))
	{
		return true;
	}
	if (iParam1 == 0 && is_ped_in_any_vehicle(func_53(uParam0, iParam1), true))
	{
		if (!func_285(func_53(uParam0, iParam1), -828834893))
		{
			task_leave_any_vehicle(func_53(uParam0, iParam1), 0, 67108864);
		}
		return false;
	}
	if (func_80(iParam1, 8192))
	{
		iVar0 = 0;
		if (iParam1 != 0)
		{
			iVar0 = 2;
		}
		_0x517d01bf27b682d1(func_53(uParam0, iParam1), Global_1900073->f_194, 0f, 0f, 0f, func_154((*uParam0)[iParam1]->f_258), iVar0);
		func_153(iParam1, 65536, 1);
	}
	func_197(iParam1, 32768);
	return func_80(iParam1, 32768);
}

bool func_140(var uParam0, var uParam1, int iParam2)
{
	if (!func_68(uParam1, iParam2))
	{
		return true;
	}
	if (!does_entity_exist(func_334(uParam1, iParam2)))
	{
		return true;
	}
	if (iParam2 == 0)
	{
		if (is_ped_in_combat(func_53(uParam1, iParam2), 0))
		{
			if (func_68(uParam1, iParam2))
			{
				set_current_ped_weapon(func_53(uParam1, iParam2), -1569615261, false, 0, false, false);
			}
			return true;
		}
		if (Global_1900073->f_17 == 0)
		{
			if (func_68(uParam1, iParam2))
			{
				set_current_ped_weapon(func_53(uParam1, iParam2), -1569615261, false, 0, false, false);
			}
			return true;
		}
		if (func_80(iParam2, 2) && (&Global_1900073->f_26[iParam2] == 1 || &Global_1900073->f_26[iParam2] == 2))
		{
			if (func_68(uParam1, iParam2))
			{
				set_current_ped_weapon(func_53(uParam1, iParam2), -1569615261, false, 0, false, false);
			}
			return true;
		}
		if (Global_1935496->f_25 == 1)
		{
			Global_1935496->f_25 = 0;
			func_104(&(uParam0->f_102));
			if (func_68(uParam1, iParam2))
			{
				set_current_ped_weapon(func_53(uParam1, iParam2), -1569615261, false, 0, false, false);
			}
			return true;
		}
	}
	return false;
}

void func_141(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		if (uParam0->f_676.f_1 == 1)
		{
			func_335(1380607804);
		}
		else if (uParam0->f_676 == 1)
		{
			func_335(1815744868);
		}
		else if (uParam0->f_676.f_4 == 1)
		{
			if (!func_45(128))
			{
				func_336();
			}
			else
			{
				func_335(-1753819339);
			}
		}
		else if (uParam0->f_676.f_2 == 1)
		{
			func_335(-978159653);
		}
		else
		{
			func_336();
		}
	}
	func_337(uParam1, uParam2, iParam3);
	switch (&Global_1900073->f_26[iParam3])
	{
		case 0:
			func_338(uParam0, iParam3);
			break;
		case 1:
			func_339(uParam0, uParam1, uParam2, iParam3);
			break;
		case 2:
			func_340(uParam0, uParam1, uParam2, iParam3);
			break;
		case 3:
			func_341(uParam0, iParam3);
			break;
		case 4:
			func_342(uParam0, uParam1, uParam2, iParam3);
			break;
		case 5:
			func_343(uParam0, uParam1, uParam2, iParam3);
			break;
		case 6:
			func_344(uParam0, uParam1, uParam2, iParam3);
			break;
		case 7:
			func_345(uParam0, uParam1, uParam2, iParam3);
			break;
		case 8:
			func_346(uParam0, iParam3);
			break;
		case 9:
			func_347(uParam0, uParam1, uParam2, iParam3);
			break;
		case 10:
			func_348(uParam0, uParam1, uParam2, iParam3);
			break;
		case 11:
			func_349(uParam0, uParam1, uParam2, iParam3);
			break;
		case 12:
			func_350(uParam0, uParam1, uParam2, iParam3);
			break;
		case 13:
			func_351(uParam0, iParam3);
			break;
	}
	if (iParam3 == 0)
	{
		_uiprompt_disable_prompt_type_this_frame(9);
		func_172(uParam0, 1);
		func_352(uParam0);
		func_353(uParam0, uParam1);
		func_354(uParam0, uParam1);
		func_355(uParam0, uParam1, uParam2);
		if ((func_69(iParam3, 1, 1) && !_does_volume_exist(uParam0->f_65)) && !is_entity_dead(Global_1900073->f_194))
		{
			func_356(&(uParam0->f_65), get_entity_coords(Global_1900073->f_194, true, false), 0f, 0f, get_entity_heading(Global_1900073->f_194), 3f, 6.7f, 50f, "volumeBoat");
		}
		if (is_control_just_pressed(0, -1304887797))
		{
			func_153(iParam3, 32768, 1);
		}
		if (!func_357())
		{
			disable_control_action(0, 1287709438, false);
		}
	}
}

int func_142(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 < 0 || iParam3 > func_31(uParam0))
	{
	}
	if ((*uParam1)[iParam3]->f_4 >= *uParam2)
	{
	}
	return (*uParam1)[iParam3]->f_4;
}

bool func_143(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_80(iParam2, 4) || func_80(iParam2, 8))
	{
		return false;
	}
	if (((&Global_1900073->f_26[iParam2] == 6 && (*uParam0)[iParam2]->f_74 == 0) && func_238(iParam3)) && !is_entity_dead(&(uParam1->f_163[iParam3])))
	{
		return true;
	}
	return false;
}

float func_144(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return 0f;
	}
	return (&uParam2->f_409[iVar0] / uParam2->f_706);
}

bool func_145(var uParam0, int iParam1, int iParam2)
{
	if ((((&Global_1900073->f_26[iParam1] == 7 || &Global_1900073->f_26[iParam1] == 12) && &Global_1900073->f_154[iParam1] == 1) && func_238(iParam2)) && !is_entity_dead(&(uParam0->f_163[iParam2])))
	{
		return true;
	}
	return false;
}

bool func_146(var uParam0, int iParam1)
{
	return &uParam0->f_204[iParam1] == 6;
}

float func_147(var uParam0, int iParam1)
{
	return func_358((to_float((*uParam0)[iParam1]->f_205) / 200f), 0f, 1f);
}

float func_148(var uParam0, int iParam1)
{
	return func_358((to_float((*uParam0)[iParam1]->f_206) / 200f), 0f, 1f);
}

float func_149(var uParam0, int iParam1)
{
	return func_358((to_float((*uParam0)[iParam1]->f_207) / 200f), 0f, 1f);
}

bool func_150(var uParam0, int iParam1)
{
	if (((&Global_1900073->f_26[iParam1] == 7 || &Global_1900073->f_26[iParam1] == 12) && &Global_1900073->f_154[iParam1] == 2) && does_entity_exist((*uParam0)[iParam1]->f_13))
	{
		return true;
	}
	return false;
}

float func_151(var uParam0, var uParam1, int iParam2)
{
	fVar0 = (func_359(uParam0, iParam2) / uParam1->f_706);
	return func_358(fVar0, 0f, 1f);
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_153(int iParam0, int iParam1, int iParam2)
{
	if (!func_360(iParam0, iParam1))
	{
		func_229(&(Global_1900073->f_26[iParam0]->f_6), iParam1);
		if (iParam2 == 1)
		{
		}
	}
}

float func_154(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

bool func_155(int iParam0, bool bParam1, bool bParam2)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (!is_player_playing(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (network_is_in_session())
		{
			iVar0 = iParam0;
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return false;
			}
			if (!&Global_1051044->f_1[iVar0])
			{
				return false;
			}
		}
	}
	return true;
}

bool func_156(int iParam0)
{
	bVar1 = get_current_ped_weapon(iParam0, &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == -1415022764);
}

void func_157(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_30 = _0xf3735acd11acd500(iParam1, uParam0);
	func_361(uParam0, iParam1);
	switch (*uParam0)
	{
		case 0:
			func_362(uParam0, iParam1, iParam2);
			break;
		case 1:
			func_363(uParam0, iParam1, iParam2);
			break;
		case 2:
			func_364(uParam0, iParam1, iParam2);
			break;
		case 3:
			func_365(uParam0, iParam1, iParam2);
			break;
		case 4:
			func_366(uParam0, iParam1, iParam2);
			break;
		case 5:
			func_367(uParam0, iParam1, iParam2);
			break;
		case 6:
			func_368(uParam0, iParam1, iParam2);
			break;
		case 7:
			func_369(uParam0, iParam1, iParam2);
			break;
		case 8:
			func_370(uParam0, iParam1, iParam2);
			break;
		case 9:
			func_371(uParam0, iParam1, iParam2);
			break;
		case 10:
			func_372(uParam0, iParam1, iParam2);
			break;
		case 11:
			func_373(uParam0, iParam1, iParam2);
			break;
		case 12:
			func_374(uParam0, iParam1, iParam2);
			break;
		case 13:
			func_375(uParam0, iParam1, iParam2);
			break;
	}
}

void func_158(var uParam0, int iParam1)
{
	uParam0->f_30 = 0;
	func_376(uParam0);
}

void func_159(int iParam0)
{
	if ((Global_1898077->f_1 == 2 || Global_1898077->f_1 == 5) || Global_1898077->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_26() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_377(Global_1894899->f_2);
	Global_1898077->f_1 = 3;
	Global_1898077->f_2 = 0;
	Global_1898077->f_7 = iVar0;
	Global_1898077->f_8 = iParam0;
	Global_1898077->f_9 = iVar1;
	func_378(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
}

void func_160(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_379(iVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			decor_set_float(func_53(uParam0, 0), sVar1, 0f);
		}
		iVar0++;
	}
}

void func_161()
{
	iVar0 = func_380();
	if (func_381(iVar0))
	{
		func_382(-1, -1, iVar0, 1, -1, 0);
	}
}

void func_162()
{
	func_3(4);
	func_52(0, 2);
	Global_1900073->f_16 = 0;
	Global_1900073->f_215[0] = 0;
	Global_1900073->f_225[0] = 0;
	Global_1900073->f_235[0] = 0;
	Global_1900073->f_153 = 0;
}

void func_163(int iParam0, bool bParam1)
{
	_0xae6004120c18df97(iParam0, 0, bParam1);
	_0xae6004120c18df97(iParam0, 2, bParam1);
	_0xae6004120c18df97(iParam0, 3, bParam1);
	_0xae6004120c18df97(iParam0, 4, bParam1);
	if (func_1())
	{
		set_ped_can_be_targetted_by_player(iParam0, player_id(), bParam1);
	}
}

void func_164(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2 == 1)
	{
		set_ragdoll_blocking_flags(func_53(uParam0, iParam1), 16);
		set_ragdoll_blocking_flags(func_53(uParam0, iParam1), 8192);
		set_ragdoll_blocking_flags(func_53(uParam0, iParam1), 16384);
		set_ragdoll_blocking_flags(func_53(uParam0, iParam1), 32768);
		set_ragdoll_blocking_flags(func_53(uParam0, iParam1), 262144);
	}
	else
	{
		clear_ragdoll_blocking_flags(func_53(uParam0, iParam1), 16);
		clear_ragdoll_blocking_flags(func_53(uParam0, iParam1), 8192);
		clear_ragdoll_blocking_flags(func_53(uParam0, iParam1), 16384);
		clear_ragdoll_blocking_flags(func_53(uParam0, iParam1), 32768);
		clear_ragdoll_blocking_flags(func_53(uParam0, iParam1), 262144);
	}
}

void func_165(var uParam0, int iParam1)
{
	if (!func_46(uParam0) && !get_mission_flag())
	{
		if (iParam1 == 1)
		{
			sVar0 = func_383(func_1(), "MMFSH", "MGFSH");
			_0x1096603b519c905f(sVar0);
		}
		else
		{
			_0x1096603b519c905f("");
		}
	}
}

void func_166(var uParam0, int iParam1, int iParam2)
{
	if (func_79(uParam0, iParam1, iParam2))
	{
		func_49(&((*uParam0)[iParam1]->f_3), iParam2);
	}
}

void func_167(var uParam0)
{
	if (!are_strings_equal(uParam0->f_3, uParam0->f_4))
	{
		uParam0->f_3 = uParam0->f_4;
		_0x6339c1ea3979b5f7(uParam0->f_3, uParam0->f_1);
	}
}

bool func_168(int iParam0, int iParam1, bool bParam2)
{
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_385(iParam0);
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
		if (!func_386(iParam0, 1))
		{
			return false;
		}
	}
	return func_387(iParam0, 0, bParam2) >= iParam1;
}

void func_169(int iParam0, float fParam1)
{
	bVar0 = func_388(iParam0);
	if (func_389(0))
	{
		if (func_390(iParam0, 1, bVar0, 0, 0, 752097756, fParam1, 0, 0, 0))
		{
		}
	}
}

void func_170()
{
	if (!func_389(0))
	{
		if ((((!func_168(1059426360, 1, 0) || !func_168(488496242, 1, 0)) || !func_168(1380607804, 1, 0)) || !func_168(1872063208, 1, 0)) || !func_168(1309979101, 1, 0))
		{
			func_391(2047322594, 1, 255, 0);
		}
		return;
	}
	if (!func_168(1059426360, 1, 0))
	{
		func_169(1059426360, 0);
	}
	if (!func_168(488496242, 1, 0))
	{
		func_169(488496242, 0);
	}
	if (!func_168(1380607804, 1, 0))
	{
		func_169(1380607804, 0);
	}
	if ((((((!func_168(-978159653, 1, 0) && !func_168(2100131425, 1, 0)) && !func_168(-2041382104, 1, 0)) && !func_168(1815744868, 1, 0)) && !func_168(1334018438, 1, 0)) && !func_168(1055480217, 1, 0)) && !func_168(-1916584960, 1, 0))
	{
		func_169(1872063208, 0);
	}
}

void func_171(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_392(uParam0, iParam1, sParam2))
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

void func_172(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_94 == 0)
		{
			uParam0->f_94 = 1;
			_hide_hud_component(100665617);
		}
	}
	else if (uParam0->f_94 == 1)
	{
		uParam0->f_94 = 0;
		_display_hud_component(100665617);
	}
}

void func_173(var uParam0, var uParam1)
{
	if (func_393(&(Global_40.f_11184[0])) && func_168(&(Global_40.f_11184[0]), 1, 0))
	{
		func_309(uParam0, uParam1, 0, &(Global_40.f_11184[0]), 0, 1);
	}
	else
	{
		func_309(uParam0, uParam1, 0, 1309979101, 0, 1);
	}
}

void func_174()
{
	if (func_45(4096))
	{
		sVar0 = func_395(func_394(&(Global_40.f_11184[0])), 109029619);
		if (func_393(&(Global_40.f_11184[0])))
		{
			StringIntConCat(&cVar1, func_387(&(Global_40.f_11184[0]), 0, 0), 8);
		}
		iVar2 = -973584697;
		_databinding_write_data_string(Global_1900073->f_248, sVar0);
		if (func_396(&(Global_40.f_11184[0])))
		{
			_databinding_write_data_string(Global_1900073->f_249, "");
		}
		else
		{
			_databinding_write_data_string(Global_1900073->f_249, &cVar1);
		}
		if (func_397(&(Global_40.f_11184[0])) || func_398(&(Global_40.f_11184[0])))
		{
			iVar2 = 1048406616;
		}
		_databinding_write_data_hash_string(Global_1900073->f_250, iVar2);
	}
}

void func_175()
{
	func_399(1024);
	func_3(512);
}

int func_176(var uParam0)
{
	if (*uParam0 == 1 || uParam0->f_2 == 1)
	{
		return 0;
	}
	return 1;
}

void func_177(bool bParam0)
{
	if (func_45(4096))
	{
		_databinding_write_data_bool(Global_1900073->f_251, bParam0);
	}
}

void func_178(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		if (((uParam0->f_676 == 1 || uParam0->f_676.f_2 == 1) || func_400(uParam1, iParam2)) || func_401(uParam1, iParam2))
		{
			func_197(iParam2, 524288);
		}
		else
		{
			func_52(iParam2, 524288);
		}
	}
	else if (uParam0->f_676 == 1 || uParam0->f_676.f_2 == 1)
	{
		func_197(iParam2, 524288);
	}
	else
	{
		func_52(iParam2, 524288);
	}
	if (uParam0->f_676 == 1 || uParam0->f_676.f_2 == 1)
	{
		func_197(iParam2, 8192);
	}
}

void func_179(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_26() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_402(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_403();
		Global_1898077->f_9 = func_377(Global_1894899->f_2);
		func_378(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_180(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_379(iVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			decor_remove(func_53(uParam0, 0), sVar1);
		}
		iVar0++;
	}
}

void func_181(int iParam0, int iParam1)
{
	if (iParam0 <= 0 || iParam1 <= 0)
	{
		set_pad_shake(0, 0, 0);
		_0x14d29bb12d47f68c(0, 0, 0, 0, 0);
	}
	else
	{
		set_pad_shake(0, iParam0, iParam1);
		iVar0 = round((to_float(iParam1) / 2f));
		_0x14d29bb12d47f68c(0, 0, 0, iParam0, func_404(iVar0, 0, 255));
	}
}

bool func_182(int iParam0)
{
	iVar0 = 6;
	if (func_405(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

void func_183(var uParam0)
{
	func_324(uParam0);
	func_406(uParam0);
	func_407(uParam0);
	func_408(uParam0);
	func_409(uParam0);
	func_410(uParam0);
}

void func_184(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_95 == 0)
		{
			uParam0->f_95 = 1;
			_hide_hud_component(-859384195);
		}
	}
	else if (uParam0->f_95 == 1)
	{
		uParam0->f_95 = 0;
		_display_hud_component(-859384195);
	}
}

void func_185(int iParam0)
{
	if (func_396(iParam0))
	{
		return;
	}
	bVar0 = func_411(iParam0);
	if (func_412(iParam0, 1, bVar0, -142743235, 0))
	{
	}
}

void func_186(var uParam0, int iParam1)
{
	if (does_particle_fx_looped_exist((*uParam0)[iParam1]->f_25))
	{
		stop_particle_fx_looped((*uParam0)[iParam1]->f_25, false);
	}
}

void func_187(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0))
	{
		*uParam2->f_1019[iVar0] = { get_entity_coords(func_53(uParam1, iParam3), true, false) };
		if (iParam5 == 1)
		{
			func_413(uParam0, uParam1, uParam2, iParam3, iVar0);
		}
		else
		{
			func_282(uParam0, uParam1, uParam2, iVar0);
		}
		if (iParam6 == 1)
		{
			uParam2->f_655[iVar0] = (*uParam1)[iParam3]->f_235;
		}
	}
	else
	{
		func_414(uParam0, uParam1, iParam3, 0);
		func_333(iParam3, 512);
	}
	func_32(uParam1, iParam3);
	func_33(uParam1, iParam3);
	if (iParam4 == 1)
	{
		func_415(uParam0, uParam1, uParam2, iParam3, 2);
	}
	(*uParam1)[iParam3]->f_198 = 0;
}

void func_188(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_189(var uParam0)
{
	if (!are_strings_equal(uParam0->f_3, uParam0->f_2))
	{
		uParam0->f_3 = uParam0->f_2;
		_0x9428447ded71fc7e(uParam0->f_1);
	}
}

void func_190(var uParam0)
{
	if (func_46(&(uParam0->f_676)) || !func_50(uParam0, 131072))
	{
		return;
	}
	if (trigger_music_event("BOB_FISHING_STOP"))
	{
		func_204(uParam0, 131072);
	}
}

void func_191(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		func_416(uParam0, iParam1, iVar1);
		if (iParam2 == 1)
		{
			func_417(uParam0, iParam1, iVar1, 0);
		}
		else
		{
			func_417(uParam0, iParam1, iVar1, 2);
		}
		func_76((*uParam0)[iParam1]->f_134[iVar0]);
		iVar0++;
	}
}

int func_192(int iParam0)
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
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		default:
			break;
	}
	return 15;
}

bool func_193(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 14);
}

int func_194(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (func_142(uParam0, uParam1, uParam2, iVar0) == iParam3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_195(int* iParam0)
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
		set_entity_load_collision_flag(*iParam0, false);
	}
	delete_ped(iParam0);
}

void func_196(var uParam0, int iParam1)
{
	func_272(uParam0, iParam1, 0);
	uParam0->f_286[iParam1] = 0;
	uParam0->f_327[iParam1] = 15;
	uParam0->f_368[iParam1] = 0;
	uParam0->f_409[iParam1] = 0f;
	uParam0->f_450[iParam1] = 1f;
	uParam0->f_491[iParam1] = 0;
	uParam0->f_532[iParam1] = 0;
	uParam0->f_573[iParam1] = 0;
	*uParam0->f_42[iParam1] = { 0f, 0f, 0f };
}

void func_197(int iParam0, int iParam1)
{
	if (!func_80(iParam0, iParam1))
	{
		func_229(Global_1900073->f_2[iParam0], iParam1);
	}
}

void func_198(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_4 == 1)
	{
		(*uParam1)[iParam2]->f_7 = { 1185.089f, -595.3312f, 68.0589f };
		(*uParam1)[iParam2]->f_10 = 265.3134f;
	}
	else if (uParam0->f_5 == 1)
	{
		if (!func_45(16))
		{
			(*uParam1)[iParam2]->f_7 = { 801.9244f, -1350.853f, 40.54487f };
			(*uParam1)[iParam2]->f_10 = 100.13f;
		}
		else
		{
			(*uParam1)[iParam2]->f_7 = { 730.6402f, -1502.721f, 40.66145f };
			(*uParam1)[iParam2]->f_10 = 173.41f;
		}
	}
}

int func_199(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_200(var uParam0, int iParam1, int iParam2)
{
	if (func_115(uParam0, iParam1) != iParam2)
	{
		(*uParam0)[iParam1]->f_5 = iParam2;
	}
}

int func_201(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_202(int iParam0)
{
	if (!func_418(iParam0))
	{
		return 0;
	}
	return func_420(func_419(iParam0));
}

void func_203(int iParam0, bool bParam1)
{
	if (!func_421(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_422(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_422(iParam0), 204, false);
	}
}

void func_204(var uParam0, int iParam1)
{
	if (func_50(uParam0, iParam1))
	{
		func_49(&(uParam0->f_11), iParam1);
	}
}

void func_205(int iParam0)
{
	if (Global_1900073->f_25 != iParam0)
	{
		Global_1900073->f_25 = iParam0;
	}
}

void func_206(int iParam0)
{
	if (Global_1900073->f_13 != iParam0)
	{
		Global_1900073->f_13 = iParam0;
	}
}

bool func_207(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_208(int iParam0, int iParam1)
{
	if (&Global_1900073->f_179[iParam0] != iParam1)
	{
		Global_1900073->f_179[iParam0] = iParam1;
	}
}

void func_209(int iParam0, int iParam1)
{
	if (&Global_1900073->f_184[iParam0] != iParam1)
	{
		Global_1900073->f_184[iParam0] = iParam1;
	}
}

void func_210(int iParam0, int iParam1)
{
	if (&Global_1900073->f_189[iParam0] != iParam1)
	{
		Global_1900073->f_189[iParam0] = iParam1;
	}
}

void func_211(int iParam0)
{
	if (iParam0 == 1)
	{
		func_399(2);
	}
	else
	{
		func_3(2);
	}
}

void func_212(int iParam0)
{
	if (iParam0 == 1)
	{
		func_399(64);
	}
	else
	{
		func_3(64);
	}
}

void func_213(int iParam0)
{
	if (Global_1900073->f_11 != iParam0)
	{
		Global_1900073->f_11 = iParam0;
	}
}

void func_214(int iParam0, int iParam1)
{
	if ((iParam0 >= 1 && iParam0 <= 3) && &Global_1900073->f_174[iParam0] != iParam1)
	{
		Global_1900073->f_174[iParam0] = iParam1;
	}
}

void func_215(int iParam0)
{
	if (Global_1900073->f_12 != iParam0)
	{
		Global_1900073->f_12 = iParam0;
	}
}

void func_216(int iParam0)
{
	if (Global_1900073->f_14 != iParam0)
	{
		Global_1900073->f_14 = iParam0;
	}
}

void func_217(int iParam0)
{
	if (Global_1900073->f_15 != iParam0)
	{
		Global_1900073->f_15 = iParam0;
	}
}

void func_218(int iParam0)
{
	if (iParam0 == 1)
	{
		func_399(16);
	}
	else
	{
		func_3(16);
	}
}

void func_219(int iParam0)
{
	if (Global_1900073->f_19 != iParam0)
	{
		Global_1900073->f_19 = iParam0;
	}
}

void func_220(int iParam0)
{
	if (Global_1900073->f_20 != iParam0)
	{
		Global_1900073->f_20 = iParam0;
	}
}

void func_221(int iParam0)
{
	if (Global_1900073->f_21 != iParam0)
	{
		Global_1900073->f_21 = iParam0;
	}
}

void func_222(int iParam0)
{
	if (Global_1900073->f_22 != iParam0)
	{
		Global_1900073->f_22 = iParam0;
	}
}

void func_223(int iParam0)
{
	if (Global_1900073->f_23 != iParam0)
	{
		Global_1900073->f_23 = iParam0;
	}
}

void func_224(int iParam0)
{
	if (Global_1900073->f_24 != iParam0)
	{
		Global_1900073->f_24 = iParam0;
	}
}

void func_225(int iParam0)
{
	if (!has_ped_got_weapon(Global_35, -1415022764, 0, false))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_226(int iParam0)
{
	if (iParam0 == 1)
	{
		func_399(256);
	}
	else
	{
		func_3(256);
	}
}

void func_227(vector3 vParam0)
{
	Global_1900073->f_212 = { vParam0 };
}

void func_228(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_229(var uParam0, int iParam1)
{
	func_423(uParam0, iParam1);
}

bool func_230(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	if (!func_424(iParam0))
	{
		return false;
	}
	return func_425((*Global_1347702)[iParam0]->f_15);
}

bool func_231(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_425((*Global_1835011)[iParam0]->f_1);
}

int func_232()
{
	return Global_1391438->f_414.f_1;
}

bool func_233()
{
	return (Global_1894899 & 1 != 0 && func_235() != -1);
}

bool func_234()
{
	return Global_1894899 & 2 != 0;
}

int func_235()
{
	return Global_1894899->f_2;
}

bool func_236(var uParam0, int iParam1)
{
	if ((((((((((((iParam1 == 62 || iParam1 == 63) || iParam1 == 64) || iParam1 == 65) || iParam1 == 66) || iParam1 == 67) || iParam1 == 68) || iParam1 == 69) || iParam1 == 70) || iParam1 == 71) || iParam1 == 72) || iParam1 == 73) || iParam1 == 74)
	{
		return true;
	}
	if (func_46(uParam0))
	{
		return false;
	}
	if (((((((((((((((((((((((iParam1 == 21 || iParam1 == 22) || iParam1 == 25) || iParam1 == 27) || iParam1 == 29) || iParam1 == 39) || iParam1 == 30) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || iParam1 == 43) || iParam1 == 44) || iParam1 == 45) || iParam1 == 47) || iParam1 == 48) || iParam1 == 49) || iParam1 == 75) || iParam1 == 52) || iParam1 == 53) || iParam1 == 41) || iParam1 == 58) || iParam1 == 60) || iParam1 == 59)
	{
		return true;
	}
	return false;
}

void func_237(var uParam0, int iParam1)
{
	if (uParam0[iParam1] != 0)
	{
		(*uParam0)[iParam1] = 0;
		uParam0->f_77[iParam1] = 0;
	}
}

bool func_238(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 40);
}

bool func_239(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_240(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_241(int iParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 2)
			{
				iVar0 = 1867262572;
			}
			else
			{
				iVar0 = -2116748615;
			}
			break;
		case 1:
			if (iParam1 == 2)
			{
				iVar0 = 703712157;
			}
			else
			{
				iVar0 = 1493541632;
			}
			break;
		case 2:
			if (iParam1 == 2)
			{
				iVar0 = -1182983171;
			}
			else
			{
				iVar0 = 264156159;
			}
			break;
		case 3:
			if (iParam1 == 2)
			{
				iVar0 = -2022921611;
			}
			else
			{
				iVar0 = 1538187374;
			}
			break;
		case 4:
			iVar0 = -300867788;
			break;
		case 5:
			if (iParam1 == 2)
			{
				iVar0 = 463643368;
			}
			else
			{
				iVar0 = 122748261;
			}
			break;
		case 6:
			iVar0 = -711779521;
			break;
		case 7:
			iVar0 = -1553593715;
			break;
		case 8:
			iVar0 = 697075200;
			break;
		case 9:
			if (iParam1 == 2)
			{
				iVar0 = -452224784;
			}
			else
			{
				iVar0 = 706485280;
			}
			break;
		case 10:
			if (iParam1 == 2)
			{
				iVar0 = -243188398;
			}
			else
			{
				iVar0 = 513249462;
			}
			break;
		case 11:
			if (iParam1 == 2)
			{
				iVar0 = -1981561472;
			}
			else
			{
				iVar0 = 1520661;
			}
			break;
		case 12:
			if (iParam1 == 2)
			{
				iVar0 = -1884490195;
			}
			else
			{
				iVar0 = 1860580756;
			}
			break;
		case 13:
			if (iParam1 == 2)
			{
				iVar0 = 543892122;
			}
			else
			{
				iVar0 = 41707457;
			}
			break;
		case 14:
			if (iParam1 == 2)
			{
				iVar0 = 134747314;
			}
			else
			{
				iVar0 = 490159652;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_242(int iParam0)
{
	if (iParam0 == 3)
	{
		return false;
	}
	return true;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1490884871;
		case 1:
			return 323124696;
		case 2:
			return -2108314374;
		case 3:
			return -1320934717;
		case 4:
			return -1193798153;
		case 5:
			return -787702678;
		case 6:
			return -804542901;
		case 7:
			return -1696275132;
		case 8:
			return -395458616;
		case 9:
			return -161595323;
		case 10:
			return -1114363619;
		case 11:
			return -368407134;
		case 12:
			return 1997759228;
		case 13:
			return 1265573293;
		case 14:
			return -1030441283;
		default:
			break;
	}
	return 0;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 323124696:
			return -1865241121;
		case -2108314374:
			return 2117142684;
		case -1193798153:
			return -1409326024;
		case -787702678:
			return -641744968;
		case -804542901:
			return -946988203;
		case -1696275132:
			return -646136018;
		case -161595323:
			return -955835837;
		case -1114363619:
			return -179276075;
		case -368407134:
			return -492711560;
		case 1997759228:
			return 1764383959;
		case 1265573293:
			return 317501533;
		case -1030441283:
			return 817753087;
		case -1490884871:
			return 576606016;
		case -395458616:
			return 814934957;
		default:
			break;
	}
	return 0;
}

bool func_245(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

void func_246(int iParam0, int iParam1)
{
	if (!func_426(iParam0))
	{
		return;
	}
	Global_40.f_11184.f_5[iParam0] = iParam1;
}

int func_247()
{
	return floor((get_control_normal(0, 1773209123) * 127f));
}

int func_248()
{
	return floor((get_control_normal(0, 163530309) * 127f));
}

int func_249()
{
	return floor((get_control_normal(0, 1339352408) * 127f));
}

int func_250()
{
	return floor((get_control_normal(0, -1779240557) * 127f));
}

bool func_251(int iParam0)
{
	return Global_1900073->f_26[iParam0]->f_4 > 0f;
}

void func_252(var uParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (_uiprompt_is_valid(uParam0->f_93))
		{
			_uiprompt_delete(uParam0->f_93);
		}
	}
	else if (func_427(&(uParam0->f_83[iParam1])))
	{
		func_428(uParam0->f_83[iParam1], 0, 1);
	}
}

bool func_253(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_254(var uParam0)
{
	return func_253(*uParam0, 2);
}

int func_255()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_256(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_257(int iParam0)
{
	if (does_entity_exist(Global_1900073->f_26[iParam0]->f_11) && &Global_1900073->f_147[iParam0] == 1)
	{
		return Global_1900073->f_26[iParam0]->f_11;
	}
	return 0;
}

Vector3 func_258(int iParam0)
{
	if (does_entity_exist(func_257(iParam0)))
	{
		return get_entity_coords(func_257(iParam0), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_259(vector3 vParam0, float fParam3)
{
	vVar0 = { vParam0 };
	vVar0.f_2 = (vVar0.z + fParam3);
	return vVar0;
}

int func_260(int iParam0)
{
	if (does_entity_exist(Global_1900073->f_26[iParam0]->f_12) && &Global_1900073->f_147[iParam0] == 1)
	{
		return Global_1900073->f_26[iParam0]->f_12;
	}
	return 0;
}

Vector3 func_261(int iParam0)
{
	if (does_entity_exist(func_260(iParam0)))
	{
		return get_entity_coords(func_260(iParam0), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_262(var uParam0, int iParam1)
{
	if (func_238(iParam1) && !is_entity_dead(&(uParam0->f_163[iParam1])))
	{
		return get_entity_coords(&(uParam0->f_163[iParam1]), true, false);
	}
	return 0f, 0f, 0f;
}

bool func_263(int iParam0)
{
	if (iParam0 == 2)
	{
		return true;
	}
	return false;
}

Vector3 func_264(var uParam0, int iParam1)
{
	if (does_entity_exist((*uParam0)[iParam1]->f_13))
	{
		return get_entity_coords((*uParam0)[iParam1]->f_13, true, false);
	}
	return 0f, 0f, 0f;
}

void func_265(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Global_1900073->f_152 = iParam1;
	if (Global_1900073->f_152 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1145[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1145[10] = 1;
		uParam0->f_1143 = 0;
	}
	else if (Global_1900073->f_152 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1145[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1145[13] = 1;
		uParam0->f_1143 = 50;
	}
	else if (Global_1900073->f_152 == 3)
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1145[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1145[4] = 1;
		uParam0->f_1143 = 100;
	}
	else if (iParam2 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1145[iVar0] = 1;
			iVar0++;
		}
		uParam0->f_1143 = -1;
	}
}

float func_266()
{
	iVar3 = 0;
	while (iVar3 < 15)
	{
		iVar2 = iVar3;
		if (func_242(iVar2))
		{
			fVar1 = func_429(iVar2);
			if (fVar1 > fVar0)
			{
				fVar0 = fVar1;
			}
		}
		iVar3++;
	}
	return fVar0;
}

void func_267(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		(*uParam0)[iVar0] = 1;
		(*uParam0)[iVar0]->f_1[0] = 1;
		iVar0++;
	}
	(*uParam0)[0] = 4;
	(*uParam0)[0]->f_1[0] = 0;
	(*uParam0)[0]->f_1[1] = 1;
	(*uParam0)[0]->f_1[2] = 0;
	(*uParam0)[0]->f_1[3] = 1;
	(*uParam0)[1] = 5;
	(*uParam0)[1]->f_1[0] = 0;
	(*uParam0)[1]->f_1[1] = 0;
	(*uParam0)[1]->f_1[2] = 0;
	(*uParam0)[1]->f_1[3] = 1;
	(*uParam0)[1]->f_1[4] = 1;
	(*uParam0)[2] = 4;
	(*uParam0)[2]->f_1[0] = 1;
	(*uParam0)[2]->f_1[1] = 0;
	(*uParam0)[2]->f_1[2] = 0;
	(*uParam0)[2]->f_1[3] = 1;
	(*uParam0)[3] = 6;
	(*uParam0)[3]->f_1[0] = 0;
	(*uParam0)[3]->f_1[1] = 0;
	(*uParam0)[3]->f_1[2] = 0;
	(*uParam0)[3]->f_1[3] = 1;
	(*uParam0)[3]->f_1[4] = 1;
	(*uParam0)[3]->f_1[5] = 1;
	(*uParam0)[4] = 8;
	(*uParam0)[4]->f_1[0] = 0;
	(*uParam0)[4]->f_1[1] = 0;
	(*uParam0)[4]->f_1[2] = 0;
	(*uParam0)[4]->f_1[3] = 0;
	(*uParam0)[4]->f_1[4] = 1;
	(*uParam0)[4]->f_1[5] = 1;
	(*uParam0)[4]->f_1[6] = 1;
	(*uParam0)[4]->f_1[7] = 1;
	(*uParam0)[5] = 4;
	(*uParam0)[5]->f_1[0] = 1;
	(*uParam0)[5]->f_1[1] = 1;
	(*uParam0)[5]->f_1[2] = 1;
	(*uParam0)[5]->f_1[3] = 0;
	(*uParam0)[6] = 8;
	(*uParam0)[6]->f_1[0] = 0;
	(*uParam0)[6]->f_1[1] = 0;
	(*uParam0)[6]->f_1[2] = 0;
	(*uParam0)[6]->f_1[3] = 0;
	(*uParam0)[6]->f_1[4] = 0;
	(*uParam0)[6]->f_1[5] = 0;
	(*uParam0)[6]->f_1[6] = 0;
	(*uParam0)[6]->f_1[7] = 1;
	(*uParam0)[7] = 8;
	(*uParam0)[7]->f_1[0] = 1;
	(*uParam0)[7]->f_1[1] = 0;
	(*uParam0)[7]->f_1[2] = 1;
	(*uParam0)[7]->f_1[3] = 1;
	(*uParam0)[7]->f_1[4] = 0;
	(*uParam0)[7]->f_1[5] = 1;
	(*uParam0)[7]->f_1[6] = 1;
	(*uParam0)[7]->f_1[7] = 1;
	(*uParam0)[8] = 7;
	(*uParam0)[8]->f_1[0] = 1;
	(*uParam0)[8]->f_1[1] = 1;
	(*uParam0)[8]->f_1[2] = 1;
	(*uParam0)[8]->f_1[3] = 1;
	(*uParam0)[8]->f_1[4] = 1;
	(*uParam0)[8]->f_1[5] = 1;
	(*uParam0)[8]->f_1[6] = 1;
	(*uParam0)[9] = 2;
	(*uParam0)[9]->f_1[0] = 0;
	(*uParam0)[9]->f_1[1] = 1;
	(*uParam0)[10] = 3;
	(*uParam0)[10]->f_1[0] = 0;
	(*uParam0)[10]->f_1[1] = 1;
	(*uParam0)[10]->f_1[2] = 1;
	(*uParam0)[11] = 4;
	(*uParam0)[11]->f_1[0] = 0;
	(*uParam0)[11]->f_1[1] = 1;
	(*uParam0)[11]->f_1[2] = 1;
	(*uParam0)[11]->f_1[3] = 1;
	(*uParam0)[12] = 4;
	(*uParam0)[12]->f_1[0] = 0;
	(*uParam0)[12]->f_1[1] = 0;
	(*uParam0)[12]->f_1[2] = 1;
	(*uParam0)[12]->f_1[3] = 1;
	(*uParam0)[13] = 3;
	(*uParam0)[13]->f_1[0] = 1;
	(*uParam0)[13]->f_1[1] = 0;
	(*uParam0)[13]->f_1[2] = 1;
	(*uParam0)[14] = 6;
	(*uParam0)[14]->f_1[0] = 0;
	(*uParam0)[14]->f_1[1] = 1;
	(*uParam0)[14]->f_1[2] = 1;
	(*uParam0)[14]->f_1[3] = 1;
	(*uParam0)[14]->f_1[4] = 1;
	(*uParam0)[14]->f_1[5] = 0;
}

int func_268(var uParam0)
{
	iVar0 = 0;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 < 15)
		{
			iVar1 = iVar0;
			vVar4 = { func_292(iVar1) };
			if (!func_55(vVar4))
			{
				fVar3 = func_56(func_53(uParam0, 0), vVar4, 0);
				if (fVar3 < fVar2)
				{
					fVar2 = fVar3;
					iVar7 = iVar1;
				}
			}
		}
		iVar0++;
	}
	return iVar7;
}

int func_269(int iParam0)
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
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		default:
			break;
	}
	return 15;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 943405819;
		case 1:
			return -1910028162;
		case 2:
			return 940895564;
		case 3:
			return 1328336590;
		case 4:
			return 2142400903;
		case 5:
			return -1950203877;
		case 6:
			return -1618780616;
		case 7:
			return -364709180;
		case 8:
			return -4595908;
		case 9:
			return 1100735684;
		case 10:
			return 1526876460;
		case 11:
			return 1293931317;
		case 12:
			return 1448942408;
		case 13:
			return -1106231666;
		case 14:
			return 2037089404;
		default:
			break;
	}
	return 0;
}

void func_271(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_430());
	}
}

void func_272(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_204[iParam1] != iParam2)
	{
		uParam0->f_204[iParam1] = iParam2;
		uParam0->f_245[iParam1] = iParam2;
	}
}

bool func_273(var uParam0, int iParam1)
{
	return (func_46(uParam0) && iParam1 <= 11);
}

bool func_274(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!is_entity_dead(&(uParam2->f_163[iParam3])))
	{
		return true;
	}
	if (iParam3 == 1 && !func_431(uParam0, uParam1, uParam2))
	{
		return false;
	}
	if ((uParam0->f_676.f_4 == 1 && !func_45(128)) && iParam3 > 7)
	{
		return false;
	}
	if (&uParam2->f_286[iParam3] == 0)
	{
		if (iParam3 == 0)
		{
			func_432(uParam0, uParam1, uParam2);
		}
		else
		{
			func_433(uParam0, uParam2, iParam3);
		}
	}
	if (&uParam2->f_286[iParam3] != 0 && func_55(*uParam2->f_42[iParam3]))
	{
		if (&uParam2->f_368[iParam3] == 2)
		{
			iVar3 = func_434(&(uParam2->f_286[iParam3]));
			iVar4 = func_192(iVar3);
			if (func_193(iVar4))
			{
				vVar0 = { func_292(iVar4) };
			}
			if (func_55(vVar0))
			{
			}
			else if (get_distance_between_coords(Global_36, vVar0, false) >= 50f)
			{
			}
			else if (!func_435(vVar0, &(uParam2->f_286[iParam3]), &(vVar0.f_2)))
			{
			}
			else
			{
				*uParam2->f_42[iParam3] = { vVar0 };
			}
		}
		if (func_55(*uParam2->f_42[iParam3]))
		{
			vVar5 = { Global_36 };
			if (iParam3 == 1)
			{
				if (&Global_1900073->f_26[0] == 6 && func_436(uParam1, 0))
				{
					vVar0 = { func_261(0) };
				}
			}
			else
			{
				vVar0.x = (vVar5.x + get_random_float_in_range(-30f, 30f));
				vVar0.f_1 = (vVar5.y + get_random_float_in_range(-30f, 30f));
				vVar0.f_2 = vVar5.z;
			}
			if (func_55(vVar0))
			{
				return false;
			}
			else if (func_69(0, 1, 1) && get_distance_between_coords(vVar5, vVar0, false) < 5f)
			{
				return false;
			}
			else if (get_distance_between_coords(vVar5, vVar0, false) < 10f)
			{
				return false;
			}
			else if (!func_437(uParam0, uParam1, vVar0))
			{
				return false;
			}
			else if (func_438(vVar0))
			{
				return false;
			}
			else if (!func_435(vVar0, &(uParam2->f_286[iParam3]), &(vVar0.f_2)))
			{
				return false;
			}
			else
			{
				*uParam2->f_42[iParam3] = { vVar0 };
			}
		}
	}
	if ((uParam2->f_1140 == 0 && &uParam2->f_286[iParam3] != 0) && !func_55(*uParam2->f_42[iParam3]))
	{
		request_model(&(uParam2->f_286[iParam3]), false);
		if (has_model_loaded(&(uParam2->f_286[iParam3])))
		{
			uParam2->f_163[iParam3] = func_439(&(uParam2->f_286[iParam3]), *uParam2->f_42[iParam3], 0f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			uParam2->f_1[iParam3] = 0;
			_0x8b6f0f59b1b99801(&(uParam2->f_163[iParam3]), &(uParam2->f_368[iParam3]));
			set_model_as_no_longer_needed(&(uParam2->f_286[iParam3]));
			uParam2->f_1140 = 1;
			if (func_88(iParam3))
			{
				Global_1900073->f_195 = &uParam2->f_163[iParam3];
			}
		}
	}
	return !is_entity_dead(&(uParam2->f_163[iParam3]));
}

bool func_275(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_74(&(uParam2->f_699)) && func_75(&(uParam2->f_699)) < (200 + uParam2->f_707 * 20))
	{
		return false;
	}
	func_104(&(uParam2->f_699));
	iVar16 = get_ped_nearby_peds(func_53(uParam1, 0), &uVar0, -1, 8);
	if (iVar16 == 0)
	{
		return false;
	}
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < iVar16)
	{
		if ((((!is_entity_dead(&(uVar0[iVar18])) && func_440(&(uVar0[iVar18]))) && !func_441(uParam2, uVar0[iVar18])) && func_442(&(uParam0->f_676), uVar0[iVar18])) && !func_280(uParam0, uParam1, uVar0[iVar18], 0))
		{
			uParam2->f_163[iParam3] = &uVar0[iVar18];
			set_entity_as_mission_entity(&(uParam2->f_163[iParam3]), true, true);
			uParam2->f_1[iParam3] = 1;
			iVar17 = _0x30569f348d126a5a(&(uParam2->f_163[iParam3]));
			if ((((iVar17 == 1451491046 || iVar17 == -7367611) || iVar17 == 1492558869) || iVar17 == -2111653907) || iVar17 == 1942171995)
			{
				uParam2->f_532[iParam3] = 1;
			}
			else
			{
				uParam2->f_532[iParam3] = 0;
			}
			func_104(&(uParam2->f_702));
			return true;
		}
		iVar18++;
	}
	return false;
}

bool func_276(var uParam0, int iParam1)
{
	if (func_88(iParam1) || iParam1 == 1)
	{
		return true;
	}
	return iParam1 == uParam0->f_1142;
}

bool func_277(var uParam0)
{
	if ((func_1() && uParam0->f_707 < 10) && func_443(&(uParam0->f_702)) > 15000)
	{
		return true;
	}
	return false;
}

bool func_278(var uParam0, var uParam1, int iParam2)
{
	if ((uParam1->f_1141 == 1 || is_entity_dead(&(uParam1->f_163[iParam2]))) || !_0xa0bc8faed8cfeb3c(&(uParam1->f_163[iParam2])))
	{
		return false;
	}
	func_444(&(uParam1->f_163[iParam2]));
	uParam1->f_286[iParam2] = get_entity_model(&(uParam1->f_163[iParam2]));
	uParam1->f_327[iParam2] = func_434(&(uParam1->f_286[iParam2]));
	uParam1->f_368[iParam2] = _0xf8b48a361dc388ae(&(uParam1->f_163[iParam2]));
	uParam1->f_409[iParam2] = func_445(uParam1, &(uParam1->f_327[iParam2]), &(uParam1->f_368[iParam2]));
	uParam1->f_450[iParam2] = func_446(uParam1, iParam2);
	uParam1->f_491[iParam2] = func_447(&(uParam1->f_286[iParam2]));
	uParam1->f_655[iParam2] = 0f;
	_set_ped_scale(&(uParam1->f_163[iParam2]), &(uParam1->f_450[iParam2]));
	func_448(uParam1, iParam2);
	func_449(&(uParam1->f_163[iParam2]), 0);
	set_blocking_of_non_temporary_events(&(uParam1->f_163[iParam2]), func_88(iParam2));
	func_450(uParam0, uParam1, iParam2);
	set_ped_reset_flag(&(uParam1->f_163[iParam2]), 169, true);
	if ((((!func_88(iParam2) && !func_285(&(uParam1->f_163[iParam2]), 1139527981)) && !func_285(&(uParam1->f_163[iParam2]), 518218985)) && !func_285(&(uParam1->f_163[iParam2]), -773337285)) && !is_ped_fleeing(&(uParam1->f_163[iParam2])))
	{
		task_animal_unalerted(&(uParam1->f_163[iParam2]), -1, 0, 0, 0);
	}
	uParam1->f_1141 = 1;
	return true;
}

void func_279(var uParam0, var uParam1, var uParam2, int iParam3)
{
	*uParam2->f_1019[iParam3] = { 0f, 0f, 0f };
	iVar0 = func_194(uParam0, uParam1, uParam2, iParam3);
	if (iVar0 != -1)
	{
		func_64(uParam0, uParam1, uParam2, iVar0, -1);
	}
	func_272(uParam2, iParam3, 4);
}

bool func_280(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (bParam3 == 1 && func_46(&(uParam0->f_676)))
	{
		return false;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < func_31(uParam0))
	{
		if (bParam3 == 1 && func_9(uParam0) != 3)
		{
			fVar0 = (50f / 2f);
		}
		else
		{
			fVar0 = 50f;
		}
		if ((!func_55((*uParam1)[iVar1]->f_7) && !is_entity_dead(*uParam2)) && func_56(*uParam2, (*uParam1)[iVar1]->f_7, 0) < fVar0)
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_281(var uParam0, var uParam1, int iParam2)
{
	if (is_ped_fleeing(&(uParam1->f_163[iParam2])) || func_88(iParam2))
	{
		return false;
	}
	if (func_79(uParam0, 0, 512) && func_56(func_257(0), func_262(uParam1, iParam2), 0) < 5f)
	{
		*uParam1->f_1019[iParam2] = { func_258(0) };
		return true;
	}
	return false;
}

void func_282(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 1;
	iVar1 = func_194(uParam0, uParam1, uParam2, iParam3);
	if (iVar1 != -1)
	{
		func_451(iVar1);
		func_414(uParam0, uParam1, iVar1, 0);
		func_333(iVar1, 512);
		if (func_88(iParam3))
		{
			iVar0 = 0;
		}
		func_64(uParam0, uParam1, uParam2, iVar1, -1);
		Global_1900073->f_26[iVar1]->f_7 = 0;
	}
	else if (func_55(*uParam2->f_1019[iParam3]))
	{
		*uParam2->f_1019[iParam3] = { Global_36 };
	}
	func_104(uParam2->f_777[iParam3]);
	func_76(uParam2->f_898[iParam3]);
	if (!is_entity_dead(&(uParam2->f_163[iParam3])))
	{
		func_450(uParam0, uParam2, iParam3);
	}
	if (iVar0 == 1)
	{
		func_272(uParam2, iParam3, 9);
	}
	else
	{
		func_272(uParam2, iParam3, 4);
	}
}

void func_283(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar3 = func_192(&(uParam2->f_327[iParam3]));
	if (func_193(iVar3))
	{
		vVar0 = { func_292(iVar3) };
	}
	if (func_452(uParam0, uParam1, uParam2, iParam3))
	{
		if ((!func_285(&(uParam2->f_163[iParam3]), 518218985) && !func_285(&(uParam2->f_163[iParam3]), -773337285)) && !is_ped_fleeing(&(uParam2->f_163[iParam3])))
		{
			clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
			task_smart_flee_ped(&(uParam2->f_163[iParam3]), func_53(uParam1, 0), 9999999f, -1, 8, 1077936128, 0);
		}
	}
	else if (func_453(uParam0, uParam1, uParam2, iParam3, &(uParam2->f_327[iParam3])))
	{
		uParam2->f_705 = 1;
		if (!func_285(&(uParam2->f_163[iParam3]), 1227113341))
		{
			clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
			task_go_to_entity(&(uParam2->f_163[iParam3]), func_260(0), -1, 0f, 2f, 0f, 0);
		}
	}
	else if (func_454(uParam1, uParam2, iParam3, vVar0))
	{
		if (!func_285(&(uParam2->f_163[iParam3]), -1824940423))
		{
			clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
			task_go_to_coord_any_means(&(uParam2->f_163[iParam3]), vVar0, 2f, 0, false, 524419, -1f);
		}
	}
	else if (func_455())
	{
		if (!func_285(&(uParam2->f_163[iParam3]), 670314910))
		{
			set_animal_tuning_float_param(&(uParam2->f_163[iParam3]), 68, 4f);
			clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
			task_wander_swim(&(uParam2->f_163[iParam3]), 4f);
		}
	}
}

void func_284(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((func_456(uParam0, uParam1, 0, 1) && func_457(uParam1, 0, &(uParam2->f_327[iParam3]), 0)) && (*uParam1)[0]->f_74 == 0)
	{
		if (!func_285(&(uParam2->f_163[iParam3]), 1227113341))
		{
			set_blocking_of_non_temporary_events(&(uParam2->f_163[iParam3]), true);
			clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
			task_go_to_entity(&(uParam2->f_163[iParam3]), func_260(0), -1, 0f, 2f, 0f, 0);
		}
	}
	else if (!func_285(&(uParam2->f_163[iParam3]), 670314910))
	{
		set_animal_tuning_float_param(&(uParam2->f_163[iParam3]), 68, 4f);
		clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
		task_wander_swim(&(uParam2->f_163[iParam3]), 4f);
	}
}

bool func_285(int iParam0, int iParam1)
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

void func_286(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (&uParam2->f_204[iParam3] == 6)
	{
		func_458(uParam1, uParam2, iParam3, iParam4);
		func_459(uParam0, uParam1, uParam2, iParam3, iParam4);
		if (func_460(uParam1, iParam4) || func_461(uParam0, uParam1, uParam2, iParam4))
		{
			if (iParam4 != 0 || !func_462(uParam0, uParam2, iParam3))
			{
				uParam2->f_204[iParam3] = 7;
			}
		}
	}
	else
	{
		func_463(uParam1, uParam2, iParam3, iParam4);
		func_32(uParam1, iParam4);
		if ((func_464(uParam0, uParam1, uParam2, iParam4) || func_465(uParam0, uParam1, uParam2, iParam4)) || (iParam4 == 0 && func_462(uParam0, uParam2, iParam3)))
		{
			uParam2->f_204[iParam3] = 6;
		}
	}
	if (&uParam2->f_245[iParam3] != &uParam2->f_204[iParam3])
	{
		uParam2->f_245[iParam3] = &uParam2->f_204[iParam3];
		(*uParam1)[iParam4]->f_209 = 0;
		clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
	}
}

void func_287(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if ((((iParam3 != 0 || (*uParam0)[iParam3]->f_233 == 0) || (*uParam0)[iParam3]->f_233 == 6) || (*uParam0)[iParam3]->f_233 == 7) || (*uParam0)[iParam3]->f_233 == 8)
	{
		(*uParam0)[iParam3]->f_234 = 0;
		if (func_74(&((*uParam0)[iParam3]->f_221)))
		{
			func_466(&((*uParam0)[iParam3]->f_221));
		}
		if (func_74(&((*uParam0)[iParam3]->f_224)))
		{
			func_466(&((*uParam0)[iParam3]->f_224));
		}
		return;
	}
	fVar0 = get_entity_heading(&(uParam1->f_163[iParam2]));
	fVar1 = get_entity_heading(func_53(uParam0, iParam3));
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 + 360f);
	}
	if (fVar2 >= 180f)
	{
		(*uParam0)[iParam3]->f_234 = 4;
	}
	else
	{
		(*uParam0)[iParam3]->f_234 = 3;
	}
	if ((*uParam0)[iParam3]->f_234 == 4)
	{
		if (IntToFloat(func_247()) < -25f && func_467(iParam3))
		{
			if (func_146(uParam1, iParam2))
			{
				if (func_74(&((*uParam0)[iParam3]->f_221)))
				{
					func_468(&((*uParam0)[iParam3]->f_221));
				}
				else
				{
					func_104(&((*uParam0)[iParam3]->f_221));
				}
			}
			else if (func_74(&((*uParam0)[iParam3]->f_224)))
			{
				func_468(&((*uParam0)[iParam3]->f_224));
			}
			else
			{
				func_104(&((*uParam0)[iParam3]->f_224));
			}
		}
		else
		{
			if (func_74(&((*uParam0)[iParam3]->f_221)))
			{
				func_466(&((*uParam0)[iParam3]->f_221));
			}
			if (func_74(&((*uParam0)[iParam3]->f_224)))
			{
				func_466(&((*uParam0)[iParam3]->f_224));
			}
		}
	}
	else if ((*uParam0)[iParam3]->f_234 == 3)
	{
		if (IntToFloat(func_247()) > 25f && func_467(iParam3))
		{
			if (func_146(uParam1, iParam2))
			{
				if (func_74(&((*uParam0)[iParam3]->f_221)))
				{
					func_468(&((*uParam0)[iParam3]->f_221));
				}
				else
				{
					func_104(&((*uParam0)[iParam3]->f_221));
				}
			}
			else if (func_74(&((*uParam0)[iParam3]->f_224)))
			{
				func_468(&((*uParam0)[iParam3]->f_224));
			}
			else
			{
				func_104(&((*uParam0)[iParam3]->f_224));
			}
		}
		else
		{
			if (func_74(&((*uParam0)[iParam3]->f_221)))
			{
				func_466(&((*uParam0)[iParam3]->f_221));
			}
			if (func_74(&((*uParam0)[iParam3]->f_224)))
			{
				func_466(&((*uParam0)[iParam3]->f_224));
			}
		}
	}
	else
	{
		if (func_74(&((*uParam0)[iParam3]->f_221)))
		{
			func_466(&((*uParam0)[iParam3]->f_221));
		}
		if (func_74(&((*uParam0)[iParam3]->f_224)))
		{
			func_466(&((*uParam0)[iParam3]->f_224));
		}
	}
}

void func_288(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_469(uParam0, uParam1, iParam4, 0))
	{
		if (func_285(&(uParam2->f_163[iParam3]), 1227113341))
		{
			clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
		}
		return;
	}
	if (!func_470(uParam1, iParam4))
	{
		return;
	}
	vVar0 = { func_262(uParam2, iParam3) };
	(*uParam1)[iParam4]->f_251 = 0;
	if ((*uParam1)[iParam4]->f_24 < 0.1f)
	{
		(*uParam1)[iParam4]->f_233 = 7;
	}
	else if (func_471(uParam0, uParam1, uParam2, iParam3, iParam4))
	{
		(*uParam1)[iParam4]->f_233 = 8;
	}
	else if (!func_472(uParam0, uParam1, iParam4, vVar0))
	{
		func_473(uParam1, uParam2, iParam4, iParam3);
	}
	else if (func_88(iParam3) && (*uParam1)[iParam4]->f_257 == 0)
	{
		if ((*uParam1)[iParam4]->f_233 != 9)
		{
			set_ped_config_flag(&(uParam2->f_163[iParam3]), 436, true);
			task_animal_unalerted(&(uParam2->f_163[iParam3]), -1, 0, 0, 0);
			(*uParam1)[iParam4]->f_233 = 9;
		}
	}
	else if (func_474(uParam1, uParam2, iParam3, iParam4))
	{
		func_475(uParam0, uParam1, uParam2, iParam4, iParam3, vVar0);
	}
	if ((((*uParam1)[iParam4]->f_233 == 8 || (*uParam1)[iParam4]->f_233 == 7) || (*uParam1)[iParam4]->f_233 == 6) || (*uParam1)[iParam4]->f_233 == 0)
	{
		(*uParam1)[iParam4]->f_255 = 0f;
		(*uParam1)[iParam4]->f_256 = 0;
		if (func_285(&(uParam2->f_163[iParam3]), 1227113341))
		{
			clear_ped_tasks(&(uParam2->f_163[iParam3]), 1, 0);
		}
	}
	else if ((*uParam1)[iParam4]->f_233 == 9 && (*uParam1)[iParam4]->f_257 == 0)
	{
		if (!get_ped_config_flag(&(uParam2->f_163[iParam3]), 436, true))
		{
			(*uParam1)[iParam4]->f_257 = 1;
			(*uParam1)[iParam4]->f_233 = 0;
		}
	}
	else
	{
		func_476(uParam1, uParam2, iParam4, iParam3);
		if ((*uParam1)[iParam4]->f_256 == 1 || !func_285(&(uParam2->f_163[iParam3]), 1227113341))
		{
			task_go_to_entity(&(uParam2->f_163[iParam3]), (*uParam1)[iParam4]->f_14, -1, 0.1f, (*uParam1)[iParam4]->f_255, 0.1f, 1);
			(*uParam1)[iParam4]->f_256 = 0;
		}
	}
	if ((*uParam1)[iParam4]->f_233 == 7)
	{
		if (!func_74(&((*uParam1)[iParam4]->f_252)))
		{
			func_104(&((*uParam1)[iParam4]->f_252));
		}
		if (func_254(&((*uParam1)[iParam4]->f_252)))
		{
			func_468(&((*uParam1)[iParam4]->f_252));
		}
	}
	else if (func_74(&((*uParam1)[iParam4]->f_252)) && !func_254(&((*uParam1)[iParam4]->f_252)))
	{
		func_466(&((*uParam1)[iParam4]->f_252));
	}
}

void func_289(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (((func_74(&((*uParam1)[iParam4]->f_229)) && func_75(&((*uParam1)[iParam4]->f_229)) < (*uParam1)[iParam4]->f_232) || !func_146(uParam2, iParam3)) || !func_477(uParam1, iParam4))
	{
		return;
	}
	vVar0 = { func_478(func_262(uParam2, iParam3), 0) };
	if (func_55(vVar0))
	{
		return;
	}
	func_104(&((*uParam1)[iParam4]->f_229));
	if (func_147(uParam1, iParam4) > 0.8f)
	{
		(*uParam1)[iParam4]->f_232 = get_random_int_in_range(150, 250);
	}
	else
	{
		(*uParam1)[iParam4]->f_232 = get_random_int_in_range(250, 350);
	}
	fVar3 = 1f;
	if (&uParam2->f_491[iParam3] == 0)
	{
		fVar3 = 0.8f;
	}
	else if (&uParam2->f_491[iParam3] == 1)
	{
		fVar3 = 0.9f;
	}
	else if (&uParam2->f_491[iParam3] == 2)
	{
		fVar3 = 1f;
	}
	else if (&uParam2->f_491[iParam3] == 3)
	{
		fVar3 = 1.1f;
	}
	else if (&uParam2->f_491[iParam3] == 4)
	{
		fVar3 = 1.2f;
	}
	start_networked_particle_fx_non_looped_at_coord("scr_mg_fish_struggle", vVar0, 0f, 0f, get_random_float_in_range(0f, 360f), fVar3, 0, 0, 0);
	func_479(uParam0, uParam1, uParam2, iParam3, iParam4);
}

void func_290(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_291(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_295() - fParam1);
	func_480(uParam0, 1);
	func_481(uParam0, 2);
	uParam0->f_2 = 0f;
}

Vector3 func_292(int iParam0)
{
	if (iParam0 == 8 && !func_55(Global_1900073->f_212))
	{
		return Global_1900073->f_212;
	}
	switch (iParam0)
	{
		case 0:
			return 724f, -1513f, 40f;
		case 1:
			return 3178f, -706f, 40f;
		case 2:
			return -485f, -142f, 40f;
		case 3:
			return -5071f, -4137f, -30f;
		case 4:
			return 2141f, -1541f, 40f;
		case 5:
			return -3068f, -3374f, -19f;
		case 6:
			return 2226f, -709f, 40f;
		case 7:
			return 3058f, 416f, 40f;
		case 8:
			return 1620f, 1518f, 140f;
		case 9:
			return 2365f, 967f, 70f;
		case 10:
			return -1828f, -2429f, 40f;
		case 11:
			return -2588f, -1434f, 144f;
		case 12:
			return -2365f, -430f, 140f;
		case 13:
			return -1687f, 1654f, 230f;
		case 14:
			return 2878f, 2327f, 160f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_293(vector3 vParam0)
{
	iVar0 = _get_map_zone_at_coords(vParam0, -1);
	iVar1 = func_482(vParam0);
	iVar2 = func_483(vParam0);
	if (func_484(vParam0, 0) > 0f)
	{
		return false;
	}
	if ((((((iVar0 == -2040708515 || iVar0 == 2147354003) || iVar0 == -1504425495) || iVar0 == 613867492) || iVar0 == -1356490953) || iVar0 == -1) || iVar0 == 0)
	{
		return false;
	}
	if (func_485(iVar1, 1))
	{
		return false;
	}
	if (func_486(iVar2) || func_487(iVar2))
	{
		return false;
	}
	return true;
}

void func_294(var uParam0)
{
	*vVar0[0] = { -1209.672f, -1949.075f, 41.6528f };
	*vVar0[1] = { -733.228f, -1318.488f, 42.4546f };
	*vVar0[2] = { 667.0115f, -1294.341f, 41.0552f };
	*vVar0[3] = { 1323.089f, -2349.487f, 40.848f };
	*vVar0[4] = { 2913.414f, -205.2208f, 40.6327f };
	*vVar0[5] = { 2998.331f, 611.6033f, 40.6977f };
	iVar19 = -1;
	fVar20 = 999999f;
	iVar24 = 0;
	while (iVar24 < 6)
	{
		iVar22 = func_482(*vVar0[iVar24]);
		iVar23 = func_483(*vVar0[iVar24]);
		if (((!func_485(iVar22, 1) && func_488(iVar23)) && !func_486(iVar23)) && !func_487(iVar23))
		{
			fVar21 = get_distance_between_coords(Global_36, *vVar0[iVar24], false);
			if (fVar21 < fVar20)
			{
				fVar20 = fVar21;
				iVar19 = iVar24;
			}
		}
		iVar24++;
	}
	if (iVar19 >= 0 && iVar19 < 6)
	{
		uParam0->f_701 = { *vVar0[iVar19] };
	}
	else
	{
		uParam0->f_701 = { 0f, 0f, 0f };
	}
}

float func_295()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

float func_296(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return get_heading_from_vector_2d((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

bool func_297()
{
	return ((func_489() || func_329()) || func_490());
}

bool func_298(var uParam0, int iParam1)
{
	return &uParam0->f_77[iParam1] == 1;
}

bool func_299(int iParam0)
{
	if (Global_1900073->f_22 == 1)
	{
		if (((iParam0 == 21 || iParam0 == 22) || iParam0 == 25) || iParam0 == 27)
		{
			return true;
		}
	}
	if (Global_1900073->f_23 == 1)
	{
		if ((((iParam0 == 31 || iParam0 == 32) || iParam0 == 33) || iParam0 == 34) || iParam0 == 39)
		{
			return true;
		}
	}
	if (Global_1900073->f_24 == 1)
	{
		if (((iParam0 == 48 || iParam0 == 49) || iParam0 == 75) || iParam0 == 45)
		{
			return true;
		}
	}
	return Global_1900073->f_11;
}

bool func_300(var uParam0, int iParam1)
{
	if ((&uParam0->f_383[iParam1] > 0 && func_74(uParam0->f_154[iParam1])) && func_107(uParam0->f_154[iParam1]) < IntToFloat(&uParam0->f_383[iParam1]))
	{
		return true;
	}
	return false;
}

bool func_301()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

char* func_302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MGFSH_EQ_ROD1";
		case 1:
			return "MGFSH_EQ_ROD2";
		case 2:
			return "MGFSH_EQ_ROD3";
		case 3:
			return "MGFSH_EQ_BAIT1";
		case 4:
			return "MGFSH_EQ_BAIT2_ABI1";
		case 5:
			return "MGFSH_EQ_BAIT2_FUD1";
		case 6:
			return "MGFSH_EQ_BAIT2_WAR1";
		case 7:
			return "MGFSH_EQ_BAIT2_FSH1";
		case 8:
			return "MGFSH_EQ_BAIT3_ABI1";
		case 9:
			return "MGFSH_EQ_BAIT3_FUD1";
		case 10:
			return "MGFSH_EQ_BAIT3_WAR1";
		case 11:
			return "MGFSH_EQ_BAIT3_FSH1";
		case 12:
			return "MGFSH_EQ_REBAIT";
		case 13:
			return "MGFSH_EQ_BAIT1";
		case 14:
			return "MGFSH_EQ_BAIT_ANY";
		case 15:
			return "MGFSH_CAST_DEEP";
		case 16:
			return "MGFSH_CAST_HIGH";
		case 17:
			return "MGFSH_CAST_WATER";
		case 18:
			return "MGFSH_CAST_CLOSE";
		case 19:
			return "MGFSH_CAST_LOS";
		case 20:
			return "MGFSH_CAST_BAIT";
		case 21:
			return "MGFSH_BEGIN_AIM_HLP";
		case 22:
			return "MGFSH_BEGIN_AIM_TOG_HLP";
		case 23:
			return "MGFSH_BEGIN_AIM_OBJ";
		case 24:
			return "MGFSH_BEGIN_AIM_TOG_OBJ";
		case 25:
			return "MGFSH_CAST_AIMING_HLP";
		case 26:
			return "MGFSH_CAST_AIMING_OBJ";
		case 27:
			return "MGFSH_CAST_RELEASE_HLP";
		case 28:
			return "MGFSH_CAST_RELEASE_OBJ";
		case 29:
			return "MGFSH_CAST_POWER";
		case 30:
			return "MGFSH_NIBBLE_DESC";
		case 31:
			return "MGFSH_WAIT_LURE_HLP";
		case 32:
			return "MGFSH_WAIT_LURE_AUTO_HLP";
		case 33:
			return "MGFSH_WAIT_LURE_TOG_HLP";
		case 34:
			return "MGFSH_WAIT_LURE_TOG_AUTO_HLP";
		case 35:
			return "MGFSH_WAIT_LURE_GRIP";
		case 36:
			return "MGFSH_WAIT_LURE_GRIP_TOG";
		case 37:
			return "MGFSH_WAIT_LURE_HOOK";
		case 38:
			return "MGFSH_WAIT_LURE_HOOK_AUTO";
		case 39:
			return "MGFSH_HOOK_FISH_HLP";
		case 40:
			return "MGFSH_HOOK_FISH_OBJ";
		case 41:
			return "MGFSH_FLICK_BAIT";
		case 42:
			return "MGFSH_SPOOL_EMPTY";
		case 43:
			return "MGFSH_MISSED_BITE1";
		case 44:
			return "MGFSH_MISSED_BITE2";
		case 45:
			return "MGFSH_HOOK_ROD1_HLP";
		case 46:
			return "MGFSH_HOOK_ROD1_OBJ";
		case 47:
			return "MGFSH_HOOK_ROD2";
		case 48:
			return "MGFSH_REEL_FISH_HLP";
		case 49:
			return "MGFSH_REEL_FISH_AUTO_HLP";
		case 50:
			return "MGFSH_REEL_FISH_OBJ";
		case 51:
			return "MGFSH_REEL_FISH_AUTO_OBJ";
		case 52:
			return "MGFSH_OBJECT_REEL";
		case 53:
			return "MGFSH_OBJECT_REEL_AUTO";
		case 54:
			return "MGFSH_FISH_ESC1";
		case 55:
			return "MGFSH_FISH_ESC2";
		case 56:
			return "MGFSH_FISH_ESC3";
		case 57:
			return "MGFSH_BAIT_LOST";
		case 58:
			return "MGFSH_STOW_HORSE";
		case 59:
			return "MGFSH_HOLD_REEL";
		case 60:
			return "MGFSH_PUMP_ROD";
		case 61:
			return "MGFSH_FULL_SAT";
		case 62:
			return "MGFSH_EQD_CHEESE";
		case 63:
			return "MGFSH_EQD_BREAD";
		case 64:
			return "MGFSH_EQD_CORN";
		case 65:
			return "MGFSH_EQD_WORM";
		case 66:
			return "MGFSH_EQD_CRICKET";
		case 67:
			return "MGFSH_EQD_CRAYFISH";
		case 68:
			return "MGFSH_EQD_LURE_LAKE";
		case 69:
			return "MGFSH_EQD_LURE_RIVER";
		case 70:
			return "MGFSH_EQD_LURE_SWAMP";
		case 71:
			return "MGFSH_EQD_SPECIAL_LURE_LAKE";
		case 72:
			return "MGFSH_EQD_SPECIAL_LURE_RIVER";
		case 73:
			return "MGFSH_EQD_SPECIAL_LURE_SWAMP";
		case 74:
			return "MGFSH_EQD_SPECIAL_SPINNER";
		case 75:
			return "MGFSH_REEL_FISH_HLP2_KM";
		default:
			break;
	}
	return "";
}

char* func_303(int iParam0)
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
	return "";
}

var func_304(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_305(var uParam0, bool bParam1)
{
	if (!func_491())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < func_492(bParam1))
	{
		(*uParam0)[iVar0] = Global_1359489[iVar0];
		iVar0++;
	}
	return true;
}

bool func_306(int iParam0, bool bParam1)
{
	iVar0 = func_422(iParam0);
	if (bParam1)
	{
		if (!func_493(iVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(iVar0, func_494(), 1);
}

void func_307(var uParam0, int iParam1)
{
	iVar12 = get_ped_nearby_peds(func_53(uParam0, 0), &uVar1, -1, -1);
	if (iVar12 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar12)
		{
			if ((!is_entity_dead(&(uVar1[iVar0])) && !is_ped_a_player(&(uVar1[iVar0]))) && get_entity_model(&(uVar1[iVar0])) == (*uParam0)[iParam1]->f_1)
			{
				(*uParam0)[iParam1] = &uVar1[iVar0];
				set_entity_as_mission_entity(func_53(uParam0, iParam1), true, true);
				return;
			}
			iVar0++;
		}
	}
}

bool func_308()
{
	return Global_1900073->f_14;
}

void func_309(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (&Global_40.f_11184[iParam2] != iParam3 || iParam5 == 1)
	{
		Global_40.f_11184[iParam2] = iParam3;
		(*uParam1)[iParam2]->f_72 = 0;
		(*uParam1)[iParam2]->f_73 = 0;
		func_495(uParam1, iParam2, &(Global_40.f_11184[iParam2]));
		iVar0 = func_496(uParam1, iParam2);
		sVar1 = func_497(&(Global_40.f_11184[iParam2]));
		if (iParam4 == 1)
		{
			task_swap_fishing_bait(func_53(uParam1, iParam2), sVar1, iVar0);
		}
		else
		{
			_0x9b0c7fa063e67629(func_53(uParam1, iParam2), sVar1, iVar0, 1);
		}
		if (iParam2 == 0)
		{
			if (&Global_40.f_11184[iParam2] == 1309979101)
			{
				if (!func_168(1309979101, 1, 0))
				{
					func_169(1309979101, 0);
				}
			}
			else
			{
				if (func_168(1309979101, 1, 0) && func_498())
				{
					func_185(1309979101);
				}
				uParam0->f_77 = &Global_40.f_11184[iParam2];
			}
			uParam0->f_78 = 0;
			func_499();
			func_174();
			func_500(uParam0);
			if (Global_1900073->f_21 == 1 && func_393(&(Global_40.f_11184[iParam2])))
			{
				uParam0->f_76 = 1;
			}
			if ((Global_1900073->f_20 == 1 && func_393(&(Global_40.f_11184[iParam2]))) && &Global_40.f_11184[iParam2] == func_501(uParam0))
			{
				uParam0->f_75 = 1;
			}
		}
	}
}

void func_310(var uParam0, int iParam1)
{
	if (func_80(iParam1, 128))
	{
		return;
	}
	if ((*uParam0)[iParam1]->f_12 > 0 && func_285(func_53(uParam0, iParam1), 242628503))
	{
		return;
	}
	if (!func_69(iParam1, 1, 1))
	{
		vVar0 = { get_entity_coords(func_53(uParam0, iParam1), true, false) };
		fVar3 = vdist(vVar0, (*uParam0)[iParam1]->f_7);
		if (fVar3 < 10f)
		{
			(*uParam0)[iParam1]->f_11 = 10000;
		}
		else
		{
			(*uParam0)[iParam1]->f_11 = round(fVar3) * 1000;
		}
		if ((*uParam0)[iParam1]->f_11 > 60000)
		{
			(*uParam0)[iParam1]->f_11 = 60000;
		}
	}
	clear_ped_tasks(func_53(uParam0, iParam1), 1, 0);
	open_sequence_task(&iVar4);
	if (!func_69(iParam1, 1, 1) && fVar3 > 1.25f)
	{
		task_follow_nav_mesh_to_coord(0, (*uParam0)[iParam1]->f_7, 1f, (*uParam0)[iParam1]->f_11, 0.25f, 4, 40000f);
		(*uParam0)[iParam1]->f_12 = 2;
	}
	else
	{
		(*uParam0)[iParam1]->f_12 = 1;
	}
	task_achieve_heading(0, (*uParam0)[iParam1]->f_10, 0);
	task_stand_still(0, -1);
	close_sequence_task(iVar4);
	task_perform_sequence(func_53(uParam0, iParam1), iVar4);
	clear_sequence_task(&iVar4);
	_0x2208438012482a1a(func_53(uParam0, iParam1), false, false);
	if (func_69(iParam1, 1, 1))
	{
	}
}

bool func_311(var uParam0, int iParam1)
{
	if (func_80(iParam1, 128))
	{
		if (func_69(iParam1, 1, 1) && !func_139(uParam0, iParam1))
		{
			return false;
		}
		return true;
	}
	if (((*uParam0)[iParam1]->f_12 > 0 && func_285(func_53(uParam0, iParam1), 242628503)) && get_sequence_progress(func_53(uParam0, iParam1)) >= (*uParam0)[iParam1]->f_12)
	{
		return true;
	}
	return false;
}

void func_312(var uParam0, int iParam1)
{
	func_197(iParam1, 128);
	if ((func_69(iParam1, 1, 1) || func_55((*uParam0)[iParam1]->f_7)) || func_80(iParam1, 128))
	{
		return;
	}
	vVar0 = { get_entity_coords(func_53(uParam0, iParam1), true, false) };
	if (vdist(vVar0, (*uParam0)[iParam1]->f_7) > 1.25f)
	{
		set_entity_coords(func_53(uParam0, iParam1), (*uParam0)[iParam1]->f_7, true, false, true, true);
	}
	fVar3 = get_entity_heading(func_53(uParam0, iParam1));
	if (fVar3 > ((*uParam0)[iParam1]->f_10 + 2f) || fVar3 < ((*uParam0)[iParam1]->f_10 - 2f))
	{
		set_entity_heading(func_53(uParam0, iParam1), (*uParam0)[iParam1]->f_10);
	}
}

bool func_313()
{
	return Global_1900073->f_15;
}

int func_314(int iParam0, int iParam1)
{
	iVar1 = func_502(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (&Global_17504.f_1003[iVar0] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_315(var uParam0, int iParam1)
{
	if (iParam1 == -1891229662)
	{
		return func_504(0, func_503(iParam1, 1), 11, 2116153146);
	}
	return func_504(0, func_503(iParam1, 1), 11, iParam1);
}

int func_316(int iParam0)
{
	if (!func_418(iParam0))
	{
		return -1;
	}
	return shift_right(func_505(iParam0) & 2147418112, 16);
}

bool func_317(int iParam0, int iParam1)
{
	if (!func_239(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

int func_318(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_506(iParam0))
	{
		vVar1 = { func_507(iParam0, iVar0) };
		if (func_508(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_319(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_509(iParam0, iParam1, bParam2);
}

void func_320(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		uVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(uVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(uVar1) };
			if (_0x769bb7626b8cdb06(vVar2, 1f, 0, iParam0, 16384))
			{
				_0xfdfecc6ee4491e11(uVar1);
				(*Global_1911670)[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_321(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16078)
	{
		uVar1 = &Global_1310750->f_16078[iVar0];
		if (_0xf6a8a652a6b186cd(uVar1))
		{
			if (vdist(_0xc4019cf9ae8e931a(uVar1), vParam0) < fParam3)
			{
				_0xfdfecc6ee4491e11(uVar1);
				Global_1310750->f_16078[iVar0] = 0;
				*Global_17504.f_2084[iVar0] = { 0f, 0f, 0f };
				Global_17504.f_2084[iVar0]->f_3 = -1;
				Global_17504.f_2084[iVar0]->f_4 = 0;
			}
		}
		iVar0++;
	}
}

bool func_322()
{
	if (func_1() || Global_1900073->f_19 == 0)
	{
		return false;
	}
	return true;
}

void func_323(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (!func_50(uParam0, 32768))
		{
			func_51(uParam0, 32768);
			Var0 = 1;
			Var0.f_1 = -1415022764;
			_0x8a59d44189af2bc5(&Var0, -1001145251);
		}
	}
	else if (func_50(uParam0, 32768))
	{
		func_204(uParam0, 32768);
		_0x160825dadf1b04b3();
	}
}

void func_324(var uParam0)
{
	func_510(uParam0);
	func_511(&(uParam0->f_105), 0);
	func_511(&(uParam0->f_105), 1);
	func_511(&(uParam0->f_105), 2);
}

bool func_325(var uParam0, int iParam1)
{
	return func_512(*uParam0, iParam1);
}

void func_326(var uParam0, int iParam1, bool bParam2)
{
	if (func_182(&(uParam0->f_105[iParam1])))
	{
		return;
	}
	iVar0 = 0;
	if (bParam2 == 0)
	{
		iVar0 = 2;
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (iParam1 == 12)
	{
		sVar1 = func_395(func_394(func_501(uParam0)), 109029619);
		uParam0->f_105[iParam1] = func_513(_create_var_string(10, func_302(iParam1), sVar1), -1, 0, 0, iVar0, 1);
	}
	else
	{
		uParam0->f_105[iParam1] = func_513(_create_var_string(2, func_302(iParam1)), -1, 0, 0, iVar0, 1);
	}
	func_399(2048);
}

void func_327(var uParam0, int iParam1)
{
	if (!func_325(uParam0, iParam1))
	{
		func_423(uParam0, iParam1);
	}
}

void func_328(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 256))
	{
		func_51(uParam0, 256);
		func_514(3);
	}
	if (uParam0->f_19 != iParam1)
	{
		if (uParam0->f_19 > iParam1)
		{
			func_515();
		}
		uParam0->f_19 = iParam1;
		func_516(uParam0->f_19);
	}
}

bool func_329()
{
	return Global_1935496->f_11;
}

float func_330(var uParam0, int iParam1)
{
	iVar0 = 1;
	if (iVar0 == 1)
	{
		if (iParam1 == 0 || *uParam0 == 1)
		{
			return 90f;
		}
		else if (iParam1 == 1)
		{
			return 50f;
		}
		else if (iParam1 == 2)
		{
			return 130f;
		}
		else if (iParam1 == 3)
		{
			return 130f;
		}
	}
	else if (iParam1 == 0 || *uParam0 == 1)
	{
		return 270f;
	}
	else if (iParam1 == 1)
	{
		return 310f;
	}
	else if (iParam1 == 2)
	{
		return 230f;
	}
	else if (iParam1 == 3)
	{
		return 230f;
	}
	return 0f;
}

float func_331(int iParam0)
{
	if (iParam0 == 0)
	{
		return 90f;
	}
	else if (iParam0 == 1)
	{
		return 90f;
	}
	else if (iParam0 == 2)
	{
		return 90f;
	}
	else if (iParam0 == 3)
	{
		return 90f;
	}
	return 90f;
}

float func_332(float fParam0, float fParam1, float fParam2)
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

void func_333(int iParam0, int iParam1)
{
	if (func_360(iParam0, iParam1))
	{
		func_49(&(Global_1900073->f_26[iParam0]->f_6), iParam1);
	}
}

int func_334(var uParam0, int iParam1)
{
	if (func_68(uParam0, iParam1))
	{
		return get_current_ped_weapon_entity_index(func_53(uParam0, iParam1), 0);
	}
	return 0;
}

void func_335(int iParam0)
{
	func_517(iParam0, -1527293029, 0);
	func_517(iParam0, 1059426360, 0);
	func_517(iParam0, 488496242, 0);
	func_517(iParam0, 1380607804, 0);
	func_517(iParam0, -1753819339, 0);
	func_517(iParam0, 149706141, 0);
	func_517(iParam0, 2100131425, 0);
	func_517(iParam0, -978159653, 0);
	func_517(iParam0, -2041382104, 0);
	func_517(iParam0, 1334018438, 0);
	func_517(iParam0, 1815744868, 0);
	func_517(iParam0, 1055480217, 0);
	func_517(iParam0, -1916584960, 0);
}

void func_336()
{
	func_517(0, -1527293029, 1);
	func_517(0, 1059426360, 1);
	func_517(0, 488496242, 1);
	func_517(0, 1380607804, 1);
	func_517(0, -1753819339, 1);
	func_517(0, 149706141, 1);
	func_517(0, 2100131425, 1);
	func_517(0, -978159653, 1);
	func_517(0, -2041382104, 1);
	func_517(0, 1334018438, 1);
	func_517(0, 1815744868, 1);
	func_517(0, 1055480217, 1);
	func_517(0, -1916584960, 1);
}

void func_337(var uParam0, var uParam1, int iParam2)
{
	bVar0 = does_entity_exist(func_260(iParam2));
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 40)
	{
		if ((((&Global_1900073->f_26[iParam2] == 6 || &Global_1900073->f_26[iParam2] == 10) && (*uParam0)[iParam2]->f_74 == 0) && bVar0 == 1) && !is_entity_dead(&(uParam1->f_163[iVar1])))
		{
			(*uParam0)[iParam2]->f_30[iVar1] = func_518(func_262(uParam1, iVar1), func_261(iParam2));
		}
		else
		{
			(*uParam0)[iParam2]->f_30[iVar1] = 99999f;
		}
		iVar1++;
	}
}

void func_338(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_72(uParam0);
		uParam0->f_18 = 0;
		func_324(uParam0);
	}
}

void func_339(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_519(uParam0, uParam1, uParam2, iParam3);
	func_166(uParam1, iParam3, 1024);
	if (iParam3 == 0)
	{
		if (func_297() || is_control_pressed(0, -1404316431))
		{
			disable_control_action(0, -128997553, false);
			disable_control_action(0, 130948705, false);
			if (func_301())
			{
				func_103();
			}
			_0xdd1232b332cbb9e7(2, 1, 0);
			func_72(uParam0);
		}
		else
		{
			func_520(&(uParam0->f_105), 25, 0);
			func_520(&(uParam0->f_105), 27, 0);
			func_520(&(uParam0->f_105), 29, 0);
			if (func_521(uParam0, iParam3))
			{
				disable_control_action(0, -128997553, false);
				disable_control_action(0, 130948705, false);
			}
			else if (func_393(&(Global_40.f_11184[0])))
			{
				if (_is_using_keyboard(0) && _0xf4cb347d7b5eb0fd())
				{
					func_110(uParam0, 22, 0, -1, 1);
				}
				else
				{
					func_110(uParam0, 21, 0, -1, 1);
				}
			}
			if (func_522())
			{
				func_523(uParam0, 7, 0, 1);
			}
			func_524(uParam0, uParam1, uParam2);
		}
		func_525(uParam0, uParam1, uParam2);
		func_526(uParam0, uParam1);
		func_527(uParam0, uParam1);
	}
	else if (func_79(uParam1, iParam3, 1))
	{
		iVar0 = 1;
		if (!func_69(iParam3, 1, 1))
		{
			fVar1 = get_entity_heading(func_53(uParam1, iParam3));
			if (fVar1 > ((*uParam1)[iParam3]->f_10 + 10f) || fVar1 < ((*uParam1)[iParam3]->f_10 - 10f))
			{
				iVar0 = 0;
				if (!func_285(func_53(uParam1, iParam3), 1920390111))
				{
					task_achieve_heading(func_53(uParam1, iParam3), (*uParam1)[iParam3]->f_10, 0);
				}
			}
		}
		if (((iVar0 == 1 && !func_521(uParam0, iParam3)) && !func_285(func_53(uParam1, iParam3), 716706914)) && !func_285(func_53(uParam1, iParam3), 425310094))
		{
			task_weapon(func_53(uParam1, iParam3));
			func_104(&((*uParam1)[iParam3]->f_99));
		}
	}
}

void func_340(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_519(uParam0, uParam1, uParam2, iParam3);
	func_528(&(uParam0->f_676), uParam1, iParam3);
	if (iParam3 == 0)
	{
		if (func_521(uParam0, iParam3))
		{
			disable_control_action(0, -128997553, false);
			disable_control_action(0, 130948705, false);
		}
		func_520(&(uParam0->f_105), 21, 0);
		func_520(&(uParam0->f_105), 22, 0);
		func_520(&(uParam0->f_105), 27, 0);
		func_520(&(uParam0->f_105), 29, 0);
		func_529(uParam0, uParam1, uParam2);
		func_72(uParam0);
		func_406(uParam0);
		func_407(uParam0);
	}
	else if (!func_521(uParam0, iParam3))
	{
		if (func_530(&((*uParam1)[iParam3]->f_99)) > 2f)
		{
			if (uParam0->f_676.f_4 == 1)
			{
				Global_1900073->f_26[iParam3]->f_15 = get_random_float_in_range(0.25f, 0.5f);
			}
			else
			{
				Global_1900073->f_26[iParam3]->f_15 = get_random_float_in_range(0.5f, 1f);
			}
			func_153(iParam3, 1024, 1);
		}
	}
}

void func_341(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_520(&(uParam0->f_105), 21, 0);
		func_520(&(uParam0->f_105), 22, 0);
		func_520(&(uParam0->f_105), 25, 0);
		if (Global_1900073->f_22 == 0)
		{
			func_110(uParam0, 27, 1, -1, 1);
		}
		else
		{
			func_110(uParam0, 29, 1, -2, 1);
		}
	}
}

void func_342(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		func_72(uParam0);
		func_520(&(uParam0->f_105), 27, 0);
		func_520(&(uParam0->f_105), 29, 0);
		func_531(uParam0, uParam0->f_5);
		func_532(uParam0);
		if (func_393(&(Global_40.f_11184[iParam3])))
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 1);
		}
	}
	func_534(uParam1, iParam3);
	func_166(uParam1, iParam3, 1);
	func_535(uParam1, iParam3);
}

void func_343(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		if ((!func_536(uParam0, 4) && Global_1900073->f_26[iParam3]->f_2 > 2f) && !func_436(uParam1, iParam3))
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 4);
		}
	}
}

void func_344(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_80(iParam3, 4) || func_80(iParam3, 8))
	{
		return;
	}
	func_537(uParam0, uParam1, iParam3);
	func_538(uParam1, iParam3);
	func_534(uParam1, iParam3);
	func_470(uParam1, iParam3);
	func_539(uParam0, uParam1, uParam2, iParam3);
	if (iParam3 == 0)
	{
		if (!func_79(uParam1, iParam3, 4096) && !func_540())
		{
			func_542(uParam0, func_541(uParam0));
			func_543(uParam0, uParam1);
			func_544(uParam0, uParam1, uParam2);
		}
		func_545(uParam0, uParam1);
	}
	func_546(uParam0, uParam1, uParam2, iParam3);
	if (func_547(uParam0, uParam1, iParam3))
	{
		func_548(uParam1, iParam3, 4096);
		func_153(iParam3, 128, 1);
		func_52(iParam3, 2048);
		func_33(uParam1, iParam3);
		func_415(uParam0, uParam1, uParam2, iParam3, 2);
		if (iParam3 == 0)
		{
			func_531(uParam0, uParam0->f_6);
			func_72(uParam0);
			if ((!func_393(&(Global_40.f_11184[iParam3])) && (*uParam1)[iParam3]->f_71 == 0) && (*uParam1)[iParam3]->f_6 == 1)
			{
				func_110(uParam0, 57, 1, -2, 1);
			}
			else if (func_301())
			{
				func_103();
			}
		}
	}
	else if (func_549(uParam0, uParam1, iParam3))
	{
	}
	else if (func_550(uParam0, uParam1, uParam2, iParam3))
	{
	}
	else
	{
		func_551(uParam0, uParam1, uParam2, iParam3);
		if (iParam3 == 0)
		{
			func_552(uParam1);
		}
	}
}

void func_345(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_52(iParam3, 4);
	func_52(iParam3, 8);
	if (!func_74(&((*uParam1)[iParam3]->f_212)))
	{
		func_104(&((*uParam1)[iParam3]->f_212));
	}
	if (iParam3 == 0)
	{
		func_520(&(uParam0->f_105), 30, 0);
		func_520(&(uParam0->f_105), 39, 0);
		func_520(&(uParam0->f_105), 31, 0);
		func_520(&(uParam0->f_105), 32, 0);
		func_520(&(uParam0->f_105), 33, 0);
		func_520(&(uParam0->f_105), 34, 0);
		func_520(&(uParam0->f_105), 41, 0);
		func_544(uParam0, uParam1, uParam2);
		if (&Global_1900073->f_154[iParam3] == 1)
		{
			if (!func_540())
			{
				func_523(uParam0, 4, 0, 1);
			}
			func_553(uParam0, uParam1, uParam2, 0);
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0) && !func_146(uParam2, iVar0))
			{
				if (func_74(uParam0->f_105.f_154[60]) && func_110(uParam0, 60, 0, -2, 0))
				{
					func_554(&(uParam0->f_105), 60, 60);
				}
				if ((func_74(uParam0->f_105.f_154[59]) && !_0x5952dfa38fa529fe()) && func_110(uParam0, 59, 0, -2, 0))
				{
					func_554(&(uParam0->f_105), 59, 60);
				}
			}
		}
	}
	func_555(uParam1, iParam3);
	if (func_469(uParam0, uParam1, iParam3, 1))
	{
		func_153(iParam3, 8, 1);
	}
	else if (func_556(uParam0, iParam3, 1))
	{
		func_153(iParam3, 8, 1);
	}
	else if (func_557(uParam0, uParam1, uParam2, iParam3))
	{
		func_558(uParam0, uParam1, uParam2, iParam3);
		func_153(iParam3, 2, 1);
	}
	else
	{
		func_559(uParam0, uParam1, uParam2, iParam3);
		func_551(uParam0, uParam1, uParam2, iParam3);
		if (iParam3 == 0)
		{
			func_560(uParam0, uParam1, uParam2);
		}
	}
}

void func_346(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_72(uParam0);
		uParam0->f_18 = 0;
		func_324(uParam0);
	}
}

void func_347(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0 && func_102(iParam3, 256, 1))
	{
		func_561(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_348(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_333(iParam3, 1);
	func_344(uParam0, uParam1, uParam2, iParam3);
	if (iParam3 == 0)
	{
		func_520(&(uParam0->f_105), 30, 0);
		func_520(&(uParam0->f_105), 39, 0);
		func_520(&(uParam0->f_105), 31, 0);
		func_520(&(uParam0->f_105), 32, 0);
		func_520(&(uParam0->f_105), 33, 0);
		func_520(&(uParam0->f_105), 34, 0);
		func_520(&(uParam0->f_105), 41, 0);
	}
}

void func_349(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_558(uParam0, uParam1, uParam2, iParam3);
	func_197(iParam3, 16);
	if (iParam3 == 0)
	{
		func_520(&(uParam0->f_105), 45, 0);
		func_520(&(uParam0->f_105), 47, 0);
		func_520(&(uParam0->f_105), 48, 0);
		func_520(&(uParam0->f_105), 49, 0);
		func_520(&(uParam0->f_105), 75, 0);
		func_520(&(uParam0->f_105), 52, 0);
		func_520(&(uParam0->f_105), 53, 0);
		func_531(uParam0, uParam0->f_8);
		func_535(uParam1, iParam3);
	}
	else
	{
		Global_1900073->f_26[iParam3]->f_22 = -1f;
		Global_1900073->f_26[iParam3]->f_23 = 0f;
	}
}

void func_350(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_562(uParam0, uParam1, uParam2, iParam3);
	if (!func_79(uParam1, iParam3, 32768) && func_102(iParam3, 32, 1))
	{
		func_548(uParam1, iParam3, 32768);
	}
	if ((func_79(uParam1, iParam3, 32768) && !func_79(uParam1, iParam3, 64)) && !func_79(uParam1, iParam3, 32))
	{
		func_563(uParam0, uParam1, uParam2, iParam3);
		func_564(uParam0, uParam1, iParam3);
		if (&Global_1900073->f_154[iParam3] == 1)
		{
			if (iParam3 == 0)
			{
				iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
				if (func_238(iVar0))
				{
					func_565(&(uParam0->f_31), &(uParam2->f_532[iVar0]));
				}
			}
			func_566(uParam0, uParam1, uParam2, iParam3, 0);
		}
		if (func_102(iParam3, 4, 1))
		{
			if (&Global_1900073->f_154[iParam3] == 1)
			{
				func_567(uParam0, uParam1, uParam2, iParam3);
			}
			else
			{
				func_568(uParam0, uParam1, uParam2, iParam3);
			}
			if (iParam3 == 0)
			{
				func_252(uParam0, 5);
				func_252(uParam0, 6);
			}
		}
		else
		{
			func_569(uParam0, uParam1, uParam2, iParam3);
		}
	}
	func_570(uParam1, iParam3);
	func_571(uParam0, uParam1, uParam2, iParam3);
	func_572(uParam1, iParam3);
	func_573(uParam0, uParam1, uParam2, iParam3);
	func_574(uParam0, uParam1, uParam2, iParam3);
	func_575(uParam0, uParam1, uParam2, iParam3);
}

void func_351(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_72(uParam0);
		uParam0->f_18 = 0;
		func_406(uParam0);
		func_407(uParam0);
		func_576(uParam0);
	}
}

void func_352(var uParam0)
{
	if ((&Global_1900073->f_26[0] <= 1 || &Global_1900073->f_26[0] == 9) || &Global_1900073->f_26[0] == 13)
	{
		func_184(uParam0, 0);
	}
	else
	{
		func_184(uParam0, 1);
	}
}

void func_353(var uParam0, var uParam1)
{
	if (((!func_577() || !func_68(uParam1, 0)) || &Global_40.f_11184[0] != func_501(uParam0)) || func_285(func_53(uParam1, 0), 716706914))
	{
		func_408(uParam0);
	}
	else if (&Global_1900073->f_26[0] == 1)
	{
		if (_is_using_keyboard(0) && _0xf4cb347d7b5eb0fd())
		{
			func_326(uParam0, 24, !func_325(&(uParam0->f_28), 1));
		}
		else
		{
			func_326(uParam0, 23, !func_325(&(uParam0->f_28), 1));
		}
		func_327(&(uParam0->f_28), 1);
		func_578(uParam0, 0);
	}
	else if (&Global_1900073->f_26[0] == 2)
	{
		func_326(uParam0, 26, !func_325(&(uParam0->f_28), 2));
		func_327(&(uParam0->f_28), 2);
		func_578(uParam0, 1);
	}
	else if (&Global_1900073->f_26[0] == 3)
	{
		func_326(uParam0, 28, !func_325(&(uParam0->f_28), 4));
		func_327(&(uParam0->f_28), 4);
		func_578(uParam0, 2);
	}
	else
	{
		func_408(uParam0);
	}
}

void func_354(var uParam0, var uParam1)
{
	if ((!func_579() || &Global_1900073->f_26[0] != 6) || func_79(uParam1, 0, 4096))
	{
		func_409(uParam0);
	}
	else if (func_397(&(Global_40.f_11184[0])) || func_398(&(Global_40.f_11184[0])))
	{
		if (!is_control_pressed(0, -128997553))
		{
			if (_is_using_keyboard(0) && _0xf4cb347d7b5eb0fd())
			{
				func_326(uParam0, 36, !func_325(&(uParam0->f_29), 1));
			}
			else
			{
				func_326(uParam0, 35, !func_325(&(uParam0->f_29), 1));
			}
			func_327(&(uParam0->f_29), 1);
			func_580(uParam0, 0);
		}
		else
		{
			if (_0x5952dfa38fa529fe())
			{
				func_326(uParam0, 38, !func_325(&(uParam0->f_29), 2));
			}
			else
			{
				func_326(uParam0, 37, !func_325(&(uParam0->f_29), 2));
			}
			func_327(&(uParam0->f_29), 2);
			func_580(uParam0, 1);
		}
	}
	else
	{
		func_326(uParam0, 40, 1);
	}
}

void func_355(var uParam0, var uParam1, var uParam2)
{
	if (!func_581() || &Global_1900073->f_26[0] != 7)
	{
		func_410(uParam0);
	}
	else
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, 0);
		if (!func_238(iVar0))
		{
			func_408(uParam0);
		}
		else if (func_146(uParam2, iVar0))
		{
			func_326(uParam0, 46, !func_325(&(uParam0->f_30), 1));
			func_327(&(uParam0->f_30), 1);
			func_582(uParam0, 0);
		}
		else
		{
			if (_0x5952dfa38fa529fe())
			{
				func_326(uParam0, 51, !func_325(&(uParam0->f_30), 2));
			}
			else
			{
				func_326(uParam0, 50, !func_325(&(uParam0->f_30), 2));
			}
			func_327(&(uParam0->f_30), 2);
			func_582(uParam0, 1);
		}
	}
}

void func_356(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, var uParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, uParam10);
}

bool func_357()
{
	if (&Global_1900073->f_26[0] == 1)
	{
		return true;
	}
	return false;
}

float func_358(float fParam0, float fParam1, float fParam2)
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

float func_359(var uParam0, int iParam1)
{
	return func_584(func_583((*uParam0)[iParam1]->f_18));
}

bool func_360(int iParam0, int iParam1)
{
	return func_207(Global_1900073->f_26[iParam0]->f_6, iParam1);
}

void func_361(var uParam0, int iParam1)
{
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		sVar0 = func_379(iVar2);
		fVar1 = 0f;
		if (!is_string_null_or_empty(sVar0) && decor_exist_on(iParam1, sVar0))
		{
			fVar1 = decor_get_float(iParam1, sVar0);
		}
		if (fVar1 > 0f && does_entity_exist(uParam0->f_12))
		{
			func_585(uParam0, iVar2, fVar1);
		}
		else
		{
			func_586(uParam0, iVar2);
		}
		iVar2++;
	}
}

void func_362(var uParam0, int iParam1, int iParam2)
{
}

void func_363(var uParam0, int iParam1, int iParam2)
{
}

void func_364(var uParam0, int iParam1, int iParam2)
{
}

void func_365(var uParam0, int iParam1, int iParam2)
{
}

void func_366(var uParam0, int iParam1, int iParam2)
{
}

void func_367(var uParam0, int iParam1, int iParam2)
{
}

void func_368(var uParam0, int iParam1, int iParam2)
{
}

void func_369(var uParam0, int iParam1, int iParam2)
{
}

void func_370(var uParam0, int iParam1, int iParam2)
{
}

void func_371(var uParam0, int iParam1, int iParam2)
{
}

void func_372(var uParam0, int iParam1, int iParam2)
{
}

void func_373(var uParam0, int iParam1, int iParam2)
{
}

void func_374(var uParam0, int iParam1, int iParam2)
{
}

void func_375(var uParam0, int iParam1, int iParam2)
{
}

void func_376(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_586(uParam0, iVar0);
		iVar0++;
	}
}

int func_377(int iParam0)
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

void func_378(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

char* func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Fish_Attractor_Bluegill";
		case 1:
			return "Fish_Attractor_BullheadCatfish";
		case 2:
			return "Fish_Attractor_ChainPickerel";
		case 3:
			return "Fish_Attractor_ChannelCatfish";
		case 4:
			return "Fish_Attractor_LakeSturgeon";
		case 5:
			return "Fish_Attractor_LargemouthBass";
		case 6:
			return "Fish_Attractor_LongnoseGar";
		case 7:
			return "Fish_Attractor_Muskie";
		case 8:
			return "Fish_Attractor_NorthernPike";
		case 9:
			return "Fish_Attractor_Perch";
		case 10:
			return "Fish_Attractor_RedfinPickerel";
		case 11:
			return "Fish_Attractor_RockBass";
		case 12:
			return "Fish_Attractor_SmallmouthBass";
		case 13:
			return "Fish_Attractor_SockeyeSalmon";
		case 14:
			return "Fish_Attractor_SteelheadTrout";
		default:
			break;
	}
	return "";
}

int func_380()
{
	return _get_water_map_zone_at_coords(Global_36);
}

bool func_381(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 0);
}

void func_382(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_587())
	{
		return;
	}
	sVar1 = func_588(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_589(iParam4))
	{
		if (func_488(iParam0))
		{
			iParam4 = func_591(func_590(iParam0));
		}
		else
		{
			iParam4 = func_591(iParam1);
		}
	}
	if (func_589(iParam4))
	{
		iVar3 = func_592(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_594(func_593(iParam2));
	}
	else if ((func_595(iParam1, 2) || func_596(iParam4, 2)) && !Global_1894899->f_9)
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
	else if ((func_488(iParam0) && func_597(iParam0, 16777216)) && !Global_1894899->f_9)
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
		iVar4 = func_599(func_598());
		iVar5 = func_600(func_598());
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
				fVar7 = func_601(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_395(&cVar6, 109029619), sVar9, func_395(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_601(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_395(&cVar6, 109029619), func_395(&cVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_602(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

char* func_383(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_384(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_385(int iParam0)
{
	if (!func_384(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_386(int iParam0, int iParam1)
{
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_603(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_604("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_605(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_606(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_607(iVar1);
				return true;
			}
			iVar3++;
		}
		func_607(iVar1);
	}
	return false;
}

int func_387(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_384(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_385(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_603(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_608(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_609(bParam2), iParam0, 0);
	return iVar2;
}

int func_388(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((iParam0 == -1490884871 || iParam0 == -151356522) || iParam0 == 1006434513) || iParam0 == 323124696) || iParam0 == 1481288777) || iParam0 == 306916738) || iParam0 == -2108314374) || iParam0 == -1824685471) || iParam0 == 724563284) || iParam0 == -1320934717) || iParam0 == 803930024) || iParam0 == 1917027383) || iParam0 == -1193798153) || iParam0 == 1111663869) || iParam0 == -855052577) || iParam0 == -787702678) || iParam0 == 1425358430) || iParam0 == -5376850) || iParam0 == -804542901) || iParam0 == 1297433586) || iParam0 == 1338219162) || iParam0 == -1696275132) || iParam0 == -293259613) || iParam0 == -1538397860) || iParam0 == -395458616) || iParam0 == 588902637) || iParam0 == 193037129) || iParam0 == -161595323) || iParam0 == -861419347) || iParam0 == 1416872916) || iParam0 == -1114363619) || iParam0 == 357567274) || iParam0 == 1500919793) || iParam0 == -368407134) || iParam0 == 683583793) || iParam0 == 1042542561) || iParam0 == 1997759228) || iParam0 == -1202625002) || iParam0 == 56657913) || iParam0 == 1265573293) || iParam0 == 485620834) || iParam0 == 1570826681) || iParam0 == -1030441283) || iParam0 == 727522818) || iParam0 == 785407605)
	{
		return 0;
	}
	return 1;
}

bool func_389(bool bParam0)
{
	if (func_26() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_609(bParam0));
}

bool func_390(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	if (!func_610(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_611(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_612(iParam0, bParam2);
	iVar2 = 0;
	if (func_387(iParam0, 0, 0) == 0)
	{
		if (func_613(iParam0))
		{
			iVar5 = func_614(iParam0);
			iVar6 = func_615(iVar5);
			iVar7 = func_616(iVar6) + 1;
			func_617(iVar5);
			if (func_618(38))
			{
				func_619(483, 0);
			}
			else
			{
				func_619(482, 0);
			}
			if (iVar7 == func_620(iVar6))
			{
				func_390(func_621(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_622() && func_623(4))
				{
					if (func_622() && (func_624(38) || func_618(38)))
					{
						func_626(38, func_621(iVar6), 0, 0, func_625(), 0, -1, 0);
						func_627(2);
					}
					else
					{
						func_626(38, func_621(iVar6), 0, 0, func_625(), 0, -1, 0);
						func_627(1);
					}
				}
			}
			else if (func_622() && func_623(4))
			{
				if (func_622() && (func_624(38) || func_618(38)))
				{
					func_626(38, 0, 0, 0, func_625(), 0, -1, 0);
					func_627(2);
				}
				else
				{
					func_626(38, 0, 0, 0, func_625(), 0, -1, 0);
					func_627(1);
				}
			}
			if (func_622() && func_623(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_622() && (func_624(38) || func_618(38)))
					{
						func_628(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_628(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_385(iParam0) == -1037537535)
	{
		if ((!func_629(iParam0, 866047851) && !func_629(iParam0, -1979000645)) && !func_629(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_630(iParam0, 8388608) && !func_631(28))
	{
		func_632(28);
	}
	if (!bVar3)
	{
		if (func_629(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_633(iParam0) == -1447088266)
			{
				iVar1 = func_635(func_634(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_26() == -1)
					{
						func_636(iVar1);
					}
					if (func_389(0) && func_637(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_638(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_26() == -1)
					{
						func_636(iParam0);
					}
					if (func_389(0) && func_637(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_638(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_385(iParam0) == -427144552)
		{
			if (!func_639(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_385(iParam0) == 307971639 && func_640(iParam0))
		{
			if (!func_641(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_629(iParam0, 866047851))
		{
			func_642(iParam0);
		}
		else if (func_629(iParam0, 2000026003))
		{
			func_643(iParam0);
		}
		else if (func_629(iParam0, -103750053))
		{
			func_645(func_644(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_645(func_646(-717883113, 2091222383), iVar0);
		}
		else if (func_629(iParam0, -121341956) && !func_629(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_647((*Global_1835011)[4]->f_1, 1))
				{
					func_619(498, 0);
				}
			}
			if (func_629(iParam0, -2017733358) || func_629(iParam0, -1369131378))
			{
				func_648(iParam0);
			}
		}
		else if (func_629(iParam0, -136654233))
		{
			if (func_629(iParam0, -1021472396))
			{
			}
		}
		else if (func_629(iParam0, -1466706512) && func_629(iParam0, 1147021565))
		{
			func_619(484, 0);
		}
		else if (func_629(iParam0, 1147021565) && func_629(iParam0, -524514947))
		{
		}
		else if (func_629(iParam0, 554195525))
		{
		}
		else if (func_629(iParam0, 589988438))
		{
			if (func_649())
			{
				func_650(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_629(iParam0, 787083290) && func_629(iParam0, 949916894))
		{
			func_651(iParam0);
		}
		else if (func_629(iParam0, -1718133314))
		{
			func_652(iParam0);
		}
		else if (func_629(iParam0, -1738650224))
		{
			func_653(iParam0);
		}
		else if (func_629(iParam0, -1112814642) && func_629(iParam0, 949916894))
		{
			func_654(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_629(iParam0, 1841149704))
		{
			func_655();
		}
		else if (func_629(iParam0, 606799272))
		{
			func_656(iParam0, iParam1);
			func_657(iParam0);
		}
		else if (func_629(iParam0, -1112814642) && func_629(iParam0, -1697809989))
		{
			func_658(iParam0, 0, 0, 0);
		}
		else if (func_629(iParam0, -2017733358) || func_629(iParam0, -1369131378))
		{
			func_648(iParam0);
		}
		else if (func_629(iParam0, -1921346699))
		{
			if (func_26() != -1)
			{
				return false;
			}
			func_659(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_629(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_168(215778062, 1, 0))
					{
						func_390(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_168(670273567, 1, 0))
					{
						func_390(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_168(-967317137, 1, 0))
					{
						func_390(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_168(526074061, 1, 0))
					{
						func_390(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_168(-1045488665, 1, 0))
					{
						func_390(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_168(471514780, 1, 0))
					{
						func_390(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_629(iParam0, -839724752) && func_630(iParam0, 4))
		{
			if (!func_618(42))
			{
				func_660(iParam0);
			}
		}
		else if (func_629(iParam0, 1399091007))
		{
			func_661(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_629(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_390(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
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
				Jump @4449; //curOff = 2860
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				Jump @4449; //curOff = 2876
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				Jump @4449; //curOff = 2892
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				Jump @4449; //curOff = 2908
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				Jump @4449; //curOff = 2924
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				Jump @4449; //curOff = 2940
				func_632(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_662(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_663(&iVar9, 0))
				{
					func_637(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				Jump @4449; //curOff = 3033
				if (func_26() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_662(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				Jump @4449; //curOff = 3100
				Jump @4449; //curOff = 3103
				func_619(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_664();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_665();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_666();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_667();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_668();
				Jump @4449; //curOff = 3354
				bParam2 = true;
				bVar4 = true;
				Jump @4449; //curOff = 3363
				func_669(499813453, 854119837, 0);
				func_670(499813453, 0);
				func_671(1);
				Jump @4449; //curOff = 3396
				func_669(499813453, -1292544588, 0);
				func_670(499813453, 0);
				func_671(2);
				Jump @4449; //curOff = 3429
				func_669(499813453, -1003325394, 0);
				func_670(499813453, 0);
				func_671(4);
				Jump @4449; //curOff = 3462
				func_669(666607663, -335460405, 0);
				func_670(666607663, 0);
				func_672(1);
				Jump @4449; //curOff = 3495
				func_669(666607663, 903797617, 0);
				func_670(666607663, 0);
				func_672(2);
				Jump @4449; //curOff = 3528
				func_669(666607663, 669728650, 0);
				func_670(666607663, 0);
				func_672(4);
				Jump @4449; //curOff = 3561
				func_669(-220219788, 1214120047, 0);
				func_670(-220219788, 0);
				func_673(1);
				Jump @4449; //curOff = 3594
				func_669(-220219788, 655769340, 0);
				func_670(-220219788, 0);
				func_673(2);
				Jump @4449; //curOff = 3627
				func_669(-220219788, 885316185, 0);
				func_670(-220219788, 0);
				func_673(4);
				Jump @4449; //curOff = 3660
				func_669(218622660, -1491419385, 0);
				func_670(218622660, 0);
				func_674(1);
				Jump @4449; //curOff = 3693
				func_669(218622660, 1809565830, 0);
				func_670(218622660, 0);
				func_674(2);
				Jump @4449; //curOff = 3726
				func_669(390004462, -628873767, 0);
				func_670(390004462, 0);
				func_675(1);
				Jump @4449; //curOff = 3759
				func_669(390004462, -405421956, 0);
				func_670(390004462, 0);
				func_675(2);
				Jump @4449; //curOff = 3792
				func_669(390004462, -1108972386, 0);
				func_670(390004462, 0);
				func_675(4);
				Jump @4449; //curOff = 3825
				func_669(6410548, 1053716392, 0);
				func_670(6410548, 0);
				func_676(1);
				Jump @4449; //curOff = 3856
				func_669(6410548, 806507056, 0);
				func_670(6410548, 0);
				func_676(2);
				Jump @4449; //curOff = 3887
				func_669(6410548, 1571925350, 0);
				func_670(6410548, 0);
				func_676(4);
				Jump @4449; //curOff = 3918
				func_669(6410548, 1330352282, 0);
				func_670(6410548, 0);
				func_676(8);
				Jump @4449; //curOff = 3950
				func_678(242, func_677(-21093309), 0);
				Jump @4449; //curOff = 3969
				func_678(240, func_677(204375141), 0);
				Jump @4449; //curOff = 3988
				func_678(241, func_677(-417963070), 0);
				Jump @4449; //curOff = 4007
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_679(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4449; //curOff = 4054
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_679(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4449; //curOff = 4101
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_679(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4449; //curOff = 4148
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_679(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4449; //curOff = 4195
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_679(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4449; //curOff = 4242
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_679(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				Jump @4449; //curOff = 4289
				func_619(488, 0);
				Jump @4449; //curOff = 4300
				func_619(491, 0);
				Jump @4449; //curOff = 4311
				func_619(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_390(func_680(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_390(func_681(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				Jump @4449; //curOff = 4384
				if (func_631(1))
				{
					func_619(487, 0);
				}
				Jump @4449; //curOff = 4403
				func_619(486, 0);
				Jump @4449; //curOff = 4414
				if (func_26() == -1)
				{
					iParam0 = -1448210800;
				}
				Jump @4449; //curOff = 4432
				func_619(496, 0);
			}
			if (!bVar4)
			{
				if (iVar0 <= 0)
				{
					return false;
				}
				iVar10 = iParam0;
				func_682(&iVar10);
				if (!func_683(iVar10, iVar0, iParam5))
				{
					return false;
				}
				else if (!func_389(0))
				{
					return true;
				}
				if (func_385(iParam0) == -1037537535)
				{
					func_684(iParam0);
				}
				if (func_629(iParam0, -1979000645))
				{
					func_685(iParam0);
				}
			}
			else if (iVar2 != 0)
			{
				if (func_389(0))
				{
					Var11.f_1 = 10;
					Var11.f_12 = 10;
					_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
					iVar34 = 0;
					while (iVar34 < Var11)
					{
						func_390(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
						iVar34++;
					}
				}
				else
				{
					func_686(iVar2, 0);
				}
			}
			Var35 = { func_687(iParam0) };
			if (_stat_id_is_valid(&Var35))
			{
				_0x6a0184e904cdf25e(&Var35, iVar0);
			}
			func_688(iParam0);
			if (fParam6 > 0f)
			{
				if (func_629(iParam0, -839724752))
				{
					func_689(iParam0, fParam6);
				}
			}
			else if (!bParam2)
			{
				bVar37 = iParam5 == 1248274121;
				func_690(iParam0, iVar0, 0, bVar37, 0);
			}
			return true;
		}

int func_391(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_691(iParam0, &uVar0, iParam1, iParam2, iParam3);
}

bool func_392(var uParam0, int iParam1, char* sParam2)
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

bool func_393(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if ((((((((((((iParam0 == -1527293029 || iParam0 == 1059426360) || iParam0 == 488496242) || iParam0 == 1380607804) || iParam0 == -1753819339) || iParam0 == 149706141) || iParam0 == 2100131425) || iParam0 == -978159653) || iParam0 == -2041382104) || iParam0 == 1334018438) || iParam0 == 1815744868) || iParam0 == 1055480217) || iParam0 == -1916584960)
	{
		return true;
	}
	return false;
}

char* func_394(int iParam0)
{
	if (!func_384(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_677(iParam0));
}

char* func_395(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_692(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_396(int iParam0)
{
	if (((iParam0 == 1059426360 || iParam0 == 488496242) || iParam0 == 1380607804) || func_398(iParam0))
	{
		return true;
	}
	return false;
}

bool func_397(int iParam0)
{
	if ((iParam0 == 2100131425 || iParam0 == -978159653) || iParam0 == -2041382104)
	{
		return true;
	}
	return false;
}

bool func_398(int iParam0)
{
	if (((iParam0 == 1334018438 || iParam0 == 1815744868) || iParam0 == 1055480217) || iParam0 == -1916584960)
	{
		return true;
	}
	return false;
}

void func_399(int iParam0)
{
	if (!func_45(iParam0))
	{
		func_229(&(Global_1900073->f_1), iParam0);
	}
}

bool func_400(var uParam0, int iParam1)
{
	if (!is_entity_dead(Global_1900073->f_194) && is_ped_in_vehicle(func_53(uParam0, iParam1), Global_1900073->f_194, true))
	{
		return true;
	}
	if (is_ped_in_any_vehicle(func_53(uParam0, iParam1), true))
	{
		iVar0 = get_vehicle_ped_is_in(func_53(uParam0, iParam1), true);
		if (does_entity_exist(iVar0))
		{
			if (func_693(get_entity_model(iVar0)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_401(var uParam0, int iParam1)
{
	if (!is_entity_dead(Global_1900073->f_194) && is_ped_on_specific_vehicle(func_53(uParam0, iParam1), Global_1900073->f_194))
	{
		return true;
	}
	if (is_ped_on_vehicle(func_53(uParam0, iParam1), false))
	{
		iVar0 = get_closest_vehicle(get_entity_coords(func_53(uParam0, iParam1), true, false), 10f, 0, 75782);
		if (does_entity_exist(iVar0))
		{
			if (func_693(get_entity_model(iVar0)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_402(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_403()
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

int func_404(int iParam0, int iParam1, int iParam2)
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

bool func_405(int iParam0)
{
	return iParam0 != 0;
}

void func_406(var uParam0)
{
	func_694(uParam0);
	func_511(&(uParam0->f_105), 3);
	func_511(&(uParam0->f_105), 4);
	func_511(&(uParam0->f_105), 5);
	func_511(&(uParam0->f_105), 6);
	func_511(&(uParam0->f_105), 7);
	func_511(&(uParam0->f_105), 8);
	func_511(&(uParam0->f_105), 9);
	func_511(&(uParam0->f_105), 10);
	func_511(&(uParam0->f_105), 11);
	func_511(&(uParam0->f_105), 12);
}

void func_407(var uParam0)
{
	func_695(uParam0);
	func_511(&(uParam0->f_105), 13);
	func_511(&(uParam0->f_105), 14);
	func_511(&(uParam0->f_105), 12);
}

void func_408(var uParam0)
{
	func_696(uParam0);
	func_511(&(uParam0->f_105), 23);
	func_511(&(uParam0->f_105), 24);
	func_511(&(uParam0->f_105), 26);
	func_511(&(uParam0->f_105), 28);
}

void func_409(var uParam0)
{
	func_697(uParam0);
	func_511(&(uParam0->f_105), 40);
	func_511(&(uParam0->f_105), 35);
	func_511(&(uParam0->f_105), 36);
	func_511(&(uParam0->f_105), 37);
	func_511(&(uParam0->f_105), 38);
}

void func_410(var uParam0)
{
	func_698(uParam0);
	func_511(&(uParam0->f_105), 46);
	func_511(&(uParam0->f_105), 50);
	func_511(&(uParam0->f_105), 51);
}

int func_411(int iParam0)
{
	if (iParam0 == 1309979101 || iParam0 == 1872063208)
	{
		return 1;
	}
	return 0;
}

bool func_412(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_603(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_690(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_168(iParam0, 1, bParam4))
	{
		return false;
	}
	Var5 = { func_687(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_387(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_387(iParam0, 0, 0) - iParam1) < 0)
		{
			func_412(iParam0, func_387(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_385(iParam0) == -427144552)
	{
		if (!func_699(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_700(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_389(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_690(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_701(iParam0, iParam1);
	return true;
}

void func_413(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_614[iParam4] = 0;
	func_451(iParam3);
	func_414(uParam0, uParam1, iParam3, 0);
	func_333(iParam3, 512);
	func_64(uParam0, uParam1, uParam2, iParam3, -1);
	Global_1900073->f_26[iParam3]->f_7 = 0;
	if (!is_entity_dead(&(uParam2->f_163[iParam4])))
	{
		func_450(uParam0, uParam2, iParam4);
	}
	func_272(uParam2, iParam4, 8);
}

void func_414(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 1 && func_46(&(uParam0->f_676)))
	{
		(*uParam1)[iParam2]->f_196 = uParam0->f_69;
	}
	else
	{
		(*uParam1)[iParam2]->f_196 = get_random_int_in_range(uParam0->f_68, uParam0->f_69 + 1);
	}
	func_104(&((*uParam1)[iParam2]->f_236));
}

void func_415(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_79(uParam1, iParam3, 8192) && func_79(uParam1, iParam3, 16384))
	{
		return;
	}
	if ((*uParam1)[iParam3]->f_189 == 0)
	{
		return;
	}
	if ((func_74(&((*uParam1)[iParam3]->f_186)) && func_75(&((*uParam1)[iParam3]->f_186)) > (*uParam1)[iParam3]->f_197) && iParam4 != 0)
	{
		return;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return;
	}
	if (iParam4 == 0)
	{
		sVar1 = "LARGE_BITE_FISH_END";
		sVar2 = "LARGE_BITE_ROD_END";
	}
	else if (iParam4 == 1)
	{
		sVar1 = "LARGE_BITE_FISH_HOOKED";
		sVar2 = "LARGE_BITE_ROD_HOOKED";
	}
	else
	{
		sVar1 = "LARGE_BITE_FISH_FLEE";
		sVar2 = "LARGE_BITE_ROD_FLEE";
	}
	if (!func_79(uParam1, iParam3, 8192) && _0x84848e1c0fc67dbb((*uParam1)[iParam3]->f_89))
	{
		_0xf1c5310feaa36b48((*uParam1)[iParam3]->f_89, sVar1, func_257(iParam3), *uParam0, 0, 0);
		_0x503703ec1781b7d6((*uParam1)[iParam3]->f_89, "FishSize", &(uParam2->f_409[iVar0]));
		func_548(uParam1, iParam3, 8192);
	}
	if (!func_79(uParam1, iParam3, 16384) && _0x84848e1c0fc67dbb((*uParam1)[iParam3]->f_90))
	{
		_0xf1c5310feaa36b48((*uParam1)[iParam3]->f_90, sVar2, func_53(uParam1, iParam3), *uParam0, 0, 0);
		_0x503703ec1781b7d6((*uParam1)[iParam3]->f_90, "FishSize", &(uParam2->f_409[iVar0]));
		func_548(uParam1, iParam3, 16384);
	}
}

void func_416(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_702(iParam2);
	if (func_703(iVar0) && _0x19870c40c7ee15be(iVar0, &((*uParam0)[iParam1]->f_102[iParam2])))
	{
		_0xc3d581a34bc0a1f0(iVar0, &((*uParam0)[iParam1]->f_102[iParam2]));
		if (iParam1 == 0)
		{
			func_704(uParam0, iParam2, 0f);
		}
	}
}

void func_417(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (&(*uParam0)[iParam1]->f_118[iParam2] != iParam3)
	{
		(*uParam0)[iParam1]->f_118[iParam2] = iParam3;
	}
}

bool func_418(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_419(int iParam0)
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

int func_420(int iParam0)
{
	return iParam0 & 31;
}

bool func_421(int iParam0)
{
	return iParam0 > -1;
}

int func_422(int iParam0)
{
	if (!func_421(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_423(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_424(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_425(int iParam0)
{
	iVar0 = func_705(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_426(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 14);
}

bool func_427(int iParam0)
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

void func_428(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_427(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_706(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_707(iVar0);
	*uParam0 = 0;
}

float func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4.125f;
		case 1:
			return 6.125f;
		case 2:
			return 9.0625f;
		case 3:
			return 180.4375f;
		case 4:
			return 46f;
		case 5:
			return 25.0625f;
		case 6:
			return 41.5f;
		case 7:
			return 36.4375f;
		case 8:
			return 46.4375f;
		case 9:
			return 2.5625f;
		case 10:
			return 10.1875f;
		case 11:
			return 3.3125f;
		case 12:
			return 22.375f;
		case 13:
			return 54.25f;
		case 14:
			return 29.5f;
		default:
			break;
	}
	return 0f;
}

char* func_430()
{
	return "unnamed";
}

bool func_431(var uParam0, var uParam1, var uParam2)
{
	if ((((((Global_1900073->f_25 == 1 || uParam2->f_705 == 1) || func_142(uParam0, uParam1, uParam2, 0) != -1) || !func_393(&(Global_40.f_11184[0]))) || (*uParam1)[0]->f_22 < 0.25f) || !func_456(uParam0, uParam1, 0, 1)) || !func_74(&((*uParam1)[0]->f_183)))
	{
		return false;
	}
	if (func_46(&(uParam0->f_676)))
	{
		if (func_75(&((*uParam1)[0]->f_183)) >= func_708(uParam1))
		{
			return true;
		}
	}
	else if ((uParam2->f_776 >= 5 && uParam2->f_775 == 0) && func_75(&((*uParam1)[0]->f_183)) >= 5000)
	{
		return true;
	}
	return false;
}

void func_432(var uParam0, var uParam1, var uParam2)
{
	if (func_1() || func_9(uParam0) != 3)
	{
		return;
	}
	if (func_74(&(uParam2->f_696)) && func_75(&(uParam2->f_696)) < 5000)
	{
		return;
	}
	func_104(&(uParam2->f_696));
	iVar0 = func_268(uParam1);
	if (func_709(uParam0, iVar0) && func_710(uParam1, iVar0))
	{
		iVar1 = func_269(iVar0);
		if (func_87(iVar1))
		{
			uParam2->f_368[0] = 2;
			uParam2->f_286[0] = func_241(iVar1, &(uParam2->f_368[0]));
			if (iVar0 == 9)
			{
				uParam2->f_532[0] = 1;
			}
		}
	}
}

void func_433(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 15;
	if (Global_1900073->f_152 == 1)
	{
		iVar0 = 10;
	}
	else if (Global_1900073->f_152 == 2)
	{
		iVar0 = 13;
	}
	else if (Global_1900073->f_152 == 3)
	{
		iVar0 = 4;
	}
	else if (Global_1900073->f_152 == 4)
	{
		iVar1 = get_random_int_in_range(0, 15);
		switch (iVar1)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 1;
				break;
			case 2:
				iVar0 = 2;
				break;
			case 3:
				iVar0 = 3;
				break;
			case 4:
				iVar0 = 4;
				break;
			case 5:
				iVar0 = 5;
				break;
			case 6:
				iVar0 = 6;
				break;
			case 7:
				iVar0 = 7;
				break;
			case 8:
				iVar0 = 8;
				break;
			case 9:
				iVar0 = 9;
				break;
			case 10:
				iVar0 = 10;
				break;
			case 11:
				iVar0 = 11;
				break;
			case 12:
				iVar0 = 13;
				break;
			case 13:
				iVar0 = 12;
				break;
			case 14:
				iVar0 = 14;
				break;
		}
	}
	else if (iParam2 == 1)
	{
		if (uParam0->f_676.f_2 == 1)
		{
			iVar2 = get_random_int_in_range(0, 3);
			switch (iVar2)
			{
				case 0:
					iVar0 = 5;
					break;
				case 1:
					iVar0 = 12;
					break;
				case 2:
					iVar0 = 14;
					break;
				default:
					iVar0 = 5;
					break;
			}
		}
		else if (uParam0->f_676.f_4 == 1)
		{
			iVar0 = 12;
		}
		else if (func_46(&(uParam0->f_676)))
		{
			iVar0 = 0;
		}
		else if (uParam0->f_60 == 0)
		{
			iVar3 = get_random_int_in_range(0, 4);
			switch (iVar3)
			{
				case 0:
					iVar0 = 4;
					break;
				case 1:
					iVar0 = 7;
					break;
				case 2:
					iVar0 = 12;
					break;
				case 3:
					iVar0 = 14;
					break;
				default:
					iVar0 = 12;
					break;
			}
		}
		else if (uParam0->f_60 == 1)
		{
			iVar4 = get_random_int_in_range(0, 2);
			switch (iVar4)
			{
				case 0:
					iVar0 = 8;
					break;
				case 1:
					iVar0 = 13;
					break;
				default:
					iVar0 = 13;
					break;
			}
		}
		else if (uParam0->f_60 == 2)
		{
			iVar5 = get_random_int_in_range(0, 3);
			switch (iVar5)
			{
				case 0:
					iVar0 = 3;
					break;
				case 1:
					iVar0 = 5;
					break;
				case 2:
					iVar0 = 6;
					break;
				default:
					iVar0 = 5;
					break;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (uParam0->f_676.f_1 == 1)
	{
		iVar6 = get_random_int_in_range(0, 5);
		switch (iVar6)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 2;
				break;
			case 2:
				iVar0 = 10;
				break;
			case 3:
				iVar0 = 11;
				break;
			case 4:
				iVar0 = 12;
				break;
			default:
				iVar0 = 0;
				break;
		}
	}
	else if (uParam0->f_676.f_2 == 1)
	{
		iVar7 = get_random_int_in_range(0, 3);
		switch (iVar7)
		{
			case 0:
				iVar0 = 5;
				break;
			case 1:
				iVar0 = 12;
				break;
			case 2:
				iVar0 = 14;
				break;
			default:
				iVar0 = 12;
				break;
		}
	}
	else if (uParam0->f_676.f_3 == 1)
	{
		iVar8 = get_random_int_in_range(0, 5);
		switch (iVar8)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 2;
				break;
			case 2:
				iVar0 = 10;
				break;
			case 3:
				iVar0 = 11;
				break;
			case 4:
				iVar0 = 12;
				break;
			default:
				iVar0 = 0;
				break;
		}
	}
	else if (uParam0->f_676 == 1)
	{
		iVar9 = get_random_int_in_range(0, 5);
		switch (iVar9)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 2;
				break;
			case 2:
				iVar0 = 9;
				break;
			case 3:
				iVar0 = 11;
				break;
			case 4:
				iVar0 = 12;
				break;
			default:
				iVar0 = 0;
				break;
		}
	}
	else if (uParam0->f_676.f_4 == 1)
	{
		iVar0 = 12;
	}
	else if (uParam0->f_676.f_5 == 1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = func_711();
	}
	if (func_87(iVar0) && &uParam1->f_1145[iVar0] == 1)
	{
		uParam1->f_368[iParam2] = 0;
		iVar10 = func_241(iVar0, &(uParam1->f_368[iParam2]));
		uParam1->f_286[iParam2] = iVar10;
	}
}

int func_434(int iParam0)
{
	iVar0 = 15;
	switch (iParam0)
	{
		case -2116748615:
		case 1867262572:
			iVar0 = 0;
			break;
		case 703712157:
		case 1493541632:
			iVar0 = 1;
			break;
		case -1182983171:
		case 264156159:
			iVar0 = 2;
			break;
		case -2022921611:
		case 1538187374:
			iVar0 = 3;
			break;
		case -300867788:
			iVar0 = 4;
			break;
		case 122748261:
		case 463643368:
			iVar0 = 5;
			break;
		case -711779521:
			iVar0 = 6;
			break;
		case -1553593715:
			iVar0 = 7;
			break;
		case 697075200:
			iVar0 = 8;
			break;
		case -452224784:
		case 706485280:
			iVar0 = 9;
			break;
		case -243188398:
		case 513249462:
			iVar0 = 10;
			break;
		case -1981561472:
		case 1520661:
			iVar0 = 11;
			break;
		case -1884490195:
		case 1860580756:
			iVar0 = 12;
			break;
		case 41707457:
		case 543892122:
			iVar0 = 13;
			break;
		case 134747314:
		case 490159652:
			iVar0 = 14;
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_435(vector3 vParam0, var uParam3, var uParam4)
{
	bVar4 = test_vertical_probe_against_all_water(func_259(vParam0, 1092616192), 0, &fVar0);
	bVar5 = get_ground_z_for_3d_coord(func_259(vParam0, 1092616192), &fVar1, false);
	fVar2 = (fVar0 - fVar1);
	fVar3 = func_712(uParam3);
	if ((bVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		if (fVar2 > 2f)
		{
			fVar2 = 2f;
		}
		*uParam4 = (fVar0 - (fVar2 / 2f));
		return true;
	}
	return false;
}

bool func_436(var uParam0, int iParam1)
{
	return ((*uParam0)[iParam1]->f_21 != -99999f && (*uParam0)[iParam1]->f_21 < 0.03f);
}

bool func_437(var uParam0, var uParam1, vector3 vParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (func_472(uParam0, uParam1, iVar0, vParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_438(vector3 vParam0)
{
	if (get_distance_between_coords(vParam0, 2331.62f, -1216.34f, 45f, false) < 15f || get_distance_between_coords(vParam0, 210.38f, 1876.39f, 200.66f, false) < 125f)
	{
		return true;
	}
	return false;
}

int func_439(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_713(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_440(int iParam0)
{
	if (!is_entity_dead(iParam0) && get_animal_tuning_bool_param(iParam0, 64))
	{
		return true;
	}
	return false;
}

bool func_441(var uParam0, var uParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!is_entity_dead(&(uParam0->f_163[iVar0])) && &uParam0->f_163[iVar0] == *uParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_442(var uParam0, var uParam1)
{
	if (uParam0->f_4 == 1)
	{
		if (get_entity_model(*uParam1) == 1860580756 || get_entity_model(*uParam1) == -1884490195)
		{
			return false;
		}
	}
	return true;
}

int func_443(var uParam0)
{
	if (!func_74(uParam0))
	{
		return 0;
	}
	if (func_254(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_255() - round((uParam0->f_1 * 1000f)));
}

void func_444(int iParam0)
{
	if (!func_1() || !does_entity_exist(iParam0))
	{
		return;
	}
	if (!network_get_entity_is_networked(iParam0))
	{
		network_register_entity_as_networked(iParam0);
	}
}

float func_445(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iVar0 = func_192(iParam1);
		if (func_193(iVar0))
		{
			return func_429(iVar0);
		}
	}
	fVar1 = func_714(iParam1, iParam2, 1);
	fVar2 = func_715(iParam1, iParam2, 1);
	fVar3 = get_random_float_in_range(fVar1, fVar2);
	if (uParam0->f_1143 != -1)
	{
		fVar3 = func_716(iParam1, iParam2, uParam0->f_1143);
	}
	fVar4 = func_717(fVar3);
	return fVar4;
}

float func_446(var uParam0, int iParam1)
{
	if (func_88(iParam1))
	{
		return 1f;
	}
	fVar0 = func_718(uParam0, iParam1, 1);
	fVar1 = 1f;
	fVar2 = _0x134775b093ad5c38(&(uParam0->f_163[iParam1]));
	fVar3 = ((fVar2 * 2f) * fVar0);
	fVar4 = ((fVar1 - fVar2) + fVar3);
	if (fVar1 <= 0f || fVar2 <= 0f)
	{
		return 1f;
	}
	else if (fVar4 <= 0f)
	{
		return 1f;
	}
	else if (fVar4 < (fVar1 - fVar2))
	{
		return 1f;
	}
	else if (fVar4 > (fVar1 + fVar2))
	{
		return 1f;
	}
	return fVar4;
}

int func_447(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2116748615:
		case 1520661:
		case 264156159:
		case 513249462:
		case 706485280:
		case 1493541632:
			iVar0 = 0;
			break;
		case -1981561472:
		case -1182983171:
		case -452224784:
		case -243188398:
		case 41707457:
		case 122748261:
		case 490159652:
		case 703712157:
		case 1860580756:
		case 1867262572:
			iVar0 = 1;
			break;
		case -2022921611:
		case -1884490195:
		case -1553593715:
		case -711779521:
		case -300867788:
		case 134747314:
		case 463643368:
		case 543892122:
		case 697075200:
		case 1538187374:
			iVar0 = 4;
			break;
		default:
			break;
	}
	return iVar0;
}

void func_448(var uParam0, int iParam1)
{
	if (!func_88(iParam1))
	{
		return;
	}
	iVar0 = func_192(&(uParam0->f_327[iParam1]));
	iVar1 = func_270(iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	_set_ped_body_component(&(uParam0->f_163[iParam1]), iVar1);
	_update_ped_variation(&(uParam0->f_163[iParam1]), false, true, true, true, false);
}

void func_449(int iParam0, int iParam1)
{
	func_719(iParam0, iParam1);
}

void func_450(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (does_entity_exist(func_257(iVar0)))
		{
			set_entity_no_collision_entity(&(uParam1->f_163[iParam2]), func_257(iVar0), false);
		}
		if (does_entity_exist(func_260(iVar0)))
		{
			set_entity_no_collision_entity(&(uParam1->f_163[iParam2]), func_260(iVar0), false);
		}
		iVar0++;
	}
}

void func_451(int iParam0)
{
	if (does_entity_exist(func_260(iParam0)) && is_entity_attached(func_260(iParam0)))
	{
		detach_entity(func_260(iParam0), true, true);
	}
}

bool func_452(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (is_entity_in_water(func_53(uParam1, 0)) || is_ped_swimming(func_53(uParam1, 0)))
	{
		if (func_720(func_53(uParam1, 0), &(uParam2->f_163[iParam3]), 0, 1) < (10f / 2f))
		{
			return true;
		}
	}
	if (!func_46(&(uParam0->f_676)) && func_9(uParam0) != 3)
	{
		return true;
	}
	return is_ped_fleeing(&(uParam2->f_163[iParam3]));
}

bool func_453(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if ((((func_456(uParam0, uParam1, 0, 1) && func_721(uParam0, uParam2)) && func_457(uParam1, 0, iParam4, 2)) && (*uParam1)[0]->f_74 == 0) && &(*uParam1)[0]->f_30[iParam3] < func_722(uParam0, uParam2, 0, iParam4, 1))
	{
		return true;
	}
	return false;
}

bool func_454(var uParam0, var uParam1, int iParam2, vector3 vParam3)
{
	if ((!func_55(vParam3) && func_56(&(uParam1->f_163[iParam2]), vParam3, 0) > (4f * 1.5f)) && func_56(func_53(uParam0, 0), vParam3, 0) < 50f)
	{
		return true;
	}
	return false;
}

bool func_455()
{
	return true;
}

bool func_456(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0)
	{
		if (((((((func_182(&(uParam0->f_105[43])) || func_182(&(uParam0->f_105[44]))) || (func_182(&(uParam0->f_105[31])) && Global_1900073->f_23 == 1)) || (func_182(&(uParam0->f_105[32])) && Global_1900073->f_23 == 1)) || (func_182(&(uParam0->f_105[33])) && Global_1900073->f_23 == 1)) || (func_182(&(uParam0->f_105[34])) && Global_1900073->f_23 == 1)) || func_182(&(uParam0->f_105[35]))) || func_182(&(uParam0->f_105[36])))
		{
			return false;
		}
		if (iParam3 == 1)
		{
			if ((*uParam1)[iParam2]->f_71 == 0)
			{
				if (Global_1900073->f_26[iParam2]->f_4 > 0.9f)
				{
					return false;
				}
			}
			else if ((!func_251(iParam2) && func_74(&(uParam0->f_15))) && func_75(&(uParam0->f_15)) > 2000)
			{
				return false;
			}
		}
	}
	else if (uParam0->f_676.f_5 == 1)
	{
		return false;
	}
	if (((((((&Global_1900073->f_26[iParam2] != 6 || &Global_1900073->f_179[iParam2] == 1) || func_79(uParam1, iParam2, 4096)) || !func_74(&((*uParam1)[iParam2]->f_236))) || func_107(&((*uParam1)[iParam2]->f_236)) <= IntToFloat((*uParam1)[iParam2]->f_196)) || func_723(uParam0, uParam1, iParam2)) || !func_436(uParam1, iParam2)) || (does_entity_exist(func_260(iParam2)) && func_724(uParam1, iParam2, func_261(iParam2))))
	{
		return false;
	}
	return true;
}

bool func_457(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return (func_436(uParam0, iParam1) && (*uParam0)[iParam1]->f_22 > func_712(func_241(iParam2, iParam3)));
}

void func_458(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_74(&((*uParam0)[iParam3]->f_215)))
	{
		return;
	}
	if (!func_87(&(uParam1->f_327[iParam2])))
	{
		return;
	}
	if ((*uParam0)[iParam3]->f_210 == 0)
	{
		(*uParam0)[iParam3]->f_227 = func_725(uParam1, iParam2);
	}
	else
	{
		(*uParam0)[iParam3]->f_227 = round((IntToFloat((*uParam0)[iParam3]->f_227) * 0.95f));
	}
	if ((*uParam0)[iParam3]->f_227 < 4000)
	{
		(*uParam0)[iParam3]->f_227 = 4000;
	}
	if ((*uParam0)[iParam3]->f_210 > 0)
	{
		func_726(uParam0, iParam3);
	}
	(*uParam0)[iParam3]->f_210++;
	func_76(&((*uParam0)[iParam3]->f_218));
	func_76(&((*uParam0)[iParam3]->f_224));
	func_104(&((*uParam0)[iParam3]->f_215));
	func_76(&((*uParam0)[iParam3]->f_221));
	func_76(&((*uParam0)[iParam3]->f_229));
}

void func_459(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (!func_238(iParam3))
	{
		return;
	}
	if (_0x84848e1c0fc67dbb((*uParam1)[iParam4]->f_91))
	{
		_0xf1c5310feaa36b48((*uParam1)[iParam4]->f_91, "STRUGGLE", &(uParam2->f_163[iParam3]), *uParam0, 0, 0);
		_0x503703ec1781b7d6((*uParam1)[iParam4]->f_91, "FishSize", &(uParam2->f_409[iParam3]));
	}
}

int func_460(var uParam0, int iParam1)
{
	if (func_74(&((*uParam0)[iParam1]->f_221)))
	{
		iVar0 = round((to_float(func_75(&((*uParam0)[iParam1]->f_221))) / 2f));
	}
	iVar1 = ((*uParam0)[iParam1]->f_227 - iVar0);
	if (iVar1 < 4000)
	{
		iVar1 = 4000;
	}
	if (func_74(&((*uParam0)[iParam1]->f_215)) && func_75(&((*uParam0)[iParam1]->f_215)) >= iVar1)
	{
		return 1;
	}
	return 0;
}

int func_461(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_469(uParam0, uParam1, iParam3, 0) || (*uParam1)[iParam3]->f_233 == 7)
	{
		return 1;
	}
	return 0;
}

bool func_462(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_727(uParam1, iParam2);
	iVar0 = round((IntToFloat(iVar0) * 0.95f));
	return to_float(func_443(&(uParam0->f_12))) >= IntToFloat(iVar0 * 1000);
}

void func_463(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_74(&((*uParam0)[iParam3]->f_218)))
	{
		return;
	}
	if (!func_87(&(uParam1->f_327[iParam2])))
	{
		return;
	}
	if ((*uParam0)[iParam3]->f_211 == 0)
	{
		(*uParam0)[iParam3]->f_228 = func_728(uParam1, iParam2);
	}
	else
	{
		(*uParam0)[iParam3]->f_228 = round((IntToFloat((*uParam0)[iParam3]->f_228) / 0.98f));
	}
	if ((*uParam0)[iParam3]->f_228 > 10000)
	{
		(*uParam0)[iParam3]->f_228 = 10000;
	}
	(*uParam0)[iParam3]->f_211++;
	func_76(&((*uParam0)[iParam3]->f_215));
	func_76(&((*uParam0)[iParam3]->f_221));
	func_104(&((*uParam0)[iParam3]->f_218));
	func_76(&((*uParam0)[iParam3]->f_224));
}

int func_464(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_74(&((*uParam1)[iParam3]->f_224)))
	{
		iVar0 = round((to_float(func_75(&((*uParam1)[iParam3]->f_224))) / 2f));
	}
	iVar1 = ((*uParam1)[iParam3]->f_228 + iVar0);
	if (iVar1 > 10000)
	{
		iVar1 = 10000;
	}
	if ((((func_74(&((*uParam1)[iParam3]->f_218)) && func_75(&((*uParam1)[iParam3]->f_218)) >= iVar1) && !func_469(uParam0, uParam1, iParam3, 0)) && (*uParam1)[iParam3]->f_233 != 7) && func_477(uParam1, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_465(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iVar0 = round((to_float((*uParam1)[iParam3]->f_228) / 2f));
		if ((((((func_74(&((*uParam1)[iParam3]->f_218)) && func_75(&((*uParam1)[iParam3]->f_218)) >= iVar0) && func_74(&(uParam0->f_12))) && func_75(&(uParam0->f_12)) >= iVar0) && !func_469(uParam0, uParam1, iParam3, 0)) && (*uParam1)[iParam3]->f_233 != 7) && func_477(uParam1, iParam3))
		{
			return 1;
		}
	}
	return 0;
}

void func_466(var uParam0)
{
	if (!func_74(uParam0))
	{
	}
	if (!func_254(uParam0))
	{
		uParam0->f_2 = (func_295() - uParam0->f_1);
		func_480(uParam0, 2);
	}
}

bool func_467(int iParam0)
{
	return true;
}

void func_468(var uParam0)
{
	if (!func_74(uParam0))
	{
	}
	if (func_254(uParam0))
	{
		uParam0->f_1 = (func_295() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_481(uParam0, 2);
	}
}

bool func_469(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (&Global_1900073->f_154[iParam2] == 1 && uParam0->f_676 == 0)
	{
		if (func_102(iParam2, 2, 1))
		{
			if (iParam3 == 1)
			{
			}
			return true;
		}
		else if (Global_1900073->f_26[iParam2]->f_2 <= 1f)
		{
			if (iParam3 == 1)
			{
			}
			return true;
		}
		else if (func_69(iParam2, 1, 1) && func_729(uParam0->f_65, func_258(iParam2)))
		{
			if (iParam3 == 1)
			{
			}
			return true;
		}
		else if ((*uParam1)[iParam2]->f_233 == 8)
		{
			if (iParam3 == 1)
			{
			}
			return true;
		}
	}
	return false;
}

bool func_470(var uParam0, int iParam1)
{
	if (!does_entity_exist((*uParam0)[iParam1]->f_14))
	{
		iVar0 = func_730(1059426360);
		if (iVar0 != 0)
		{
			request_model(iVar0, false);
			if (has_model_loaded(iVar0))
			{
				(*uParam0)[iParam1]->f_14 = create_object(iVar0, get_entity_coords(func_53(uParam0, iParam1), true, false), false, false, false, false, false);
				set_entity_visible((*uParam0)[iParam1]->f_14, false);
				set_entity_collision((*uParam0)[iParam1]->f_14, false, false);
				set_entity_invincible((*uParam0)[iParam1]->f_14, true);
				set_object_targettable((*uParam0)[iParam1]->f_14, false);
				set_model_as_no_longer_needed(iVar0);
			}
		}
	}
	return does_entity_exist((*uParam0)[iParam1]->f_14);
}

bool func_471(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (((*uParam1)[iParam4]->f_233 != 9 && (*uParam1)[iParam4]->f_23 != -99999f) && uParam0->f_676 == 0)
	{
		fVar0 = func_518(get_entity_coords(func_53(uParam1, iParam4), true, false), func_262(uParam2, iParam3));
		if ((fVar0 < 5f && (*uParam1)[iParam4]->f_23 > 0.01f) || (fVar0 < 10f && (*uParam1)[iParam4]->f_23 > 0.05f))
		{
			return true;
		}
	}
	return false;
}

bool func_472(var uParam0, var uParam1, int iParam2, vector3 vParam3)
{
	if ((*uParam1)[iParam2]->f_233 == 9)
	{
		return true;
	}
	iVar0 = func_731(uParam0, uParam1, iParam2, vParam3);
	iVar1 = func_732(uParam1, iParam2, vParam3);
	return (iVar0 == 1 && iVar1 == 1);
}

void func_473(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if ((*uParam0)[iParam2]->f_233 != 5)
	{
		vVar0 = { get_offset_from_entity_in_world_coords(func_53(uParam0, iParam2), 0f, 15f, 0f) };
		vVar0.x = (vVar0.x + get_random_float_in_range(-10f, 10f));
		vVar0.f_1 = (vVar0.y + get_random_float_in_range(-10f, 10f));
		vVar3 = { func_478(vVar0, 0) };
		if (!func_55(vVar3))
		{
			fVar6 = func_484(vVar3, 0);
			fVar7 = func_712(get_entity_model(&(uParam1->f_163[iParam3])));
			if (fVar6 > fVar7 && !func_724(uParam0, iParam2, vVar3))
			{
				vVar8 = { vVar3 };
				vVar8.f_2 = (vVar8.z - 0.25f);
				func_733(uParam0, iParam2, vVar8);
				(*uParam0)[iParam2]->f_233 = 5;
				(*uParam0)[iParam2]->f_256 = 1;
			}
			else
			{
				(*uParam0)[iParam2]->f_233 = 6;
			}
		}
		else
		{
			(*uParam0)[iParam2]->f_233 = 6;
		}
	}
}

bool func_474(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if ((*uParam0)[iParam3]->f_233 == 9)
	{
		return false;
	}
	if (!func_477(uParam0, iParam3))
	{
		return false;
	}
	if (func_734(uParam0, uParam1, iParam3, iParam2))
	{
		return true;
	}
	if (!func_285(&(uParam1->f_163[iParam2]), 1227113341))
	{
		return true;
	}
	if (func_720(&(uParam1->f_163[iParam2]), (*uParam0)[iParam3]->f_14, 0, 1) < 1f)
	{
		return true;
	}
	if ((*uParam0)[iParam3]->f_233 != 2 && func_720(func_53(uParam0, iParam3), &(uParam1->f_163[iParam2]), 0, 1) < 6f)
	{
		return true;
	}
	if ((iParam3 == 0 && func_74(&((*uParam0)[iParam3]->f_248))) && func_75(&((*uParam0)[iParam3]->f_248)) > 3000)
	{
		if (((*uParam0)[iParam3]->f_234 == 4 && IntToFloat(func_247()) < -25f) || ((*uParam0)[iParam3]->f_234 == 3 && IntToFloat(func_247()) > 25f))
		{
			(*uParam0)[iParam3]->f_251 = 1;
			return true;
		}
	}
	return false;
}

void func_475(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, vector3 vParam5)
{
	fVar0 = func_735(func_53(uParam1, iParam3), &(uParam2->f_163[iParam4]), 1);
	iVar2 = get_random_int_in_range(0, 2);
	fVar3 = func_712(get_entity_model(&(uParam2->f_163[iParam4])));
	if (iParam3 == 0 && (*uParam1)[iParam3]->f_251 == 1)
	{
		if (func_247() < 0)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = 1;
		}
	}
	if (func_720(func_53(uParam1, iParam3), &(uParam2->f_163[iParam4]), 0, 1) < 6f)
	{
		(*uParam1)[iParam3]->f_233 = 2;
	}
	else if ((!func_146(uParam2, iParam4) || (*uParam1)[iParam3]->f_24 < fVar3) || (func_69(iParam3, 1, 1) && func_729(uParam0->f_65, vParam5)))
	{
		fVar1 = (fVar0 + IntToFloat(get_random_int_in_range(-10, 10)));
		(*uParam1)[iParam3]->f_233 = 1;
	}
	else if (func_736(iParam3, iVar2))
	{
		fVar1 = (fVar0 - IntToFloat(get_random_int_in_range(65, 85)));
		(*uParam1)[iParam3]->f_233 = 4;
	}
	else if (func_737(iParam3, iVar2))
	{
		fVar1 = (fVar0 + IntToFloat(get_random_int_in_range(65, 85)));
		(*uParam1)[iParam3]->f_233 = 3;
	}
	else
	{
		fVar1 = (fVar0 + IntToFloat(get_random_int_in_range(-10, 10)));
		(*uParam1)[iParam3]->f_233 = 1;
	}
	if ((*uParam1)[iParam3]->f_233 == 2)
	{
		vVar4 = { get_offset_from_entity_in_world_coords(func_53(uParam1, iParam3), 0f, (6f + 1f), 0f) };
		vVar7 = { func_478(vVar4, 0) };
	}
	else
	{
		vVar4 = { _get_object_offset_from_coords(vParam5, fVar1, 0f, 2.5f, 0f) };
		vVar7 = { func_478(vVar4, 0) };
	}
	if (!func_55(vVar7))
	{
		fVar10 = func_484(vVar7, 0);
		if (((((*uParam1)[iParam3]->f_233 != 1 && fVar10 < fVar3) || !func_472(uParam0, uParam1, iParam3, vVar7)) || (func_69(iParam3, 1, 1) && func_729(uParam0->f_65, vVar7))) || func_724(uParam1, iParam3, vVar7))
		{
			(*uParam1)[iParam3]->f_233 = 6;
		}
		else
		{
			vVar11 = { vVar7 };
			vVar11.f_2 = (vVar11.z - 0.25f);
			func_733(uParam1, iParam3, vVar11);
		}
	}
}

void func_476(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_251(iParam2))
	{
		(*uParam0)[iParam2]->f_255 = 1f;
	}
	else if (func_738())
	{
		(*uParam0)[iParam2]->f_255 = 1.5f;
	}
	else if (func_146(uParam1, iParam3))
	{
		(*uParam0)[iParam2]->f_255 = 3f;
	}
	else
	{
		(*uParam0)[iParam2]->f_255 = 1.5f;
	}
}

bool func_477(var uParam0, int iParam1)
{
	return ((*uParam0)[iParam1]->f_233 == 9 || ((*uParam0)[iParam1]->f_23 != -99999f && (*uParam0)[iParam1]->f_23 < 0.03f));
}

Vector3 func_478(vector3 vParam0, int iParam3)
{
	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	vVar1 = { 0f, 0f, 0f };
	bVar6 = test_vertical_probe_against_all_water(func_259(vParam0, 1092616192), iVar0, &fVar4);
	bVar7 = get_ground_z_for_3d_coord(func_259(vParam0, 1092616192), &fVar5, false);
	if ((bVar6 == 1 || bVar7 == 0) || fVar4 > fVar5)
	{
		vVar1.x = vParam0.x;
		vVar1.f_1 = vParam0.y;
		vVar1.f_2 = fVar4;
	}
	return vVar1;
}

void func_479(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (!func_238(iParam3))
	{
		return;
	}
	iVar0 = func_739(uParam1, iParam4);
	if (iVar0 > -1)
	{
		_0xdcf5ba95bbf0faba(&((*uParam1)[iParam4]->f_92[iVar0]), "VFX_SPLASH", func_258(iParam4), *uParam0, 0, 0, 1);
		_0x503703ec1781b7d6(&((*uParam1)[iParam4]->f_92[iVar0]), "FishSize", &(uParam2->f_409[iParam3]));
	}
}

void func_480(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_481(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_482(vector3 vParam0)
{
	return func_740(_get_map_zone_at_coords(vParam0, 10));
}

int func_483(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (_does_volume_exist((*Global_1888801)[iVar0]->f_3) && _0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_484(vector3 vParam0, int iParam3)
{
	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	bVar4 = test_vertical_probe_against_all_water(func_259(vParam0, 1092616192), iVar0, &fVar2);
	bVar5 = get_ground_z_for_3d_coord(func_259(vParam0, 1092616192), &fVar3, false);
	if ((bVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		fVar1 = (fVar2 - fVar3);
	}
	return fVar1;
}

bool func_485(int iParam0, bool bParam1)
{
	if (!func_741(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_595(iParam0, 8))
		{
			return false;
		}
	}
	if (func_595(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_486(int iParam0)
{
	if (!func_488(iParam0))
	{
		return false;
	}
	return func_597(iParam0, 67108864);
}

bool func_487(int iParam0)
{
	if (!func_488(iParam0))
	{
		return false;
	}
	return func_597(iParam0, 33554432);
}

bool func_488(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_489()
{
	return Global_1935496->f_10;
}

bool func_490()
{
	return Global_1935496->f_13;
}

bool func_491()
{
	if (func_26() != -1)
	{
		return false;
	}
	return func_492(1) > 0;
}

int func_492(bool bParam0)
{
	if (bParam0)
	{
		return func_742(Global_1359489->f_4);
	}
	get_group_size(func_494(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_494(), iVar3);
		if (func_743(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

bool func_493(int iParam0, int iParam1)
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
	if (func_207(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_207(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_207(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_207(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_207(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_207(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_207(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_207(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_494()
{
	return get_player_group(get_player_index());
}

void func_495(var uParam0, int iParam1, int iParam2)
{
	if ((func_744(iParam2) || func_745(iParam2)) || iParam2 == 1309979101)
	{
		(*uParam0)[iParam1]->f_71 = 0;
	}
	else
	{
		(*uParam0)[iParam1]->f_71 = 1;
	}
}

int func_496(var uParam0, int iParam1)
{
	iVar0 = 1;
	if ((*uParam0)[iParam1]->f_71 == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

char* func_497(int iParam0)
{
	switch (iParam0)
	{
		case 1059426360:
			return "p_baitBread01x";
		case 488496242:
			return "p_baitCorn01x";
		case 1380607804:
			return "p_baitCheese01x";
		case -1527293029:
			return "p_baitWorm01x";
		case -1753819339:
			return "p_baitCricket01x";
		case 149706141:
			return "P_CRAWDAD01X";
		case 2100131425:
			return "p_finishedragonfly01x";
		case -978159653:
			return "p_FinisdFishlure01x";
		case -2041382104:
			return "p_finishdcrawd01x";
		case 1334018438:
			return "P_FINISHEDRAGONFLYLEGENDARY01X";
		case 1815744868:
			return "P_FINISDFISHLURELEGENDARY01X";
		case 1055480217:
			return "P_FINISHDCRAWDLEGENDARY01X";
		case -1916584960:
			return "P_LGOC_SPINNER_V4";
		case 1309979101:
			return "P_FISHHOOK02X";
		default:
			break;
	}
	return "P_FISHHOOK02X";
}

bool func_498()
{
	if (((((func_168(1059426360, 1, 0) || func_168(488496242, 1, 0)) || func_168(1380607804, 1, 0)) || func_168(-1527293029, 1, 0)) || func_168(-1753819339, 1, 0)) || func_168(149706141, 1, 0))
	{
		return true;
	}
	return false;
}

void func_499()
{
	Var0 = 0;
	iVar2 = 0;
	if (func_393(&(Global_40.f_11184[0])) && func_168(&(Global_40.f_11184[0]), 1, 0))
	{
		iVar2 = &Global_40.f_11184[0];
	}
	else if (&Global_40.f_11184[0] == 1309979101)
	{
		iVar2 = 1309979101;
	}
	else if (func_168(1059426360, 1, 0))
	{
		iVar2 = 1059426360;
	}
	else if (func_168(488496242, 1, 0))
	{
		iVar2 = 488496242;
	}
	else if (func_168(1380607804, 1, 0))
	{
		iVar2 = 1380607804;
	}
	if (iVar2 != 0)
	{
		Var0 = 2;
		switch (iVar2)
		{
			case 1059426360:
				Var0.f_1 = 1059426360;
				break;
			case 488496242:
				Var0.f_1 = 488496242;
				break;
			case 1380607804:
				Var0.f_1 = 1380607804;
				break;
			case -1753819339:
				Var0.f_1 = -1753819339;
				break;
			case -1527293029:
				Var0.f_1 = -1527293029;
				break;
			case 149706141:
				Var0.f_1 = 149706141;
				break;
			case 2100131425:
				Var0.f_1 = 2100131425;
				break;
			case -978159653:
				Var0.f_1 = -978159653;
				break;
			case -2041382104:
				Var0.f_1 = -2041382104;
				break;
			case 1334018438:
				Var0.f_1 = 1334018438;
				break;
			case 1815744868:
				Var0.f_1 = 1815744868;
				break;
			case 1055480217:
				Var0.f_1 = 1055480217;
				break;
			case -1916584960:
				Var0.f_1 = -1916584960;
				break;
			case 1309979101:
				Var0.f_1 = 1309979101;
				break;
		}
		_0x8a59d44189af2bc5(&Var0, 1856029758);
	}
}

void func_500(var uParam0)
{
	uParam0->f_61 = 0;
	if (uParam0->f_60 == -1)
	{
	}
	else if (uParam0->f_60 == 0)
	{
		uParam0->f_61 = func_746(&(Global_40.f_11184[0]));
	}
	else if (uParam0->f_60 == 1)
	{
		uParam0->f_61 = func_747(&(Global_40.f_11184[0]));
	}
	else if (uParam0->f_60 == 2)
	{
		uParam0->f_61 = func_748(&(Global_40.f_11184[0]));
	}
}

int func_501(var uParam0)
{
	if (uParam0->f_676.f_1 == 1)
	{
		return 1380607804;
	}
	else if (uParam0->f_676.f_4 == 1)
	{
		return -1753819339;
	}
	else if (uParam0->f_676.f_2 == 1)
	{
		return -978159653;
	}
	else if (uParam0->f_676 == 1)
	{
		return 1815744868;
	}
	return 1380607804;
}

int func_502(int iParam0, int iParam1)
{
	if (!func_239(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_503(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1894360593:
			return 1;
		case -1891229662:
			return 10;
		case -1348173149:
			return 17;
		case -1220302226:
			return 14;
		case -839878969:
			return 7;
		case -709866131:
			return 16;
		case -668333238:
			return 11;
		case -589165916:
			return 0;
		case -360730635:
			return 8;
		case -103573613:
			return 4;
		case 99378894:
			return 12;
		case 194099983:
			return 9;
		case 581819093:
			return 2;
		case 673012160:
			return 13;
		case 687859577:
			return 3;
		case 1202375449:
			return 5;
		case 2038046186:
			return 6;
		case 2061320468:
			return 15;
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

int func_504(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_749())
	{
		iVar2 = func_749();
	}
	iVar5 = func_750(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_419(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_419(iVar6) == 0)
			{
				return func_751(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_419(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_419(iVar6) == 0)
			{
				return func_751(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_751(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_505(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

int func_506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

Vector3 func_507(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_239(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_506(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_752(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

bool func_508(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_509(int iParam0, int iParam1, bool bParam2)
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

void func_510(var uParam0)
{
	if (func_50(uParam0, 256))
	{
		func_204(uParam0, 256);
		func_753();
		uParam0->f_19 = -1;
	}
}

void func_511(var uParam0, int iParam1)
{
	if (func_182(uParam0[iParam1]))
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
		func_754();
		(*uParam0)[iParam1] = 0;
		func_3(2048);
	}
}

bool func_512(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_513(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_514(int iParam0)
{
	if (iParam0 > 6)
	{
		return;
	}
	if (&Global_1911643 != 0)
	{
		func_753();
	}
	_databinding_write_data_bool(Global_1911643->f_3, true);
	Global_1911643 = iParam0;
	Global_1911643->f_1 = 0;
	iVar5 = 0;
	while (iVar5 < iParam0)
	{
		StringCopy(&cVar1, "Objective", 32);
		StringIntConCat(&cVar1, iVar5, 32);
		uVar0 = _databinding_add_data_container(Global_1911643->f_2, &cVar1);
		Global_1911643->f_5[iVar5] = uVar0;
		Global_1911643->f_5[iVar5]->f_1 = _databinding_add_data_bool(uVar0, "IsCurrent", 0);
		Global_1911643->f_5[iVar5]->f_2 = _databinding_add_data_bool(uVar0, "Failed", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1911643->f_4, iVar5, "objective_breadcrumb", uVar0);
		iVar5++;
	}
}

void func_515()
{
	_databinding_write_data_bool(Global_1911643->f_5[Global_1911643->f_1]->f_2, false);
	_databinding_write_data_bool(Global_1911643->f_5[Global_1911643->f_1]->f_2, true);
}

void func_516(int iParam0)
{
	if (iParam0 >= &Global_1911643 || iParam0 < 0)
	{
		return;
	}
	_databinding_write_data_bool(Global_1911643->f_5[Global_1911643->f_1]->f_2, false);
	_databinding_write_data_bool(Global_1911643->f_5[Global_1911643->f_1]->f_1, false);
	bVar0 = iParam0 < Global_1911643->f_1;
	Global_1911643->f_1 = iParam0;
	_databinding_write_data_bool(Global_1911643->f_5[Global_1911643->f_1]->f_1, true);
	_databinding_write_data_bool(Global_1911643->f_5[Global_1911643->f_1]->f_2, bVar0);
}

void func_517(int iParam0, int iParam1, int iParam2)
{
	if (func_168(iParam1, 1, 0))
	{
		if (iParam1 == iParam0 || iParam2 == 1)
		{
			func_755(iParam1, 1);
		}
		else
		{
			func_755(iParam1, 0);
		}
	}
}

float func_518(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_519(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_79(uParam1, iParam3, 1))
	{
		return;
	}
	func_186(uParam1, iParam3);
	if (func_79(uParam1, iParam3, 128))
	{
		func_187(uParam0, uParam1, uParam2, iParam3, 0, 0, 0);
		func_535(uParam1, iParam3);
	}
	func_64(uParam0, uParam1, uParam2, iParam3, -1);
	func_333(iParam3, 512);
	(*uParam1)[iParam3]->f_3 = 0;
	func_548(uParam1, iParam3, 1);
	Global_1900073->f_26[iParam3]->f_6 = 0;
	func_52(iParam3, 4);
	func_52(iParam3, 8);
	func_52(iParam3, 64);
	func_52(iParam3, 16);
	func_52(iParam3, 65536);
	func_52(iParam3, 131072);
	func_52(iParam3, 262144);
	(*uParam1)[iParam3]->f_18 = 0;
	(*uParam1)[iParam3]->f_198 = 0;
	(*uParam1)[iParam3]->f_227 = 0;
	(*uParam1)[iParam3]->f_228 = 0;
	(*uParam1)[iParam3]->f_210 = 0;
	(*uParam1)[iParam3]->f_211 = 0;
	(*uParam1)[iParam3]->f_233 = 0;
	(*uParam1)[iParam3]->f_235 = 0f;
	(*uParam1)[iParam3]->f_205 = 0;
	(*uParam1)[iParam3]->f_206 = 0;
	(*uParam1)[iParam3]->f_207 = 0;
	(*uParam1)[iParam3]->f_208 = 0;
	(*uParam1)[iParam3]->f_209 = 0;
	(*uParam1)[iParam3]->f_182 = 0;
	(*uParam1)[iParam3]->f_74 = 0;
	(*uParam1)[iParam3]->f_78 = -1;
	(*uParam1)[iParam3]->f_6 = 0;
	(*uParam1)[iParam3]->f_199 = 1f;
	(*uParam1)[iParam3]->f_257 = 0;
	(*uParam1)[iParam3]->f_200 = 0;
	(*uParam1)[iParam3]->f_201 = 0;
	func_76(&((*uParam1)[iParam3]->f_202));
	func_76(&((*uParam1)[iParam3]->f_236));
	func_76(&((*uParam1)[iParam3]->f_215));
	func_76(&((*uParam1)[iParam3]->f_218));
	func_76(&((*uParam1)[iParam3]->f_221));
	func_76(&((*uParam1)[iParam3]->f_224));
	func_76(&((*uParam1)[iParam3]->f_191));
	func_76(&((*uParam1)[iParam3]->f_212));
	func_76(&((*uParam1)[iParam3]->f_186));
	func_191(uParam1, iParam3, 0);
	if (iParam3 == 0)
	{
		func_324(uParam0);
		func_408(uParam0);
		func_409(uParam0);
		func_410(uParam0);
		func_61(&(uParam0->f_676), &(uParam0->f_105), 0);
		uParam0->f_666 = 0;
		func_531(uParam0, uParam0->f_4);
		func_72(uParam0);
		func_204(uParam0, 128);
		func_28(&(uParam0->f_31));
		func_76(&(uParam0->f_96));
		func_76(&(uParam0->f_99));
		uParam0->f_59 = func_380();
		uParam0->f_60 = func_593(uParam0->f_59);
		func_500(uParam0);
	}
	func_32(uParam1, iParam3);
	func_33(uParam1, iParam3);
	func_34(uParam1, iParam3);
}

void func_520(var uParam0, int iParam1, bool bParam2)
{
	if (func_182(uParam0[iParam1]))
	{
		func_103();
		func_291(&(uParam0->f_460), 3f);
	}
	if (bParam2 == 1)
	{
		func_237(uParam0, iParam1);
	}
}

bool func_521(var uParam0, int iParam1)
{
	if (func_80(iParam1, 2))
	{
		return true;
	}
	if (&Global_1900073->f_184[iParam1] == 1)
	{
		return true;
	}
	if (iParam1 == 0)
	{
		if (func_297())
		{
			return true;
		}
		if ((!func_1() && Global_1900073->f_20 == 1) && &Global_40.f_11184[0] != func_501(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_522()
{
	if (func_540())
	{
		return false;
	}
	return true;
}

void func_523(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if ((func_71() || func_45(256)) || (uParam0->f_683 >= 1 && uParam0->f_683 <= 4))
	{
		return;
	}
	if (iParam1 == 3)
	{
		if (_uiprompt_is_valid(uParam0->f_93))
		{
			return;
		}
	}
	else if (func_427(&(uParam0->f_83[iParam1])))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_83[iParam1] = func_756("MGFSH_CTX_GRIP", -128997553, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_757(&(uParam0->f_83[iParam1]), 1);
			iVar0 = func_706(&(uParam0->f_83[iParam1]));
			if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
			{
				_uiprompt_set_tag((*Global_1945938)[iVar0]->f_3, "CTX_GRIP");
			}
			break;
		case 1:
			if (&Global_1900073->f_26[0] == 6 || &Global_1900073->f_26[0] == 10)
			{
				uParam0->f_83[iParam1] = func_756("MGFSH_CTX_RESET", -1274373157, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			else
			{
				uParam0->f_83[iParam1] = func_756("MGFSH_CTX_CUT_LINE", -1274373157, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			break;
		case 2:
			uParam0->f_83[iParam1] = func_756("MGFSH_CTX_HOOK", -1580396486, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			if (func_758(2))
			{
				func_759(&(uParam0->f_83[iParam1]), 0, 1);
			}
			func_757(&(uParam0->f_83[iParam1]), 1);
			func_760(&(uParam0->f_83[iParam1]), 130948705);
			iVar0 = func_706(&(uParam0->f_83[iParam1]));
			if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
			{
				_uiprompt_set_tag((*Global_1945938)[iVar0]->f_3, "CTX_HOOK");
			}
			break;
		case 3:
			uParam0->f_710 = _0x5952dfa38fa529fe();
			uParam0->f_93 = _uiprompt_register_begin();
			_0xf4a5c4509bf923b1(uParam0->f_93, 0);
			if (_is_using_keyboard(0) || uParam0->f_710 == 1)
			{
				_uiprompt_set_control_action(uParam0->f_93, -1560021918);
			}
			else
			{
				_uiprompt_set_control_action(uParam0->f_93, 1339352408);
				_uiprompt_set_control_action(uParam0->f_93, -1779240557);
				_uiprompt_set_rotate_mode(uParam0->f_93, 0f, 0);
			}
			_uiprompt_set_attribute(uParam0->f_93, 10, 1);
			_uiprompt_set_attribute(uParam0->f_93, 11, 1);
			_uiprompt_set_attribute(uParam0->f_93, 18, 1);
			if (iParam2 == 1)
			{
				_uiprompt_set_text(uParam0->f_93, "MGFSH_CTX_REEL_LURE");
			}
			else
			{
				_uiprompt_set_text(uParam0->f_93, "MGFSH_CTX_REEL_IN");
			}
			_uiprompt_set_tag(uParam0->f_93, "CTX_REEL");
			_uiprompt_register_end(uParam0->f_93);
			break;
		case 4:
			uParam0->f_83[iParam1] = func_756("MGFSH_CTX_CONTROL", 1773209123, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_757(&(uParam0->f_83[iParam1]), 1);
			break;
		case 5:
			uParam0->f_83[iParam1] = func_756("MGFSH_CTX_THROW_BACK", -246426571, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			break;
		case 6:
			if (uParam0->f_682 == 0)
			{
				uParam0->f_83[iParam1] = func_756("MGFSH_CTX_KEEP", 1388692298, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			else
			{
				uParam0->f_83[iParam1] = func_756("MGFSH_CTX_RETURN", 1388692298, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			if (iParam3 == 0)
			{
				func_759(&(uParam0->f_83[iParam1]), 0, 1);
			}
			break;
		case 7:
			uParam0->f_83[iParam1] = func_756("MGFSH_CTX_CHOOSE", -1404316431, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_757(&(uParam0->f_83[iParam1]), 1);
			func_760(&(uParam0->f_83[iParam1]), -1304887797);
			func_760(&(uParam0->f_83[iParam1]), 1618006066);
			break;
		case 8:
			uParam0->f_83[iParam1] = func_756(_create_var_string(10, "MGFSH_CTX_EQUIP", func_395(func_394(uParam0->f_78), 109029619)), 636822989, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			break;
	}
	bVar1 = func_758(iParam1);
	if (bVar1 == 0)
	{
		func_761(uParam0, iParam1, bVar1);
	}
}

void func_524(var uParam0, var uParam1, var uParam2)
{
	if ((!func_393(uParam0->f_77) || &Global_40.f_11184[0] == uParam0->f_77) || func_540())
	{
		func_252(uParam0, 8);
		return;
	}
	if (!func_393(&(Global_40.f_11184[0])))
	{
		if (uParam0->f_78 == 0)
		{
			if (func_168(uParam0->f_77, 1, 0))
			{
				uParam0->f_78 = uParam0->f_77;
			}
			else if (func_168(1059426360, 1, 0))
			{
				uParam0->f_78 = 1059426360;
			}
			else if (func_168(488496242, 1, 0))
			{
				uParam0->f_78 = 488496242;
			}
			else if (func_168(1380607804, 1, 0))
			{
				uParam0->f_78 = 1380607804;
			}
			else if (func_168(-1753819339, 1, 0))
			{
				uParam0->f_78 = -1753819339;
			}
			else if (func_168(-1527293029, 1, 0))
			{
				uParam0->f_78 = -1527293029;
			}
			else if (func_168(149706141, 1, 0))
			{
				uParam0->f_78 = 149706141;
			}
			else if (func_168(2100131425, 1, 0))
			{
				uParam0->f_78 = 2100131425;
			}
			else if (func_168(-978159653, 1, 0))
			{
				uParam0->f_78 = -978159653;
			}
			else if (func_168(-2041382104, 1, 0))
			{
				uParam0->f_78 = -2041382104;
			}
			else if (func_168(1334018438, 1, 0))
			{
				uParam0->f_78 = 1334018438;
			}
			else if (func_168(1815744868, 1, 0))
			{
				uParam0->f_78 = 1815744868;
			}
			else if (func_168(1055480217, 1, 0))
			{
				uParam0->f_78 = 1055480217;
			}
			else if (func_168(-1916584960, 1, 0))
			{
				uParam0->f_78 = -1916584960;
			}
			else
			{
				uParam0->f_78 = 0;
			}
		}
		if (uParam0->f_78 == 0)
		{
			func_252(uParam0, 8);
		}
		else
		{
			func_523(uParam0, 8, 0, 1);
		}
	}
	if (func_762(&(uParam0->f_83[8]), 1))
	{
		Global_1900073->f_153 = uParam0->f_78;
	}
}

void func_525(var uParam0, var uParam1, var uParam2)
{
	if (Global_1900073->f_153 != 0)
	{
		if (Global_1900073->f_153 != &Global_40.f_11184[0] && func_393(Global_1900073->f_153))
		{
			func_309(uParam0, uParam1, 0, Global_1900073->f_153, 1, 0);
			func_533(uParam0, uParam1, uParam2, 0, 2);
		}
		Global_1900073->f_153 = 0;
	}
}

void func_526(var uParam0, var uParam1)
{
	if (Global_1900073->f_21 == 1)
	{
		return;
	}
	if (((!func_763() || !func_68(uParam1, 0)) || &Global_40.f_11184[0] == func_501(uParam0)) || func_285(func_53(uParam1, 0), 716706914))
	{
		uParam0->f_18 = 0;
		func_764(uParam0, 0, 0);
		func_406(uParam0);
	}
	else if (Global_1935496->f_30 == func_501(uParam0))
	{
		uParam0->f_18 = Global_1935496->f_30;
		func_764(uParam0, 1, 0);
		func_326(uParam0, func_765(uParam0), !func_325(&(uParam0->f_26), 4));
		func_327(&(uParam0->f_26), 4);
		func_766(uParam0, 2);
	}
	else if (func_490())
	{
		uParam0->f_18 = Global_1935496->f_30;
		func_764(uParam0, 1, 0);
		func_326(uParam0, func_767(uParam0), !func_325(&(uParam0->f_26), 2));
		func_327(&(uParam0->f_26), 2);
		func_766(uParam0, 1);
	}
	else
	{
		uParam0->f_18 = Global_1935496->f_30;
		func_764(uParam0, 0, uParam0->f_20 == -1);
		func_326(uParam0, func_768(uParam0), !func_325(&(uParam0->f_26), 1));
		func_327(&(uParam0->f_26), 1);
		func_766(uParam0, 0);
	}
}

void func_527(var uParam0, var uParam1)
{
	if (Global_1900073->f_20 == 1)
	{
		return;
	}
	if (((!func_769() || !func_68(uParam1, 0)) || func_393(&(Global_40.f_11184[0]))) || func_285(func_53(uParam1, 0), 716706914))
	{
		uParam0->f_18 = 0;
		func_407(uParam0);
	}
	else if (func_490())
	{
		uParam0->f_18 = Global_1935496->f_30;
		func_326(uParam0, 14, !func_325(&(uParam0->f_27), 2));
		func_327(&(uParam0->f_27), 2);
		func_770(uParam0, 1);
	}
	else
	{
		func_326(uParam0, func_771(uParam0), !func_325(&(uParam0->f_27), 1));
		func_327(&(uParam0->f_27), 1);
		func_770(uParam0, 0);
	}
}

void func_528(var uParam0, var uParam1, int iParam2)
{
	if (!func_79(uParam1, iParam2, 1024))
	{
		Global_1900073->f_26[iParam2]->f_1 = 30f;
		if (iParam2 == 0)
		{
			if (uParam0->f_1 == 1)
			{
				Global_1900073->f_26[iParam2]->f_24 = 15f;
				Global_1900073->f_26[iParam2]->f_25 = 20f;
			}
		}
		else if (uParam0->f_4 == 1)
		{
			Global_1900073->f_26[iParam2]->f_24 = 7f;
			Global_1900073->f_26[iParam2]->f_25 = 10f;
		}
		func_548(uParam1, iParam2, 1024);
	}
}

void func_529(var uParam0, var uParam1, var uParam2)
{
	switch (Global_1900073->f_26[0]->f_16)
	{
		case -1:
			func_520(&(uParam0->f_105), 15, 1);
			func_520(&(uParam0->f_105), 16, 1);
			func_520(&(uParam0->f_105), 17, 1);
			func_520(&(uParam0->f_105), 18, 1);
			func_520(&(uParam0->f_105), 19, 1);
			func_520(&(uParam0->f_105), 20, 1);
			if (func_393(&(Global_40.f_11184[0])))
			{
				func_110(uParam0, 25, 1, -1, 1);
			}
			break;
		case 1:
			if (is_control_just_pressed(0, 130948705))
			{
				func_110(uParam0, 15, 1, -2, 0);
			}
			break;
		case 3:
			if (is_control_just_pressed(0, 130948705))
			{
				func_110(uParam0, 16, 1, -2, 0);
			}
			break;
		case 2:
			if (is_control_just_pressed(0, 130948705))
			{
				func_110(uParam0, 17, 1, -2, 0);
			}
			break;
		case 4:
			if (is_control_just_pressed(0, 130948705))
			{
				func_110(uParam0, 18, 1, -2, 0);
			}
			break;
		case 5:
			if (is_control_just_pressed(0, 130948705))
			{
				func_110(uParam0, 19, 1, -2, 0);
			}
			break;
		case 6:
			if (is_control_just_pressed(0, 130948705))
			{
				func_110(uParam0, 20, 1, -2, 0);
				func_533(uParam0, uParam1, uParam2, 0, 32768);
			}
			break;
	}
}

float func_530(var uParam0)
{
	if (!func_74(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_254(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_295() - uParam0->f_1);
}

void func_531(var uParam0, char* sParam1)
{
	if (!are_strings_equal(uParam0->f_3, sParam1))
	{
		uParam0->f_3 = sParam1;
		_0xac84686c06184b0d(uParam0->f_3, uParam0->f_1);
	}
}

void func_532(var uParam0)
{
	if (func_46(&(uParam0->f_676)) || func_50(uParam0, 131072))
	{
		return;
	}
	if (trigger_music_event("BOB_FISHING_START"))
	{
		func_51(uParam0, 131072);
	}
}

void func_533(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (((((iParam3 != 0 || func_1()) || func_46(&(uParam0->f_676))) || func_772(1)) || func_536(uParam0, iParam4)) || is_entity_dead(func_53(uParam1, iParam3)))
	{
		return;
	}
	StringCopy(&cVar0, "", 24);
	switch (iParam4)
	{
		case 1:
			StringCopy(&cVar0, "FISH_CAST", 24);
			break;
		case 2:
			StringCopy(&cVar0, "FISH_BAIT", 24);
			break;
		case 4:
			StringCopy(&cVar0, "FISH_GROUND", 24);
			break;
		case 8:
			StringCopy(&cVar0, "FISH_MISSED", 24);
			break;
		case 16:
			StringCopy(&cVar0, "FISH_HOOK", 24);
			break;
		case 32:
			StringCopy(&cVar0, "FISH_HOOK_I", 24);
			break;
		case 64:
			StringCopy(&cVar0, "FISH_SNAP_F", 24);
			break;
		case 128:
			StringCopy(&cVar0, "FISH_CT_GP", 24);
			break;
		case 256:
			StringCopy(&cVar0, "FISH_CT_FH", 24);
			break;
		case 512:
			StringCopy(&cVar0, "FISH_CT_L", 24);
			break;
		case 1024:
			StringCopy(&cVar0, "FISH_CT_T", 24);
			break;
		case 2048:
			StringCopy(&cVar0, "FISH_CT_L_T", 24);
			break;
		case 4096:
			StringCopy(&cVar0, "FISH_KEEP", 24);
			break;
		case 8192:
			StringCopy(&cVar0, "FISH_REL_FISH", 24);
			break;
		case 16384:
			StringCopy(&cVar0, "FISH_REL_MM", 24);
			break;
		case 32768:
			StringCopy(&cVar0, "FISH_NO_BAIT", 24);
			break;
		case 65536:
			StringCopy(&cVar0, "FISH_DIE_UHK", 24);
			break;
		case 131072:
			StringCopy(&cVar0, "FISH_REL_DEAD", 24);
			break;
		case 262144:
			StringCopy(&cVar0, "FISH_MID_BAT", 24);
			break;
		case 524288:
			iVar3 = func_142(uParam0, uParam1, uParam2, 0);
			if (func_238(iVar3))
			{
				switch (&uParam2->f_327[iVar3])
				{
					case 0:
						StringCopy(&cVar0, "FISH_BLUEGILL", 24);
						break;
					case 1:
						StringCopy(&cVar0, "FISH_BULLCAT", 24);
						break;
					case 2:
						StringCopy(&cVar0, "FISH_CHAPICK", 24);
						break;
					case 3:
						StringCopy(&cVar0, "FISH_CHANCAT", 24);
						break;
					case 4:
						StringCopy(&cVar0, "FISH_STURGEON", 24);
						break;
					case 5:
						StringCopy(&cVar0, "FISH_LARGBASS", 24);
						break;
					case 6:
						StringCopy(&cVar0, "FISH_GAR", 24);
						break;
					case 7:
						StringCopy(&cVar0, "FISH_MUSKIE", 24);
						break;
					case 8:
						StringCopy(&cVar0, "FISH_PIKE", 24);
						break;
					case 9:
						StringCopy(&cVar0, "FISH_PERCH", 24);
						break;
					case 10:
						StringCopy(&cVar0, "FISH_REDPICK", 24);
						break;
					case 11:
						StringCopy(&cVar0, "FISH_ROCKBASS", 24);
						break;
					case 12:
						StringCopy(&cVar0, "FISH_SMALBASS", 24);
						break;
					case 13:
						StringCopy(&cVar0, "FISH_SALMON", 24);
						break;
					case 14:
						StringCopy(&cVar0, "FISH_TROUT", 24);
						break;
				}
			}
			break;
		default:
			break;
	}
	if (is_string_null(&cVar0) || are_strings_equal(&cVar0, ""))
	{
		return;
	}
	if (func_58())
	{
		StringConCat(&cVar0, "_J", 24);
	}
	else
	{
		StringConCat(&cVar0, "_A", 24);
	}
	if (func_773(iParam4) && func_774())
	{
	}
	else
	{
		func_775(uParam0, cVar0);
	}
	if (iParam4 == 262144)
	{
		func_104(&(uParam0->f_667));
		uParam0->f_670 = get_random_int_in_range(40, 60);
	}
	else
	{
		func_776(uParam0, iParam4);
	}
}

void func_534(var uParam0, int iParam1)
{
	if (!func_80(iParam1, 64))
	{
		if (func_102(iParam1, 16, 1) || func_777(uParam0, iParam1))
		{
			func_104(&((*uParam0)[iParam1]->f_75));
			func_104(&((*uParam0)[iParam1]->f_183));
			func_197(iParam1, 64);
		}
	}
}

void func_535(var uParam0, int iParam1)
{
	if (does_entity_exist((*uParam0)[iParam1]->f_13))
	{
		set_entity_collision((*uParam0)[iParam1]->f_13, true, false);
		set_entity_invincible((*uParam0)[iParam1]->f_13, false);
		if (is_entity_attached((*uParam0)[iParam1]->f_13))
		{
			detach_entity((*uParam0)[iParam1]->f_13, true, true);
			activate_physics((*uParam0)[iParam1]->f_13);
		}
		set_object_as_no_longer_needed(&((*uParam0)[iParam1]->f_13));
	}
}

bool func_536(var uParam0, int iParam1)
{
	return func_207(uParam0->f_666, iParam1);
}

void func_537(var uParam0, var uParam1, int iParam2)
{
	if (func_79(uParam1, iParam2, 2))
	{
		return;
	}
	func_548(uParam1, iParam2, 2);
	func_414(uParam0, uParam1, iParam2, 1);
	func_11(uParam1, iParam2);
	func_778(uParam0, uParam1, iParam2);
	func_191(uParam1, iParam2, 1);
	(*uParam1)[iParam2]->f_181++;
	if (iParam2 == 0)
	{
		func_72(uParam0);
		if (!func_46(&(uParam0->f_676)))
		{
			func_554(&(uParam0->f_105), 41, 30);
		}
		else
		{
			func_554(&(uParam0->f_105), 41, 20);
		}
		uParam0->f_35++;
		if (does_entity_exist(func_257(iParam2)))
		{
			_0x978aa2323ed32209(func_257(iParam2), 0.1f);
		}
		if (does_entity_exist(func_260(iParam2)))
		{
			_0x978aa2323ed32209(func_260(iParam2), 0.1f);
		}
	}
	else
	{
		if (does_entity_exist(func_257(iParam2)))
		{
			_0x978aa2323ed32209(func_257(iParam2), 0f);
		}
		if (does_entity_exist(func_260(iParam2)))
		{
			_0x978aa2323ed32209(func_260(iParam2), 0f);
		}
	}
}

void func_538(var uParam0, int iParam1)
{
	if (((iParam1 == 0 && !func_79(uParam0, iParam1, 512)) && func_74(&((*uParam0)[iParam1]->f_202))) && func_530(&((*uParam0)[iParam1]->f_202)) < 6f)
	{
		(*uParam0)[iParam1]->f_199 = 2f;
	}
	else
	{
		(*uParam0)[iParam1]->f_199 = 1f;
	}
}

void func_539(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_80(iParam3, 64) || (*uParam1)[iParam3]->f_74 == 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		switch (&(*uParam1)[iParam3]->f_118[iVar0])
		{
			case 0:
				if (func_779(uParam0, uParam1, uParam2, iParam3, iVar1))
				{
					func_417(uParam1, iParam3, iVar1, 1);
					func_104((*uParam1)[iParam3]->f_134[iVar0]);
				}
				else
				{
					func_416(uParam1, iParam3, iVar1);
				}
				break;
			case 1:
				if (func_780(uParam0, uParam1, uParam2, iParam3, iVar1))
				{
					func_416(uParam1, iParam3, iVar1);
					func_417(uParam1, iParam3, iVar1, 0);
					func_104((*uParam1)[iParam3]->f_134[iVar0]);
				}
				else
				{
					func_781(uParam0, uParam1, uParam2, iParam3, iVar1);
				}
				break;
			case 2:
				func_416(uParam1, iParam3, iVar1);
				break;
		}
		iVar0++;
	}
}

bool func_540()
{
	if (func_71())
	{
		return true;
	}
	return false;
}

int func_541(var uParam0)
{
	if (!func_74(&(uParam0->f_96)) || func_107(&(uParam0->f_96)) < 3f)
	{
		return 0;
	}
	if (func_393(&(Global_40.f_11184[0])))
	{
		if (func_397(&(Global_40.f_11184[0])) || func_398(&(Global_40.f_11184[0])))
		{
			if (Global_1900073->f_23 == 0)
			{
				if (_is_using_keyboard(0) && _0xf4cb347d7b5eb0fd())
				{
					if (_0x5952dfa38fa529fe())
					{
						if (func_298(&(uParam0->f_105), 34) && !func_182(&(uParam0->f_105[34])))
						{
							return 1;
						}
					}
					else if (func_298(&(uParam0->f_105), 33) && !func_182(&(uParam0->f_105[33])))
					{
						return 1;
					}
				}
				else if (_0x5952dfa38fa529fe())
				{
					if (func_298(&(uParam0->f_105), 32) && !func_182(&(uParam0->f_105[32])))
					{
						return 1;
					}
				}
				else if (func_298(&(uParam0->f_105), 31) && !func_182(&(uParam0->f_105[31])))
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
	return 0;
}

void func_542(var uParam0, int iParam1)
{
	if (!is_control_pressed(0, -128997553))
	{
		func_523(uParam0, 0, 0, 1);
		func_782(uParam0, 0, iParam1);
		if (!func_74(&(uParam0->f_96)))
		{
			func_104(&(uParam0->f_96));
		}
	}
	else
	{
		func_782(uParam0, 0, iParam1);
		func_252(uParam0, 0);
		func_76(&(uParam0->f_96));
	}
}

void func_543(var uParam0, var uParam1)
{
	if ((*uParam1)[0]->f_71 == 0 || (*uParam1)[0]->f_71 == 1)
	{
		func_523(uParam0, 2, 0, 1);
	}
	else
	{
		func_252(uParam0, 2);
	}
}

void func_544(var uParam0, var uParam1, var uParam2)
{
	if ((((((func_540() || (&Global_1900073->f_26[0] == 6 && !func_80(0, 64))) || (&Global_1900073->f_26[0] == 6 && !is_control_pressed(0, -128997553))) || (&Global_1900073->f_26[0] == 10 && !func_80(0, 64))) || (&Global_1900073->f_26[0] == 10 && !is_control_pressed(0, -128997553))) || _0x6cd79468a1e595c6(0)) || uParam0->f_710 != _0x5952dfa38fa529fe())
	{
		func_252(uParam0, 3);
		func_76(&(uParam0->f_99));
		uParam0->f_710 = _0x5952dfa38fa529fe();
		return;
	}
	if (!_uiprompt_is_valid(uParam0->f_93))
	{
		iVar0 = 0;
		if (&Global_1900073->f_26[0] == 6)
		{
			if (func_397(&(Global_40.f_11184[0])) || func_398(&(Global_40.f_11184[0])))
			{
				iVar0 = 1;
			}
		}
		func_523(uParam0, 3, iVar0, 1);
	}
	if (!_uiprompt_is_valid(uParam0->f_93))
	{
		return;
	}
	fVar1 = 0f;
	if (Global_1900073->f_26[0]->f_4 != 0f)
	{
		func_782(uParam0, 3, 0);
		func_76(&(uParam0->f_99));
		fVar1 = Global_1900073->f_26[0]->f_4;
	}
	else if (&Global_1900073->f_26[0] == 6 || &Global_1900073->f_26[0] == 10)
	{
		if ((*uParam1)[0]->f_71 != 0)
		{
			if (func_783(uParam0))
			{
				func_782(uParam0, 3, 1);
			}
			else
			{
				func_782(uParam0, 3, 0);
			}
		}
		else
		{
			func_782(uParam0, 3, 0);
		}
	}
	else if (&Global_1900073->f_154[0] == 1)
	{
		iVar2 = func_142(uParam0, uParam1, uParam2, 0);
		if (func_238(iVar2) && !func_146(uParam2, iVar2))
		{
			if (func_784(uParam0))
			{
				func_782(uParam0, 3, 1);
			}
			else
			{
				func_782(uParam0, 3, 0);
			}
		}
		else
		{
			func_782(uParam0, 3, 0);
			func_76(&(uParam0->f_99));
		}
	}
	else if (func_785(uParam0))
	{
		func_782(uParam0, 3, 1);
	}
	else
	{
		func_782(uParam0, 3, 0);
	}
	fVar1 = func_358(fVar1, -1f, 1f);
	if (fVar1 > 0f)
	{
		fVar3 = get_control_normal(2, 1339352408);
		fVar4 = get_control_normal(2, -1779240557);
		vVar5 = { func_786(fVar3, fVar4, 0f) };
		vVar8 = { 0f, -1f, 0f };
		fVar11 = get_angle_between_2d_vectors(vVar5.x, vVar5.y, vVar8.x, vVar8.y);
		fVar12 = (fVar11 / 360f);
		if (fVar3 < 0f)
		{
			fVar12 = (1f - fVar12);
		}
		fVar12 = func_358(fVar12, 0f, 1f);
		fVar12 = (fVar12 + 0.5f);
		if (fVar12 > 1f)
		{
			fVar12 = (fVar12 - 1f);
		}
		if (!_is_using_keyboard(0))
		{
			_uiprompt_set_spinner_position(uParam0->f_93, fVar12);
		}
	}
}

void func_545(var uParam0, var uParam1)
{
	if ((&Global_1900073->f_26[0] == 6 && !func_79(uParam1, 0, 4096)) && func_393(&(Global_40.f_11184[0])))
	{
		if ((*uParam1)[0]->f_71 == 1)
		{
			if (Global_1900073->f_23 == 1 && uParam0->f_35 < 2)
			{
				if (_is_using_keyboard(0) && _0xf4cb347d7b5eb0fd())
				{
					if (_0x5952dfa38fa529fe())
					{
						func_110(uParam0, 34, 1, -2, 1);
					}
					else
					{
						func_110(uParam0, 33, 1, -2, 1);
					}
				}
				else if (_0x5952dfa38fa529fe())
				{
					func_110(uParam0, 32, 1, -2, 1);
				}
				else
				{
					func_110(uParam0, 31, 1, -2, 1);
				}
			}
			else
			{
				func_110(uParam0, 30, 1, func_787(uParam0), 1);
				if (_is_using_keyboard(0) && _0xf4cb347d7b5eb0fd())
				{
					if (_0x5952dfa38fa529fe())
					{
						func_110(uParam0, 34, 0, -2, 1);
					}
					else
					{
						func_110(uParam0, 33, 0, -2, 1);
					}
				}
				else if (_0x5952dfa38fa529fe())
				{
					func_110(uParam0, 32, 0, -2, 1);
				}
				else
				{
					func_110(uParam0, 31, 0, -2, 1);
				}
			}
			func_110(uParam0, 39, 0, -2, 1);
			if (!func_46(&(uParam0->f_676)))
			{
				func_110(uParam0, 41, 0, -2, 1);
			}
		}
		else
		{
			if (Global_1900073->f_23 == 1 && uParam0->f_35 < 2)
			{
				func_110(uParam0, 39, 1, -2, 1);
			}
			else
			{
				func_110(uParam0, 30, 1, func_787(uParam0), 1);
				func_110(uParam0, 39, 0, -2, 1);
			}
			if (!func_46(&(uParam0->f_676)))
			{
				func_110(uParam0, 41, 0, -2, 1);
			}
		}
	}
}

void func_546(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((*uParam1)[iParam3]->f_74 == 1)
	{
		return;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((!func_238(iVar0) && func_393(&(Global_40.f_11184[iParam3]))) && !func_540())
	{
		func_788(uParam0, uParam1, uParam2, iParam3);
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0))
	{
		if (!func_789(uParam0, uParam1, uParam2, iParam3))
		{
			func_790(uParam0, uParam1, uParam2, iParam3);
		}
		else
		{
			func_333(iParam3, 512);
			if ((*uParam1)[iParam3]->f_189 == 1)
			{
				func_33(uParam1, iParam3);
				if (func_74(&((*uParam1)[iParam3]->f_186)) && func_75(&((*uParam1)[iParam3]->f_186)) > (*uParam1)[iParam3]->f_197)
				{
					func_415(uParam0, uParam1, uParam2, iParam3, 0);
				}
				else
				{
					func_415(uParam0, uParam1, uParam2, iParam3, 2);
				}
			}
			if (iParam3 == 0)
			{
				func_782(uParam0, 2, 0);
				if (func_758(2))
				{
					func_791(uParam0, 2, 0);
				}
			}
			func_187(uParam0, uParam1, uParam2, iParam3, 1, 0, 0);
			(*uParam1)[iParam3]->f_182 = 0;
			(*uParam1)[iParam3]->f_72++;
			func_792(uParam0, uParam1, iParam3, 1);
		}
	}
}

bool func_547(var uParam0, var uParam1, int iParam2)
{
	if (func_79(uParam1, iParam2, 4096))
	{
		return true;
	}
	else if (func_80(iParam2, 2))
	{
		return true;
	}
	else if (func_360(iParam2, 128))
	{
		return true;
	}
	else if (iParam2 == 0 && func_793(uParam0, uParam1))
	{
		return true;
	}
	else if (func_80(iParam2, 2048))
	{
		return true;
	}
	else if ((*uParam1)[iParam2]->f_71 == 0 && !func_393(&(Global_40.f_11184[iParam2])))
	{
		return true;
	}
	else if (iParam2 == 0 && func_794())
	{
		return true;
	}
	return false;
}

void func_548(var uParam0, int iParam1, int iParam2)
{
	if (!func_79(uParam0, iParam1, iParam2))
	{
		func_229(&((*uParam0)[iParam1]->f_3), iParam2);
	}
}

bool func_549(var uParam0, var uParam1, int iParam2)
{
	if ((((*uParam1)[iParam2]->f_74 == 1 && (*uParam1)[iParam2]->f_78 != -1) && func_107(&((*uParam1)[iParam2]->f_75)) > IntToFloat((*uParam1)[iParam2]->f_78)) && func_456(uParam0, uParam1, iParam2, 1))
	{
		func_795(uParam0, uParam1, iParam2);
		func_72(uParam0);
		return true;
	}
	return false;
}

bool func_550(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((*uParam1)[iParam3]->f_74 == 0 && func_393(&(Global_40.f_11184[iParam3])))
	{
		if ((((iParam3 == 0 && func_762(&(uParam0->f_83[2]), 1)) || (iParam3 == 0 && func_102(0, 1, 1))) || iParam3 != 0) || func_796(uParam2, iParam3))
		{
			if (func_797(uParam0, uParam1, uParam2, iParam3))
			{
				func_798(uParam0, uParam1, uParam2, iParam3, func_142(uParam0, uParam1, uParam2, iParam3));
				if (iParam3 == 0)
				{
					func_72(uParam0);
					func_531(uParam0, uParam0->f_7);
				}
				else
				{
					func_197(iParam3, 32);
				}
				return true;
			}
			else if (func_799(uParam1, uParam2, iParam3))
			{
				func_187(uParam0, uParam1, uParam2, iParam3, 1, 0, 0);
				if (iParam3 == 0)
				{
					if ((*uParam1)[iParam3]->f_189 == 1)
					{
						func_110(uParam0, 43, 1, -2, 1);
					}
					else
					{
						func_110(uParam0, 44, 1, -2, 1);
					}
					if (func_46(&(uParam0->f_676)))
					{
						func_237(&(uParam0->f_105), 39);
					}
					if (get_random_int_in_range(0, 3) == 0)
					{
						func_533(uParam0, uParam1, uParam2, iParam3, 8);
					}
				}
				(*uParam1)[iParam3]->f_72++;
				func_792(uParam0, uParam1, iParam3, 1);
				func_153(iParam3, 1, 1);
				return true;
			}
		}
	}
	return false;
}

void func_551(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		return;
	}
	if (!func_74(&((*uParam1)[iParam3]->f_191)))
	{
		func_166(uParam1, iParam3, 2048);
		func_104(&((*uParam1)[iParam3]->f_191));
		(*uParam1)[iParam3]->f_194 = get_random_int_in_range(7, 15);
	}
	if (&Global_1900073->f_26[iParam3] == 6)
	{
		if (func_79(uParam1, iParam3, 2048))
		{
			if ((((*uParam1)[iParam3]->f_71 == 0 && func_107(&((*uParam1)[iParam3]->f_191)) >= IntToFloat((*uParam1)[iParam3]->f_194)) && !func_800(iParam3)) || Global_1900073->f_12 == 1)
			{
				func_166(uParam1, iParam3, 2048);
				func_104(&((*uParam1)[iParam3]->f_191));
				(*uParam1)[iParam3]->f_194 = get_random_int_in_range(7, 15);
			}
		}
		else if ((Global_1900073->f_12 == 0 && func_107(&((*uParam1)[iParam3]->f_191)) >= IntToFloat((*uParam1)[iParam3]->f_194)) && !func_801(uParam0, uParam1, uParam2, iParam3))
		{
			func_548(uParam1, iParam3, 2048);
			func_104(&((*uParam1)[iParam3]->f_191));
			(*uParam1)[iParam3]->f_194 = get_random_int_in_range(1, 6);
			(*uParam1)[iParam3]->f_195 = get_random_float_in_range((0.5f - 0.3f), 0.5f);
		}
	}
	else if (&Global_1900073->f_26[iParam3] == 7)
	{
		if (func_802(uParam0, uParam1, uParam2, iParam3))
		{
			func_548(uParam1, iParam3, 2048);
			(*uParam1)[iParam3]->f_195 = get_random_float_in_range((1f - 0.3f), 1f);
		}
		else
		{
			func_166(uParam1, iParam3, 2048);
		}
	}
	if (func_79(uParam1, iParam3, 2048))
	{
		func_153(iParam3, 2048, 0);
		Global_1900073->f_26[iParam3]->f_23 = 0f;
		Global_1900073->f_26[iParam3]->f_14 = (*uParam1)[iParam3]->f_195;
	}
	else
	{
		func_333(iParam3, 2048);
		Global_1900073->f_26[iParam3]->f_23 = 1f;
		Global_1900073->f_26[iParam3]->f_14 = 0f;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0) && &Global_1900073->f_26[iParam3] == 7)
	{
		vVar1 = { get_offset_from_entity_given_world_coords(func_53(uParam1, iParam3), func_262(uParam2, iVar0)) };
		fVar4 = (absf(vVar1.x) / 10f);
		fVar5 = func_358(fVar4, 0f, 0.5f);
		if (vVar1.x > 0f)
		{
			Global_1900073->f_26[iParam3]->f_22 = (0.5f + fVar5);
		}
		else if (vVar1.x < 0f)
		{
			Global_1900073->f_26[iParam3]->f_22 = (0.5f - fVar5);
		}
		else
		{
			Global_1900073->f_26[iParam3]->f_22 = 0.5f;
		}
	}
	else
	{
		Global_1900073->f_26[iParam3]->f_22 = -1f;
	}
}

void func_552(var uParam0)
{
	if (!func_79(uParam0, 0, 256))
	{
		if (func_102(0, 1, 1))
		{
			func_548(uParam0, 0, 256);
			if (func_74(&((*uParam0)[0]->f_202)) && func_107(&((*uParam0)[0]->f_202)) < 10f)
			{
				func_548(uParam0, 0, 512);
			}
			else
			{
				func_166(uParam0, 0, 512);
			}
			func_104(&((*uParam0)[0]->f_202));
		}
		else if ((func_79(uParam0, 0, 512) && func_74(&((*uParam0)[0]->f_202))) && func_107(&((*uParam0)[0]->f_202)) > 10f)
		{
			func_166(uParam0, 0, 512);
		}
	}
	else if (!func_102(0, 1, 0))
	{
		func_166(uParam0, 0, 256);
	}
}

void func_553(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((iParam3 == 0 && func_107(&(uParam0->f_667)) > IntToFloat(uParam0->f_670)) && func_251(iParam3))
	{
		func_533(uParam0, uParam1, uParam2, 0, 262144);
	}
}

void func_554(var uParam0, int iParam1, int iParam2)
{
	func_104(uParam0->f_154[iParam1]);
	uParam0->f_383[iParam1] = iParam2;
}

void func_555(var uParam0, int iParam1)
{
	if (func_263(&(Global_1900073->f_154[iParam1])))
	{
		if (!does_entity_exist((*uParam0)[iParam1]->f_13))
		{
			request_model((*uParam0)[iParam1]->f_18, false);
			if (has_model_loaded((*uParam0)[iParam1]->f_18) && does_entity_exist(func_260(iParam1)))
			{
				(*uParam0)[iParam1]->f_13 = create_object((*uParam0)[iParam1]->f_18, func_261(iParam1), false, false, false, false, true);
				set_entity_collision((*uParam0)[iParam1]->f_13, false, false);
				set_entity_invincible((*uParam0)[iParam1]->f_13, true);
				set_model_as_no_longer_needed((*uParam0)[iParam1]->f_18);
				func_444((*uParam0)[iParam1]->f_13);
			}
		}
		if (does_entity_exist((*uParam0)[iParam1]->f_13))
		{
			_0xce71c2f9baa3f975(func_53(uParam0, iParam1), (*uParam0)[iParam1]->f_13);
		}
	}
}

bool func_556(var uParam0, int iParam1, int iParam2)
{
	if (func_263(&(Global_1900073->f_154[iParam1])))
	{
		if (func_102(iParam1, 2, 1))
		{
			if (iParam2 == 1)
			{
			}
			return true;
		}
		else if (Global_1900073->f_26[iParam1]->f_2 <= 1f)
		{
			if (iParam2 == 1)
			{
			}
			return true;
		}
		else if (func_69(iParam1, 1, 1) && func_729(uParam0->f_65, func_258(iParam1)))
		{
			if (iParam2 == 1)
			{
			}
			return true;
		}
	}
	return false;
}

bool func_557(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (&Global_1900073->f_154[iParam3] == 1)
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar0))
		{
			func_803(uParam0, uParam1, uParam2, iParam3, iVar0);
			func_804(uParam0, uParam1, uParam2, iParam3, iVar0);
			func_805(uParam1, uParam2, iParam3);
		}
		else
		{
			(*uParam1)[iParam3]->f_207 = 0;
			(*uParam1)[iParam3]->f_206 = 0;
			(*uParam1)[iParam3]->f_205 = 0;
		}
		if (func_806(uParam0, uParam1, uParam2, iParam3, iVar0))
		{
			return true;
		}
	}
	else
	{
		(*uParam1)[iParam3]->f_207 = 0;
		(*uParam1)[iParam3]->f_206 = 0;
		(*uParam1)[iParam3]->f_205 = 0;
		if (iParam3 == 0)
		{
			if (func_80(iParam3, 2))
			{
				return true;
			}
			else if (func_793(uParam0, uParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_558(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_79(uParam1, iParam3, 1048576))
	{
		return;
	}
	func_548(uParam1, iParam3, 1048576);
	if (iParam3 == 0)
	{
		func_72(uParam0);
		_0xa33f5069b0cb89b8();
		func_807();
		func_808(uParam0, uParam1, uParam2, iParam3);
	}
	func_451(iParam3);
	if (&Global_1900073->f_154[iParam3] == 1)
	{
		(*uParam1)[iParam3]->f_73++;
		func_792(uParam0, uParam1, iParam3, 2);
		iVar0 = func_809(uParam0, uParam1, uParam2, iParam3);
		func_187(uParam0, uParam1, uParam2, iParam3, 0, iVar0, 1);
	}
}

void func_559(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		if (!func_536(uParam0, 16))
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 16);
		}
		else if (&Global_1900073->f_154[iParam3] != 1)
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 32);
		}
	}
}

void func_560(var uParam0, var uParam1, var uParam2)
{
	if (&Global_1900073->f_154[0] == 1)
	{
		bVar0 = func_46(&(uParam0->f_676));
		iVar1 = func_142(uParam0, uParam1, uParam2, 0);
		if (func_238(iVar1))
		{
			if (func_146(uParam2, iVar1))
			{
				func_520(&(uParam0->f_105), 48, bVar0);
				func_520(&(uParam0->f_105), 49, bVar0);
				if (func_74(&((*uParam1)[0]->f_215)) && func_75(&((*uParam1)[0]->f_215)) < 4000)
				{
					if ((*uParam1)[0]->f_210 <= 1)
					{
						func_110(uParam0, 45, 1, 10000, 1);
					}
					else
					{
						func_110(uParam0, 47, 0, 10000, 1);
					}
				}
			}
			else
			{
				func_520(&(uParam0->f_105), 45, bVar0);
				func_520(&(uParam0->f_105), 47, bVar0);
				if ((*uParam1)[0]->f_211 > 0)
				{
					if (_0x5952dfa38fa529fe())
					{
						func_110(uParam0, 49, 1, 10000, 1);
					}
					else
					{
						func_110(uParam0, 48, 1, 10000, 1);
					}
					if (_is_using_keyboard(0) && !_0x5952dfa38fa529fe())
					{
						func_110(uParam0, 75, 0, 10000, 1);
					}
				}
			}
		}
		else
		{
			func_520(&(uParam0->f_105), 45, bVar0);
			func_520(&(uParam0->f_105), 47, bVar0);
			func_520(&(uParam0->f_105), 48, bVar0);
			func_520(&(uParam0->f_105), 49, bVar0);
			func_520(&(uParam0->f_105), 75, bVar0);
		}
	}
	else if (_0x5952dfa38fa529fe())
	{
		func_110(uParam0, 53, 1, 10000, 1);
	}
	else
	{
		func_110(uParam0, 52, 1, 10000, 1);
	}
}

void func_561(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_79(uParam1, iParam3, 131072))
	{
		return;
	}
	func_548(uParam1, iParam3, 131072);
	func_567(uParam0, uParam1, uParam2, iParam3);
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0))
	{
		func_29(uParam0, uParam1, uParam2, iVar0, 0, 0);
	}
	if (uParam0->f_682 == 0)
	{
		func_110(uParam0, 58, 1, -2, 1);
	}
	else
	{
		uParam0->f_708 = 0;
		func_105(uParam0, 1);
	}
}

void func_562(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_79(uParam1, iParam3, 8))
	{
		return;
	}
	func_548(uParam1, iParam3, 8);
	if (&Global_1900073->f_154[iParam3] == 1)
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (!func_238(iVar0))
		{
		}
		else
		{
			func_272(uParam2, iVar0, 10);
			if (!is_entity_dead(&(uParam2->f_163[iVar0])))
			{
				func_566(uParam0, uParam1, uParam2, iParam3, 1);
			}
			if (iParam3 == 0)
			{
				uParam0->f_79 = 1;
				bVar1 = func_88(iVar0);
				iVar2 = func_810(uParam1);
				iVar3 = func_811(&(uParam2->f_327[iVar0]), bVar1, iVar2);
				if ((func_812(iVar3) && bVar1 == 0) && &uParam2->f_491[iVar0] != 4)
				{
					uParam0->f_79 = 0;
				}
			}
		}
	}
	if (iParam3 == 0)
	{
		func_72(uParam0);
		_0xa33f5069b0cb89b8();
		func_520(&(uParam0->f_105), 45, 0);
		func_520(&(uParam0->f_105), 47, 0);
		func_520(&(uParam0->f_105), 48, 0);
		func_520(&(uParam0->f_105), 49, 0);
		func_520(&(uParam0->f_105), 75, 0);
		func_520(&(uParam0->f_105), 52, 0);
		func_520(&(uParam0->f_105), 53, 0);
		func_531(uParam0, uParam0->f_9);
		if (get_random_int_in_range(0, 3) == 0)
		{
			uParam0->f_671 = 1;
		}
		else
		{
			uParam0->f_671 = 0;
		}
		func_104(&(uParam0->f_672));
	}
	else
	{
		Global_1900073->f_26[iParam3]->f_22 = -1f;
		Global_1900073->f_26[iParam3]->f_23 = 0f;
	}
	func_32(uParam1, iParam3);
	func_813(uParam1, iParam3);
	func_333(iParam3, 64);
	func_333(iParam3, 32);
	if (&Global_1900073->f_154[iParam3] == 1 && func_74(&((*uParam1)[iParam3]->f_252)))
	{
		if (!func_254(&((*uParam1)[iParam3]->f_252)))
		{
			func_466(&((*uParam1)[iParam3]->f_252));
		}
	}
}

void func_563(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_79(uParam1, iParam3, 65536) || &Global_1900073->f_154[iParam3] != 1)
	{
		return;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	Global_1900073->f_220[iParam3] = &Global_1900073->f_220[iParam3] + 1;
	Global_1900073->f_215[iParam3] = &Global_1900073->f_215[iParam3] + 1;
	if (iParam3 == 0)
	{
		if (func_744(&(Global_40.f_11184[iParam3])))
		{
			iVar1 = -1555359431;
		}
		else if (func_745(&(Global_40.f_11184[iParam3])))
		{
			iVar1 = -886011719;
		}
		else if (func_397(&(Global_40.f_11184[iParam3])))
		{
			iVar1 = 1013286855;
		}
		else if (func_398(&(Global_40.f_11184[iParam3])))
		{
			iVar1 = 750344149;
		}
		if (func_814(&(Global_1900073->f_159[iParam3])))
		{
			iVar2 = -208442209;
		}
		else
		{
			iVar2 = -868741806;
		}
		if (func_238(iVar0))
		{
			uVar3 = &uParam2->f_163[iVar0];
			_0xda26263c87cce9c1(uVar3, &(Global_1900073->f_169[iParam3]), iVar1, iVar2);
			compendium_fish_caught(uVar3, &(Global_40.f_11184[iParam3]));
			if (func_87(&(uParam2->f_327[iVar0])))
			{
				if (func_89(&(uParam2->f_327[iVar0])))
				{
					uParam2->f_776++;
				}
				else
				{
					uParam2->f_776 = 0;
				}
			}
		}
	}
	func_548(uParam1, iParam3, 65536);
}

void func_564(var uParam0, var uParam1, int iParam2)
{
	if (func_79(uParam1, iParam2, 524288))
	{
		return;
	}
	if (iParam2 == 0 && &Global_1900073->f_154[iParam2] == 1)
	{
		func_792(uParam0, uParam1, iParam2, 3);
	}
	func_548(uParam1, iParam2, 524288);
}

void func_565(var uParam0, int iParam1)
{
	if (uParam0->f_2 == 1)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		if (!func_87(&(Global_1900073->f_159[0])))
		{
			func_28(uParam0);
			return;
		}
		if (&Global_1900073->f_164[0] == 2)
		{
			iVar2 = func_192(&(Global_1900073->f_159[0]));
			if (!func_193(iVar2))
			{
				func_28(uParam0);
				return;
			}
			sVar0 = _create_var_string(38, "ITEM_CAUGHT_PUMP", &(Global_1900073->f_169[0]), func_815(iVar2));
			sVar1 = func_816(iVar2);
		}
		else
		{
			if (iParam1 == 1)
			{
				sVar0 = _create_var_string(38, "MGFSH_CAUGHT_POI", &(Global_1900073->f_169[0]), func_303(&(Global_1900073->f_159[0])));
			}
			else
			{
				sVar0 = _create_var_string(38, "ITEM_CAUGHT_PUMP", &(Global_1900073->f_169[0]), func_303(&(Global_1900073->f_159[0])));
			}
			sVar1 = func_817(&(Global_1900073->f_159[0]));
		}
		uParam0->f_3 = _databinding_add_data_container_from_path("", "InfoBox");
		_databinding_add_data_bool(uParam0->f_3, "isVisible", 1);
		_databinding_add_data_string(uParam0->f_3, "itemLabel", sVar0);
		_databinding_add_data_string(uParam0->f_3, "itemDescription", sVar1);
		*uParam0 = 1;
	}
	if ((*uParam0 == 1 && uParam0->f_1 == 0) && _launch_app_by_hash_with_entry(1749944028, -1645363952) == 0)
	{
		uParam0->f_1 = 1;
		uParam0->f_2 = 1;
	}
}

void func_566(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam4 == 0)
	{
		if (func_79(uParam1, iParam3, 262144))
		{
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0) && !is_entity_dead(&(uParam2->f_163[iVar0])))
			{
				set_entity_invincible(&(uParam2->f_163[iVar0]), false);
				func_166(uParam1, iParam3, 262144);
			}
		}
	}
	else if (!func_79(uParam1, iParam3, 262144))
	{
		iVar1 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar1) && !is_entity_dead(&(uParam2->f_163[iVar1])))
		{
			set_entity_invincible(&(uParam2->f_163[iVar1]), true);
			func_548(uParam1, iParam3, 262144);
		}
	}
}

void func_567(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_79(uParam1, iParam3, 64) || func_79(uParam1, iParam3, 32))
	{
		return;
	}
	func_548(uParam1, iParam3, 32);
	if (iParam3 == 0)
	{
		if (uParam0->f_682 == 0)
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 4096);
		}
		func_818(uParam0, uParam1, uParam2);
		func_819(uParam0, uParam1, uParam2);
		func_28(&(uParam0->f_31));
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar0) && &uParam2->f_491[iVar0] == 4)
		{
			if (func_88(iVar0) && !is_entity_dead(&(uParam2->f_163[iVar0])))
			{
				set_ped_config_flag(&(uParam2->f_163[iVar0]), 186, true);
				set_ped_config_flag(&(uParam2->f_163[iVar0]), 517, true);
			}
			if (uParam0->f_682 == 0)
			{
				func_111();
			}
		}
	}
	Global_1900073->f_225[iParam3] = &Global_1900073->f_225[iParam3] + 1;
	Global_1900073->f_230[iParam3] = &Global_1900073->f_230[iParam3] + 1;
	func_820(uParam0, uParam1, uParam2, iParam3);
	func_186(uParam1, iParam3);
	func_548(uParam1, iParam3, 128);
	func_153(iParam3, 32, 1);
}

void func_568(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_79(uParam1, iParam3, 64) || func_79(uParam1, iParam3, 32))
	{
		return;
	}
	func_548(uParam1, iParam3, 64);
	func_197(iParam3, 65536);
	if (&Global_1900073->f_154[iParam3] == 1)
	{
		if (func_80(iParam3, 131072))
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 131072);
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0))
			{
				uParam2->f_573[iVar0] = 1;
			}
		}
		else
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 8192);
		}
		func_566(uParam0, uParam1, uParam2, iParam3, 1);
		if (iParam3 == 0)
		{
			func_819(uParam0, uParam1, uParam2);
			func_821(uParam0, uParam1, uParam2);
			func_28(&(uParam0->f_31));
		}
		Global_1900073->f_235[iParam3] = &Global_1900073->f_235[iParam3] + 1;
		Global_1900073->f_240[iParam3] = &Global_1900073->f_240[iParam3] + 1;
		func_820(uParam0, uParam1, uParam2, iParam3);
	}
	func_186(uParam1, iParam3);
	func_548(uParam1, iParam3, 128);
	func_153(iParam3, 64, 1);
}

void func_569(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_79(uParam1, iParam3, 64) || func_79(uParam1, iParam3, 32))
	{
		return;
	}
	if (iParam3 == 0)
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (uParam0->f_676 == 1)
		{
			if ((func_238(iVar0) && !is_entity_dead(&(uParam2->f_163[iVar0]))) && func_88(iVar0))
			{
				func_567(uParam0, uParam1, uParam2, iParam3);
				return;
			}
		}
		if (!func_540())
		{
			func_523(uParam0, 5, 0, 1);
			if (&Global_1900073->f_154[iParam3] == 1)
			{
				if (func_238(iVar0))
				{
					if (func_822(uParam0, uParam2, iVar0))
					{
						func_523(uParam0, 6, 0, uParam0->f_79);
						if (uParam0->f_79 == 0)
						{
							func_110(uParam0, 61, 1, -2, 1);
						}
					}
				}
			}
			else
			{
				func_823(2);
				func_533(uParam0, uParam1, uParam2, iParam3, 16384);
			}
			if (func_427(&(uParam0->f_83[5])) && func_762(&(uParam0->f_83[5]), 1))
			{
				func_568(uParam0, uParam1, uParam2, iParam3);
				func_252(uParam0, 5);
				func_252(uParam0, 6);
			}
			else if ((func_427(&(uParam0->f_83[6])) && func_824(&(uParam0->f_83[6]), 0)) && func_762(&(uParam0->f_83[6]), 1))
			{
				func_567(uParam0, uParam1, uParam2, iParam3);
				func_252(uParam0, 5);
				func_252(uParam0, 6);
			}
		}
	}
	else if (func_825(uParam0, uParam1, uParam2, iParam3))
	{
		func_567(uParam0, uParam1, uParam2, iParam3);
	}
	else
	{
		func_568(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_570(var uParam0, int iParam1)
{
	if ((does_particle_fx_looped_exist((*uParam0)[iParam1]->f_25) && func_74(&((*uParam0)[iParam1]->f_27))) && func_75(&((*uParam0)[iParam1]->f_27)) > 100)
	{
		func_104(&((*uParam0)[iParam1]->f_27));
		(*uParam0)[iParam1]->f_26 = ((*uParam0)[iParam1]->f_26 + 0.01f);
		if ((*uParam0)[iParam1]->f_26 > 1f)
		{
			func_186(uParam0, iParam1);
		}
		else
		{
			set_particle_fx_looped_evolution((*uParam0)[iParam1]->f_25, "fade", (*uParam0)[iParam1]->f_26, false);
		}
	}
}

void func_571(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((iParam3 == 0 && &Global_1900073->f_154[iParam3] == 1) && func_107(&(uParam0->f_672)) > 2f)
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar0))
		{
			if (func_88(iVar0))
			{
				if (&uParam2->f_532[iVar0] == 1)
				{
					func_533(uParam0, uParam1, uParam2, iParam3, 2048);
				}
				else
				{
					func_533(uParam0, uParam1, uParam2, iParam3, 512);
				}
			}
			else if (&uParam2->f_532[iVar0] == 1)
			{
				func_533(uParam0, uParam1, uParam2, iParam3, 1024);
			}
			else if (func_89(&(uParam2->f_327[iVar0])))
			{
				func_533(uParam0, uParam1, uParam2, iParam3, 128);
			}
			else
			{
				func_533(uParam0, uParam1, uParam2, iParam3, 256);
			}
			if (!func_79(uParam1, iParam3, 64) && !func_79(uParam1, iParam3, 32))
			{
				if (uParam0->f_671 == 1 && func_107(&(uParam0->f_672)) > 8f)
				{
					func_533(uParam0, uParam1, uParam2, iParam3, 524288);
				}
			}
		}
	}
}

void func_572(var uParam0, int iParam1)
{
	if (func_79(uParam0, iParam1, 16))
	{
		return;
	}
	if (has_anim_event_fired(func_53(uParam0, iParam1), -1947554776))
	{
		func_548(uParam0, iParam1, 16);
		if (does_entity_exist(func_257(iParam1)))
		{
			if (is_entity_attached(func_257(iParam1)))
			{
				detach_entity(func_257(iParam1), true, true);
				activate_physics(func_257(iParam1));
			}
		}
		if (does_entity_exist(func_260(iParam1)))
		{
			if (is_entity_attached(func_260(iParam1)))
			{
				detach_entity(func_260(iParam1), true, true);
				activate_physics(func_260(iParam1));
			}
		}
	}
}

void func_573(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_79(uParam1, iParam3, 131072))
	{
		return;
	}
	if (func_102(iParam3, 64, 1))
	{
		func_548(uParam1, iParam3, 131072);
		if (&Global_1900073->f_154[iParam3] == 1)
		{
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0))
			{
				func_29(uParam0, uParam1, uParam2, iVar0, 1, 1);
			}
		}
		else
		{
			func_35(&((*uParam1)[iParam3]->f_13));
		}
	}
	else if (func_102(iParam3, 256, 1))
	{
		func_561(uParam0, uParam1, uParam2, iParam3);
	}
	else if (func_102(iParam3, 128, 1))
	{
		func_548(uParam1, iParam3, 131072);
	}
}

void func_574(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_80(iParam3, 131072) && func_102(iParam3, 1024, 1))
	{
		func_197(iParam3, 131072);
	}
	if (func_80(iParam3, 131072))
	{
		func_533(uParam0, uParam1, uParam2, iParam3, 65536);
		if (!func_50(uParam0, 524288) && iParam3 == 0)
		{
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0) && func_88(iVar0))
			{
				func_51(uParam0, 524288);
			}
		}
	}
}

void func_575(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_79(uParam1, iParam3, 4))
	{
		return;
	}
	if (func_102(iParam3, 512, 1))
	{
		func_548(uParam1, iParam3, 4);
		if (&Global_1900073->f_154[iParam3] == 1)
		{
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0) && !is_entity_dead(&(uParam2->f_163[iVar0])))
			{
				clear_ped_tasks(&(uParam2->f_163[iVar0]), 1, 0);
				func_566(uParam0, uParam1, uParam2, iParam3, 0);
			}
			func_187(uParam0, uParam1, uParam2, iParam3, 0, 0, 0);
		}
		else
		{
			func_535(uParam1, iParam3);
		}
	}
}

void func_576(var uParam0)
{
	if (&Global_40.f_11184[0] == 1380607804)
	{
		func_110(uParam0, 62, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == 1059426360)
	{
		func_110(uParam0, 63, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == 488496242)
	{
		func_110(uParam0, 64, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == -1527293029)
	{
		func_110(uParam0, 65, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == -1753819339)
	{
		func_110(uParam0, 66, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == 149706141)
	{
		func_110(uParam0, 67, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == -978159653)
	{
		func_110(uParam0, 68, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == 2100131425)
	{
		func_110(uParam0, 69, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == -2041382104)
	{
		func_110(uParam0, 70, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == 1815744868)
	{
		func_110(uParam0, 71, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == 1334018438)
	{
		func_110(uParam0, 72, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == 1055480217)
	{
		func_110(uParam0, 73, 1, -2, 1);
	}
	else if (&Global_40.f_11184[0] == -1916584960)
	{
		func_110(uParam0, 74, 1, -2, 1);
	}
}

bool func_577()
{
	if ((func_1() || Global_1900073->f_22 == 0) || func_297())
	{
		return false;
	}
	return true;
}

void func_578(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 2048))
	{
		func_51(uParam0, 2048);
		func_514(3);
	}
	if (uParam0->f_22 != iParam1)
	{
		if (uParam0->f_22 > iParam1)
		{
			func_515();
		}
		uParam0->f_22 = iParam1;
		func_516(uParam0->f_22);
	}
}

bool func_579()
{
	if ((func_1() || Global_1900073->f_23 == 0) || func_297())
	{
		return false;
	}
	return true;
}

void func_580(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 4096))
	{
		func_51(uParam0, 4096);
		func_514(2);
	}
	if (uParam0->f_23 != iParam1)
	{
		if (uParam0->f_23 > iParam1)
		{
		}
		uParam0->f_23 = iParam1;
		func_516(uParam0->f_23);
	}
}

bool func_581()
{
	if ((func_1() || Global_1900073->f_24 == 0) || func_297())
	{
		return false;
	}
	return true;
}

void func_582(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 8192))
	{
		func_51(uParam0, 8192);
		func_514(2);
	}
	if (uParam0->f_24 != iParam1)
	{
		if (uParam0->f_24 > iParam1)
		{
		}
		uParam0->f_24 = iParam1;
		func_516(uParam0->f_24);
	}
}

int func_583(int iParam0)
{
	switch (iParam0)
	{
		case 247976563:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_584(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 10f;
		default:
			break;
	}
	return 0f;
}

void func_585(var uParam0, int iParam1, float fParam2)
{
	iVar0 = func_702(iParam1);
	if (func_703(iVar0) && !_0x19870c40c7ee15be(iVar0, &(uParam0->f_31[iParam1])))
	{
		uParam0->f_31[iParam1] = _0xe93415b3307208e5(iVar0, uParam0->f_12, 0f, fParam2, 10000f, 0f, 0f, 0f, 1);
	}
}

void func_586(var uParam0, int iParam1)
{
	iVar0 = func_702(iParam1);
	if (func_703(iVar0) && _0x19870c40c7ee15be(iVar0, &(uParam0->f_31[iParam1])))
	{
		_0xc3d581a34bc0a1f0(iVar0, &(uParam0->f_31[iParam1]));
	}
}

bool func_587()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_826())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1934266->f_78.f_55))
	{
		return false;
	}
	if (func_827(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_588(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!is_string_null_or_empty(&(Global_1894899->f_162)))
	{
		sVar0 = func_828(Global_1894899->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_830(func_829(Global_36));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_831(iParam0) || func_631(45))
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

bool func_589(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_590(int iParam0)
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

int func_591(int iParam0)
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

int func_592(int iParam0)
{
	if (!func_589(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

int func_593(int iParam0)
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

char* func_594(int iParam0)
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

bool func_595(int iParam0, int iParam1)
{
	if (!func_741(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_596(int iParam0, int iParam1)
{
	if (!func_589(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

bool func_597(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

int func_598()
{
	return &Global_1899515;
}

int func_599(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_600(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

float func_601(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

var func_602(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

int func_603(int iParam0, int iParam1)
{
	if (!func_384(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_385(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_629(iParam0, 1399091007))
	{
		func_832(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_604(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_609(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_605(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_606(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_607(int iParam0)
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

int func_608(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_833(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_835(&Var0, func_834(0));
	}
	if (!func_836(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_607(iVar14);
	return uVar15;
}

int func_609(bool bParam0)
{
	if (func_26() == -1)
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

bool func_610(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_26() == -1)
	{
		if (func_837(iParam0) && func_838(iParam0))
		{
			func_839(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_611(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_840(iParam0, iParam1);
	Var0 = { func_841(iParam0, 0, 1) };
	iVar5 = func_842(iParam0, &Var0, 0, 0);
	iVar6 = func_843(iParam0, 0);
	if ((iVar5 > 1 && !func_844()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_629(iParam0, -2051813666))
		{
			func_619(583, 1);
		}
		else
		{
			func_619(582, 0);
		}
	}
	if (func_845(iParam0, &Var0, *iParam1, 0, 0))
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

void func_612(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_846(iParam0, -949239683))
	{
		case -1565009253:
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
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

bool func_613(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	return func_614(iParam0) != 0;
}

int func_614(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_847())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_848(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_615(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_616(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_847())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_615(iVar0))
		{
			if (func_168(func_848(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_617(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_849(48);
	func_850(0, -1);
}

bool func_618(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	return func_647((*Global_1347702)[iParam0]->f_15, 1);
}

void func_619(int iParam0, bool bParam1)
{
	func_851(iParam0, &iVar0, &iVar1);
	if (!func_852(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_853(iVar0, iVar1);
}

int func_620(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_621(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_622()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_623(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	return func_647((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_624(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	if (!func_424(iParam0))
	{
		return false;
	}
	return func_425((*Global_1347702)[iParam0]->f_15);
}

int func_625()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_168(func_854(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_626(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_622() && (func_624(38) || func_618(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_622() && (func_624(39) || func_618(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_855(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_622() && (func_624(41) || func_618(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_622() && (func_624(49) || func_618(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_855(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_856(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_857(iParam0, iVar13, iVar14))
	{
	}
	if (func_858(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_859(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_860(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_861(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_862(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_627(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_628(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_622() && (func_624(38) || func_618(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_622() && (func_624(39) || func_618(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_622() && (func_624(49) || func_618(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_622() && (func_624(38) || func_618(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_863(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_863(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_865(_create_var_string(2, sVar0), _create_var_string(2, func_864(func_621(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_863(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_863(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_622() && (func_624(39) || func_618(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_863(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_863(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_622() && (func_624(49) || func_618(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_863(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_863(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_863(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_863(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_629(int iParam0, int iParam1)
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

bool func_630(int iParam0, int iParam1)
{
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_631(int iParam0)
{
	if (!func_866(iParam0))
	{
		return false;
	}
	return func_867(iParam0);
}

void func_632(int iParam0)
{
	if (!func_866(iParam0))
	{
		return;
	}
	func_868(iParam0);
	func_869(iParam0);
}

int func_633(int iParam0)
{
	if (!func_384(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_634(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
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
	if (func_384(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_870(iVar0) || func_871(iVar0))
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

int func_635(int iParam0, bool bParam1)
{
	if (!func_384(iParam0, 0))
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

void func_636(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_606(iParam0))
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

bool func_637(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_841(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_872((386 + iVar28), 1);
			if (func_873(iParam0, &Var0, iVar5, 0))
			{
				if (func_874(iParam0, &Var6, iVar5))
				{
					Var29 = { func_875(iParam0, Var0, iVar5, 0) };
					func_876(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_389(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_638(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_877(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_638(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_640(iParam0))
	{
		return false;
	}
	if (!func_389(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_639(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_635(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_26() == -1)
		{
			func_636(iVar0);
			if (iParam1 == 1248274121)
			{
				func_878(iVar0);
			}
		}
		if (!func_845(iParam0, &uVar1, 1, 0, 0))
		{
			func_839(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_879(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_637(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_637(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_637(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_58())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_880(iVar0))
				{
					func_637(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_637(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_881(Global_35, 2, 0, 1);
				if ((((func_606(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_631(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_606(iVar7) && func_631(24))
				{
					if (!func_637(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_637(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_637(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_619(480, 1);
	}
	return true;
}

bool func_640(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_641(int iParam0, int iParam1, int iParam2)
{
	if (!func_640(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_606(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
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
	if (func_168(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
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
		func_678(func_882(iParam0), func_677(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_26() == -1)
		{
			if (func_647((*Global_1835011)[14]->f_1, 1))
			{
				func_619(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_389(0))
	{
		if (func_638(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_683(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_642(int iParam0)
{
	if ((iParam0 == -615217896 && !func_883()) || iParam0 != -615217896)
	{
		if (func_884(Global_35, iParam0, &uVar0))
		{
			func_662(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_668();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_668();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_668();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_666();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_664();
			break;
	}
}

void func_643(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_664();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_665();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_666();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_667();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_668();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_885();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_886();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_644(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_645(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_646(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_647(int iParam0, bool bParam1)
{
	switch (func_705(iParam0))
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

void func_648(int iParam0)
{
	bVar0 = func_629(iParam0, -2017733358);
	if (func_887() < 3)
	{
		if (bVar0)
		{
			if (func_889(func_888(iParam0), iParam0))
			{
				func_678(79, func_677(func_888(iParam0)), 1);
			}
			else
			{
				func_678(78, func_677(func_888(iParam0)), 1);
			}
		}
		else
		{
			func_678(80, func_677(func_890(iParam0)), 1);
		}
	}
}

bool func_649()
{
	if (((((func_891(839908568, 400) || func_891(-1134030454, 400)) || func_891(623353496, 400)) || func_891(-344413337, 400)) || func_891(-1664948962, 400)) || func_891(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_650(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_892(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_893(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_894(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_651(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_626(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_628(51, 0, 0, 0, 0, -1, 0);
			func_895(8192);
			break;
		case 581047644:
			func_626(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_628(51, 0, 0, 0, 0, -1, 0);
			func_895(524288);
			break;
		case -644199619:
			func_626(39, 0, 0, 0, 0, 0, 1, 0);
			func_628(39, 0, 0, 0, 0, -1, 0);
			func_896(16);
			break;
		case 684296857:
			func_626(41, 0, 0, 0, 0, 0, 1, 0);
			func_628(41, 0, 0, 0, 0, -1, 0);
			func_897(8);
			break;
		case 466137807:
			func_626(49, 0, 0, 0, 0, 0, 1, 0);
			func_628(49, 0, 0, 0, 0, -1, 0);
			func_898(16);
			break;
		case -1087522507:
			func_626(43, 0, 0, -1791518714, func_899(1), 0, -1, 0);
			func_900(1);
			break;
		case -405829000:
			func_626(43, 0, 0, -2087881550, func_899(2), 0, -1, 0);
			func_900(2);
			break;
		case 378660860:
			func_626(43, 0, 0, 1908068621, func_899(4), 0, -1, 0);
			func_900(4);
			break;
		case 1566111097:
			func_626(43, 0, 0, 1611247019, func_899(8), 0, -1, 0);
			func_900(8);
			break;
		case 1276007140:
			func_626(43, 0, 0, 1319635688, func_899(16), 0, -1, 0);
			func_900(16);
			break;
	}
}

void func_652(int iParam0)
{
	if (func_901() == 1)
	{
		if (func_618(39))
		{
			func_619(342, 0);
		}
		else
		{
			func_619(343, 0);
			func_896(1);
		}
	}
	if (func_901() >= 30)
	{
		func_619(344, 0);
	}
	func_626(39, 0, 0, 0, 0, 0, -1, 0);
	func_628(39, 0, 0, func_901(), 30, 1, 0);
}

void func_653(int iParam0)
{
	if (func_902() == 1)
	{
		if (func_618(49))
		{
			func_619(409, 0);
		}
		else
		{
			func_619(410, 0);
			func_898(1);
		}
	}
	if (func_902() >= 10)
	{
		func_619(411, 0);
	}
	func_626(49, 0, 0, 0, 0, 0, -1, 0);
	func_628(49, 0, 0, func_902(), 10, 1, 0);
}

void func_654(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_619(437, 0);
			func_619(440, 0);
			func_903(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_626(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_628(51, 0, 0, sVar0, func_855(-949689219, 20), 1, 0);
			func_895(1);
			func_904(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_903(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_626(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_628(51, 0, 0, sVar0, func_855(-1248968496, 20), 1, 0);
			func_895(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_903(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_626(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_628(51, 0, 0, sVar0, func_855(1706369307, 20), 1, 0);
			func_895(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_903(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_626(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_628(51, 0, 0, sVar0, func_855(1520110311, 20), 1, 0);
			func_895(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_619(438, 0);
			func_903(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_626(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_628(51, 0, 0, sVar0, func_855(-1992824800, 20), 1, 0);
			func_895(32768);
			break;
		default:
			func_619(439, 0);
			break;
	}
}

void func_655()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_656(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_26() == -1)
	{
		if (!func_618(43))
		{
			if (iParam0 == 281887510)
			{
				func_619(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_619(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_619(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_619(400, 0);
			}
		}
		else if (func_629(iParam0, 412399755))
		{
			func_905(-1791518714);
			if (func_906() == 0)
			{
				func_850(0, 10);
				iVar1 = func_907(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_908(iParam0) < func_909(iParam0))
					{
						func_626(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_628(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_618(44))
		{
			if (iParam0 == -222563712)
			{
				func_619(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_619(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_619(401, 0);
			}
		}
		else if (func_629(iParam0, 709057512))
		{
			func_905(-2087881550);
			if (func_906() == 1)
			{
				func_850(0, 10);
				iVar1 = func_907(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_908(iParam0) < func_909(iParam0))
					{
						func_626(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_628(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_618(45))
		{
			if (iParam0 == 2116770557)
			{
				func_619(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_619(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_619(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_619(398, 0);
			}
		}
		else if (func_629(iParam0, -1478961327))
		{
			func_905(1908068621);
			if (func_906() == 2)
			{
				func_850(0, 10);
				iVar1 = func_907(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_910(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_911(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_849(48);
					}
					if (func_908(iParam0) < func_909(iParam0))
					{
						func_626(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_628(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_908(iParam0) < func_909(iParam0))
					{
						func_626(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_628(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_618(46))
		{
			if (iParam0 == 2085530337)
			{
				func_619(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_619(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_619(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_619(406, 0);
			}
		}
		else if (func_629(iParam0, -1238404098))
		{
			func_905(1611247019);
			if (func_906() == 3)
			{
				func_850(0, 10);
				iVar1 = func_907(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_908(iParam0) < func_909(iParam0))
					{
						func_626(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_628(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_618(47))
		{
			if (iParam0 == -1521783510)
			{
				func_619(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_619(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_619(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_619(403, 0);
			}
		}
		else if (func_629(iParam0, 1160548794))
		{
			func_905(1319635688);
			if (func_906() == 4)
			{
				func_850(0, 10);
				iVar1 = func_907(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_908(iParam0) < func_909(iParam0))
					{
						func_626(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_628(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_657(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_910(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_911(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_849(48);
		}
	}
}

void func_658(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_168(func_912(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_913(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_914(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_659(int iParam0, int iParam1, int iParam2)
{
	if (func_26() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_650(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_650(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_650(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_650(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_650(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_650(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_650(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_650(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_650(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_650(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_650(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_650(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_650(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_915())
			{
				func_650(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_650(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_650(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_650(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_650(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_650(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_650(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_650(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_650(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_650(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_650(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_650(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_650(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_660(int iParam0)
{
	if (func_618(41))
	{
		func_619(363, 0);
	}
	else
	{
		func_619(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_916(-1865241121);
			func_917(-642026005);
			func_918(-642026005);
			func_850(0, 10);
			break;
		case -2108314374:
			func_916(2117142684);
			func_917(-940584364);
			func_918(-940584364);
			func_850(0, 10);
			break;
		case -1193798153:
			func_916(-1409326024);
			func_917(1972645282);
			func_918(1972645282);
			func_850(0, 10);
			break;
		case -787702678:
			func_916(-641744968);
			func_917(1667205433);
			func_918(1667205433);
			func_850(0, 10);
			break;
		case -804542901:
			func_916(-946988203);
			func_917(1362715885);
			func_918(1362715885);
			func_850(0, 10);
			break;
		case -1696275132:
			func_916(-646136018);
			func_917(1053540370);
			func_918(1053540370);
			func_850(0, 10);
			break;
		case -161595323:
			func_916(-955835837);
			func_917(-1100103852);
			func_918(-1100103852);
			func_850(0, 10);
			break;
		case -1114363619:
			func_916(-179276075);
			func_917(-1409869209);
			func_918(-1409869209);
			func_850(0, 10);
			break;
		case -368407134:
			func_916(-492711560);
			func_917(-1760235357);
			func_918(-1760235357);
			func_850(0, 10);
			break;
		case 1997759228:
			func_916(1764383959);
			func_917(-138366827);
			func_918(-138366827);
			func_850(0, 10);
			break;
		case 1265573293:
			func_916(317501533);
			func_917(-1261163843);
			func_918(-1261163843);
			func_850(0, 10);
			break;
		case -1030441283:
			func_916(817753087);
			func_917(-963523016);
			func_918(-963523016);
			func_850(0, 10);
			break;
		case -1490884871:
			func_916(576606016);
			func_917(560825326);
			func_918(560825326);
			func_850(0, 10);
			break;
		case -395458616:
			func_916(814934957);
			func_917(858269539);
			func_918(858269539);
			break;
	}
}

void func_661(int iParam0, int iParam1)
{
	func_832(iParam0, iParam1, &uVar0);
}

int func_662(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_841(iParam1, 1, 0) };
		iParam3 = func_919(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_921(iParam1, iParam2, func_920(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_922(1, (func_26() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_920(iParam3, 1)])
			{
				func_923(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_924(32768) && iParam1 != &Global_1946804->f_57[func_920(iParam3, 1)])
			{
				func_925();
				func_923(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_923(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_926(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_923(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_927(0);
			func_928(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_923(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_663(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_881(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_881(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_604("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_605(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_607(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_664()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_665()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_666()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_667()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_668()
{
	func_929();
	func_930();
	func_931();
}

void func_669(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_670(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_863(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_671(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_672(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_673(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_674(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_675(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_676(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_677(int iParam0)
{
	if (!func_384(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_678(int iParam0, int iParam1, bool bParam2)
{
	func_851(iParam0, &iVar0, &iVar1);
	if (!func_852(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_932(iParam0, 1024))
	{
		return;
	}
	func_853(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_679(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_851(iParam0, &iVar0, &iVar1);
	if (!func_852(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_932(iParam0, 1024))
	{
		return;
	}
	func_853(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_680()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_847())
	{
		return func_681();
	}
	iVar4 = (func_847() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_847())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_933(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_848(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_681()
{
	iVar0 = get_random_int_in_range(0, func_847());
	return func_848(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_682(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_683(int iParam0, int iParam1, int iParam2)
{
	if (!func_384(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_841(iParam0, 0, 1) };
	Var5 = { func_875(iParam0, Var0, Var0.f_4, 0) };
	return func_934(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_684(int iParam0)
{
	if (func_26() != -1)
	{
		return;
	}
	switch (func_633(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_935(81053684, 0) <= 0)
			{
				func_923(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_923(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_936(iParam0);
			if (func_937(iVar0))
			{
				func_938(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_923(30, iParam0, 0, 0, 0);
			}
			if (func_939() == -2125499975 || func_939() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_923(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_939() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_923(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_940(-525676072, 0))
			{
				if (func_941(-525676072, &iVar1))
				{
					func_923(33, iVar1, 0, 0, 0);
				}
			}
			func_923(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_942(99217379))
		{
			func_662(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_632(24);
		if (func_663(&iVar2, 0))
		{
			func_637(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_685(int iParam0)
{
	if (func_629(iParam0, 943695443))
	{
		func_943(0, iParam0);
	}
	else if (func_629(iParam0, -2096528786))
	{
		func_943(1, iParam0);
	}
	else if (func_629(iParam0, -1094167013))
	{
		func_943(2, iParam0);
	}
	else if (func_629(iParam0, 1936654645))
	{
		func_943(3, iParam0);
	}
	else if (func_629(iParam0, 1306489306))
	{
		func_943(4, iParam0);
	}
	else if (func_629(iParam0, 435762317))
	{
		func_943(5, iParam0);
	}
	else if (func_629(iParam0, 1259363210))
	{
		func_943(6, iParam0);
	}
	else if (func_629(iParam0, 881398259))
	{
		func_943(7, iParam0);
	}
	else if (func_629(iParam0, -541549214))
	{
		func_943(8, iParam0);
	}
	else if (func_629(iParam0, 130796156))
	{
		func_943(-1, iParam0);
	}
}

bool func_686(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_944(&Var4, 1356624740);
	return func_945(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_687(int iParam0)
{
	if (!func_384(iParam0, 0))
	{
		return Var0;
	}
	if (func_629(iParam0, -305066475))
	{
		if (func_26() == -1)
		{
			if (func_629(iParam0, -537818634))
			{
				return func_946(189951448);
			}
			else
			{
				return func_946(1176172851);
			}
		}
	}
	else if (func_629(iParam0, -537818634))
	{
		return func_946(-963660207);
	}
	if (func_629(iParam0, 2084895747))
	{
		return func_946(1694039471);
	}
	return Var2;
}

void func_688(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_26() == -1)
			{
				if (func_647((*Global_1835011)[4]->f_1, 1))
				{
					func_619(109, 1);
				}
			}
			break;
	}
}

void func_689(int iParam0, char* sParam1)
{
	sVar0 = func_948(func_947(0));
	func_950(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_949(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_690(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_384(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_951())
	{
		func_952(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_383(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_383(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_630(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_385(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_953(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_692(_create_var_string(10, &cVar2, _create_var_string(0, func_677(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_629(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_677(iParam0));
	}
	func_950(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_691(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
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
	if (!_0x271f95e55c663b8b(&uVar0, uParam1))
	{
		return 0;
	}
	Var1.f_1 = 10;
	Var1.f_14 = 255;
	Var1.f_12 = iParam2;
	Var1.f_14 = iParam3;
	Var1.f_13 = iParam4;
	func_954(uParam1, iParam0, Var1);
	return 1;
}

char* func_692(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_693(int iParam0)
{
	if (((((((((iParam0 == -2022805833 || iParam0 == 1468884243) || iParam0 == -666024656) || iParam0 == -275688577) || iParam0 == -180755040) || iParam0 == -1375371513) || iParam0 == -1613317544) || iParam0 == -397513868) || iParam0 == -258491284) || iParam0 == -623113369)
	{
		return true;
	}
	return false;
}

void func_694(var uParam0)
{
	if (func_50(uParam0, 512))
	{
		func_204(uParam0, 512);
		func_753();
		uParam0->f_20 = -1;
	}
}

void func_695(var uParam0)
{
	if (func_50(uParam0, 1024))
	{
		func_204(uParam0, 1024);
		func_753();
		uParam0->f_21 = -1;
	}
}

void func_696(var uParam0)
{
	if (func_50(uParam0, 2048))
	{
		func_204(uParam0, 2048);
		func_753();
		uParam0->f_22 = -1;
	}
}

void func_697(var uParam0)
{
	if (func_50(uParam0, 4096))
	{
		func_204(uParam0, 4096);
		func_753();
		uParam0->f_23 = -1;
	}
}

void func_698(var uParam0)
{
	if (func_50(uParam0, 8192))
	{
		func_204(uParam0, 8192);
		func_753();
		uParam0->f_24 = -1;
	}
}

bool func_699(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_833(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_835(&Var0, func_834(0));
	}
	if (!func_836(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_605(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_876(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_607(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_700(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_841(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_955(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_875(iParam0, Var0, Var0.f_4, bParam4) };
	return func_876(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_701(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_629(iParam0, 606799272))
		{
			func_956(iParam0, iParam1);
		}
		if (func_629(iParam0, -1112814642) && func_629(iParam0, -1697809989))
		{
			func_658(iParam0, iParam1, 1, 0);
		}
	}
}

int func_702(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1278441537;
		case 1:
			return 1425512580;
		case 2:
			return 83214795;
		case 3:
			return -1189840933;
		case 4:
			return -1170018056;
		case 5:
			return 1186597014;
		case 6:
			return 1544478729;
		case 7:
			return 745813108;
		case 8:
			return 1370028657;
		case 9:
			return 974958915;
		case 10:
			return 1568146875;
		case 11:
			return 1630785893;
		case 12:
			return 430222648;
		case 13:
			return -1788538969;
		case 14:
			return -823988763;
		default:
			break;
	}
	return 0;
}

bool func_703(int iParam0)
{
	if ((((((((((((((iParam0 == -1278441537 || iParam0 == 1425512580) || iParam0 == 83214795) || iParam0 == -1189840933) || iParam0 == -1170018056) || iParam0 == 1186597014) || iParam0 == 1544478729) || iParam0 == 745813108) || iParam0 == 1370028657) || iParam0 == 974958915) || iParam0 == 1568146875) || iParam0 == 1630785893) || iParam0 == -1788538969) || iParam0 == 430222648) || iParam0 == -823988763)
	{
		return true;
	}
	return false;
}

void func_704(var uParam0, int iParam1, float fParam2)
{
	sVar0 = func_379(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		decor_set_float(func_53(uParam0, 0), sVar0, fParam2);
	}
}

int func_705(int iParam0)
{
	if (!func_418(iParam0))
	{
		return -1;
	}
	return func_957(iParam0);
}

int func_706(int iParam0)
{
	return iParam0;
}

void func_707(int iParam0)
{
	if (!func_958(iParam0))
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

int func_708(var uParam0)
{
	iVar0 = 10000;
	if ((*uParam0)[0]->f_71 == 1)
	{
		iVar0 = 20000;
	}
	else
	{
		iVar0 = 30000;
	}
	iVar0 = (iVar0 - (*uParam0)[0]->f_181 * 1000);
	if (iVar0 < 10000)
	{
		iVar0 = 10000;
	}
	return iVar0;
}

bool func_709(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 14)
	{
		return false;
	}
	if (iParam1 == 3)
	{
		return false;
	}
	else if (func_242(iParam1) && func_245(func_244(func_243(iParam1))))
	{
		return false;
	}
	else if (&Global_40.f_11184.f_5[iParam1] == 1)
	{
		return false;
	}
	else if (&Global_1900073->f_196[iParam1] == 1)
	{
		return true;
	}
	else if (iParam1 == 8)
	{
		if (uParam0->f_676 == 0)
		{
			return false;
		}
	}
	else if (!func_46(&(uParam0->f_676)) && func_50(uParam0, 524288))
	{
		return false;
	}
	return true;
}

bool func_710(var uParam0, int iParam1)
{
	vVar0 = { func_292(iParam1) };
	if (func_55(vVar0))
	{
		return false;
	}
	return func_56(func_53(uParam0, 0), vVar0, 0) < 50f;
}

int func_711()
{
	iVar0 = 0;
	iVar1 = _0x595478b3bbc3076d();
	iVar2 = func_434(iVar1);
	if (iVar2 != 15)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

float func_712(int iParam0)
{
	return _0x53187e563f938e76(iParam0);
}

void func_713(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_959(iParam1))
		{
			func_960(iParam0, 41788943);
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
			func_961(iParam0, 0, 1);
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
			func_962(iParam0, 0);
			bVar0 = true;
		}
		func_963(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

float func_714(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 2)
	{
		iVar0 = func_192(iParam0);
		if (func_193(iVar0))
		{
			return func_429(iVar0);
		}
	}
	fVar1 = func_964(iParam0);
	if (iParam2 == 1)
	{
		fVar2 = (fVar1 * 0.25f);
		if (func_965())
		{
			fVar1 = (fVar1 + fVar2);
		}
	}
	return fVar1;
}

float func_715(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 2)
	{
		iVar0 = func_192(iParam0);
		if (func_193(iVar0))
		{
			return func_429(iVar0);
		}
	}
	fVar1 = func_966(iParam0);
	if (iParam2 == 1)
	{
		fVar2 = (fVar1 * 0.25f);
		if (!func_965())
		{
			fVar1 = (fVar1 - fVar2);
		}
	}
	return fVar1;
}

float func_716(int iParam0, int iParam1, int iParam2)
{
	fVar0 = func_714(iParam0, iParam1, 0);
	fVar1 = func_715(iParam0, iParam1, 0);
	fVar2 = (fVar1 - fVar0);
	fVar3 = (fVar2 * (to_float(iParam2) / 100f));
	fVar4 = (fVar0 + fVar3);
	return fVar4;
}

float func_717(float fParam0)
{
	iVar0 = floor(fParam0);
	fVar1 = (fParam0 - IntToFloat(iVar0));
	if (fVar1 < 0.0625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0f);
	}
	else if (fVar1 < 0.125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.0625f);
	}
	else if (fVar1 < 0.1875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.125f);
	}
	else if (fVar1 < 0.25f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.1875f);
	}
	else if (fVar1 < 0.3125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.25f);
	}
	else if (fVar1 < 0.375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.3125f);
	}
	else if (fVar1 < 0.4375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.375f);
	}
	else if (fVar1 < 0.5f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.4375f);
	}
	else if (fVar1 < 0.5625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.5f);
	}
	else if (fVar1 < 0.625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.5625f);
	}
	else if (fVar1 < 0.6875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.625f);
	}
	else if (fVar1 < 0.75f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.6875f);
	}
	else if (fVar1 < 0.8125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.75f);
	}
	else if (fVar1 < 0.875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.8125f);
	}
	else if (fVar1 < 0.9375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.875f);
	}
	else
	{
		fVar2 = (IntToFloat(iVar0) + 0.9375f);
	}
	return fVar2;
}

float func_718(var uParam0, int iParam1, int iParam2)
{
	if (func_88(iParam1))
	{
		return 1f;
	}
	if (iParam2 == 1)
	{
		fVar0 = func_714(&(uParam0->f_327[iParam1]), &(uParam0->f_368[iParam1]), 0);
		fVar1 = func_715(&(uParam0->f_327[iParam1]), &(uParam0->f_368[iParam1]), 0);
	}
	else
	{
		fVar0 = func_714(&(uParam0->f_327[iParam1]), 0, 0);
		fVar1 = func_715(&(uParam0->f_327[iParam1]), 2, 0);
	}
	fVar2 = (fVar1 - fVar0);
	fVar3 = (&uParam0->f_409[iParam1] - fVar0);
	fVar4 = func_358((fVar3 / fVar2), 0f, 1f);
	return fVar4;
}

void func_719(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	_0x6569f31a01b4c097(iVar0, 0, iParam1);
	_0x6569f31a01b4c097(iVar0, 1, iParam1);
}

float func_720(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_721(var uParam0, var uParam1)
{
	if (is_entity_dead(&(uParam1->f_163[0])) || !func_398(&(Global_40.f_11184[0])))
	{
		return false;
	}
	if (uParam0->f_676 == 0 && uParam0->f_676.f_5 == 0)
	{
		if (!func_967(41))
		{
			return false;
		}
	}
	if (func_87(&(uParam1->f_327[0])))
	{
		iVar0 = func_192(&(uParam1->f_327[0]));
		if (func_193(iVar0) && func_242(iVar0))
		{
			return true;
		}
	}
	return false;
}

float func_722(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_968(uParam0, uParam1, iParam2, iParam3, iParam4);
}

bool func_723(var uParam0, var uParam1, int iParam2)
{
	if (Global_1900073->f_26[iParam2]->f_2 <= 3f || (func_69(iParam2, 1, 1) && func_729(uParam0->f_65, func_258(iParam2))))
	{
		return true;
	}
	vVar0 = { func_261(iParam2) };
	if (!func_55(vVar0) && func_518(get_entity_coords(func_53(uParam1, iParam2), true, false), vVar0) < 3f)
	{
		return true;
	}
	return false;
}

bool func_724(var uParam0, int iParam1, vector3 vParam2)
{
	if (iParam1 == 0)
	{
		vVar0 = { func_478(vParam2, 1) };
		if (!_0x0c9dbf48c6ba6e4c(func_53(uParam0, iParam1), vVar0, 1))
		{
			return true;
		}
	}
	return false;
}

int func_725(var uParam0, int iParam1)
{
	fVar0 = (&uParam0->f_409[iParam1] / uParam0->f_706);
	iVar1 = round((to_float(6000) * fVar0));
	iVar1 += 4000;
	return iVar1;
}

void func_726(var uParam0, int iParam1)
{
	if ((*uParam0)[iParam1]->f_235 == 0f)
	{
		return;
	}
	(*uParam0)[iParam1]->f_235 = ((*uParam0)[iParam1]->f_235 * 0.9f);
	if ((*uParam0)[iParam1]->f_235 < 0.001f)
	{
		(*uParam0)[iParam1]->f_235 = 0f;
	}
}

int func_727(var uParam0, int iParam1)
{
	iVar0 = 30;
	if (&uParam0->f_491[iParam1] == 4)
	{
		iVar0 = 20;
	}
	else if (&uParam0->f_491[iParam1] == 2 || &uParam0->f_491[iParam1] == 3)
	{
		iVar0 = 25;
	}
	return iVar0;
}

int func_728(var uParam0, int iParam1)
{
	fVar0 = (&uParam0->f_409[iParam1] / uParam0->f_706);
	iVar1 = round((to_float(-4000) * fVar0));
	iVar1 += 10000;
	return iVar1;
}

bool func_729(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

int func_730(int iParam0)
{
	switch (iParam0)
	{
		case 1059426360:
			return 235447016;
		case 488496242:
			return -1239966175;
		case 1380607804:
			return -294392875;
		case -1527293029:
			return 553077066;
		case -1753819339:
			return -295546062;
		case 149706141:
			return -24360095;
		case 2100131425:
			return -2027043009;
		case -978159653:
			return 1434620179;
		case -2041382104:
			return 1818203080;
		case 1334018438:
			return -2057172418;
		case 1815744868:
			return 721472341;
		case 1055480217:
			return -1290802922;
		case -1916584960:
			return -1809586742;
		default:
			break;
	}
	return 0;
}

int func_731(var uParam0, var uParam1, int iParam2, vector3 vParam3)
{
	vVar0 = { get_offset_from_entity_given_world_coords(func_53(uParam1, iParam2), vParam3) };
	if ((vVar0.x < &uParam0->f_39[1] || vVar0.x > &uParam0->f_39[4]) || vVar0.y > uParam0->f_39[2]->f_1)
	{
		return 0;
	}
	return 1;
}

int func_732(var uParam0, int iParam1, vector3 vParam2)
{
	vVar0 = { get_entity_forward_vector(func_53(uParam0, iParam1)) };
	vVar3 = { func_786(vParam2 - get_entity_coords(func_53(uParam0, iParam1), true, false)) };
	fVar6 = func_969(vVar0, vVar3);
	fVar7 = cos(45f);
	if (fVar6 < fVar7)
	{
		return 0;
	}
	return 1;
}

void func_733(var uParam0, int iParam1, vector3 vParam2)
{
	if (does_entity_exist((*uParam0)[iParam1]->f_14))
	{
		set_entity_coords((*uParam0)[iParam1]->f_14, vParam2, true, false, true, true);
		func_104(&((*uParam0)[iParam1]->f_248));
	}
}

bool func_734(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_251(iParam2))
	{
		if ((*uParam0)[iParam2]->f_255 != 1f)
		{
			(*uParam0)[iParam2]->f_256 = 1;
		}
	}
	else if (func_738())
	{
		if ((*uParam0)[iParam2]->f_255 != 1.5f)
		{
			(*uParam0)[iParam2]->f_256 = 1;
		}
	}
	else if (func_146(uParam1, iParam3))
	{
		if ((*uParam0)[iParam2]->f_255 != 3f)
		{
			(*uParam0)[iParam2]->f_256 = 1;
		}
	}
	else if ((*uParam0)[iParam2]->f_255 != 1.5f)
	{
		(*uParam0)[iParam2]->f_256 = 1;
	}
	return (*uParam0)[iParam2]->f_256;
}

float func_735(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam0, false, false) };
	vVar3 = { get_entity_coords(iParam1, false, false) };
	return func_970(vVar0, vVar3, iParam2);
}

bool func_736(int iParam0, int iParam1)
{
	if (Global_1900073->f_26[iParam0]->f_3 > 0.5f)
	{
		return false;
	}
	return iParam1 > 0;
}

bool func_737(int iParam0, int iParam1)
{
	if (Global_1900073->f_26[iParam0]->f_3 > 0.5f)
	{
		return false;
	}
	return iParam1 == 0;
}

bool func_738()
{
	if (!_is_using_keyboard(0))
	{
		if (func_249() != 0 || func_250() != 0)
		{
			return true;
		}
	}
	else if (is_control_pressed(0, -1560021918) && is_control_pressed(0, 867346636))
	{
		return true;
	}
	return false;
}

int func_739(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (_0x84848e1c0fc67dbb(&((*uParam0)[iParam1]->f_92[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_740(int iParam0)
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

bool func_741(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_742(var uParam0)
{
	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_228(&iVar1, -2147483648);
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

bool func_743(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_26() != -1)
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

bool func_744(int iParam0)
{
	if ((iParam0 == 1059426360 || iParam0 == 488496242) || iParam0 == 1380607804)
	{
		return true;
	}
	return false;
}

bool func_745(int iParam0)
{
	if ((iParam0 == -1527293029 || iParam0 == -1753819339) || iParam0 == 149706141)
	{
		return true;
	}
	return false;
}

bool func_746(int iParam0)
{
	if ((((iParam0 == 1380607804 || iParam0 == -1527293029) || iParam0 == -978159653) || iParam0 == 1815744868) || iParam0 == -1916584960)
	{
		return true;
	}
	return false;
}

bool func_747(int iParam0)
{
	if ((((iParam0 == 1059426360 || iParam0 == -1753819339) || iParam0 == 2100131425) || iParam0 == 1334018438) || iParam0 == -1916584960)
	{
		return true;
	}
	return false;
}

bool func_748(int iParam0)
{
	if ((((iParam0 == 488496242 || iParam0 == 149706141) || iParam0 == -2041382104) || iParam0 == 1055480217) || iParam0 == -1916584960)
	{
		return true;
	}
	return false;
}

int func_749()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_750(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_751(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_971(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_749())
	{
		return -1;
	}
	iVar0 = func_750(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_972(iVar1, 0);
	func_973(iVar1, 0);
	func_974(iVar1, 0);
	func_975(iVar1, 0);
	func_976(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_977(iVar1, iParam4);
	}
	return iVar1;
}

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

void func_753()
{
	_databinding_write_data_bool(Global_1911643->f_3, false);
	iVar0 = 0;
	while (iVar0 < &Global_1911643)
	{
		_databinding_remove_data_entry(&(Global_1911643->f_5[iVar0]));
		iVar0++;
	}
	_databinding_clear_binding_array(Global_1911643->f_4);
	Global_1911643 = 0;
	Global_1911643->f_1 = 0;
}

void func_754()
{
	_uilog_clear_cached_objective();
}

void func_755(int iParam0, bool bParam1)
{
	if (func_978(iParam0))
	{
		return;
	}
	Global_1935496->f_72[Global_1935496->f_72.f_41] = iParam0;
	Global_1935496->f_72[Global_1935496->f_72.f_41]->f_1 = func_979(bParam1, 1, 0);
	Global_1935496->f_72.f_41++;
	if (Global_1935496->f_72.f_41 == 20)
	{
		Global_1935496->f_72.f_41 = (Global_1935496->f_72.f_41 - 1);
	}
}

int func_756(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_980(iVar0, 2))
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
		func_981(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_757(int iParam0, int iParam1)
{
	if (!func_427(iParam0))
	{
		return;
	}
	iVar0 = func_706(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xa520c7b05fa4eb2a((*Global_1945938)[iVar0]->f_3, iParam1);
}

bool func_758(int iParam0)
{
	if (Global_1900073->f_19 == 1)
	{
	}
	if (Global_1900073->f_20 == 1 && &Global_1900073->f_26[0] == 1)
	{
		if (iParam0 == 7 || iParam0 == 8)
		{
			return false;
		}
	}
	if (Global_1900073->f_21 == 1 && &Global_1900073->f_26[0] == 1)
	{
		if (iParam0 == 7 || iParam0 == 8)
		{
			return false;
		}
	}
	if (Global_1900073->f_22 == 1)
	{
	}
	if (Global_1900073->f_23 == 1 && &Global_1900073->f_26[0] == 6)
	{
		if ((iParam0 == 0 || iParam0 == 2) || iParam0 == 3)
		{
			return false;
		}
	}
	if (Global_1900073->f_24 == 1 && &Global_1900073->f_26[0] == 7)
	{
		if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 3) || iParam0 == 4)
		{
			return false;
		}
	}
	return true;
}

void func_759(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_427(iParam0))
	{
		return;
	}
	iVar0 = func_706(iParam0);
	if (bParam1)
	{
		func_982(iParam0, 4);
		func_983(iVar0, 1);
		func_984(iVar0, 1);
	}
	else
	{
		func_985(iParam0, 4);
		func_984(iVar0, 0);
	}
}

void func_760(int iParam0, int iParam1)
{
	if (!func_427(iParam0))
	{
		return;
	}
	iVar0 = func_706(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_761(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 3)
	{
		if (_uiprompt_is_valid(uParam0->f_93))
		{
			_uiprompt_set_visible(uParam0->f_93, bParam2);
		}
	}
	else if (func_427(&(uParam0->f_83[iParam1])))
	{
		if (func_427(&(uParam0->f_83[iParam1])))
		{
			func_986(&(uParam0->f_83[iParam1]), bParam2, 0);
		}
	}
}

bool func_762(int iParam0, bool bParam1)
{
	if (bParam1 && !func_427(iParam0))
	{
		return false;
	}
	iVar0 = func_706(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_763()
{
	if (func_1() || Global_1900073->f_20 == 0)
	{
		return false;
	}
	return true;
}

void func_764(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 1)
	{
		if (!func_50(uParam0, 65536))
		{
			func_51(uParam0, 65536);
			Var0 = 2;
			if (uParam0->f_676.f_1 == 1)
			{
				Var0.f_1 = 1380607804;
			}
			else if (uParam0->f_676.f_4 == 1)
			{
				Var0.f_1 = -1753819339;
			}
			else if (uParam0->f_676.f_2 == 1)
			{
				Var0.f_1 = -978159653;
			}
			else if (uParam0->f_676 == 1)
			{
				Var0.f_1 = 1815744868;
			}
			else
			{
				Var0.f_1 = 1380607804;
			}
			_0x8a59d44189af2bc5(&Var0, -1001145251);
		}
	}
	else if (func_50(uParam0, 65536) || bParam2 == 1)
	{
		func_204(uParam0, 65536);
		Var2 = 2;
		if (uParam0->f_676.f_1 == 1)
		{
			Var2.f_1 = 1380607804;
		}
		else if (uParam0->f_676.f_4 == 1)
		{
			Var2.f_1 = -1753819339;
		}
		else if (uParam0->f_676.f_2 == 1)
		{
			Var2.f_1 = -978159653;
		}
		else if (uParam0->f_676 == 1)
		{
			Var2.f_1 = 1815744868;
		}
		else
		{
			Var2.f_1 = 1380607804;
		}
		_0x8a59d44189af2bc5(&Var2, 1856029758);
	}
}

int func_765(var uParam0)
{
	if (uParam0->f_676.f_1 == 1)
	{
		return 8;
	}
	else if (uParam0->f_676.f_4 == 1)
	{
		return 11;
	}
	else if (uParam0->f_676.f_2 == 1)
	{
		return 9;
	}
	else if (uParam0->f_676 == 1)
	{
		return 10;
	}
	return 8;
}

void func_766(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 512))
	{
		func_51(uParam0, 512);
		func_514(3);
	}
	if (uParam0->f_20 != iParam1)
	{
		if (uParam0->f_20 > iParam1)
		{
			func_515();
		}
		uParam0->f_20 = iParam1;
		func_516(uParam0->f_20);
	}
}

int func_767(var uParam0)
{
	if (uParam0->f_676.f_1 == 1)
	{
		return 4;
	}
	else if (uParam0->f_676.f_4 == 1)
	{
		return 7;
	}
	else if (uParam0->f_676.f_2 == 1)
	{
		return 5;
	}
	else if (uParam0->f_676 == 1)
	{
		return 6;
	}
	return 4;
}

int func_768(var uParam0)
{
	if (uParam0->f_75 == 1)
	{
		return 12;
	}
	return 3;
}

bool func_769()
{
	if (func_1() || Global_1900073->f_21 == 0)
	{
		return false;
	}
	return true;
}

void func_770(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 1024))
	{
		func_51(uParam0, 1024);
		func_514(2);
	}
	if (uParam0->f_21 != iParam1)
	{
		if (uParam0->f_21 > iParam1)
		{
			func_515();
		}
		uParam0->f_21 = iParam1;
		func_516(uParam0->f_21);
	}
}

int func_771(var uParam0)
{
	if (uParam0->f_76 == 1)
	{
		return 12;
	}
	return 3;
}

bool func_772(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

int func_773(int iParam0)
{
	if (((((iParam0 == 1 || iParam0 == 2) || iParam0 == 16) || iParam0 == 128) || iParam0 == 4096) || iParam0 == 8192)
	{
		return 1;
	}
	return 0;
}

int func_774()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_775(var uParam0, char[12] cParam1)
{
	func_987(&(uParam0->f_568), cParam1, 0, -1, 0, 0);
}

void func_776(var uParam0, int iParam1)
{
	if (!func_536(uParam0, iParam1))
	{
		func_229(&(uParam0->f_666), iParam1);
	}
}

bool func_777(var uParam0, int iParam1)
{
	return ((*uParam0)[iParam1]->f_19 != -99999f && (*uParam0)[iParam1]->f_19 < 0.03f);
}

void func_778(var uParam0, var uParam1, int iParam2)
{
	(*uParam1)[iParam2]->f_74 = 0;
	(*uParam1)[iParam2]->f_78 = -1;
	(*uParam1)[iParam2]->f_180++;
	if ((iParam2 != 0 || func_1()) || func_46(&(uParam0->f_676)))
	{
		return;
	}
	if (!func_988(uParam0))
	{
		if (((!func_989(1) || func_989(2)) || (*uParam1)[iParam2]->f_180 < uParam0->f_80) || func_518(Global_36, uParam0->f_62) > 50f)
		{
			return;
		}
	}
	(*uParam1)[iParam2]->f_74 = 1;
	(*uParam1)[iParam2]->f_78 = get_random_int_in_range(uParam0->f_81, uParam0->f_82);
}

bool func_779(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (((((func_456(uParam0, uParam1, iParam3, 1) && !func_79(uParam1, iParam3, 512)) && func_393(&(Global_40.f_11184[iParam3]))) && func_990(iParam3, iParam4)) && func_722(uParam0, uParam2, iParam3, iParam4, 0) > 0f) && func_457(uParam1, iParam3, iParam4, 2))
	{
		return true;
	}
	return false;
}

bool func_780(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (!func_456(uParam0, uParam1, iParam3, 1))
	{
		return true;
	}
	else if (func_79(uParam1, iParam3, 512))
	{
		return true;
	}
	else if (!func_393(&(Global_40.f_11184[iParam3])))
	{
		return true;
	}
	else if (!func_990(iParam3, iParam4))
	{
		return true;
	}
	else if (func_722(uParam0, uParam2, iParam3, iParam4, 0) == 0f)
	{
		return true;
	}
	else if (!func_457(uParam1, iParam3, iParam4, 2))
	{
		return true;
	}
	return false;
}

void func_781(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iVar0 = func_702(iParam4);
	if (func_703(iVar0) && !_0x19870c40c7ee15be(iVar0, &((*uParam1)[iParam3]->f_102[iParam4])))
	{
		fVar1 = func_722(uParam0, uParam2, iParam3, iParam4, 0);
		(*uParam1)[iParam3]->f_102[iParam4] = _0xe93415b3307208e5(iVar0, func_260(iParam3), 0f, fVar1, 10000f, 0f, 0f, 0f, 1);
		if (iParam3 == 0)
		{
			func_704(uParam1, iParam4, fVar1);
		}
	}
}

void func_782(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 3)
	{
		if (iParam2 == 1)
		{
			if (!_uiprompt_get_urgent_pulsing_enabled(uParam0->f_93))
			{
				_uiprompt_set_urgent_pulsing_enabled(uParam0->f_93, 1);
			}
		}
		else if (_uiprompt_get_urgent_pulsing_enabled(uParam0->f_93))
		{
			_uiprompt_set_urgent_pulsing_enabled(uParam0->f_93, 0);
		}
	}
	else if (func_427(&(uParam0->f_83[iParam1])))
	{
		iVar0 = func_706(&(uParam0->f_83[iParam1]));
		if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
		{
			if (iParam2 == 1)
			{
				if (!_uiprompt_get_urgent_pulsing_enabled((*Global_1945938)[iVar0]->f_3))
				{
					_uiprompt_set_urgent_pulsing_enabled((*Global_1945938)[iVar0]->f_3, 1);
				}
			}
			else if (_uiprompt_get_urgent_pulsing_enabled((*Global_1945938)[iVar0]->f_3))
			{
				_uiprompt_set_urgent_pulsing_enabled((*Global_1945938)[iVar0]->f_3, 0);
			}
		}
	}
}

bool func_783(var uParam0)
{
	if (!func_74(&(uParam0->f_99)))
	{
		func_104(&(uParam0->f_99));
	}
	if (func_107(&(uParam0->f_99)) >= 3f && func_393(&(Global_40.f_11184[0])))
	{
		if (func_397(&(Global_40.f_11184[0])) || func_398(&(Global_40.f_11184[0])))
		{
			return true;
		}
	}
	return false;
}

bool func_784(var uParam0)
{
	if (!func_74(&(uParam0->f_99)))
	{
		func_104(&(uParam0->f_99));
	}
	return func_107(&(uParam0->f_99)) >= 3f;
}

bool func_785(var uParam0)
{
	if (!func_74(&(uParam0->f_99)))
	{
		func_104(&(uParam0->f_99));
	}
	return func_107(&(uParam0->f_99)) >= 3f;
}

Vector3 func_786(vector3 vParam0)
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

int func_787(var uParam0)
{
	if (Global_1900073->f_23 == 1)
	{
		return round((to_float(uParam0->f_69 * 1000) * 2f));
	}
	return uParam0->f_69 * 1000;
}

void func_788(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_456(uParam0, uParam1, iParam3, 1) || func_79(uParam1, iParam3, 256))
	{
		return;
	}
	iVar0 = -1;
	if (iParam3 == 0)
	{
		if (uParam2->f_705 == 1)
		{
			(*uParam1)[iParam3]->f_201 = 1;
			if (&Global_40.f_11184[iParam3] == -1916584960 || uParam0->f_61 == 1)
			{
				(*uParam1)[iParam3]->f_200 = 0;
			}
			else
			{
				(*uParam1)[iParam3]->f_200 = 1;
			}
		}
		else
		{
			(*uParam1)[iParam3]->f_200 = 1;
			(*uParam1)[iParam3]->f_201 = 0;
		}
	}
	else
	{
		(*uParam1)[iParam3]->f_200 = 1;
		(*uParam1)[iParam3]->f_201 = 0;
	}
	if ((*uParam1)[iParam3]->f_201 == 1)
	{
		if (((!is_entity_dead(&(uParam2->f_163[0])) && func_194(uParam0, uParam1, uParam2, 0) == -1) && &uParam2->f_204[0] == 4) && &(*uParam1)[iParam3]->f_30[0] < (*uParam1)[iParam3]->f_199)
		{
			iVar0 = 0;
		}
	}
	if ((*uParam1)[iParam3]->f_200 == 1)
	{
		if ((((!func_238(iVar0) && iParam3 == 0) && !is_entity_dead(&(uParam2->f_163[1]))) && func_194(uParam0, uParam1, uParam2, 1) == -1) && &uParam2->f_204[1] == 4)
		{
			if (func_457(uParam1, 0, &(uParam2->f_327[1]), 0) && &(*uParam1)[iParam3]->f_30[1] < (*uParam1)[iParam3]->f_199)
			{
				iVar0 = 1;
			}
		}
		if (!func_238(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if ((!is_entity_dead(&(uParam2->f_163[iVar1])) && &uParam2->f_204[iVar1] == 4) && func_991(iParam3, iVar1))
				{
					iVar10 = &uParam2->f_327[iVar1];
					iVar2 = func_702(&(uParam2->f_327[iVar1]));
					if (func_703(iVar2) && _0x19870c40c7ee15be(iVar2, &((*uParam1)[iParam3]->f_102[iVar10])))
					{
						fVar18 = &(*uParam1)[iParam3]->f_30[iVar1];
						if (fVar18 != 99999f && fVar18 < (*uParam1)[iParam3]->f_199)
						{
							fVar19 = func_992(uParam0, uParam2, iParam3, &(uParam2->f_327[iVar1]), &(Global_40.f_11184[iParam3]));
							if (fVar19 == 100f)
							{
								if (fVar11 <= 0f || fVar18 < fVar11)
								{
									fVar11 = fVar18;
									iVar3 = iVar1;
								}
							}
							else if (fVar19 == 5f)
							{
								if (fVar12 <= 0f || fVar18 < fVar12)
								{
									fVar12 = fVar18;
									iVar4 = iVar1;
								}
							}
							else if (fVar19 == 4f)
							{
								if (fVar13 <= 0f || fVar18 < fVar13)
								{
									fVar13 = fVar18;
									iVar5 = iVar1;
								}
							}
							else if (fVar19 == 3f)
							{
								if (fVar14 <= 0f || fVar18 < fVar14)
								{
									fVar14 = fVar18;
									iVar6 = iVar1;
								}
							}
							else if (fVar19 == 2f)
							{
								if (fVar15 <= 0f || fVar18 < fVar15)
								{
									fVar15 = fVar18;
									iVar7 = iVar1;
								}
							}
							else if (fVar19 == 1f)
							{
								if (fVar16 <= 0f || fVar18 < fVar16)
								{
									fVar16 = fVar18;
									iVar8 = iVar1;
								}
							}
							else if (fVar19 == 0.5f)
							{
								if (fVar17 <= 0f || fVar18 < fVar17)
								{
									fVar17 = fVar18;
									iVar9 = iVar1;
								}
							}
						}
					}
				}
				iVar1++;
			}
			if (fVar11 > 0f)
			{
				iVar0 = iVar3;
			}
			else if (fVar12 > 0f)
			{
				iVar0 = iVar4;
			}
			else if (fVar13 > 0f)
			{
				iVar0 = iVar5;
			}
			else if (fVar14 > 0f)
			{
				iVar0 = iVar6;
			}
			else if (fVar15 > 0f)
			{
				iVar0 = iVar7;
			}
			else if (fVar16 > 0f)
			{
				iVar0 = iVar8;
			}
			else if (fVar17 > 0f)
			{
				iVar0 = iVar9;
			}
		}
	}
	if (func_238(iVar0))
	{
		func_993(uParam0, uParam1, uParam2, iParam3, iVar0);
	}
}

bool func_789(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((!func_456(uParam0, uParam1, iParam3, 0) || func_994(uParam0, uParam1, uParam2, iParam3)) || func_540())
	{
		return true;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((func_238(iVar0) && &(*uParam1)[iParam3]->f_30[iVar0] != 99999f) && &(*uParam1)[iParam3]->f_30[iVar0] > ((*uParam1)[iParam3]->f_199 + 2f))
	{
		return true;
	}
	return false;
}

void func_790(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 != 0)
	{
		return;
	}
	if (func_995(uParam0, uParam1, uParam2, iParam3))
	{
		(*uParam1)[iParam3]->f_189 = func_996(uParam0, uParam1, uParam2, iParam3);
		(*uParam1)[iParam3]->f_197 = func_997(uParam0, uParam1, uParam2, iParam3);
		(*uParam1)[iParam3]->f_198 = func_998(uParam0, uParam1, uParam2, iParam3);
		(*uParam1)[iParam3]->f_190 = func_999(uParam1, uParam2, iParam3);
		func_181((*uParam1)[iParam3]->f_197, (*uParam1)[iParam3]->f_198);
		if (func_758(2))
		{
			func_791(uParam0, 2, 1);
		}
		if ((*uParam1)[iParam3]->f_189 == 1)
		{
			func_782(uParam0, 2, 1);
		}
		func_1000(uParam0, uParam1, uParam2, iParam3);
		func_1001(uParam0, uParam1, uParam2, iParam3);
		func_153(iParam3, 512, 0);
		(*uParam1)[iParam3]->f_182++;
		func_104(&((*uParam1)[iParam3]->f_186));
		func_197(iParam3, 32);
		func_166(uParam1, iParam3, 8192);
		func_166(uParam1, iParam3, 16384);
	}
	if (func_360(iParam3, 512))
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (!func_238(iVar0) || (func_74(&((*uParam1)[iParam3]->f_186)) && func_75(&((*uParam1)[iParam3]->f_186)) > (*uParam1)[iParam3]->f_197))
		{
			func_333(iParam3, 512);
			if ((*uParam1)[iParam3]->f_189 == 1)
			{
				func_33(uParam1, iParam3);
				func_415(uParam0, uParam1, uParam2, iParam3, 0);
			}
			(*uParam1)[iParam3]->f_198 = 0;
			func_782(uParam0, 2, 0);
			if (func_758(2))
			{
				func_791(uParam0, 2, 0);
			}
		}
	}
}

void func_791(var uParam0, int iParam1, int iParam2)
{
	if (func_427(&(uParam0->f_83[iParam1])))
	{
		if (iParam2 == 1)
		{
			if (func_1002(&(uParam0->f_83[iParam1]), 1))
			{
				func_759(&(uParam0->f_83[iParam1]), 1, 1);
			}
		}
		else if (!func_1002(&(uParam0->f_83[iParam1]), 1))
		{
			func_759(&(uParam0->f_83[iParam1]), 0, 1);
		}
	}
}

void func_792(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 != 0)
	{
		return;
	}
	(*uParam1)[iParam2]->f_6 = iParam3;
	switch ((*uParam1)[iParam2]->f_6)
	{
		case 1:
			if ((func_744(&(Global_40.f_11184[iParam2])) && (*uParam1)[iParam2]->f_72 > 3) || (func_745(&(Global_40.f_11184[iParam2])) && (*uParam1)[iParam2]->f_72 > 4))
			{
				if (uParam0->f_74 == 0 && !func_396(&(Global_40.f_11184[iParam2])))
				{
					func_185(&(Global_40.f_11184[iParam2]));
				}
				func_309(uParam0, uParam1, iParam2, 1309979101, 0, 0);
			}
			break;
		case 2:
			if (func_1003(uParam1, iParam2))
			{
				if (!func_50(uParam0, 128))
				{
					if (func_744(&(Global_40.f_11184[iParam2])) || func_745(&(Global_40.f_11184[iParam2])))
					{
						func_110(uParam0, 54, 1, -2, 1);
					}
					else
					{
						func_110(uParam0, 55, 1, -2, 1);
					}
				}
				if (uParam0->f_74 == 0 && !func_396(&(Global_40.f_11184[iParam2])))
				{
					func_185(&(Global_40.f_11184[iParam2]));
				}
				func_309(uParam0, uParam1, iParam2, 1309979101, 0, 0);
			}
			if (!func_50(uParam0, 128))
			{
				func_110(uParam0, 56, 1, -2, 1);
			}
			break;
		case 3:
			if (func_744(&(Global_40.f_11184[iParam2])) || func_745(&(Global_40.f_11184[iParam2])))
			{
				if (uParam0->f_74 == 0 && !func_396(&(Global_40.f_11184[iParam2])))
				{
					func_185(&(Global_40.f_11184[iParam2]));
				}
				func_309(uParam0, uParam1, iParam2, 1309979101, 0, 0);
			}
			break;
	}
}

bool func_793(var uParam0, var uParam1)
{
	if (func_79(uParam1, 0, 4096) || func_540())
	{
		return false;
	}
	func_523(uParam0, 1, 0, 1);
	if (func_762(&(uParam0->f_83[1]), 1))
	{
		func_51(uParam0, 128);
		return true;
	}
	return false;
}

bool func_794()
{
	if (Global_1900073->f_153 != &Global_40.f_11184[0] && func_393(Global_1900073->f_153))
	{
		return true;
	}
	return false;
}

void func_795(var uParam0, var uParam1, int iParam2)
{
	(*uParam1)[iParam2]->f_18 = 247976563;
	Global_1900073->f_154[iParam2] = func_583((*uParam1)[iParam2]->f_18);
	func_197(iParam2, 8);
	func_153(iParam2, 4, 1);
	(*uParam1)[iParam2]->f_180 = 0;
	func_104(&(uParam0->f_12));
	func_554(&(uParam0->f_105), 52, 2);
	func_554(&(uParam0->f_105), 53, 2);
}

bool func_796(var uParam0, int iParam1)
{
	return false;
}

bool func_797(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0) && !is_entity_dead(&(uParam2->f_163[iVar0])))
	{
		if (func_796(uParam2, iParam3))
		{
			return true;
		}
		if (func_456(uParam0, uParam1, iParam3, 0))
		{
			if (iParam3 == 0)
			{
				if (((func_74(&((*uParam1)[iParam3]->f_186)) && func_75(&((*uParam1)[iParam3]->f_186)) < (*uParam1)[0]->f_197) && &(*uParam1)[iParam3]->f_30[iVar0] != 99999f) && &(*uParam1)[iParam3]->f_30[iVar0] < ((*uParam1)[iParam3]->f_199 + 2f))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_798(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (!_0x88ad6cc10d8d35b2(&(uParam2->f_163[iParam4])))
	{
		set_entity_as_mission_entity(&(uParam2->f_163[iParam4]), true, true);
	}
	clear_ped_tasks(&(uParam2->f_163[iParam4]), 1, 0);
	func_272(uParam2, iParam4, 6);
	if (iParam3 == 0)
	{
		_0xf0fbf193f1f5c0ea(&(uParam2->f_163[iParam4]));
		func_104(&(uParam0->f_12));
		func_554(&(uParam0->f_105), 45, 2);
		func_554(&(uParam0->f_105), 47, 2);
		func_554(&(uParam0->f_105), 48, 2);
		func_554(&(uParam0->f_105), 49, 2);
		func_554(&(uParam0->f_105), 75, 2);
		func_104(&(uParam0->f_667));
		uParam0->f_670 = get_random_int_in_range(30, 40);
		if (func_1004(&(uParam2->f_327[iParam4])))
		{
			func_554(&(uParam0->f_105), 59, 50);
			func_554(&(uParam0->f_105), 60, 30);
		}
		else
		{
			func_76(uParam0->f_105.f_154[59]);
			func_76(uParam0->f_105.f_154[60]);
		}
		if (func_69(iParam3, 1, 1) && &uParam2->f_491[iParam4] == 4)
		{
			uParam0->f_682 = 1;
		}
		else
		{
			uParam0->f_682 = 0;
		}
	}
	(*uParam1)[iParam3]->f_205 = 0;
	(*uParam1)[iParam3]->f_206 = 0;
	(*uParam1)[iParam3]->f_207 = 0;
	(*uParam1)[iParam3]->f_210 = 0;
	(*uParam1)[iParam3]->f_211 = 0;
	(*uParam1)[iParam3]->f_181 = 0;
	(*uParam1)[iParam3]->f_255 = 3f;
	(*uParam1)[iParam3]->f_256 = 0;
	fVar0 = (&uParam2->f_409[iParam4] / uParam2->f_706);
	fVar1 = (0.5f * fVar0);
	fVar2 = (fVar1 / 2f);
	if (&uParam2->f_655[iParam4] > 0f)
	{
		if (&uParam2->f_655[iParam4] >= fVar2)
		{
			(*uParam1)[iParam3]->f_235 = &uParam2->f_655[iParam4];
		}
		else
		{
			(*uParam1)[iParam3]->f_235 = fVar2;
		}
	}
	else
	{
		(*uParam1)[iParam3]->f_235 = fVar1;
	}
	func_76(&((*uParam1)[iParam3]->f_191));
	func_76(&((*uParam1)[iParam3]->f_252));
	func_333(iParam3, 512);
	_0x1f298c7bd30d1240(func_53(uParam1, iParam3));
	clear_ped_tasks_immediately(&(uParam2->f_163[iParam4]), false, true);
	_0x1a52076d26e09004(func_53(uParam1, iParam3), &(uParam2->f_163[iParam4]));
	func_197(iParam3, 4);
	func_153(iParam3, 4, 1);
	func_191(uParam1, iParam3, 0);
	func_33(uParam1, iParam3);
	func_415(uParam0, uParam1, uParam2, iParam3, 1);
}

bool func_799(var uParam0, var uParam1, int iParam2)
{
	if (&Global_1900073->f_26[iParam2] != 6 || func_796(uParam1, iParam2))
	{
		return false;
	}
	if ((iParam2 == 0 && func_74(&((*uParam0)[iParam2]->f_186))) && func_75(&((*uParam0)[iParam2]->f_186)) < (*uParam0)[iParam2]->f_190 + 2000)
	{
		return true;
	}
	return false;
}

bool func_800(int iParam0)
{
	return Global_1900073->f_26[iParam0]->f_2 < 4f;
}

bool func_801(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return false;
	}
	return true;
}

bool func_802(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0))
	{
		if (!func_146(uParam2, iVar0) || Global_1900073->f_26[iParam3]->f_3 > 0.25f)
		{
			return true;
		}
	}
	return false;
}

void func_803(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam3 != 0 || !func_74(&(uParam0->f_12)))
	{
		(*uParam1)[iParam3]->f_207 = 0;
		return;
	}
	iVar0 = func_727(uParam2, iParam4);
	fVar1 = (to_float(func_443(&(uParam0->f_12))) / IntToFloat(iVar0 * 1000));
	if (round((fVar1 * 200f)) >= (*uParam1)[iParam3]->f_207)
	{
		(*uParam1)[iParam3]->f_207 = round((fVar1 * 200f));
	}
	else if (!func_74(&((*uParam1)[iParam3]->f_245)) || func_443(&((*uParam1)[iParam3]->f_245)) > uParam0->f_71)
	{
		func_104(&((*uParam1)[iParam3]->f_245));
		if ((*uParam1)[iParam3]->f_207 > 0)
		{
			(*uParam1)[iParam3]->f_207 = ((*uParam1)[iParam3]->f_207 - 1);
		}
	}
	func_404((*uParam1)[iParam3]->f_207, 0, 200);
}

void func_804(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam3 == 0)
	{
		if ((!func_146(uParam2, iParam4) || !func_467(iParam3)) || func_469(uParam0, uParam1, iParam3, 0))
		{
			func_1005(uParam0, uParam1, uParam2, iParam4, iParam3);
		}
		else if ((func_251(iParam3) || func_738()) || func_1006(iParam3))
		{
			func_1007(uParam0, uParam1, uParam2, iParam3);
		}
		else
		{
			func_1005(uParam0, uParam1, uParam2, iParam4, iParam3);
		}
	}
	else if (func_1006(iParam3))
	{
		(*uParam1)[iParam3]->f_206 = 200;
	}
	else if (func_146(uParam2, iParam4))
	{
		func_1007(uParam0, uParam1, uParam2, iParam3);
	}
	func_404((*uParam1)[iParam3]->f_206, 0, 200);
}

void func_805(var uParam0, var uParam1, int iParam2)
{
	if ((*uParam0)[iParam2]->f_207 > 0 && (*uParam0)[iParam2]->f_207 >= (*uParam0)[iParam2]->f_206)
	{
		(*uParam0)[iParam2]->f_205 = (*uParam0)[iParam2]->f_207;
	}
	else
	{
		(*uParam0)[iParam2]->f_205 = (*uParam0)[iParam2]->f_206;
	}
	func_404((*uParam0)[iParam2]->f_205, 0, 200);
}

bool func_806(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_80(iParam3, 2))
	{
		return true;
	}
	else if (func_80(iParam3, 262144))
	{
		return true;
	}
	else if ((*uParam1)[iParam3]->f_205 >= 200)
	{
		return true;
	}
	else if (!func_238(iParam4))
	{
		return true;
	}
	else if (is_entity_dead(&(uParam2->f_163[iParam4])))
	{
		return true;
	}
	else if (iParam3 == 0 && func_793(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

void func_807()
{
	if (&Global_1900073->f_154[0] != 1)
	{
		return;
	}
	Var0 = { func_946(-1000152764) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_808(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((iParam3 == 0 && !func_50(uParam0, 128)) && &Global_1900073->f_154[iParam3] == 1)
	{
		func_533(uParam0, uParam1, uParam2, iParam3, 64);
	}
}

int func_809(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((func_238(iVar0) && func_87(&(uParam2->f_327[iVar0]))) && !is_entity_dead(&(uParam2->f_163[iVar0])))
	{
		if (func_88(iVar0))
		{
			if (&uParam2->f_327[iVar0] == 8)
			{
				return 0;
			}
			return 1;
		}
		if (!func_89(&(uParam2->f_327[iVar0])))
		{
			return 1;
		}
	}
	return 0;
}

int func_810(var uParam0)
{
	if (func_74(&((*uParam0)[0]->f_252)) && func_75(&((*uParam0)[0]->f_252)) >= 6000)
	{
		return 1;
	}
	return 0;
}

int func_811(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1 == 1)
			{
				iVar0 = -1490884871;
			}
			else if (iParam2 == 1)
			{
				iVar0 = -151356522;
			}
			else
			{
				iVar0 = 1006434513;
			}
			break;
		case 1:
			if (bParam1 == 1)
			{
				iVar0 = 323124696;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 1481288777;
			}
			else
			{
				iVar0 = 306916738;
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				iVar0 = -2108314374;
			}
			else if (iParam2 == 1)
			{
				iVar0 = -1824685471;
			}
			else
			{
				iVar0 = 724563284;
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				iVar0 = -1320934717;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 803930024;
			}
			else
			{
				iVar0 = 1917027383;
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				iVar0 = -1193798153;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 1111663869;
			}
			else
			{
				iVar0 = -855052577;
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				iVar0 = -787702678;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 1425358430;
			}
			else
			{
				iVar0 = -5376850;
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				iVar0 = -804542901;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 1297433586;
			}
			else
			{
				iVar0 = 1338219162;
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				iVar0 = -1696275132;
			}
			else if (iParam2 == 1)
			{
				iVar0 = -293259613;
			}
			else
			{
				iVar0 = -1538397860;
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				iVar0 = -395458616;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 588902637;
			}
			else
			{
				iVar0 = 193037129;
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				iVar0 = -161595323;
			}
			else if (iParam2 == 1)
			{
				iVar0 = -861419347;
			}
			else
			{
				iVar0 = 1416872916;
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				iVar0 = -1114363619;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 357567274;
			}
			else
			{
				iVar0 = 1500919793;
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				iVar0 = -368407134;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 683583793;
			}
			else
			{
				iVar0 = 1042542561;
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				iVar0 = 1997759228;
			}
			else if (iParam2 == 1)
			{
				iVar0 = -1202625002;
			}
			else
			{
				iVar0 = 56657913;
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				iVar0 = 1265573293;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 485620834;
			}
			else
			{
				iVar0 = 1570826681;
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				iVar0 = -1030441283;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 727522818;
			}
			else
			{
				iVar0 = 785407605;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_812(int iParam0)
{
	iVar0 = func_387(iParam0, 0, 0);
	iVar1 = func_1008(iParam0, 0);
	return iVar0 >= iVar1;
}

void func_813(var uParam0, int iParam1)
{
	if (does_particle_fx_looped_exist((*uParam0)[iParam1]->f_25))
	{
		return;
	}
	if (!does_entity_exist(Global_1900073->f_26[iParam1]->f_7))
	{
		return;
	}
	(*uParam0)[iParam1]->f_26 = 0f;
	func_104(&((*uParam0)[iParam1]->f_27));
	if (&Global_1900073->f_154[iParam1] == 1)
	{
		(*uParam0)[iParam1]->f_25 = start_networked_particle_fx_looped_on_entity_bone("scr_mg_fishing_drips", Global_1900073->f_26[iParam1]->f_7, 0f, 0f, 0f, 0f, 0f, 0f, get_entity_bone_index_by_name(Global_1900073->f_26[iParam1]->f_7, "SKEL_Tail5"), 1065353216, 0, 0, 0);
	}
	else
	{
		(*uParam0)[iParam1]->f_25 = start_networked_particle_fx_looped_on_entity("scr_mg_fishing_drips", Global_1900073->f_26[iParam1]->f_7, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	}
	set_particle_fx_looped_evolution((*uParam0)[iParam1]->f_25, "fade", (*uParam0)[iParam1]->f_26, false);
}

bool func_814(int iParam0)
{
	if ((((iParam0 == 2 || iParam0 == 3) || iParam0 == 5) || iParam0 == 7) || iParam0 == 8)
	{
		return true;
	}
	return false;
}

char* func_815(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH_LEGENDARY";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case 7:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE_LEGENDARY";
		case 9:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case 11:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_816(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_LEGBLUEGILL_DESC";
		case 1:
			return "PROVISION_LEGBULHDCATFSH_DESC";
		case 2:
			return "PROVISION_LEGCHNPKRL_DESC";
		case 3:
			return "PROVISION_LEGCHNCATFSH_DESC";
		case 4:
			return "PROVISION_LEGLKSTURG_DESC";
		case 5:
			return "PROVISION_LEGLRGMTHBASS_DESC";
		case 6:
			return "PROVISION_LEGLNGNOSEGAR_DESC";
		case 7:
			return "PROVISION_LEGMUSKIE_DESC";
		case 8:
			return "PROVISION_LEGNPIKE_DESC";
		case 9:
			return "PROVISION_LEGPERCH_DESC";
		case 10:
			return "PROVISION_LEGRDFNPCKREL_DESC";
		case 11:
			return "PROVISION_LEGROCKBASS_DESC";
		case 12:
			return "PROVISION_LEGSMLMTHBASS_DESC";
		case 13:
			return "PROVISION_LEGSCKEYESAL_DESC";
		case 14:
			return "PROVISION_LEGSTHDTROUT_DESC";
		default:
			break;
	}
	return "";
}

char* func_817(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_BLUEGILL_DESC";
		case 1:
			return "PROVISION_BULHDCATFSH_DESC";
		case 2:
			return "PROVISION_CHNPKRL_DESC";
		case 3:
			return "PROVISION_CHNCATFSH_DESC";
		case 4:
			return "PROVISION_LKSTURG_DESC";
		case 5:
			return "PROVISION_LRGMTHBASS_DESC";
		case 6:
			return "PROVISION_LNGNOSEGAR_DESC";
		case 7:
			return "PROVISION_MUSKIE_DESC";
		case 8:
			return "PROVISION_NPIKE_DESC";
		case 9:
			return "PROVISION_PERCH_DESC";
		case 10:
			return "PROVISION_RDFNPCKREL_DESC";
		case 11:
			return "PROVISION_ROCKBASS_DESC";
		case 12:
			return "PROVISION_SMLMTHBASS_DESC";
		case 13:
			return "PROVISION_SCKEYESAL_DESC";
		case 14:
			return "PROVISION_FISH_STHDTROUT_DESC";
		default:
			break;
	}
	return "";
}

void func_818(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, 0);
	if (!func_238(iVar0))
	{
		return;
	}
	bVar1 = func_88(iVar0);
	bVar2 = func_810(uParam1);
	iVar3 = func_811(&(uParam2->f_327[iVar0]), bVar1, bVar2);
	if (&uParam2->f_491[iVar0] == 4)
	{
		return;
	}
	else if (func_812(iVar3))
	{
		return;
	}
	if (!func_389(0))
	{
		iVar4 = func_1009(&(uParam2->f_327[iVar0]));
		iVar5 = func_1010(bVar1, bVar2);
		Var6.f_1 = 10;
		func_944(&Var6, iVar5);
		if (func_945(iVar4, &Var6, &uVar18, 0))
		{
			Var22.f_2.f_1 = 10;
			Var22.f_1 = &uParam2->f_409[iVar0];
			func_1011(&uVar18, Var22);
		}
		return;
	}
	func_169(iVar3, &(uParam2->f_409[iVar0]));
}

void func_819(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1012(uParam0, uParam1, uParam2, 0);
	iVar1 = func_142(uParam0, uParam1, uParam2, 0);
	if (!func_238(iVar1))
	{
		return;
	}
	if (!func_1())
	{
		func_849(func_1013(uParam1, uParam2, iVar0, iVar1));
	}
	else
	{
		func_1014(func_1013(uParam1, uParam2, iVar0, iVar1));
	}
}

void func_820(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_1() || &Global_1900073->f_154[iParam3] != 1)
	{
		return;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0) && func_88(iVar0))
	{
		if (func_79(uParam1, iParam3, 32))
		{
			Global_40.f_11184.f_5[&Global_1900073->f_159[iParam3]] = 1;
			func_850(0, 10);
		}
	}
}

void func_821(var uParam0, var uParam1, var uParam2)
{
	if (!func_1())
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, 0);
		if (!func_238(iVar0))
		{
			return;
		}
		iVar1 = func_1012(uParam0, uParam1, uParam2, 0);
		if (func_80(0, 131072))
		{
		}
		else if (func_89(iVar1))
		{
			func_1015(12, 0, 0, "MGFSH_HNR_REL", 0, 0, 1065353216, 0);
		}
		else
		{
			func_1015(10, 0, 0, "MGFSH_HNR_REL", 0, 0, 1065353216, 0);
		}
	}
}

bool func_822(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_676.f_2 == 1 && &uParam1->f_491[iParam2] == 4)
	{
		return false;
	}
	if (&uParam1->f_532[iParam2] == 1 && !func_88(iParam2))
	{
		return false;
	}
	return true;
}

void func_823(int iParam0)
{
	if (!func_989(iParam0))
	{
		func_229(&(Global_40.f_11184.f_21), iParam0);
	}
}

bool func_824(int iParam0, bool bParam1)
{
	if (bParam1 && !func_427(iParam0))
	{
		return false;
	}
	return !func_980(iParam0, 4);
}

bool func_825(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return false;
	}
	if (&Global_1900073->f_189[iParam3] == 1)
	{
		return true;
	}
	else if (&Global_1900073->f_189[iParam3] == 2)
	{
		return false;
	}
	iVar1 = 0;
	iVar1 = round((func_718(uParam2, iVar0, 1) * 100f));
	if (iVar1 > 50)
	{
		return true;
	}
	return false;
}

bool func_826()
{
	if (func_26() != 0)
	{
		return true;
	}
	return true;
}

bool func_827(int iParam0, bool bParam1, bool bParam2)
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
		if (func_1016())
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
		iVar0 = func_1017(&(Global_1898164->f_1[0]));
		if (func_424(iVar0) && func_1018((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_418(&(Global_1898164->f_1[0])))
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

char* func_828(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_829(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_1019(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_830(int iParam0)
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

bool func_831(int iParam0)
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

void func_832(int iParam0, int iParam1, var uParam2)
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

struct<14> func_833(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_834(bool bParam0)
{
	iVar0 = func_609(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_875(923904168, func_1020(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_875(923904168, func_1020(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_875(923904168, func_1020(bParam0), -740156546, 0);
}

void func_835(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_836(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_609(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_837(int iParam0)
{
	return func_385(iParam0) == -427144552;
}

bool func_838(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	if (func_630(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_845(iParam0, &uVar0, 1, 0, 0);
	}
	return func_168(iParam0, 1, 0);
}

void func_839(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_385(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_635(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_871(iVar0))
	{
		if (func_26() == -1)
		{
			func_636(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_387(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_690(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_840(int iParam0, int iParam1)
{
	if (func_629(iParam0, 58855631))
	{
		func_1021(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_841(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1020(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_385(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_875(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_834(bParam1) };
			if (bParam2 && func_1022(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_873(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_873(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_874(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1023(bParam1) };
			switch (func_633(iParam0))
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
			if (func_1024(iParam0, -1823706425))
			{
				Var0 = { func_875(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1024(iParam0, -1483207246))
			{
				Var0 = { func_875(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1025(Var0, &Var27, bParam1, 0))
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

int func_842(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_384(iParam0, 0))
	{
		return 0;
	}
	if (!func_389(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_609(bParam3), iParam0);
}

int func_843(int iParam0, bool bParam1)
{
	if (func_640(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_609(bParam1), iParam0, 0);
}

bool func_844()
{
	if (func_26() != -1)
	{
		return false;
	}
	if (!func_622())
	{
		return false;
	}
	if (!func_647((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_647((*Global_1835011)[2]->f_1, 1) && func_647((*Global_1347702)[120]->f_15, 1)) && !func_647((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_647((*Global_1835011)[37]->f_1, 1) && !func_647((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_647((*Global_1835011)[57]->f_1, 1) && !func_647((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_647((*Global_1835011)[26]->f_1, 1) && !func_647((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_647((*Global_1835011)[62]->f_1, 1) && func_647((*Global_1835011)[63]->f_1, 1)) && !func_647((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_647((*Global_1835011)[75]->f_1, 1) && !func_647((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_647((*Global_1835011)[76]->f_1, 1) && !func_647((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_647((*Global_1835011)[40]->f_1, 1) && func_647((*Global_1835011)[41]->f_1, 1)) && !func_647((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_647((*Global_1835011)[62]->f_1, 1) && func_647((*Global_1835011)[63]->f_1, 1)) && !func_647((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_647((*Global_1835011)[65]->f_1, 1) && func_647((*Global_1835011)[66]->f_1, 1)) && !func_647((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_845(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1026(&iParam0);
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	if (!func_389(0))
	{
		bParam3 = true;
	}
	if (func_837(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_834(0) };
			Var4.f_9 = -1591664384;
			if (!func_873(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_874(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1022(iParam0, 1))
			{
				if (!func_873(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_874(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1027(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_842(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1028(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_609(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_846(int iParam0, int iParam1)
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

int func_847()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_848(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_849(int iParam0)
{
	if (func_26() != -1)
	{
		return;
	}
	iVar0 = func_1029(iParam0);
	fVar1 = func_1030(iParam0);
	if ((Global_1347477->f_117 || !func_631(31)) || !func_1031(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1032(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_1033(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_950(_create_var_string(6, func_1034(iParam0), fVar1), "itemtype_textures", func_1035(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_850(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1036(&Global_0, 8);
	}
	if (!func_622() || func_26() != -1)
	{
		return;
	}
	func_1036(&Global_0, 1);
}

void func_851(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_852(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1037(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1038(iParam0))
	{
		return false;
	}
	if (func_1039(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_932(iParam0, 1)) || func_1040(32768))
	{
		if (!func_932(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1041())
	{
		return false;
	}
	return true;
}

void func_853(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_854(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_855(int iParam0, int iParam1)
{
	if (!func_1042(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_856(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_625() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1043(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1044(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_901() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1045(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_901(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1046(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_902() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1047(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_902(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_855(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_857(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_858(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_859(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_860(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1048(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_168(iVar2, 1, 0) || func_1050(func_1049(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_864(func_1048(iVar0))), func_864(func_1048(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_901() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1051(iVar0)), func_1051(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1045() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1051(iVar0)), func_1051(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1051(iVar0)), func_1051(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_912(iParam3, func_1052(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_908(iVar2) - iParam7) >= func_855(iParam3, func_1053(iVar0));
				}
				else
				{
					bVar1 = func_908(iVar2) >= func_855(iParam3, func_1053(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_908(iVar2) + iParam7) >= func_855(iParam3, func_1053(iVar0));
			}
			else
			{
				bVar1 = func_908(iVar2) >= func_855(iParam3, func_1053(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1054(iVar2)), func_1054(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_245(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1055(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1055(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_902() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1056(iVar0)), func_1056(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1047() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1056(iVar0)), func_1056(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1056(iVar0)), func_1056(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_912(iParam3, func_1052(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_908(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1057(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1057(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_394(iVar2)), func_394(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_861(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1046() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_862(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_418(func_201(0)) && ((func_1058(0) == 1 || func_1058(0) == 8) || func_1058(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

var func_863(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_864(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_865(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_866(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_867(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_868(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_869(int iParam0)
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
			func_1059(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_1060(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1060(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1060(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1061(1);
			break;
		case 34:
			func_1062(1);
			break;
		case 35:
			func_1063(1);
			break;
		case 36:
			break;
		case 37:
			func_1064(0);
			break;
		case 38:
			func_1065(0);
			break;
		case 39:
			func_1066(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_622()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_865("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_619(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_622()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_865("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_619(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_622()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_865("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_619(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_622()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_865("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_619(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_26() == -1)
			{
				if (!func_942(99217379) || func_1067(99217379) == 2110595215)
				{
					if (func_58())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_168(iVar0, 1, 0))
					{
						func_683(iVar0, 1, 752097756);
					}
					func_662(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_26() == -1)
			{
				if (!func_168(1013902307, 1, 0))
				{
					func_683(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_26() == -1)
			{
				if (!func_168(1013902307, 1, 0))
				{
					func_683(1013902307, 1, 752097756);
				}
				if (!func_168(142640135, 1, 0))
				{
					func_683(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_26() == -1)
			{
				if (!func_168(786809402, 1, 0))
				{
					func_683(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_26() == -1)
			{
				if (!func_168(786809402, 1, 0))
				{
					func_683(786809402, 1, 752097756);
				}
				if (!func_168(-518019409, 1, 0))
				{
					func_683(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
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
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1068();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_870(int iParam0)
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

bool func_871(int iParam0)
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

int func_872(int iParam0, int iParam1)
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

bool func_873(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1028(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_874(int iParam0, var uParam1, int iParam2)
{
	if (func_1069(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_875(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_384(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_609(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_876(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1070(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1025(*uParam1, &Var0, bParam6, 0))
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
	if (!func_389(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_609(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_877(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1071(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_878(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
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
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_598();
	func_1072(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_879(int iParam0)
{
	if (func_1073(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
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
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
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

bool func_880(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_881(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_882(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_631(50))
			{
				if (!func_631(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_631(51))
			{
				if (!func_631(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_883()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_884(int iParam0, int iParam1, var uParam2)
{
	if (!func_384(iParam1, 0))
	{
		return false;
	}
	if (func_385(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_26() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_633(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1074(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_629(iParam1, 866047851))
	{
		iVar5 = func_920(iVar4, 1);
		if (func_1075(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_633(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_629(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_1076(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_1077(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1077(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_633(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_629(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1078(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_885()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_886()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_887()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_168(func_1079(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_888(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_889(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_168(iVar0, 1, 0) && func_168(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_890(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_891(int iParam0, int iParam1)
{
	iVar0 = func_1080(iParam0);
	if (iVar0 != -15)
	{
		func_1072(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1081(iVar0, 1);
	}
	return false;
}

int func_892(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_168(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
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
			if (func_384(iVar25, 0) && func_629(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_893(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_950(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_894(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1082())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_950(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1083(iVar0);
			func_1084(iVar0, 0, 0);
		}
		func_950(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_645(func_946(1644987397), iVar1);
	}
}

void func_895(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_896(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_897(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_898(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_899(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_908(iVar9);
	iVar2 = func_908(iVar10);
	iVar3 = func_908(iVar11);
	iVar5 = func_909(iVar9);
	iVar6 = func_909(iVar10);
	iVar7 = func_909(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_908(iVar12);
		iVar8 = func_909(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_900(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_901()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1085(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_902()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_903(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1057(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1057(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1057(iVar0))
		{
			*sParam2++;
		}
		if (func_1057(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1057(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1057(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1057(iVar0))
		{
			*sParam2++;
		}
		if (func_1057(iVar1))
		{
			*sParam2++;
		}
		if (func_1057(iVar0) && func_1057(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1057(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1057(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1057(iVar0))
		{
			*sParam2++;
		}
		if (func_1057(iVar1))
		{
			*sParam2++;
		}
		if (func_1057(iVar2))
		{
			*sParam2++;
		}
		if ((func_1057(iVar0) && func_1057(iVar1)) && func_1057(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1057(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1057(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1057(iVar0))
		{
			*sParam2++;
		}
		if (func_1057(iVar1))
		{
			*sParam2++;
		}
		if (func_1057(iVar2))
		{
			*sParam2++;
		}
		if (func_1057(iVar3))
		{
			*sParam2++;
		}
		if (((func_1057(iVar0) && func_1057(iVar1)) && func_1057(iVar2)) && func_1057(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_904(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1086(1497516462);
			func_1087(2016141805);
			func_1087(1010885152);
			func_1087(-502324015);
			break;
		case 2016141805:
			func_1087(1497516462);
			func_1086(2016141805);
			func_1087(1010885152);
			func_1087(-502324015);
			break;
		case 1010885152:
			func_1087(1497516462);
			func_1087(2016141805);
			func_1086(1010885152);
			func_1087(-502324015);
			break;
		case -502324015:
			func_1087(1497516462);
			func_1087(2016141805);
			func_1087(1010885152);
			func_1086(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1087(-538889627);
			func_1087(-538880323);
			func_1087(-1056767524);
			func_1086(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1088();
			func_1086(iParam0);
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
			func_1089();
			func_1086(iParam0);
			break;
		case 2019386373:
			func_1087(-664252410);
			func_1087(2109952320);
			func_1086(2019386373);
			break;
		case -664252410:
			func_1087(2019386373);
			func_1087(2109952320);
			func_1086(-664252410);
			break;
		case 2109952320:
			func_1087(2019386373);
			func_1087(-664252410);
			func_1086(2109952320);
			break;
		case -1674179981:
			func_1087(-1835851517);
			func_1087(-1838352012);
			func_1086(-1674179981);
			break;
		case -1835851517:
			func_1087(-1674179981);
			func_1087(-1838352012);
			func_1086(-1835851517);
			break;
		case -1838352012:
			func_1087(-1674179981);
			func_1087(-1835851517);
			func_1086(-1838352012);
			break;
		case -1717960576:
			func_1087(210001842);
			func_1086(-1717960576);
			break;
		case 210001842:
			func_1087(-1717960576);
			func_1086(210001842);
			break;
		case -150493654:
			func_1087(-1271608261);
			func_1087(1846061697);
			func_1087(-1145519186);
			func_1086(-150493654);
			break;
		case -1271608261:
			func_1087(-150493654);
			func_1087(1846061697);
			func_1087(-1145519186);
			func_1086(-1271608261);
			break;
		case 1846061697:
			func_1087(-150493654);
			func_1087(-1271608261);
			func_1087(-1145519186);
			func_1086(1846061697);
			break;
		case -1145519186:
			func_1087(-150493654);
			func_1087(-1271608261);
			func_1087(1846061697);
			func_1086(-1145519186);
			break;
		case 1766284049:
			func_1087(280705402);
			func_1087(1926308480);
			func_1086(1766284049);
			break;
		case 280705402:
			func_1087(1766284049);
			func_1087(1926308480);
			func_1086(280705402);
			break;
		case 1926308480:
			func_1087(1766284049);
			func_1087(280705402);
			func_1086(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1087(439465264);
				func_1086(1609506757);
			}
			else
			{
				func_1087(1609506757);
				func_1087(439465264);
			}
			break;
		case 439465264:
			if (func_1090(1609506757))
			{
				if (bParam1)
				{
					func_1086(439465264);
				}
				else
				{
					func_1087(439465264);
				}
			}
			break;
		case 1822001510:
			func_1087(-1612662716);
			func_1086(1822001510);
			break;
		case -1612662716:
			func_1087(1822001510);
			func_1086(-1612662716);
			break;
		case 1306158345:
			func_1087(1952610440);
			func_1087(-223469678);
			func_1087(-404698347);
			func_1087(1517904467);
			func_1086(1306158345);
			break;
		case 1952610440:
			func_1087(1306158345);
			func_1087(-223469678);
			func_1087(-404698347);
			func_1087(1517904467);
			func_1086(1952610440);
			break;
		case -223469678:
			func_1087(1306158345);
			func_1087(1952610440);
			func_1087(-404698347);
			func_1087(1517904467);
			func_1086(-223469678);
			break;
		case -404698347:
			func_1087(1306158345);
			func_1087(1952610440);
			func_1087(-223469678);
			func_1087(1517904467);
			func_1086(-404698347);
			break;
		case 1517904467:
			func_1087(1306158345);
			func_1087(1952610440);
			func_1087(-223469678);
			func_1087(-404698347);
			func_1086(1517904467);
			break;
		case 1376646519:
			func_1087(931649776);
			func_1087(-434590080);
			func_1087(1743048395);
			func_1087(449774763);
			func_1086(1376646519);
			break;
		case 931649776:
			func_1087(1376646519);
			func_1087(-434590080);
			func_1087(1743048395);
			func_1087(449774763);
			func_1086(931649776);
			break;
		case -434590080:
			func_1087(1376646519);
			func_1087(931649776);
			func_1087(1743048395);
			func_1087(449774763);
			func_1086(-434590080);
			break;
		case 1743048395:
			func_1087(1376646519);
			func_1087(931649776);
			func_1087(-434590080);
			func_1087(449774763);
			func_1086(1743048395);
			break;
		case 449774763:
			func_1087(1376646519);
			func_1087(931649776);
			func_1087(-434590080);
			func_1087(1743048395);
			func_1086(449774763);
			break;
		case -1414537028:
			func_1087(38162571);
			func_1087(1350391819);
			func_1087(54073871);
			func_1086(-1414537028);
			break;
		case 38162571:
			func_1087(-1414537028);
			func_1087(1350391819);
			func_1087(54073871);
			func_1086(38162571);
			break;
		case 1350391819:
			func_1087(-1414537028);
			func_1087(38162571);
			func_1087(54073871);
			func_1086(1350391819);
			break;
		case 54073871:
			func_1087(-1414537028);
			func_1087(38162571);
			func_1087(1350391819);
			func_1086(54073871);
			break;
		case 198200492:
			func_1086(198200492);
			func_1087(-1124061431);
			func_1087(52706132);
			func_1087(-259123672);
			break;
		case -1124061431:
			func_1087(198200492);
			func_1086(-1124061431);
			func_1087(52706132);
			func_1087(-259123672);
			break;
		case 52706132:
			func_1087(198200492);
			func_1087(-1124061431);
			func_1086(52706132);
			func_1087(-259123672);
			break;
		case -259123672:
			func_1087(198200492);
			func_1087(-1124061431);
			func_1087(52706132);
			func_1086(-259123672);
			break;
		case -919512195:
			func_1086(-919512195);
			func_1087(-1925798111);
			func_1087(420709909);
			func_1087(1703426636);
			break;
		case -1925798111:
			func_1086(-1925798111);
			func_1087(-919512195);
			func_1087(420709909);
			func_1087(1703426636);
			break;
		case 420709909:
			func_1086(420709909);
			func_1087(-919512195);
			func_1087(-1925798111);
			func_1087(1703426636);
			break;
		case 1703426636:
			func_1086(1703426636);
			func_1087(-919512195);
			func_1087(-1925798111);
			func_1087(420709909);
			break;
		case -1223121209:
			func_1086(-1223121209);
			func_1087(630808005);
			break;
		case 630808005:
			func_1086(630808005);
			func_1087(-1223121209);
			break;
		case 1453909576:
			func_1086(1453909576);
			func_1087(1643531967);
			break;
		case 1643531967:
			func_1086(1643531967);
			func_1087(1453909576);
			break;
		case 0:
			func_1086(0);
			func_1087(473295046);
			func_1087(-1738165526);
			break;
		case 473295046:
			func_1086(473295046);
			func_1087(0);
			func_1087(-1738165526);
			break;
		case -1738165526:
			func_1086(-1738165526);
			func_1087(0);
			func_1087(473295046);
			break;
		case 932909855:
			func_1086(932909855);
			func_1087(2051822093);
			break;
		case 2051822093:
			func_1086(2051822093);
			func_1087(932909855);
			break;
		case 405586984:
			func_1086(405586984);
			func_1087(1509509592);
			func_1087(-959357075);
			func_1087(-1311865656);
			break;
		case 1509509592:
			func_1086(1509509592);
			func_1087(405586984);
			func_1087(-959357075);
			func_1087(-1311865656);
			break;
		case -959357075:
			func_1086(-959357075);
			func_1087(1509509592);
			func_1087(405586984);
			func_1087(-1311865656);
			break;
		case -1311865656:
			func_1086(-1311865656);
			func_1087(1509509592);
			func_1087(-959357075);
			func_1087(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1086(-524145696);
			}
			else
			{
				func_1087(-524145696);
			}
			func_1087(1626481264);
			func_1087(282809459);
			break;
		case 282809459:
			func_1086(282809459);
			func_1087(1626481264);
			func_1087(-524145696);
			break;
		case 1626481264:
			func_1086(1626481264);
			func_1087(-524145696);
			func_1087(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1086(885203519);
			}
			else
			{
				func_1087(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1086(-1080627546);
			}
			else
			{
				func_1087(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_1090(iParam0))
				{
					func_1086(iParam0);
				}
			}
			else if (func_1090(iParam0))
			{
				func_1087(iParam0);
			}
			break;
	}
}

void func_905(int iParam0)
{
	if (!func_1091(iParam0))
	{
		func_1093(func_1092(iParam0));
	}
}

int func_906()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1091(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_907(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_908(iVar9);
	iVar2 = func_908(iVar10);
	iVar3 = func_908(iVar11);
	iVar5 = func_909(iVar9);
	iVar6 = func_909(iVar10);
	iVar7 = func_909(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_908(iVar12);
		iVar8 = func_909(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_908(int iParam0)
{
	if (func_168(iParam0, 1, 0))
	{
		iVar0 = func_387(iParam0, 0, 0);
	}
	return iVar0;
}

int func_909(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_910(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_911(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_912(int iParam0, int iParam1)
{
	if (!func_1042(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_913(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_912(iParam1, 5) || iParam0 == func_912(iParam1, 6)) || iParam0 == func_912(iParam1, 7)) || iParam0 == func_912(iParam1, 8)) || iParam0 == func_912(iParam1, 9))
	{
		func_903(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_626(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_628(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_914(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_912(iParam1, 5) || iParam0 == func_912(iParam1, 6)) || iParam0 == func_912(iParam1, 7)) || iParam0 == func_912(iParam1, 8)) || iParam0 == func_912(iParam1, 9))
	{
		if (func_903(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_626(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_628(51, 0, 0, iVar0, func_855(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_626(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_628(51, 0, 0, iVar0, func_855(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_915()
{
	if (func_425((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_916(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_917(int iParam0)
{
	if (!func_1094(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_918(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

int func_919(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1095(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_920(int iParam0, int iParam1)
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

bool func_921(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1096();
	if (iParam2 == 39)
	{
		Var0 = { func_841(iParam0, 1, 0) };
		iParam2 = func_920(func_919(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_629(iParam0, 866047851) && func_1075(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_924(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1097(func_1095(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1098(iParam2);
	func_1099(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1100(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1100(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1101(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1102(iParam0, iParam2, iParam1, func_26() != -1);
	if (bParam4)
	{
		func_1103(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1103(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_1104(func_1095(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_922(bool bParam0, bool bParam1, bool bParam2)
{
	func_1105(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_923(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1106(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1107(Var0);
}

bool func_924(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_925()
{
	func_1108(&(Global_1946804->f_2776));
	func_1109(32768);
	func_1104(1108822547, 8, 6);
}

int func_926(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_920(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_927(int iParam0)
{
	if (func_1110(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1111(Var0);
}

void func_928(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1111(Var0);
}

float func_929()
{
	if (func_1112())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1113(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1113(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1114();
	fVar2 = func_1115();
	fVar3 = func_1116();
	fVar4 = func_1117();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1118()));
	fVar7 = (func_1113(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1119(3, round((to_float(iVar8) * fVar10)), 0);
	func_1120(3, fVar9, fVar9 > 100f);
	return func_358(fVar7, -100f, 100f);
}

float func_930()
{
	if (func_1112())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1113(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1113(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1114();
	fVar2 = func_1115();
	fVar3 = func_1116();
	fVar4 = func_1117();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1118()));
	fVar7 = (func_1113(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1119(2, round((to_float(iVar8) * fVar10)), 0);
	func_1120(2, fVar9, fVar9 > 100f);
	return func_358(fVar7, -100f, 100f);
}

float func_931()
{
	if (func_1112())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1113(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1121())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1122())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1113(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1114();
	fVar2 = func_1115();
	fVar3 = func_1116();
	fVar4 = func_1117();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1118()));
	fVar7 = (func_1113(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1119(1, round((to_float(iVar8) * fVar10)), 0);
	func_1120(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1113(0);
	}
	return func_358(fVar7, -100f, 100f);
}

bool func_932(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_933(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_934(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_384(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_845(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_389(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_609(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_935(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1123();
			}
			break;
	}
	return 0;
}

int func_936(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_937(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_938(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_937(iParam0))
	{
		return;
	}
	if (func_1124(iParam0))
	{
		return;
	}
	if (!func_1125(iParam0))
	{
		func_1126(iParam0, 1, 0);
	}
	iVar0 = func_1127(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1128(iParam0, 512))
		{
			func_923(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_301() && !bParam1) && !func_827(0, 0, 1))
	{
		func_304(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1129(iParam0, 6);
	if (bParam2)
	{
		if (!func_827(0, 0, 1))
		{
			func_850(1, 4);
		}
	}
}

int func_939()
{
	return Global_1946804->f_1;
}

bool func_940(int iParam0, bool bParam1)
{
	return func_935(iParam0, 0) < func_1130(iParam0, bParam1);
}

bool func_941(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_633(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_942(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_920(iParam0, 1)] != &Global_1946804->f_57[func_920(iParam0, 1)];
}

void func_943(int iParam0, int iParam1)
{
	if (func_629(iParam1, 130796156))
	{
		func_1131(iParam1, 0);
	}
	else if (func_629(iParam1, 930141731))
	{
		func_1131(iParam1, 1);
		func_1132(iParam0);
	}
}

void func_944(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

bool func_945(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	func_1133(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return false;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1134(uParam2, iParam0, Var1);
	return true;
}

struct<2> func_946(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_947(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_948(int iParam0)
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

int func_949(int iParam0)
{
	if (!func_1135(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_950(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1136(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_951()
{
	return !&Global_1911774;
}

void func_952(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

bool func_953(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_954(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_1137(uParam0))
	{
		return;
	}
	if (&Global_1224424 < 20)
	{
		Global_1224424 = &Global_1224424 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224424->f_1[iVar0] = { *(Global_1224424->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 10;
	Var1.f_7.f_14 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1224424->f_1[(&Global_1224424 - 1)]) = { Var1 };
}

bool func_955(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1070(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_389(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_609(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_956(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_26() == -1)
	{
		if (func_618(43))
		{
			if (func_629(iParam0, 412399755))
			{
				func_905(-1791518714);
				if (func_906() == 0)
				{
					func_850(0, 10);
					iVar0 = func_1138(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_908(iParam0) < func_909(iParam0))
						{
							func_626(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_618(44))
		{
			if (func_629(iParam0, 709057512))
			{
				func_905(-2087881550);
				if (func_906() == 1)
				{
					func_850(0, 10);
					iVar0 = func_1138(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_908(iParam0) < func_909(iParam0))
						{
							func_626(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_618(45))
		{
			if (func_629(iParam0, -1478961327))
			{
				func_905(1908068621);
				if (func_906() == 2)
				{
					func_850(0, 10);
					iVar0 = func_1138(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_908(iParam0) < func_909(iParam0))
						{
							func_626(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_618(46))
		{
			if (func_629(iParam0, -1238404098))
			{
				func_905(1611247019);
				if (func_906() == 3)
				{
					func_850(0, 10);
					iVar0 = func_1138(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_908(iParam0) < func_909(iParam0))
						{
							func_626(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_618(47))
		{
			if (func_629(iParam0, 1160548794))
			{
				func_905(1319635688);
				if (func_906() == 4)
				{
					func_850(0, 10);
					iVar0 = func_1138(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_908(iParam0) < func_909(iParam0))
						{
							func_626(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_957(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_1139(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_958(int iParam0)
{
	return func_980(iParam0, 2);
}

bool func_959(int iParam0)
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

void func_960(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1140(iParam0, iParam1))
		{
			if (func_1141(iParam0, iParam1))
			{
				if (func_1142(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1143(iParam0);
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

void func_961(int iParam0, int iParam1, bool bParam2)
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

void func_962(int iParam0, bool bParam1)
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

void func_963(int iParam0, int iParam1)
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

float func_964(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.5f;
		case 1:
			return 0.5f;
		case 2:
			return 0.5f;
		case 3:
			return 14f;
		case 4:
			return 14f;
		case 5:
			return 4f;
		case 6:
			return 14f;
		case 7:
			return 14f;
		case 8:
			return 14f;
		case 9:
			return 0.5f;
		case 10:
			return 0.5f;
		case 11:
			return 0.5f;
		case 12:
			return 4f;
		case 13:
			return 4f;
		case 14:
			return 4f;
		default:
			break;
	}
	return 0f;
}

bool func_965()
{
	return (func_1144(1) || func_1144(4));
}

float func_966(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2f;
		case 1:
			return 2f;
		case 2:
			return 2f;
		case 3:
			return 20f;
		case 4:
			return 20f;
		case 5:
			return 6f;
		case 6:
			return 20f;
		case 7:
			return 20f;
		case 8:
			return 20f;
		case 9:
			return 2f;
		case 10:
			return 2f;
		case 11:
			return 2f;
		case 12:
			return 6f;
		case 13:
			return 6f;
		case 14:
			return 6f;
		default:
			break;
	}
	return 0f;
}

bool func_967(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	if (!func_424(iParam0))
	{
		return false;
	}
	return func_647((*Global_1347702)[iParam0]->f_15, 1);
}

float func_968(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	fVar0 = 0f;
	if (iParam4 == 0)
	{
		fVar1 = func_992(uParam0, uParam1, iParam2, iParam3, &(Global_40.f_11184[iParam2]));
	}
	else
	{
		fVar1 = 5f;
	}
	if (fVar1 > 0f)
	{
		fVar0 = (5f * fVar1);
	}
	if (fVar0 > 0f)
	{
		iVar2 = _get_prev_weather_type_hash_name();
		fVar0 = (fVar0 * func_1145(iVar2));
	}
	return fVar0;
}

float func_969(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_970(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_971(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_972(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1146(iParam0);
	}
	else
	{
		func_1147(iParam0, iParam1);
	}
	func_1148();
}

void func_973(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_974(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_975(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_976(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_977(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

bool func_978(int iParam0)
{
	if (Global_1935496->f_72.f_41 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= Global_1935496->f_72.f_41)
	{
		if (&Global_1935496->f_72[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_979(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_980(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_981(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, float fParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_rotate_mode(iVar0, fParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_983(iParam0, 1);
	func_984(iParam0, 1);
	func_985(iParam0, 128);
}

void func_982(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_983(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_980(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_984(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_985(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_986(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_427(iParam0))
	{
		return;
	}
	iVar0 = func_706(iParam0);
	func_983(iVar0, bParam1);
}

bool func_987(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_1149(cParam1, cParam0);
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

bool func_988(var uParam0)
{
	return false;
}

bool func_989(int iParam0)
{
	return func_207(Global_40.f_11184.f_21, iParam0);
}

bool func_990(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return true;
	}
	if ((((iParam1 == 3 || iParam1 == 4) || iParam1 == 6) || iParam1 == 7) || iParam1 == 8)
	{
		return false;
	}
	return true;
}

bool func_991(int iParam0, int iParam1)
{
	if (iParam0 != 0 && func_88(iParam1))
	{
		return false;
	}
	if (func_88(iParam1))
	{
		return false;
	}
	return true;
}

float func_992(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_393(iParam4))
	{
		return 0f;
	}
	if (iParam2 == 0)
	{
		if (uParam0->f_676.f_1 == 1)
		{
			if (iParam4 == 1380607804)
			{
				return 5f;
			}
		}
		else if (uParam0->f_676.f_2 == 1)
		{
			if ((iParam3 == 5 || iParam3 == 12) || iParam3 == 14)
			{
				return 5f;
			}
			else
			{
				return 0f;
			}
		}
		else if (uParam0->f_676.f_4 == 1)
		{
			if (!func_45(128))
			{
				if (iParam3 == 12 || !func_89(iParam3))
				{
					return 0f;
				}
			}
			else if (iParam4 == -1753819339)
			{
				if (iParam3 == 12)
				{
					return 5f;
				}
				else
				{
					return 0f;
				}
			}
		}
	}
	else if (uParam0->f_676.f_4 == 1)
	{
		if (iParam3 == 12)
		{
			return 5f;
		}
		else
		{
			return 0f;
		}
	}
	fVar0 = 0f;
	iVar1 = func_1150(iParam3);
	iVar2 = compendium_fish_get_lure_suitability_by_stat_item(iVar1, iParam4);
	switch (iVar2)
	{
		case -682307487:
			fVar0 = 4f;
			break;
		case -1096944649:
			fVar0 = 3f;
			break;
		case -1092237143:
			fVar0 = 2f;
			break;
		case 1330140418:
			fVar0 = 1f;
			break;
		case -116686167:
			fVar0 = 0.5f;
			break;
		case 0:
			fVar0 = 0f;
			break;
		default:
			break;
	}
	if ((iParam2 == 0 && fVar0 > 0f) && uParam0->f_60 != -1)
	{
		if (func_397(&(Global_40.f_11184[iParam2])) || func_398(&(Global_40.f_11184[iParam2])))
		{
			if (((uParam0->f_60 == 0 && func_746(&(Global_40.f_11184[iParam2]))) || (uParam0->f_60 == 1 && func_747(&(Global_40.f_11184[iParam2])))) || (uParam0->f_60 == 2 && func_748(&(Global_40.f_11184[iParam2]))))
			{
				fVar0 = func_1151(fVar0);
			}
		}
	}
	return fVar0;
}

void func_993(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	func_64(uParam0, uParam1, uParam2, iParam3, iParam4);
	func_272(uParam2, iParam4, 5);
	(*uParam1)[iParam3]->f_182 = 0;
	(*uParam1)[iParam3]->f_189 = 0;
	func_450(uParam0, uParam2, iParam4);
}

bool func_994(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (((iParam3 == 0 && func_1152(uParam0, uParam1, uParam2, iParam3)) && func_74(&((*uParam1)[iParam3]->f_186))) && func_75(&((*uParam1)[iParam3]->f_186)) > (*uParam1)[iParam3]->f_197)
	{
		return true;
	}
	if (func_360(iParam3, 1))
	{
		return true;
	}
	return false;
}

bool func_995(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((func_238(iVar0) && func_87(&(uParam2->f_327[iVar0]))) && (*uParam1)[iParam3]->f_182 < &uParam2->f_1161[&uParam2->f_327[iVar0]])
	{
		if (!func_74(&((*uParam1)[iParam3]->f_186)) || func_443(&((*uParam1)[iParam3]->f_186)) >= (*uParam1)[iParam3]->f_190)
		{
			return true;
		}
	}
	return false;
}

int func_996(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((func_238(iVar0) && func_87(&(uParam2->f_327[iVar0]))) && &uParam2->f_1161[&uParam2->f_327[iVar0]]->f_1[(*uParam1)[iParam3]->f_182] == 1)
	{
		return 1;
	}
	return 0;
}

int func_997(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0) || (*uParam1)[iParam3]->f_189 == 0)
	{
		return uParam2->f_1316;
	}
	iVar1 = uParam2->f_1317;
	switch (&uParam2->f_491[iVar0])
	{
		case 0:
			iVar1 = uParam2->f_1317;
			break;
		case 1:
			iVar1 = uParam2->f_1318;
			break;
		case 2:
			iVar1 = uParam2->f_1319;
			break;
		case 3:
			iVar1 = uParam2->f_1320;
			break;
		case 4:
			iVar1 = uParam2->f_1321;
			break;
	}
	if ((*uParam1)[iParam3]->f_71 == 1)
	{
		iVar1 = (iVar1 + uParam2->f_1322);
	}
	return iVar1;
}

int func_998(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((*uParam1)[iParam3]->f_189 == 0)
	{
		return 1;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	fVar1 = (func_718(uParam2, iVar0, 0) * 100f);
	return (150 + round(fVar1));
}

int func_999(var uParam0, var uParam1, int iParam2)
{
	iVar0 = (*uParam0)[iParam2]->f_197;
	if ((*uParam0)[iParam2]->f_189 == 0)
	{
		iVar0 = (iVar0 + get_random_int_in_range(uParam1->f_1312, uParam1->f_1313));
	}
	else
	{
		iVar0 = (iVar0 + get_random_int_in_range(uParam1->f_1314, uParam1->f_1315));
	}
	return iVar0;
}

void func_1000(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return;
	}
	if ((*uParam1)[iParam3]->f_189 == 1)
	{
		sVar1 = "LARGE_BITE";
		sVar2 = "LARGE_BITE_ROD";
	}
	else
	{
		sVar1 = "SMALL_BITE";
		sVar2 = "SMALL_BITE_ROD";
	}
	iVar3 = func_1153(uParam1, iParam3);
	if (iVar3 > -1)
	{
		_0xf1c5310feaa36b48(&((*uParam1)[iParam3]->f_79[iVar3]), sVar1, func_257(iParam3), *uParam0, 0, 0);
		_0x503703ec1781b7d6(&((*uParam1)[iParam3]->f_79[iVar3]), "FishSize", &(uParam2->f_409[iVar0]));
	}
	iVar3 = func_1154(uParam1, iParam3);
	if (iVar3 > -1)
	{
		_0xf1c5310feaa36b48(&((*uParam1)[iParam3]->f_84[iVar3]), sVar2, func_53(uParam1, iParam3), *uParam0, 0, 0);
		_0x503703ec1781b7d6(&((*uParam1)[iParam3]->f_84[iVar3]), "FishSize", &(uParam2->f_409[iVar0]));
	}
}

void func_1001(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (((*uParam1)[iParam3]->f_71 == 0 && does_entity_exist(func_257(iParam3))) && (*uParam1)[iParam3]->f_19 > -0.05f)
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar0))
		{
			vVar1 = { func_258(iParam3) };
			vVar4 = { vVar1 };
			vVar4.f_2 = (vVar4.z - 1f);
			vVar7 = { func_786(vVar4 - vVar1) };
			if ((*uParam1)[iParam3]->f_189 == 1)
			{
				fVar10 = uParam0->f_66;
			}
			else
			{
				fVar10 = uParam0->f_67;
			}
			vVar11 = { vVar7 * Vector(fVar10, fVar10, fVar10) };
			apply_force_to_entity(func_257(iParam3), 3, vVar11, 0f, 0f, 0f, 0, false, true, true, false, true);
		}
	}
}

bool func_1002(int iParam0, bool bParam1)
{
	if (bParam1 && !func_427(iParam0))
	{
		return true;
	}
	return func_980(iParam0, 4);
}

bool func_1003(var uParam0, int iParam1)
{
	if (func_744(&(Global_40.f_11184[iParam1])) || func_745(&(Global_40.f_11184[iParam1])))
	{
		return true;
	}
	if (func_397(&(Global_40.f_11184[iParam1])))
	{
		iVar0 = get_random_int_in_range(0, 5);
		if (iVar0 <= (*uParam0)[iParam1]->f_208)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_1004(int iParam0)
{
	if ((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 7) || iParam0 == 8) || iParam0 == 12) || iParam0 == 13) || iParam0 == 14)
	{
		return true;
	}
	return false;
}

void func_1005(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if ((*uParam1)[iParam4]->f_206 > 0)
	{
		if (!func_74(&((*uParam1)[iParam4]->f_242)) || func_443(&((*uParam1)[iParam4]->f_242)) > uParam0->f_71)
		{
			func_104(&((*uParam1)[iParam4]->f_242));
			if (func_146(uParam2, iParam3))
			{
				iVar0++;
			}
			else
			{
				iVar0 += 2;
			}
			(*uParam1)[iParam4]->f_206 = ((*uParam1)[iParam4]->f_206 - iVar0);
		}
	}
}

bool func_1006(int iParam0)
{
	return Global_1900073->f_26[iParam0]->f_2 > (IntToFloat(func_1155(iParam0)) - 0.1f);
}

void func_1007(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0 && uParam0->f_676.f_1 == 1)
	{
		return;
	}
	iVar0 = uParam0->f_70;
	if (iParam3 == 0)
	{
		if (func_46(&(uParam0->f_676)))
		{
			iVar0 *= 2;
		}
	}
	else
	{
		iVar0 *= 20;
	}
	if (func_477(uParam1, iParam3) && (!func_74(&((*uParam1)[iParam3]->f_239)) || func_443(&((*uParam1)[iParam3]->f_239)) > iVar0))
	{
		func_104(&((*uParam1)[iParam3]->f_239));
		iVar1 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar1))
		{
			iVar2 = 1;
			if (iParam3 == 0)
			{
				if (func_1006(iParam3))
				{
					func_110(uParam0, 42, 1, -2, 1);
				}
				if (func_251(iParam3))
				{
					if (func_88(iVar1) || func_1004(&(uParam2->f_327[iVar1])))
					{
						iVar2 += 2;
					}
					else
					{
						iVar2++;
					}
				}
				if ((*uParam1)[iParam3]->f_209 == 0 && (*uParam1)[iParam3]->f_206 > 75)
				{
					(*uParam1)[iParam3]->f_209 = 1;
					(*uParam1)[iParam3]->f_208++;
				}
				iVar2 = (iVar2 + (*uParam1)[iParam3]->f_208);
			}
			(*uParam1)[iParam3]->f_206 = ((*uParam1)[iParam3]->f_206 + iVar2);
		}
	}
}

int func_1008(int iParam0, bool bParam1)
{
	Var0 = { func_841(iParam0, 0, 0) };
	return func_842(iParam0, &Var0, 0, bParam1);
}

int func_1009(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		default:
			return 0;
	}
	return RDR_LOCAL_LOAD_S;
}

int func_1010(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return 1937393363;
	}
	else if (bParam1)
	{
		return -1850666435;
	}
	return 1551239286;
}

void func_1011(var uParam0, struct<14> Param1)
{
	if (!func_1137(uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224866)
	{
		if (func_1156(Global_1224866->f_1[iVar0], uParam0))
		{
			if (Global_1224866->f_1[iVar0]->f_6 == 1)
			{
				Global_1224866->f_1[iVar0]->f_7 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_1012(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return 15;
	}
	return &(uParam2->f_327[iVar0]);
}

int func_1013(var uParam0, var uParam1, int iParam2, int iParam3)
{
	bVar0 = func_88(iParam3);
	iVar1 = func_810(uParam0);
	if (bVar0 == 1)
	{
		return 14;
	}
	else if (iVar1 == 1 || &uParam1->f_532[iParam3] == 1)
	{
		return 12;
	}
	else if (func_1004(iParam2))
	{
		return 13;
	}
	return 12;
}

int func_1014(int iParam0)
{
	if (func_1157())
	{
		return 1;
	}
	if (!func_391(func_1158(iParam0), 0, 255, 0))
	{
		return 0;
	}
	return 1;
}

void func_1015(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_26() != -1)
	{
		return;
	}
	if ((Global_36616 && func_1159(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1160(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_1161(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_1162(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1161(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_1016()
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

int func_1017(int iParam0)
{
	if (!func_418(iParam0))
	{
		return -1;
	}
	return func_1163(func_419(iParam0));
}

bool func_1018(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1019(vector3 vParam0, int iParam3)
{
	func_1164(iParam3, &vVar0, &Var3, &uVar6);
	if (func_1165(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

struct<4> func_1020(bool bParam0)
{
	return func_875(1328661203, func_1166(), -1591664384, bParam0);
}

int func_1021(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_384(iParam0, 0))
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

bool func_1022(int iParam0, bool bParam1)
{
	if (func_633(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_631(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1023(bool bParam0)
{
	iVar0 = func_609(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_875(271701509, func_1020(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_875(271701509, func_1020(bParam0), 12999093, 0);
}

bool func_1024(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_633(iParam0);
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

bool func_1025(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_609(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1026(int iParam0)
{
	if (!func_384(*iParam0, 0))
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

bool func_1027(int iParam0, var uParam1, bool bParam2)
{
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_841(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_872((386 + iVar29), 1);
		if (func_873(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_874(iParam0, &Var6, iVar5);
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

int func_1028(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_384(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_875(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_609(bParam6), &Var0, 0);
	return uVar4;
}

int func_1029(int iParam0)
{
	iVar0 = iParam0;
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

float func_1030(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1167(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1167(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1167(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_1031(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_631(18);
		case 2:
			return func_631(20);
		case 1:
			return func_631(19);
		default:
			break;
	}
	return true;
}

int func_1032(int iParam0)
{
	return func_1168(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1033(int iParam0, float fParam1, bool bParam2)
{
	if (func_26() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_631(31))
	{
		return;
	}
	iVar0 = func_1032(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1032(iParam0);
	if (func_1169(iParam0) && func_1170(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1171(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1172(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_619(func_1173(iParam0), 0);
					}
					func_1174(iParam0, iVar2, iVar3);
					func_1175(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1034(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1035(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

void func_1036(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_1037(int iParam0, int iParam1)
{
	if (func_26() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1038(int iParam0)
{
	if (func_26() != -1)
	{
		if (func_932(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_932(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1039(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_932(iParam0, 65536) && !func_932(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_932(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_932(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1040(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_1041()
{
	return Global_1905944->f_5694;
}

bool func_1042(int iParam0, var uParam1)
{
	if (!func_1176(iParam0))
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

int func_1043()
{
	return func_1177(Global_40.f_12019);
}

int func_1044()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_854(iVar1);
		if (func_168(iVar2, 1, 0) || func_1050(func_1049(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1045()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1178(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1046()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_245(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1047()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1048(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1049(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1050(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1051(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1052(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1053(int iParam0)
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
		default:
			break;
	}
	return 15;
}

char* func_1054(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

char* func_1055(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1056(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_1057(int iParam0)
{
	if (func_1179(iParam0) && func_168(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1180(iParam0) && func_1181(iParam0))
	{
		return true;
	}
	return false;
}

int func_1058(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1059(bool bParam0)
{
	if (!does_entity_exist(Global_35))
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

void func_1060(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_1061(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_1062(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_1063(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_1064(bool bParam0)
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

void func_1065(bool bParam0)
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

void func_1066(bool bParam0)
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

int func_1067(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_920(iParam0, 1)]);
}

void func_1068()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1182();
		_unlock_set_unlocked(-1526891582, true);
		func_636(-916314281);
		func_683(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_636(494733111);
		func_683(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1069(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_609(0);
	*uParam1 = { func_875(iParam0, func_834(0), iParam3, 0) };
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

bool func_1070(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1071(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1072(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1183(*iParam0);
	iVar1 = func_1184(*iParam0);
	iVar2 = func_1185(*iParam0);
	iVar3 = func_599(*iParam0);
	iVar4 = func_600(*iParam0);
	iVar5 = func_1186(*iParam0);
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
	iVar6 = func_1187(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1187(iVar1, iVar0);
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
	func_1188(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1073(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1074(int iParam0)
{
	Var0 = { func_841(iParam0, 1, 0) };
	return func_919(Var0.f_4);
}

int func_1075(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_629(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_629(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_629(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_629(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_629(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_629(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1076(int iParam0, var uParam1)
{
	iVar1 = func_920(func_1189(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_633(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_1077(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_920(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_924(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

bool func_1078(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

int func_1079(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_1080(int iParam0)
{
	return func_1190(iParam0, -1);
}

bool func_1081(int iParam0, bool bParam1)
{
	return func_1191(func_598(), iParam0, bParam1);
}

bool func_1082()
{
	if (func_883())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1083(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1192((Global_40.f_4283.f_325 + iParam0));
}

void func_1084(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1082())
	{
		func_950(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_950(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1085(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1086(int iParam0)
{
	iVar0 = func_1193(iParam0, 1);
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

void func_1087(int iParam0)
{
	iVar0 = func_1193(iParam0, 1);
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

void func_1088()
{
	func_1087(-939420910);
	func_1087(-1187950766);
	func_1087(356365161);
	func_1087(753127042);
	func_1087(-2038424081);
	func_1087(1884271742);
	func_1087(459290420);
}

void func_1089()
{
	func_1087(704802028);
	func_1087(588987611);
	func_1087(2008888900);
	func_1087(1649996811);
	func_1087(227918160);
	func_1087(168171957);
	func_1087(1193080109);
	func_1087(-491981251);
	func_1087(-639037538);
	func_1087(-618620429);
}

bool func_1090(int iParam0)
{
	iVar0 = func_1193(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_1091(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1092(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1093(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1094(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1095(int iParam0, int iParam1)
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

void func_1096()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1097(int iParam0)
{
	func_1104(iParam0, 8, 6);
}

void func_1098(int iParam0)
{
	func_1194(&(Global_1946804->f_2589), iParam0);
}

void func_1099(int iParam0, int iParam1)
{
	func_1195(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1100(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1101(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_633(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1196(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1099(iVar1, iVar3);
		}
	}
	if (func_942(-1586649372) && func_1196(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1099(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
			}
			func_1197(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1197(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1197(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1197(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1197(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1197(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1099(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1099(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_633(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1099(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1078(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_633(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1099(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_629(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1078(&(Global_1946804->f_1497.f_1[iVar1])) || func_629(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
			}
			switch (func_633(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_633(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1099(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_633(&(uParam0->f_1[iVar1])) || func_629(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1099(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1102(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1198(0);
	if (iParam2 != 0 && func_1199(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1200(iParam0, func_1095(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1103(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_26() != -1;
	iVar7 = func_1198(0);
	if (func_924(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1095(iVar0, 1);
			if (func_1201(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1201(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1077(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1202(uParam0);
				if (iVar3 > 0)
				{
					if (!func_924(524288))
					{
						func_1106(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1095(iVar0, 1);
							if (func_1201(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1201(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1077(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1099(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1109(524288);
				}
			}
		}
	}
}

void func_1104(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_920(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_920(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_920(iParam0, 1)])->f_10 && iParam1));
}

void func_1105(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1203(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_26() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1204(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1127(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1127(Global_40.f_7729);
				Global_1946804->f_1378 = func_1127(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1205(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1206(0, 1);
	}
}

void func_1106(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1107(struct<4> Param0)
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
			if (func_1207(Param0))
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
			func_1208(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1106(8);
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
			if (func_1207(Param0))
			{
				return;
			}
			func_1208(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1106(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_928(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1108(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1109(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1110(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1111(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1207(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1207(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1208(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1106(8);
}

bool func_1112()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1113(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1114()
{
	fVar0 = func_1209(13);
	iVar1 = func_1210(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1115()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1116()
{
	if (func_883())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1117()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1118()
{
	return Global_1955565->f_3;
}

void func_1119(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1211(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1120(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1211(iParam0, 2, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[2]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_DOWN");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 859817522);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_UP");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 1105014447);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), false);
	}
}

bool func_1121()
{
	return func_1209(12) <= -99f;
}

bool func_1122()
{
	return func_1209(12) >= 99f;
}

int func_1123()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_633(iVar1) == -999503751)
		{
			if (func_1212() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1124(int iParam0)
{
	if (!func_937(iParam0))
	{
		return false;
	}
	if (func_1128(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1125(int iParam0)
{
	if (!func_937(iParam0))
	{
		return false;
	}
	if (func_1128(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1126(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_937(iParam0))
	{
		return;
	}
	if (!func_1125(iParam0))
	{
		func_1129(iParam0, 2);
		if (bParam2)
		{
			if (!func_827(0, 0, 1))
			{
				func_850(1, 4);
			}
		}
		if ((!func_301() && !bParam1) && !func_827(0, 0, 1))
		{
			func_304(_create_var_string(10, "OUT_JOURN_ADD", func_1213(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1127(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_1128(int iParam0, int iParam1)
{
	if (!func_937(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_1129(int iParam0, int iParam1)
{
	if (!func_937(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1130(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
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

void func_1131(int iParam0, bool bParam1)
{
	iVar0 = func_1214(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_632(50);
			}
			else
			{
				func_632(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_632(51);
			}
			else
			{
				func_632(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1215(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_664();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_664();
			}
			break;
		case 3:
			func_632(24);
			if (bParam1)
			{
				if (!func_1215(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_664();
				}
			}
			break;
	}
}

void func_1132(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1216(0))
			{
				iVar0++;
			}
			if (func_1216(2))
			{
				iVar0++;
			}
			if (func_1216(4))
			{
				iVar0++;
			}
			if (!func_1217(16))
			{
				if (iVar0 == 1)
				{
					func_1218();
					func_619(456, 1);
					func_1219(16);
				}
			}
			if (!func_1217(32))
			{
				if (iVar0 >= 3)
				{
					func_1218();
					func_619(456, 1);
					func_1219(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1216(1))
			{
				iVar0++;
			}
			if (func_1216(3))
			{
				iVar0++;
			}
			if (func_1216(7))
			{
				iVar0++;
			}
			if (!func_1217(1))
			{
				if (iVar0 == 1)
				{
					func_1220();
					func_619(457, 1);
					func_1219(1);
				}
			}
			if (!func_1217(2))
			{
				if (iVar0 >= 3)
				{
					func_1220();
					func_619(457, 1);
					func_1219(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1216(5))
			{
				iVar0++;
			}
			if (func_1216(6))
			{
				iVar0++;
			}
			if (func_1216(8))
			{
				iVar0++;
			}
			if (!func_1217(4))
			{
				if (iVar0 == 1)
				{
					func_1221();
					func_619(455, 1);
					func_1219(4);
				}
			}
			if (!func_1217(8))
			{
				if (iVar0 >= 3)
				{
					func_1221();
					func_619(455, 1);
					func_1219(8);
				}
			}
			break;
	}
}

void func_1133(var uParam0)
{
	func_944(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_944(uParam0, 617531372);
	}
	else
	{
		func_944(uParam0, 291123060);
	}
}

void func_1134(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1137(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

bool func_1135(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1136(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_1137(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1138(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_908(iVar9);
	iVar2 = func_908(iVar10);
	iVar3 = func_908(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_908(iVar12);
	}
	iVar5 = func_909(iVar9);
	iVar6 = func_909(iVar10);
	iVar7 = func_909(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_909(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1139(int iParam0)
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

bool func_1140(int iParam0, int iParam1)
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

bool func_1141(int iParam0, int iParam1)
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

bool func_1142(int iParam0, int iParam1)
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
	if (!func_1140(iParam0, iVar0))
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

void func_1143(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_1144(int iParam0)
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_599(func_598());
	if (func_1222(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_1222(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

float func_1145(int iParam0)
{
	fVar0 = 1f;
	switch (iParam0)
	{
		case -1721991356:
		case -416908843:
			fVar0 = (fVar0 * 1.25f);
			break;
		case -1317052143:
		case -1233681761:
		case -273223690:
		case 212278652:
		case 603685163:
		case 669657108:
		case 725623432:
		case 839715153:
		case 1679686673:
		case 1974067816:
		case 2082228755:
		case 2137137442:
			fVar0 = (fVar0 * 0.5f);
			break;
	}
	return fVar0;
}

int func_1146(int iParam0)
{
	iVar0 = func_1139(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1223(iVar0);
}

int func_1147(int iParam0, int iParam1)
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
			func_1224(iVar2);
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

void func_1148()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_1149(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

int func_1150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 158537911;
		case 1:
			return -1062286052;
		case 2:
			return -785236358;
		case 3:
			return -1450728546;
		case 4:
			return -1295437670;
		case 5:
			return 1767657451;
		case 6:
			return -1222065966;
		case 7:
			return -897542141;
		case 8:
			return -1458047097;
		case 9:
			return -1713740144;
		case 10:
			return -1518011865;
		case 11:
			return -1268607968;
		case 12:
			return -1666587802;
		case 13:
			return 759956813;
		case 14:
			return -129858069;
		default:
			break;
	}
	return 0;
}

float func_1151(float fParam0)
{
	if (fParam0 == 4f)
	{
		fParam0 = 5f;
	}
	else if (fParam0 == 3f)
	{
		fParam0 = 4f;
	}
	else if (fParam0 == 2f)
	{
		fParam0 = 3f;
	}
	else if (fParam0 == 1f)
	{
		fParam0 = 2f;
	}
	else if (fParam0 == 0.5f)
	{
		fParam0 = 1f;
	}
	return fParam0;
}

bool func_1152(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((func_238(iVar0) && func_87(&(uParam2->f_327[iVar0]))) && (*uParam1)[iParam3]->f_182 >= &uParam2->f_1161[&uParam2->f_327[iVar0]])
	{
		return true;
	}
	return false;
}

int func_1153(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (_0x84848e1c0fc67dbb(&((*uParam0)[iParam1]->f_79[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1154(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (_0x84848e1c0fc67dbb(&((*uParam0)[iParam1]->f_84[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1155(int iParam0)
{
	return round(Global_1900073->f_26[iParam0]->f_1);
}

bool func_1156(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

bool func_1157()
{
	return Global_1955569->f_866;
}

int func_1158(int iParam0)
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

int func_1159(int iParam0)
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

int func_1160(int iParam0)
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

void func_1161(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1225();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1226(iParam0);
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
	if (func_631(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_58())
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
	Global_40.f_11095.f_35 = func_404(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1225();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1227(iVar1);
		func_1229(func_1228(), 0, 4000);
		func_1230(Global_40.f_11095.f_35);
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
		func_1231(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_645(func_946(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1160(14))
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
					sParam4 = func_1232(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_950(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_950(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_645(func_946(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1160(4))
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
					sParam4 = func_1232(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_950(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_950(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_946(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1233(10, 1);
	}
}

void func_1162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_1163(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

void func_1164(int iParam0, var uParam1, var uParam2, var uParam3)
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
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_1165(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

struct<4> func_1166()
{
	return Var0;
}

float func_1167(int iParam0)
{
	iVar4 = func_1029(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1168(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1234(iVar6) - func_1234(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1168(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_1169(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1170(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1171(float fParam0, float fParam1)
{
	iVar0 = func_1168(fParam0);
	fVar1 = to_float(func_1234(iVar0));
	fVar2 = to_float(func_1234(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = floor((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = floor((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_1172(int iParam0)
{
	if (func_1235(iParam0, &iVar0))
	{
		return func_1234(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1236())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1236())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1236())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_1173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_1174(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1237(iParam0));
	sVar4 = func_1239(func_1238(iVar3, iParam2));
	sVar6 = func_1240(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1241(iParam0));
	iVar8 = func_1242(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1243(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_863(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1244(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1175(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

bool func_1176(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1177(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1178(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1179(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_1180(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1181(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1245(&iVar0, 0, iVar95, &Var1) && !func_1245(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1246(iVar0, &Var1);
			if (func_384(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1182()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1247(Global_35, &uVar0);
	Var30 = { func_1020(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1248(0);
	func_1249(7);
	func_1250(-1623728698, 1, 1, 0);
	if (func_939() == 1160113249)
	{
		func_1250(-763730846, 1, 1, 1);
		func_1250(-361635024, 1, 1, 1);
	}
	func_1251(Global_35, &uVar0);
}

int func_1183(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_979(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_1184(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_1185(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_1186(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_1187(int iParam0, int iParam1)
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

void func_1188(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1252(iParam0, iParam6);
	func_1253(iParam0, iParam5);
	func_1254(iParam0, iParam4);
	func_1255(iParam0, iParam3);
	func_1256(iParam0, iParam2);
	func_1257(iParam0, iParam1);
}

int func_1189(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_919(iVar0);
}

int func_1190(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_609(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_1252(&uVar6, iVar0);
	func_1253(&uVar6, iVar1);
	func_1254(&uVar6, iVar2);
	func_1255(&uVar6, iVar3);
	func_1256(&uVar6, iVar4);
	func_1257(&uVar6, iVar5);
	return uVar6;
}

bool func_1191(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1258(iParam1) || !func_1258(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1192(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_946(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_1193(int iParam0, int iParam1)
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

void func_1194(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1259(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1259(uParam0->f_2[iVar0], 1))
				{
					func_1260(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_1195(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1261(uParam0, 1))
	{
		func_1262(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_1196(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1197(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3]->f_1 == 1216705912 || uParam0->f_1[iVar3]->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
		{
			uParam0->f_1[iVar3]->f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3]->f_1 = -1539589426;
			uParam0->f_1[iVar1]->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_1099(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1099(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1099(iVar2, iVar0);
		}
	}
}

int func_1198(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_939();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1199(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1200(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_1201(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_920(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_1202(var uParam0)
{
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1203(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_26() == -1)
	{
		func_1263(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1264(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1204(int iParam0, int iParam1)
{
	if (func_26() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1] && iParam0) != 0;
	}
	return false;
}

void func_1205(int iParam0, bool bParam1, int iParam2)
{
	func_1265(&(Global_1946804->f_1378), iParam0);
	func_1266(2, iParam0, 6);
	if (bParam1)
	{
		func_1206(0, 1);
	}
}

void func_1206(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1267(0);
	}
	if (bParam0)
	{
		func_1106(8);
		func_1106(512);
	}
	else
	{
		func_1106(8);
		func_1106(16);
	}
}

bool func_1207(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1208(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_1209(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1210(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_1211(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_383(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_383(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1212()
{
	return Global_1946804->f_1497;
}

char* func_1213(int iParam0)
{
	iVar0 = func_1127(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_394(iVar0);
}

int func_1214(int iParam0)
{
	if (func_1268(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1269(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1270(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1271(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1215(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_168(func_1272(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_1216(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_168(func_1273(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_1217(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1218()
{
	if (func_26() != -1)
	{
		return;
	}
	func_683(1654063339, 1, 752097756);
	iVar0 = func_1032(1);
	func_1174(1, iVar0, 0);
}

void func_1219(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1220()
{
	if (func_26() != -1)
	{
		return;
	}
	func_683(1623931083, 1, 752097756);
	iVar0 = func_1032(2);
	func_1174(2, iVar0, 0);
}

void func_1221()
{
	if (func_26() != -1)
	{
		return;
	}
	func_683(-1845241476, 1, 752097756);
	iVar0 = func_1032(0);
	func_1174(0, iVar0, 0);
}

bool func_1222(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_1223(int iParam0)
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

int func_1224(int iParam0)
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

int func_1225()
{
	iVar0 = func_1274();
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

int func_1226(int iParam0)
{
	if (func_26() != -1)
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
	fVar1 = func_1275(absf(fVar1) < 1f, func_1275(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_1227(int iParam0)
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

int func_1228()
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

void func_1229(int iParam0, bool bParam1, int iParam2)
{
	func_1276((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1277(iParam0);
}

void func_1230(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1278(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1231(bool bParam0)
{
	bVar3 = false;
	if (func_1279(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1280(iVar5, &iVar2, &iVar0))
			{
				if (!func_384(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1281(iVar2);
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
							if (func_385(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1225() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1225() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1282();
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

char* func_1232(int iParam0)
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

int func_1233(int iParam0, int iParam1)
{
	if (!func_1283(iParam0))
	{
		return 0;
	}
	if (!func_622())
	{
		return 0;
	}
	if (!func_1284(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, iVar1, iParam1);
	return 1;
}

int func_1234(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_1235(int iParam0, int iParam1)
{
	return false;
}

bool func_1236()
{
	return false;
}

int func_1237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_609(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_609(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_609(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1238(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_1239(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1240(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1241(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1242(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_1243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_1245(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_1285(iParam1) && !func_1286(iParam1))
	{
		iVar0 = func_1287(iParam1);
	}
	else
	{
		return false;
	}
	func_1288(uParam3);
	iVar5 = func_1289(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_1246(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1290(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1291(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1247(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_606(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1248(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_384(iVar1, 0))
		{
			func_1292(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1249(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_26() == -1)
	{
		func_1293(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_633(iVar2) != -999503751)
		{
			func_1294(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1295(iVar2, 0))
		{
			func_1296(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1250(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1297(iParam0))
	{
		return;
	}
	iVar0 = func_633(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1298(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1298(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1298(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1298(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1298(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1298(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1299(0))
	{
		func_1300(iParam0, 1);
		if (func_939() == 1160113249)
		{
			func_1300(func_1299(-2125499975), 0);
		}
		else
		{
			func_1300(func_1299(1160113249), 0);
		}
	}
	func_1301();
	if (func_1302(iVar0))
	{
		_0x766315a564594401(func_609(0), iParam0, 0);
	}
	func_1296(iParam0, bParam3);
	if (bParam2)
	{
		func_1206(0, 0);
	}
}

void func_1251(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_871(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

void func_1252(int iParam0, int iParam1)
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

void func_1253(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1254(int iParam0, int iParam1)
{
	iVar0 = func_1184(*iParam0);
	iVar1 = func_1183(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1187(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1255(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1256(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1257(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_1258(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1186(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_600(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_599(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1183(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1184(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1185(iParam0);
	if (iVar5 < 1 || iVar5 > func_1187(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1259(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1260(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1261(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1262(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1263(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1264(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1265(var uParam0, int iParam1)
{
	if (func_26() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1263(uParam0->f_1[iVar0], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1264(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1266(int iParam0, int iParam1, int iParam2)
{
	if (func_26() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1] = (Global_26796.f_26[iParam1] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1] = (Global_36638.f_45.f_350.f_26[iParam1] || iParam0);
	}
}

void func_1267(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1268(int iParam0)
{
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	if (func_629(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1269(int iParam0)
{
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	if (func_629(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1270(int iParam0)
{
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	if (func_629(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1271(int iParam0)
{
	if (!func_384(iParam0, 0))
	{
		return false;
	}
	if (func_629(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1272(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1303(iParam0);
		case 1:
			return func_1304(iParam0);
		case 2:
			return func_1305(iParam0);
		case 3:
			return func_1306(iParam0);
	}
	return 0;
}

int func_1273(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1307(iParam0);
		case 1:
			return func_1308(iParam0);
		case 2:
			return func_1309(iParam0);
		case 3:
			return func_1310(iParam0);
		case 4:
			return func_1311(iParam0);
		case 5:
			return func_1312(iParam0);
		case 6:
			return func_1313(iParam0);
		case 7:
			return func_1314(iParam0);
		case 8:
			return func_1315(iParam0);
	}
	return 0;
}

int func_1274()
{
	return Global_40.f_11095.f_35;
}

float func_1275(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1276(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1316(bParam1);
	}
}

void func_1277(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1278(int iParam0)
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

bool func_1279(int iParam0)
{
	if (!func_1042(23, &vVar0))
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

bool func_1280(int iParam0, int iParam1, int iParam2)
{
	if (!func_1042(23, &Var0))
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

int func_1281(int iParam0)
{
	return iParam0;
}

int func_1282()
{
	iVar0 = func_1225();
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

bool func_1283(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1284(int iParam0, var uParam1, var uParam2)
{
	if (!func_1283(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

bool func_1285(int iParam0)
{
	iParam0 = func_1317(iParam0);
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

bool func_1286(int iParam0)
{
	iParam0 = func_1317(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1285(iParam0))
	{
		return false;
	}
	iVar0 = func_1287(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

int func_1287(int iParam0)
{
	iParam0 = func_1317(iParam0);
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

void func_1288(var uParam0)
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

int func_1289(int iParam0)
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

void func_1290(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = _get_ped_damage(iParam0);
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

bool func_1291(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_1292(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_633(iParam0))
	{
		case -2061583405:
			bVar0 = func_1318(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1318(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1318(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1318(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1318(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1318(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1301();
	}
	if (bParam1)
	{
		func_1206(0, 0);
	}
}

void func_1293(int iParam0)
{
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
	Var2 = { func_833(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_836(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_607(iVar0);
	}
}

void func_1294(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1319(iParam2, *uParam0);
	func_1320(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1295(int iParam0, int iParam1)
{
	Var0 = { func_841(iParam0, 0, 0) };
	Var5 = { func_875(iParam0, Var0, Var0.f_4, 0) };
	if (func_1028(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_609(0), &Var5, iParam1);
	return true;
}

void func_1296(int iParam0, bool bParam1)
{
	Var0 = { func_841(iParam0, 0, 0) };
	Var5 = { func_875(iParam0, Var0, Var0.f_4, 0) };
	if (func_1028(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_609(0), &Var5, bParam1);
}

bool func_1297(int iParam0)
{
	if (func_26() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return false;
			}
		}
	}
	return true;
}

int func_1298(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1321(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1295(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_633(iParam0) != -999503751)
	{
		func_1294(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1299(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_939();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1300(int iParam0, int iParam1)
{
	Var0 = { func_841(iParam0, 0, 0) };
	Var5 = { func_875(iParam0, Var0, Var0.f_4, 0) };
	if (func_1028(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_609(0), &Var5);
	return 1;
}

void func_1301()
{
	if (func_26() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_1302(int iParam0)
{
	return func_1323(func_1322(iParam0));
}

int func_1303(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_1304(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_1305(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_1306(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1307(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_1308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_1309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_1310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_1311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_1312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_1313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_1314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_1315(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

void func_1316(bool bParam0)
{
	func_1324(bParam0);
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

int func_1317(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1318(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1321(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_633(iParam0) != -999503751)
		{
			func_1325(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_633(iParam0) != -999503751)
	{
		func_1325(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1295(iParam0, 1);
	return 1;
}

void func_1319(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1320(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1326(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_920(func_1074(iParam1), 1);
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
		func_1327(uParam0);
	}
}

bool func_1321(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_1322(int iParam0)
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

bool func_1323(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1324(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

void func_1325(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1328(iParam1);
	func_1329(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1330(&(uParam0->f_26), iVar1);
		if (func_1331(uParam0->f_26, &iVar0))
		{
			func_1332(iVar0, iVar1);
		}
	}
}

void func_1326(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1333(&(uParam0->f_3));
}

void func_1327(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1334(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_1328(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1329(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1330(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1326(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1331(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

void func_1332(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1333(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1334(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1335(func_939());
	if (*uParam0)
	{
		func_1333(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_26() != -1, uParam2);
	*uParam0 = 1;
}

int func_1335(int iParam0)
{
	if (func_26() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

