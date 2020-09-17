void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(555))
	{
		if (func_1(Local_36))
		{
			func_2(Global_1935630, 32768);
		}
		func_3(&Local_36, 1);
	}
	func_4(&uScriptParam_0, &Local_36);
	while (!func_5(&Local_36, 1))
	{
		if (func_6(&Local_36) != 10)
		{
			if ((func_6(&Local_36) == 3 || func_6(&Local_36) == 4) && (!func_7(&Local_36) || func_8(&(Local_36.f_958)) > 0))
			{
				func_9(&Local_36, func_5(&Local_36, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && func_10(&Local_36)) && func_5(&Local_36, 65536))
			{
				func_9(&Local_36, 1);
			}
		}
		if (func_6(&Local_36) >= 3 && func_6(&Local_36) <= 7)
		{
			func_11(&Local_36);
		}
		if (((((func_6(&Local_36) >= 5 && func_6(&Local_36) <= 7) && !func_5(&Local_36, 4096)) && _does_anim_scene_exist(Local_36.f_428.f_444)) && _is_anim_scene_started(Local_36.f_428.f_444, false)) && !_is_anim_scene_paused(Local_36.f_428.f_444))
		{
			MemCopy(&Var1, {func_12(Local_36)}, 4);
			func_13(Var1, &(Local_36.f_428));
			disable_control_action(0, -842734359, false);
		}
		switch (func_6(&Local_36))
		{
			case 8:
				if (func_14(&Local_36))
				{
					func_15(&Local_36);
					func_16(&Local_36);
					func_17(&Local_36, 0);
				}
				else if (!func_10(&Local_36))
				{
					if (!func_18(&(Local_36.f_2899)))
					{
						func_19(&(Local_36.f_2899), 0);
					}
					if (!func_20(&Local_36))
					{
						if (func_21(&(Local_36.f_2899)) >= 1f)
						{
							func_22(Local_36.f_2889, 2097152);
							func_23(&Local_36);
							func_24(&Local_36);
							func_17(&Local_36, 10);
						}
					}
					else
					{
						if (!func_5(&Local_36, 536870912))
						{
							pause_clock(true, 0);
							func_25(&Local_36, 536870912);
						}
						func_26(&(Local_36.f_2899));
					}
				}
				break;
			case 0:
				if (func_10(&Local_36))
				{
					func_16(&Local_36);
				}
				if (!func_10(&Local_36) || func_5(&Local_36, 65536))
				{
					if (func_27(&Local_36))
					{
						func_17(&Local_36, 1);
					}
				}
				break;
			case 1:
				if (func_10(&Local_36))
				{
					func_16(&Local_36);
				}
				if (func_28(&Local_36))
				{
					func_17(&Local_36, 2);
				}
				break;
			case 2:
				if (func_10(&Local_36))
				{
					func_16(&Local_36);
				}
				if (func_29(&Local_36))
				{
					if (!func_7(&Local_36) || func_10(&Local_36))
					{
						if (!func_30(Local_36.f_2889))
						{
							Local_36.f_2889 = func_32(func_31(Local_36));
						}
						func_22(Local_36.f_2889, 4);
						func_25(&Local_36, 8192);
					}
					if (func_10(&Local_36))
					{
						func_33(&Local_36);
						func_17(&Local_36, 9);
					}
					else
					{
						func_17(&Local_36, 3);
					}
				}
				break;
			case 9:
				if (func_16(&Local_36))
				{
					func_34(&Local_36);
					func_15(&Local_36);
					func_35(&Local_36);
					if (!func_5(&Local_36, 256))
					{
						func_36(&Local_36);
						func_37(Local_36);
						func_38(&Local_36);
						func_17(&Local_36, 7);
					}
					else
					{
						func_17(&Local_36, 5);
					}
				}
				break;
			case 3:
				if (!func_5(&Local_36, 8192))
				{
					if (func_8(&(Local_36.f_958)) == 3)
					{
						func_22(Local_36.f_2889, 4);
						func_25(&Local_36, 8192);
					}
				}
				func_39(&Local_36);
				if (func_40(func_32((*Global_1835011)[Local_36]->f_1), 512))
				{
				}
				else if (func_41(&Local_36) || func_42(&Local_36, 32768))
				{
					func_34(&Local_36);
					func_15(&Local_36);
					func_17(&Local_36, 4);
					func_19(&(Local_36.f_2890), 0);
				}
				else if (func_10(&Local_36) && !func_1(Local_36))
				{
					if (!func_18(&(Local_36.f_2899)))
					{
						func_19(&(Local_36.f_2899), 0);
					}
					if (!func_20(&Local_36))
					{
						if (func_21(&(Local_36.f_2899)) >= 1f)
						{
							func_22(Local_36.f_2889, 2097152);
							func_23(&Local_36);
							func_24(&Local_36);
							func_17(&Local_36, 10);
						}
					}
					else
					{
						if (!func_5(&Local_36, 536870912))
						{
							pause_clock(true, 0);
							func_25(&Local_36, 536870912);
						}
						func_26(&(Local_36.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_36);
				_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
				if (func_44(&Local_36) || (func_42(&Local_36, 32768) && !func_5(&Local_36, 268435456)))
				{
					func_35(&Local_36);
					if (!func_5(&Local_36, 256))
					{
						func_36(&Local_36);
						func_38(&Local_36);
						if (!func_45(&Global_1935630, 524288) || func_42(&Local_36, 524288))
						{
							func_37(Local_36);
							func_17(&Local_36, 7);
						}
						else
						{
							func_17(&Local_36, 6);
						}
					}
					else
					{
						func_37(Local_36);
						func_17(&Local_36, 5);
					}
				}
				break;
			case 5:
				func_46(&Local_36);
				func_47(&Local_36);
				if (func_48(&(Local_36.f_2884)) >= func_49(&Local_36))
				{
					func_36(&Local_36);
					func_38(&Local_36);
					func_26(&(Local_36.f_2884));
					if (!func_42(&Local_36, 524288))
					{
						func_37(Local_36);
						func_17(&Local_36, 7);
					}
					else
					{
						func_17(&Local_36, 6);
					}
				}
				break;
			case 6:
				if (!func_18(&(Local_36.f_2906)))
				{
					func_19(&(Local_36.f_2906), 0);
				}
				if ((func_50(&(Local_36.f_428)) == 4 && _does_anim_scene_exist(Local_36.f_428.f_444)) && _is_anim_scene_paused(Local_36.f_428.f_444))
				{
					func_37(Local_36);
					func_17(&Local_36, 7);
				}
				else if (func_48(&(Local_36.f_2906)) >= 5f)
				{
					func_37(Local_36);
					func_17(&Local_36, 7);
				}
				break;
			case 7:
				func_51(&Local_36);
				if (func_52(&Local_36))
				{
					func_17(&Local_36, 10);
				}
				break;
			case 10:
				if (func_3(&Local_36, 0))
				{
					func_25(&Local_36, 1);
				}
				break;
		}
		wait(0);
	}
	terminate_this_thread();
}

bool func_1(int iParam0)
{
	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return false;
	}
	return func_40(iVar0, 1024);
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_3(int iParam0, bool bParam1)
{
	iParam0->f_2902 = bParam1;
	if (!func_53(iParam0) && !bParam1)
	{
		return false;
	}
	func_54(iParam0);
	func_55(iParam0);
	func_56(iParam0);
	func_57(iParam0);
	func_58(iParam0);
	func_59(*iParam0);
	func_60(*iParam0);
	if (is_itemset_valid(iParam0->f_5))
	{
		destroy_itemset(iParam0->f_5);
	}
	if (!Global_1935630->f_12)
	{
		task_clear_look_at(Global_35);
	}
	if (func_5(iParam0, 1024))
	{
		func_61(1);
		func_2(Global_1935630, 32768);
	}
	else
	{
		func_62();
	}
	if (bParam1)
	{
		if (func_63(&(iParam0->f_958), 33554436) && !is_player_control_on(get_player_index()))
		{
			set_player_control(get_player_index(), true, 0, false);
		}
		func_64(&(iParam0->f_958));
	}
	func_65(iParam0, 0);
	if (func_5(iParam0, 536870912))
	{
		pause_clock(false, 0);
		func_66(iParam0, 536870912);
	}
	if (bParam1)
	{
		func_67(1, 0, 0);
	}
	if (func_5(iParam0, -2147483648))
	{
		func_68();
	}
	terminate_this_thread();
	return true;
}

int func_4(var uParam0, int iParam1)
{
	*iParam1 = *uParam0;
	_0xed9582b3da8f02b4(10);
	iParam1->f_2889 = func_32(func_31(*uParam0));
	func_69(iParam1);
	if (func_10(iParam1))
	{
		func_70(&(iParam1->f_428));
		func_71(iParam1);
		func_25(iParam1, 16777216);
		func_17(iParam1, 8);
	}
	else
	{
		func_17(iParam1, 0);
	}
	if (!func_5(iParam1, 1073741824))
	{
		func_72(*iParam1);
		func_73(*iParam1);
	}
	vVar0 = { func_12(*iParam1) };
	if (!is_string_null_or_empty(&vVar0))
	{
		func_25(iParam1, 134217728);
	}
	func_19(&(iParam1->f_2896), 0);
	return 1;
}

bool func_5(int iParam0, int iParam1)
{
	return (iParam0->f_2 && iParam1) != 0;
}

int func_6(int iParam0)
{
	return iParam0->f_1;
}

bool func_7(int iParam0)
{
	if (func_5(iParam0, 16))
	{
		return false;
	}
	return func_5(iParam0, 524288);
}

int func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(int iParam0, bool bParam1)
{
	if (!is_screen_faded_out() && !func_5(iParam0, 4))
	{
		if (func_48(&(iParam0->f_2896)) <= 0.5f)
		{
			return;
		}
		func_26(&(iParam0->f_2896));
		if ((func_74(0, 0, 1) && !func_5(iParam0, 65536)) && !func_40(iParam0->f_2889, 1024))
		{
			return;
		}
	}
	if (func_5(iParam0, 128))
	{
		return;
	}
	if (func_5(iParam0, 134217728))
	{
		if (!func_5(iParam0, 16777216))
		{
			func_75(iParam0, 16);
			if (func_7(iParam0))
			{
				func_76(iParam0);
			}
			func_25(iParam0, 16777216);
		}
		cVar0 = { func_12(*iParam0) };
		if (func_77(&(iParam0->f_428), &cVar0, bParam1, 0))
		{
			if (!func_40(iParam0->f_2889, 128))
			{
				func_22(iParam0->f_2889, 128);
			}
		}
		else if (func_40(iParam0->f_2889, 128))
		{
			func_78(iParam0->f_2889, 128);
		}
	}
}

bool func_10(int iParam0)
{
	if (func_5(iParam0, 65536))
	{
		return true;
	}
	if (!func_79((*Global_1835011)[*iParam0]))
	{
		return true;
	}
	return false;
}

void func_11(int iParam0)
{
	if (!func_18(&(iParam0->f_2893)))
	{
		func_19(&(iParam0->f_2893), 0);
	}
	if (func_48(&(iParam0->f_2893)) >= 1f)
	{
		if (_does_volume_exist(iParam0->f_425))
		{
			iVar0 = func_80(7);
			if (!is_entity_dead(iVar0))
			{
				if (!func_5(iParam0, 512))
				{
					_0xe9b168527b337bf0(iVar0, iParam0->f_425);
					func_25(iParam0, 512);
				}
			}
			else if (func_5(iParam0, 512))
			{
				func_66(iParam0, 512);
			}
		}
		func_26(&(iParam0->f_2893));
	}
}

Vector3 func_12(int iParam0)
{
	if (!func_81(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	func_82(uParam4, &uParam0);
	if (func_83(uParam4, 2) && !func_83(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_50(uParam4) != 1)
	{
		func_84(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_50(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_444) && _is_anim_scene_loaded(uParam4->f_444, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_444, false))
				{
					func_85(uParam4, &uParam0);
				}
				else if (_0xef324e9550a394d5(uParam4->f_444))
				{
					func_86(uParam4, 4);
					return 0;
				}
				else if (func_87(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_437);
				}
				func_86(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_444))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (!is_string_null_or_empty(&(uParam4->f_446)) && func_83(uParam4, 134217728))
				{
				}
				else
				{
					func_70(uParam4);
				}
				func_26(&(uParam4->f_1));
				func_86(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_88(uParam4);
				if (!func_18(&(uParam4->f_1)))
				{
					func_19(&(uParam4->f_1), 0);
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_444))
					{
						_delete_anim_scene(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_444) || !_is_anim_scene_loaded(uParam4->f_444, true, false))
			{
				if (func_77(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_444, true, false))
					{
						func_86(uParam4, 4);
					}
					else if (!func_90(func_89(uParam4)) && !func_91(Global_35, func_89(uParam4), 100f, 1, 1))
					{
						func_92(1);
						start_player_teleport(get_player_index(), func_89(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_444))
					{
						_delete_anim_scene(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (!get_is_loading_screen_active())
				{
					_0xa565fac215cbc77d();
					func_93(1, 0);
					func_85(uParam4, &uParam0);
					func_86(uParam4, 3);
				}
				else
				{
					shutdown_loading_screen();
				}
			}
			else if (func_48(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_444))
				{
					_delete_anim_scene(uParam4->f_444);
				}
				func_86(uParam4, 4);
			}
			break;
		case 3:
			func_94(uParam4);
			if (func_87(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_437);
			}
			if ((_does_anim_scene_exist(uParam4->f_444) && _is_anim_scene_started(uParam4->f_444, false)) && (_0xef324e9550a394d5(uParam4->f_444) || func_83(uParam4, 512)))
			{
				if (!func_83(uParam4, 1024) && func_95(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_83(uParam4, 512))
				{
					func_26(&(uParam4->f_1));
					func_96(uParam4, 512);
					func_86(uParam4, 4);
				}
				else if (func_83(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_84(uParam4);
			}
			if (func_83(uParam4, 524288))
			{
				if (IntToFloat(absi((func_97(uParam4) - func_98(uParam4)))) <= 2f)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (_does_anim_scene_exist(uParam4->f_444))
				{
					if (_0xef324e9550a394d5(uParam4->f_444))
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
				if (func_99(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_98(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_100(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_444))
				{
				}
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			else
			{
				if (func_83(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_444) && !_0xef324e9550a394d5(uParam4->f_444))
						{
							_delete_anim_scene_2(uParam4->f_444);
						}
						func_26(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_96(uParam4, 512);
						func_103(uParam4, 67108864, 1);
						func_86(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_83(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_444)) && is_screen_faded_out()) && func_98(uParam4) <= 5000) && func_98(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_83(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_104(&(uParam4->f_501), 0);
					func_96(uParam4, 536870912);
				}
				if (func_98(uParam4) >= 5000 && func_98(uParam4) <= (func_97(uParam4) - 5000))
				{
					func_105();
				}
			}
			break;
		case 6:
			if (func_100(uParam4))
			{
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_83(uParam4, 524288))
			{
				_0x1b70811d3bf75db9(1, 1);
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1000);
					if (_is_anim_scene_paused(uParam4->f_444))
					{
						func_96(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (_does_anim_scene_exist(uParam4->f_444))
				{
					if (!_is_anim_scene_paused(uParam4->f_444))
					{
						set_anim_scene_paused(uParam4->f_444, true);
						if (_0xc17f69e1418cd11f(9) != 0)
						{
							_0xdd1232b332cbb9e7(9, 1, 0);
						}
						return 0;
					}
					else if (_0x4cdffe3189ebdbd0(uParam4->f_444))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_87(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_438);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_444) && _is_anim_scene_paused(uParam4->f_444))
						{
							set_anim_scene_paused(uParam4->f_444, false);
						}
						func_86(uParam4, 3);
					}
					else if (func_48(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_444) && _is_anim_scene_paused(uParam4->f_444))
						{
							set_anim_scene_paused(uParam4->f_444, false);
						}
						func_86(uParam4, 3);
					}
				}
				if (func_50(uParam4) == 3)
				{
					if (func_83(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_86(uParam4, 4);
			break;
	}
	return 0;
}

bool func_14(int iParam0)
{
	func_25(iParam0, 262144);
	if (func_106(iParam0))
	{
		func_25(iParam0, 65536);
		return true;
	}
	return false;
}

void func_15(int iParam0)
{
	if (!func_5(iParam0, 131072))
	{
		if (!func_5(iParam0, 2048) && !func_7(iParam0))
		{
			set_player_control(player_id(), false, 312, false);
			_hide_hud_component(-1679307491);
		}
		func_107(*iParam0);
		func_25(iParam0, 1024);
		func_108(0);
		func_109(Global_1935630, 32768);
		func_110(2);
		func_111(iParam0);
		func_112(1);
		func_59(*iParam0);
		func_60(*iParam0);
		func_33(iParam0);
		if (!func_5(iParam0, -2147483648))
		{
			func_68();
		}
		func_58(iParam0);
		func_25(iParam0, 131072);
	}
}

bool func_16(int iParam0)
{
	return true;
}

void func_17(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_18(float fParam0)
{
	return func_113(*fParam0, 1);
}

void func_19(float fParam0, bool bParam1)
{
	if (bParam1 || !func_18(fParam0))
	{
		func_26(fParam0);
	}
}

bool func_20(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_114(iVar1) && func_115(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			if (does_entity_exist(iVar2))
			{
				if (func_116(iVar1))
				{
					if (func_117(iVar2, 1116471296, -1082130432, -1082130432, -1082130432))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

float func_21(var uParam0)
{
	if (!func_18(uParam0))
	{
		return 0f;
	}
	if (func_118(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_119() - uParam0->f_1);
}

void func_22(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

void func_23(int iParam0)
{
	func_120(&(iParam0->f_428));
}

void func_24(int iParam0)
{
	func_121(&(iParam0->f_958), iParam0->f_958);
}

void func_25(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 || iParam1);
	if (iParam1 == 65536)
	{
		func_109(Global_1935630, 32768);
		func_107(*iParam0);
	}
}

void func_26(float fParam0)
{
	func_122(fParam0, 0f);
}

bool func_27(int iParam0)
{
	if (!is_itemset_valid(iParam0->f_5))
	{
		iParam0->f_5 = create_itemset(true);
	}
	if (!is_itemset_valid(iParam0->f_6))
	{
		iParam0->f_6 = create_itemset(true);
	}
	if (!is_itemset_valid(iParam0->f_7))
	{
		iParam0->f_7 = create_itemset(true);
	}
	func_123(*iParam0, iParam0->f_5, iParam0->f_6, iParam0->f_7);
	if (func_90(func_124(iParam0)))
	{
		vVar0 = { func_12(*iParam0) };
		if (!is_string_null_or_empty(&vVar0))
		{
			StringCopy(&(iParam0->f_428.f_440), "cutscene@", 32);
			StringConCat(&(iParam0->f_428.f_440), &vVar0, 32);
			vVar3 = { func_125(&(iParam0->f_428)) };
			if (!func_90(vVar3))
			{
				if (get_distance_between_coords(vVar3, func_126(*iParam0), true) >= 10f)
				{
					func_127(iParam0, func_126(*iParam0));
				}
				else
				{
					func_127(iParam0, vVar3);
				}
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_128(iParam0))
	{
		return false;
	}
	iParam0->f_55.f_1 = 67108863;
	iParam0->f_55 = 2;
	iParam0->f_55 = 1;
	func_71(iParam0);
	func_129(iParam0);
	func_130(iParam0);
	func_131(iParam0, Global_35, 0, 0, 0, 1);
	func_132(iParam0);
	func_133(iParam0);
	return true;
}

bool func_28(int iParam0)
{
	iVar0 = 1;
	if (!func_134(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_135(iParam0, 0))
	{
		iVar0 = 0;
	}
	if (!func_5(iParam0, 1073741824) && !func_136(*iParam0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_29(int iParam0)
{
	if (!does_entity_exist(iLocal_23))
	{
		iLocal_23 = func_137(iParam0);
		if (!is_entity_dead(iLocal_23))
		{
			func_139(iLocal_23, func_138(0, 0), 2, 1073741824);
			if (!has_ped_got_weapon(iLocal_23, 36703333, 0, false))
			{
				func_140(iLocal_23, 36703333, 50, 1, 0, 1056964608, 1065353216, 0);
			}
			else
			{
				set_current_ped_weapon(iLocal_23, 36703333, true, 0, false, false);
			}
			if (!has_ped_got_weapon(iLocal_23, 13903789, 0, false))
			{
				func_140(iLocal_23, 13903789, 50, 9, 1, 1056964608, 1065353216, 0);
			}
			else
			{
				set_current_ped_weapon(iLocal_23, 13903789, true, 1, false, false);
			}
			func_141(iParam0, iLocal_23, 0, 0, 0, 1, 0);
			func_142(iParam0, iLocal_23, 8);
			func_143(&(iParam0->f_428), -1536.91f, -311.86f, 141.59f);
			task_look_at_entity(iLocal_23, Global_35, -1, 0, 51, 0);
			set_blocking_of_non_temporary_events(iLocal_23, true);
			task_stand_still(iLocal_23, -1);
		}
		else
		{
			bVar0 = true;
		}
	}
	func_144(iParam0, 1, 1);
	return !bVar0;
}

bool func_30(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

int func_31(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

int func_32(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_33(int iParam0)
{
	MemCopy(&uVar0, {func_145(*iParam0)}, 3);
	request_script(&uVar0);
}

void func_34(int iParam0)
{
}

void func_35(int iParam0)
{
	func_56(iParam0);
	func_2(Global_1935630, 32768);
	func_146(iParam0);
	func_26(&(iParam0->f_2884));
	if (func_147())
	{
		func_148();
	}
	if (func_42(iParam0, 524288))
	{
		func_109(Global_1935630, 524288);
	}
	else if (!func_42(iParam0, 32768))
	{
		Global_43805 = iParam0->f_958.f_1684;
	}
	func_149(&(iParam0->f_428), &(iParam0->f_958));
	if (func_5(iParam0, 262144))
	{
		if (func_150(&((*Global_1835011)[*iParam0]->f_29), 4))
		{
			set_clock_time(func_151(4), 0, 0);
		}
		else if (func_150(&((*Global_1835011)[*iParam0]->f_29), 2))
		{
			set_clock_time(func_151(2), 0, 0);
		}
		else if (func_150(&((*Global_1835011)[*iParam0]->f_29), 8))
		{
			set_clock_time(func_151(8), 0, 0);
		}
		else if (func_150(&((*Global_1835011)[*iParam0]->f_29), 16))
		{
			set_clock_time(func_151(16), 0, 0);
		}
		else if (func_150(&((*Global_1835011)[*iParam0]->f_29), 32))
		{
			set_clock_time(func_151(32), 0, 0);
		}
	}
}

void func_36(int iParam0)
{
	if (func_116(6))
	{
		func_152(iParam0, 6, iLocal_23, 0, 0, 1, 0);
	}
	if (!is_entity_dead(iLocal_24))
	{
		func_139(iLocal_24, func_138(0, 1), 2, 1073741824);
		set_blocking_of_non_temporary_events(iLocal_24, true);
		task_stand_still(iLocal_24, -1);
	}
	func_153(iLocal_24, 6, 1, 0, 0);
	if (!is_entity_dead(iLocal_25))
	{
		func_139(iLocal_25, func_138(0, 2), 2, 1073741824);
		set_blocking_of_non_temporary_events(iLocal_25, true);
		task_stand_still(iLocal_25, -1);
	}
	func_154(iLocal_25, 0);
}

void func_37(int iParam0)
{
	if (func_155(iParam0))
	{
		return;
	}
	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, 2048);
	(*Global_1835011)[iParam0]->f_71 = 0;
	uVar1 = func_156(iParam0);
	if (!is_string_null_or_empty(&uVar1))
	{
		set_mission_name(true, &uVar1);
		_0x1096603b519c905f(&uVar1);
	}
}

void func_38(int iParam0)
{
	vVar0 = { func_12(*iParam0) };
	if (!_does_anim_scene_exist(iParam0->f_428.f_444))
	{
	}
	else if (!_is_anim_scene_loaded(iParam0->f_428.f_444, true, false))
	{
		Global_43800 = iParam0->f_428.f_444;
	}
	else
	{
		if (func_63(&(iParam0->f_958), 8))
		{
			if (!func_63(&(iParam0->f_958), 131072))
			{
				if (!func_63(&(iParam0->f_958), 32768))
				{
					if (!func_5(iParam0, 8))
					{
						func_157(&(iParam0->f_428), &(iParam0->f_958));
					}
				}
			}
		}
		MemCopy(&Var3, {vVar0}, 4);
		func_13(Var3, &(iParam0->f_428));
	}
}

int func_39(int iParam0)
{
	func_158(iParam0, 0);
	func_144(iParam0, 1, 1);
	func_159(&uLocal_16, -1531.248f, -308.6208f, 141.7097f, 4, -1082130432);
	if (!is_entity_dead(Global_35))
	{
		if (func_91(Global_35, func_160(0, 0), 30f, 1, 1))
		{
			if (func_161(Global_35, func_160(0, 0), &uLocal_29, 30f, 20f, 15f, 10f, 0.5f, 1, 0, 1, 1, 1))
			{
				bLocal_26 = true;
			}
			if (bLocal_26)
			{
				if (!bLocal_27)
				{
					if (!func_91(Global_35, func_160(0, 0), 10f, 1, 1))
					{
						if (func_48(&uLocal_32) >= 1f)
						{
							bLocal_26 = false;
							bLocal_27 = true;
							bLocal_28 = false;
						}
					}
					else
					{
						func_26(&uLocal_32);
					}
				}
			}
		}
	}
	if (!is_entity_dead(iLocal_25))
	{
		if (bLocal_27)
		{
			if (!bLocal_28)
			{
				if (!is_ped_on_mount(iLocal_25) && !_is_ped_getting_into_a_mount_seat(iLocal_25, true))
				{
					bLocal_28 = true;
					set_blocking_of_non_temporary_events(iLocal_25, false);
					open_sequence_task(&iLocal_22);
					close_sequence_task(iLocal_22);
					task_perform_sequence(iLocal_25, iLocal_22);
					clear_sequence_task(&iLocal_22);
					func_26(&uLocal_32);
				}
			}
			else if (func_48(&uLocal_32) >= 10f)
			{
				bLocal_27 = false;
			}
			else if (get_script_task_status(iLocal_25, 242628503, true) == 1)
			{
				bLocal_27 = false;
			}
			else if (get_script_task_status(iLocal_25, 242628503, true) == 8)
			{
				bLocal_27 = false;
			}
		}
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)
{
	return (func_30(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

bool func_41(int iParam0)
{
	if (func_7(iParam0))
	{
		func_163(&(iParam0->f_958), func_162(iParam0), iParam0->f_958, 0);
		return func_164(iParam0);
	}
	if (func_5(iParam0, 64))
	{
		return false;
	}
	return func_165(iParam0);
}

bool func_42(int iParam0, int iParam1)
{
	return func_63(&(iParam0->f_958), iParam1);
}

int func_43(int iParam0)
{
	func_158(iParam0, 1);
	func_144(iParam0, 1, 1);
	if (_0x74f1d22efa71fab8())
	{
	}
	return 0;
}

bool func_44(int iParam0)
{
	if (func_7(iParam0))
	{
		if (func_163(&(iParam0->f_958), func_162(iParam0), iParam0->f_958, 0))
		{
			if (func_42(iParam0, 524288))
			{
				func_166(&(iParam0->f_428), "multistart");
			}
			return true;
		}
	}
	return false;
}

bool func_45(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_46(int iParam0)
{
}

void func_47(int iParam0)
{
	if ((!func_5(iParam0, 33554432) && !func_42(iParam0, 524288)) && !func_42(iParam0, 32768))
	{
		if (func_167(&(iParam0->f_958)))
		{
			func_168(&(iParam0->f_958), 0, 0);
			func_25(iParam0, 33554432);
		}
	}
}

float func_48(float fParam0)
{
	if (!func_18(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_118(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_119() - fParam0->f_1);
}

float func_49(int iParam0)
{
	return iParam0->f_2887;
}

int func_50(var uParam0)
{
	return *uParam0;
}

void func_51(int iParam0)
{
}

bool func_52(int iParam0)
{
	vVar0 = { func_12(*iParam0) };
	if (is_string_null_or_empty(&vVar0))
	{
		if (func_155(*iParam0))
		{
			return true;
		}
		return false;
	}
	bVar3 = func_169();
	if (bVar3)
	{
		_uiprompt_enable_prompt_type_this_frame(6);
	}
	if (!func_5(iParam0, 32))
	{
		if (func_169())
		{
			func_25(iParam0, 32);
		}
		else if (func_48(&(iParam0->f_2884)) >= 60f)
		{
			return true;
		}
	}
	else
	{
		if (!func_169())
		{
			return true;
		}
		if (!func_5(iParam0, 4096))
		{
			if (func_155(*iParam0))
			{
				func_25(iParam0, 4096);
			}
			else
			{
				func_111(iParam0);
			}
		}
		else if (!func_155(*iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_53(int iParam0)
{
	_0x74c2b3dc0b294102(Local_14);
	func_170();
	if (!func_5(iParam0, 1024))
	{
		func_152(iParam0, 6, iLocal_23, 1, 0, 1, 0);
	}
	func_171(func_160(0, 3), func_160(0, 4), 0);
	return true;
}

void func_54(int iParam0)
{
	if (_does_volume_exist(iParam0->f_426))
	{
		func_172(iParam0->f_426);
	}
}

void func_55(int iParam0)
{
	if (_does_volume_exist(iParam0->f_425))
	{
		func_173(&(iParam0->f_427), iParam0->f_425, 0);
		if (_0xde0ea444735c1368(iParam0->f_425))
		{
			_0x2c87c3e1c7b96ee2(iParam0->f_425);
		}
		func_66(iParam0, 512);
		func_60(*iParam0);
		_delete_volume(iParam0->f_425);
	}
}

void func_56(int iParam0)
{
	bVar0 = func_40(iParam0->f_2889, 2097152);
	bVar1 = func_5(iParam0, 1024);
	iVar2 = 0;
	while (iVar2 < 27)
	{
		iVar3 = iVar2;
		if (!func_114(iVar3))
		{
		}
		else if (!func_115(iVar3))
		{
		}
		else if (!func_116(iVar3))
		{
		}
		else
		{
			iVar4 = Global_1360165[iVar2];
			if (!does_entity_exist(iVar4))
			{
			}
			else
			{
				func_152(iParam0, iVar3, iVar4, 0, bVar0, !bVar1, 0);
			}
		}
		iVar2++;
	}
}

void func_57(int iParam0)
{
	func_174(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

int func_58(int iParam0)
{
	if (!is_itemset_valid(iParam0->f_5))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(iParam0->f_5))
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, iParam0->f_5));
		if (is_entity_an_object(iVar1))
		{
			iVar2 = get_object_index_from_entity_index(iVar1);
			_0xa86b0ee9b39d15d6(&iVar2);
		}
		else if (is_entity_a_ped(iVar1))
		{
			_0xbc781d24aa11f179(get_ped_index_from_entity_index(iVar1));
		}
		iVar0++;
	}
	destroy_itemset(iParam0->f_5);
	return 1;
}

void func_59(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	(*Global_1835011)[iParam0]->f_58 = 0;
	(*Global_1835011)[iParam0]->f_59 = 0;
	(*Global_1835011)[iParam0]->f_60 = 0;
}

void func_60(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	(*Global_1835011)[iParam0]->f_61 = 0;
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_175(bParam0);
}

void func_62()
{
	if (!func_176())
	{
		return;
	}
	func_177();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (!func_114(iVar1))
		{
		}
		else
		{
			iVar2 = Global_1360165[iVar0];
			if (!does_entity_exist(iVar2))
			{
			}
			else if (func_178(iVar2))
			{
				set_ped_config_flag(iVar2, 230, true);
			}
		}
		iVar0++;
	}
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0->f_1664 && iParam1) != 0;
}

void func_64(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!is_entity_dead(uParam0->f_3[iVar0]->f_2))
		{
			if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && is_ped_human(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2)))
			{
				task_clear_look_at(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2));
				if (func_63(uParam0, 524288) && is_screen_faded_out())
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2), false, true);
				}
				if (get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2) != Global_35)
				{
					set_ped_can_be_targetted(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2), true);
				}
			}
		}
		iVar0++;
	}
}

void func_65(int iParam0, bool bParam1)
{
	if (!bParam1 && !is_itemset_valid(iParam0->f_2888))
	{
		return;
	}
	if (!is_itemset_valid(iParam0->f_2888))
	{
		iParam0->f_2888 = create_itemset(true);
	}
	_0x522f74636df10201(get_player_index(), iParam0->f_2888);
	if (get_itemset_size(iParam0->f_2888) <= 0)
	{
		_0xda1a9adc4e3d4b16(iParam0->f_2888, 1, 0);
	}
	if (get_itemset_size(iParam0->f_2888) <= 0)
	{
		destroy_itemset(iParam0->f_2888);
		return;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(iParam0->f_2888))
	{
		iVar1 = get_ped_index_from_entity_index(_get_entity_from_item(get_indexed_item_in_itemset(iVar0, iParam0->f_2888)));
		if (!is_entity_dead(iVar1))
		{
			set_ped_config_flag(iVar1, 148, bParam1);
		}
		iVar0++;
	}
	destroy_itemset(iParam0->f_2888);
}

void func_66(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 - (iParam0->f_2 && iParam1));
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_68()
{
	if (func_179(&Global_1898437) && func_180(&Global_1898437) == 1)
	{
		iVar0 = func_181(&Global_1898437);
		if ((func_81(iVar0) && does_script_exist(&((*Global_1835011)[iVar0]->f_22))) && _get_number_of_references_of_script_with_name_hash(get_hash_key(&((*Global_1835011)[iVar0]->f_22))) > 0)
		{
			force_cleanup_for_all_threads_with_this_name(&((*Global_1835011)[iVar0]->f_22), 1);
		}
	}
}

int func_69(int iParam0)
{
	return 1;
}

void func_70(var uParam0)
{
	Var0 = { func_182(uParam0) };
	func_166(uParam0, &Var0);
}

void func_71(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_425))
	{
		StringCopy(&cVar0, func_183(), 64);
		StringConCat(&cVar0, "_NO_AMBIENT_CONTENT", 64);
		iParam0->f_425 = _create_volume_box_with_custom_name(func_184(*iParam0), 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_185(iParam0, iParam0->f_425, 0);
		func_186(*iParam0, iParam0->f_425);
	}
	if (!_does_volume_exist(iParam0->f_426))
	{
		StringCopy(&cVar8, func_183(), 64);
		StringConCat(&cVar8, "_NO_SCRIPT_CONTENT", 64);
		iParam0->f_426 = _create_volume_box_with_custom_name(func_184(*iParam0), 0f, 0f, 0f, 25f, 25f, 25f, &cVar8);
		func_187(iParam0, iParam0->f_426);
	}
}

void func_72(int iParam0)
{
	Var0 = { func_188(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_73(int iParam0)
{
	Var0 = { func_189(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
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
		if (func_190())
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
		iVar0 = func_181(&(Global_1898164->f_1[0]));
		if (func_191(iVar0) && func_192((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_179(&(Global_1898164->f_1[0])))
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

void func_75(int iParam0, int iParam1)
{
	func_96(&(iParam0->f_428), iParam1);
}

void func_76(int iParam0)
{
	func_193(&(iParam0->f_428), &(iParam0->f_958));
}

bool func_77(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_511++;
		if (uParam0->f_511 < 10)
		{
			return (func_83(uParam0, 256) && !func_83(uParam0, 4194304));
		}
		uParam0->f_511 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_82(uParam0, sParam1);
	if (!func_83(uParam0, 64))
	{
		if (!func_90(func_89(uParam0)))
		{
			func_96(uParam0, 64);
		}
		else
		{
			vVar0 = { func_125(uParam0) };
			if (!func_90(vVar0))
			{
				func_194(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_195(Global_35, func_89(uParam0), 1);
	if (func_83(uParam0, 128) || func_83(uParam0, 256))
	{
		if ((fVar3 >= func_196(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_197();
				uParam0->f_529 = 0;
			}
			func_198(uParam0);
			if (_does_anim_scene_exist(uParam0->f_444))
			{
				_delete_anim_scene(uParam0->f_444);
			}
			func_199(uParam0);
			func_103(uParam0, 128, 1);
			func_103(uParam0, 256, 1);
			func_103(uParam0, 4096, 1);
			func_103(uParam0, 32768, 1);
			func_103(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_200(uParam0) || bParam2)
	{
		if (!func_83(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_444))
			{
				if (func_200(uParam0) >= func_196(uParam0))
				{
				}
				Var4 = { func_201(uParam0) };
				if (is_string_null_or_empty(&Var4))
				{
					func_202(uParam0);
				}
				Var4 = { func_201(uParam0) };
				iVar12 = 256;
				if (!func_83(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_444 = _create_anim_scene(&(uParam0->f_440), iVar12, &Var4, false, true);
				func_203(uParam0, 0, 0, 0, 0);
				func_96(uParam0, 128);
			}
		}
	}
	if (func_83(uParam0, 128))
	{
		if (func_83(uParam0, 256) && !func_83(uParam0, 4194304))
		{
			return true;
		}
		func_88(uParam0);
		if (!uParam0->f_529)
		{
			if (func_204())
			{
				func_205(4096);
				uParam0->f_529 = 1;
			}
		}
		if (_is_anim_scene_loaded(uParam0->f_444, true, false))
		{
			bVar13 = true;
			Var15 = { func_182(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!is_string_null_or_empty(uParam0->f_462[iVar14]))
				{
					if (!are_strings_equal(uParam0->f_462[iVar14], &Var15))
					{
						if (!uParam0->f_462[iVar14]->f_8)
						{
							uParam0->f_462[iVar14]->f_8 = 1;
							_0xdf7b5144e25cd3fe(uParam0->f_444, uParam0->f_462[iVar14]);
							bVar13 = false;
						}
						else if (!_0x23e33cb9f4a3f547(uParam0->f_444, uParam0->f_462[iVar14]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_83(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_444, &Var15))
				{
					if (!func_83(uParam0, 16777216))
					{
						if ((!_0x0df57f86fe71dbe5(uParam0->f_444, &Var15) && !_0x23e33cb9f4a3f547(uParam0->f_444, &Var15)) && !_0x1f0e401031e20146(uParam0->f_444, &Var15))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_444, &Var15);
						}
						func_96(uParam0, 16777216);
					}
					if (!_0x23e33cb9f4a3f547(uParam0->f_444, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_96(uParam0, 256);
			func_103(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_78(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 - ((*Global_1898346)[iParam0]->f_1 && iParam1));
}

bool func_79(var uParam0)
{
	if (func_150(&(uParam0->f_29), 62))
	{
		switch (func_206())
		{
			case 1:
				if (!func_150(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_150(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_150(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_150(&(uParam0->f_29), 32))
				{
					if (func_150(&(uParam0->f_29), 2))
					{
						if (func_208(func_207()) < 5)
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

int func_80(int iParam0)
{
	iParam0 = func_209(iParam0);
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

bool func_81(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_82(var uParam0, char* sParam1)
{
	if (func_83(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_440), {func_210("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 4);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_440), {func_210("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_96(uParam0, 8192);
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_84(var uParam0)
{
	if (((!_does_anim_scene_exist(uParam0->f_444) || !_is_anim_scene_started(uParam0->f_444, false)) || _0xef324e9550a394d5(uParam0->f_444)) || func_83(uParam0, 512))
	{
		if (!func_211(uParam0->f_501, 128))
		{
			func_212();
		}
		return;
	}
	if ((func_99(uParam0, Global_35, 4) || (_0x6f1f0b17109309da(uParam0->f_444, func_213(Global_35)) && _0xb89fcff19dafff28(uParam0->f_444, func_213(Global_35)))) || !_0x4b85b3cf91972222(uParam0->f_444))
	{
		if (!func_211(uParam0->f_501, 128))
		{
			func_212();
		}
		return;
	}
	bVar0 = true;
	iVar1 = _0xc17f69e1418cd11f(9);
	if (iVar1 != 0)
	{
		if (func_214(iVar1))
		{
			if (func_215(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_211(uParam0->f_501, 512))
	{
		bVar2 = true;
	}
	if (func_216(bVar0, bVar2))
	{
		_delete_anim_scene_2(uParam0->f_444);
		func_212();
	}
}

void func_85(var uParam0, char* sParam1)
{
	if (func_50(uParam0) == 2 && (func_217(uParam0->f_500, 16384) || func_83(uParam0, 268435456)))
	{
		Var0 = { func_182(uParam0) };
		func_218(uParam0, &Var0);
	}
	func_219(uParam0, sParam1);
	if (func_83(uParam0, 131072))
	{
		func_220(uParam0, 0);
	}
	if (func_221())
	{
		set_ped_reset_flag(Global_35, 265, true);
		func_222();
	}
	if (func_223())
	{
		func_224(1);
	}
	func_203(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_225(uParam0, cVar8);
	func_93(1, 0);
	func_198(uParam0);
	if (func_226() && _0x6f1f0b17109309da(uParam0->f_444, func_213(Global_35)))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_87(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_436);
	}
	func_227(uParam0);
	func_228(uParam0, 1);
	start_anim_scene(uParam0->f_444);
	Global_43800 = uParam0->f_444;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_26(&(uParam0->f_1));
}

bool func_87(var uParam0, int iParam1)
{
	return (uParam0->f_439 && iParam1) != 0;
}

void func_88(var uParam0)
{
	if ((!func_83(uParam0, 32768) && _does_anim_scene_exist(uParam0->f_444)) && _is_anim_scene_metadata_loaded(uParam0->f_444, false))
	{
		func_229(uParam0);
		func_228(uParam0, 0);
		if (!_is_anim_scene_loading(uParam0->f_444, true))
		{
			load_anim_scene(uParam0->f_444);
		}
		func_96(uParam0, 32768);
	}
}

Vector3 func_89(var uParam0)
{
	return uParam0->f_5;
}

bool func_90(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_91(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_230(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_92(int iParam0)
{
	if (!network_is_in_session())
	{
		return;
	}
	if (network_is_in_mp_cutscene())
	{
		return;
	}
	set_entity_visible_in_cutscene(player_ped_id(), iParam0, 0, 256);
	network_set_in_mp_cutscene(true, true, 32, true);
}

void func_93(bool bParam0, int iParam1)
{
	if (func_231())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_232())
		{
			func_233(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_94(var uParam0)
{
	if (!func_83(uParam0, 4))
	{
		if (func_217(uParam0->f_500, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_234(uParam0) };
		if (!func_217(uParam0->f_500, 524288))
		{
			func_235(&(uParam0->f_512));
		}
		func_236(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_143(uParam0, 0f, 0f, 0f);
		func_237(uParam0);
		func_238(uParam0);
		func_239(uParam0, 0f, 0f, 0f, 0, 0);
		func_240(uParam0);
		func_96(uParam0, 4);
		func_241(uParam0, 0);
		func_242(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_513)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_513));
		}
	}
}

bool func_95(var uParam0, int iParam1)
{
	if (func_83(uParam0, 262144))
	{
		return false;
	}
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return false;
	}
	if (!_0x6f1f0b17109309da(uParam0->f_444, "ExportCamera"))
	{
		return false;
	}
	if ((_0xb89fcff19dafff28(uParam0->f_444, "ExportCamera") || (_0x005e6f28dd7ed58d(uParam0->f_444, "ExportCamera") && iParam1)) || _is_anim_scene_active(uParam0->f_444))
	{
		func_96(uParam0, 262144);
		func_241(uParam0, 1);
		return true;
	}
	return false;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_97(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_444) || !_is_anim_scene_started(uParam0->f_444, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_duration(uParam0->f_444) * 1000f));
}

int func_98(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_444) || !_is_anim_scene_started(uParam0->f_444, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_time(uParam0->f_444) * 1000f));
}

bool func_99(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1) && func_243(uParam0->f_13[iVar0], iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_100(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return true;
	}
	if (_0xf94692eb9dc15d74(uParam0->f_444, 0))
	{
		if (func_83(uParam0, 524288))
		{
			_0x1b70811d3bf75db9(1, 1);
		}
		return true;
	}
	if (_is_anim_scene_active(uParam0->f_444) && func_83(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_101(var uParam0)
{
	if (((func_83(uParam0, 1073741824) && !func_83(uParam0, 524288)) && func_83(uParam0, 512)) && is_screen_faded_out())
	{
		do_screen_fade_in(1000);
	}
}

void func_102(var uParam0)
{
	if (!func_83(uParam0, 536870912))
	{
		func_241(uParam0, 1);
		func_104(&(uParam0->f_501), uParam0->f_512);
		func_197();
		func_96(uParam0, 536870912);
	}
	if (func_83(uParam0, 524288))
	{
		do_screen_fade_out(0);
	}
	func_244(uParam0);
	func_86(uParam0, 1);
	func_199(uParam0);
	func_245(uParam0);
	func_246(uParam0);
	func_247(uParam0, 4);
	func_202(uParam0);
	func_220(uParam0, 1);
	func_198(uParam0);
	func_248(&(uParam0->f_1));
	if (_does_anim_scene_exist(uParam0->f_444) && check_ownership_of_anim_scene(uParam0->f_444))
	{
		_delete_anim_scene(uParam0->f_444);
	}
	func_249(!func_211(uParam0->f_501, 128));
	if (!func_211(uParam0->f_501, 128))
	{
		func_212();
	}
}

void func_103(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_444)) && _0xef324e9550a394d5(uParam0->f_444))
	{
		_0x8a8208ae92bf87a5(uParam0->f_444);
	}
}

void func_104(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_250(2000);
	Global_16 = 0;
	func_251();
	set_entity_invincible(Global_35, func_211(*uParam0, 8));
	if (!func_211(*uParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_211(*uParam0, 2) || func_211(*uParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_211(*uParam0, 16))
	{
		func_61(1);
	}
	if (func_211(*uParam0, 32))
	{
		func_252(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_253(-1623728698, 0);
	}
	func_242(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_105()
{
	Global_1935630->f_52 = 1;
}

bool func_106(int iParam0)
{
	bVar0 = is_ped_on_foot(Global_35);
	if (!bVar0 && func_5(iParam0, 1048576))
	{
		func_66(iParam0, 1048576);
		return false;
	}
	if (!func_5(iParam0, 8388608))
	{
		if (vdist2(func_184(*iParam0), Global_36) < (10f * 10f))
		{
			func_25(iParam0, 8388608);
			func_19(&(iParam0->f_2890), 0);
		}
		else
		{
			return false;
		}
	}
	if (!func_5(iParam0, 1048576))
	{
		if (bVar0)
		{
			func_25(iParam0, 1048576);
		}
		else
		{
			iVar1 = 131072;
			vVar2 = { get_offset_from_entity_given_world_coords(Global_35, func_184(*iParam0)) };
			if (vVar2.x > 0f)
			{
				iVar1 = 262144;
			}
			if (func_254(Global_35, &(iParam0->f_421), 0, 256, iVar1, 1084227584, 100, 0, 0))
			{
				set_player_control(get_player_index(), true, 0, false);
			}
		}
	}
	else if (_does_volume_exist(iParam0->f_422) && is_entity_in_volume(Global_35, iParam0->f_422, true, 0))
	{
		return true;
	}
	else if (vdist2(func_184(*iParam0), Global_36) < (2.5f * 2.5f))
	{
		return true;
	}
	else if (!func_5(iParam0, 2097152))
	{
		task_follow_nav_mesh_to_coord(Global_35, func_184(*iParam0), 1f, 20000, 0.25f, 0, 40000f);
		_hide_hud_component(-1679307491);
		set_player_control(get_player_index(), false, 256, false);
		force_ped_motion_state(Global_35, -668482597, false, 1, false);
		if (!is_entity_dead(iParam0->f_3))
		{
			task_look_at_entity(Global_35, iParam0->f_3, -1, 0, 51, 0);
		}
		func_25(iParam0, 2097152);
	}
	if (func_18(&(iParam0->f_2890)))
	{
		if (func_48(&(iParam0->f_2890)) >= 15f)
		{
			return true;
		}
	}
	return false;
}

void func_107(int iParam0)
{
	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, 1024);
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_2(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_109(Global_1935630, 4194304);
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

void func_109(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_110(int iParam0)
{
	if (func_255() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_257(func_256(iVar0), 0))
		{
			if (is_ped_group_member(func_256(iVar0), func_258(), 1))
			{
				func_259(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_111(int iParam0)
{
	if (Global_1935630->f_13)
	{
		_0x61b98367d93f012f(get_player_index());
		func_108(0);
		func_65(iParam0, 1);
	}
	func_260(1, 0, 1);
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	_0x8f44ebb3ba8f6d44(get_player_index(), 0);
	_0x06d26a96ca1bca75(Global_35, 10, 0f, 0);
	set_ped_is_drunk(Global_35, false);
	_0x406ccf555b04fad3(Global_35, 0, 0f);
	func_261(0f);
	Global_1935436->f_11 = 1;
	if (func_262())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_263();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_114(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_115(int iParam0)
{
	return func_264(iParam0, 16, 1);
}

bool func_116(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (!func_115(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

bool func_117(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_195(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_118(float fParam0)
{
	return func_113(*fParam0, 2);
}

float func_119()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_120(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_444))
	{
		_delete_anim_scene(uParam0->f_444);
	}
}

void func_121(var uParam0, int iParam1)
{
	func_265(uParam0, 4);
	func_266(uParam0, 10);
	func_267(uParam0, iParam1);
}

void func_122(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_119() - fParam1);
	func_268(fParam0, 1);
	func_269(fParam0, 2);
	fParam0->f_2 = 0f;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if ((!is_itemset_valid(iParam1) || !is_itemset_valid(iParam2)) || !is_itemset_valid(iParam3))
	{
		return;
	}
	if (!func_270(iParam0))
	{
	}
	(*Global_1835011)[iParam0]->f_58 = iParam1;
	(*Global_1835011)[iParam0]->f_59 = iParam2;
	(*Global_1835011)[iParam0]->f_60 = iParam3;
}

Vector3 func_124(int iParam0)
{
	return func_89(&(iParam0->f_428));
}

Vector3 func_125(var uParam0)
{
	MemCopy(&uVar0, {func_271(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_445))
	{
		uParam0->f_445 = _create_anim_scene(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_445, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_445, func_213(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			_get_anim_scene_origin(uParam0->f_445, &vVar8, &uVar11, 2);
		}
		_delete_anim_scene(uParam0->f_445);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

Vector3 func_126(int iParam0)
{
	return func_184(iParam0);
}

void func_127(int iParam0, vector3 vParam1)
{
	func_194(&(iParam0->f_428), vParam1);
}

bool func_128(int iParam0)
{
	func_272(func_160(0, 0), func_160(0, 3), func_160(0, 4), 150f, 0, 0);
	func_273();
	func_141(iParam0, Global_35, 0, 0, 0, 1, 0);
	func_274(&(iParam0->f_428), Local_14.f_1, 0, 1);
	func_239(&(iParam0->f_428), -1517.379f, -303.7725f, 140.962f, 151.2168f, 0);
	_0xb56d41a694e42e86(Local_14, 264192, 0, 0, -1, -1, 0);
	func_26(&uLocal_32);
	return true;
}

void func_129(int iParam0)
{
	if (!is_itemset_valid(iLocal_35))
	{
		iLocal_35 = create_itemset(true);
	}
}

void func_130(int iParam0)
{
	func_174(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

void func_131(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_141(iParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
}

void func_132(int iParam0)
{
	vVar0 = { func_12(*iParam0) };
	if (is_string_null_or_empty(&vVar0))
	{
		return;
	}
	if (func_7(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, 16384))
	{
		func_25(iParam0, 16384);
		if (!func_275(&vVar0))
		{
			return;
		}
		func_276(iParam0, vVar0, 0);
		func_25(iParam0, 524288);
	}
}

void func_133(int iParam0)
{
	if (func_200(&(iParam0->f_428)) != 15f || func_196(&(iParam0->f_428)) != 20f)
	{
		return;
	}
	switch (*iParam0)
	{
		case 31:
			func_277(&(iParam0->f_428), 50f);
			func_278(&(iParam0->f_428), 75f);
			break;
		case 34:
			func_277(&(iParam0->f_428), 35f);
			func_278(&(iParam0->f_428), 50f);
			break;
		case 62:
			func_277(&(iParam0->f_428), 25f);
			func_278(&(iParam0->f_428), 30f);
			break;
		default:
			break;
	}
}

int func_134(int iParam0)
{
	return func_279(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

int func_135(int iParam0, bool bParam1)
{
	if (func_5(iParam0, 2))
	{
		return 1;
	}
	if (network_is_game_in_progress())
	{
		return 1;
	}
	iVar0 = func_280(*iParam0);
	if (!func_114(iVar0))
	{
		return 1;
	}
	iParam0->f_4 = does_entity_exist(func_256(iVar0));
	return func_281(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_136(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_188(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_282(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_189(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_283(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_137(int iParam0)
{
	return iParam0->f_3;
}

struct<4> func_138(int iParam0, int iParam1)
{
	return func_284(iParam0, iParam1);
}

void func_139(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_285(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_286(iParam3, 1);
	bVar1 = func_286(iParam3, 2);
	bVar2 = !func_286(iParam3, 4);
	bVar3 = func_286(iParam3, 8);
	bVar4 = !func_286(iParam3, 16);
	bVar5 = func_286(iParam3, 32);
	bVar6 = func_286(iParam3, 64);
	return func_287(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_141(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_288(&(iParam0->f_428), iParam1, sParam2, iParam3, iParam4, bParam6);
	func_289(iParam0, iParam1, sParam2);
	if (bParam5)
	{
		func_290(iParam0, iParam1);
	}
}

void func_142(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_291(&(iParam0->f_428), iParam1);
	if (iVar0 < 0)
	{
		return;
	}
	func_292(iParam0->f_428.f_13[iVar0], iParam2);
}

void func_143(var uParam0, vector3 vParam1)
{
	uParam0->f_502 = { vParam1 };
}

bool func_144(int iParam0, bool bParam1, bool bParam2)
{
	if (!does_entity_exist(iLocal_24))
	{
		if (bParam2)
		{
		}
		iLocal_24 = func_293(6, bParam1, bParam2, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		if (!is_entity_dead(iLocal_24))
		{
			if (_get_rider_of_mount(iLocal_24, true) == 0)
			{
				bVar1 = true;
			}
			if ((bParam2 || func_164(iParam0)) && bVar1)
			{
				func_139(iLocal_24, func_138(0, 1), 2, 1073741824);
				set_blocking_of_non_temporary_events(iLocal_24, true);
				task_stand_still(iLocal_24, -1);
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	return !bVar0;
}

struct<4> func_145(int iParam0)
{
	if (!func_81(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

void func_146(int iParam0)
{
	if (func_294(&(iParam0->f_428)) > 15)
	{
	}
	iVar12 = 0;
	while (iVar12 < 15)
	{
		if (does_entity_exist(&(iParam0->f_428.f_13[iVar12])))
		{
			*Global_43619[iVar12] = { *iParam0->f_428.f_13[iVar12] };
		}
		else
		{
			*Global_43619[iVar12] = { Var0 };
		}
		iVar12++;
	}
}

bool func_147()
{
	return func_295(get_id_of_this_thread());
}

void func_148()
{
	if (func_147())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_169())
		{
			func_61(1);
		}
	}
}

void func_149(var uParam0, var uParam1)
{
	if (func_63(uParam1, 32768))
	{
		Var0 = { func_182(uParam0) };
		func_218(uParam0, &Var0);
		if (func_63(uParam1, 131072))
		{
			func_96(uParam0, 268435456);
			if (func_90(uParam0->f_505))
			{
				uParam0->f_505 = { func_296(uParam1, uParam1->f_1684) };
			}
			if (func_90(uParam0->f_502))
			{
				uParam0->f_502 = { func_296(uParam1, uParam1->f_1684) };
				get_ground_z_for_3d_coord(uParam0->f_502, &(uParam0->f_502.f_2), false);
				uParam0->f_502.f_2 = (uParam0->f_502.f_2 + 0.5f);
			}
		}
		if (func_63(uParam1, 268435456))
		{
			func_297(&(uParam0->f_500), 16384);
		}
	}
	else if (func_63(uParam1, 524288))
	{
		func_96(uParam0, 67108864);
		func_298(uParam1, 524288);
	}
	if (func_299(uParam1, 128))
	{
		func_96(uParam0, 32);
	}
	if (uParam1->f_1903 != 0)
	{
		uParam0->f_512 = uParam1->f_1903;
		if (uParam1->f_1684 >= 0 && func_300(uParam1->f_1016[uParam1->f_1684], 256))
		{
			func_297(&(uParam0->f_500), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_1692)))
	{
		_copy_memory(&(uParam0->f_513), &(uParam1->f_1692), 16);
	}
}

bool func_150(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_151(int iParam0)
{
	if (iParam0 & 36 == 4)
	{
		return 6;
	}
	else if (iParam0 & 34 == 4)
	{
		return 5;
	}
	else if (iParam0 & 12 == 8)
	{
		return 12;
	}
	else if (iParam0 & 24 == 16)
	{
		return 18;
	}
	else if (iParam0 & 48 == 32)
	{
		return 0;
	}
	return 0;
}

void func_152(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!func_114(iParam1))
	{
		return;
	}
	func_301(iParam2);
	if (bParam4)
	{
		func_302(iParam0, iParam2, 0);
	}
	if (!bParam6)
	{
		if (!func_5(iParam0, 4194304))
		{
			bParam6 = func_303((*Global_1835011)[*iParam0], 1024);
			bVar0 = func_303((*Global_1835011)[*iParam0], 65536);
		}
	}
	func_304(iParam1, iParam3, bParam4, bParam5, -1082130432, 1, 1, bParam6, bVar0, 0, 0);
}

void func_153(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_305(iParam1))
	{
		return;
	}
	iVar0 = func_306(iParam1);
	if (func_307(iParam1))
	{
		if (!func_308(iParam1))
		{
			return;
		}
	}
	func_309(iParam1, 39, 1);
	func_310(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_310(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_310(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_311(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_312(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_154(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_313(iParam0))
	{
		return;
	}
	iVar0 = func_314(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_315(iVar0);
	func_316(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_317(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_318(iVar0))
		{
			return;
		}
	}
	func_319(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_255() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

bool func_155(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_320((*Global_1835011)[iParam0]->f_1);
}

var func_156(int iParam0)
{
	if (!func_81(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

int func_157(var uParam0, var uParam1)
{
	if (uParam1->f_1684 < 0 || uParam1->f_1684 >= 8)
	{
		return 0;
	}
	if (!is_string_null_or_empty(&(uParam1->f_1016[uParam1->f_1684]->f_30)))
	{
		if (_0xa9016536015de29d(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684]->f_30)))
		{
			if (_0x23e33cb9f4a3f547(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684]->f_30)))
			{
				func_218(uParam0, &(uParam1->f_1016[uParam1->f_1684]->f_30));
				func_96(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

void func_158(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iLocal_25))
	{
		if (func_164(iParam0) || !bParam1)
		{
			if (bParam1)
			{
			}
			Var1.f_10 = 7;
			Var1 = bParam1;
			Var1.f_1 = bParam1;
			Var1.f_3 = 1;
			Var1.f_4 = 1;
			Var1.f_2 = 0;
			Var1.f_6 = { func_160(0, 2) };
			Var1.f_9 = func_321(0, 2);
			iLocal_25 = func_322(&uVar0, &Var1);
			if (!is_entity_dead(iLocal_25))
			{
				if (bParam1 || func_164(iParam0))
				{
					func_139(iLocal_25, func_138(0, 2), 2, 1073741824);
					set_blocking_of_non_temporary_events(iLocal_25, false);
					task_stand_still(iLocal_25, -1);
				}
			}
		}
	}
}

int func_159(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_323(uParam0->f_1, 1))
	{
		if (does_particle_fx_looped_exist(*uParam0))
		{
			if (func_323(uParam0->f_1, 16))
			{
				func_324(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				func_325(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	request_named_ptfx_asset(-458373790);
	if (has_named_ptfx_asset_loaded(-458373790))
	{
		if (!func_323(uParam0->f_1, 8))
		{
			if (!does_particle_fx_looped_exist(*uParam0))
			{
				use_particle_fx_asset("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_326(get_distance_between_coords(get_gameplay_cam_coord(), vParam1, true));
				uParam0->f_3 = func_328(func_327(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_329(iParam4);
				uParam0->f_5 = to_float(get_random_int_in_range(floor((uParam0->f_5 - 15f)), floor((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = start_particle_fx_looped_at_coord(sVar0, vParam1, 0f, 0f, 0f, func_330(iParam4), false, false, false, false);
				uParam0->f_4 = get_frame_count();
				if (func_331(vParam1, 1) > (get_gameplay_cam_fov() + 15f))
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
					set_particle_fx_looped_alpha(*uParam0, 1f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_332(&(uParam0->f_1), 16);
				}
				else
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_2);
					set_particle_fx_looped_alpha(*uParam0, 0f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_332(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_160(int iParam0, int iParam1)
{
	return func_333(iParam0, iParam1);
}

bool func_161(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	func_334(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar4 = func_195(iParam0, vParam1, 1);
	if (!func_18(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (does_entity_exist(iVar1) || does_entity_exist(iVar2))
			{
				func_19(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_248(fParam4);
	}
	if (func_18(fParam4))
	{
		if (bParam14)
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
		if (func_48(fParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar1) && !func_335(iParam0, 501393341))
			{
				if (is_ped_on_mount(iParam0))
				{
					task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!is_entity_dead(iVar2) && !func_335(iParam0, -828834893))
			{
				if (is_ped_in_any_vehicle(iParam0, false))
				{
					task_leave_any_vehicle(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (get_is_task_active(iParam0, 8))
			{
				clear_ped_tasks(iParam0, 1, 0);
			}
			set_ped_reset_flag(iParam0, 175, true);
		}
	}
	return false;
}

struct<4> func_162(int iParam0)
{
	return iParam0->f_2880;
}

bool func_163(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_63(uParam0, 32768))
	{
		return true;
	}
	if (func_8(uParam0) >= 3)
	{
		uParam0->f_1896 = func_336(get_player_index(), 0, 0, 1);
		uParam0->f_1897 = _is_ped_getting_into_a_mount_seat(Global_35, true);
		uParam0->f_1899 = is_ped_in_any_vehicle(Global_35, true);
		if (uParam0->f_1897)
		{
			if (!is_entity_dead(Global_1935630->f_40))
			{
				uParam0->f_1898 = Global_1935630->f_40;
			}
			else
			{
				uParam0->f_1898 = get_mount(Global_35);
			}
		}
		if (uParam0->f_1899)
		{
			uParam0->f_1901 = get_vehicle_ped_is_in(Global_35, true);
		}
		uParam0->f_1902 = get_interior_from_entity(Global_35);
		func_337(uParam0);
	}
	if (func_8(uParam0) < 10)
	{
		if (func_8(uParam0) == 3)
		{
			func_338(uParam0, iParam5, bParam6);
		}
		else if (func_8(uParam0) > 3)
		{
			if (func_339(uParam0) == 0)
			{
				if (!func_63(uParam0, 524288))
				{
					func_340(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_265(uParam0, 4);
					func_266(uParam0, 10);
					func_267(uParam0, iParam5);
					return true;
				}
			}
			if (!func_63(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_300(uParam0->f_1016[uParam0->f_1684], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_341(0);
			func_342();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_1684 >= 0)
			{
				if (!func_300(uParam0->f_1016[uParam0->f_1688], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_343(uParam0, uParam0->f_1684))
				{
					if (func_344(uParam0) < 7 && uParam0->f_1688 >= 0)
					{
						func_345(uParam0, uParam0->f_1016[uParam0->f_1688]->f_27, uParam0->f_1345[uParam0->f_1688]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1688 >= 0)
				{
					func_345(uParam0, uParam0->f_1016[uParam0->f_1688]->f_27, uParam0->f_1345[uParam0->f_1688]->f_1, 1065353216);
				}
				func_346(uParam0);
			}
		}
	}
	bVar0 = func_347(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_63(uParam0, 268435456) && bVar1) && !func_63(uParam0, 262144))
		{
			bVar3 = is_valid_interior(uParam0->f_1902);
			if (uParam0->f_1684 >= 0)
			{
				iVar4 = get_interior_at_coords(uParam0->f_1016[uParam0->f_1684]->f_1);
				if ((is_valid_interior(iVar4) && bVar3) && iVar4 == uParam0->f_1902)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				func_348(uParam0, 131072);
				func_348(uParam0, 268435456);
			}
		}
		if (func_299(uParam0, 64) || (uParam0->f_1684 >= 0 && !func_300(uParam0->f_1016[uParam0->f_1684], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_339(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_8(uParam0) == 3 || func_63(uParam0, 131072))
	{
		func_349(uParam0);
		if (!func_63(uParam0, 262144))
		{
			if ((bVar0 && func_63(uParam0, 65536)) || func_63(uParam0, 131072))
			{
				func_348(uParam0, 32768);
				func_265(uParam0, 4);
				func_266(uParam0, 10);
				uParam0->f_1769 = 1;
				func_267(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_8(uParam0) >= 3)
	{
		func_350(uParam0, iParam5);
		func_351(uParam0);
		if (!func_352(uParam0, 1))
		{
			func_353(uParam0);
		}
		func_354(uParam0);
	}
	switch (func_8(uParam0))
	{
		case 0:
			func_355(uParam0, Param1, iParam5);
			break;
		case 1:
			func_356(uParam0);
			break;
		case 2:
			func_357(uParam0);
			break;
		case 3:
			if (func_358(uParam0))
			{
				func_110(2);
				func_345(uParam0, uParam0->f_1016[uParam0->f_1684]->f_27, uParam0->f_1345[uParam0->f_1684]->f_1, 1065353216);
				func_26(&(uParam0->f_1872));
				func_265(uParam0, 1);
				func_359();
				func_266(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_63(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_8(uParam0) == 5)
			{
				if (func_360(uParam0))
				{
					func_265(uParam0, 2);
					func_266(uParam0, 6);
				}
			}
			if (func_8(uParam0) == 6)
			{
				if (func_361(uParam0))
				{
					func_265(uParam0, 3);
					func_266(uParam0, 8);
				}
			}
			if (uParam0->f_1685 >= 0 || func_21(&(uParam0->f_1872)) >= 15f)
			{
				if (func_362(uParam0, iParam5))
				{
					if (func_363(uParam0))
					{
						uParam0->f_1685 = func_364(uParam0);
						func_26(&(uParam0->f_1872));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_265(uParam0, 6);
						func_266(uParam0, 9);
					}
					else
					{
						func_265(uParam0, 4);
						func_266(uParam0, 10);
						func_267(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_362(uParam0, iParam5))
			{
				func_267(uParam0, iParam5);
				func_266(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_164(int iParam0)
{
	return func_358(&(iParam0->f_958));
}

int func_165(int iParam0)
{
	if (is_ped_on_mount(Global_35))
	{
		iVar1 = iParam0->f_423;
		fVar0 = 10f;
	}
	else if (is_ped_in_any_vehicle(Global_35, false))
	{
		iVar1 = iParam0->f_424;
		fVar0 = 15f;
	}
	else
	{
		iVar1 = iParam0->f_422;
		fVar0 = 5f;
	}
	if (_does_volume_exist(iVar1))
	{
		if (func_365(Global_35, iVar1, 1, 0))
		{
			func_25(iParam0, 8388608);
			return 1;
		}
	}
	if (vdist2(func_184(*iParam0), Global_36) < (fVar0 * fVar0))
	{
		func_25(iParam0, 8388608);
		return 1;
	}
	return 0;
}

void func_166(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_446), sParam1, 64);
}

bool func_167(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0]->f_17 == 0 && uParam0->f_475[iVar0]->f_2 == 9) && uParam0->f_475[iVar0]->f_4 >= 0)
		{
			iVar1 = uParam0->f_1522[uParam0->f_475[iVar0]->f_4]->f_8;
			if (_does_anim_scene_exist(iVar1) && _is_anim_scene_loaded(iVar1, true, false))
			{
				iVar2 = 0;
				while (iVar2 < 35)
				{
					if (!is_entity_dead(uParam0->f_3[iVar2]->f_2) && is_entity_a_ped(uParam0->f_3[iVar2]->f_2))
					{
						Var3 = { func_366(uParam0, uParam0->f_3[iVar2]->f_2) };
						if (_0x6f1f0b17109309da(iVar1, &Var3))
						{
							if (!_0x3ab6c7b0bb0df4b1(uParam0->f_3[iVar2]->f_2, iVar1) && _0x3ab6c7b0bb0df4b1(uParam0->f_3[iVar2]->f_2, -1))
							{
								return true;
							}
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_168(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (_does_anim_scene_exist(uParam0->f_1522[iVar0]->f_8))
		{
			if (bParam1)
			{
				bVar1 = check_ownership_of_anim_scene(uParam0->f_1522[iVar0]->f_8);
				if (!bVar1 && !bParam2)
				{
					if ((_0xa9016536015de29d(uParam0->f_1522[iVar0]->f_8, "pl_breakout") && _0x23e33cb9f4a3f547(uParam0->f_1522[iVar0]->f_8, "pl_breakout")) && !uParam0->f_1769)
					{
						_set_anim_scene_playback_list_bool(uParam0->f_1522[iVar0]->f_8, "pl_breakout", true);
					}
				}
				else if (func_63(uParam0, 32768) && func_367(uParam0->f_1522[iVar0], 128))
				{
					func_368(uParam0->f_1522[iVar0]->f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						take_ownership_of_anim_scene(uParam0->f_1522[iVar0]->f_8);
					}
					_delete_anim_scene(uParam0->f_1522[iVar0]->f_8);
				}
			}
			else
			{
				reset_anim_scene(uParam0->f_1522[iVar0]->f_8, 0);
			}
		}
		iVar0++;
	}
}

bool func_169()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_170()
{
	_delete_volume(Local_14);
	_delete_volume(Local_14.f_1);
}

void func_171(vector3 vParam0, vector3 vParam3, int iParam6)
{
	clear_ped_non_creation_area();
	vVar0 = { func_369(vParam0, vParam3, iParam6) };
	vVar3 = { func_370(vParam0, vParam3, iParam6) };
	set_ped_paths_back_to_original(vVar0, vVar3, 0);
}

void func_172(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_371(vVar0, 0);
}

void func_173(var uParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam1);
	_0x74c2b3dc0b294102(iParam1);
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		remove_scenario_blocking_area(*uParam0, bParam2);
	}
}

void func_174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_372((*uParam0)[iVar0]))
		{
			if (func_373((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_374((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_375((*uParam1)[iVar0]))
		{
			if (func_373((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_376((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_377((*uParam2)[iVar0]))
		{
			if (func_373((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_378((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_379((*uParam3)[iVar0]))
		{
			if (func_373((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_380((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_373(uParam4->f_1, iParam12))
	{
		func_381(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_382((*uParam5)[iVar0]))
		{
			if (func_373((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_383((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_382((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_384((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_373((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_385((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_386((*uParam6)[iVar0]))
		{
			if (func_373((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_387((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_388((*uParam7)[iVar0]))
		{
			if (func_373((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_389((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_390((*uParam8)[iVar0]))
		{
			if (func_373((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_391((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_392((*uParam9)[iVar0]))
		{
			if (func_373((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_393((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_394((*uParam10)[iVar0]))
		{
			if (func_373((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_395((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_396((*uParam11)[iVar0]))
		{
			if (func_373((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_397((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_175(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_176()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((_does_anim_scene_exist(&(Global_43806[iVar0])) && is_thread_active(Global_43806[iVar0]->f_1, false)) && Global_43806[iVar0]->f_1 == get_id_of_this_thread()) && _0xa9016536015de29d(&(Global_43806[iVar0]), "pl_breakout")) && !_0x1f0e401031e20146(&(Global_43806[iVar0]), "pl_breakout"))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_177()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((_does_anim_scene_exist(&(Global_43806[iVar0])) && is_thread_active(Global_43806[iVar0]->f_1, false)) && Global_43806[iVar0]->f_1 == get_id_of_this_thread()) && _0xa9016536015de29d(&(Global_43806[iVar0]), "pl_breakout")) && !_0x1f0e401031e20146(&(Global_43806[iVar0]), "pl_breakout"))
		{
			_set_anim_scene_playback_list_bool(&(Global_43806[iVar0]), "pl_breakout", true);
		}
		iVar0++;
	}
}

bool func_178(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((_does_anim_scene_exist(&(Global_43806[iVar0])) && _is_anim_scene_started(&(Global_43806[iVar0]), false)) && _0x3ab6c7b0bb0df4b1(iParam0, &(Global_43806[iVar0])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_179(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_180(int iParam0)
{
	if (!func_179(iParam0))
	{
		return 0;
	}
	return func_399(func_398(iParam0));
}

int func_181(int iParam0)
{
	if (!func_179(iParam0))
	{
		return -1;
	}
	return func_400(func_398(iParam0));
}

struct<8> func_182(var uParam0)
{
	Var0 = { func_401(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_402() };
	}
	return Var0;
}

char* func_183()
{
	return "unnamed";
}

Vector3 func_184(int iParam0)
{
	if (func_403(iParam0))
	{
		return func_404(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	iParam0->f_425 = iParam1;
	_0x18262cafebb5fbe1(iParam1, 0, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam1, 0, 0, 0, -1, -1, iParam2);
	_0x19c7567d2f2287d6(iParam1, 15);
	func_66(iParam0, 512);
	iParam0->f_427 = func_405(iParam1, 0, 0, 0);
}

void func_186(int iParam0, int iParam1)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	if (!func_270(iParam0))
	{
	}
	(*Global_1835011)[iParam0]->f_61 = iParam1;
}

void func_187(int iParam0, int iParam1)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	iParam0->f_426 = iParam1;
	func_406(iParam1);
	StringCopy(&cVar0, func_183(), 64);
	func_407(iParam1, &cVar0, 1, 0, 0, 0, -1082130432);
}

struct<2> func_188(int iParam0)
{
	MemCopy(&Var0, {func_156(iParam0)}, 2);
	return Var0;
}

struct<2> func_189(int iParam0)
{
	Var0 = { func_188(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

bool func_190()
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

bool func_191(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_192(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_193(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!is_string_null_or_empty(&(uParam1->f_1016[iVar0]->f_30)))
		{
			func_408(uParam0, &(uParam1->f_1016[iVar0]->f_30), 1);
		}
		iVar0++;
	}
}

void func_194(var uParam0, vector3 vParam1)
{
	if (func_90(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_195(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_196(var uParam0)
{
	return uParam0->f_435;
}

void func_197()
{
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_409(Var0);
	}
}

void func_198(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_462[iVar0]) && (_0x23e33cb9f4a3f547(uParam0->f_444, uParam0->f_462[iVar0]) || _0x0df57f86fe71dbe5(uParam0->f_444, uParam0->f_462[iVar0])))
		{
			_0xae6ada8fe7e84acc(uParam0->f_444, uParam0->f_462[iVar0]);
		}
		uParam0->f_462[iVar0]->f_8 = 0;
		iVar0++;
	}
}

void func_199(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_83(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_410(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_83(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_103(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_103(uParam0, 16, 1);
}

float func_200(var uParam0)
{
	return uParam0->f_434;
}

struct<8> func_201(var uParam0)
{
	return uParam0->f_446;
}

void func_202(var uParam0)
{
	Var0 = { func_411() };
	func_166(uParam0, &Var0);
}

void func_203(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_83(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_412(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_183());
		func_96(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_274(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_96(uParam0, 16);
	}
}

bool func_204()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_205(int iParam0)
{
	if (func_413(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_409(Var0);
}

int func_206()
{
	return &Global_1899516;
}

int func_207()
{
	return &Global_1899515;
}

int func_208(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_209(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

struct<8> func_210(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	iVar0 = get_length_of_literal_string(sParam0);
	iVar1 = get_length_of_literal_string(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = get_length_of_literal_string(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, _0x806862e5d266cf38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = get_length_of_literal_string(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, _0x806862e5d266cf38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

bool func_211(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_212()
{
	if (func_414(Global_43801))
	{
		func_415(&Global_43801, 0, 0);
	}
}

char* func_213(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (get_entity_model(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = get_entity_model(iParam0);
	return func_416(iVar0);
}

bool func_214(int iParam0)
{
	if (func_417(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_215(int iParam0, bool bParam1)
{
	if (bParam1 && !func_414(iParam0))
	{
		return false;
	}
	return !func_418(iParam0, 4);
}

bool func_216(bool bParam0, bool bParam1)
{
	if (!func_414(Global_43801))
	{
		Global_43801 = func_419("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1945938)[Global_43801]->f_16 = &Global_23[3];
		func_420(Global_43801, 0, 1);
		func_421(Global_43801, 6, 1);
		if (bParam1)
		{
			func_421(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_215(Global_43801, 0))
		{
			func_422(Global_43801, 1, 1);
		}
		if (func_423(Global_43801, 1) != 0f && bParam0)
		{
			func_420(Global_43801, 1, 1);
		}
		else
		{
			func_420(Global_43801, 0, 1);
		}
		return func_424(Global_43801, 1);
	}
	return false;
}

bool func_217(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_218(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_444, true, false))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_444, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_462[iVar0]) && are_strings_equal(sParam1, uParam0->f_462[iVar0]))
		{
			Var1 = { uParam0->f_446 };
			*uParam0->f_462[iVar0] = { Var1 };
		}
		iVar0++;
	}
	func_166(uParam0, sParam1);
	func_103(uParam0, 2097152, 1);
	func_96(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_444, sParam1, true);
}

void func_219(var uParam0, char* sParam1)
{
	if (((!func_83(uParam0, 32) || func_425(uParam0)) || func_83(uParam0, 268435456)) && !func_83(uParam0, 65536))
	{
		func_297(&(uParam0->f_500), 256);
	}
}

void func_220(var uParam0, bool bParam1)
{
	if (get_current_ped_weapon(Global_35, &uVar0, false, 9, false))
	{
		_0x67e21acc5c0c970c(Global_35, 9, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 7, false))
	{
		_0x67e21acc5c0c970c(Global_35, 7, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 8, false))
	{
		_0x67e21acc5c0c970c(Global_35, 8, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 10, false))
	{
		_0x67e21acc5c0c970c(Global_35, 10, bParam1);
	}
}

bool func_221()
{
	return _get_number_of_references_of_script_with_name_hash(130487986) > 0;
}

void func_222()
{
	script_thread_iterator_reset();
	iVar0 = script_thread_iterator_get_next_thread_id();
	while (_does_thread_exist(iVar0))
	{
		if (_get_hash_of_thread(iVar0) == 130487986)
		{
			if (!is_entity_dead(Global_35))
			{
				set_ped_reset_flag(Global_35, 265, true);
			}
			force_cleanup_for_thread_with_this_id(iVar0, 1);
			return;
		}
		iVar0 = script_thread_iterator_get_next_thread_id();
	}
}

bool func_223()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

void func_224(bool bParam0)
{
	if (func_223())
	{
		Global_1357509 = 1;
	}
	if (func_426(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_225(var uParam0, char[16] cParam1)
{
	uParam0->f_440 = { cParam1 };
}

bool func_226()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	return false;
}

void func_227(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_462[iVar0]))
		{
			func_427(uParam0, uParam0->f_462[iVar0]);
		}
		iVar0++;
	}
	Var1 = { func_411() };
	func_427(uParam0, &Var1);
	Var1 = { func_182(uParam0) };
	func_427(uParam0, &Var1);
}

void func_228(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_243(uParam0->f_13[iVar0], 2))
		{
			if (func_243(uParam0->f_13[iVar0], 1) || _0x6f1f0b17109309da(uParam0->f_444, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_428(uParam0, &(uParam0->f_13[iVar0]->f_1), &(uParam0->f_13[iVar0]), uParam0->f_13[iVar0]->f_9);
				if (bParam1 && is_entity_a_ped(&(uParam0->f_13[iVar0])))
				{
					iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
					if (iVar1 != Global_35 && !func_243(uParam0->f_13[iVar0], 16))
					{
						func_429(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_229(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_243(uParam0->f_13[iVar0], 2))
		{
			if (_0x6f1f0b17109309da(uParam0->f_444, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_292(uParam0->f_13[iVar0], 1);
			}
		}
		iVar0++;
	}
}

float func_230(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_231()
{
	return func_417(_0xc17f69e1418cd11f(3));
}

bool func_232()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_233(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

Vector3 func_234(var uParam0)
{
	return uParam0->f_502;
}

void func_235(var uParam0)
{
	if (func_430(&iVar0))
	{
		if (func_431(iVar0, 0))
		{
			if (func_432(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_252(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_431(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_236(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_433(0, 0);
		func_434(-1);
	}
	func_92(1);
	set_entity_invincible(Global_35, true);
	if (!func_217(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_217(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_217(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_217(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_217(*uParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_217(*uParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_217(*uParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_217(*uParam0, 4) && !func_217(*uParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_217(*uParam0, 2048))
	{
		func_435(0, 0);
	}
	if (func_217(*uParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_217(*uParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_217(*uParam0, 8192))
	{
		func_436();
	}
	if (!func_217(*uParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_217(*uParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_217(*uParam0, 1024))
	{
		set_cinematic_mode_active(false);
	}
	if (iParam2 != 2)
	{
		set_ped_stealth_movement(Global_35, iParam2 == 1, 0, 0);
	}
	if (is_ped_on_foot(Global_35))
	{
		if (bParam6)
		{
			set_ped_desired_move_blend_ratio(Global_35, 0f);
			set_ped_desired_heading(Global_35, get_entity_heading(Global_35));
			set_entity_velocity(Global_35, 0f, 0f, 0f);
		}
		if (!func_217(*uParam0, 16))
		{
			iVar0 = create_itemset(true);
			bVar1 = false;
			find_all_attached_carriable_entities(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < get_itemset_size(iVar0))
			{
				iVar6 = get_indexed_item_in_itemset(iVar2, iVar0);
				iVar7 = _get_entity_from_item(iVar6);
				if (!does_entity_exist(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (is_entity_an_object(iVar7))
					{
						if (func_437() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_90(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_438(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_439(2);
						func_440(-1);
						func_441(vVar3);
						func_443(func_442());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!_0x3ab6c7b0bb0df4b1(Global_35, -1))
				{
					clear_ped_tasks_immediately(Global_35, false, true);
					_0x2208438012482a1a(Global_35, false, false);
				}
			}
			destroy_itemset(iVar0);
		}
	}
	if (bParam6 && is_ped_on_mount(Global_35))
	{
		iVar9 = get_mount(Global_35);
		if (!is_entity_dead(iVar9))
		{
			clear_ped_tasks(iVar9, 1, 0);
			task_stand_still(iVar9, -1);
		}
	}
	if (!func_217(*uParam0, 4096))
	{
		func_429(Global_35);
	}
	if (!func_217(*uParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_217(*uParam0, 2097152))
	{
		if (func_444() || _0x50f124e6ef188b22(Global_35))
		{
			func_112(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_237(var uParam0)
{
	if (func_83(uParam0, 2048) && !func_90(func_445(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_285(iVar1, func_445(uParam0), func_446(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_285(iVar3, func_445(uParam0), func_446(uParam0), 2, 1073741824);
		}
	}
}

void func_238(var uParam0)
{
	if ((func_83(uParam0, 268435456) && !func_90(func_445(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_445(uParam0) };
			func_285(iVar0, vVar1, func_447(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_239(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_505 = { vParam1 };
	uParam0->f_508 = iParam4;
	if (func_90(vParam1))
	{
		func_103(uParam0, 2048, 1);
	}
	else
	{
		func_96(uParam0, 2048);
		if (bParam5)
		{
			func_96(uParam0, -2147483648);
		}
	}
}

void func_240(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((!is_entity_dead(&(uParam0->f_13[iVar0])) && is_entity_a_ped(&(uParam0->f_13[iVar0]))) && get_ped_index_from_entity_index(&(uParam0->f_13[iVar0])) != Global_35)
		{
			iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
			if (is_ped_human(iVar1))
			{
				if (_0x6f1f0b17109309da(uParam0->f_444, &(uParam0->f_13[iVar0]->f_1)))
				{
					if (!func_243(uParam0->f_13[iVar0], 8))
					{
						if (func_449(func_448(iVar1, 0, 1, 0)))
						{
							if (!func_450(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_449(func_448(iVar1, 1, 1, 0)))
						{
							if (!func_450(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_241(var uParam0, bool bParam1)
{
	_0x67e21acc5c0c970c(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			_set_ped_component_disabled(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_242(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_255() != -1;
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
			func_451(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_452(iParam1, 29, bVar4, 1, 0);
			func_452(iParam1, 31, bVar4, 1, 0);
			func_452(iParam1, 30, bVar4, 1, 0);
			func_452(iParam1, 22, bVar4, 1, 0);
			func_452(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_453(32768) && func_454(1108822547, 8)) && func_455(10, iParam3))
	{
		func_456(iParam1, 0, 1);
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
			iVar3 = func_457(iVar1, 1);
			if (func_454(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_455(iVar1, iParam3))
				{
				}
				else if ((func_454(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_454(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_452(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_458(iVar3, 1, 6);
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
								func_452(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_454(iVar3, 1))
							{
								func_459(iVar3, 1, 6);
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

bool func_243(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_244(var uParam0)
{
	StringCopy(&(uParam0->f_440), "", 32);
	func_460(uParam0);
	func_194(uParam0, 0f, 0f, 0f);
	func_461(uParam0);
}

void func_245(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		uParam0->f_13[iVar0]->f_11 = 0;
		iVar0++;
	}
}

void func_246(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_247(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		func_462(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_248(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

void func_249(bool bParam0)
{
	if (_does_anim_scene_exist(Global_43800))
	{
		if (check_ownership_of_anim_scene(Global_43800))
		{
			_delete_anim_scene(Global_43800);
		}
	}
	Global_43800 = -1;
	StringCopy(&Global_43802, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_212();
	}
	_0xa0cefcea390aab9b(0);
}

void func_250(int iParam0)
{
	func_463();
	Global_1911774->f_1 = get_game_timer();
	Global_1911774->f_2 = iParam0;
}

void func_251()
{
	if (!network_is_in_session())
	{
		return;
	}
	if (!network_is_in_mp_cutscene())
	{
		return;
	}
	network_set_in_mp_cutscene(false, false, 32, true);
}

int func_252(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_464(iParam1, 1, 0) };
		iParam3 = func_465(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_467(iParam1, iParam2, func_466(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_468(1, (func_255() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_466(iParam3, 1)])
			{
				func_469(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_453(32768) && iParam1 != &Global_1946804->f_57[func_466(iParam3, 1)])
			{
				func_470();
				func_469(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_469(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_471(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_469(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_205(0);
			func_472(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_469(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_253(int iParam0, int iParam1)
{
	Var0 = { func_464(iParam0, 0, 0) };
	Var5 = { func_473(iParam0, Var0, Var0.f_4, 0) };
	if (func_474(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_475(0), &Var5, iParam1);
}

bool func_254(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
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
	if (func_476(*iParam1, 128))
	{
		if (!func_477(iParam0, 1245594896))
		{
			clear_ped_tasks(iParam0, 1, 0);
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_476(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_478(iVar2))
			{
				return false;
			}
			if (!func_477(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_479(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_476(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_323(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_480(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (func_476(*iParam1, 4))
	{
		if (is_ped_in_any_vehicle(iParam0, true))
		{
			return false;
		}
		else
		{
			clear_ped_tasks_immediately(iParam0, false, true);
			*iParam1 = 0;
			return true;
		}
	}
	if (func_476(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_478(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0))) || (bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iVar2))))
		{
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_ped_a_player(iParam0) && is_player_control_on(get_player_index()))
	{
		if (!func_323(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_323(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_323(iParam2, 8192))
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
			return false;
		}
		if (func_476(*iParam1, 2336))
		{
			if (!func_478(iVar2))
			{
			}
			if (func_481(iVar2, *iParam1))
			{
				func_482(iParam1, 32);
				func_482(iParam1, 256);
				func_482(iParam1, 2048);
				func_480(iParam1, 512);
				func_480(iParam1, 1024);
				func_480(iParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_476(*iParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_478(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return false;
			}
			else
			{
				func_482(iParam1, 64);
			}
		}
		if (func_323(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		disable_control_action(0, 1520437207, false);
		if (((is_ped_sprinting(iVar2) || (is_ped_running(iVar2) && func_323(iParam2, 1024))) || func_323(iParam2, 8)) && !func_476(*iParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_480(iParam1, 32);
		}
		else if ((is_ped_running(iVar2) && func_323(iParam2, 4096)) && !func_476(*iParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_480(iParam1, 2048);
			func_480(iParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_323(iParam2, 32)) && !func_476(*iParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_480(iParam1, 256);
			func_480(iParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_480(iParam1, 64);
		}
		else if (!func_323(iParam2, 1))
		{
			if (!func_323(iParam2, 256))
			{
				_0xb832f1a686b9b810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_479(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_476(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_480(iParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_480(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_323(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_480(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!func_323(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_480(iParam1, 8);
	}
	return false;
}

int func_255()
{
	return Global_1572887->f_12;
}

int func_256(int iParam0)
{
	if (!func_305(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_257(int iParam0, int iParam1)
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
	if (func_476(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_476(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_476(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_476(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_476(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_476(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_476(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_476(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_258()
{
	return get_player_group(get_player_index());
}

void func_259(int iParam0, int iParam1)
{
	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0];
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0))
		{
			decor_set_int(iVar0, "companion_manager_command", iParam1);
		}
	}
}

void func_260(bool bParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(Global_35))
	{
		return;
	}
	iVar0 = create_itemset(true);
	if (_0x7be607daff382fd2(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (get_itemset_size(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, iVar0));
			if (!is_entity_dead(iVar2) && is_entity_a_ped(iVar2))
			{
				iVar3 = get_ped_index_from_entity_index(iVar2);
				if (bParam0)
				{
					if (_0x800df3fc913355f3(_0x32a1e3b83d501096(iVar3)))
					{
						_0x7b204f88f6c3d287(_0x32a1e3b83d501096(iVar3));
					}
					else
					{
						delete_ped(&iVar3);
					}
				}
				else
				{
					clear_ped_tasks(iVar3, 0, 0);
					if (bParam2)
					{
						_0xdf94844d474f31e5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	destroy_itemset(iVar0);
}

void func_261(float fParam0)
{
	func_483(10, fParam0);
}

bool func_262()
{
	if (func_255() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_263()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

bool func_264(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_305(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_265(var uParam0, int iParam1)
{
	uParam0->f_1683 = iParam1;
}

void func_266(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_267(var uParam0, int iParam1)
{
	if (func_299(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			_display_hud_component(-1679307491);
			_display_hud_component(474191950);
			break;
		default:
			if (func_147())
			{
				if (!func_63(uParam0, 524288))
				{
					_hide_hud_component(-1679307491);
				}
				_display_hud_component(474191950);
			}
			break;
	}
	if (func_147())
	{
		func_298(uParam0, 512);
		func_484(uParam0, 128);
		_0xcb9401f918cb0f75(Global_35, "PlayLeadin", 0, -1);
		if (func_485(uParam0->f_1016[uParam0->f_1684], 4))
		{
			_0xcb9401f918cb0f75(Global_35, func_486(uParam0->f_1016[uParam0->f_1684]->f_39), 0, -1);
		}
		set_ped_config_flag(Global_35, 255, true);
	}
	func_148();
	func_168(uParam0, 1, 0);
	func_64(uParam0);
	if (func_63(uParam0, 524288) && is_screen_faded_out())
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	func_484(uParam0, 4);
	if (_does_volume_exist(uParam0->f_1875))
	{
		_delete_volume(uParam0->f_1875);
	}
	if (func_299(uParam0, 8) && _0xdd0b7c5ae58f721d(func_487()))
	{
		_0x798be43c9393632b(func_487());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!is_string_null_or_empty(&(uParam0->f_1345[iVar0]->f_2)) && !are_strings_equal(&(uParam0->f_1345[iVar0]->f_2), func_487())) && _0xdd0b7c5ae58f721d(&(uParam0->f_1345[iVar0]->f_2)))
		{
			if (uParam0->f_1345[iVar0]->f_21)
			{
				_0x798be43c9393632b(&(uParam0->f_1345[iVar0]->f_2));
			}
		}
		iVar0++;
	}
	reset_player_input_gait(get_player_index());
	if (func_63(uParam0, 524288) || iParam1 == 1)
	{
		func_212();
	}
	if (func_299(uParam0, 16))
	{
		if (func_339(uParam0) == 0)
		{
			if (_0x927b810e43e99932(&(uParam0->f_1692)))
			{
			}
		}
		else if (_0x927b810e43e99932(&(uParam0->f_1692)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_1692));
		}
	}
	func_488();
	if (func_299(uParam0, 32))
	{
		_0x3ad8eff9703be657(Global_35, 1f);
	}
	if (does_entity_exist(uParam0->f_1901))
	{
		if (!func_63(uParam0, 8192))
		{
			if (_0xc6d7ddc843176701(uParam0->f_1901) != 50f)
			{
				_0x0c3f0f7f92ca847c(uParam0->f_1901, 50f);
			}
		}
		if (_0x404527bc03da0e6c(uParam0->f_1901))
		{
			_0x7c06330bfdda182e(uParam0->f_1901);
		}
	}
	func_353(uParam0);
	if (is_itemset_valid(uParam0->f_1921))
	{
		destroy_itemset(uParam0->f_1921);
	}
	return 1;
}

void func_268(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_269(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

bool func_270(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_489((*Global_1835011)[iParam0]->f_1);
}

struct<4> func_271(var uParam0)
{
	return uParam0->f_440;
}

void func_272(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, int iParam11)
{
	vVar0 = { func_369(vParam0, vParam3, iParam10) };
	vVar3 = { func_370(vParam0, vParam3, iParam10) };
	func_490(vParam6, fParam9, iParam11);
	set_ped_non_creation_area(vVar0, vVar3);
	set_ped_paths_in_area(vVar0, vVar3, false, 0);
}

void func_273()
{
	Local_14 = _create_volume_cylinder(-1536.347f, -311.4289f, 146.274f, 0f, 0f, 0f, 8.617699f, 7.114672f, 7.270174f);
	Local_14.f_1 = _create_volume_box(-1551.481f, -305.4297f, 149.5648f, 0f, 0f, 0f, 78.04127f, 29.71026f, 36.35175f);
}

void func_274(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = _0x4c39c95ae5db1329(iParam1, bParam2, iVar0);
}

bool func_275(char* sParam0)
{
	if (_0x4f9e3ed7617123ac(get_hash_key(sParam0)))
	{
		return true;
	}
	return false;
}

void func_276(int iParam0, vector3 vParam1, int iParam4)
{
	MemCopy(&(iParam0->f_2880), {vParam1}, 4);
	func_25(iParam0, 32768);
	func_491(&(iParam0->f_958), iParam4);
}

void func_277(var uParam0, float fParam1)
{
	uParam0->f_434 = fParam1;
}

void func_278(var uParam0, float fParam1)
{
	uParam0->f_435 = fParam1;
}

int func_279(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_372((*uParam0)[iVar1]))
		{
			if (func_373((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_492((*uParam0)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (func_375((*uParam1)[iVar1]))
		{
			if (func_373((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_493((*uParam1)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (func_377((*uParam2)[iVar1]))
		{
			if (func_373((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_494((*uParam2)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (func_379((*uParam3)[iVar1]))
		{
			if (func_373((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_380((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_373(uParam4->f_1, iParam12))
	{
		if (!func_381(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_382((*uParam5)[iVar1]))
		{
			if (func_373((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_495((*uParam5)[iVar1]))
				{
					if (!func_496((*uParam5)[iVar1]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_382((*uParam5)[iVar1]))
		{
			if (func_373((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_495((*uParam5)[iVar1]))
				{
					if (func_496((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_384((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_497((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1 = (iVar1 + 1);
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (func_386((*uParam6)[iVar1]))
		{
			if (func_373((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_498((*uParam6)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (func_388((*uParam7)[iVar1]))
		{
			if (func_373((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_499((*uParam7)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (func_390((*uParam8)[iVar1]))
		{
			if (func_373((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_500((*uParam8)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (func_392((*uParam9)[iVar1]))
		{
			if (func_373((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_501((*uParam9)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (func_394((*uParam10)[iVar1]))
		{
			if (func_373((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_502((*uParam10)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (func_396((*uParam11)[iVar1]))
		{
			if (func_373((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_503((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_280(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	return func_504(iParam0);
	return -1;
}

int func_281(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (!func_114(iParam1))
	{
		return 0;
	}
	if (func_505(iParam0, *uParam2))
	{
		if (*uParam2 != func_506(iParam1))
		{
		}
		return 1;
	}
	vVar0 = { uParam5, uParam6, uParam7 };
	if (func_90(vVar0))
	{
		vVar0 = { func_126(*iParam0) };
	}
	if (!func_507(iParam1, 28, 1))
	{
		func_311(iParam1, 28, 1);
	}
	*uParam2 = func_508(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!is_entity_dead(*uParam2))
	{
		if (!_0xa0bc8faed8cfeb3c(*uParam2))
		{
			return 0;
		}
		func_290(iParam0, *uParam2);
		func_509(iParam0, *uParam2);
		func_510(*uParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			set_blocking_of_non_temporary_events(*uParam2, true);
			if (!func_477(*uParam2, -982327190))
			{
				task_stand_still(*uParam2, -1);
			}
		}
		func_141(iParam0, *uParam2, 0, 0, 0, 1, 0);
		func_511(iParam1, 0, 0, 1);
		func_512(iParam1);
		return 1;
	}
	return 0;
}

bool func_282(int iParam0)
{
	Var0 = { func_188(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_text_database_has_loaded(&Var0))
		{
			return false;
		}
	}
	return true;
}

bool func_283(int iParam0)
{
	Var0 = { func_189(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_text_database_has_loaded(&Var0))
		{
			return false;
		}
	}
	return true;
}

struct<4> func_284(int iParam0, int iParam1)
{
	Var0 = { func_333(iParam0, iParam1) };
	Var0.f_3 = func_513(iParam0, iParam1);
	return Var0;
}

void func_285(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_514(Global_35) && is_player_teleport_active())
	{
	}
	if (func_515(iParam0))
	{
		if (func_516(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_476(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_285(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_285(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_476(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_476(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_476(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_476(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_476(iParam5, 129))
	{
		if (func_476(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_476(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_476(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_476(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_515(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_476(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_476(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_286(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_287(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_449(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_449(iVar4) && iVar4 != iVar0)
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
	if (func_255() == -1 && !func_517(iVar0))
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
				if (func_517(-183018591))
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
		if (iParam0 != Global_35 && func_449(iVar0))
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
		func_518(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_519(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_520(iVar0))
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

void func_288(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (iParam3 == 0 && !does_entity_exist(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (is_entity_dead(iParam1) && !bParam5))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_521(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_291(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0]->f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0]->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_522(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_523(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_524(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_292(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_462(uParam0->f_13[iVar0], 2);
		}
	}
}

void func_289(int iParam0, int iParam1, char* sParam2)
{
	func_525(&(iParam0->f_958), iParam1, sParam2, 0);
}

void func_290(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!is_itemset_valid(iParam0->f_5))
	{
		return;
	}
	if (is_entity_a_ped(iParam1) && get_ped_index_from_entity_index(iParam1) == Global_35)
	{
		return;
	}
	if (!is_in_itemset(iParam1, iParam0->f_5))
	{
		add_to_itemset(iParam1, iParam0->f_5);
		if (is_entity_an_object(iParam1))
		{
			if (_0x26054eb81ac0893b(get_object_index_from_entity_index(iParam1)))
			{
				_0x2dd42fad06e6f19e(get_object_index_from_entity_index(iParam1), 1, 1);
			}
		}
		else if (is_entity_a_ped(iParam1))
		{
			iVar0 = get_ped_index_from_entity_index(iParam1);
			_0xbb1e41dd3d3c6250(iVar0, "SpMissionTriggers", 0);
			if (is_ped_human(iVar0))
			{
				_0x99b2a2e3655deaf1(iVar0, "ClosestScenario");
			}
			_0x1a5c5d350068a673(get_ped_index_from_entity_index(iParam1), 0);
			add_to_itemset(iParam1, iParam0->f_6);
		}
	}
}

int func_291(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_292(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

int func_293(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	if (!func_305(iParam0))
	{
		return 0;
	}
	iVar1 = func_526(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iVar1) && _0xa0bc8faed8cfeb3c(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

int func_294(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar1])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_295(int iParam0)
{
	return Global_43884 == iParam0;
}

Vector3 func_296(var uParam0, int iParam1)
{
	switch (&uParam0->f_1016[iParam1])
	{
		case 0:
			vVar7 = { uParam0->f_1016[iParam1]->f_4 - uParam0->f_1016[iParam1]->f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { func_527(vVar10) * Vector(2f, 2f, 2f) };
			*vVar0[0] = { uParam0->f_1016[iParam1]->f_1 + uParam0->f_1016[iParam1]->f_4 / Vector(2f, 2f, 2f) + vVar10 };
			get_ground_z_for_3d_coord(*vVar0[0], &(vVar0[0]->f_2), false);
			*vVar0[1] = { uParam0->f_1016[iParam1]->f_1 + uParam0->f_1016[iParam1]->f_4 / Vector(2f, 2f, 2f) - vVar10 };
			get_ground_z_for_3d_coord(*vVar0[1], &(vVar0[1]->f_2), false);
			if (!func_90(*vVar0[0]))
			{
				if (get_distance_between_coords(*vVar0[0], uParam0->f_1016[iParam1]->f_7, true) < get_distance_between_coords(*vVar0[1], uParam0->f_1016[iParam1]->f_7, true))
				{
					return *vVar0[1];
				}
				else
				{
					return *vVar0[0];
				}
			}
			break;
		case 1:
			fVar13 = 0f;
			if (uParam0->f_1016[iParam1]->f_13 < uParam0->f_1016[iParam1]->f_12)
			{
				fVar13 = ((uParam0->f_1016[iParam1]->f_12 + (uParam0->f_1016[iParam1]->f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_1016[iParam1]->f_12 + uParam0->f_1016[iParam1]->f_13) / 2f);
			}
			*vVar0[0] = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, (cos(fVar13) * (uParam0->f_1016[iParam1]->f_11 + 5f)), (sin(fVar13) * (uParam0->f_1016[iParam1]->f_11 + 5f))) };
			vVar0[0]->f_2 = (vVar0[0]->f_2 + 10f);
			get_ground_z_for_3d_coord(*vVar0[0], &(vVar0[0]->f_2), false);
			if (!func_90(*vVar0[0]))
			{
				return *vVar0[0];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_298(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 - (uParam0->f_1664 && iParam1));
}

bool func_299(var uParam0, int iParam1)
{
	return (uParam0->f_1666.f_1 && iParam1) != 0;
}

bool func_300(var uParam0, int iParam1)
{
	return func_528(uParam0->f_27, iParam1);
}

void func_301(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_group(iParam0))
		{
			remove_ped_from_group(iParam0);
		}
		set_ped_can_ragdoll(iParam0, true);
		set_ped_can_ragdoll_from_player_impact(iParam0, true);
	}
}

void func_302(int iParam0, int iParam1, char* sParam2)
{
	func_529(&(iParam0->f_428), iParam1, sParam2);
}

bool func_303(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_304(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_311(iParam0, 56, 1);
		func_19(&(Global_1359489->f_40), 1);
	}
	func_530(iParam0, 0);
	func_531(iParam0, 4, 0);
	func_532(iParam0);
	func_533(iParam0);
	func_309(iParam0, 37, 1);
	bVar0 = func_257(Global_1360165[iParam0], 0);
	iVar1 = func_534(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_507(iParam0, 64, 1))
	{
		func_309(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_309(iParam0, 33, 1);
		func_309(iParam0, 34, 1);
		func_535(iParam0, 1056964608, -1, 1061158912);
		func_536(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_311(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_311(iParam0, 35, 1);
			if (bParam8)
			{
				func_311(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_537(iParam0, 0);
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
		func_309(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_311(iParam0, 33, 1);
		func_536(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_19(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_248(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_311(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_538(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_507(iParam0, 45, 1))
	{
		func_309(iParam0, 45, 1);
	}
	func_539(iParam0, 16, 1);
	func_309(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_257(func_306(iParam0), 0))
		{
			func_153(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_305(int iParam0)
{
	return iParam0 > -1;
}

int func_306(int iParam0)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_307(int iParam0)
{
	if (!func_305(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_308(int iParam0)
{
	if (!func_305(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_309(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_305(iParam0))
		{
			return;
		}
	}
	func_540(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_310(int iParam0, int iParam1, bool bParam2)
{
	if (!func_305(iParam0))
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

void func_311(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_305(iParam0))
		{
			return;
		}
	}
	func_540(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_312(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_305(iParam0))
	{
		return 0;
	}
	iVar0 = func_306(iParam0);
	if (func_257(iVar0, 0))
	{
		if (func_257(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_307(iParam0)) || func_308(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_541(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_542(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_543(iParam0);
					_0x7b204f88f6c3d287(func_544(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_544(iParam0, 0));
					func_545(iParam0);
				}
			}
			else
			{
				if (func_264(iParam0, 32768, 1))
				{
					iVar2 = func_544(iParam0, 0);
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
		if (func_257((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_264(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_543(iParam0);
				_0x7b204f88f6c3d287(func_544(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_544(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_543(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_546(iParam0, 0);
	return 1;
}

bool func_313(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_314(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_314(int iParam0)
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

void func_315(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_547(iParam0, 32);
	func_548();
}

void func_316(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_317(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_319(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_319(iParam0);
	}
}

int func_317(int iParam0)
{
	iParam0 = func_209(iParam0);
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

bool func_318(int iParam0)
{
	iParam0 = func_209(iParam0);
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

void func_319(int iParam0)
{
	iParam0 = func_209(iParam0);
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

bool func_320(int iParam0)
{
	iVar0 = func_549(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

float func_321(int iParam0, int iParam1)
{
	return func_513(iParam0, iParam1);
}

int func_322(var uParam0, var uParam1)
{
	uParam1->f_10 = func_209(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_90(uParam1->f_6))
		{
		}
	}
	bVar0 = func_550();
	if (*uParam1)
	{
		if (bVar0 && !func_551((*Global_1835011)[4]->f_1, 1))
		{
			if (func_552(5))
			{
				func_553(5);
				func_554(5);
				func_440(0);
				func_439(0);
			}
		}
	}
	if (func_555(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_551((*Global_1835011)[37]->f_1, 1)) && !func_551((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_551((*Global_1835011)[43]->f_1, 1)) && !func_551((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_80(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_556(iVar1))
	{
		bVar3 = true;
		if (func_557(iVar1))
		{
			bVar4 = true;
		}
		if (func_558(iVar1))
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
				func_559(uParam1->f_10);
				*uParam0 = 0;
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
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_552(0) && func_552(1))
			{
				func_560(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_561())
			{
				func_562();
			}
			func_440(0);
			func_439(0);
			func_441(uParam1->f_6);
		}
	}
	if (!func_556(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_563(uParam1->f_10) == 0 || func_564(uParam1->f_10) == 0) || func_565(uParam1->f_10) == 0)
			{
				func_566(uParam1->f_10);
			}
			func_567(uParam1->f_10);
			func_568(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_80(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_556(iVar1))
	{
		bVar3 = true;
		if (func_557(iVar1))
		{
			bVar4 = true;
		}
		if (func_558(iVar1))
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
			if (!func_90(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_569(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*uParam0 = 0;
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
			Var8 = { func_570(uParam1->f_10) };
			Var10 = { func_571() };
			func_572(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_318(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_573(uParam1->f_10);
		if (uParam1->f_2 && !func_90(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_316(uParam1->f_10);
	if (func_318(uParam1->f_10))
	{
		iVar16 = func_317(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

bool func_323(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_324(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fParam5 = func_574(vParam1, fParam5);
	fVar0 = func_575(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
		set_particle_fx_looped_alpha(*uParam0, fVar0);
	}
}

void func_325(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fVar0 = (IntToFloat((get_frame_count() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		func_332(&(uParam0->f_1), 16);
		func_324(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_574(vParam1, fParam5);
		fVar1 = func_575(fParam5, iParam4);
		fVar3 = func_576(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_576(0f, fVar1, fVar0);
	}
	_0x9ddc222d85d5af2a(*uParam0, fVar3);
	set_particle_fx_looped_alpha(*uParam0, fVar2);
}

float func_326(float fParam0)
{
	fVar0 = func_577(fParam0);
	return fVar0;
}

float func_327(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 300f;
		case 2:
			return 1000f;
		default:
			break;
	}
	return 300f;
}

float func_328(float fParam0)
{
	fVar0 = func_577(fParam0);
	return fVar0;
}

float func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 25f;
		case 1:
			return 40f;
		case 3:
			return 200f;
		case 4:
			return 180f;
		case 2:
			return 150f;
		default:
			break;
	}
	return 128f;
}

float func_330(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		case 3:
			return 0.8f;
		case 4:
			return 0.5f;
		case 0:
			return 0.6f;
		case 2:
			return 0.9f;
		default:
			break;
	}
	return 1f;
}

float func_331(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_578(0) };
	vVar3 = { func_527(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

void func_332(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

Vector3 func_333(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1531.82f, -306.9691f, 141.4595f;
				case 1:
					return -1524.387f, -302.3769f, 141.8734f;
				case 2:
					return -1543.352f, -312.1166f, 142.3589f;
				case 3:
					return -1527.44f, -357.6743f, 173.5779f;
				case 4:
					return -1523.72f, -258.612f, 103.3279f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_334(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
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
	if (func_412(vParam1, 0f, 0f, 0f))
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
	bVar3 = func_195(iParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_579() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
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
			if (bParam9 == 1)
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
					if (bParam9 == 1)
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
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_335(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_335(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

bool func_335(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_336(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_580(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
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

void func_337(var uParam0)
{
	if (!func_63(uParam0, 134217728))
	{
		bVar0 = true;
		request_script_with_name_hash(-1181125641);
		if (!has_script_with_name_hash_loaded(-1181125641))
		{
			bVar0 = false;
		}
		request_anim_dict(func_581(1));
		if (!has_anim_dict_loaded(func_581(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_348(uParam0, 134217728);
		}
	}
}

void func_338(var uParam0, int iParam1, bool bParam2)
{
	if (is_screen_faded_out())
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_63(uParam0, 65536))
	{
		if (is_ped_falling(Global_35))
		{
			return;
		}
	}
	if (Global_1430231->f_4)
	{
		return;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return;
	}
	if (!func_63(uParam0, 16777216))
	{
		return;
	}
	if (_0x99f92061efe908ba())
	{
		return;
	}
	func_346(uParam0);
	func_582(uParam0, uParam0->f_1897, uParam0->f_1899);
	func_583(uParam0);
	if (uParam0->f_1900 && !uParam0->f_1899)
	{
		if (((((uParam0->f_1895 >= 0 && uParam0->f_1016[uParam0->f_1895]->f_17 > 0f) && uParam0->f_1688 >= 0) && !func_91(Global_35, uParam0->f_1016[uParam0->f_1688]->f_1, (uParam0->f_1016[uParam0->f_1895]->f_17 + 5f), 1, 1)) && !func_63(uParam0, 33554432)) && !func_63(uParam0, 4))
		{
			func_584(uParam0, uParam0->f_1897);
			return;
		}
	}
	if (!func_63(uParam0, 4))
	{
		if (func_585(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1684 = uParam0->f_1688;
				func_348(uParam0, 8);
				return;
			}
		}
		else
		{
			func_584(uParam0, uParam0->f_1897);
		}
		if (uParam0->f_1016[uParam0->f_1690]->f_29)
		{
			fVar0 = func_586(uParam0, uParam0->f_1690);
			if (fVar0 < 0f || (uParam0->f_1897 && fVar0 < 1f))
			{
				uParam0->f_1688 = uParam0->f_1690;
				if (!bParam2)
				{
					uParam0->f_1684 = uParam0->f_1690;
					func_348(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1689 == -1f || fVar0 <= uParam0->f_1689) || uParam0->f_1690 == uParam0->f_1688)
				{
					if (uParam0->f_1690 != uParam0->f_1688)
					{
					}
					uParam0->f_1688 = uParam0->f_1690;
					uParam0->f_1689 = fVar0;
					func_348(uParam0, 16);
					if (((!func_63(uParam0, 32) && iParam1 != 2) && !bParam2) && get_distance_between_coords(Global_36, uParam0->f_1016[uParam0->f_1688]->f_1, true) < (uParam0->f_1016[uParam0->f_1688]->f_11 + 5f))
					{
						func_587(uParam0);
						func_348(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1688 == uParam0->f_1690)
			{
				func_298(uParam0, 16);
			}
		}
		if (uParam0->f_1690 + 1 >= 8)
		{
			uParam0->f_1690 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1690 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_1016[iVar2]->f_29)
				{
					uParam0->f_1690 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1690 = 0;
			}
		}
		if (uParam0->f_1688 < 0)
		{
			return;
		}
		if (func_300(uParam0->f_1016[uParam0->f_1688], 2) && uParam0->f_1897)
		{
			return;
		}
	}
	if (func_63(uParam0, 16))
	{
		fVar4 = func_195(Global_35, uParam0->f_1016[uParam0->f_1688]->f_1, 1);
		if (uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688]->f_17 + 5f))
		{
			disable_control_action(0, -640622144, false);
		}
		fVar5 = func_447(Global_36, uParam0->f_1016[uParam0->f_1688]->f_1, 1);
		fVar6 = 2f;
		if (absf((fVar5 - get_entity_heading(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_1016[uParam0->f_1688]->f_17 || _0xf256a75210c5c0eb(uParam0->f_1875, uParam0->f_1879))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_1016[uParam0->f_1688]->f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[uParam0->f_1688]->f_1.f_2 + uParam0->f_1016[uParam0->f_1688]->f_10))
			{
				func_345(uParam0, uParam0->f_1016[uParam0->f_1688]->f_27, uParam0->f_1345[uParam0->f_1688]->f_1, fVar6);
			}
			if ((uParam0->f_1899 && _0xf256a75210c5c0eb(uParam0->f_1875, uParam0->f_1879)) && get_entity_speed(uParam0->f_1901) > 5f)
			{
				if (does_entity_exist(uParam0->f_1901) && !_0x404527bc03da0e6c(uParam0->f_1901))
				{
					bring_vehicle_to_halt(uParam0->f_1901, 1f, 2000, false);
				}
			}
			else if (does_entity_exist(uParam0->f_1901) && _0x404527bc03da0e6c(uParam0->f_1901))
			{
				_0x7c06330bfdda182e(uParam0->f_1901);
			}
		}
		else if ((uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688]->f_17 + 5f)) && !is_entity_dead(uParam0->f_1898))
		{
			set_ped_max_move_blend_ratio(uParam0->f_1898, 1f);
			disable_control_action(0, 1520437207, false);
		}
	}
	if (((uParam0->f_1897 && iVar3) && get_ped_desired_move_blend_ratio(uParam0->f_1898) > 1.25f) || func_63(uParam0, 4))
	{
		if (((_0xf256a75210c5c0eb(uParam0->f_1875, uParam0->f_1879) && func_586(uParam0, uParam0->f_1688) < 10000f) && func_63(uParam0, 16)) || func_63(uParam0, 4))
		{
			if (!func_63(uParam0, 4))
			{
				func_348(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_343(uParam0, uParam0->f_1688))
			{
				iVar7 |= 2048;
			}
			if (func_254(Global_35, &(uParam0->f_1686), iVar7, 0, 0, 1084227584, 100, uParam0->f_1016[uParam0->f_1688]->f_7, uParam0->f_1016[uParam0->f_1688]->f_7.f_1))
			{
				set_player_control(get_player_index(), true, 0, false);
				uParam0->f_1686 = 0;
				func_298(uParam0, 4);
			}
		}
	}
	else if (func_63(uParam0, 4))
	{
		func_298(uParam0, 4);
	}
}

int func_339(var uParam0)
{
	return *uParam0;
}

void func_340(var uParam0)
{
	if (is_screen_fading_out() || is_screen_faded_out())
	{
		return;
	}
	if (func_63(uParam0, 512))
	{
		return;
	}
	if (func_21(&(uParam0->f_1872)) < 2f)
	{
		return;
	}
	if (func_216(1, 0))
	{
		do_screen_fade_out(1000);
		func_348(uParam0, 524288);
	}
}

void func_341(bool bParam0)
{
	if (bParam0)
	{
		func_588(4);
	}
	func_588(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_342()
{
	Global_1905944->f_5695 = 1;
}

bool func_343(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0]->f_17 == 1 && uParam0->f_475[iVar0]->f_2 == 4) && &uParam0->f_475[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_344(var uParam0)
{
	return uParam0->f_2;
}

void func_345(var uParam0, var uParam1, var uParam2, float fParam3)
{
	if (func_528(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_528(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1897)
	{
		fParam3 = 0.55f;
		set_ped_reset_flag(uParam0->f_1898, 214, true);
	}
	if (uParam0->f_1896 && func_63(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_528(uParam1, 262144) && Global_1935630->f_44 == 2055893578)
	{
		iVar0 |= 16;
	}
	func_589(&iVar1, uParam2);
	func_590(&(uParam0->f_1904), iVar0, iVar1, fParam3);
	if (!Global_1935630->f_12)
	{
		if (!func_63(uParam0, 67108864))
		{
			set_ped_reset_flag(Global_35, 25, true);
		}
		set_ped_reset_flag(Global_35, 36, true);
	}
	func_591();
	func_592(uParam0, 1);
}

void func_346(var uParam0)
{
	iVar0 = uParam0->f_1688;
	if (iVar0 >= 0 && !func_352(uParam0, 2))
	{
		bVar1 = get_distance_between_coords(Global_36, uParam0->f_1016[iVar0]->f_1, true) <= uParam0->f_1016[iVar0]->f_16;
		Var2 = { uParam0->f_1692 };
		if (bVar1)
		{
			if (!is_string_null_or_empty(&(uParam0->f_1345[iVar0]->f_2)))
			{
				StringCopy(&(uParam0->f_1692), func_593(uParam0->f_1345[iVar0]->f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692), func_487(), 64);
			}
			if (!is_string_null_or_empty(&(uParam0->f_1345[iVar0]->f_10)))
			{
				StringCopy(&(uParam0->f_1692.f_8), func_593(uParam0->f_1345[iVar0]->f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692.f_8), func_594(), 64);
			}
			disable_control_action(0, -1722177808, false);
		}
		bVar18 = (!are_strings_equal(&Var2, &(uParam0->f_1692)) || !are_strings_equal(&(Var2.f_8), &(uParam0->f_1692.f_8)));
		if (bVar18 || !bVar1)
		{
			if (_0x927b810e43e99932(&Var2))
			{
				_0x0a5a4f1979abb40e(&Var2);
			}
		}
		if (bVar1 && !&uParam0->f_1345[iVar0])
		{
			if (!func_595(uParam0->f_1345[iVar0]->f_1, 8))
			{
				if (!func_595(uParam0->f_1345[iVar0]->f_1, 8))
				{
					func_589(&iVar19, uParam0->f_1345[iVar0]->f_1);
					func_596(&(uParam0->f_1904), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_1016[iVar0]->f_1 };
				iVar24 = -1;
				if (uParam0->f_1345[iVar0]->f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 35)
					{
						if (uParam0->f_3[iVar25] && does_entity_exist(uParam0->f_3[iVar25]->f_2))
						{
							if (uParam0->f_1345[iVar0]->f_20 == uParam0->f_3[iVar25]->f_3)
							{
								iVar23 = uParam0->f_3[iVar25]->f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (func_595(uParam0->f_1345[iVar0]->f_1, 16) && iVar24 >= 0)
							{
								if (!does_entity_exist(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1345[iVar0]->f_20]->f_2;
								}
								if (!does_entity_exist(iVar23) || get_ped_index_from_entity_index(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { get_entity_coords(iVar23, false, false) };
									iVar26 = get_interior_from_entity(iVar23);
									if (is_valid_interior(iVar26) && (!is_valid_interior(uParam0->f_1902) || iVar26 != uParam0->f_1902))
									{
										if (_0x927b810e43e99932(&(uParam0->f_1692)))
										{
											_0x0a5a4f1979abb40e(&(uParam0->f_1692));
											func_484(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1345[iVar0]->f_18 != 0f || uParam0->f_1345[iVar0]->f_19 != 0f)
								{
									vVar20 = { _get_object_offset_from_coords(vVar20, func_597(Global_35, iVar23, 1), uParam0->f_1345[iVar0]->f_18, 0f, uParam0->f_1345[iVar0]->f_19) };
								}
							}
							else if (uParam0->f_1345[iVar0]->f_18 != 0f || uParam0->f_1345[iVar0]->f_19 != 0f)
							{
								vVar20 = { _get_object_offset_from_coords(vVar20, func_447(Global_36, uParam0->f_1016[iVar0]->f_1, 1), uParam0->f_1345[iVar0]->f_18, 0f, uParam0->f_1345[iVar0]->f_19) };
							}
							fVar27 = uParam0->f_1016[iVar0]->f_16;
							fVar28 = uParam0->f_1016[iVar0]->f_14;
							bVar29 = func_595(uParam0->f_1345[iVar0]->f_1, 2);
							bVar30 = (func_595(uParam0->f_1345[iVar0]->f_1, 1) && !bVar29);
							bVar31 = func_595(uParam0->f_1345[iVar0]->f_1, 4);
							bVar32 = false;
							if (!_0x927b810e43e99932(&(uParam0->f_1692)))
							{
								_0xb8b207c34285e978(&(uParam0->f_1692));
								if (is_cinematic_cam_rendering())
								{
									func_598(0, 0);
								}
								bVar32 = true;
								func_484(uParam0, 16);
							}
							if (_0x4138ee36bc3dc0a7(&(uParam0->f_1692), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1708.f_16 != iVar23);
								bVar32 = (bVar32 || !func_599(uParam0->f_1708.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || absf((uParam0->f_1708.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || absf((uParam0->f_1708.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1708.f_22 != bVar30);
								uParam0->f_1708.f_16 = iVar23;
								uParam0->f_1708.f_17 = { vVar20 };
								uParam0->f_1708.f_20 = fVar27;
								uParam0->f_1708.f_21 = fVar28;
								uParam0->f_1708.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1708 = { uParam0->f_1692 };
									_0x8e036b41c37d0e5f(&(uParam0->f_1708));
								}
							}
							if (_0x4138ee36bc3dc0a7(&(uParam0->f_1692), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1731.f_16 != iVar23);
								bVar32 = (bVar32 || !func_599(uParam0->f_1731.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || uParam0->f_1731.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1731.f_21 != bVar30);
								uParam0->f_1731.f_16 = iVar23;
								uParam0->f_1731.f_17 = { vVar20 };
								uParam0->f_1731.f_20 = !bVar31;
								uParam0->f_1731.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1731 = { uParam0->f_1692 };
									_0x728491fb3dffef99(&(uParam0->f_1731));
								}
							}
							Jump @1466; //curOff = 1420
							if (_0x927b810e43e99932(&(uParam0->f_1692)))
							{
								_0x0a5a4f1979abb40e(&(uParam0->f_1692));
							}
							StringCopy(&(uParam0->f_1692), "", 64);
							StringCopy(&(uParam0->f_1692.f_8), "", 64);
							func_600(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

int func_347(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_601(uParam0, &iVar0))
	{
		func_602(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_348(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 || iParam1);
}

void func_349(var uParam0)
{
	if (func_339(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1688;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_1016[iVar0]->f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_1016[iVar0]->f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = uParam0->f_1016[iVar0]->f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = get_distance_between_coords(Global_36, uParam0->f_1016[iVar0]->f_1, false);
		fVar3 = absf((Global_36.f_2 - uParam0->f_1016[iVar0]->f_1.f_2));
		bVar4 = _does_volume_exist(uParam0->f_1875);
		if (bVar4)
		{
			vVar6 = { _0xf70f00013a62f866(uParam0->f_1875) };
			fVar5 = absf((vVar6.z - uParam0->f_1016[iVar0]->f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_1016[iVar0]->f_10 || (bVar4 && fVar5 <= uParam0->f_1016[iVar0]->f_10)))
		{
			iVar9 = get_interior_at_coords(uParam0->f_1016[iVar0]->f_1);
			if (!is_valid_interior(iVar9) || !is_valid_interior(uParam0->f_1902))
			{
				func_348(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1902 == iVar9)
			{
				func_348(uParam0, 65536);
				return;
			}
		}
		func_298(uParam0, 65536);
	}
}

void func_350(var uParam0, int iParam1)
{
	iVar2 = 0;
	if (func_8(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1894)
		{
			if (uParam0->f_475[iVar0]->f_7)
			{
				func_603(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_475[iVar0]->f_6)
			{
				bVar1 = func_604(uParam0, iVar0);
				if (bVar1)
				{
					func_605(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_343(uParam0, uParam0->f_1684))
		{
			func_606(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1691;
	while (iVar0 <= (uParam0->f_1894 - 1))
	{
		if (uParam0->f_475[iVar0]->f_7)
		{
			func_603(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_475[iVar0]->f_6)
		{
			bVar1 = func_604(uParam0, iVar0);
			if (bVar1)
			{
				func_605(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1691 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1691 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_351(var uParam0)
{
	if (is_itemset_valid(uParam0->f_1921))
	{
		iVar1 = get_itemset_size(uParam0->f_1921);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = get_indexed_item_in_itemset(iVar0, uParam0->f_1921);
			if (_does_item_have_valid_base(iVar2))
			{
				set_ped_reset_flag(get_ped_index_from_entity_index(_get_entity_from_item(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_352(var uParam0, int iParam1)
{
	return (uParam0->f_1665 && iParam1) != 0;
}

void func_353(var uParam0)
{
	func_607(&(uParam0->f_1904));
}

void func_354(var uParam0)
{
	uParam0->f_1665 = 0;
}

void func_355(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	func_608(uParam0, 4);
	if (func_609(uParam0, &uParam1, iParam5))
	{
		func_266(uParam0, 1);
	}
}

void func_356(var uParam0)
{
	if (!func_610(uParam0))
	{
		return;
	}
	if (!func_63(uParam0, 4194304))
	{
		func_611(uParam0);
		func_348(uParam0, 4194304);
	}
	if (func_612(uParam0))
	{
		func_613(uParam0);
		func_614(uParam0);
		func_266(uParam0, 2);
	}
}

void func_357(var uParam0)
{
	uParam0->f_1685 = -1;
	func_265(uParam0, 0);
	func_266(uParam0, 3);
	func_615(uParam0, 0);
	func_248(&(uParam0->f_1869));
	func_616(uParam0);
	func_248(&(uParam0->f_1872));
}

bool func_358(var uParam0)
{
	if (uParam0->f_1770)
	{
		return false;
	}
	return uParam0->f_1769;
}

void func_359()
{
	Global_18 = 1;
	Global_43884 = get_id_of_this_thread();
}

bool func_360(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (func_195(Global_35, uParam0->f_1016[uParam0->f_1684]->f_1, 0) < uParam0->f_1016[uParam0->f_1684]->f_14)
		{
			return true;
		}
		else if (uParam0->f_1016[uParam0->f_1684]->f_14 >= uParam0->f_1016[uParam0->f_1684]->f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_361(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (func_195(Global_35, uParam0->f_1016[uParam0->f_1684]->f_1, 0) < uParam0->f_1016[uParam0->f_1684]->f_15)
		{
			return true;
		}
		else if (uParam0->f_1016[uParam0->f_1684]->f_15 >= uParam0->f_1016[uParam0->f_1684]->f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_362(var uParam0, int iParam1)
{
	if (uParam0->f_1685 < 0)
	{
		return true;
	}
	switch (uParam0->f_475[uParam0->f_1685]->f_2)
	{
		case 4:
			if (get_script_task_status(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (func_48(&(uParam0->f_1872)) >= 15f)
			{
				func_348(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1768)
			{
				if (func_48(&(uParam0->f_1872)) >= 15f)
				{
					func_348(uParam0, 32768);
					return true;
				}
				if (_does_anim_scene_exist(func_617(uParam0)) && _is_anim_scene_started(func_617(uParam0), false))
				{
					uParam0->f_1768 = 1;
				}
			}
			else
			{
				fVar0 = _get_anim_scene_progress(func_617(uParam0));
				bVar1 = _is_anim_scene_finished(func_617(uParam0), false);
				bVar2 = _is_anim_scene_active(func_617(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return func_48(&(uParam0->f_1872)) >= 15f;
	}
	return false;
}

bool func_363(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0]->f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_364(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0]->f_17 == 2 && func_618(uParam0->f_475[iVar0], 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_365(int iParam0, int iParam1, bool bParam2, int iParam3)
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

struct<8> func_366(var uParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		StringCopy(&cVar0, func_521(iParam1), 64);
		if (!is_string_null_or_empty(&cVar0))
		{
			iVar8 = func_619(uParam0, iParam1);
			if (iVar8 > 0)
			{
				StringConCat(&cVar0, "^", 64);
				StringIntConCat(&cVar0, iVar8, 64);
			}
		}
	}
	return cVar0;
}

bool func_367(var uParam0, int iParam1)
{
	return (uParam0->f_9 && iParam1) != 0;
}

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	if (!bParam4)
	{
		if (func_74(0, 0, 1))
		{
			return;
		}
	}
	if (Global_43837 >= 5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!_does_anim_scene_exist(&(Global_43806[iVar0])))
		{
			Global_43806[iVar0] = iParam0;
			Global_43806[iVar0]->f_1 = get_id_of_this_thread();
			Global_43806[iVar0]->f_3 = iParam1;
			Global_43806[iVar0]->f_4 = iParam2;
			Global_43806[iVar0]->f_5 = iParam3;
			Global_43837++;
			return;
		}
		iVar0++;
	}
}

Vector3 func_369(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_370(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_371(vector3 vParam0, int iParam3)
{
	if (func_90(vParam0))
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
			if (func_599(vVar2, vParam0, 2f, 1))
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

bool func_372(var uParam0)
{
	return *uParam0 != 0;
}

bool func_373(var uParam0, int iParam1)
{
	iVar0 = func_620(iParam1);
	return (uParam0 && iVar0) != 0;
}

void func_374(var uParam0)
{
	if (!func_621(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_622(&(uParam0->f_1), 1);
	}
}

bool func_375(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_376(var uParam0)
{
	if (!func_621(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				request_waypoint_recording(*uParam0);
				break;
			case 1:
				request_vehicle_recording(uParam0->f_2, *uParam0);
				break;
			default:
				break;
		}
		func_622(&(uParam0->f_3), 1);
	}
}

bool func_377(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_378(var uParam0)
{
	if (!func_621(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_622(&(uParam0->f_1), 1);
	}
}

bool func_379(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_380(var uParam0)
{
	if (func_621(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_621(uParam0->f_1, 1))
	{
		func_623(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_622(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_381(var uParam0)
{
	if (func_621(*uParam0, 2))
	{
		return true;
	}
	if (!func_621(*uParam0, 1))
	{
		func_624(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_622(uParam0, 2);
		return true;
	}
	return false;
}

bool func_382(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_383(var uParam0)
{
	if (!func_621(uParam0->f_2, 1))
	{
		if (func_495(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_416(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_262())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_625())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_622(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_384(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_385(var uParam0, int iParam1)
{
	if (!func_621(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_622(&(uParam0->f_1), 1);
	}
}

bool func_386(var uParam0)
{
	return *uParam0 != 0;
}

void func_387(var uParam0)
{
	if (!func_621(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_622(&(uParam0->f_2), 1);
	}
}

bool func_388(var uParam0)
{
	return *uParam0 != 0;
}

void func_389(var uParam0)
{
	if (!func_621(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_622(&(uParam0->f_3), 1);
	}
}

bool func_390(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_391(var uParam0)
{
	if (!func_621(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_622(&(uParam0->f_1), 1);
	}
}

bool func_392(var uParam0)
{
	return func_626(*uParam0);
}

void func_393(var uParam0)
{
	if (!func_621(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_622(&(uParam0->f_1), 1);
	}
}

bool func_394(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_395(var uParam0)
{
	if (!func_621(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_622(&(uParam0->f_2), 1);
	}
}

bool func_396(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_397(var uParam0)
{
	if (!func_621(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_622(&(uParam0->f_1), 1);
	}
}

int func_398(int iParam0)
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

int func_399(int iParam0)
{
	return iParam0 & 31;
}

int func_400(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

struct<8> func_401(var uParam0)
{
	return uParam0->f_454;
}

struct<8> func_402()
{
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

bool func_403(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_79((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_404(int iParam0)
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

var func_405(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_627(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_406(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1393237->f_11)
	{
		if (_0xf256a75210c5c0eb(iParam0, Global_1393237->f_11[iVar0]->f_3))
		{
			func_628(iVar0, 4096, 0);
			func_628(iVar0, 131072, 0);
			func_629(iVar0, 1);
		}
		iVar0++;
	}
}

int func_407(int iParam0, char[4] cParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_630(vVar0, vVar3.x, cParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_408(var uParam0, char* sParam1, bool bParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (func_631(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (is_string_null_or_empty(uParam0->f_462[iVar0]))
		{
			if (!func_632(uParam0, sParam1) || func_83(uParam0, 8388608))
			{
				StringCopy(uParam0->f_462[iVar0], sParam1, 64);
				if (!bParam2)
				{
					if (_does_anim_scene_exist(uParam0->f_444) && _is_anim_scene_loaded(uParam0->f_444, true, false))
					{
						if (_0xa9016536015de29d(uParam0->f_444, sParam1))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_444, sParam1);
						}
					}
					else
					{
						func_96(uParam0, 4194304);
					}
				}
				else
				{
					func_96(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

void func_409(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_633(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_633(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_634(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_451(8);
}

void func_410(var uParam0)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
}

struct<8> func_411()
{
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_412(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_413(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_414(int iParam0)
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

void func_415(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_414(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_635(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_636(iVar0);
	*uParam0 = 0;
}

char* func_416(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return "Arthur";
		case -1464743433:
			return "Abe";
		case 1483156731:
			return "EdmundLowry";
		case -1418951751:
			return "ABERDEENPIGFARMER";
		case 2029634351:
			return "ABERDEENSISTER";
		case -288068792:
			return "AbigailRoberts";
		case 513427234:
			return "AlbertMason";
		case -121985991:
			return "ArchieDown";
		case -205121720:
			return "Baptiste";
		case -77509825:
			return "BartholomewBraithwaite";
		case -55633154:
			return "CS_BEATENUPCAPTAIN";
		case 1266159496:
			return "BeauGray";
		case -2045269112:
			return "PenelopeBraithwaite";
		case 2070393450:
			return "BillWilliamson";
		case 477547053:
			return "BraithwaiteServant";
		case 1382164045:
			return "CatherineBraithwaite";
		case 1407031519:
			return "CharlesSmith";
		case -754733870:
			return "CS_CIGCARDGUY";
		case 1253299569:
			return "CS_DINOBONESLADY";
		case -464684897:
			return "Cleet";
		case -820975767:
			return "ColmODriscoll";
		case -1765531164:
			return "CreoleGuy";
		case -820854800:
			return "SDDoctor_01";
		case 382040614:
			return "DaleMaroney";
		case 1944593012:
			return "Dutch";
		case -450226655:
			return "EdithDown";
		case -1920451728:
			return "Fussar";
		case 1514128030:
			return "cs_fishcollector";
		case -1865855539:
			return "Bronte";
		case -1629501717:
			return "GuidoMartelli";
		case -1208814201:
			return "U_M_M_NBXBRONTEGOON_01";
		case 1478983280:
			return "G_M_M_UNIBRONTEGOONS_01";
		case -1769295812:
			return "GarethBraithwaite";
		case 1020041649:
			return "GenStoryFemale";
		case -639059862:
			return "GenStoryMale";
		case -920985758:
			return "Leon";
		case -1154137714:
			return "GeraldBraithwaite";
		case 1225208808:
			return "HoseaMatthews";
		case 1912073755:
			return "JackMarston";
		case -631664452:
			return "JackMarston_Teen";
		case 4991732:
			return "Jamie";
		case 1843625996:
			return "JavierEscuella";
		case 1815090590:
			return "JimCalloway";
		case -446093729:
			return "Joe";
		case 95866989:
			return "JohnMarston";
		case 2100656433:
			return "CS_JOHNWEATHERS";
		case 1006468445:
			return "JosiahTrelawny";
		case -1707202053:
			return "Karen";
		case 358502875:
			return "MrsAdler";
		case 1939579094:
			return "Kieran";
		case -100461901:
			return "LeoStrauss";
		case 1304311224:
			return "LondonderrySon";
		case -1690877284:
			return "MaryBeth";
		case 1051047356:
			return "MaryLinton";
		case -566878875:
			return "MicahBell";
		case -346700962:
			return "MollyOshea";
		case -272634447:
			return "CS_MrLinton";
		case 984264800:
			return "MrPearson";
		case 1367851675:
			return "MrsLondonderry";
		case -2075588078:
			return "Mud2BigGuy";
		case 2115504616:
			return "ProfessorBell";
		case 1618031732:
			return "RevSwanson";
		case -265719023:
			return "CS_Samaritan";
		case -1483559144:
			return "StrDeputy_01";
		case -572941403:
			return "StrDeputy_02";
		case -2081966149:
		case 2012148102:
			return "StrSheriff_01";
		case 1695129705:
			return "SusanGrimshaw";
		case 1407740785:
			return "TavishGray";
		case 1231309423:
			return "TheodoreLevin";
		case 65010948:
			return "ThomasDown";
		case 1038525765:
			return "Tilly";
		case -969464097:
			return "Uncle";
		case 1057570823:
			return "G_M_M_UniCriminals_01";
		case 347599949:
			return "G_M_M_UNIDUSTER_01";
		case -1884146832:
			return "CS_VALSHERIFF";
		case 826385717:
			return "S_M_M_MARSHALLSRURAL_01";
		case -831368594:
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case -522739022:
			return "Sean";
		case -122790003:
			return "Lenny";
		case 1276534479:
			return "Hercule";
		case -781994133:
			return "CreoleCaptain";
		case -628794682:
			return "U_M_M_CREOLECAPTAIN_01";
		case 1999476738:
			return "RingMaster";
		case -1221341425:
			return "U_M_M_VALBARTENDER_01";
		case -439429058:
			return "A_M_M_EMRFARMHAND_01";
		case -1646366239:
			return "A_M_M_GriSurvivalist_01";
		case 1439158431:
			return "LillyMillet";
		case -1384606398:
			return "A_F_M_STRTOWNFOLK_01";
		case 1127589605:
			return "A_M_M_STRTOWNFOLK_01";
		case 413771941:
			return "S_M_M_STRLUMBERJACK_01";
		case -1990962020:
			return "G_M_M_UniCriminals_02";
		case -1818007055:
			return "G_M_M_UNICORNWALLGOONS_01";
		case 79156795:
			return "A_M_M_NBXUPPERCLASS_01";
		case -1039531072:
			return "A_F_M_NBXUPPERCLASS_01";
		case 525529657:
			return "A_M_M_VALFARMER_01";
		case -2087759666:
			return "A_M_M_VALTOWNFOLK_01";
		case -1789856687:
			return "A_M_M_VALTOWNFOLK_02";
		case -161027961:
			return "A_F_M_VALTOWNFOLK_01";
		case 518339740:
			return "U_M_M_NBXBARTENDER_01";
		case 2041494024:
			return "NBXExecuted";
		case -944019243:
			return "RHODEPUTY_01";
		case -949242502:
			return "RHDSHERIFF_01";
		case -1745321414:
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case 273671859:
			return "U_M_M_StrGenStoreOwner_01";
		case -1161832176:
			return "TomDickens";
		case -1632694866:
			return "DavidGeddes";
		case 1446935015:
			return "ANSEL_ATHERTON";
		case -1101883765:
			return "CS_Wrobel";
		case -50684386:
			return "COW";
		case 195700131:
			return "BULL";
		case 686051865:
			return "ALBERTCAKEESQUIRE";
		case 1767420034:
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case -1033903759:
			return "A_C_DOGCATAHOULACUR_01";
		case 1591685812:
			return "A_C_DOGRUFUS_01";
		case -896926592:
			return "A_C_DOGLION_01";
		case -695175124:
			return "Handler";
		case 1891548111:
			return "VALAUCTIONBOSS_01";
		case -1049237750:
			return "NbxReceptionist_01";
		case -1206299098:
			return "U_M_M_BiVForeman_01";
		case -532378284:
			return "U_M_M_RACFOREMAN_01";
		case -2075028835:
			return "CHAINPRISONER_01";
		case -211291960:
			return "CHAINPRISONER_02";
		case -692960126:
			return "U_M_M_ValPokerPlayer_01";
		case 60202542:
			return "U_M_M_ValPokerPlayer_02";
		case -1614719852:
			return "DUNCANGEDDES";
		case -167880668:
			return "ANGUSGEDDES";
		case 743219360:
			return "EvelynMiller";
		case -2086875988:
			return "SISTERCALDERON";
		case -46607261:
			return "EDGARROSS";
		case 54030454:
			return "U_M_M_GriSurvivalist_01";
		case -378814141:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case -140869950:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case 1726657594:
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case 1057932105:
			return "StationWorker";
		case 1294255258:
			return "LEVISIMON";
		case -384354290:
			return "S_M_M_GULFUSSARS_01";
		case 1772321403:
			return "A_C_DONKEY_01";
		case 223197487:
			return "S_M_M_ISPWORKER_01";
		case 355963118:
			return "S_M_M_ISPWORKER_02";
		case -1874017143:
			return "U_M_O_ValBartender_01";
		case 219322615:
			return "U_M_M_NBXBARTENDER_02";
		case -2014377075:
			return "CS_UNIDUSTERJAIL_01";
		case 977834008:
			return "A_M_M_RHDTOWNFOLK_01";
		case 2052768310:
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case -1332334928:
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case 482703333:
			return "BrotherDorkins";
		case 731029607:
			return "G_M_M_UniBraithwaites_01";
		case -1918128574:
			return "A_M_M_GAMHIGHSOCIETY_01";
		case 292812873:
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case -1772051411:
			return "EagleFlies";
		case -2046943672:
			return "CS_RAINSFALL";
		case 830712509:
			return "A_M_M_WapWarriors_01";
		case 264503396:
			return "A_M_Y_NBXSTREETKIDS_01";
		case -2044758506:
			return "U_M_M_BHT_SHACKESCAPE";
		case -1445135526:
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case 988668512:
			return "LemiuxAssistant";
		case -1608851079:
			return "p_keys01x";
		case 624882545:
			return "CS_BALLOONOPERATOR";
		case -1820002752:
			return "Worker1";
		case 1624257462:
			return "U_M_M_BHT_MINEFOREMAN";
		case 1453686794:
			return "A_M_M_NbxSlums_01";
		case -454661055:
			return "U_M_M_NBXPRIEST_01";
		case -1124266369:
			return "A_C_BEAR_01";
		case 960530301:
			return "MARSHALL_THURWELL";
		case 1347320453:
			return "CS_FAMOUSGUNSLINGER_02";
		case -290265603:
			return "cs_sd_streetkid_01";
		case 1861707396:
			return "cs_sd_streetkid_02";
		case 68512371:
			return "ObediahHinton";
		case 774211111:
			return "PoisonWellShaman";
		case 1923327795:
			return "A_M_M_EMRFARMHAND_01";
		case 722156226:
			return "u_m_m_bht_benedictallbright";
		case -1258801034:
			return "Jules";
		case -1466017978:
			return "MRDEVON";
		case 1101050871:
			return "MRWAYNE";
		case -1135378761:
			return "PAYTAH";
		case 1812458547:
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case -310853585:
			return "A_M_M_NBXDOCKWORKERS_01";
		case -1817144219:
			return "U_M_M_VALSHERIFF_01";
		case 1086659483:
			return "S_M_M_BANKCLERK_01";
		case 1112571710:
			return "U_M_M_NBXBRONTEASC_01";
		case -363708904:
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_417(int iParam0)
{
	return iParam0 != 0;
}

bool func_418(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_419(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_418(iVar0, 2))
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
		func_637(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_420(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_414(iParam0))
	{
		return;
	}
	iVar0 = func_635(iParam0);
	func_638(iVar0, bParam1);
}

void func_421(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_414(iParam0))
	{
		return;
	}
	iVar0 = func_635(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_422(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_414(iParam0))
	{
		return;
	}
	iVar0 = func_635(iParam0);
	if (bParam1)
	{
		func_639(iParam0, 4);
		func_638(iVar0, 1);
		func_640(iVar0, 1);
	}
	else
	{
		func_641(iParam0, 4);
		func_640(iVar0, 0);
	}
}

float func_423(int iParam0, bool bParam1)
{
	if (bParam1 && !func_414(iParam0))
	{
		return 0f;
	}
	iVar0 = func_635(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_424(int iParam0, bool bParam1)
{
	if (bParam1 && !func_414(iParam0))
	{
		return false;
	}
	iVar0 = func_635(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_425(var uParam0)
{
	Var0 = { func_201(uParam0) };
	Var8 = { func_182(uParam0) };
	return are_strings_equal(&Var0, &Var8);
}

bool func_426(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_642(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_427(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	Var0 = { func_201(uParam0) };
	if ((!are_strings_equal(&Var0, sParam1) && _0xa9016536015de29d(uParam0->f_444, sParam1)) && _0x23e33cb9f4a3f547(uParam0->f_444, sParam1))
	{
		_0xae6ada8fe7e84acc(uParam0->f_444, sParam1);
	}
}

void func_428(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (_0x9d1eca9337be9fc3(uParam0->f_444, sParam1))
		{
			iParam3 = 0;
		}
	}
	set_anim_scene_entity(uParam0->f_444, sParam1, iParam2, iParam3);
}

void func_429(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	clear_ped_blood_damage(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		_clear_ped_blood_damage_facial(iParam0, iVar0);
		iVar0++;
	}
}

bool func_430(int iParam0)
{
	if (-1829635046 == func_643(81053684))
	{
		if (func_644(iParam0))
		{
			return true;
		}
	}
	else if (func_645(-525676072, iParam0))
	{
		if (func_644(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_431(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_432(int iParam0)
{
	if (!func_431(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_433(int iParam0, bool bParam1)
{
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + get_entity_health(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		_0x835f131e7dc8f97a(Global_35, to_float(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > get_entity_max_health(Global_35, false))
	{
		_set_entity_health(Global_35, get_entity_max_health(Global_35, false), 0);
	}
	else
	{
		_set_entity_health(Global_35, iVar1, 0);
	}
}

void func_434(int iParam0)
{
	if (func_255() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		_restore_ped_stamina(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		_charge_ped_stamina(Global_35, to_float((iParam0 * iVar0)));
	}
}

void func_435(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_449(iVar3) && _0x705be297eebdb95d(iVar3))
			{
				if (bParam0)
				{
					if (get_ammo_in_ped_weapon(Global_35, iVar3) < _get_weapon_clip_size(iVar3) * 4)
					{
						_add_ammo_to_ped_by_type(Global_35, _get_ammo_type_for_weapon(iVar3), (_get_weapon_clip_size(iVar3) * 4 - get_ped_ammo_by_type(Global_35, get_ped_ammo_type_from_weapon(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = get_ammo_in_ped_weapon(Global_35, iVar3);
				if (iVar0 > _get_weapon_clip_size(iVar3))
				{
					iVar1 = _get_weapon_clip_size(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					set_ammo_in_clip(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && _0x21091b4beb6376ee(get_player_index()) == 0)
	{
		func_646(1);
	}
}

void func_436()
{
	iVar0 = func_448(Global_35, 9, 1, 0);
	if (func_449(iVar0))
	{
		return;
	}
	iVar0 = func_448(Global_35, 7, 1, 0);
	if (func_449(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_448(Global_35, 0, 1, 0);
	if (func_449(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_448(Global_35, 1, 1, 0);
	if (func_449(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_448(Global_35, 18, 1, 0);
	if (func_449(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_647();
	if (func_449(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_287(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_648(6291456, 0);
	if (func_449(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_287(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_437()
{
	return Global_1900383->f_393;
}

int func_438(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_412(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_439(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_440(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_441(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_442()
{
	return &Global_1899515;
}

void func_443(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

bool func_444()
{
	return (func_649() || func_650());
}

Vector3 func_445(var uParam0)
{
	return uParam0->f_505;
}

float func_446(var uParam0)
{
	return uParam0->f_508;
}

float func_447(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_448(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_449(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_450(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_451(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_452(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_457(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_651(iParam4);
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

bool func_453(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_454(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_466(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_455(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_456(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_454(1108822547, 6))
	{
		if (bParam2)
		{
			func_452(iParam0, iVar0, func_255() != -1, 0, 0);
			func_458(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_459(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_457(int iParam0, int iParam1)
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

void func_458(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_466(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_466(iParam0, 1)])->f_10 || iParam1);
}

void func_459(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_466(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_466(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_466(iParam0, 1)])->f_10 && iParam1));
}

void func_460(var uParam0)
{
	uParam0->f_454 = { Var0 };
}

void func_461(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_462[iVar0], "", 64);
		iVar0++;
	}
}

void func_462(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

void func_463()
{
	Global_1911774 = 1;
}

struct<5> func_464(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_652(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_653(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_473(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_654(bParam1) };
			if (bParam2 && func_655(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_656(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_656(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_657(iParam0, &Var5, 1728382685))
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
			Var0 = { func_658(bParam1) };
			switch (func_432(iParam0))
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
			if (func_659(iParam0, -1823706425))
			{
				Var0 = { func_473(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_659(iParam0, -1483207246))
			{
				Var0 = { func_473(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_660(Var0, &Var27, bParam1, 0))
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

int func_465(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_457(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_466(int iParam0, int iParam1)
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

bool func_467(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_661();
	if (iParam2 == 39)
	{
		Var0 = { func_464(iParam0, 1, 0) };
		iParam2 = func_466(func_465(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_662(iParam0, 866047851) && func_663(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_453(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_664(func_457(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_665(iParam2);
	func_666(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_667(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_667(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_668(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_669(iParam0, iParam2, iParam1, func_255() != -1);
	if (bParam4)
	{
		func_670(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_670(&(Global_1946804->f_1378), 1, 0);
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
				func_459(func_457(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_468(bool bParam0, bool bParam1, bool bParam2)
{
	func_671(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_469(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_451(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_672(Var0);
}

void func_470()
{
	func_673(&(Global_1946804->f_2776));
	func_674(32768);
	func_459(1108822547, 8, 6);
}

int func_471(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_466(iParam0, 1);
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

void func_472(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_409(Var0);
}

struct<4> func_473(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_431(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_475(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_474(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_431(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_473(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_475(bParam6), &Var0, 0);
	return uVar4;
}

int func_475(bool bParam0)
{
	if (func_255() == -1)
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

bool func_476(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_477(int iParam0, int iParam1)
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

bool func_478(int iParam0)
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
	if (func_477(iParam0, 1041577989))
	{
		return false;
	}
	if (is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_479(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_675(vVar0, vVar3, vParam1);
}

void func_480(int iParam0, int iParam1)
{
	func_676(iParam0, iParam1);
}

bool func_481(int iParam0, int iParam1)
{
	if (!func_477(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = _0xa710dc5d25f8b942(iParam0, 1041577989);
	if (func_476(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_476(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_476(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_482(int iParam0, int iParam1)
{
	func_677(iParam0, iParam1);
}

void func_483(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		uVar2 = func_678(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_679(1, bVar1, 1, uVar2);
		func_680(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_681(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_682();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_681(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_681(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_484(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 || iParam1);
}

bool func_485(var uParam0, int iParam1)
{
	return (uParam0->f_26 && iParam1) != 0;
}

char* func_486(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}
	return "Disabled";
}

char* func_487()
{
	return "default_leadin_camera";
}

void func_488()
{
	set_script_with_name_hash_as_no_longer_needed(-1181125641);
	remove_anim_dict(func_581(1));
}

bool func_489(int iParam0)
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
		iVar0 = func_683(iParam0);
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

void func_490(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_491(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_492(var uParam0)
{
	if (func_621(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_621(uParam0->f_1, 1))
	{
		func_374(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_622(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_493(var uParam0)
{
	if (func_621(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_621(uParam0->f_3, 1))
	{
		func_376(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_622(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_622(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_494(var uParam0)
{
	if (func_621(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_621(uParam0->f_1, 1))
	{
		func_378(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_622(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_495(var uParam0)
{
	if (func_621(uParam0->f_2, 1))
	{
		return true;
	}
	if (!uParam0->f_66)
	{
		return false;
	}
	if (uParam0->f_65 <= 0f)
	{
		return true;
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
	{
		_get_anim_scene_origin(uParam0->f_1, &vVar0, &uVar3, 2);
		if (get_distance_between_coords(Global_36, vVar0, true) > uParam0->f_65)
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_496(var uParam0)
{
	if (func_621(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_621(uParam0->f_2, 1))
	{
		func_383(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_622(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_497(var uParam0, int iParam1)
{
	if (func_621(uParam0->f_1, 2))
	{
		return true;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(iParam1, true, false))
	{
		return false;
	}
	if (!func_621(uParam0->f_1, 1))
	{
		func_385(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_622(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_498(var uParam0)
{
	if (func_621(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_621(uParam0->f_2, 1))
	{
		func_387(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_622(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_499(var uParam0)
{
	if (func_621(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_621(uParam0->f_3, 1))
	{
		func_389(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_622(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_500(var uParam0)
{
	if (func_621(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_621(uParam0->f_1, 1))
	{
		func_391(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_622(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_501(var uParam0)
{
	if (func_621(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_621(uParam0->f_1, 1))
	{
		func_393(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_622(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_502(var uParam0)
{
	if (func_621(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_621(uParam0->f_2, 1))
	{
		func_395(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_622(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_503(var uParam0)
{
	if (func_621(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_621(uParam0->f_1, 1))
	{
		func_397(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_622(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_504(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

bool func_505(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (!is_itemset_valid(iParam0->f_5))
	{
		return false;
	}
	return is_in_itemset(iParam1, iParam0->f_5);
}

int func_506(int iParam0)
{
	if (func_114(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

bool func_507(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_305(iParam0))
		{
			return false;
		}
	}
	func_540(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

int func_508(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_507(iParam0, 2, 1))
			{
				func_309(iParam0, 2, 1);
			}
			if (func_264(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_311(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_304(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_257(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_257(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_684(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_311(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_685(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_311(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_685(iParam0, 1);
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
			if (!func_507(iParam0, 44, 0))
			{
				func_311(iParam0, 44, 0);
			}
			if (func_686(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_685(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_309(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_536(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_511(iParam0, 0, 0, 1);
			}
			func_309(iParam0, 33, 1);
			func_309(iParam0, 34, 1);
			func_309(iParam0, 29, 1);
			if (!func_90(vVar0) && bParam7)
			{
				func_685(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_685(iParam0, 4);
			}
			else
			{
				func_685(iParam0, 5);
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
						func_684(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_285(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_685(iParam0, 4);
			}
			else
			{
				func_685(iParam0, 5);
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
				if (func_687(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_688(iParam0, iParam13, 0);
						func_689(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_507(iParam0, 25, 0))
						{
							func_309(iParam0, 25, 0);
						}
						func_311(iParam0, 66, 0);
						func_685(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_685(iParam0, 5);
				}
				func_311(iParam0, 28, 1);
			}
			else
			{
				func_685(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_685(iParam0, 6);
			}
			break;
		case 6:
			if (func_257(Global_1360165[iParam0], 0))
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
					func_690(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_691(Global_1360165[iParam0], 1);
				}
			}
			func_685(iParam0, 7);
		case 7:
			func_536(iParam0, bParam9, bParam15, 0);
			func_531(iParam0, 4, bParam11);
			func_533(iParam0);
			if (bParam20)
			{
				if (func_692(Global_1360165[iParam0]))
				{
				}
			}
			func_693(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_685(iParam0, 0);
			func_694(iParam0, 16, 1);
			func_309(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_509(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!is_itemset_valid(iParam0->f_7))
	{
		return;
	}
	if (is_entity_a_ped(iParam1) && get_ped_index_from_entity_index(iParam1) == Global_35)
	{
		return;
	}
	if (!is_in_itemset(iParam1, iParam0->f_7))
	{
		add_to_itemset(iParam1, iParam0->f_7);
	}
}

void func_510(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iParam0))
	{
		set_entity_as_mission_entity(iParam0, true, true);
	}
	if (bParam2 && (!func_169() || !_0x6f1f0b17109309da(Global_43800, func_213(iParam0))))
	{
		if (is_ped_on_mount(iParam0))
		{
			_remove_ped_from_mount(iParam0, true, false);
		}
		clear_ped_tasks_immediately(iParam0, false, true);
		if (!Global_1935630->f_12)
		{
			if (bParam1)
			{
				freeze_entity_position(iParam0, true);
			}
		}
		force_ped_motion_state(iParam0, -1871534317, true, 0, false);
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	set_ped_relationship_group_hash(iParam0, 1030835986);
	_set_entity_health(iParam0, get_entity_max_health(iParam0, false), 0);
	if (bParam3)
	{
		func_692(iParam0);
	}
}

void func_511(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_695(iParam0, bParam3);
	}
	else
	{
		func_696(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_697(iParam0, bParam3);
	}
	else
	{
		func_698(iParam0, bParam3);
	}
}

void func_512(int iParam0)
{
	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

float func_513(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 198f;
				case 1:
					return -1052f;
				case 2:
					return 265.4765f;
				case 3:
					return 359f;
				case 4:
					return 359f;
			}
			break;
	}
	return 0f;
}

int func_514(var uParam0)
{
	return uParam0;
}

bool func_515(int iParam0)
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

bool func_516(int iParam0)
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

bool func_517(int iParam0)
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

int func_518(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_464(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_699((386 + iVar28), 1);
			if (func_656(iParam0, &Var0, iVar5, 0))
			{
				if (func_657(iParam0, &Var6, iVar5))
				{
					Var29 = { func_473(iParam0, Var0, iVar5, 0) };
					func_700(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_701(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_702(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_703(iParam0, iParam1);
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

void func_519(int iParam0, int iParam1, float fParam2)
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

bool func_520(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

char* func_521(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_213(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_704(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_705(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_522(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_523(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 35)
	{
		if (&uParam0->f_13[iVar12] == iParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_524(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!does_entity_exist(&(uParam0->f_13[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_525(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_706(uParam0);
	iVar0 = func_707(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_521(iParam1);
		}
		iVar0 = func_708(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_709(uParam0);
		}
		else
		{
			Var1.f_10 = -1569615261;
			_copy_memory(uParam0->f_3[iVar0], &Var1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = func_709(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0]->f_2 = iParam1;
	uParam0->f_3[iVar0]->f_1 = get_entity_model(iParam1);
	if (is_string_null_or_empty(uParam0->f_3[iVar0]->f_9))
	{
		uParam0->f_3[iVar0]->f_9 = sParam2;
	}
	else if (!is_string_null_or_empty(sParam2))
	{
		if (!are_strings_equal(uParam0->f_3[iVar0]->f_9, sParam2))
		{
		}
		uParam0->f_3[iVar0]->f_9 = sParam2;
	}
	func_348(uParam0, 2);
}

int func_526(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	if (!func_305(iParam1))
	{
		return 0;
	}
	iVar0 = func_306(iParam1);
	if ((!does_entity_exist(iVar0) || !func_257(iVar0, 0)) || (bParam3 && !func_308(iParam1)))
	{
		if (bParam2)
		{
			if (func_542(iParam1, 1) != 0)
			{
				iVar0 = func_710(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (does_entity_exist(iVar0) && func_257(iVar0, 0))
	{
		*uParam0 = 2;
		(*Global_1360165)[iParam1]->f_70.f_2 = 0;
		func_711(iParam1, iVar0);
		func_712(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

Vector3 func_527(vector3 vParam0)
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

bool func_528(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_529(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return;
	}
	if (!func_450(uParam0, iParam1))
	{
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_713(uParam0, iParam1);
	}
	if (_0x6f1f0b17109309da(uParam0->f_444, sParam2))
	{
		if (((is_entity_a_ped(iParam1) && does_entity_exist(_get_anim_scene_ped(uParam0->f_444, sParam2, false))) || (is_entity_an_object(iParam1) && does_entity_exist(_get_anim_scene_object(uParam0->f_444, sParam2, false)))) || (is_entity_a_vehicle(iParam1) && does_entity_exist(_get_anim_scene_vehicle(uParam0->f_444, sParam2, false))))
		{
			remove_anim_scene_entity(uParam0->f_444, sParam2, iParam1);
		}
	}
}

void func_530(int iParam0, bool bParam1)
{
	if (!func_305(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_714(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_531(iParam0, 1, 0);
		}
	}
	func_531(iParam0, 16, bParam1);
}

void func_531(int iParam0, int iParam1, bool bParam2)
{
	if (!func_305(iParam0))
	{
		return;
	}
	func_715(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_532(int iParam0)
{
	func_531(iParam0, 8, 0);
}

void func_533(int iParam0)
{
	func_311(iParam0, 36, 1);
}

int func_534(int iParam0, bool bParam1)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_716(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_535(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_114(iParam0))
	{
		iVar1 = func_256(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_717(iParam0);
		}
	}
	if (func_507(iParam0, 5, 1))
	{
		set_ped_config_flag(func_256(iParam0), 137, true);
	}
}

void func_536(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_305(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_309(iParam0, 50, 1);
		func_309(iParam0, 48, 1);
		func_309(iParam0, 49, 1);
		func_309(iParam0, 51, 1);
		func_309(iParam0, 52, 1);
		func_309(iParam0, 54, 1);
		func_309(iParam0, 55, 1);
	}
	else
	{
		func_311(iParam0, 50, 1);
		func_311(iParam0, 48, 1);
		func_311(iParam0, 49, 1);
		func_311(iParam0, 51, 1);
		if (bParam3)
		{
			func_311(iParam0, 54, 1);
		}
		else
		{
			func_309(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_311(iParam0, 52, 1);
			if (bParam3)
			{
				func_311(iParam0, 55, 1);
			}
		}
		else
		{
			func_309(iParam0, 52, 1);
			if (!bParam3)
			{
				func_309(iParam0, 55, 1);
			}
		}
	}
}

void func_537(int iParam0, bool bParam1)
{
	if (!func_305(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_256(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_256(iParam0), 204, false);
	}
}

void func_538(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if (!func_116(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_507(iParam0, 32, 1))
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
	iVar1 = func_256(iParam0);
	if (((does_entity_exist(iVar1) && func_718(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_311(iParam0, 2, 1);
	}
	else
	{
		func_719(iParam0);
		func_311(iParam0, 1, 1);
	}
}

void func_539(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_540(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

float func_541(int iParam0, int iParam1, bool bParam2)
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
	return func_230(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_542(int iParam0, bool bParam1)
{
	if (!func_305(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_720(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_543(int iParam0)
{
	iVar0 = func_306(iParam0);
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

int func_544(int iParam0, bool bParam1)
{
	if (!func_305(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_721(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_545(int iParam0)
{
	if (!func_305(iParam0))
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

void func_546(int iParam0, int iParam1)
{
	if (!func_305(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

void func_547(int iParam0, int iParam1)
{
	iParam0 = func_209(iParam0);
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

void func_548()
{
	if (func_556(0))
	{
		func_722(0);
	}
	if (func_556(1))
	{
		func_722(1);
	}
	if (func_556(5))
	{
		func_722(5);
	}
	if (func_556(6))
	{
		func_723(6);
	}
}

int func_549(int iParam0)
{
	if (!func_179(iParam0))
	{
		return -1;
	}
	return func_683(iParam0);
}

bool func_550()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_551(int iParam0, bool bParam1)
{
	switch (func_549(iParam0))
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

bool func_552(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_565(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_553(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_556(iParam0))
	{
		return;
	}
	iVar0 = func_80(iParam0);
	func_724(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_725(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_726(iParam0, 0);
	func_319(iParam0);
}

void func_554(int iParam0)
{
	iParam0 = func_209(iParam0);
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
	func_727(&Var0);
	func_728(iParam0, Var0);
	func_729(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_730(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_731(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_732(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_733(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_734(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_735(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_736(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_737(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_555(vector3 vParam0)
{
	return func_738(_get_map_zone_at_coords(vParam0, 10));
}

bool func_556(int iParam0)
{
	iParam0 = func_209(iParam0);
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

bool func_557(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_556(iParam0))
	{
		return false;
	}
	iVar0 = func_80(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_558(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_556(iParam0))
	{
		return false;
	}
	iVar0 = func_80(iParam0);
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

void func_559(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_556(iParam0))
	{
		return;
	}
	iVar0 = func_80(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_560(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_723(iParam0);
	func_723(iParam0);
	func_739(iParam0, iParam1);
	func_740(iParam0, iParam1);
	func_741(iParam0, iParam1);
	iVar1 = func_80(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_742(iVar1);
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
	iVar3 = func_80(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_742(iVar3);
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
	func_548();
}

bool func_561()
{
	iVar0 = func_437();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_562()
{
	iVar0 = func_437();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_743(0);
}

int func_563(int iParam0)
{
	iParam0 = func_209(iParam0);
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

int func_564(int iParam0)
{
	iParam0 = func_209(iParam0);
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

int func_565(int iParam0)
{
	iParam0 = func_209(iParam0);
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

void func_566(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_744(&uVar0, &uVar1, &uVar2);
	func_745(iParam0, uVar0);
	func_746(iParam0, uVar1);
	func_747(iParam0, uVar2);
	func_748(iParam0, 1);
	func_749(iParam0, 1);
}

void func_567(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_750(iParam0, 1);
}

void func_568(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_209(iParam0);
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

bool func_569(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_751(iParam0, 1);
}

struct<2> func_570(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_752(iParam0, &uVar2))
	{
	}
	if (!func_753(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_571()
{
	if (func_754(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_754(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_754(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_754(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_754(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_754(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_572(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_755(iParam0);
	func_756(iParam0, uParam1);
	func_757(iParam0);
	func_758(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_759(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_573(int iParam0)
{
	iParam0 = func_209(iParam0);
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

float func_574(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return get_distance_between_coords(Global_36, vParam0, true);
}

float func_575(float fParam0, int iParam1)
{
	fVar0 = (2f * sin((180f * (fParam0 / func_327(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

float func_576(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_577(float fParam0)
{
	if (fParam0 < 250f)
	{
		if (fParam0 < 50f)
		{
			fVar0 = 0.25f;
		}
		else if (fParam0 < 100f)
		{
			fVar0 = 0.5f;
		}
		else if (fParam0 < 150f)
		{
			fVar0 = 1f;
		}
		else if (fParam0 < 200f)
		{
			fVar0 = 1.5f;
		}
		else if (fParam0 < 250f)
		{
			fVar0 = 2f;
		}
	}
	else if (fParam0 < 500f)
	{
		if (fParam0 < 300f)
		{
			fVar0 = 2.5f;
		}
		else if (fParam0 < 350f)
		{
			fVar0 = 3f;
		}
		else if (fParam0 < 400f)
		{
			fVar0 = 3.5f;
		}
		else if (fParam0 < 450f)
		{
			fVar0 = 4f;
		}
		else if (fParam0 < 500f)
		{
			fVar0 = 4.5f;
		}
	}
	else if (fParam0 < 750f)
	{
		if (fParam0 < 550f)
		{
			fVar0 = 5f;
		}
		else if (fParam0 < 600f)
		{
			fVar0 = 5.5f;
		}
		else if (fParam0 < 650f)
		{
			fVar0 = 6f;
		}
		else if (fParam0 < 700f)
		{
			fVar0 = 6.5f;
		}
		else if (fParam0 < 750f)
		{
			fVar0 = 7f;
		}
	}
	else if (fParam0 < 1000f)
	{
		if (fParam0 < 800f)
		{
			fVar0 = 7.5f;
		}
		else if (fParam0 < 850f)
		{
			fVar0 = 8f;
		}
		else if (fParam0 < 900f)
		{
			fVar0 = 8.5f;
		}
		else if (fParam0 < 950f)
		{
			fVar0 = 9f;
		}
		else if (fParam0 < 1000f)
		{
			fVar0 = 9.5f;
		}
	}
	else
	{
		fVar0 = 10f;
	}
	return fVar0;
}

Vector3 func_578(int iParam0)
{
	if (!does_cam_exist(iParam0))
	{
		vVar0 = { get_gameplay_cam_rot(2) };
	}
	else
	{
		vVar0 = { get_cam_rot(iParam0, 2) };
	}
	fVar3 = sin(vVar0.z);
	fVar4 = cos(vVar0.z);
	fVar5 = sin(vVar0.x);
	fVar6 = cos(vVar0.x);
	return func_527((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

bool func_579()
{
	if (func_255() == -1 && func_74(0, 0, 1))
	{
		return (Global_1357549->f_1495 & 512 != 0 && Global_1357549->f_1494 & 2 != 0);
	}
	return false;
}

int func_580(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

char* func_581(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@clothing@bandana";
		case 1:
			return "mech_inventory@clothing@mask";
		case 2:
			return "mech_inventory@clothing@mask";
		case 3:
			return "mech_inventory@clothing@mask";
		case 4:
			return "mech_inventory@clothing@mask";
		case 5:
			return "mech_inventory@clothing@mask";
	}
	return "";
}

void func_582(var uParam0, bool bParam1, bool bParam2)
{
	if (!_does_volume_exist(uParam0->f_1875))
	{
		if (!bParam1)
		{
			func_760(uParam0);
		}
		else if (bParam2)
		{
			func_761(uParam0);
		}
		else
		{
			func_762(uParam0, uParam0->f_1898);
		}
	}
	else
	{
		if (!func_63(uParam0, 1048576) && bParam1)
		{
			func_762(uParam0, uParam0->f_1898);
		}
		else if (!func_63(uParam0, 2097152) && bParam2)
		{
			func_761(uParam0);
		}
		else if ((func_63(uParam0, 1048576) && !bParam1) || (func_63(uParam0, 2097152) && !bParam2))
		{
			func_760(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1882 * FtoV(func_763(uParam0->f_1898)) };
			if (!func_599(vVar0, _0x3e2a25b2416dd67e(uParam0->f_1875), 1056964608, 1) && !func_90(vVar0))
			{
				_0xa46e98bdc407e23d(uParam0->f_1875, vVar0);
			}
		}
	}
}

void func_583(var uParam0)
{
	if (uParam0->f_1688 < 0)
	{
		return;
	}
	if ((uParam0->f_1899 && does_entity_exist(uParam0->f_1901)) && _is_draft_vehicle(uParam0->f_1901))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = _get_ped_in_draft_seat(uParam0->f_1901, iVar0);
			if (!is_entity_dead(iVar2))
			{
				if (!does_entity_exist(iVar1) || func_195(iVar2, uParam0->f_1016[uParam0->f_1688]->f_1, 1) < func_195(iVar1, uParam0->f_1016[uParam0->f_1688]->f_1, 1))
				{
					iVar1 = iVar2;
				}
			}
			iVar0++;
		}
		if (!does_entity_exist(iVar1))
		{
			return;
		}
		if (!func_63(uParam0, 8192))
		{
			if (func_195(iVar1, uParam0->f_1016[uParam0->f_1688]->f_1, 1) <= (uParam0->f_1016[uParam0->f_1688]->f_17 + 5f) || _0xf256a75210c5c0eb(uParam0->f_1875, uParam0->f_1879))
			{
				if (_0xc6d7ddc843176701(uParam0->f_1901) != 5f)
				{
					_0x0c3f0f7f92ca847c(uParam0->f_1901, 5f);
				}
			}
			else if ((!func_764(512) || func_765(2)) && _0xc6d7ddc843176701(uParam0->f_1901) != 50f)
			{
				_0x0c3f0f7f92ca847c(uParam0->f_1901, 50f);
			}
		}
	}
}

void func_584(var uParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_1633[iVar2]->f_11 && _does_volume_exist(uParam0->f_1633[iVar2]->f_12))
		{
			if (!bVar1)
			{
				iVar0 = _get_first_entity_ped_is_carrying(Global_35);
				bVar1 = true;
			}
			if (!is_entity_dead(uParam0->f_1898) && !uParam0->f_1633[iVar2]->f_13)
			{
				_0xe9b168527b337bf0(uParam0->f_1898, uParam0->f_1633[iVar2]->f_12);
				_0xf74e134f40192884(uParam0->f_1898, 1);
				uParam0->f_1633[iVar2]->f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1687 != 0 || func_63(uParam0, 33554432))
				{
					set_player_control(get_player_index(), true, 0, false);
					if (is_radar_hidden())
					{
						_display_hud_component(-1679307491);
					}
					uParam0->f_1687 = 0;
					func_298(uParam0, 33554432);
				}
				bVar3 = func_528(uParam0->f_1633[iVar2]->f_10, 131072);
				if (func_766(Global_35, uParam0->f_1633[iVar2]->f_12, 0, 1))
				{
					if (uParam0->f_1688 >= 0)
					{
						func_345(uParam0, uParam0->f_1633[iVar2]->f_10, uParam0->f_1345[uParam0->f_1688]->f_1, 1065353216);
						disable_control_action(0, -822242784, false);
					}
					if (bVar3)
					{
						func_767();
					}
					func_768(uParam0, iVar2, iVar0, bVar3);
				}
				else if (func_769(uParam0->f_1633[iVar2]) != 0)
				{
					func_768(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (func_528(uParam0->f_1633[iVar2]->f_10, 4))
			{
				if (uParam0->f_1688 >= 0)
				{
					if (((func_195(Global_35, uParam0->f_1016[uParam0->f_1688]->f_1, 1) > uParam0->f_1016[uParam0->f_1688]->f_17 && func_766(uParam0->f_1898, uParam0->f_1633[iVar2]->f_12, 0, 1)) || uParam0->f_1687 != 0) || func_63(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (func_254(Global_35, &(uParam0->f_1687), iVar4, 0, 0, 1084227584, 100, 0, 0))
						{
							set_player_control(get_player_index(), true, 0, false);
							uParam0->f_1687 = 0;
							func_298(uParam0, 33554432);
						}
						else
						{
							func_348(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_585(var uParam0)
{
	if (uParam0->f_1688 < 0)
	{
		return false;
	}
	if (func_63(uParam0, 33554432))
	{
		return false;
	}
	if (func_300(uParam0->f_1016[uParam0->f_1688], 2) && uParam0->f_1897)
	{
		return false;
	}
	if (_does_volume_exist(uParam0->f_1875) && _0xf256a75210c5c0eb(uParam0->f_1875, uParam0->f_1876))
	{
		return true;
	}
	if (func_63(uParam0, 65536))
	{
		return true;
	}
	return false;
}

float func_586(var uParam0, int iParam1)
{
	fVar16 = 10000f;
	switch (&uParam0->f_1016[iParam1])
	{
		case 0:
			fVar12 = get_distance_between_coords(Global_36, uParam0->f_1016[iParam1]->f_1, true);
			fVar13 = get_distance_between_coords(Global_36, uParam0->f_1016[iParam1]->f_4, true);
			vVar0 = { uParam0->f_1016[iParam1]->f_4 - uParam0->f_1016[iParam1]->f_1 };
			if (func_770(&vVar3, uParam0->f_1016[iParam1]->f_1, uParam0->f_1016[iParam1]->f_4, vVar0, Global_36))
			{
				fVar16 = get_distance_between_coords(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		case 1:
			if (Global_36.f_2 >= uParam0->f_1016[iParam1]->f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[iParam1]->f_1.f_2 + uParam0->f_1016[iParam1]->f_10))
			{
				func_771(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (get_distance_between_coords(Global_36, uParam0->f_1016[iParam1]->f_1, true) - uParam0->f_1016[iParam1]->f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

void func_587(var uParam0)
{
	func_772(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0]->f_29)
		{
			if ((!is_string_null_or_empty(&(uParam0->f_1016[iVar0]->f_22)) && func_773(uParam0, iVar0)) && !func_485(uParam0->f_1016[iVar0], 1))
			{
				if (!func_774(uParam0, &(uParam0->f_1016[iVar0]->f_22)))
				{
					func_775(&(uParam0->f_1771), uParam0->f_1016[iVar0]->f_22, 0, -1, 1, 0);
				}
				func_776(uParam0->f_1016[iVar0], 1);
			}
		}
		iVar0++;
	}
}

void func_588(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_589(int iParam0, var uParam1)
{
	*iParam0 = 0;
	if (!func_595(uParam1, 8))
	{
		if (func_595(uParam1, 1))
		{
			*iParam0 = 1;
		}
		else if (func_595(uParam1, 4))
		{
			*iParam0 = 4;
		}
		else if (func_595(uParam1, 2))
		{
			*iParam0 = 2;
		}
	}
}

void func_590(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	func_596(sParam0, iParam2);
	func_777(iParam1, fParam3);
}

void func_591()
{
	if (is_bit_set(&Global_1357510, 4))
	{
	}
	else
	{
		set_bit(Global_1357510, 0);
	}
}

void func_592(var uParam0, int iParam1)
{
	uParam0->f_1665 = (uParam0->f_1665 || iParam1);
}

char* func_593(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_594()
{
	return "CAMERA_LEADIN_ACTIVE_CONVERSATION_REQUEST";
}

bool func_595(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_596(char* sParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			StringCopy(sParam0, "default_leadin_camera", 64);
			if (func_778(iParam1, 1))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
			}
			else if (func_778(iParam1, 2))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
			}
			else if (func_778(iParam1, 4))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
			}
			_0x6a4d224fc7643941(sParam0);
			sParam0->f_16 = 1;
		}
		else if (_0xdd0b7c5ae58f721d(sParam0) && !_0x927b810e43e99932(sParam0))
		{
			_0xb8b207c34285e978(sParam0);
		}
	}
}

float func_597(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam0, false, false) };
	vVar3 = { get_entity_coords(iParam1, false, false) };
	return func_447(vVar0, vVar3, iParam2);
}

void func_598(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_599(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_600(var uParam0, int iParam1)
{
	uParam0->f_1665 = (uParam0->f_1665 - (uParam0->f_1665 && iParam1));
}

bool func_601(var uParam0, int iParam1)
{
	if (func_63(uParam0, 4))
	{
		return false;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1688 < 0 || uParam0->f_1688 >= 8)
	{
		return false;
	}
	if (!uParam0->f_1016[uParam0->f_1688]->f_29)
	{
		return false;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return false;
	}
	if (Global_1430231->f_4)
	{
		return false;
	}
	if (uParam0->f_1016[uParam0->f_1688]->f_29)
	{
		if (&uParam0->f_1016[uParam0->f_1688] == 0)
		{
			vVar3 = { uParam0->f_1016[uParam0->f_1688]->f_4 - uParam0->f_1016[uParam0->f_1688]->f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (func_770(&vVar0, uParam0->f_1765, Global_36, vVar6, uParam0->f_1016[uParam0->f_1688]->f_1))
			{
				iVar9 = 1;
				if (vVar0.x > uParam0->f_1016[uParam0->f_1688]->f_1)
				{
					if (vVar0.x > uParam0->f_1016[uParam0->f_1688]->f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < uParam0->f_1016[uParam0->f_1688]->f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > uParam0->f_1016[uParam0->f_1688]->f_1.f_1)
					{
						if (vVar0.y > uParam0->f_1016[uParam0->f_1688]->f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < uParam0->f_1016[uParam0->f_1688]->f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < (uParam0->f_1016[uParam0->f_1688]->f_1.f_2 - 0.1f) || vVar0.z > (uParam0->f_1016[uParam0->f_1688]->f_1.f_2 + uParam0->f_1016[uParam0->f_1688]->f_10)) || (func_300(uParam0->f_1016[uParam0->f_1688], 2) && (uParam0->f_1897 || uParam0->f_1899)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*iParam1 = uParam0->f_1688;
					return true;
				}
			}
		}
		else if (func_63(uParam0, 8))
		{
			*iParam1 = uParam0->f_1684;
			return true;
		}
	}
	return false;
}

void func_602(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		uParam0->f_1016[iParam1]->f_28 = 1;
		uParam0->f_1684 = iParam1;
		uParam0->f_1688 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_1769 = 1;
	}
}

void func_603(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_475[iParam1]->f_2)
	{
		case 9:
			if (_does_anim_scene_exist(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8) && _is_anim_scene_started(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8, false))
			{
				fVar1 = _get_anim_scene_progress(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8);
				iVar0 = 0;
				while (iVar0 < 35)
				{
					if ((((uParam0->f_3[iVar0] && !is_entity_dead(uParam0->f_3[iVar0]->f_2)) && uParam0->f_3[iVar0]->f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0]->f_8) && !is_entity_visible(uParam0->f_3[iVar0]->f_2))
					{
						set_entity_visible(uParam0->f_3[iVar0]->f_2, true);
					}
					iVar0++;
				}
				if (((func_618(uParam0->f_475[iParam1], 4) && uParam0->f_475[iParam1]->f_12 < 1f) && fVar1 >= uParam0->f_475[iParam1]->f_12) && !is_player_script_control_on(get_player_index()))
				{
					clear_ped_tasks(Global_35, 1, 0);
					set_player_control(get_player_index(), true, 0, false);
				}
				if (func_618(uParam0->f_475[iParam1], 64) && func_779(uParam0, iParam1, 0))
				{
					func_780(uParam0, uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8, uParam0->f_475[iParam1]->f_13, uParam0->f_475[iParam1]->f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_475[iParam1]->f_3 >= 0 && uParam0->f_475[iParam1]->f_5 >= 0) && uParam0->f_475[iParam1]->f_3 != uParam0->f_475[iParam1]->f_5)
			{
				if (!is_entity_dead(uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2) && !is_entity_dead(uParam0->f_3[uParam0->f_475[iParam1]->f_5]->f_2))
				{
					if (is_entity_a_ped(uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2) && is_ped_human(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2)))
					{
						func_781(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2), uParam0->f_3[uParam0->f_475[iParam1]->f_5]->f_2, uParam0->f_475[iParam1]->f_13, uParam0->f_475[iParam1]->f_14);
					}
					if ((func_618(uParam0->f_475[iParam1], 128) && is_entity_a_ped(uParam0->f_3[uParam0->f_475[iParam1]->f_5]->f_2)) && is_ped_human(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_475[iParam1]->f_5]->f_2)))
					{
						func_781(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_475[iParam1]->f_5]->f_2), uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2, uParam0->f_475[iParam1]->f_13, uParam0->f_475[iParam1]->f_14);
					}
				}
			}
			break;
		case 4:
			func_606(uParam0, iParam1, 0, 0);
			break;
	}
}

int func_604(var uParam0, int iParam1)
{
	if (uParam0->f_475[iParam1]->f_1 > uParam0->f_1683)
	{
		return 0;
	}
	if (!is_entity_dead(uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2))
	{
	}
	if (uParam0->f_1683 < 0 || uParam0->f_1683 > 6)
	{
		return 0;
	}
	if (uParam0->f_475[iParam1]->f_1 == 0)
	{
		return 1;
	}
	if (uParam0->f_475[iParam1]->f_17 == 2 && func_8(uParam0) == 9)
	{
		return 1;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		return 0;
	}
	if (&uParam0->f_475[iParam1] != uParam0->f_1684)
	{
		return 0;
	}
	if (func_8(uParam0) > 3 && &uParam0->f_475[iParam1] != uParam0->f_1684)
	{
		return 0;
	}
	if ((((func_8(uParam0) > 3 && uParam0->f_475[iParam1]->f_17 == 1) && func_344(uParam0) != 11) && func_343(uParam0, uParam0->f_1684)) && uParam0->f_475[iParam1]->f_2 != 4)
	{
		return 0;
	}
	if ((uParam0->f_475[iParam1]->f_2 == 9 && uParam0->f_475[iParam1]->f_4 >= 0) && _does_anim_scene_exist(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8))
	{
		if (!_is_anim_scene_loaded(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8, true, false))
		{
			return 0;
		}
		else if (_0x6f1f0b17109309da(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8, func_213(Global_35)))
		{
			if (func_367(uParam0->f_1522[uParam0->f_475[iParam1]->f_4], 4))
			{
				if (!_0xa218d2bbcaa7388c(Global_35, 1))
				{
					return 0;
				}
			}
			else if (func_367(uParam0->f_1522[uParam0->f_475[iParam1]->f_4], 8))
			{
				if (!_0xa218d2bbcaa7388c(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_605(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_475[iParam1]->f_2)
	{
		case 9:
			func_782(uParam0, iParam2, iParam1);
			break;
		case 4:
			func_606(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_475[iParam1]->f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!is_string_null_or_empty(&(uParam0->f_1016[&uParam0->f_475[iParam1]]->f_19)) && !is_string_null_or_empty(&(uParam0->f_1016[&uParam0->f_475[iParam1]]->f_22)))
			{
				if (func_48(&(uParam0->f_1872)) >= IntToFloat((uParam0->f_1016[&uParam0->f_475[iParam1]]->f_25 / 1000)))
				{
					func_772(uParam0);
					if (!_0xd89504d9d7d5057d(&(uParam0->f_1016[&uParam0->f_475[iParam1]]->f_22)))
					{
						func_775(&(uParam0->f_1771), uParam0->f_1016[&uParam0->f_475[iParam1]]->f_22, 0, -1, 0, 0);
					}
					else
					{
						start_preloaded_conversation(&(uParam0->f_1016[&uParam0->f_475[iParam1]]->f_22));
					}
					uParam0->f_475[iParam1]->f_7 = 1;
				}
			}
			else
			{
				uParam0->f_475[iParam1]->f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_475[iParam1]->f_7 = 1;
			break;
		case 11:
			uParam0->f_475[iParam1]->f_7 = 1;
			uParam0->f_1685 = iParam1;
			break;
	}
}

int func_606(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar2 = uParam0->f_1688;
	if (iParam1 >= 0)
	{
		iVar2 = &uParam0->f_475[iParam1];
		fVar3 = uParam0->f_1016[uParam0->f_1688]->f_7;
		fVar4 = uParam0->f_1016[uParam0->f_1688]->f_7.f_1;
	}
	if (!is_entity_dead(Global_35))
	{
		set_ped_max_move_blend_ratio(Global_35, 1f);
	}
	switch (func_344(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!func_783(uParam0, iVar2))
				{
					uParam0->f_1685 = iParam1;
				}
				uParam0->f_475[iParam1]->f_7 = 1;
			}
			if (((!func_300(uParam0->f_1016[iVar2], 32) && func_784()) && !is_string_null_or_empty(&(uParam0->f_459))) || (!func_300(uParam0->f_1016[iVar2], 128) && uParam0->f_1899))
			{
				if (uParam0->f_1899)
				{
					bring_vehicle_to_halt(uParam0->f_1901, 0.1f, -1, false);
					if (!func_63(uParam0, 8192))
					{
						_0x0c3f0f7f92ca847c(uParam0->f_1901, 0f);
					}
					task_vehicle_temp_action(Global_35, uParam0->f_1901, 24, 1000);
					func_615(uParam0, 8);
				}
				else
				{
					func_348(uParam0, 131072);
					func_615(uParam0, 11);
				}
			}
			else if (uParam0->f_1897)
			{
				func_615(uParam0, 5);
			}
			else
			{
				func_785(uParam0);
			}
			break;
		case 1:
			bVar0 = func_21(&(uParam0->f_1869)) >= 3f;
			if ((((!func_477(Global_35, 716706914) && !func_477(Global_35, 242628503)) && func_21(&(uParam0->f_1869)) >= 2.5f) || (!func_449(func_448(Global_35, 0, 1, 0)) && !func_449(func_448(Global_35, 1, 1, 0)))) || bVar0)
			{
				func_785(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = func_21(&(uParam0->f_1869)) >= 3.5f;
			iVar1 = 5664;
			if (func_300(uParam0->f_1016[uParam0->f_1688], 512))
			{
				iVar1 |= 128;
			}
			if (!func_343(uParam0, uParam0->f_1688))
			{
				iVar1 |= 2048;
			}
			if (func_254(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4))
			{
				func_785(uParam0);
			}
			if ((!uParam0->f_1897 && !uParam0->f_1899) || bVar0)
			{
				uParam0->f_1686 = 0;
				if (func_344(uParam0) == 5 || iParam1 < 0)
				{
					func_785(uParam0);
				}
				else
				{
					func_786(uParam0, iParam1, bParam2);
					func_26(&(uParam0->f_1869));
					func_615(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = func_21(&(uParam0->f_1869)) >= 1f;
			if (func_335(Global_35, 242628503) || bVar0)
			{
				func_615(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!func_300(uParam0->f_1016[iVar2], 256))
			{
				if (func_430(&(uParam0->f_1903)))
				{
					func_787(uParam0->f_1903, 0);
				}
			}
			func_26(&(uParam0->f_1869));
			func_615(uParam0, 4);
			break;
		case 4:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			if ((func_300(uParam0->f_1016[iVar2], 256) || !func_430(&uVar5)) || bVar0)
			{
				if (func_788())
				{
					func_789();
					func_615(uParam0, 10);
				}
				else
				{
					func_615(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			if (func_788() || bVar0)
			{
				func_615(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			iVar1 = 5664;
			if (func_300(uParam0->f_1016[uParam0->f_1688], 512))
			{
				iVar1 |= 128;
			}
			if (!func_343(uParam0, uParam0->f_1688))
			{
				iVar1 |= 2048;
			}
			if (func_254(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1686 = 0;
				set_vehicle_forward_speed(uParam0->f_1901, 0f);
				clear_ped_tasks(Global_35, 1, 0);
				func_615(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (func_21(&(uParam0->f_1869)) >= 0.75f)
			{
				if (!func_63(uParam0, 8192))
				{
					_0x0c3f0f7f92ca847c(uParam0->f_1901, 50f);
				}
				_0x7c06330bfdda182e(uParam0->f_1901);
				func_348(uParam0, 131072);
				func_615(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_607(char* sParam0)
{
	if (sParam0->f_16)
	{
		_0x0a5a4f1979abb40e(sParam0);
		if (!is_string_null_or_empty(sParam0) && _0xdd0b7c5ae58f721d(sParam0))
		{
			_0x798be43c9393632b(sParam0);
		}
		sParam0->f_16 = 0;
		StringCopy(sParam0, "", 64);
		StringCopy(&(sParam0->f_8), "", 64);
	}
}

void func_608(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 - (uParam0->f_1666.f_1 && iParam1));
}

bool func_609(var uParam0, char* sParam1, int iParam2)
{
	bVar0 = _0x7907969497ea92f5(uParam0->f_1889);
	if (!bVar0)
	{
		uParam0->f_1889 = _0xd97d8d905f1562f2(get_hash_key(sParam1));
	}
	bVar1 = _0x603ac35fd4602c76(uParam0->f_1889);
	if (!bVar1)
	{
		return false;
	}
	func_790(uParam0);
	func_491(uParam0, iParam2);
	if (func_63(uParam0, 16384))
	{
		func_791(uParam0);
	}
	Var2.f_10 = -1569615261;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		func_792(uParam0, iVar18);
		if (func_793(uParam0, 0))
		{
			if (func_794(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_1016[iVar16]->f_27 = 0;
					func_795(uParam0, 1, &(uParam0->f_1016[iVar16]->f_1));
					func_795(uParam0, 2, &(uParam0->f_1016[iVar16]->f_1.f_1));
					func_795(uParam0, 3, &(uParam0->f_1016[iVar16]->f_1.f_2));
					func_795(uParam0, 4, &(uParam0->f_1016[iVar16]->f_11));
					func_795(uParam0, 5, &(uParam0->f_1016[iVar16]->f_12));
					func_795(uParam0, 6, &(uParam0->f_1016[iVar16]->f_13));
					func_795(uParam0, 7, &(uParam0->f_1016[iVar16]->f_4));
					func_795(uParam0, 8, &(uParam0->f_1016[iVar16]->f_4.f_1));
					func_795(uParam0, 9, &(uParam0->f_1016[iVar16]->f_4.f_2));
					func_795(uParam0, 10, &(uParam0->f_1016[iVar16]->f_7));
					func_795(uParam0, 11, &(uParam0->f_1016[iVar16]->f_7.f_1));
					func_795(uParam0, 12, &(uParam0->f_1016[iVar16]->f_7.f_2));
					func_795(uParam0, 13, &(uParam0->f_1016[iVar16]->f_10));
					func_795(uParam0, 14, &(uParam0->f_1016[iVar16]->f_14));
					func_795(uParam0, 15, &(uParam0->f_1016[iVar16]->f_15));
					if (func_794(uParam0, 16, &iVar17))
					{
						uParam0->f_1016[iVar16] = iVar17;
					}
					func_795(uParam0, 19, &(uParam0->f_1016[iVar16]->f_16));
					func_795(uParam0, 20, &(uParam0->f_1016[iVar16]->f_17));
					func_795(uParam0, 31, &(uParam0->f_1016[iVar16]->f_18));
					if (func_796(uParam0, 21, &Var20))
					{
						MemCopy(&(uParam0->f_1016[iVar16]->f_19), {Var20}, 3);
					}
					if (func_796(uParam0, 22, &Var20))
					{
						MemCopy(&(uParam0->f_1016[iVar16]->f_22), {Var20}, 3);
					}
					func_794(uParam0, 23, &(uParam0->f_1016[iVar16]->f_25));
					func_797(uParam0, &(uParam0->f_1016[iVar16]->f_27));
					if (func_796(uParam0, 35, &(uParam0->f_1016[iVar16]->f_30)))
					{
					}
					if (func_794(uParam0, 39, &iVar17))
					{
						uParam0->f_1016[iVar16]->f_39 = iVar17;
					}
					else
					{
						uParam0->f_1016[iVar16]->f_39 = 1;
					}
					if (func_795(uParam0, 40, &(uParam0->f_1016[iVar16]->f_40)))
					{
						func_776(uParam0->f_1016[iVar16], 2);
					}
					if (is_string_null_or_empty(&(uParam0->f_1016[iVar16]->f_30)))
					{
						uParam0->f_1016[iVar16]->f_30 = { func_411() };
					}
					uParam0->f_1016[iVar16]->f_29 = 1;
					if (uParam0->f_1895 == -1 || uParam0->f_1016[uParam0->f_1895]->f_17 < uParam0->f_1016[iVar16]->f_17)
					{
						uParam0->f_1895 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1016[iVar18]->f_29)
		{
			vVar29 = { vVar29 + uParam0->f_1016[iVar18]->f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(to_float(iVar28)) };
	uParam0->f_1900 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1016[iVar18]->f_29)
		{
			if (!func_798(vVar29, uParam0->f_1016[iVar18]->f_1, 5f, 1))
			{
				uParam0->f_1900 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				func_792(uParam0, iVar18);
				if (func_793(uParam0, 45))
				{
					if (func_794(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							func_799(uParam0->f_1522[iVar16], 2);
							func_796(uParam0, 46, uParam0->f_1522[iVar16]);
							if (func_800(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									func_799(uParam0->f_1522[iVar16], 1);
								}
							}
							if (func_794(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									func_799(uParam0->f_1522[iVar16], 8);
								}
								else if (iVar17 == 2)
								{
									func_799(uParam0->f_1522[iVar16], 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 35)
			{
				iVar16 = -1;
				func_792(uParam0, iVar18);
				if (func_793(uParam0, 50))
				{
					if (func_794(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					func_794(uParam0, 43, &(Var2.f_3));
					if (func_796(uParam0, 52, &Var20))
					{
						MemCopy(&(Var2.f_4), {Var20}, 4);
					}
					func_795(uParam0, 53, &(Var2.f_8));
					if (func_794(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					func_800(uParam0, 55, &(Var2.f_11));
					func_800(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (func_801(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 35)
						{
							uParam0->f_3[iVar32]->f_3 = Var2.f_3;
							uParam0->f_3[iVar32]->f_4 = { Var2.f_4 };
							uParam0->f_3[iVar32]->f_8 = Var2.f_8;
							uParam0->f_3[iVar32]->f_10 = Var2.f_10;
							uParam0->f_3[iVar32]->f_11 = Var2.f_11;
							uParam0->f_3[iVar32]->f_12 = Var2.f_12;
							uParam0->f_3[iVar32] = 1;
							if (func_802(Var2.f_1))
							{
								func_348(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			func_792(uParam0, iVar18);
			if (func_793(uParam0, 82))
			{
				if (func_796(uParam0, 83, &Var20))
				{
					MemCopy(&(uParam0->f_459), {Var20}, 4);
				}
				func_796(uParam0, 84, &(uParam0->f_459.f_4));
				if (is_string_null_or_empty(&(uParam0->f_459.f_4)))
				{
					if (uParam0->f_459.f_15 == 1)
					{
						uParam0->f_459.f_4 = { func_402() };
					}
					else if (uParam0->f_459.f_15 == 2)
					{
						uParam0->f_459.f_4 = { func_411() };
					}
					else
					{
						uParam0->f_459.f_4 = { func_411() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				func_792(uParam0, iVar18);
				if (func_793(uParam0, 57))
				{
					if (func_794(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_475[iVar16]->f_8 = 0;
							func_794(uParam0, 58, uParam0->f_475[iVar16]);
							if (func_794(uParam0, 59, &iVar17))
							{
								uParam0->f_475[iVar16]->f_1 = func_803(iVar17);
							}
							if (func_794(uParam0, 60, &iVar17))
							{
								uParam0->f_475[iVar16]->f_2 = func_804(iVar17);
							}
							func_794(uParam0, 61, &(uParam0->f_475[iVar16]->f_3));
							func_795(uParam0, 67, &(uParam0->f_475[iVar16]->f_10));
							func_795(uParam0, 70, &(uParam0->f_475[iVar16]->f_11));
							func_795(uParam0, 68, &(uParam0->f_475[iVar16]->f_9));
							func_794(uParam0, 72, &(uParam0->f_475[iVar16]->f_5));
							func_795(uParam0, 77, &(uParam0->f_475[iVar16]->f_12));
							func_794(uParam0, 78, &(uParam0->f_475[iVar16]->f_13));
							func_794(uParam0, 79, &(uParam0->f_475[iVar16]->f_14));
							if (func_794(uParam0, 73, &iVar17))
							{
								uParam0->f_475[iVar16]->f_17 = iVar17;
							}
							if (func_794(uParam0, 75, &iVar17))
							{
								uParam0->f_475[iVar16]->f_4 = iVar17;
								bVar15 = true;
							}
							func_795(uParam0, 80, &(uParam0->f_475[iVar16]->f_15));
							if (func_800(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 1;
								}
							}
							if (func_800(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 512;
								}
							}
							if (func_800(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 2;
								}
							}
							if (func_800(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 16;
								}
							}
							if (func_800(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 32;
								}
							}
							if (func_800(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 4;
								}
							}
							if (func_800(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 64;
								}
							}
							if (func_800(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 128;
								}
							}
							if (func_800(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_475[iVar16]->f_2 == 9)
							{
								uParam0->f_475[iVar16]->f_4 = uParam0->f_475[iVar16]->f_3;
								uParam0->f_475[iVar16]->f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_475[iVar16]->f_16 = uParam0->f_475[iVar16]->f_2;
							uParam0->f_475[iVar16]->f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1894 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				func_792(uParam0, iVar18);
				if (func_793(uParam0, 85))
				{
					func_794(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						func_800(uParam0, 87, uParam0->f_1345[iVar18]);
						func_796(uParam0, 96, &(uParam0->f_1345[iVar18]->f_2));
						func_796(uParam0, 97, &(uParam0->f_1345[iVar18]->f_10));
						func_795(uParam0, 93, &(uParam0->f_1345[iVar18]->f_18));
						func_795(uParam0, 94, &(uParam0->f_1345[iVar18]->f_19));
						func_794(uParam0, 95, &(uParam0->f_1345[iVar18]->f_20));
						uParam0->f_1345[iVar18]->f_1 = 0;
						func_805(uParam0, &(uParam0->f_1345[iVar18]->f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				func_792(uParam0, iVar18);
				if (func_793(uParam0, 98))
				{
					if (func_794(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_1633[iVar16]->f_10 = 0;
							func_806(uParam0, 99, uParam0->f_1633[iVar16]);
							func_806(uParam0, 100, &(uParam0->f_1633[iVar16]->f_6));
							func_806(uParam0, 101, &(uParam0->f_1633[iVar16]->f_3));
							if (func_794(uParam0, 102, &iVar17))
							{
								uParam0->f_1633[iVar16]->f_9 = iVar17;
							}
							func_797(uParam0, &(uParam0->f_1633[iVar16]->f_10));
							uParam0->f_1633[iVar16]->f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			_datafile_unload(uParam0->f_1889);
			func_348(uParam0, 1);
			func_348(uParam0, 16384);
			func_807(uParam0);
			return true;
		}
	}
}

bool func_610(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!is_string_null_or_empty(uParam0->f_1522[iVar0]) && func_367(uParam0->f_1522[iVar0], 2)) && !func_367(uParam0->f_1522[iVar0], 16)) && func_808(uParam0, iVar0))
		{
			if (!_does_anim_scene_exist(uParam0->f_1522[iVar0]->f_8))
			{
				uParam0->f_1522[iVar0]->f_8 = _create_anim_scene(uParam0->f_1522[iVar0], 0, 0, false, true);
				load_anim_scene(uParam0->f_1522[iVar0]->f_8);
				return false;
			}
			else if (!_is_anim_scene_metadata_loaded(uParam0->f_1522[iVar0]->f_8, false))
			{
				return false;
			}
			if (_0xa9016536015de29d(uParam0->f_1522[iVar0]->f_8, "pl_breakout"))
			{
				func_799(uParam0->f_1522[iVar0], 32);
			}
			_delete_anim_scene(uParam0->f_1522[iVar0]->f_8);
			func_799(uParam0->f_1522[iVar0], 16);
		}
		iVar0++;
	}
	return true;
}

void func_611(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_string_null_or_empty(uParam0->f_1522[iVar0]) && func_367(uParam0->f_1522[iVar0], 2))
		{
			iVar1 = 0;
			if (func_808(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			uParam0->f_1522[iVar0]->f_8 = _create_anim_scene(uParam0->f_1522[iVar0], iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, func_487(), 64);
	StringCopy(&(Var2.f_8), func_594(), 64);
	uParam0->f_1708 = { Var2 };
	uParam0->f_1731 = { Var2 };
	if (!func_299(uParam0, 8))
	{
		_0x6a4d224fc7643941(func_487());
		func_484(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!is_string_null_or_empty(&(uParam0->f_1345[iVar0]->f_2)) && !are_strings_equal(&(uParam0->f_1345[iVar0]->f_2), func_487()))
		{
			if (!_0xdd0b7c5ae58f721d(&(uParam0->f_1345[iVar0]->f_2)))
			{
				_0x6a4d224fc7643941(&(uParam0->f_1345[iVar0]->f_2));
				uParam0->f_1345[iVar0]->f_21 = 1;
			}
		}
		iVar0++;
	}
}

bool func_612(var uParam0)
{
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (_does_anim_scene_exist(uParam0->f_1522[iVar0]->f_8))
		{
			if (!func_367(uParam0->f_1522[iVar0], 64))
			{
				if (_is_anim_scene_metadata_loaded(uParam0->f_1522[iVar0]->f_8, false))
				{
					func_809(uParam0, uParam0->f_1522[iVar0]->f_8);
					load_anim_scene(uParam0->f_1522[iVar0]->f_8);
					bVar1 = false;
					func_799(uParam0->f_1522[iVar0], 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!_is_anim_scene_loaded(uParam0->f_1522[iVar0]->f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		if (!is_string_null_or_empty(&(uParam0->f_1016[iVar0]->f_19)) && !are_strings_equal(&(uParam0->f_1016[iVar0]->f_19), "empty"))
		{
			_text_database_request(&(uParam0->f_1016[iVar0]->f_19));
			if (!_text_database_has_loaded(&(uParam0->f_1016[iVar0]->f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (func_299(uParam0, 8) && !_0xdd0b7c5ae58f721d(func_487()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!is_string_null_or_empty(&(uParam0->f_1345[iVar0]->f_2)) && uParam0->f_1345[iVar0]->f_21) && !_0xdd0b7c5ae58f721d(&(uParam0->f_1345[iVar0]->f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!func_90(uParam0->f_1885) || uParam0->f_1888 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (_does_anim_scene_exist(uParam0->f_1522[iVar0]->f_8))
			{
				if (_0xa9016536015de29d(uParam0->f_1522[iVar0]->f_8, "pl_breakout"))
				{
					_0xdf7b5144e25cd3fe(uParam0->f_1522[iVar0]->f_8, "pl_breakout");
				}
				if (bVar8)
				{
					_get_anim_scene_origin(uParam0->f_1522[iVar0]->f_8, &vVar2, &vVar5, 2);
					vVar2 = { _get_object_offset_from_coords(vVar2, uParam0->f_1888, uParam0->f_1885) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1888);
					set_anim_scene_origin(uParam0->f_1522[iVar0]->f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_613(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((((!is_entity_dead(uParam0->f_3[iVar0]->f_2) && is_entity_a_ped(uParam0->f_3[iVar0]->f_2)) && !func_515(uParam0->f_3[iVar0]->f_2)) && func_449(uParam0->f_3[iVar0]->f_10)) && !func_802(uParam0->f_3[iVar0]->f_1))
		{
			iVar1 = get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2);
			if (!is_entity_dead(iVar1))
			{
				if (!has_ped_got_weapon(iVar1, uParam0->f_3[iVar0]->f_10, 0, false))
				{
					if (func_810(uParam0->f_3[iVar0]->f_10))
					{
						uParam0->f_3[iVar0]->f_10 = _give_weapon_to_ped_2(iVar1, uParam0->f_3[iVar0]->f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (_is_weapon_two_handed(uParam0->f_3[iVar0]->f_10))
					{
						uParam0->f_3[iVar0]->f_10 = _give_weapon_to_ped_2(iVar1, uParam0->f_3[iVar0]->f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						uParam0->f_3[iVar0]->f_10 = _give_weapon_to_ped_2(iVar1, uParam0->f_3[iVar0]->f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if (uParam0->f_3[iVar0]->f_11)
				{
					if (func_811(iVar1, 0, 0, 0) != uParam0->f_3[iVar0]->f_10)
					{
						set_current_ped_weapon(iVar1, uParam0->f_3[iVar0]->f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_614(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!is_entity_dead(uParam0->f_3[iVar0]->f_2) && uParam0->f_3[iVar0]->f_12)
		{
			func_812(uParam0->f_3[iVar0]);
		}
		iVar0++;
	}
}

void func_615(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	func_26(&(uParam0->f_1869));
}

void func_616(var uParam0)
{
	func_813(uParam0);
	func_814(uParam0);
}

int func_617(var uParam0)
{
	if (uParam0->f_1685 < 0 || uParam0->f_475[uParam0->f_1685]->f_4 < 0)
	{
		return -1;
	}
	return uParam0->f_1522[uParam0->f_475[uParam0->f_1685]->f_4]->f_8;
}

bool func_618(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_619(var uParam0, int iParam1)
{
	iVar0 = -1;
	if (!is_entity_dead(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_3)
		{
			if (does_entity_exist(uParam0->f_3[iVar1]->f_2))
			{
				if (get_entity_model(iParam1) == get_entity_model(uParam0->f_3[iVar1]->f_2))
				{
					iVar0++;
					if (iParam1 == uParam0->f_3[iVar1]->f_2)
					{
						return iVar0;
					}
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_620(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 1048576;
		case 20:
			return 2097152;
		case 21:
			return 4194304;
		case 22:
			return 8388608;
		case 23:
			return 16777216;
		case 24:
			return 33554432;
		case 25:
			return 524288;
	}
	return 0;
}

bool func_621(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_622(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_623(var uParam0)
{
	if (!func_621(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_622(&(uParam0->f_1), 1);
	}
}

void func_624(var uParam0)
{
	if (!func_621(*uParam0, 1))
	{
		request_ptfx_asset();
		func_622(uParam0, 1);
	}
}

bool func_625()
{
	if (func_255() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_626(int iParam0)
{
	return iParam0 != 0;
}

void func_627(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_628(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

void func_629(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237->f_11[iParam0]->f_24 = iParam1;
	}
}

int func_630(vector3 vParam0, float fParam3, char[4] cParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_90(vParam0))
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
		if (func_815(vParam0))
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
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_816(iVar0, bParam8);
	return iVar0;
}

bool func_631(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_462[iVar0]) && are_strings_equal(uParam0->f_462[iVar0], sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_632(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	Var0 = { func_182(uParam0) };
	return are_strings_equal(sParam1, &Var0);
}

bool func_633(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_634(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_635(int iParam0)
{
	return iParam0;
}

void func_636(int iParam0)
{
	if (!func_817(iParam0))
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

void func_637(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_638(iParam0, 1);
	func_640(iParam0, 1);
	func_641(iParam0, 128);
}

void func_638(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_418(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_639(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_640(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_641(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_642(int iParam0)
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

int func_643(int iParam0)
{
	iVar0 = func_466(func_818(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_644(int iParam0)
{
	if (func_645(81053684, iParam0))
	{
		return true;
	}
	if (func_645(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_645(int iParam0, int iParam1)
{
	iVar1 = func_466(func_818(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_432(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

void func_646(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_647()
{
	if (!func_449(Global_1935630->f_45))
	{
		return -1569615261;
	}
	return Global_1935630->f_45;
}

int func_648(int iParam0, int iParam1)
{
	return func_819(&uVar0, iParam0, iParam1);
}

bool func_649()
{
	return &Global_1935436 == 1;
}

bool func_650()
{
	return &Global_1935436 == 2;
}

int func_651(int iParam0)
{
	iVar0 = func_432(iParam0);
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

struct<4> func_652(bool bParam0)
{
	return func_473(1328661203, func_820(), -1591664384, bParam0);
}

int func_653(int iParam0)
{
	if (!func_431(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_654(bool bParam0)
{
	iVar0 = func_475(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_473(923904168, func_652(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_473(923904168, func_652(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_473(923904168, func_652(bParam0), -740156546, 0);
}

bool func_655(int iParam0, bool bParam1)
{
	if (func_432(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_821(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_656(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_474(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_657(int iParam0, var uParam1, int iParam2)
{
	if (func_822(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_658(bool bParam0)
{
	iVar0 = func_475(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_473(271701509, func_652(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_473(271701509, func_652(bParam0), 12999093, 0);
}

bool func_659(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_432(iParam0);
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

bool func_660(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_475(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_661()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

bool func_662(int iParam0, int iParam1)
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

int func_663(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_662(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_662(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_662(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_662(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_662(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_662(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_664(int iParam0)
{
	func_459(iParam0, 8, 6);
}

void func_665(int iParam0)
{
	func_823(&(Global_1946804->f_2589), iParam0);
}

void func_666(int iParam0, int iParam1)
{
	func_824(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_667(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_668(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_432(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_455(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_666(iVar1, iVar3);
		}
	}
	if (func_825(-1586649372) && func_455(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_666(iVar1, iVar3);
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
						func_666(iVar1, iVar3);
					}
				}
			}
			func_826(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_826(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_666(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_826(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_666(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_666(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_826(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_826(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_666(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_826(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_666(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_666(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_432(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_666(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_827(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_432(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_666(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_662(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_666(iVar1, iVar3);
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
						func_666(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_827(&(Global_1946804->f_1497.f_1[iVar1])) || func_662(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_666(iVar1, iVar3);
					}
				}
			}
			switch (func_432(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_432(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_666(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_432(&(uParam0->f_1[iVar1])) || func_662(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_666(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_669(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_828(0);
	if (iParam2 != 0 && func_829(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_830(iParam0, func_457(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_670(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_255() != -1;
	iVar7 = func_828(0);
	if (func_453(32768))
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
			iVar5 = func_457(iVar0, 1);
			if (func_454(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_454(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_831(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_832(uParam0);
				if (iVar3 > 0)
				{
					if (!func_453(524288))
					{
						func_451(524288);
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
							iVar5 = func_457(iVar0, 1);
							if (func_454(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_454(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_831(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_666(iVar0, iParam2);
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
					func_674(524288);
				}
			}
		}
	}
}

void func_671(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_833(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_255() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_834(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_835(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_835(Global_40.f_7729);
				Global_1946804->f_1378 = func_835(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_836(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_837(0, 1);
	}
}

void func_672(struct<4> Param0)
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
			if (func_633(Param0))
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
			func_634(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_451(8);
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
			if (func_633(Param0))
			{
				return;
			}
			func_634(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_451(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_472(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_673(var uParam0)
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

void func_674(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_675(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_676(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_677(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

char* func_678(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_679(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_680(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_838(0, 1, bParam0, bParam1);
	sVar0 = _create_var_string(2, sVar0);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[1]), bParam2);
	if (bParam0)
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), false);
	}
	else if (bParam1)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_cold");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
	else
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_hot");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
}

int func_681(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

void func_682()
{
	func_839();
	func_840();
	func_841();
}

int func_683(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_842(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_684(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_256(iParam0);
	if (!func_114(iParam0) || is_entity_dead(iVar0))
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

void func_685(int iParam0, int iParam1)
{
	if (!func_305(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_686(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_305(iParam0))
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
					iParam4 = func_843(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_489((*Global_1360165)[iParam0]->f_4.f_2) || func_320((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_843(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_844((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_845(iParam0, 0))
					{
						func_311(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_846(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_309(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_257(func_256(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_257(func_306(iParam0), 0))
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

bool func_687(int iParam0, int iParam1)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_847(iParam0, iParam1);
	return bVar0;
}

void func_688(int iParam0, int iParam1, bool bParam2)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_687(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_311(iParam0, 25, 1);
	}
}

void func_689(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_848(iParam2))
		{
			iVar0 = func_849(iParam2, -1);
			if (func_850(iParam1, iVar0))
			{
				if (func_851(iParam1, iVar0))
				{
					if (func_852(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_853(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_854(iParam0, iParam1, 0);
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
			func_311(iParam0, 66, 0);
		}
	}
}

void func_690(int iParam0)
{
	func_855(iParam0);
	func_856(iParam0, 0);
}

void func_691(int iParam0, int iParam1)
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

bool func_692(int iParam0)
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

void func_693(int iParam0, int iParam1)
{
	if (!func_305(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_287(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_287(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_694(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

void func_695(int iParam0, bool bParam1)
{
	if (!func_305(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	func_857(iVar0);
	func_311(iParam0, 60, 1);
	if (bParam1)
	{
		func_858(iParam0);
	}
}

void func_696(int iParam0, bool bParam1)
{
	if (!func_305(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	func_859(iVar0);
	func_309(iParam0, 60, 1);
	if (bParam1)
	{
		func_860(iParam0);
	}
}

void func_697(int iParam0, bool bParam1)
{
	if (!func_305(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	func_861(iVar0);
	if (iParam0 == 14)
	{
		func_862(iVar0);
	}
	func_311(iParam0, 61, 1);
	if (bParam1)
	{
		func_863(iParam0);
	}
}

void func_698(int iParam0, bool bParam1)
{
	if (!func_305(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	func_864(iVar0);
	func_309(iParam0, 61, 1);
	if (bParam1)
	{
		func_865(iParam0);
	}
}

int func_699(int iParam0, int iParam1)
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
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_700(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_866(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_660(*uParam1, &Var0, bParam6, 0))
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
	if (!func_701(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_475(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_701(bool bParam0)
{
	if (func_255() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_475(bParam0));
}

int func_702(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_867(iParam0))
	{
		return 0;
	}
	if (!func_701(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_703(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_868(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

char* func_704(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_869(iVar0);
}

char* func_705(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case 1468884243:
			return "CANOE";
		case -283162583:
			return "WAGON02X";
		case 1874711736:
			return "WAGON04X";
		case -1758092337:
			return "WAGON05X";
		case 1596452133:
			return "CHUCKWAGON000X";
		case -293448458:
			return "WAGONCIRCUS02X";
		case 1761016051:
			return "COACH2";
		case 1192745176:
			return "PRIVATECOALCAR01X";
		case 703203753:
			return "NORTHPASSENGER01X";
		case 89913743:
			return "PRIVATESTEAMER01X";
		case 572854005:
			return "PRIVATEDINING01X";
		case 822759307:
			return "UTILLIWAG";
		case -623113369:
			return "SKIFF";
		case 1493442814:
			return "HANDCART";
		case -397513868:
			return "ROWBOATSWAMP";
		case -258491284:
			return "ROWBOATSWAMP02";
	}
	return "";
}

void func_706(var uParam0)
{
	Var1.f_10 = -1569615261;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!is_string_null_or_empty(uParam0->f_3[iVar0]->f_9) && is_entity_dead(uParam0->f_3[iVar0]->f_2))
		{
			_copy_memory(uParam0->f_3[iVar0], &Var1, 13);
		}
		iVar0++;
	}
}

int func_707(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2) && uParam0->f_3[iVar0]->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_708(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((!is_string_null_or_empty(uParam0->f_3[iVar0]->f_9) && !is_string_null_or_empty(sParam1)) && are_strings_equal(uParam0->f_3[iVar0]->f_9, sParam1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_709(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!does_entity_exist(uParam0->f_3[iVar0]->f_2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_710(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (!func_305(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = func_544(iParam0, 1);
	switch ((*Global_1360165)[iParam0]->f_70.f_12)
	{
		case 0:
			(*Global_1360165)[iParam0]->f_124 = _0x31c70a716cae1fee(iVar3);
			(*Global_1360165)[iParam0]->f_125 = 0;
			if (func_257((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_546(iParam0, 3);
			}
			else
			{
				if (!func_870(iParam0) && func_871(iParam0, &uVar4))
				{
					_0x187d65f3aec5d679(func_542(iParam0, 1), &uVar4);
				}
				func_310(iParam0, 256, 0);
				func_546(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!_0xa8120ebeaf290c7a(iVar3))
				{
					return func_872();
				}
				if (bParam2 && !func_90(vVar0))
				{
					_0x59c7ad6fea2ac449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					_0xd4b614179bcd0654(iVar3);
				}
				if (!func_873(iParam0, vVar0, fParam6, iParam10))
				{
					return func_872();
				}
				if (func_257((*Global_1360165)[iParam0]->f_124, 0))
				{
					if (_0x31c70a716cae1fee(iVar3) != (*Global_1360165)[iParam0]->f_124)
					{
					}
					if (!does_entity_belong_to_this_script((*Global_1360165)[iParam0]->f_124, true))
					{
						set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
					}
					freeze_entity_position((*Global_1360165)[iParam0]->f_124, true);
					set_entity_invincible((*Global_1360165)[iParam0]->f_124, true);
					func_546(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_257((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_546(iParam0, 1);
				return func_872();
			}
			if (!bParam9 || _0xa0bc8faed8cfeb3c((*Global_1360165)[iParam0]->f_124))
			{
				func_546(iParam0, 3);
			}
			break;
		case 3:
			if (!func_257((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_546(iParam0, 1);
				return func_872();
			}
			if (bParam7)
			{
				if (!func_874(iParam0, (*Global_1360165)[iParam0]->f_124, 1))
				{
					return func_872();
				}
			}
			if ((bParam2 && !func_90(vVar0)) && !func_599(vVar0, get_entity_coords((*Global_1360165)[iParam0]->f_124, true, false), 1056964608, 1))
			{
				if (is_entity_attached((*Global_1360165)[iParam0]->f_124))
				{
					detach_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_285((*Global_1360165)[iParam0]->f_124, vVar0, fParam6, 2, 1073741824);
			}
			if (bParam1)
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					if (func_507(iParam0, 39, 1))
					{
					}
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_311(iParam0, 39, 1);
				func_310(iParam0, 8, 1);
				func_310(iParam0, 64, 0);
				(*Global_1360165)[iParam0]->f_70.f_11 = get_id_of_this_thread();
			}
			freeze_entity_position((*Global_1360165)[iParam0]->f_124, false);
			set_entity_invincible((*Global_1360165)[iParam0]->f_124, false);
			func_875((*Global_1360165)[iParam0]->f_124, iParam0);
			if (bParam8)
			{
				_0xf74e134f40192884((*Global_1360165)[iParam0]->f_124, 1);
			}
			sVar12 = func_876(iParam0, func_625());
			if (!is_string_null_or_empty(sVar12))
			{
				_0x63aa2b8eb087886a(func_542(iParam0, 1), get_hash_key(sVar12));
			}
			(*Global_1360165)[iParam0]->f_70 = (*Global_1360165)[iParam0]->f_124;
			(*Global_1360165)[iParam0]->f_124 = 0;
			func_309(iParam0, 40, 0);
			func_310(iParam0, 32, 0);
			func_546(iParam0, 0);
			return (*Global_1360165)[iParam0]->f_70;
	}
	return func_872();
}

void func_711(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = get_max_attribute_points(iParam1, 16);
			iVar0 = get_random_int_in_range(round((IntToFloat(iVar1) * 0.4f)), round((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = get_max_attribute_points(iParam1, 16);
			iVar0 = get_random_int_in_range(round((IntToFloat(iVar1) * 0.1f)), round((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	set_attribute_points(iParam1, 16, iVar0);
}

void func_712(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_542(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_877(func_306(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_858(iParam0);
	}
	else
	{
		func_860(iParam0);
	}
	if (bParam2)
	{
		func_863(iParam0);
	}
	else
	{
		func_865(iParam0);
	}
}

char* func_713(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return func_878(uParam0->f_13[iVar0]->f_1);
		}
		iVar0++;
	}
	return "";
}

bool func_714(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_715(var uParam0, int iParam1, bool bParam2)
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

void func_716(int iParam0)
{
	if (!func_305(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_879(iParam0);
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

void func_717(int iParam0)
{
	if (func_114(iParam0))
	{
		if (does_entity_exist(func_256(iParam0)))
		{
			func_694(iParam0, 67108864, 1);
			func_309(iParam0, 19, 1);
		}
	}
}

float func_718(int iParam0)
{
	if (!func_305(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_719(int iParam0)
{
	iVar0 = func_256(iParam0);
	iVar1 = func_534(iParam0, 0);
	func_880(iParam0, iVar0);
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

int func_720(int iParam0)
{
	iVar0 = 0;
	if (!func_305(iParam0))
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
	if (!func_305(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_721(int iParam0)
{
	if (!func_305(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_542(iParam0, 1);
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

void func_722(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_80(iParam0);
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
	if (func_751(iParam0, 64))
	{
		func_723(iParam0);
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
	bVar3 = func_821(42);
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
				func_881(&((*Global_1900383)[iParam0]->f_27));
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
		func_723(iParam0);
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
		if (func_882(1) < 1)
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
		func_883(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_751(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_884(iParam0);
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
	fVar15 = func_885(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_886(iParam0))
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
		func_887((*Global_1900383)[iParam0]->f_26);
		func_888((*Global_1900383)[iParam0]->f_26);
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
	if (func_516(iVar0) && !bVar9)
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
	iVar21 = func_882(iParam0);
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

void func_723(int iParam0)
{
	iParam0 = func_209(iParam0);
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

void func_724(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_80(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_889(iVar6);
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

bool func_725(int iParam0)
{
	if (!func_890(iParam0))
	{
		return false;
	}
	if (!func_891())
	{
		return true;
	}
	return false;
}

void func_726(int iParam0, int iParam1)
{
	iParam0 = func_209(iParam0);
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

void func_727(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_728(int iParam0, struct<2> Param1)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_892(iParam0, Param1))
	{
	}
	if (!func_893(iParam0, Param1.f_1))
	{
	}
}

void func_729(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_894((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_730(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_731(var uParam0)
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

void func_732(var uParam0)
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

void func_733(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_734(int iParam0, var uParam1)
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

void func_735(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_736(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_737(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_738(int iParam0)
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

void func_739(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_740(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_741(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_895(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_895(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_896(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_897(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_898(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_742(int iParam0)
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
	if (func_899(iParam0))
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
	if (func_313(iParam0))
	{
		iVar3 = func_314(iParam0);
		if (func_900(iVar3))
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

void func_743(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_744(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_550())
	{
		if (func_262())
		{
			bVar0 = false;
			if (!func_551((*Global_1835011)[15]->f_1, 1) && !func_821(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_901();
				*iParam1 = func_902();
				*uParam2 = func_903();
				return 1;
			}
			else
			{
				*uParam0 = func_904();
				*iParam1 = func_905();
				*uParam2 = func_906();
				return 1;
			}
		}
		else if (func_625())
		{
			if (!func_551((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_907();
				*iParam1 = func_908();
				*uParam2 = func_909();
				return 1;
			}
			else
			{
				*uParam0 = func_910();
				*iParam1 = func_911();
				*uParam2 = func_912();
				return 1;
			}
		}
	}
	else if (func_262())
	{
		*uParam0 = func_913();
		*iParam1 = func_914();
		*uParam2 = func_915();
		return 1;
	}
	else if (func_625())
	{
		*uParam0 = func_916();
		*iParam1 = func_917();
		*uParam2 = func_918();
		return 1;
	}
	return 0;
}

void func_745(int iParam0, var uParam1)
{
	iParam0 = func_209(iParam0);
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

void func_746(int iParam0, var uParam1)
{
	iParam0 = func_209(iParam0);
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

void func_747(int iParam0, var uParam1)
{
	iParam0 = func_209(iParam0);
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

void func_748(int iParam0, int iParam1)
{
	iParam0 = func_209(iParam0);
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

void func_749(int iParam0, int iParam1)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_563(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_744(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_919(iParam1);
	iVar5 = func_80(iParam0);
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

void func_750(int iParam0, int iParam1)
{
	iParam0 = func_209(iParam0);
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

bool func_751(int iParam0, int iParam1)
{
	iParam0 = func_209(iParam0);
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

bool func_752(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_895(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_920(Var0, 1415981582, 0);
	if (!func_431(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_753(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_895(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_920(Var0, -2119169513, 0);
	if (!func_431(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_754(int iParam0, var uParam1)
{
	if (!func_921(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_922() };
	*uParam1 = func_920(Var0, iParam0, 0);
	if (!func_431(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_755(int iParam0)
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

void func_756(int iParam0, var uParam1)
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
	func_923(iParam0, *uParam1);
	func_923(iParam0, uParam1->f_1);
}

void func_757(int iParam0)
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

void func_758(int iParam0, var uParam1)
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
	func_923(iParam0, *uParam1);
	func_923(iParam0, uParam1->f_1);
	func_923(iParam0, uParam1->f_2);
	func_923(iParam0, uParam1->f_3);
	func_923(iParam0, uParam1->f_4);
	func_923(iParam0, uParam1->f_5);
}

int func_759(int iParam0, int iParam1, bool bParam2)
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

void func_760(var uParam0)
{
	func_924(uParam0->f_1875);
	get_model_dimensions(get_entity_model(Global_35), &vVar0, &vVar3);
	vVar0.x = (vVar0.x * 0.35f);
	vVar3.x = (vVar3.x * 0.35f);
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_1875 = _create_volume_cylinder(Global_36, 0f, 0f, 0f, vVar6);
	if (!Global_1935630->f_12)
	{
		_0x7c00cfc48a782dc0(uParam0->f_1875, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	func_298(uParam0, 1048576);
	func_298(uParam0, 2097152);
}

void func_761(var uParam0)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	iVar1 = get_entity_model(iVar0);
	if (!is_model_valid(iVar1))
	{
		return;
	}
	func_924(uParam0->f_1875);
	get_model_dimensions(iVar1, &vVar2, &vVar5);
	vVar8 = { vVar5 - vVar2 };
	vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) };
	if (_is_draft_vehicle(iVar0))
	{
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			iVar15 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar0), iVar14);
			if (!is_entity_dead(iVar15))
			{
				get_model_dimensions(get_entity_model(iVar15), &vVar2, &vVar5);
				vVar11 = { vVar5 - vVar2 };
				vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) };
			}
			else
			{
				iVar14++;
			}
		}
		vVar8.f_1 = (vVar8.y + (vVar11.y / 2f));
	}
	uParam0->f_1875 = _create_volume_box(get_entity_coords(iVar0, true, false), get_entity_rotation(iVar0, 2), vVar8);
	if (!is_entity_dead(iVar0))
	{
		_0x7c00cfc48a782dc0(uParam0->f_1875, iVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	func_348(uParam0, 2097152);
	func_298(uParam0, 1048576);
}

void func_762(var uParam0, int iParam1)
{
	iVar0 = get_entity_model(iParam1);
	if (!is_model_valid(iVar0))
	{
		return;
	}
	func_924(uParam0->f_1875);
	get_model_dimensions(iVar0, &vVar1, &vVar4);
	uParam0->f_1882 = { vVar4 - vVar1 };
	vVar7 = { uParam0->f_1882 * FtoV(func_763(iParam1)) };
	uParam0->f_1875 = _create_volume_box(get_entity_coords(iParam1, true, false), 0f, 0f, 0f, vVar7);
	if (!is_entity_dead(iParam1))
	{
		_0x7c00cfc48a782dc0(uParam0->f_1875, iParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	func_348(uParam0, 1048576);
	func_298(uParam0, 2097152);
}

float func_763(int iParam0)
{
	if (is_ped_sprinting(iParam0))
	{
		return 1f;
	}
	if (is_ped_running(iParam0))
	{
		return 0.9f;
	}
	if (is_ped_walking(iParam0))
	{
		return 0.8f;
	}
	return 0.7f;
}

bool func_764(int iParam0)
{
	switch (func_255())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_765(int iParam0)
{
	switch (func_255())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return false;
}

bool func_766(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, true, 0);
}

void func_767()
{
	disable_control_action(0, -349518703, false);
	disable_control_action(0, -1098542161, false);
	disable_control_action(0, -1591726981, false);
}

void func_768(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (func_769(uParam0->f_1633[iParam1]))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!func_528(uParam0->f_1633[iParam1]->f_10, 256))
			{
				if (func_430(&(uParam0->f_1903)))
				{
					func_787(uParam0->f_1903, 0);
					func_925(uParam0->f_1633[iParam1], 2);
				}
			}
			break;
		case 1:
			if (!func_528(uParam0->f_1633[iParam1]->f_10, 256))
			{
				if (!func_926())
				{
					func_925(uParam0->f_1633[iParam1], 0);
				}
			}
			else
			{
				func_925(uParam0->f_1633[iParam1], 0);
			}
			break;
		case 2:
			if (!func_927())
			{
				func_925(uParam0->f_1633[iParam1], 0);
			}
			break;
	}
}

int func_769(var uParam0)
{
	return uParam0->f_14;
}

bool func_770(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	vVar0 = { vParam4 - vParam1 };
	vVar3 = { vParam1 - vParam10 };
	fVar6 = func_928(vParam7, vVar0);
	fVar7 = -func_928(vParam7, vVar3);
	if (absf(fVar6) < 1E-08f)
	{
		return false;
	}
	fVar8 = (fVar7 / fVar6);
	*uParam0 = { vParam1 + Vector(fVar8, fVar8, fVar8) * vVar0 };
	if (fVar8 < 0f || fVar8 > 1f)
	{
		return false;
	}
	return true;
}

void func_771(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, var uParam8, var uParam9)
{
	if (!func_929(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, (cos(uParam0->f_1016[iParam1]->f_12) * uParam0->f_1016[iParam1]->f_11), (sin(uParam0->f_1016[iParam1]->f_12) * uParam0->f_1016[iParam1]->f_11)) };
		vParam3 = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, (cos(uParam0->f_1016[iParam1]->f_13) * uParam0->f_1016[iParam1]->f_11), (sin(uParam0->f_1016[iParam1]->f_13) * uParam0->f_1016[iParam1]->f_11)) };
	}
	else
	{
		*uParam2 = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, ((cos(uParam0->f_1016[iParam1]->f_12) * uParam0->f_1016[iParam1]->f_11) + uParam0->f_1016[iParam1]->f_18), ((sin(uParam0->f_1016[iParam1]->f_12) * uParam0->f_1016[iParam1]->f_11) + uParam0->f_1016[iParam1]->f_18)) };
		vParam3 = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, ((cos(uParam0->f_1016[iParam1]->f_13) * uParam0->f_1016[iParam1]->f_11) + uParam0->f_1016[iParam1]->f_18), ((sin(uParam0->f_1016[iParam1]->f_13) * uParam0->f_1016[iParam1]->f_11) + uParam0->f_1016[iParam1]->f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_1897 && _does_volume_exist(uParam0->f_1875)) && func_91(uParam0->f_1898, uParam0->f_1016[iParam1]->f_1, uParam0->f_1016[iParam1]->f_17, 1, 1))
	{
		vVar34 = { _0x3e2a25b2416dd67e(uParam0->f_1875) };
		vVar37 = { _0xf70f00013a62f866(uParam0->f_1875) };
		*vVar3[0] = { _get_object_offset_from_coords(vVar37, get_entity_heading(uParam0->f_1898), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		*vVar3[1] = { _get_object_offset_from_coords(vVar37, get_entity_heading(uParam0->f_1898), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		*vVar3[2] = { _get_object_offset_from_coords(vVar37, get_entity_heading(uParam0->f_1898), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		*vVar3[3] = { _get_object_offset_from_coords(vVar37, get_entity_heading(uParam0->f_1898), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		*vVar16[0] = { _0x83acc65d9acec5ef(uParam0->f_1016[iParam1]->f_1, *vVar3[0], *vVar3[1], true) };
		*vVar16[1] = { _0x83acc65d9acec5ef(uParam0->f_1016[iParam1]->f_1, *vVar3[0], *vVar3[2], true) };
		*vVar16[2] = { _0x83acc65d9acec5ef(uParam0->f_1016[iParam1]->f_1, *vVar3[3], *vVar3[1], true) };
		*vVar16[3] = { _0x83acc65d9acec5ef(uParam0->f_1016[iParam1]->f_1, *vVar3[3], *vVar3[2], true) };
		fVar29[0] = get_distance_between_coords(uParam0->f_1016[iParam1]->f_1, *vVar16[0], true);
		fVar29[1] = get_distance_between_coords(uParam0->f_1016[iParam1]->f_1, *vVar16[1], true);
		fVar29[2] = get_distance_between_coords(uParam0->f_1016[iParam1]->f_1, *vVar16[2], true);
		fVar29[3] = get_distance_between_coords(uParam0->f_1016[iParam1]->f_1, *vVar16[3], true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (&fVar29[iVar40] < &fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { *vVar16[iVar41] };
	}
	*fParam6 = get_distance_between_coords(vVar0, *uParam2, true);
	*fParam7 = get_distance_between_coords(vVar0, vParam3, true);
	*uParam8 = func_447(uParam0->f_1016[iParam1]->f_1, vVar0, 0);
	if (*uParam8 < uParam0->f_1016[iParam1]->f_12)
	{
		*uParam8 = (*uParam8 + 360f);
	}
	if (uParam0->f_1016[iParam1]->f_13 < uParam0->f_1016[iParam1]->f_12)
	{
		*uParam9 = (uParam0->f_1016[iParam1]->f_13 + 360f);
	}
	else
	{
		*uParam9 = uParam0->f_1016[iParam1]->f_13;
	}
	if (*uParam8 < *uParam9)
	{
		vVar42 = { uParam0->f_1016[iParam1]->f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1876 = { vVar42 + Vector(0f, (cos(*uParam8) * uParam0->f_1016[iParam1]->f_11), (sin(*uParam8) * uParam0->f_1016[iParam1]->f_11)) };
		fVar45 = 0f;
		uParam0->f_1879 = { vVar42 + Vector(0f, ((cos(*uParam8) * uParam0->f_1016[iParam1]->f_17) + fVar45), ((sin(*uParam8) * uParam0->f_1016[iParam1]->f_17) + fVar45)) };
	}
}

void func_772(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (uParam0->f_3[iVar0]->f_1 != 0)
		{
			if ((does_entity_exist(uParam0->f_3[iVar0]->f_2) && is_entity_a_ped(uParam0->f_3[iVar0]->f_2)) && !is_string_null_or_empty(&(uParam0->f_3[iVar0]->f_4)))
			{
				func_930(&(uParam0->f_1771), get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2), &(uParam0->f_3[iVar0]->f_4), 0);
			}
		}
		iVar0++;
	}
}

bool func_773(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (8 == uParam0->f_475[iVar0]->f_2 && &uParam0->f_475[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_774(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0]->f_29)
		{
			if ((!is_string_null_or_empty(&(uParam0->f_1016[iVar0]->f_22)) && are_strings_equal(&(uParam0->f_1016[iVar0]->f_22), sParam1)) && func_485(uParam0->f_1016[iVar0], 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_775(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_931(vParam1, uParam0);
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

void func_776(var uParam0, int iParam1)
{
	uParam0->f_26 = (uParam0->f_26 || iParam1);
}

void func_777(int iParam0, float fParam1)
{
	if (!is_entity_dead(Global_35))
	{
		if (!is_ped_on_mount(player_ped_id()))
		{
			set_ped_max_move_blend_ratio(player_ped_id(), fParam1);
		}
		else if (!is_entity_dead(get_mount(player_ped_id())))
		{
			set_ped_max_move_blend_ratio(get_mount(player_ped_id()), fParam1);
		}
	}
	if (!func_932(iParam0, 8))
	{
		disable_control_action(0, -640622144, false);
	}
	if (!func_932(iParam0, 4))
	{
		disable_control_action(0, -485697785, false);
	}
	if (!func_932(iParam0, 16))
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
	}
	if (!func_932(iParam0, 128))
	{
		disable_control_action(0, -562475458, false);
	}
	if (!func_932(iParam0, 512))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
	if (!func_932(iParam0, 64))
	{
		disable_control_action(0, -620139643, false);
	}
	if (!(func_933(17) && func_195(Global_35, (*Global_1835011)[17]->f_18, 0) < 10f))
	{
		if (!func_932(iParam0, 2048))
		{
			disable_control_action(0, -822242784, false);
		}
	}
	if (!func_932(iParam0, 4096))
	{
		disable_control_action(0, -1664638556, false);
	}
	if (!is_entity_dead(Global_35))
	{
		if (!func_932(iParam0, 1024))
		{
			set_ped_reset_flag(Global_35, 2, true);
			set_ped_reset_flag(Global_35, 21, true);
		}
		if (!func_932(iParam0, 8))
		{
			set_ped_reset_flag(Global_35, 168, true);
		}
		set_ped_reset_flag(Global_35, 33, true);
		if (!func_932(iParam0, 32))
		{
			if (_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
		}
	}
}

bool func_778(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_779(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_475[iParam1]->f_17 == 0 && func_8(uParam0) == 3)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if (uParam0->f_475[iParam1]->f_17 == 2 && func_8(uParam0) == 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if ((uParam0->f_475[iParam1]->f_17 == 1 && func_8(uParam0) > 3) && func_8(uParam0) < 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	return false;
}

void func_780(var uParam0, int iParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2) && is_entity_a_ped(uParam0->f_3[iVar0]->f_2))
		{
			StringCopy(&cVar1, uParam0->f_3[iVar0]->f_9, 64);
			if (is_string_null_or_empty(&cVar1))
			{
				cVar1 = { func_366(uParam0, uParam0->f_3[iVar0]->f_2) };
			}
			if (!is_string_null_or_empty(&cVar1) && _0x6f1f0b17109309da(iParam1, &cVar1))
			{
				iVar9 = get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2);
				if (is_ped_human(iVar9) && iVar9 != Global_35)
				{
					func_781(iVar9, Global_35, uParam2, uParam3);
				}
			}
		}
		iVar0++;
	}
}

void func_781(int iParam0, var uParam1, var uParam2, var uParam3)
{
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_3 = uParam1;
	Var0.f_4 = 14283;
	Var0.f_14 = uParam2;
	Var0.f_15 = uParam3;
	_0x66f9eb44342bb4c5(iParam0, &Var0);
}

void func_782(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_475[iParam2]->f_4 < 0)
	{
		return;
	}
	iVar0 = uParam0->f_475[iParam2]->f_4;
	if (_does_anim_scene_exist(uParam0->f_1522[iVar0]->f_8))
	{
		if (_is_anim_scene_loaded(uParam0->f_1522[iVar0]->f_8, true, false))
		{
			func_809(uParam0, uParam0->f_1522[iVar0]->f_8);
			_get_anim_scene_origin(uParam0->f_1522[iVar0]->f_8, &vVar1, &vVar4, 2);
			if (func_367(uParam0->f_1522[iVar0], 1))
			{
				if (_get_anim_scene_entity_matrix(uParam0->f_1522[iVar0]->f_8, func_213(Global_35), &vVar7, false, 0, 2))
				{
					fVar19 = (func_447(vVar1, Global_36, 1) - func_447(vVar1, vVar7, 1));
					vVar4.f_2 = (vVar4.z + fVar19);
					set_anim_scene_origin(uParam0->f_1522[iVar0]->f_8, vVar1, vVar4, 2);
				}
			}
			if (_0x6f1f0b17109309da(uParam0->f_1522[iVar0]->f_8, func_213(Global_35)) && uParam0->f_475[iParam2]->f_17 != 0)
			{
				if ((func_8(uParam0) > 3 && !func_300(uParam0->f_1016[&uParam0->f_475[iParam2]], 16)) && !func_300(uParam0->f_1016[&uParam0->f_475[iParam2]], 32768))
				{
					func_934(uParam0, 1);
				}
				if (uParam0->f_1899)
				{
					if (func_300(uParam0->f_1016[&uParam0->f_475[iParam2]], 128))
					{
					}
					else
					{
						func_348(uParam0, 131072);
						return;
					}
				}
			}
			if (!_is_anim_scene_started(uParam0->f_1522[iVar0]->f_8, false))
			{
				if (_0x6f1f0b17109309da(uParam0->f_1522[iVar0]->f_8, "b_PlayerArthur"))
				{
					set_anim_scene_bool(uParam0->f_1522[iVar0]->f_8, "b_PlayerArthur", !func_625(), false);
				}
				start_anim_scene(uParam0->f_1522[iVar0]->f_8);
				if (uParam0->f_475[iParam2]->f_17 == 0)
				{
					func_799(uParam0->f_1522[iVar0], 128);
					if (_0xa9016536015de29d(uParam0->f_1522[iVar0]->f_8, "pl_breakout"))
					{
						func_368(uParam0->f_1522[iVar0]->f_8, 10000, 0, -1, 0);
					}
				}
			}
			if (_is_anim_scene_paused(uParam0->f_1522[iVar0]->f_8))
			{
				set_anim_scene_paused(uParam0->f_1522[iVar0]->f_8, false);
			}
			if (func_618(uParam0->f_475[iParam2], 4))
			{
				uParam0->f_1685 = iParam2;
				if (((((func_339(uParam0) == 0 && !_0x81dcfd13cf39920e()) && uParam0->f_475[iParam2]->f_17 == 1) && &uParam0->f_475[iParam2] < 8) && !func_300(uParam0->f_1016[&uParam0->f_475[iParam2]], 32768)) && !func_300(uParam0->f_1016[&uParam0->f_475[iParam2]], 524288))
				{
					_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					func_484(uParam0, 64);
				}
			}
			iVar20 = 0;
			while (iVar20 < 35)
			{
				if ((uParam0->f_3[iVar20] && uParam0->f_3[iVar20]->f_8 > 0f) && !is_entity_dead(uParam0->f_3[iVar20]->f_2))
				{
					set_entity_visible(uParam0->f_3[iVar20]->f_2, false);
				}
				iVar20++;
			}
			if ((_0x6f1f0b17109309da(uParam0->f_1522[iVar0]->f_8, func_213(Global_35)) && uParam0->f_475[iParam2]->f_17 != 0) && !func_300(uParam0->f_1016[&uParam0->f_475[iParam2]], 32768))
			{
				if (_get_anim_scene_entity_matrix(uParam0->f_1522[iVar0]->f_8, func_213(Global_35), &vVar21, false, 0, 2) && !func_90(vVar21))
				{
					func_935(uParam0, 0);
				}
			}
			uParam0->f_475[iParam2]->f_7 = 1;
		}
	}
}

bool func_783(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (&uParam0->f_475[iVar0] == iParam1)
		{
			if (func_618(uParam0->f_475[iVar0], 4))
			{
				return true;
			}
			if (uParam0->f_475[iVar0]->f_2 == 11)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_784()
{
	return does_entity_exist(_get_first_entity_ped_is_carrying(Global_35));
}

void func_785(var uParam0)
{
	if (!uParam0->f_1897)
	{
		if (func_300(uParam0->f_1016[uParam0->f_1684], 8192) && _get_ped_crouch_movement(Global_35))
		{
			force_ped_motion_state(Global_35, 147004056, false, 0, false);
		}
		if (!func_300(uParam0->f_1016[uParam0->f_1684], 65536) || (!func_449(func_448(Global_35, 0, 1, 0)) && !func_449(func_448(Global_35, 1, 1, 0))))
		{
			if (func_343(uParam0, uParam0->f_1684))
			{
				func_936(uParam0->f_1016[uParam0->f_1684]->f_7);
			}
		}
	}
	if (!func_300(uParam0->f_1016[uParam0->f_1684], 16) && (func_449(func_448(Global_35, 0, 1, 0)) || func_449(func_448(Global_35, 1, 1, 0))))
	{
		_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 0);
		if (func_300(uParam0->f_1016[uParam0->f_1684], 65536))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_swap_weapon(0, 0, 0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(Global_35, iVar0);
			clear_sequence_task(&iVar0);
		}
		else
		{
			task_swap_weapon(Global_35, 0, 1, 0, 0);
		}
		func_615(uParam0, 1);
	}
	else if ((!func_343(uParam0, uParam0->f_1684) && !func_352(uParam0, 4)) && !_0x3ab6c7b0bb0df4b1(Global_35, -1))
	{
		set_player_control(get_player_index(), true, 0, false);
		func_615(uParam0, 3);
	}
	else
	{
		func_615(uParam0, 6);
	}
}

void func_786(var uParam0, int iParam1, bool bParam2)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	func_937(uParam0, iParam1, &vVar1, &fVar0);
	func_935(uParam0, func_595(uParam0->f_1345[&uParam0->f_475[iParam1]]->f_1, 8));
	func_26(&(uParam0->f_1869));
	_0xcb9401f918cb0f75(Global_35, "PlayLeadin", 1, -1);
	if (uParam0->f_1016[&uParam0->f_475[iParam1]]->f_39 != 0)
	{
		if (!func_938(uParam0, &(uParam0->f_475[iParam1])))
		{
			func_776(uParam0->f_1016[&uParam0->f_475[iParam1]], 4);
			_0xcb9401f918cb0f75(Global_35, func_486(uParam0->f_1016[&uParam0->f_475[iParam1]]->f_39), 1, -1);
		}
	}
	func_936(vVar1);
	if (uParam0->f_475[iParam1]->f_15 < 1f)
	{
		_0x3ad8eff9703be657(Global_35, uParam0->f_475[iParam1]->f_15);
		func_484(uParam0, 32);
	}
	if (func_618(uParam0->f_475[iParam1], 16))
	{
		func_939(uParam0, &(uParam0->f_475[iParam1]), &vVar4, vVar1, fVar0, &uVar21);
		task_flush_route();
		iVar24 = 0;
		while (iVar24 < 5)
		{
			task_extend_route(*vVar4[iVar24]);
			iVar24++;
		}
		open_sequence_task(&iVar20);
		func_940(uParam0, iParam1, bParam2, &vVar4);
		close_sequence_task(iVar20);
		task_perform_sequence(Global_35, iVar20);
		clear_sequence_task(&iVar20);
	}
	else
	{
		open_sequence_task(&iVar20);
		func_941(uParam0, iParam1, bParam2, vVar1);
		close_sequence_task(iVar20);
		task_perform_sequence(Global_35, iVar20);
		clear_sequence_task(&iVar20);
	}
}

int func_787(int iParam0, bool bParam1)
{
	if (!func_942())
	{
		return 0;
	}
	if (!func_943(iParam0))
	{
		return 0;
	}
	if (func_944(iParam0))
	{
		iVar0 = 0;
		if (func_432(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_480(&iVar0, 2);
			}
		}
		return func_945(iParam0, iVar0);
	}
	return 0;
}

bool func_788()
{
	return &Global_1357517;
}

void func_789()
{
	Global_1357516 = 0;
}

void func_790(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 103)
	{
		_datafile_register_query(uParam0->f_1889, iVar0, func_946(iVar0));
		iVar0++;
	}
}

void func_791(var uParam0)
{
	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_459 = { Var1 };
	StringCopy(&(uParam0->f_459), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_475)
	{
		*uParam0->f_475[iVar0] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1522)
	{
		*uParam0->f_1522[iVar0] = { Var76 };
		iVar0++;
	}
	uParam0->f_1683 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		*uParam0->f_1016[iVar0] = { Var35 };
		*uParam0->f_1345[iVar0] = { Var86 };
		iVar0++;
	}
	uParam0->f_1684 = -1;
	uParam0->f_1765 = { Global_36 };
	uParam0->f_1768 = 0;
	uParam0->f_1769 = 0;
	uParam0->f_1688 = -1;
	uParam0->f_1689 = -1f;
	uParam0->f_1664 = 0;
	uParam0->f_1666 = 0;
	uParam0->f_1666.f_1 = 0;
	uParam0->f_1903 = 0;
	if (_0x927b810e43e99932(&(uParam0->f_1692)))
	{
		_0x0a5a4f1979abb40e(&(uParam0->f_1692));
	}
}

void func_792(var uParam0, int iParam1)
{
	uParam0->f_1889.f_1 = 0;
	uParam0->f_1889.f_3 = iParam1;
}

bool func_793(var uParam0, int iParam1)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_data_node_index(&(uParam0->f_1889.f_1), &(uParam0->f_1889));
	return uVar0;
}

bool func_794(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_int(iParam2, &(uParam0->f_1889));
	return uVar0;
}

bool func_795(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_float(uParam2, &(uParam0->f_1889));
	return uVar0;
}

bool func_796(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_string(uParam2, &(uParam0->f_1889));
	return uVar0;
}

void func_797(var uParam0, var uParam1)
{
	if (func_800(uParam0, 24, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (func_800(uParam0, 25, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (func_800(uParam0, 26, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (func_800(uParam0, 27, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
	if (func_800(uParam0, 28, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32;
		}
	}
	if (func_800(uParam0, 29, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 128;
		}
	}
	if (func_800(uParam0, 32, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 256;
		}
	}
	if (func_800(uParam0, 33, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 512;
		}
	}
	if (func_800(uParam0, 34, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8192;
		}
	}
	if (func_800(uParam0, 36, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32768;
		}
	}
	if (func_800(uParam0, 37, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 65536;
		}
	}
	if (func_800(uParam0, 38, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 131072;
		}
	}
	if (func_800(uParam0, 41, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 262144;
		}
	}
	if (func_800(uParam0, 42, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 524288;
		}
	}
}

bool func_798(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return vdist2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_230(vParam0, vParam3) <= (fParam6 * fParam6);
}

void func_799(var uParam0, int iParam1)
{
	uParam0->f_9 = (uParam0->f_9 || iParam1);
}

bool func_800(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_bool(bParam2, &(uParam0->f_1889));
	return uVar0;
}

bool func_801(var uParam0, int iParam1, int iParam2)
{
	if (!is_itemset_valid(uParam0->f_1921))
	{
		uParam0->f_1921 = create_itemset(true);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2))
		{
			if (((func_802(iParam1) && !&uParam0->f_3[iVar0]) && is_entity_a_ped(uParam0->f_3[iVar0]->f_2)) && get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2) == Global_35)
			{
				iParam1 = get_entity_model(Global_35);
			}
			if (get_entity_model(uParam0->f_3[iVar0]->f_2) == iParam1)
			{
				if (!&uParam0->f_3[iVar0])
				{
					uParam0->f_3[iVar0]->f_1 = get_entity_model(uParam0->f_3[iVar0]->f_2);
					*iParam2 = iVar0;
					if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_in_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921))
					{
						add_to_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921);
					}
					return true;
				}
			}
			if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_string_null_or_empty(uParam0->f_3[iVar0]->f_9))
			{
				if (are_strings_equal(uParam0->f_3[iVar0]->f_9, func_416(iParam1)))
				{
					if (!&uParam0->f_3[iVar0])
					{
						uParam0->f_3[iVar0]->f_1 = get_entity_model(uParam0->f_3[iVar0]->f_2);
						*iParam2 = iVar0;
						if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_in_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921))
						{
							add_to_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
			if (is_entity_an_object(uParam0->f_3[iVar0]->f_2) && !is_string_null_or_empty(uParam0->f_3[iVar0]->f_9))
			{
				if (are_strings_equal(uParam0->f_3[iVar0]->f_9, func_869(iParam1)))
				{
					if (!&uParam0->f_3[iVar0])
					{
						uParam0->f_3[iVar0]->f_1 = get_entity_model(uParam0->f_3[iVar0]->f_2);
						*iParam2 = iVar0;
						if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_in_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921))
						{
							add_to_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
		}
		else if (is_model_valid(iParam1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((does_entity_exist(uParam0->f_3[iVar0]->f_2) && !is_string_null_or_empty(uParam0->f_3[iVar0]->f_9)) && _does_string_exist_in_string(uParam0->f_3[iVar0]->f_9, "^"))
		{
			if ((is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && is_model_a_ped(iParam1)) && !is_string_null_or_empty(func_416(iParam1)))
			{
				if (_does_string_exist_in_string(uParam0->f_3[iVar0]->f_9, func_416(iParam1)))
				{
					if (!&uParam0->f_3[iVar0])
					{
						uParam0->f_3[iVar0]->f_1 = get_entity_model(uParam0->f_3[iVar0]->f_2);
						*iParam2 = iVar0;
						if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_in_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921))
						{
							add_to_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
			if ((is_entity_an_object(uParam0->f_3[iVar0]->f_2) && _0x274ee1b90cfa669e(iParam1)) && !is_string_null_or_empty(func_869(iParam1)))
			{
				if (_does_string_exist_in_string(uParam0->f_3[iVar0]->f_9, func_869(iParam1)))
				{
					if (!&uParam0->f_3[iVar0])
					{
						uParam0->f_3[iVar0]->f_1 = get_entity_model(uParam0->f_3[iVar0]->f_2);
						*iParam2 = iVar0;
						if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_in_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921))
						{
							add_to_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_802(int iParam0)
{
	return (((iParam0 == 225514697 || iParam0 == -1692214353) || iParam0 == -1686040670) || iParam0 == 11966224);
}

int func_803(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
	}
	return 0;
}

int func_804(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 8:
			return 5;
		case 10:
			return 7;
		case 12:
			return 8;
		case 13:
			return 9;
		case 14:
			return 10;
		case 15:
			return 11;
	}
	return 0;
}

void func_805(var uParam0, var uParam1)
{
	if (func_800(uParam0, 88, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 1;
		}
	}
	if (func_800(uParam0, 89, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (func_800(uParam0, 90, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (func_800(uParam0, 91, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (func_800(uParam0, 92, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
}

var func_806(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_vector(uParam2, &(uParam0->f_1889));
	return uVar0;
}

void func_807(var uParam0)
{
	if (!func_63(uParam0, 8388608))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0]->f_29)
		{
			uParam0->f_1016[iVar0]->f_1 = { _get_object_offset_from_coords(uParam0->f_1016[iVar0]->f_1, -uParam0->f_1888, uParam0->f_1885) };
			vVar1 = { uParam0->f_1016[iVar0]->f_7 - uParam0->f_1016[iVar0]->f_1 };
			vVar1 = { vVar1 + uParam0->f_1885 };
			uParam0->f_1016[iVar0]->f_7 = { _get_object_offset_from_coords(uParam0->f_1016[iVar0]->f_1, -uParam0->f_1888, vVar1) };
			uParam0->f_1016[iVar0]->f_12 = (uParam0->f_1016[iVar0]->f_12 + uParam0->f_1888);
			uParam0->f_1016[iVar0]->f_13 = (uParam0->f_1016[iVar0]->f_13 + uParam0->f_1888);
			if (uParam0->f_1016[iVar0]->f_12 > 180f)
			{
				uParam0->f_1016[iVar0]->f_12 = (-180f + (absf(uParam0->f_1016[iVar0]->f_12) - 180f));
			}
			else if (uParam0->f_1016[iVar0]->f_12 < -180f)
			{
				uParam0->f_1016[iVar0]->f_12 = (180f - (absf(uParam0->f_1016[iVar0]->f_12) - 180f));
			}
			if (uParam0->f_1016[iVar0]->f_13 > 180f)
			{
				uParam0->f_1016[iVar0]->f_13 = (-180f + (absf(uParam0->f_1016[iVar0]->f_13) - 180f));
			}
			else if (uParam0->f_1016[iVar0]->f_13 < -180f)
			{
				uParam0->f_1016[iVar0]->f_13 = (180f - (absf(uParam0->f_1016[iVar0]->f_13) - 180f));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1633[iVar0]->f_11)
		{
			*uParam0->f_1633[iVar0] = { _get_object_offset_from_coords(*uParam0->f_1633[iVar0], -uParam0->f_1888, uParam0->f_1885) };
			uParam0->f_1633[iVar0]->f_6.f_2 = (uParam0->f_1633[iVar0]->f_6.f_2 + uParam0->f_1888);
		}
		iVar0++;
	}
	func_298(uParam0, 8388608);
}

bool func_808(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_475[iVar0]->f_2 == 9 && uParam0->f_475[iVar0]->f_4 == iParam1) && !func_367(uParam0->f_1522[iParam1], 32)) && ((uParam0->f_475[iVar0]->f_1 == 0 && !func_618(uParam0->f_475[iVar0], 512)) || func_618(uParam0->f_475[iVar0], 1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_809(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2))
		{
			StringCopy(&cVar1, uParam0->f_3[iVar0]->f_9, 64);
			if (is_string_null_or_empty(&cVar1))
			{
				cVar1 = { func_366(uParam0, uParam0->f_3[iVar0]->f_2) };
			}
			if (!is_string_null_or_empty(&cVar1))
			{
				if (_0x6f1f0b17109309da(iParam1, &cVar1))
				{
					set_anim_scene_entity(iParam1, &cVar1, uParam0->f_3[iVar0]->f_2, 0);
					if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2) != Global_35)
					{
						set_ped_can_be_targetted(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2), false);
					}
				}
				else if (func_802(uParam0->f_3[iVar0]->f_1))
				{
					if (func_625())
					{
						StringCopy(&cVar1, func_416(225514697), 64);
						if (_0x6f1f0b17109309da(iParam1, &cVar1))
						{
							set_anim_scene_entity(iParam1, &cVar1, uParam0->f_3[iVar0]->f_2, 0);
						}
					}
					else
					{
						StringCopy(&cVar1, func_416(11966224), 64);
						if (_0x6f1f0b17109309da(iParam1, &cVar1))
						{
							set_anim_scene_entity(iParam1, &cVar1, uParam0->f_3[iVar0]->f_2, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_810(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_811(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_812(var uParam0)
{
	if (!is_entity_dead(uParam0->f_2) && is_model_a_vehicle(uParam0->f_1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(uParam0->f_2), iVar0);
			if (!is_entity_dead(iVar1))
			{
				delete_ped(&iVar1);
			}
			iVar0++;
		}
	}
}

void func_813(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_924(uParam0->f_1633[iVar0]->f_12);
		iVar0++;
	}
}

void func_814(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1633[iVar0]->f_11)
		{
			func_924(uParam0->f_1633[iVar0]->f_12);
			switch (uParam0->f_1633[iVar0]->f_9)
			{
				case 0:
					uParam0->f_1633[iVar0]->f_12 = _create_volume_box(*uParam0->f_1633[iVar0], uParam0->f_1633[iVar0]->f_6, uParam0->f_1633[iVar0]->f_3);
					_0x19c7567d2f2287d6(uParam0->f_1633[iVar0]->f_12, 15);
					_0xb56d41a694e42e86(uParam0->f_1633[iVar0]->f_12, 0, 0, 0, -1, -1, 8);
					break;
				case 1:
					uParam0->f_1633[iVar0]->f_12 = _create_volume_cylinder(*uParam0->f_1633[iVar0], uParam0->f_1633[iVar0]->f_6, uParam0->f_1633[iVar0]->f_3);
					_0x19c7567d2f2287d6(uParam0->f_1633[iVar0]->f_12, 15);
					_0xb56d41a694e42e86(uParam0->f_1633[iVar0]->f_12, 0, 0, 0, -1, -1, 8);
					break;
				default:
					break;
					break;
			}
		}
		iVar0++;
	}
}

bool func_815(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_816(int iParam0, bool bParam1)
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

bool func_817(int iParam0)
{
	return func_418(iParam0, 2);
}

int func_818(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_465(iVar0);
}

int func_819(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_947(iParam1, 128);
	if (func_948("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_949(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_449(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4) && !_is_weapon_bow(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_947(iParam1, 512) && func_822(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if ((((((_is_weapon_two_handed(Var4.f_4) || func_810(Var4.f_4)) && (!_is_weapon_shotgun(Var4.f_4) || func_947(iParam1, 16))) && (!_is_weapon_sniper(Var4.f_4) || func_947(iParam1, 4))) && (!func_810(Var4.f_4) || func_947(iParam1, 8))) && (!_is_weapon_repeater(Var4.f_4) || !func_947(iParam1, 8388608))) && (!_is_weapon_rifle(Var4.f_4) || !func_947(iParam1, 1048576)))
				{
					if (iVar0 == 0 || _0xa2091482ed42ef85(Global_35, &Var4) > _0xa2091482ed42ef85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_950(iVar1);
	}
	if (is_weapon_valid(iVar0))
	{
	}
	else if (!func_947(iParam1, 512) && !func_947(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_819(uParam0, iParam1, iParam2);
	}
	else if (func_947(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

struct<4> func_820()
{
	return Var0;
}

bool func_821(int iParam0)
{
	if (!func_951(iParam0))
	{
		return false;
	}
	return func_952(iParam0);
}

bool func_822(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_475(0);
	*uParam1 = { func_473(iParam0, func_654(0), iParam3, 0) };
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

void func_823(var uParam0, int iParam1)
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
			if ((func_953(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_953(uParam0->f_2[iVar0], 1))
				{
					func_954(uParam0->f_2[iVar0], 2, 6);
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

void func_824(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_955(uParam0, 1))
	{
		func_956(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_825(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_466(iParam0, 1)] != &Global_1946804->f_57[func_466(iParam0, 1)];
}

void func_826(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_666(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_666(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_666(iVar2, iVar0);
		}
	}
}

bool func_827(int iParam0)
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

int func_828(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_957();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_829(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_830(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

int func_831(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_466(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_453(524288))
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

int func_832(var uParam0)
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

void func_833(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_255() == -1)
	{
		func_958(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_959(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_834(int iParam0, int iParam1)
{
	if (func_255() == -1)
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

int func_835(int iParam0)
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

void func_836(int iParam0, bool bParam1, int iParam2)
{
	func_960(&(Global_1946804->f_1378), iParam0);
	func_961(2, iParam0, 6);
	if (bParam1)
	{
		func_837(0, 1);
	}
}

void func_837(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_962(0);
	}
	if (bParam0)
	{
		func_451(8);
		func_451(512);
	}
	else
	{
		func_451(8);
		func_451(16);
	}
}

char* func_838(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_678(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_678(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_839()
{
	if (func_963())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_964(2);
	}
	if (Global_1347477->f_119)
	{
		return func_964(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_965();
	fVar2 = func_966();
	fVar3 = func_967();
	fVar4 = func_968();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_969()));
	fVar7 = (func_964(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_970(3, round((to_float(iVar8) * fVar10)), 0);
	func_971(3, fVar9, fVar9 > 100f);
	return func_972(fVar7, -100f, 100f);
}

float func_840()
{
	if (func_963())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_964(1);
	}
	if (Global_1347477->f_119)
	{
		return func_964(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_965();
	fVar2 = func_966();
	fVar3 = func_967();
	fVar4 = func_968();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_969()));
	fVar7 = (func_964(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_970(2, round((to_float(iVar8) * fVar10)), 0);
	func_971(2, fVar9, fVar9 > 100f);
	return func_972(fVar7, -100f, 100f);
}

float func_841()
{
	if (func_963())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_964(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_973())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_974())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_964(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_965();
	fVar2 = func_966();
	fVar3 = func_967();
	fVar4 = func_968();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_969()));
	fVar7 = (func_964(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_970(1, round((to_float(iVar8) * fVar10)), 0);
	func_971(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_964(0);
	}
	return func_972(fVar7, -100f, 100f);
}

int func_842(int iParam0)
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

int func_843(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_305(iParam0))
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
					if (func_551((*Global_1835011)[4]->f_1, 1))
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
					if (func_975(iVar0, 9, 11))
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
					if (func_551((*Global_1347702)[63]->f_15, 1) || func_320((*Global_1347702)[63]->f_15))
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
					if (func_975(iVar0, 9, 12))
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
					if (!func_551((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_264(18, 134217728, 1))
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
					if (func_975(iVar0, 9, 11))
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
					if (func_551((*Global_1347702)[134]->f_15, 1) || func_320((*Global_1347702)[134]->f_15))
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
					if (func_551((*Global_1835011)[38]->f_1, 1))
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
					if (func_975(iVar0, 9, 11))
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
					if (func_976(747937920, 1) && !func_551((*Global_1347702)[1]->f_15, 1))
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
	if (bParam3 && does_entity_exist(func_256(iParam0)))
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
	if (!func_687(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0]->f_3;
	}
	return iVar8;
}

bool func_844(int iParam0)
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

bool func_845(int iParam0, bool bParam1)
{
	if (!func_305(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_115(iParam0) || func_507(iParam0, 44, 1))
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

struct<7> func_846(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
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

bool func_847(int iParam0, int iParam1)
{
	if (!func_305(iParam0))
	{
		return false;
	}
	func_977(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_848(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_849(int iParam0, int iParam1)
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
			iVar0 = func_978(296923297, iParam1);
			return func_979(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_978(1237718549, iParam1);
			return func_979(iVar0);
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

bool func_850(int iParam0, int iParam1)
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

bool func_851(int iParam0, int iParam1)
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

bool func_852(int iParam0, int iParam1)
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
	if (!func_850(iParam0, iVar0))
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

void func_853(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_854(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_850(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_850(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_850(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_850(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_850(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_850(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_850(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_850(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_850(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_850(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_850(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_850(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_850(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_850(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_850(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_850(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_850(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_850(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_850(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_850(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_850(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_850(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_850(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_850(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_850(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_850(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_855(int iParam0)
{
	func_980(iParam0, 1);
	func_980(iParam0, 128);
	func_980(iParam0, 256);
	func_980(iParam0, 512);
	func_980(iParam0, 1024);
	func_980(iParam0, 2048);
	func_980(iParam0, 4096);
	func_980(iParam0, 65536);
	func_980(iParam0, 16384);
	func_980(iParam0, 262144);
	func_980(iParam0, 524288);
	func_980(iParam0, 1048576);
	func_980(iParam0, 2097152);
	func_980(iParam0, 32768);
	func_980(iParam0, 131072);
	func_980(iParam0, 134217728);
	func_980(iParam0, 1073741824);
}

void func_856(int iParam0, bool bParam1)
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

void func_857(int iParam0)
{
	if (func_981(iParam0, 0))
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

void func_858(int iParam0)
{
	if (!func_305(iParam0))
	{
		return;
	}
	if (func_542(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_306(iParam0);
	func_857(iVar0);
	func_310(iParam0, 8192, 1);
}

void func_859(int iParam0)
{
	if (func_981(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_860(int iParam0)
{
	if (!func_305(iParam0))
	{
		return;
	}
	if (func_542(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_306(iParam0);
	func_859(iVar0);
	func_310(iParam0, 8192, 0);
}

void func_861(int iParam0)
{
	if (func_981(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_862(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_115(14))
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

void func_863(int iParam0)
{
	if (!func_305(iParam0))
	{
		return;
	}
	if (func_542(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_306(iParam0);
	func_861(iVar0);
	func_310(iParam0, 16384, 1);
}

void func_864(int iParam0)
{
	if (func_981(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_865(int iParam0)
{
	if (!func_305(iParam0))
	{
		return;
	}
	if (func_542(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_306(iParam0);
	func_864(iVar0);
	func_310(iParam0, 16384, 0);
}

bool func_866(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_867(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_868(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

char* func_869(int iParam0)
{
	switch (iParam0)
	{
		case -1698780291:
			return "P_CS_LEDGER01X";
		case -2049014994:
			return "P_CS_ROPE01X";
		case -1005172683:
			return "P_DOOR01X";
		case 325782917:
			return "P_DOOR03X";
		case 430302479:
			return "p_door12x";
		case -1819321039:
			return "P_DOOR13X";
		case -1899748000:
			return "p_door45x";
		case -1734239985:
			return "p_chairvictorian01x";
		case 1561132816:
			return "p_crate03x";
		case -607235640:
			return "p_cs_jug01x";
		case -243150339:
			return "p_cs_wagon02x";
		case -1497029950:
			return "P_DOOR37X";
		case -1957055091:
			return "p_door_val_genstore";
		case -1676410507:
			return "p_doorstrawberry01x";
		case 913112519:
			return "p_doorfrench01l";
		case -1004594895:
			return "p_doorfrench01r";
		case -546124888:
			return "p_doormansiongate01x";
		case 367033685:
			return "p_doornbd39x";
		case -398894636:
			return "p_doorsaloon02x";
		case -882474373:
			return "P_DOORVH_SALOON_L";
		case 376903871:
			return "P_DOORVH_SALOON_R";
		case -447184114:
			return "p_cigarlit01x";
		case -502353725:
			return "p_pebble01x";
		case 1590781012:
			return "p_cs_rope03x";
		case 98154799:
			return "P_CARDS01X";
		case 1834866537:
			return "P_CS_POKERHAND01X";
		case 1770671818:
			return "P_CS_POKERHAND02X";
		case -827620392:
			return "P_CS_HOLDEMHAND01X";
		case 343238651:
			return "P_CS_HOLDEMHAND02X";
		case -197909103:
			return "P_CS_BUCKET01X";
		case 574905658:
			return "p_cs_syringe01x";
		case -1971689092:
			return "p_bottleJD01x";
		case 1085457901:
			return "p_rag02x";
		case 1826097446:
			return "p_magneto02x";
		case -789465252:
			return "p_magneto01x";
		case -238490359:
			return "p_cs_wantedalive01x";
		case -997503794:
			return "P_CS_RCRIDETHELIGHTNING";
		case -1473388640:
			return "p_pen01x";
		case -1135604739:
			return "p_cs_letter01a_x";
		case 201002005:
			return "p_cs_electricchair01x";
		case -451122991:
			return "p_cs_generator01x";
		case -580353882:
			return "p_cs_electricHelmet01x";
		case -330691926:
			return "p_cs_gag01x";
		case -832187622:
			return "p_door_sha_man01x";
		case -2104766853:
			return "p_stool01x";
		case -1937484496:
			return "p_stool02x";
		case -156777810:
			return "p_jugglingball01x";
		case -1025740342:
			return "p_chair02x";
		case 998759471:
			return "p_chair04x";
		case -182450036:
			return "p_crate15x";
		case 539662086:
			return "p_cleaver01x";
		case 401116463:
			return "p_bottle003x";
		case -940999254:
			return "p_cs_book02x";
		case -1502733730:
			return "p_stickydymt_single";
		case -776888393:
			return "p_cs_fusedynamite01x";
		case -1901975761:
			return "p_dynamite01x";
		case 1170245472:
			return "p_cs_fusespool01x";
		case 1996775400:
			return "p_cs_detonator01x";
		case -2058893965:
			return "p_cs_bedrollclsd01x";
		case -967333571:
			return "P_CIGARETTE_CS01X";
		case -1413776846:
			return "P_MATCHES01X";
		case 617552302:
			return "P_MATCHSTICK01X";
		case -1321878957:
			return "P_WOODENCHAIR01X";
		case 1230724566:
			return "P_CHAIR_CRATE02X";
		case 164271545:
			return "p_knittingneedle01x";
		case -458984299:
			return "p_knittingsquare01x";
		case -1055906010:
			return "p_cs_rabbitMeat01x";
		case 622322952:
			return "p_cs_rabbitMeat02x";
		case -890087611:
			return "p_bottle03x";
		case -1281909308:
			return "p_cs_billstack01x";
		case 1711925122:
			return "p_cs_billSingle01x";
		case 2514129:
			return "p_binoculars01x";
		case -1866470762:
			return "p_doorrhosheriff02x";
		case -2021274799:
			return "P_BARSTOOL01X";
		case -491019543:
			return "p_cs_shotglass01x";
		case 1698150819:
			return "p_lamp18x";
		case -1963197288:
			return "p_clock06x";
		case 1527379014:
			return "p_bottle02x";
		case 876316748:
			return "p_cs_lootSack01x";
		case 1767344357:
			return "p_wineBox01x";
		case 822933632:
			return "p_strongBox01x";
		case 1497470487:
			return "P_CLOCKTABLE02X";
		case -1149199295:
			return "p_gen_statue03b";
		case 1186910594:
			return "P_STOOLWINTER01X";
		case 1954479996:
			return "P_CS_BARRAG01X";
		case 2003418568:
			return "P_PLATE01X";
		case 624070311:
			return "P_KNIFE01X";
		case 1547859810:
			return "P_KNIFE02X";
		case -1710894930:
			return "P_CS_CATFISH_WHOLE01X";
		case 431926707:
			return "P_CS_CATFISH_WHOLE01BX";
		case -1419711042:
			return "P_WOODWHITTLE01X";
		case 1810315535:
			return "P_STICKFIREPOKER01X";
		case 266900228:
			return "P_CS_WOODPILE01X";
		case 382293518:
			return "P_FORK01X";
		case 389673974:
			return "P_KNIFE04X";
		case -1874205952:
			return "p_knife03x";
		case 1983379698:
			return "P_CS_BOTTLESLIM01X";
		case 1246822101:
			return "P_CS_BLANKET01X";
		case 1496261474:
			return "P_BEDROLLCLOSED01X";
		case -1342227326:
			return "P_CS_KINDLING01X";
		case -1402507254:
			return "P_CIGARTHIN01X";
		case 1081626861:
			return "p_door_wglass01x";
		case 663716280:
			return "p_broom02x";
		case -969349845:
			return "P_AMB_CLIPBOARD_01";
		case -384257010:
			return "P_CHAIR07X";
		case 628727561:
			return "p_cs_cratetnt01x";
		case -1809617345:
			return "p_cs_flourbag01x";
		case 1521462563:
			return "p_cs_supplies01x";
		case -589352772:
			return "p_cs_supplies02x";
		case 1376394832:
			return "p_cs_supplies03x";
		case -542955242:
			return "p_door04x";
		case -29643421:
			return "p_door11x";
		case -856676249:
			return "p_doorrhosaloon01_l";
		case -1333989503:
			return "p_doorrhosaloon01_r";
		case -1403420972:
			return "P_VAL_GATE2M02X";
		case -1205874435:
			return "P_CS_STMDNKY01X";
		case 2051399415:
			return "P_CS_HOOKPULLEY01X";
		case 1932781590:
			return "P_CHAIR_CS05X";
		case 1489783104:
			return "P_CHAIR_18X";
		case -1581225876:
			return "P_CHAIR19X";
		case -895862876:
			return "P_CHAIR20X";
		case -289651159:
			return "P_CHAIR05X";
		case 1407600554:
			return "p_chair22x";
		case 986312695:
			return "p_glass01x";
		case -93693274:
			return "P_DININGCHAIRS01X";
		case 325252933:
			return "P_WINDSORCHAIR03X";
		case 1328906077:
			return "P_WINDSORCHAIR02X";
		case 1045059103:
			return "p_door_val_jail02x";
		case -155999274:
			return "P_CRATETNT01X";
		case -1956230403:
			return "P_CRATETNT02X";
		case -62869733:
			return "P_MONEYSTACK01X";
		case -422220273:
			return "P_AXE01X";
		case 2065139134:
			return "P_HOE01X";
		case 1170674247:
			return "P_SHOVEL01X";
		case 49937914:
			return "P_SHOVEL04X";
		case -296963090:
			return "P_BROOM01X";
		case -811821899:
			return "P_PITCHFORK01X";
		case 1993810557:
			return "P_SCYTHE01X";
		case 1472170582:
			return "P_SKIFF02x";
		case 673153214:
			return "p_door_nbx_doc01x_l";
		case 132005948:
			return "p_door_nbx_doc01x_r";
		case 1661843942:
			return "p_cs_camera";
		case 1765047802:
			return "p_cs_cameratripod";
		case -1329546951:
			return "p_cs_camerabag01x";
		case -569131374:
			return "p_cameraflash01x";
		case -1509314938:
			return "p_cs_shutterrelease";
		case -397513868:
			return "rowboatswamp";
		case -1399874861:
			return "P_CHAIR25X";
		case 1064769829:
			return "P_DOORBRAIT01BX";
		case -50604564:
			return "P_CS_MAP01X";
		case 1058703817:
			return "p_hammer03x";
		case -238593141:
			return "p_cs_nailbarrel01x";
		case 1210783447:
			return "p_cs_book04x";
		case -2118240499:
			return "p_cs_Fan01x";
		case -862949069:
			return "p_cs_ledgerSmall01x";
		case -1311208351:
			return "p_cs_envelope01x";
		case 826392697:
			return "p_wrappedmeat01x";
		case 1455710720:
			return "P_CS_LETTER02X";
		case -2102031605:
			return "p_cs_book03x";
		case 1955831280:
			return "p_cs_giftBox01x";
		case 305182125:
			return "p_boiler01x";
		case 888504590:
			return "p_boiler02x";
		case -82199229:
			return "p_mugCoffee01x";
		case -1174489568:
			return "p_glasstallbeer01x";
		case 1022056778:
			return "p_pitcher02x";
		case 155128635:
			return "p_tray03x";
		case 1971611315:
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case -1700686082:
			return "P_LADLE02X";
		case -889047922:
			return "P_CS_POT01X";
		case 519549403:
			return "P_CHAIRDINING03X";
		case -755866836:
			return "P_SPOON01X";
		case 196631385:
			return "P_BOWL03X";
		case -569447711:
			return "P_CS_BRIDECATALOGUE01X";
		case -535756918:
			return "P_JEWELRYBOX02BX";
		case 2044431266:
			return "P_CS_LETTERFOLDED01X";
		case -583569159:
			return "P_CS_ARTHURHAT01X";
		case 578898429:
			return "P_OAR03X";
		case -765914358:
			return "P_DOOR_VAL_BANKVAULT";
		case -1190396102:
			return "P_DOOR_COMBANK01X";
		case -436606401:
			return "P_CS_DONATION01X";
		case 1592327736:
			return "p_door_nbx_bank03x_R";
		case -1006516120:
			return "p_door_nbx_bank03x_L";
		case -1078696833:
			return "p_camp_plate_02x";
		case -974192123:
			return "p_stewplate02x";
		case 120221819:
			return "p_cs_log01x";
		case -1814268450:
			return "p_ndb_hotelplank01x";
		case 314775562:
			return "p_glass06x";
		case -1594634038:
			return "p_cs_rag01x";
		case 819493639:
			return "p_inkwell01x";
		case -548150401:
			return "p_cigar02x";
		case 1843407141:
			return "p_bottleBeer01x";
		case -1883578190:
			return "p_beermugglass01x";
		case 851401507:
			return "p_nutBowl01x";
		case 1610236838:
			return "p_cs_sacklarge01x";
		case 633326690:
			return "p_cs_dressbox01x";
		case -300816757:
			return "p_bell05x";
		case 342335375:
			return "p_woodendeskchair01x";
		case -1443906703:
			return "p_chair06x";
		case -1031399461:
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case -2051048367:
			return "p_bottleslim01x";
		case 1267814678:
			return "p_cs_journal01x";
		case -503626004:
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case 604616887:
			return "p_cs_ropeLegSplit";
		case 2038507899:
			return "p_cs_ropeHandsSplit";
		case 388126459:
			return "p_fishingpole01x";
		case -1367341904:
			return "P_FISHINGPOLE02X";
		case -1629442620:
			return "p_cs_flowernecklace";
		case -475791515:
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case 1210527888:
			return "P_CS_FISHINGPOLEBAG01X";
		case 1785480577:
			return "P_STICK02X";
		case 1789147356:
			return "P_CS_SOCK01X";
		case 169503210:
			return "P_DOOR_VAL_BANK00_RX";
		case 160636303:
			return "P_DOOR_VAL_BANK00_RX";
		case -1456646750:
			return "p_can10x";
		case 1010765128:
			return "p_cs_rabbitgut";
		case -142576910:
			return "p_cs_rabbitheadless";
		case 2055623882:
			return "p_cs_rabbitfeetless";
		case -808559472:
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case -1494278633:
			return "P_CS_BOOKHARDCV01X";
		case -1643891339:
			return "P_LETTERBUNDLE_01X";
		case -459043872:
			return "P_LETTERENVELOPE_CS01X";
		case 1825744405:
			return "P_PACKAGE08X";
		case 1713200946:
			return "P_CIGARBOX02X";
		case 1663122464:
			return "p_crucifix02x";
		case 934706428:
			return "p_bottleCrate01x";
		case -554014433:
			return "p_can05x";
		case -1682372069:
			return "p_cs_suitcase04x";
		case 69604629:
			return "p_cs_bagstrauss01x";
		case 29998454:
			return "P_BOTTLE008X";
		case 161697289:
			return "P_BOTTLE009X";
		case 1045394246:
			return "P_BOTTLE010X";
		case 1623781586:
			return "p_pocketMirror01x";
		case -1671495534:
			return "P_CIGARETTE01X";
		case 1207272102:
			return "P_TRAVELTRUNK02X";
		case -294963065:
			return "P_CHAIRWHITE01X";
		case -1947027049:
			return "P_JOURNAL_OPEN01X";
		case -1945229292:
			return "p_table42_cs";
		case -1028267229:
			return "p_cs_newspaper_02x";
		case -1537933036:
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case -1216485179:
			return "p_spittoon01x";
		case 787211696:
			return "p_woodbowl01x";
		case -1167561544:
			return "p_pencil01x";
		case 1467658477:
			return "P_SPOONMID01X";
		case -624124479:
			return "P_PAN01X";
		case 1211525499:
			return "P_Pipe01x";
		case 666597548:
			return "p_cs_railroadbond01x";
		case -989609930:
			return "p_sharpeningstone01x";
		case 1540392720:
			return "p_treestump02x";
		case -1638036806:
			return "p_plate17x";
		case -1566727213:
			return "p_cs_newspaper_01x";
		case 1783964157:
			return "p_sadiehat01x";
		case -1093732866:
			return "p_door_bla_jail_l_01x";
		case 784094203:
			return "p_door_bla_jail_r_01x";
		case 441245663:
			return "p_mashedPotato02x";
		case 2064348393:
			return "p_cs_bookHardCv08x";
	}
	return "";
}

bool func_870(int iParam0)
{
	if (!func_305(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_127)
	{
		case -784953535:
		case -543937540:
		case -233385727:
		case 893704044:
		case 1132950513:
			return true;
		default:
			break;
	}
	return false;
}

bool func_871(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return true;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return true;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return true;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return true;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return true;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return true;
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return true;
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return true;
	}
	return false;
}

int func_872()
{
	return -1;
}

bool func_873(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (!func_305(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489->f_12) || (bParam5 && Global_1359489->f_13 < 8))
	{
		if ((*Global_1360165)[iParam0]->f_125 <= 300)
		{
			if (_0xeb98b38ca60742d7((*Global_1360165)[iParam0]->f_126))
			{
				_0x49a8c2cd97815215((*Global_1360165)[iParam0]->f_126);
			}
			if (bParam5)
			{
				(*Global_1360165)[iParam0]->f_124 = _0x08fc896d2cb31fcc((*Global_1360165)[iParam0]->f_126, 0);
				Global_1359489->f_13++;
			}
			else
			{
				(*Global_1360165)[iParam0]->f_124 = _0x0cadc3a977997472((*Global_1360165)[iParam0]->f_126, 0);
			}
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_126);
			(*Global_1360165)[iParam0]->f_125++;
		}
		else
		{
			iVar0 = _0xa00df706c60173d1(func_542(iParam0, 1));
			request_model(iVar0, false);
			if (has_model_loaded(iVar0))
			{
				(*Global_1360165)[iParam0]->f_124 = func_982(iVar0, vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				set_model_as_no_longer_needed(iVar0);
				_0x7b204f88f6c3d287((*Global_1360165)[iParam0]->f_126);
			}
		}
		if (!func_257((*Global_1360165)[iParam0]->f_124, 0))
		{
			return false;
		}
		Global_1359489->f_12 = 1;
		func_310(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_874(int iParam0, int iParam1, bool bParam2)
{
	if (!func_305(iParam0))
	{
		return false;
	}
	if (func_983(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_257(iParam1, iVar0))
	{
		return false;
	}
	_set_ped_body_component(iParam1, func_984(iParam0));
	_update_ped_variation(iParam1, false, true, true, true, false);
	func_310(iParam0, 256, 1);
	return true;
}

void func_875(int iParam0, int iParam1)
{
	decor_set_bool(iParam0, "HorseCompanion", true);
	func_986(iParam0, func_985(iParam1));
	if (func_983(iParam1, 8))
	{
		_0xf74e134f40192884(iParam0, 2);
		set_ped_config_flag(iParam0, 412, true);
	}
	else
	{
		set_ped_config_flag(iParam0, 412, false);
	}
	if (does_entity_exist(func_256(iParam1)))
	{
		_0x931b241409216c1f(func_256(iParam1), iParam0, 0);
		_0xed1c764997a86d5a(func_256(iParam1), iParam0);
		set_ped_config_flag(iParam0, 367, true);
	}
	else
	{
		func_311(iParam1, 38, 1);
	}
	set_ped_relationship_group_default_hash(iParam0, -1856989775);
	set_ped_relationship_group_hash(iParam0, -1856989775);
	if (Global_40.f_4283 == 0)
	{
		set_ped_config_flag(iParam0, 172, true);
	}
	set_ped_config_flag(iParam0, 324, true);
	set_ped_config_flag(iParam0, 330, true);
	set_ped_config_flag(iParam0, 331, true);
	set_ped_config_flag(iParam0, 471, true);
	set_ped_config_flag(iParam0, 442, true);
	if (func_983(iParam1, 4096))
	{
		set_ped_config_flag(iParam0, 1, false);
		set_ped_config_flag(iParam0, 54, false);
		set_ped_config_flag(iParam0, 121, false);
		set_ped_config_flag(iParam0, 302, false);
	}
	else
	{
		set_ped_config_flag(iParam0, 1, true);
		set_ped_config_flag(iParam0, 54, true);
		set_ped_config_flag(iParam0, 121, true);
		set_ped_config_flag(iParam0, 302, true);
	}
	_0xae6004120c18df97(iParam0, 2, 0);
	_0xae6004120c18df97(iParam0, 3, 0);
	func_712(iParam1, func_983(iParam1, 8192), func_983(iParam1, 16384), 1);
}

char* func_876(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_877(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_972(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

var func_878(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_879(int iParam0)
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

void func_880(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_987(iParam1);
	}
}

void func_881(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_989(func_988(255), 109029619));
	}
	else if (func_262())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_625();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_882(int iParam0)
{
	iParam0 = func_209(iParam0);
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

void func_883(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_989(func_988(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_262())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_625())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_884(int iParam0)
{
	iParam0 = func_209(iParam0);
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

float func_885(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_886(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_563(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_882(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_882(iParam0) + 1;
	fVar6 = func_990(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_576(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_887(int iParam0)
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

void func_888(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

int func_889(int iParam0)
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

bool func_890(int iParam0)
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

bool func_891()
{
	return _unlock_is_unlocked(99890643);
}

bool func_892(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_895(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_473(iParam1, Var0, 1415981582, 0) };
	return func_991(Var29, 1);
}

bool func_893(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_895(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_473(iParam1, Var0, -2119169513, 0) };
	return func_991(Var29, 1);
}

void func_894(var uParam0)
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

bool func_895(int iParam0, var uParam1)
{
	if (!func_992(iParam0))
	{
		return false;
	}
	iVar0 = func_896(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_652(0) };
	if (!func_993(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_994(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_896(int iParam0)
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

bool func_897(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_701(bParam10))
	{
		return func_995(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_660(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_996(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_475(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_991(Var14, 1))
		{
		}
	}
	return true;
}

bool func_898(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_701(bParam9))
	{
		return func_997(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_996(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_660(Param0, &Var0, bParam9, 1) || !func_660(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_996(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_475(0);
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

bool func_899(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_998(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_900(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

int func_901()
{
	return 1342496140;
}

int func_902()
{
	return 446670976;
}

int func_903()
{
	return 1;
}

int func_904()
{
	return -868094182;
}

int func_905()
{
	return 1074477367;
}

int func_906()
{
	return 1;
}

int func_907()
{
	return -997197050;
}

int func_908()
{
	return -2063289686;
}

int func_909()
{
	return 2;
}

int func_910()
{
	return -868094182;
}

int func_911()
{
	return 1074477367;
}

int func_912()
{
	return 1;
}

int func_913()
{
	return 1235275977;
}

int func_914()
{
	return 2030804811;
}

int func_915()
{
	return 1;
}

int func_916()
{
	return 1974379573;
}

int func_917()
{
	return 2024948086;
}

int func_918()
{
	return 1;
}

void func_919(int iParam0)
{
	if (func_999() < iParam0)
	{
		func_1000(iParam0);
	}
}

int func_920(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1001(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_921(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_432(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1002(iParam0);
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

struct<4> func_922()
{
	Var0 = { func_652(0) };
	return func_473(856287005, Var0, -218846335, 0);
}

void func_923(int iParam0, int iParam1)
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

void func_924(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_925(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

bool func_926()
{
	return func_1003();
}

int func_927()
{
	return func_1004();
}

float func_928(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_929(var uParam0, int iParam1)
{
	if (func_784())
	{
		return true;
	}
	if (func_430(&uVar0))
	{
		return true;
	}
	if ((func_449(func_811(Global_35, 0, 0, 0)) && !func_300(uParam0->f_1016[iParam1], 16)) && !func_300(uParam0->f_1016[iParam1], 64))
	{
		return true;
	}
	return false;
}

void func_930(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_1005(uParam0, iParam1, sParam2))
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

void func_931(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

bool func_932(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_933(int iParam0)
{
	if (!func_81(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1])
				{
					case -2093459088:
						if (Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_934(var uParam0, bool bParam1)
{
	if (!func_63(uParam0, 64) && func_339(uParam0) != 0)
	{
		return;
	}
	if (!bParam1)
	{
		iVar0 = func_811(Global_35, 0, 0, 0);
		if (is_weapon_valid(iVar0))
		{
			if (_0x2c83212a7aa51d3d(iVar0))
			{
				_0xcef4c65de502d367(Global_35, 1, 0, 1, 0);
				func_348(uParam0, 256);
			}
			else
			{
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
			}
		}
		iVar0 = func_811(Global_35, 0, 1, 0);
		if (is_weapon_valid(iVar0))
		{
			if (_0x2c83212a7aa51d3d(iVar0))
			{
				_0xcef4c65de502d367(Global_35, 1, 1, 1, 0);
				func_348(uParam0, 256);
			}
		}
	}
	else
	{
		func_1006(0);
		func_1006(1);
	}
}

void func_935(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		set_player_control(player_id(), false, 312, false);
	}
	else
	{
		set_player_control(player_id(), false, 56, false);
	}
	func_592(uParam0, 4);
	_hide_hud_component(-1679307491);
	if (_0xb16223cb7da965f0(get_player_index()))
	{
		_0xae637bb8ef017875(get_player_index(), 1);
	}
	if (_0x45ab66d02b601fa7(get_player_index()))
	{
		_0x64ff4bf9af59e139(get_player_index(), 1);
	}
	if ((func_339(uParam0) == 0 && uParam0->f_1684 >= 0) && !func_300(uParam0->f_1016[uParam0->f_1684], 524288))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		func_484(uParam0, 64);
	}
	set_ped_config_flag(Global_35, 255, false);
	func_1007(0);
	if (func_223())
	{
		func_224(0);
	}
}

void func_936(vector3 vParam0)
{
	iVar0 = 250;
	if (func_449(func_448(Global_35, 0, 1, 0)) || func_449(func_448(Global_35, 1, 1, 0)))
	{
		iVar0 = 2000;
	}
	fVar1 = get_entity_heading(Global_35);
	if (!func_90(vParam0))
	{
		fVar1 = func_447(Global_36, vParam0, 1);
		simulate_player_input_gait(player_id(), 1f, iVar0, fVar1, false, true);
	}
	else
	{
		simulate_player_input_gait(player_id(), 1f, iVar0, fVar1, true, true);
	}
}

void func_937(var uParam0, int iParam1, var uParam2, float fParam3)
{
	if (func_618(uParam0->f_475[iParam1], 32))
	{
		if (func_63(uParam0, 8))
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1684]->f_1 + func_527(Global_36 - uParam0->f_1016[uParam0->f_1684]->f_1) };
			if (!func_485(uParam0->f_1016[uParam0->f_1684], 2))
			{
				*fParam3 = func_447(Global_36, uParam0->f_1016[uParam0->f_1684]->f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1684]->f_40;
			}
		}
		else
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1688]->f_1 + func_527(Global_36 - uParam0->f_1016[uParam0->f_1688]->f_1) };
			if (!func_485(uParam0->f_1016[uParam0->f_1688], 2))
			{
				*fParam3 = func_447(Global_36, uParam0->f_1016[uParam0->f_1688]->f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1688]->f_40;
			}
		}
	}
	else
	{
		*uParam2 = { func_1008(uParam0) };
		if (func_63(uParam0, 8))
		{
			if (!func_485(uParam0->f_1016[uParam0->f_1684], 2))
			{
				*fParam3 = func_447(Global_36, uParam0->f_1016[uParam0->f_1684]->f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1684]->f_40;
			}
		}
		else if (!func_485(uParam0->f_1016[uParam0->f_1688], 2))
		{
			*fParam3 = func_447(Global_36, uParam0->f_1016[uParam0->f_1688]->f_1, 1);
		}
		else
		{
			*fParam3 = uParam0->f_1016[uParam0->f_1688]->f_40;
		}
	}
}

bool func_938(var uParam0, int iParam1)
{
	iVar12 = 0;
	while (iVar12 < 30)
	{
		if (((uParam0->f_475[iVar12]->f_17 == 1 && uParam0->f_475[iVar12]->f_2 == 9) && uParam0->f_475[iVar12]->f_4 >= 0) && &uParam0->f_475[iVar12] == iParam1)
		{
			iVar13 = uParam0->f_1522[uParam0->f_475[iVar12]->f_4]->f_8;
			if ((_does_anim_scene_exist(iVar13) && _is_anim_scene_loaded(iVar13, true, false)) && _0x6f1f0b17109309da(iVar13, func_213(Global_35)))
			{
				if (_get_anim_scene_entity_matrix(iVar13, func_213(Global_35), &vVar0, false, 0, 2))
				{
					if (!func_90(vVar0))
					{
						return true;
					}
				}
			}
		}
		iVar12++;
	}
	return false;
}

void func_939(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, var uParam7)
{
	func_1009(&uVar0, 0f, Global_36 - Vector(1f, 0f, 0f), (-2f * sin(get_entity_heading(Global_35))), (2f * cos(get_entity_heading(Global_35))), 0f);
	func_1009(&uVar7, 1f, vParam3, (-2f * sin(fParam6)), (2f * cos(fParam6)), 0f);
	if (absf(uParam0->f_1016[iParam1]->f_12) == absf(uParam0->f_1016[iParam1]->f_13))
	{
		if (absf(uParam0->f_1016[iParam1]->f_12) >= 90f)
		{
			fVar15 = 180f;
		}
		else
		{
			fVar15 = 90f;
		}
	}
	else
	{
		fVar15 = (uParam0->f_1016[iParam1]->f_12 - uParam0->f_1016[iParam1]->f_13);
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
		fVar15 = (fVar15 / 2f);
		if (uParam0->f_1016[iParam1]->f_12 < uParam0->f_1016[iParam1]->f_13)
		{
			fVar15 = (uParam0->f_1016[iParam1]->f_12 + absf(fVar15));
		}
		else
		{
			fVar15 = (uParam0->f_1016[iParam1]->f_13 + absf(fVar15));
		}
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
	}
	*uParam7 = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, (cos(fVar15) * (uParam0->f_1016[iParam1]->f_11 / 2f)), (sin(fVar15) * (uParam0->f_1016[iParam1]->f_11 / 2f))) };
	iVar14 = 0;
	while (iVar14 < 5)
	{
		*(*uParam2)[iVar14] = { func_1010(Global_36, *uParam7, vParam3, (IntToFloat(iVar14 + 1) / to_float(5))) };
		iVar14++;
	}
}

void func_940(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	if (bParam2)
	{
		task_achieve_heading(0, func_447(Global_36, *(*uParam3)[0], 1), 0);
	}
	task_follow_point_route(0, 1f, 0, 1056964608, 1084227584, 1193033728);
	if (func_485(uParam0->f_1016[&uParam0->f_475[iParam1]], 2))
	{
		task_achieve_heading(0, uParam0->f_1016[&uParam0->f_475[iParam1]]->f_40, 0);
	}
	else
	{
		vVar0 = { func_1011(uParam0, iParam1) };
		if (!func_90(vVar0))
		{
			task_turn_ped_to_face_coord(0, vVar0, -1);
		}
	}
}

void func_941(var uParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	vVar0 = { func_1011(uParam0, iParam1) };
	if (!func_90(vVar0))
	{
		if (bParam2)
		{
			task_achieve_heading(0, func_447(Global_36, vParam3, 1), 0);
		}
		fVar3 = func_447(vParam3, vVar0, 1);
		if (func_485(uParam0->f_1016[&uParam0->f_475[iParam1]], 2))
		{
			fVar3 = uParam0->f_1016[&uParam0->f_475[iParam1]]->f_40;
		}
		if (func_618(uParam0->f_475[iParam1], 256))
		{
			task_go_straight_to_coord(0, vParam3, 1f, 20000, fVar3, 1056964608, 0);
		}
		else
		{
			iVar4 = 4;
			iVar4 |= 4194304;
			fVar3 = (fVar3 % 360f);
			task_follow_nav_mesh_to_coord(0, vParam3, 1f, 20000, 0.25f, iVar4, fVar3);
		}
		if (!func_485(uParam0->f_1016[&uParam0->f_475[iParam1]], 4) && !func_485(uParam0->f_1016[&uParam0->f_475[iParam1]], 2))
		{
			task_turn_ped_to_face_coord(0, vVar0, -1);
		}
		else
		{
			task_achieve_heading(0, fVar3, 0);
			task_stand_still(0, -1);
		}
	}
	else
	{
		fVar5 = 40000f;
		if (func_485(uParam0->f_1016[&uParam0->f_475[iParam1]], 2))
		{
			fVar5 = uParam0->f_1016[&uParam0->f_475[iParam1]]->f_40;
		}
		fVar5 = (fVar5 % 360f);
		task_follow_nav_mesh_to_coord(0, vParam3, 1f, 20000, 0.25f, 5, fVar5);
	}
}

bool func_942()
{
	return Global_1946804->f_2792;
}

bool func_943(int iParam0)
{
	if (func_1003())
	{
		return false;
	}
	if (!func_431(iParam0, 0))
	{
		return false;
	}
	if (!func_1012(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_944(int iParam0)
{
	return func_1013(iParam0);
}

int func_945(int iParam0, int iParam1)
{
	bVar3 = func_1014(iParam0);
	if (func_662(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_430(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1015();
			}
			else
			{
				iVar0 = func_1016();
			}
		}
		else if (func_476(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1017();
		}
		else
		{
			iVar0 = func_1018();
		}
	}
	else if (func_644(&iVar2))
	{
		if (func_662(iVar2, -1303648999))
		{
			iVar0 = func_1015();
		}
		else
		{
			iVar0 = func_1016();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1017();
	}
	else
	{
		iVar0 = func_1018();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

char* func_946(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "leadinData/zones/zone(%i)";
		case 1:
			return ":x1";
		case 2:
			return ":y1";
		case 3:
			return ":z1";
		case 4:
			return ":x2";
		case 5:
			return ":y2";
		case 6:
			return ":z2";
		case 7:
			return ":edgex";
		case 8:
			return ":edgey";
		case 9:
			return ":edgez";
		case 10:
			return ":xhit";
		case 11:
			return ":yhit";
		case 12:
			return ":zhit";
		case 13:
			return ":height";
		case 14:
			return ":trig1";
		case 15:
			return ":trig2";
		case 16:
			return ":areaType";
		case 17:
			return ":moveBlend";
		case 18:
			return ":animBlend";
		case 19:
			return ":fCamZoom";
		case 20:
			return ":fDismount";
		case 21:
			return ":tlDialogueFile";
		case 22:
			return ":tlDialogueLabel";
		case 23:
			return ":iDialogueDelay";
		case 24:
			return ":bQuickStop";
		case 25:
			return ":nomount";
		case 26:
			return ":bAllowClimb";
		case 27:
			return ":bAllowWeapon";
		case 28:
			return ":bAllowCarry";
		case 29:
			return ":usevehicle";
		case 30:
			return ":bSwapWeapon";
		case 31:
			return ":fFixupBuffer";
		case 32:
			return ":bAllowBandana";
		case 33:
			return ":bPickupCarriable";
		case 34:
			return ":bAllowCrouch";
		case 35:
			return ":playlist";
		case 36:
			return ":bPlayerHasControl";
		case 37:
			return ":bStopToHolster";
		case 38:
			return ":bFixupPlayerEarly";
		case 39:
			return ":walkStopOptions";
		case 40:
			return ":fWalkStopHeading";
		case 41:
			return ":bAllowLasso";
		case 42:
			return ":bNoLetterbox";
		case 43:
			return ":index";
		case 44:
			return ":tele";
		case 45:
			return "leadinData/scenes/scene(%i)";
		case 46:
			return ":sceneName";
		case 47:
			return ":sceneIndex";
		case 48:
			return ":sceneRel";
		case 49:
			return ":sceneFoot";
		case 50:
			return "leadinData/entities/entity(%i)";
		case 51:
			return ":model";
		case 52:
			return ":tlVoiceID";
		case 53:
			return ":fVisible";
		case 54:
			return ":weapon";
		case 55:
			return ":forceinhand";
		case 56:
			return ":bDeleteDraftAnimals";
		case 57:
			return "leadinData/behaviours/behaviour(%i)";
		case 58:
			return ":zone";
		case 59:
			return ":when";
		case 60:
			return ":what";
		case 61:
			return ":who";
		case 62:
			return ":syncType";
		case 63:
			return ":loop";
		case 64:
			return ":pause";
		case 65:
			return ":master";
		case 66:
			return ":bezier";
		case 67:
			return ":bezheading";
		case 68:
			return ":fVisible";
		case 69:
			return ":useradoffset";
		case 70:
			return ":radoffset";
		case 71:
			return ":returnlook";
		case 72:
			return ":lookatwho";
		case 73:
			return ":behaviourtype";
		case 74:
			return ":lookatplayer";
		case 75:
			return ":animscene";
		case 76:
			return ":nonavmesh";
		case 77:
			return ":phaseplayerend";
		case 78:
			return ":lookblendin";
		case 79:
			return ":lookblendout";
		case 80:
			return ":foliagemod";
		case 81:
			return ":disableinitloop";
		case 82:
			return "leadinData/cutscenes/cutscene(%i)";
		case 83:
			return ":cutName";
		case 84:
			return ":cutPlaylist";
		case 85:
			return "leadinData/cameras/camera(%i)";
		case 86:
			return ":index";
		case 87:
			return ":bDisabled";
		case 88:
			return ":bUseRightCam";
		case 89:
			return ":bUseLeftCam";
		case 90:
			return ":bUseCenterCam";
		case 91:
			return ":bUseNewCam";
		case 92:
			return ":bFocusOnEntity";
		case 96:
			return ":sCameraDictionaryName";
		case 97:
			return ":sCameraRequestName";
		case 95:
			return ":iNewCamLookAt";
		case 93:
			return ":fNewCamFocusOffsetHorz";
		case 94:
			return ":fNewCamFocusOffsetVert";
		case 98:
			return "leadinData/prepzones/prepzone(%i)";
		case 99:
			return ":vOrigin";
		case 100:
			return ":vRotation";
		case 101:
			return ":vScale";
		case 102:
			return ":eType";
	}
	return "";
}

bool func_947(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_948(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_475(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_949(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_950(int iParam0)
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

bool func_951(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_952(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_953(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_954(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_955(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_956(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_957()
{
	return Global_1946804->f_1;
}

void func_958(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_959(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_960(var uParam0, int iParam1)
{
	if (func_255() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_958(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_959(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_961(int iParam0, int iParam1, int iParam2)
{
	if (func_255() == -1)
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

void func_962(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_963()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_964(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_965()
{
	fVar0 = func_1019(13);
	iVar1 = func_1020(fVar0);
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

float func_966()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_967()
{
	if (func_1021())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_968()
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

float func_969()
{
	return Global_1955565->f_3;
}

void func_970(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_838(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_971(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_838(iParam0, 2, 0, 0);
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

float func_972(float fParam0, float fParam1, float fParam2)
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

bool func_973()
{
	return func_1019(12) <= -99f;
}

bool func_974()
{
	return func_1019(12) >= 99f;
}

bool func_975(int iParam0, int iParam1, int iParam2)
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

bool func_976(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1022(iParam0);
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

int func_977(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1023(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_978(int iParam0, int iParam1)
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
		if (func_687(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_979(int iParam0)
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

void func_980(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_981(int iParam0, bool bParam1)
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

int func_982(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1024(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_983(int iParam0, int iParam1)
{
	if (!func_305(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1) != 0;
}

int func_984(int iParam0)
{
	return 1268180497;
}

int func_985(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_821(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_821(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_986(int iParam0, int iParam1)
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

void func_987(int iParam0)
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

char* func_988(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_1025(37, iParam0))
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
	if (func_1025(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_989(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1026(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_990(int iParam0)
{
	iParam0 = func_209(iParam0);
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

bool func_991(struct<4> Param0, int iParam4)
{
	if (!func_701(0))
	{
		return func_1027(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_660(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_475(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_992(int iParam0)
{
	iVar0 = func_896(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_652(0) };
	if (func_1028(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_993(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_475(bParam7);
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

bool func_994(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_475(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_995(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_660(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_996(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_474(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1029(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1030(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_996(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_997(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_996(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_660(Param0, &Var0, 1, 0) || !func_660(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_996(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1029(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1029(&Var14) };
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
					func_1031(iVar60, 1);
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
		iVar60 = func_1030(1168099063, &Var28, 0);
		iVar60 = func_1030(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_998(int iParam0)
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

int func_999()
{
	return Global_40.f_1095.f_3135;
}

void func_1000(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1001(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_475(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_660(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1002(int iParam0)
{
	if (!func_431(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_432(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_1003()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1032())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

int func_1004()
{
	if (_get_number_of_references_of_script_with_name_hash(-1181125641) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_1005(var uParam0, int iParam1, char* sParam2)
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

void func_1006(int iParam0)
{
	iVar0 = func_811(Global_35, 0, iParam0, 0);
	if (func_449(iVar0))
	{
		if (_0x2c83212a7aa51d3d(iVar0))
		{
			_0xcef4c65de502d367(Global_35, 1, iParam0, 1, 0);
		}
		else if (func_810(iVar0))
		{
			if (func_449(func_811(Global_35, 0, 7, 0)) || func_449(func_811(Global_35, 0, 9, 0)))
			{
				if (func_449(func_811(Global_35, 0, 8, 0)))
				{
					func_1033(iVar0);
				}
				else
				{
					set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
				}
			}
			else
			{
				set_current_ped_weapon(Global_35, iVar0, true, 7, false, false);
			}
		}
		else if (_is_weapon_two_handed(iVar0) && iVar0 != -1415022764)
		{
			if (func_449(func_811(Global_35, 0, 7, 0)) || func_449(func_811(Global_35, 0, 9, 0)))
			{
				if (func_449(func_811(Global_35, 0, 10, 0)))
				{
					func_1033(iVar0);
				}
				else
				{
					set_current_ped_weapon(Global_35, iVar0, true, 10, false, false);
				}
			}
			else
			{
				set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (iParam0 == 0)
			{
				if (!func_449(func_811(Global_35, 0, 2, 0)))
				{
					set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
				}
				else
				{
					set_current_ped_weapon(Global_35, iVar0, true, 3, false, false);
				}
			}
			else
			{
				set_current_ped_weapon(Global_35, iVar0, true, 3, false, false);
			}
		}
		set_current_ped_weapon(Global_35, -1569615261, true, iParam0, false, false);
	}
}

void func_1007(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

Vector3 func_1008(var uParam0)
{
	if (func_63(uParam0, 8))
	{
		return uParam0->f_1016[uParam0->f_1684]->f_7;
	}
	if (uParam0->f_1688 >= 0)
	{
		return uParam0->f_1016[uParam0->f_1688]->f_7;
	}
	return 0f, 0f, 0f;
}

void func_1009(var uParam0, float fParam1, vector3 vParam2, vector3 vParam5)
{
	*uParam0 = fParam1;
	uParam0->f_4 = { vParam2 };
	uParam0->f_1 = { vParam5 };
}

Vector3 func_1010(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vVar0 = { func_1034(vParam0, vParam3, fParam9) };
	vVar3 = { func_1034(vParam3, vParam6, fParam9) };
	return func_1034(vVar0, vVar3, fParam9);
}

Vector3 func_1011(var uParam0, int iParam1)
{
	if (uParam0->f_475[iParam1]->f_3 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 35)
		{
			if (!is_entity_dead(uParam0->f_3[iVar0]->f_2) && uParam0->f_475[iParam1]->f_3 == uParam0->f_3[iVar0]->f_3)
			{
				if (!is_entity_a_ped(uParam0->f_3[iVar0]->f_2) || get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2) != Global_35)
				{
					return get_entity_coords(uParam0->f_3[iVar0]->f_2, true, false);
				}
			}
			iVar0++;
		}
	}
	return 0f, 0f, 0f;
}

bool func_1012(int iParam0, int iParam1, bool bParam2)
{
	if (!func_431(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_653(iParam0);
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
		if (!func_1035(iParam0, 1))
		{
			return false;
		}
	}
	return func_1036(iParam0, 0, bParam2) >= iParam1;
}

int func_1013(int iParam0)
{
	iVar0 = func_432(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

int func_1014(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_644(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1015()
{
	iVar0 = 1549701178;
	switch (func_1037())
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

int func_1016()
{
	iVar0 = 614608656;
	switch (func_1037())
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

int func_1017()
{
	iVar0 = -1832677570;
	switch (func_1037())
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

int func_1018()
{
	iVar0 = 1623252156;
	switch (func_1037())
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

float func_1019(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1020(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

bool func_1021()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_1022(int iParam0)
{
	func_1038(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_1023(int iParam0, int iParam1)
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

void func_1024(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1039(iParam1))
		{
			func_1040(iParam0, 41788943);
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
			func_1041(iParam0, 0, 1);
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
			func_1042(iParam0, 0);
			bVar0 = true;
		}
		func_986(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_1025(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1043(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1044())
	{
		return func_1043(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1043(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_1026(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_1027(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_660(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_653(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1045(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1046(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1047(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1048(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1029(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1030(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1028(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_475(bParam2), uParam0, iParam1);
}

struct<16> func_1029(var uParam0)
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

int func_1030(int iParam0, var uParam1, bool bParam2)
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
					func_1031(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1031(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1031(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1031(int iParam0, int iParam1)
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
	func_1049(iParam0, iParam1);
}

bool func_1032()
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

void func_1033(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		return;
	}
	if (Global_43891)
	{
		return;
	}
	_0xe9bd19f8121ade3e(Global_35, iParam0);
}

Vector3 func_1034(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

bool func_1035(int iParam0, int iParam1)
{
	if (!func_431(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1050(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_948("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_949(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_449(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_950(iVar1);
				return true;
			}
			iVar3++;
		}
		func_950(iVar1);
	}
	return false;
}

int func_1036(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_431(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_653(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1050(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1051(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_475(bParam2), iParam0, 0);
	return uVar2;
}

int func_1037()
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
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_810(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_810(iVar0)) || iVar0 == 2055893578)
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

int func_1038(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1052(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_1039(int iParam0)
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

void func_1040(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_850(iParam0, iParam1))
		{
			if (func_851(iParam0, iParam1))
			{
				if (func_852(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_853(iParam0);
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

void func_1041(int iParam0, int iParam1, bool bParam2)
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

void func_1042(int iParam0, bool bParam1)
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

bool func_1043(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1044()
{
	return Global_1109400->f_245;
}

struct<28> func_1045(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_475(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1029(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1046(int iParam0, var uParam1, bool bParam2)
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
					func_1031(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1031(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1031(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1047(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_475(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1029(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1048(int iParam0, var uParam1, bool bParam2)
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
					func_1031(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1031(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1031(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1049(int iParam0, int iParam1)
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

int func_1050(int iParam0, int iParam1)
{
	if (!func_431(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_653(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_662(iParam0, 1399091007))
	{
		func_1053(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1051(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1054(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1055(&Var0, func_654(0));
	}
	if (!func_1056(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_950(iVar14);
	return uVar15;
}

int func_1052(int iParam0, int iParam1)
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

void func_1053(int iParam0, var uParam1, var uParam2)
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

struct<14> func_1054(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1055(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1056(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_475(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

