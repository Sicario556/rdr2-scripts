void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		if (!is_entity_dead(Global_35))
		{
			set_ped_reset_flag(Global_35, 265, true);
		}
		func_1();
	}
	_0x76f7e1bcd623a429(get_player_index());
	if (!is_entity_dead(Global_35))
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
		if (_get_ped_crouch_movement(Global_35))
		{
			_set_ped_crouch_movement(Global_35, false, 0, false);
		}
	}
	func_2(0);
	iVar0 = 2304;
	if (func_3() != -1)
	{
		iVar0 |= 512;
	}
	func_4();
	func_5(1);
	if (func_6())
	{
		_0xed27560703f37258(Global_35);
	}
	_hide_hud_component(382897689);
	while (func_7(&Local_14))
	{
		wait(0);
	}
	func_1();
}

void func_1()
{
	_display_hud_component(382897689);
	Global_1357517 = 0;
	if (_is_app_running(-605293197))
	{
		_close_app_by_hash_immediate(-605293197);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		_databinding_write_data_hash_string(&(Local_14.f_155.f_618[iVar0]), 0);
		_databinding_write_data_bool(&(Local_14.f_155.f_635[iVar0]), 0);
		iVar0++;
	}
	func_8();
	func_9(&(Local_14.f_32));
	func_10();
	if (_does_anim_scene_exist(Local_14.f_1))
	{
		_delete_anim_scene(Local_14.f_1);
	}
	if (does_entity_exist(Local_14.f_2))
	{
		delete_object(&(Local_14.f_2));
	}
	_0x9428447ded71fc7e("journal_scenes");
	func_5(0);
	func_11(&Local_14);
	Local_14.f_32.f_87 = -1;
	func_12(&Local_14);
	func_2(1);
	terminate_this_thread();
}

void func_2(bool bParam0)
{
	if (!bParam0)
	{
		func_13(0);
	}
	Global_1935689->f_2 = bParam0;
}

int func_3()
{
	return Global_1572887->f_12;
}

void func_4()
{
	Global_1357516 = 1;
}

void func_5(bool bParam0)
{
	if (func_14(Global_35))
	{
		iVar0 = func_15(7);
		if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
		{
			if (bParam0)
			{
				_0xcac43d060099ea72(iVar0);
			}
			else
			{
				_0xc9151483cc06a414(iVar0);
			}
		}
	}
}

bool func_6()
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar0, true))
	{
		return false;
	}
	if (!_0xefc4303ddc6e60d3(iVar0))
	{
		return false;
	}
	iVar1 = _0xed1f514af4732258(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(iVar1))
	{
		return false;
	}
	return true;
}

bool func_7(var uParam0)
{
	if (_0x9e4ef615e307fbbe())
	{
		return false;
	}
	Global_1357517 = 1;
	set_ped_reset_flag(Global_35, 129, true);
	iVar0 = func_16(uParam0);
	if (uParam0->f_7 == 1 || iVar0 == 12)
	{
		func_17(uParam0);
	}
	switch (iVar0)
	{
		case 15:
		case 16:
			break;
		default:
			_0x2804658eb7d8a50b(4, 652262273);
			if (_is_using_keyboard(0))
			{
				if (!is_control_pressed(0, 1395223413))
				{
					_set_mouse_cursor_active_this_frame();
					_set_mouse_cursor_sprite(0);
					disable_control_action(0, -1450761377, false);
					disable_control_action(0, -771458680, false);
				}
			}
			break;
	}
	if ((iVar0 < 15 && !func_18()) || !func_19(16))
	{
		if (_get_item_interaction_from_ped(Global_35) != -372193721)
		{
			_0xb35370d5353995cb(Global_35, -372193721, 1048576000);
		}
		func_20(uParam0, 15);
	}
	if (!does_entity_exist(uParam0->f_2))
	{
		uParam0->f_2 = get_closest_object_of_type(Global_36, 10f, -1451757867, true, false, true);
	}
	if (has_anim_event_fired(Global_35, 407174929))
	{
		_0xf40ab58d83c35027(uParam0->f_2);
	}
	switch (iVar0)
	{
		case 0:
			func_21(&(uParam0->f_32));
			func_20(uParam0, 1);
			uParam0->f_32.f_118 = func_22(&(uParam0->f_32.f_119), &(uParam0->f_32.f_120), &(uParam0->f_32.f_84), &(uParam0->f_32.f_85), &(uParam0->f_32.f_75), &(uParam0->f_32.f_90), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92), &(uParam0->f_32.f_110), &(uParam0->f_32.f_111), &Global_1357518);
			if (&Global_1357518 != 0)
			{
				_journal_get_entry_info(&Global_1357518, &Var1);
				if (Var1.f_1 == 0)
				{
					uParam0->f_7 = 1;
					uParam0->f_11 = &Global_1357518;
				}
			}
			Global_1357518 = 0;
			func_23(&(uParam0->f_32), uParam0->f_32.f_120, 0);
			func_24();
			_0x6339c1ea3979b5f7("journal_closeup", "journal_scenes");
			break;
		case 1:
			if (func_25(uParam0))
			{
				if (func_26(player_ped_id(), 0, 1, 0) != -1569615261 || func_26(player_ped_id(), 1, 1, 0) != -1569615261)
				{
					_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 1);
				}
				else
				{
					func_27(uParam0);
					func_20(uParam0, 2);
				}
			}
			break;
		case 2:
			if (func_28(&(uParam0->f_32.f_25), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92)) && func_29())
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155.f_309), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_31(&(uParam0->f_32), &(uParam0->f_155), uParam0->f_11);
				func_20(uParam0, 3);
			}
			break;
		case 3:
			if (uParam0->f_7 == 1)
			{
				if (_get_item_interaction_from_ped(Global_35) == 336776976)
				{
					_0xb35370d5353995cb(Global_35, -975912680, 0f);
					uParam0->f_7 = 0;
					func_11(uParam0);
					func_32(&(uParam0->f_8));
					func_20(uParam0, 12);
					return true;
				}
			}
			if (_get_item_interaction_from_ped(Global_35) == 336776976)
			{
				if (func_33(uParam0->f_6))
				{
					if (uParam0->f_32.f_91 == 1)
					{
						func_34(1, uParam0);
						if (func_35(uParam0->f_6, 1))
						{
							func_20(uParam0, 10);
							return true;
						}
					}
				}
				else
				{
					func_36(uParam0);
					func_34(uParam0->f_32.f_91, uParam0);
				}
			}
			else
			{
				func_34(0, uParam0);
			}
			if (uParam0->f_32.f_89 < uParam0->f_32.f_90)
			{
				if (has_anim_event_fired(Global_35, -1543672280))
				{
					func_37(&(uParam0->f_32), 1);
					uParam0->f_32.f_87 = -1;
					func_38(0, uParam0);
					func_20(uParam0, 4);
					return true;
				}
				else if (has_anim_event_fired(Global_35, 251766646))
				{
					func_39(0, &(uParam0->f_32));
					uParam0->f_32.f_87 = -1;
					func_38(0, uParam0);
					func_20(uParam0, 6);
					return true;
				}
			}
			else
			{
				_0xcb9401f918cb0f75(Global_35, "JOURNAL_BLOCK_PAGE_NEXT", 1, 1);
				_0xcb9401f918cb0f75(Global_35, "JOURNAL_BLOCK_CHAPTER_NEXT", 1, 1);
			}
			if (uParam0->f_32.f_88 > 0)
			{
				if (has_anim_event_fired(Global_35, -1441911379))
				{
					uVar7 = uParam0->f_32.f_88;
					func_37(&(uParam0->f_32), -1);
					if (uParam0->f_32.f_88 == 0 && uParam0->f_32.f_86 != -1)
					{
						uParam0->f_32.f_87 = uVar7;
					}
					else
					{
						uParam0->f_32.f_87 = -1;
					}
					func_38(0, uParam0);
					func_20(uParam0, 5);
					return true;
				}
				else if (has_anim_event_fired(Global_35, -1308691423))
				{
					func_39(1, &(uParam0->f_32));
					func_38(0, uParam0);
					func_20(uParam0, 7);
					return true;
				}
			}
			else
			{
				_0xcb9401f918cb0f75(Global_35, "JOURNAL_BLOCK_PAGE_PREV", 1, 1);
				_0xcb9401f918cb0f75(Global_35, "JOURNAL_BLOCK_CHAPTER_PREV", 1, 1);
			}
			if (has_anim_event_fired(Global_35, 220419707))
			{
				set_anim_scene_bool(uParam0->f_1, "breakout", true, false);
				func_20(uParam0, 15);
				return true;
			}
			if (_get_item_interaction_from_ped(Global_35) == 336776976)
			{
				if (uParam0->f_32.f_86 != -1 && uParam0->f_7 == 0)
				{
					if (uParam0->f_32.f_87 != -1)
					{
						func_40(0, uParam0);
						if (func_33(uParam0->f_4))
						{
							if (func_35(uParam0->f_4, 1))
							{
								func_23(&(uParam0->f_32), uParam0->f_32.f_87, 1);
								uParam0->f_32.f_87 = -1;
								_0xb35370d5353995cb(Global_35, 606465748, 0f);
								func_38(0, uParam0);
								func_34(0, uParam0);
								func_20(uParam0, 14);
								return true;
							}
						}
					}
					else if (uParam0->f_32.f_88 > 0)
					{
						func_40(1, uParam0);
						if (func_33(uParam0->f_4))
						{
							if (func_35(uParam0->f_4, 1))
							{
								uParam0->f_32.f_87 = uParam0->f_32.f_88;
								func_23(&(uParam0->f_32), 0, 1);
								func_38(0, uParam0);
								func_34(0, uParam0);
								_0xb35370d5353995cb(Global_35, 1941986386, 0f);
								func_20(uParam0, 13);
								return true;
							}
						}
					}
				}
				else
				{
					func_11(uParam0);
				}
			}
			else
			{
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					func_41(uParam0);
				}
				func_38(0, uParam0);
			}
			break;
		case 12:
			iVar8 = _get_item_interaction_from_ped(Global_35);
			if (!func_42(&(uParam0->f_8)))
			{
				func_32(&(uParam0->f_8));
			}
			else if (func_43(&(uParam0->f_8)) > 10f || iVar8 == 336776976)
			{
				if (iVar8 != 336776976)
				{
					_0xb35370d5353995cb(Global_35, 336776976, 1048576000);
				}
				*Global_1357519 = { 0f, 0f, 0f };
				func_44(&(uParam0->f_8));
				func_20(uParam0, 3);
			}
			else if (func_43(&(uParam0->f_8)) > 2f || has_anim_event_fired(Global_35, -1300963384))
			{
				if (uParam0->f_11 != 0)
				{
					uParam0->f_11 = 0;
					func_45(&(uParam0->f_32), &(uParam0->f_155));
				}
			}
			break;
		case 13:
			if (has_anim_event_fired(Global_35, -1308691423))
			{
				func_20(uParam0, 7);
			}
			break;
		case 14:
			if (has_anim_event_fired(Global_35, 251766646))
			{
				func_20(uParam0, 6);
			}
			break;
		case 4:
			if (func_28(&(uParam0->f_32.f_25), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92)))
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155.f_309), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 8);
			}
			break;
		case 5:
			if (func_28(&(uParam0->f_32.f_25), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92)))
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 9);
			}
			break;
		case 6:
			if (func_28(&(uParam0->f_32.f_25), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92)))
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155.f_309), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 8);
			}
			break;
		case 7:
			if (func_28(&(uParam0->f_32.f_25), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92)))
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 9);
			}
			break;
		case 8:
			if (has_anim_event_fired(Global_35, -917343754))
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 3);
			}
			break;
		case 9:
			if (has_anim_event_fired(Global_35, -917343754))
			{
				_0xf40ab58d83c35027(uParam0->f_2);
				func_30(&(uParam0->f_32), &(uParam0->f_155.f_309), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 3);
			}
			break;
		case 10:
			func_17(uParam0);
			if (_launch_app_by_hash_with_entry(-605293197, -1339393873) == 0)
			{
				_0xac84686c06184b0d("read_page", "journal_scenes");
				func_20(uParam0, 11);
			}
			break;
		case 11:
			func_17(uParam0);
			if (!_is_app_running(-605293197))
			{
				_0xac84686c06184b0d("journal_closeup", "journal_scenes");
				func_20(uParam0, 3);
			}
			break;
		case 15:
			if (func_46(Global_35, 0) || !_0xec7e480ff8bd0bed(Global_35))
			{
				func_20(uParam0, 16);
			}
		case 16:
			return false;
	}
	return true;
}

void func_8()
{
	if (_uistatemachine_exists(func_47()))
	{
		_uistatemachine_destroy(func_47());
	}
}

void func_9(var uParam0)
{
	if (uParam0->f_122 != 0)
	{
		_uiflowblock_release(&(uParam0->f_122));
	}
}

void func_10()
{
	_set_streamed_txd_as_no_longer_needed(-1533916406);
	_set_streamed_txd_as_no_longer_needed(410003791);
}

void func_11(var uParam0)
{
	if (func_33(uParam0->f_4))
	{
		func_48(&(uParam0->f_4), 1, 1);
	}
}

void func_12(var uParam0)
{
	if (func_33(uParam0->f_6))
	{
		func_48(&(uParam0->f_6), 1, 1);
	}
}

void func_13(bool bParam0)
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

bool func_14(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_15(int iParam0)
{
	iParam0 = func_49(iParam0);
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

int func_16(var uParam0)
{
	return *uParam0;
}

void func_17(var uParam0)
{
	func_12(uParam0);
	_0xcb9401f918cb0f75(Global_35, "JOURNAL_BLOCK_PAGE_NEXT", 1, 1);
	_0xcb9401f918cb0f75(Global_35, "JOURNAL_BLOCK_PAGE_PREV", 1, 1);
	_0xcb9401f918cb0f75(Global_35, "JOURNAL_BLOCK_CHAPTER_NEXT", 1, 1);
	_0xcb9401f918cb0f75(Global_35, "JOURNAL_BLOCK_CHAPTER_PREV", 1, 1);
	func_11(uParam0);
}

bool func_18()
{
	return &Global_1357516;
}

bool func_19(int iParam0)
{
	return func_50(iParam0);
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_21(var uParam0)
{
	uParam0->f_122 = _uiflowblock_request(func_51());
}

int func_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	iVar1 = 0;
	iVar18 = 0;
	iVar19 = 0;
	iVar20 = 0;
	iVar21 = 0;
	iVar22 = 0;
	iVar17 = 0;
	while (iVar17 < 8)
	{
		(*uParam4)[iVar17] = -1;
		iVar17++;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		(*uParam7)[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		(*uParam9)[iVar0] = 0;
		iVar0++;
	}
	*uParam1 = -1;
	*uParam8 = -1;
	*uParam6 = -1;
	*uParam0 = _journal_get_entry_count();
	if (iParam10 != 0)
	{
		_journal_get_entry_info(iParam10, &Var3);
		if (func_52(Var3.f_2))
		{
			iVar22 = 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (_journal_get_entry_count() - 1))
	{
		iVar2 = _journal_get_entry_at_index(iVar0);
		_journal_get_entry_info(iVar2, &Var3);
		iVar9 = func_53(Var3.f_5);
		if (func_54(Var3.f_2))
		{
			*uParam6 = iVar0;
			if (Var3.f_2 == 1918320105)
			{
				(*uParam7)[iVar20] = iVar2;
				iVar20++;
			}
		}
		else if (func_52(Var3.f_2))
		{
			if (iVar21 == 0)
			{
				*uParam8 = iVar0;
			}
			(*uParam9)[iVar21] = iVar2;
			iVar21++;
			if (iVar21 > 1)
			{
			}
			else
			{
				iVar16 = func_55(&Var3, &iVar10);
				if (iVar16 == 4)
				{
					func_56(&iVar1, &iVar16, &iVar10);
					iVar19 = *uParam5;
					*uParam5 = iVar0;
					if (!func_57(Var3.f_2) && Var3.f_5 != 0)
					{
						iVar16 = 2;
					}
				}
				iVar15 = iVar16;
				while (iVar15 <= ((iVar16 + iVar9) - 1))
				{
					iVar10[iVar15] = 1;
					iVar15++;
				}
				if (iVar18 < 8)
				{
					if (func_58(iVar18) == Var3)
					{
						(*uParam4)[iVar18] = iVar0;
						*uParam3 = iVar18;
						iVar18++;
					}
				}
				if (*uParam1 == -1)
				{
					if (iVar22 == 1)
					{
						if (func_52(Var3.f_2))
						{
							*uParam1 = *uParam5;
							*uParam2 = iVar18;
						}
					}
					else if (iParam10 != 0)
					{
						if (iParam10 == iVar2)
						{
							*uParam1 = *uParam5;
							*uParam2 = iVar18;
						}
					}
					else if (Var3.f_1 == 0)
					{
						if (iVar0 == *uParam5)
						{
							*uParam1 = iVar19;
						}
						else
						{
							*uParam1 = *uParam5;
						}
						*uParam2 = iVar18;
					}
				}
			}
			iVar0++;
			if (*uParam1 == -1)
			{
				*uParam1 = *uParam5;
				*uParam2 = *uParam3;
			}
			return iVar1;
		}
	}
}

void func_23(var uParam0, int iParam1, int iParam2)
{
	iVar0 = _journal_get_entry_at_index(iParam1);
	_journal_get_entry_info(iVar0, &vVar1);
	if (func_54(vVar1.z))
	{
		iParam1 = 0;
	}
	else if (func_52(vVar1.z))
	{
		iParam1 = uParam0->f_110;
	}
	if (iParam2 == 1)
	{
		iVar7 = func_59(&(uParam0->f_25), uParam0->f_110);
		if (iParam1 > iVar7)
		{
			iVar8 = iVar7;
			while (iVar8 <= (iParam1 - 1))
			{
				iVar0 = _journal_get_entry_at_index(iVar8);
				_jorunal_mark_read(iVar0);
				iVar8++;
			}
		}
	}
	func_60(uParam0);
	func_60(&(uParam0->f_25));
	func_60(&(uParam0->f_50));
	if (iParam1 != 0 && uParam0->f_88 < 2)
	{
		func_61(&(uParam0->f_92));
	}
	uParam0->f_88 = iParam1;
	func_62(uParam0->f_88, uParam0, &(uParam0->f_25), &(uParam0->f_50), &(uParam0->f_75), uParam0->f_110);
	uParam0->f_89 = func_59(&(uParam0->f_25), uParam0->f_110);
	func_63(&(uParam0->f_25), uParam0->f_90, uParam0->f_86, &(uParam0->f_92), uParam0->f_110, &(uParam0->f_111));
	if (uParam0->f_88 > 0)
	{
		func_63(uParam0, uParam0->f_90, uParam0->f_86, &(uParam0->f_92), uParam0->f_110, &(uParam0->f_111));
	}
	else
	{
		func_64(uParam0);
	}
	if (uParam0->f_89 < uParam0->f_90)
	{
		func_63(&(uParam0->f_50), uParam0->f_90, uParam0->f_86, &(uParam0->f_92), uParam0->f_110, &(uParam0->f_111));
	}
	else
	{
		func_64(&(uParam0->f_50));
	}
}

void func_24()
{
	_request_streamed_txd(-1533916406, false);
	_request_streamed_txd(410003791, false);
}

bool func_25(var uParam0)
{
	iVar0 = 1;
	if (!func_65(&(uParam0->f_32)))
	{
		iVar0 = 0;
	}
	if (!_does_anim_scene_exist(uParam0->f_1))
	{
		uParam0->f_1 = _create_anim_scene("lightrig@player_journal", 0, "plMain", false, true);
		load_anim_scene(uParam0->f_1);
		iVar0 = 0;
	}
	else if (!_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_27(var uParam0)
{
	func_66(&(uParam0->f_32));
	uParam0->f_3 = _databinding_add_data_container_from_path("", "Journal");
	func_67(&(uParam0->f_155), uParam0->f_3);
}

bool func_28(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_68(&((*uParam0)[iVar0]->f_1[iVar1])))
			{
				if (!_has_streamed_txd_loaded(&((*uParam0)[iVar0]->f_1[iVar1])))
				{
					return false;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_69((*uParam0)[0], uParam1))
	{
		iVar0 = 0;
		while (iVar0 < 17)
		{
			func_70(uParam2[iVar0], 0, &iVar2);
			if (func_68(iVar2))
			{
				if (!_has_streamed_txd_loaded(iVar2))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (!_has_streamed_txd_loaded(1720796751))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(-1953758320))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(-1812032167))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(736028119))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(1362538918))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(2081646875))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(-132554147))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(-2121993846))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(1345982557))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(-2030332649))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(-318990232))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(1269508139))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(-156010984))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(-1398971313))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(1391840685))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(-981019355))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(28200354))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(-1499250231))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(1088177688))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(-643999989))
		{
			return false;
		}
		if (!_has_streamed_txd_loaded(func_71()))
		{
			return false;
		}
	}
	return true;
}

bool func_29()
{
	if (_has_streamed_txd_loaded(-1533916406) && _has_streamed_txd_loaded(410003791))
	{
		return true;
	}
	return false;
}

void func_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	iVar0 = 0;
	if (&uParam0->f_25[0] == -1)
	{
		return;
	}
	uParam0->f_84 = func_72(&(uParam0->f_25[0]), &(uParam0->f_75));
	iVar0 = 0;
	while (iVar0 < 16)
	{
		_databinding_write_data_hash_string(uParam2[iVar0], 0);
		_databinding_write_data_bool(uParam4[iVar0], 0);
		iVar0++;
	}
	_databinding_write_data_hash_string(uParam2[0], func_73(func_72(&(uParam0->f_25[0]), &(uParam0->f_75))));
	_databinding_write_data_int(uParam3[0], 0);
	_databinding_write_data_bool(uParam4[0], 1);
	if (func_69(uParam0->f_25[0], &(uParam0->f_86)))
	{
		func_74(uParam1, &(uParam0->f_25), 1, uParam2, uParam3, uParam4, &(uParam0->f_91), &(uParam0->f_92), &(uParam0->f_111), iParam5);
	}
	else
	{
		func_74(uParam1, &(uParam0->f_25), 0, uParam2, uParam3, uParam4, &(uParam0->f_91), &(uParam0->f_92), &(uParam0->f_111), iParam5);
	}
}

void func_31(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_121 == 1)
	{
		func_30(uParam0, uParam1, &(uParam1->f_618), &(uParam1->f_652), &(uParam1->f_635), iParam2);
	}
	else
	{
		func_30(uParam0, &(uParam1->f_309), &(uParam1->f_618), &(uParam1->f_652), &(uParam1->f_635), iParam2);
	}
	uParam0->f_121 = !uParam0->f_121;
}

void func_32(var uParam0)
{
	func_75(uParam0, 0f);
}

bool func_33(int iParam0)
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

void func_34(bool bParam0, var uParam1)
{
	if (func_33(uParam1->f_6))
	{
		func_76(uParam1->f_6, bParam0, 0);
	}
}

bool func_35(int iParam0, bool bParam1)
{
	if (bParam1 && !func_33(iParam0))
	{
		return false;
	}
	iVar0 = func_77(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_36(var uParam0)
{
	if (!func_33(uParam0->f_6))
	{
		uParam0->f_6 = func_78("VI_READ", -69749786, Global_35, 2, 0, 0, 1, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_79(uParam0->f_6, 1310260484, 0, 1);
	}
}

void func_37(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_60(uParam0);
		func_80(uParam0, &(uParam0->f_25));
		func_80(&(uParam0->f_25), &(uParam0->f_50));
		if (uParam0->f_88 > 2)
		{
			func_61(&(uParam0->f_92));
		}
		uParam0->f_88 = &uParam0->f_25[0];
		uParam0->f_89 = func_59(&(uParam0->f_25), uParam0->f_110);
		if (uParam0->f_89 < uParam0->f_90)
		{
			func_81(&(uParam0->f_25), &(uParam0->f_50), uParam0->f_110);
			func_63(&(uParam0->f_50), uParam0->f_90, uParam0->f_86, &(uParam0->f_92), uParam0->f_110, &(uParam0->f_111));
		}
		else
		{
			func_64(&(uParam0->f_50));
		}
	}
	else if (iParam1 == -1)
	{
		func_60(&(uParam0->f_50));
		func_80(&(uParam0->f_50), &(uParam0->f_25));
		func_80(&(uParam0->f_25), uParam0);
		uParam0->f_88 = &uParam0->f_25[0];
		uParam0->f_89 = func_59(&(uParam0->f_25), uParam0->f_110);
		if (uParam0->f_88 > 0)
		{
			func_82(&(uParam0->f_25), uParam0, &(uParam0->f_75), uParam0->f_110);
			func_63(uParam0, uParam0->f_90, uParam0->f_86, &(uParam0->f_92), uParam0->f_110, &(uParam0->f_111));
		}
		else
		{
			func_64(uParam0);
		}
	}
}

void func_38(bool bParam0, var uParam1)
{
	if (func_33(uParam1->f_4))
	{
		func_76(uParam1->f_4, bParam0, 0);
	}
}

void func_39(int iParam0, var uParam1)
{
	if (iParam0 == 1)
	{
		if (uParam1->f_88 == 0)
		{
			return;
		}
		if (uParam1->f_88 == &uParam1->f_75[uParam1->f_84])
		{
			uParam1->f_84 = (uParam1->f_84 - 1);
		}
		iVar0 = &uParam1->f_75[uParam1->f_84];
	}
	else
	{
		if (uParam1->f_88 == uParam1->f_90)
		{
			return;
		}
		if (uParam1->f_84 >= uParam1->f_85)
		{
			iVar0 = uParam1->f_90;
		}
		else
		{
			uParam1->f_84++;
			iVar0 = &uParam1->f_75[uParam1->f_84];
		}
	}
	if (iVar0 == 0 && uParam1->f_86 != -1)
	{
		uParam1->f_87 = uParam1->f_88;
	}
	else
	{
		uParam1->f_87 = -1;
	}
	func_23(uParam1, iVar0, 1);
}

void func_40(int iParam0, var uParam1)
{
	if (func_83(uParam1->f_32.f_86))
	{
		if (iParam0 == 1)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 4;
		}
	}
	else if (iParam0 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	if (uParam1->f_5 == iVar0 && func_33(uParam1->f_4))
	{
		func_38(1, uParam1);
	}
	else
	{
		func_11(uParam1);
		func_84(iVar0, uParam1);
	}
}

void func_41(var uParam0)
{
	if (!_is_anim_scene_started(uParam0->f_1, false))
	{
		set_anim_scene_origin(uParam0->f_1, Global_36, get_entity_rotation(Global_35, 2), 2);
		attach_anim_scene_to_entity_preserving_location(uParam0->f_1, Global_35, -1);
		start_anim_scene(uParam0->f_1);
	}
}

bool func_42(var uParam0)
{
	return func_85(*uParam0, 1);
}

float func_43(var uParam0)
{
	if (!func_42(uParam0))
	{
		return 0f;
	}
	if (func_86(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_87() - uParam0->f_1);
}

void func_44(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_45(var uParam0, var uParam1)
{
	if (uParam0->f_121 == 1)
	{
		func_30(uParam0, &(uParam1->f_309), &(uParam1->f_618), &(uParam1->f_652), &(uParam1->f_635), 0);
	}
	else
	{
		func_30(uParam0, uParam1, &(uParam1->f_618), &(uParam1->f_652), &(uParam1->f_635), 0);
	}
}

bool func_46(int iParam0, bool bParam1)
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

int func_47()
{
	return -1913092956;
}

void func_48(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_33(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_77(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_88(iVar0);
	*uParam0 = 0;
}

int func_49(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_50(int iParam0)
{
	return func_89(Global_1935496->f_27, iParam0);
}

int func_51()
{
	return -869274923;
}

bool func_52(int iParam0)
{
	if (iParam0 == -731660569)
	{
		return true;
	}
	return false;
}

int func_53(int iParam0)
{
	if (iParam0 == 0)
	{
		return 4;
	}
	else if (iParam0 == 1)
	{
		return 2;
	}
	else if (iParam0 == 2)
	{
		return 1;
	}
	return -1;
}

bool func_54(int iParam0)
{
	if (iParam0 == 1918320105 || iParam0 == 230952115)
	{
		return true;
	}
	return false;
}

int func_55(var uParam0, int iParam1)
{
	if (uParam0->f_5 == 2)
	{
		if (func_57(uParam0->f_2))
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iParam1[iVar0] == 0)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1[2] == 0)
		{
			return 2;
		}
		else if (iParam1[3] == 0)
		{
			return 3;
		}
	}
	else if (uParam0->f_5 == 1)
	{
		if (func_57(uParam0->f_2))
		{
			if (iParam1[0] == 0 && iParam1[1] == 0)
			{
				return 0;
			}
			else if (iParam1[2] == 0 && iParam1[3] == 0)
			{
				return 2;
			}
		}
		else if (iParam1[2] == 0 && iParam1[3] == 0)
		{
			return 2;
		}
	}
	else if (uParam0->f_5 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iParam1[iVar0] == 1)
			{
				return 4;
			}
			iVar0++;
		}
		return 0;
	}
	return 4;
}

void func_56(int iParam0, int iParam1, int iParam2)
{
	*iParam0++;
	*iParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*iParam2)[iVar0] = 0;
		iVar0++;
	}
}

bool func_57(int iParam0)
{
	if ((((iParam0 == 1302417915 || iParam0 == 982411871) || iParam0 == 1610827497) || func_52(iParam0)) || func_54(iParam0))
	{
		return true;
	}
	return false;
}

int func_58(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1405489977;
	}
	else if (iParam0 == 1)
	{
		return -2134669864;
	}
	else if (iParam0 == 2)
	{
		return 115823701;
	}
	else if (iParam0 == 3)
	{
		return -1774490051;
	}
	else if (iParam0 == 4)
	{
		return 701612593;
	}
	else if (iParam0 == 5)
	{
		return -739133286;
	}
	else if (iParam0 == 6)
	{
		return -514392105;
	}
	else if (iParam0 == 7)
	{
		return 1396404308;
	}
	return 1405489977;
}

int func_59(var uParam0, int iParam1)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0[iVar0] != -1)
		{
			iVar2 = _journal_get_entry_at_index(uParam0[iVar0]);
			_journal_get_entry_info(iVar2, &vVar3);
			if (!func_54(vVar3.z))
			{
				if (!func_52(vVar3.z) || uParam0[iVar0] == iParam1)
				{
					if (uParam0[iVar0] > iVar1)
					{
						iVar1 = uParam0[iVar0];
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_60(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_90(&((*uParam0)[iVar0]->f_1));
		iVar0++;
	}
}

void func_61(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		func_70(uParam0[iVar0], 0, &iVar1);
		if (func_91(iVar1))
		{
			_set_streamed_txd_as_no_longer_needed(iVar1);
		}
		iVar0++;
	}
	_set_streamed_txd_as_no_longer_needed(1720796751);
	_set_streamed_txd_as_no_longer_needed(-1953758320);
	_set_streamed_txd_as_no_longer_needed(-1812032167);
	_set_streamed_txd_as_no_longer_needed(736028119);
	_set_streamed_txd_as_no_longer_needed(1362538918);
	_set_streamed_txd_as_no_longer_needed(2081646875);
	_set_streamed_txd_as_no_longer_needed(-132554147);
	_set_streamed_txd_as_no_longer_needed(-2121993846);
	_set_streamed_txd_as_no_longer_needed(1345982557);
	_set_streamed_txd_as_no_longer_needed(-2030332649);
	_set_streamed_txd_as_no_longer_needed(-318990232);
	_set_streamed_txd_as_no_longer_needed(1269508139);
	_set_streamed_txd_as_no_longer_needed(-156010984);
	_set_streamed_txd_as_no_longer_needed(-1398971313);
	_set_streamed_txd_as_no_longer_needed(1391840685);
	_set_streamed_txd_as_no_longer_needed(-981019355);
	_set_streamed_txd_as_no_longer_needed(28200354);
	_set_streamed_txd_as_no_longer_needed(-1499250231);
	_set_streamed_txd_as_no_longer_needed(1088177688);
	_set_streamed_txd_as_no_longer_needed(-643999989);
	_set_streamed_txd_as_no_longer_needed(func_71());
}

void func_62(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	func_92(iParam0, uParam2, iParam5);
	func_81(uParam2, uParam3, iParam5);
	func_82(uParam2, uParam1, uParam4, iParam5);
}

void func_63(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5)
{
	iVar2 = 0;
	iVar25 = 0;
	iVar26 = 0;
	iVar27 = -1;
	iVar28 = -1;
	iVar29 = 0;
	func_64(uParam0);
	if (uParam0[0] == -1)
	{
		return;
	}
	if (uParam0[0] == 0)
	{
		if (iParam2 != -1)
		{
			if (func_83(iParam2))
			{
				(*uParam0)[1] = iParam2;
			}
			else
			{
				func_93(uParam3);
				iVar17[0] = 1;
				iVar17[1] = 1;
			}
		}
	}
	iVar24 = 0;
	while (iVar24 <= 3)
	{
		if (uParam0[iVar24] >= 0)
		{
			iVar3 = _journal_get_entry_at_index(uParam0[iVar24]);
			_journal_get_entry_info(iVar3, &Var4);
			iVar1 = func_53(Var4.f_5);
			iVar23 = func_55(&Var4, &iVar17);
			if (iVar1 == 1)
			{
				if (iVar23 == 2 || iVar23 == 3)
				{
					iVar26++;
					if (!func_57(Var4.f_2) && Var4.f_2 != 711933872)
					{
						iVar29 = 1;
					}
				}
			}
			if (func_52(Var4.f_2))
			{
				iVar25 = 1;
			}
			iVar22 = iVar23;
			while (iVar22 <= ((iVar23 + iVar1) - 1))
			{
				iVar17[iVar22] = 1;
				iVar22++;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_52(Var4.f_2))
				{
					if (uParam5[iVar0] != 0)
					{
						_journal_get_entry_info(uParam5[iVar0], &Var4);
						func_70(Var4, 0, &uVar10);
						(*uParam0)[iVar2]->f_1[iVar0] = uVar10;
					}
					else
					{
						(*uParam0)[iVar2]->f_1[iVar0] = 0;
					}
				}
				else
				{
					func_70(Var4, iVar0, &uVar10);
					(*uParam0)[iVar2]->f_1[iVar0] = uVar10;
				}
				if (!func_68(&((*uParam0)[iVar2]->f_1[iVar0])))
				{
					if (iVar27 == -1)
					{
						iVar27 = iVar2;
						iVar28 = iVar0;
					}
				}
				iVar0++;
			}
			iVar2++;
		}
		else if (iVar25 == 1 && iVar24 == 3)
		{
			if (uParam5[4] != 0)
			{
				_journal_get_entry_info(uParam5[4], &Var4);
				func_70(Var4, 0, &uVar10);
				(*uParam0)[iVar2]->f_1[0] = uVar10;
			}
			else
			{
				(*uParam0)[iVar2]->f_1[0] = 0;
			}
			if (uParam5[5] != 0)
			{
				_journal_get_entry_info(uParam5[5], &Var4);
				func_70(Var4, 0, &uVar10);
				(*uParam0)[iVar2]->f_1[1] = uVar10;
			}
			else
			{
				(*uParam0)[iVar2]->f_1[1] = 0;
			}
		}
		iVar24++;
	}
	iVar30 = 0;
	if ((iVar2 < 4 && iParam1 > func_59(uParam0, iParam4)) && iVar25 == 0)
	{
		iVar31 = 0;
		while (iVar31 < 4)
		{
			if (&iVar17[iVar31] == 0)
			{
				iVar30 = 1;
			}
			iVar31++;
		}
		if (iVar30 == 1)
		{
			if (func_94(uParam0[0]))
			{
				func_95(uParam0[0], &uVar10, &iVar17, (*uParam0)[iVar2]->f_1[0]);
			}
		}
	}
	iVar24 = 0;
	while (iVar24 <= 3)
	{
		func_96(&((*uParam0)[iVar24]->f_1));
		iVar24++;
	}
	if ((iVar26 == 2 && iVar29 == 1) && iVar27 != -1)
	{
		func_97(uParam0[0], &uVar10, (*uParam0)[iVar27]->f_1[iVar28]);
	}
}

void func_64(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			(*uParam0)[iVar0]->f_1[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
}

bool func_65(var uParam0)
{
	return _uiflowblock_is_loaded(uParam0->f_122);
}

void func_66(var uParam0)
{
	if (!_uiflowblock_is_loaded(uParam0->f_122))
	{
		return;
	}
	_uiflowblock_enter(uParam0->f_122, 0);
	_uistatemachine_create(func_47(), uParam0->f_122);
}

void func_67(var uParam0, var uParam1)
{
	uVar0 = _databinding_add_data_container(uParam1, "RtPagesTop");
	func_98(uParam0, uVar0);
	uVar1 = _databinding_add_data_container(uParam1, "RtPagesBottom");
	func_98(&(uParam0->f_309), uVar1);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		StringCopy(&cVar3, "textField", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		uVar11 = _databinding_add_data_container(uParam1, &cVar3);
		uParam0->f_618[iVar2] = _databinding_add_data_hash(uVar11, "text", 0);
		uParam0->f_652[iVar2] = _databinding_add_data_int(uVar11, "style", 0);
		StringCopy(&cVar3, "divider", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		uVar11 = _databinding_add_data_container(uParam1, &cVar3);
		uParam0->f_635[iVar2] = _databinding_add_data_bool(uVar11, "isVisible", 0);
		iVar2++;
	}
}

bool func_68(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -916968937)
	{
		return false;
	}
	return true;
}

bool func_69(var uParam0, var uParam1)
{
	if ((*uParam0 == 0 && *uParam1 != -1) && !func_83(*uParam1))
	{
		return true;
	}
	return false;
}

void func_70(int iParam0, int iParam1, var uParam2)
{
	func_99(uParam2);
	_journal_get_texture_with_layout(iParam0, iParam1, uParam2);
}

int func_71()
{
	if (_journal_can_write_entry(-1478534115))
	{
		return 1559365164;
	}
	return -211603243;
}

int func_72(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (uParam1[iVar0] != -1)
		{
			if (iParam0 >= uParam1[iVar0])
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_73(int iParam0)
{
	if (iParam0 == 0)
	{
		return 359637012;
	}
	else if (iParam0 == 1)
	{
		return 410002873;
	}
	else if (iParam0 == 2)
	{
		return 160827397;
	}
	else if (iParam0 == 3)
	{
		return 1003809922;
	}
	else if (iParam0 == 4)
	{
		return -518834432;
	}
	else if (iParam0 == 5)
	{
		return 1636415471;
	}
	else if (iParam0 == 6)
	{
		if (_journal_can_write_entry(-1232453926))
		{
			return 0;
		}
		else
		{
			return 1385929235;
		}
	}
	else if (iParam0 == 7)
	{
		return -2065924460;
	}
	return 359637012;
}

void func_74(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9)
{
	iVar25 = 1;
	iVar36 = -1;
	iVar37 = 0;
	iVar38 = 0;
	iVar39 = 0;
	if (iParam2 == 1)
	{
		iVar10[0] = 1;
		iVar10[1] = 1;
	}
	*uParam6 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar24 = 0;
		iVar9 = 0;
		if (uParam1[iVar0] > -1)
		{
			iVar9 = _journal_get_entry_at_index(uParam1[iVar0]);
		}
		if (iVar9 != 0)
		{
			_journal_get_entry_info(iVar9, &Var15);
			_jorunal_mark_read(iVar9);
			iVar23 = func_53(Var15.f_5);
			iVar22 = func_55(&Var15, &iVar10);
			iVar21 = iVar22;
			while (iVar21 <= ((iVar22 + iVar23) - 1))
			{
				iVar10[iVar21] = 1;
				iVar21++;
			}
			if (func_52(Var15.f_2))
			{
				iVar36 = iVar0;
				iVar39 = iVar22;
			}
			else if (iParam9 == iVar9)
			{
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					func_70(iVar9, iVar1, &Var2);
					func_100(iVar22, &Var2);
					if (func_68(Var2))
					{
						func_101((*uParam0)[iVar38], Var2, &iVar38);
					}
					else if (func_102(&((*uParam1)[iVar0]->f_1[iVar1])))
					{
						func_97(uParam1[0], &Var2, (*uParam1)[iVar0]->f_1[iVar1]);
						func_101((*uParam0)[iVar38], Var2, &iVar38);
					}
					if (Var2.f_2 != 188052454 && Var2.f_2 != 0)
					{
						*uParam6 = 1;
						iVar24 = 1;
						_databinding_write_data_hash_string(uParam3[iVar25], Var2.f_2);
						if (func_103(Var2.f_2))
						{
							_databinding_write_data_int(uParam4[iVar25], 3);
						}
						else
						{
							_databinding_write_data_int(uParam4[iVar25], 2);
						}
						iVar25++;
					}
					iVar1++;
				}
				Jump @459; //curOff = 398
				if (func_104(&((*uParam1)[iVar0]->f_1[0])))
				{
					func_95(uParam1[0], &Var2, &iVar10, (*uParam1)[iVar0]->f_1[0]);
					func_101((*uParam0)[iVar38], Var2, &iVar38);
				}
				if (iVar24 == 1)
				{
					_databinding_write_data_bool(uParam5[(iVar25 - 1)], 1);
				}
			}
			iVar0++;
			if (iVar36 != -1)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (uParam8[iVar0] != 0)
					{
						if (iParam9 == uParam8[iVar0])
						{
						}
						else
						{
							func_70(uParam8[iVar0], 0, &Var2);
							func_100(iVar39, &Var2);
							iVar37 = (iVar37 + func_105(iVar0));
							Var2.f_3 = iVar37;
							func_101((*uParam0)[iVar38], Var2, &iVar38);
							iVar37 = (iVar37 + Var2.f_6);
							iVar0++;
						}
						if (iParam2 == 1)
						{
							Var2 = func_71();
							Var2.f_1 = func_71();
							Var2.f_2 = 0;
							Var2.f_3 = 11;
							Var2.f_4 = 386;
							Var2.f_5 = 81;
							Var2.f_6 = 46;
							func_101((*uParam0)[iVar38], Var2, &iVar38);
							iVar26 = 0;
							while (iVar26 < 17)
							{
								func_106(uParam0->f_121[iVar26]);
								if (uParam7[iVar26] != 0)
								{
									_journal_get_entry_info(uParam7[iVar26], &Var15);
									func_70(uParam7[iVar26], 0, &Var2);
									Var2.f_3 = (71 + iVar26 * 52);
									Var2.f_4 = 42;
									Var2.f_5 = 684;
									Var2.f_6 = 52;
									func_101((*uParam0)[iVar38], Var2, &iVar38);
									iVar27 = (iVar27 + func_107(uParam7[iVar26]));
									if (iVar27 > 0)
									{
										_int_to_string(iVar27, "%u", &Var30);
										iVar28 = get_length_of_literal_string(&Var30);
										iVar29 = 0;
										while (iVar29 < iVar28)
										{
											MemCopy(&uVar34, {Var30}, 1);
											StringCopy(&cVar35, _0x806862e5d266cf38(&uVar34, iVar29, iVar29 + 1), 8);
											if (iVar28 > 3)
											{
												_databinding_write_data_bool(uParam0->f_121[iVar26][iVar29], 1);
												_databinding_write_data_hash_string((*uParam0->f_121[iVar26])[iVar29]->f_1, func_108(cVar35, iVar29 == (iVar28 - 4)));
											}
											else
											{
												_databinding_write_data_bool(uParam0->f_121[iVar26][iVar29], 1);
												_databinding_write_data_hash_string((*uParam0->f_121[iVar26])[iVar29]->f_1, func_108(cVar35, 0));
											}
											iVar29++;
										}
									}
								}
								iVar26++;
							}
						}
						else
						{
							iVar26 = 0;
							while (iVar26 < 17)
							{
								func_106(uParam0->f_121[iVar26]);
								iVar26++;
							}
						}
						iVar40 = iVar38;
						while (iVar40 <= 19)
						{
							_databinding_write_data_bool(uParam0[iVar40], 0);
							_databinding_write_data_hash_string((*uParam0)[iVar40]->f_1, 0);
							_databinding_write_data_int((*uParam0)[iVar40]->f_2, 0);
							_databinding_write_data_int((*uParam0)[iVar40]->f_3, 0);
							_databinding_write_data_int((*uParam0)[iVar40]->f_5, 1);
							_databinding_write_data_int((*uParam0)[iVar40]->f_4, 1);
							iVar40++;
						}
					}
				}
			}
		}
	}
}

void func_75(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_87() - fParam1);
	func_109(uParam0, 1);
	func_110(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_76(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_77(iParam0);
	if (bParam1)
	{
		func_111(iParam0, 4);
		func_112(iVar0, 1);
		func_113(iVar0, 1);
	}
	else
	{
		func_114(iParam0, 4);
		func_113(iVar0, 0);
	}
}

int func_77(int iParam0)
{
	return iParam0;
}

int func_78(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_115(iVar0, 2))
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
				func_116(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_79(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_77(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_80(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		_copy_memory((*uParam0)[iVar0], (*uParam1)[iVar0], 6);
		iVar0++;
	}
}

void func_81(var uParam0, var uParam1, int iParam2)
{
	iVar5 = func_59(uParam0, iParam2);
	func_117(iVar5 + 1, &uVar0, iParam2);
	iVar6 = 0;
	while (iVar6 < 4)
	{
		(*uParam1)[iVar6] = &uVar0[iVar6];
		iVar6++;
	}
}

void func_82(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_118((uParam0[0] - 1), &uVar0, uParam2, iParam3);
	iVar5 = 0;
	while (iVar5 < 4)
	{
		(*uParam1)[iVar5] = &uVar0[iVar5];
		iVar5++;
	}
}

bool func_83(int iParam0)
{
	iVar7 = _journal_get_entry_count();
	if (iParam0 < iVar7)
	{
		iVar0 = _journal_get_entry_at_index(iParam0);
		_journal_get_entry_info(iVar0, &vVar1);
		if (vVar1.z == 230952115)
		{
			return true;
		}
	}
	return false;
}

void func_84(int iParam0, var uParam1)
{
	if (!func_33(uParam1->f_4))
	{
		if (iParam0 == 1)
		{
			sVar0 = "JOURNAL_SHOW_GANG_TAKES";
		}
		else if (iParam0 == 2)
		{
			sVar0 = "JOURNAL_HIDE_GANG_TAKES";
		}
		else if (iParam0 == 3)
		{
			sVar0 = "JOURNAL_SHOW_DEBT";
		}
		else if (iParam0 == 4)
		{
			sVar0 = "JOURNAL_HIDE_DEBT";
		}
		uParam1->f_5 = iParam0;
		uParam1->f_4 = func_78(sVar0, -711536720, Global_35, 2, 0, 0, 1, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_79(uParam1->f_4, 1310260484, 0, 1);
	}
}

bool func_85(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_86(var uParam0)
{
	return func_85(*uParam0, 2);
}

float func_87()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_88(int iParam0)
{
	if (!func_119(iParam0))
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

bool func_89(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_90(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_91(uParam0[iVar0]))
		{
			_set_streamed_txd_as_no_longer_needed(uParam0[iVar0]);
		}
		iVar0++;
	}
}

bool func_91(int iParam0)
{
	if (func_68(iParam0) && !func_102(iParam0))
	{
		return true;
	}
	return false;
}

void func_92(int iParam0, var uParam1, int iParam2)
{
	func_117(iParam0, &uVar0, iParam2);
	iVar5 = 0;
	while (iVar5 < 4)
	{
		(*uParam1)[iVar5] = &uVar0[iVar5];
		iVar5++;
	}
}

void func_93(var uParam0)
{
	iVar7 = 0;
	while (iVar7 < 17)
	{
		func_70(uParam0[iVar7], 0, &iVar0);
		if (func_68(iVar0))
		{
			_request_streamed_txd(iVar0, false);
		}
		iVar7++;
	}
	_request_streamed_txd(1720796751, false);
	_request_streamed_txd(-1953758320, false);
	_request_streamed_txd(-1812032167, false);
	_request_streamed_txd(736028119, false);
	_request_streamed_txd(1362538918, false);
	_request_streamed_txd(2081646875, false);
	_request_streamed_txd(-132554147, false);
	_request_streamed_txd(-2121993846, false);
	_request_streamed_txd(1345982557, false);
	_request_streamed_txd(-2030332649, false);
	_request_streamed_txd(-318990232, false);
	_request_streamed_txd(1269508139, false);
	_request_streamed_txd(-156010984, false);
	_request_streamed_txd(-1398971313, false);
	_request_streamed_txd(1391840685, false);
	_request_streamed_txd(-981019355, false);
	_request_streamed_txd(28200354, false);
	_request_streamed_txd(-1499250231, false);
	_request_streamed_txd(1088177688, false);
	_request_streamed_txd(-643999989, false);
	_request_streamed_txd(func_71(), false);
}

bool func_94(int iParam0)
{
	while (iParam0 > 27)
	{
		iParam0 = (iParam0 - 28);
	}
	if ((((((iParam0 == 0 || iParam0 == 20) || iParam0 == 7) || iParam0 == 13) || iParam0 == 22) || iParam0 == 5) || iParam0 == 25)
	{
		return false;
	}
	return true;
}

void func_95(int iParam0, var uParam1, int iParam2, var uParam3)
{
	iVar0 = func_120(iParam0, iParam2);
	if (iVar0 != 4)
	{
		func_121(iParam0, uParam1, uParam3);
		func_100(iVar0, uParam1);
		(*iParam2)[iVar0] = 1;
	}
}

void func_96(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_68(uParam0[iVar0]))
		{
			_request_streamed_txd(uParam0[iVar0], false);
		}
		iVar0++;
	}
}

void func_97(int iParam0, var uParam1, var uParam2)
{
	while (iParam0 > 27)
	{
		iParam0 = (iParam0 - 28);
	}
	if (((((((((((((iParam0 == 2 || iParam0 == 3) || iParam0 == 5) || iParam0 == 7) || iParam0 == 9) || iParam0 == 12) || iParam0 == 13) || iParam0 == 14) || iParam0 == 17) || iParam0 == 20) || iParam0 == 21) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25)
	{
		*uParam1 = -1533916406;
		uParam1->f_3 = 450;
		uParam1->f_4 = 775;
		uParam1->f_5 = 700;
		uParam1->f_6 = 116;
	}
	else
	{
		*uParam1 = 410003791;
		uParam1->f_3 = 450;
		uParam1->f_4 = 775;
		uParam1->f_5 = 700;
		uParam1->f_6 = 143;
	}
	uParam1->f_2 = 188052454;
	*uParam2 = *uParam1;
}

void func_98(var uParam0, var uParam1)
{
	iVar6 = 0;
	while (iVar6 < 20)
	{
		StringCopy(&cVar0, "Image", 24);
		StringIntConCat(&cVar0, iVar6, 24);
		uVar8 = _databinding_add_data_container(uParam1, &cVar0);
		func_122((*uParam0)[iVar6], uVar8);
		iVar6++;
	}
	iVar7 = 0;
	while (iVar7 < 17)
	{
		StringCopy(&cVar3, "GangTakeTotal", 24);
		StringIntConCat(&cVar3, iVar7, 24);
		uVar9 = _databinding_add_data_container(uParam1, &cVar3);
		func_123(uParam0->f_121[iVar7], uVar9, iVar7);
		iVar7++;
	}
}

void func_99(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
}

void func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			uParam1->f_4 = (uParam1->f_4 + round((1500f / 2f)));
			break;
	}
	switch (iParam0)
	{
		case 1:
		case 3:
			uParam1->f_3 = (uParam1->f_3 + round((1000f / 2f)));
			break;
	}
}

void func_101(var uParam0, struct<7> Param1, int iParam8)
{
	_databinding_write_data_bool(*uParam0, 1);
	_databinding_write_data_hash_string(uParam0->f_1, Param1);
	_databinding_write_data_int(uParam0->f_2, Param1.f_3);
	_databinding_write_data_int(uParam0->f_3, Param1.f_4);
	_databinding_write_data_int(uParam0->f_5, Param1.f_6);
	_databinding_write_data_int(uParam0->f_4, Param1.f_5);
	*iParam8++;
}

bool func_102(int iParam0)
{
	if (iParam0 == -1533916406 || iParam0 == 410003791)
	{
		return true;
	}
	return false;
}

bool func_103(int iParam0)
{
	if ((((((((((((((iParam0 == -1646668568 || iParam0 == 493253075) || iParam0 == -67508433) || iParam0 == 915009346) || iParam0 == 360731400) || iParam0 == -1905612529) || iParam0 == -1199852283) || iParam0 == -1621015660) || iParam0 == 1111957406) || iParam0 == 463361192) || iParam0 == -1248235451) || iParam0 == -112764323) || iParam0 == 1882918686) || iParam0 == 507577252) || iParam0 == -447557219)
	{
		return true;
	}
	return false;
}

bool func_104(int iParam0)
{
	if ((((((iParam0 == -772642191 || iParam0 == -1601370201) || iParam0 == -1371626742) || iParam0 == 184245378) || iParam0 == 427424127) || iParam0 == 1385032614) || iParam0 == -187944924)
	{
		return true;
	}
	return false;
}

int func_105(int iParam0)
{
	if (iParam0 == 0)
	{
		return 25;
	}
	else if (iParam0 == 1)
	{
		return 14;
	}
	else if (iParam0 == 2)
	{
		return 20;
	}
	else if (iParam0 == 3)
	{
		return 12;
	}
	else if (iParam0 == 4)
	{
		return 24;
	}
	else if (iParam0 == 5)
	{
		return 16;
	}
	return 20;
}

void func_106(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		_databinding_write_data_hash_string((*uParam0)[iVar0]->f_1, 0);
		_databinding_write_data_bool(uParam0[iVar0], 0);
		iVar0++;
	}
}

int func_107(int iParam0)
{
	if (iParam0 == -1478534115 || iParam0 == -1286192062)
	{
		return 0;
	}
	else if (iParam0 == 721468880)
	{
		return 150;
	}
	else if (iParam0 == -800449045)
	{
		return 300;
	}
	else if (iParam0 == 1056132658)
	{
		return 750;
	}
	else if (iParam0 == -181334543)
	{
		return 600;
	}
	else if (iParam0 == -338306437)
	{
		return 1000;
	}
	else if (iParam0 == 437270255)
	{
		return 425;
	}
	else if (iParam0 == 1357221321)
	{
		return 350;
	}
	else if (iParam0 == 1343889751)
	{
		return 5000;
	}
	else if (iParam0 == -948326001)
	{
		return 7500;
	}
	else if (iParam0 == -1374849484)
	{
		return 10000;
	}
	else if (iParam0 == -870030001)
	{
		return 375;
	}
	else if (iParam0 == 1095274522)
	{
		return 450;
	}
	else if (iParam0 == -1485078322)
	{
		return 225;
	}
	else if (iParam0 == 1193561641)
	{
		return 3000;
	}
	else if (iParam0 == -1725307861)
	{
		return 0;
	}
	else if (iParam0 == 1520478365)
	{
		return 0;
	}
	else if (iParam0 == -1661934591)
	{
		return 6000;
	}
	else if (iParam0 == 710102686)
	{
		return 19000;
	}
	return 0;
}

int func_108(char[4] cParam0, bool bParam1)
{
	if (bParam1 == 0)
	{
		if (are_strings_equal(&cParam0, "0"))
		{
			return 1720796751;
		}
		else if (are_strings_equal(&cParam0, "1"))
		{
			return -1953758320;
		}
		else if (are_strings_equal(&cParam0, "2"))
		{
			return -1812032167;
		}
		else if (are_strings_equal(&cParam0, "3"))
		{
			return 736028119;
		}
		else if (are_strings_equal(&cParam0, "4"))
		{
			return 1362538918;
		}
		else if (are_strings_equal(&cParam0, "5"))
		{
			return 2081646875;
		}
		else if (are_strings_equal(&cParam0, "6"))
		{
			return -132554147;
		}
		else if (are_strings_equal(&cParam0, "7"))
		{
			return -2121993846;
		}
		else if (are_strings_equal(&cParam0, "8"))
		{
			return 1345982557;
		}
		else if (are_strings_equal(&cParam0, "9"))
		{
			return -2030332649;
		}
	}
	else if (are_strings_equal(&cParam0, "0"))
	{
		return -318990232;
	}
	else if (are_strings_equal(&cParam0, "1"))
	{
		return 1269508139;
	}
	else if (are_strings_equal(&cParam0, "2"))
	{
		return -156010984;
	}
	else if (are_strings_equal(&cParam0, "3"))
	{
		return -1398971313;
	}
	else if (are_strings_equal(&cParam0, "4"))
	{
		return 1391840685;
	}
	else if (are_strings_equal(&cParam0, "5"))
	{
		return -981019355;
	}
	else if (are_strings_equal(&cParam0, "6"))
	{
		return 28200354;
	}
	else if (are_strings_equal(&cParam0, "7"))
	{
		return -1499250231;
	}
	else if (are_strings_equal(&cParam0, "8"))
	{
		return 1088177688;
	}
	else if (are_strings_equal(&cParam0, "9"))
	{
		return -643999989;
	}
	return 0;
}

void func_109(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_110(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_111(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_112(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_115(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_113(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_114(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_115(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_116(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_112(iParam0, 1);
	func_113(iParam0, 1);
	func_114(iParam0, 128);
}

void func_117(int iParam0, var uParam1, int iParam2)
{
	iVar16 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam1)[iVar0] = -1;
		iVar0++;
	}
	if (iParam0 < 0 || iParam0 >= _journal_get_entry_count())
	{
		return;
	}
	iVar0 = iParam0;
	while (iVar0 <= (_journal_get_entry_count() - 1))
	{
		iVar1 = _journal_get_entry_at_index(iVar0);
		_journal_get_entry_info(iVar1, &Var2);
		iVar8 = func_53(Var2.f_5);
		if (func_54(Var2.f_2))
		{
		}
		else if (func_52(Var2.f_2) && iVar0 != iParam2)
		{
		}
		else
		{
			iVar15 = func_55(&Var2, &iVar9);
			if (iVar15 == 4)
			{
				return;
			}
			(*uParam1)[iVar16] = iVar0;
			iVar16++;
			if (iVar16 == 4)
			{
				return;
			}
			iVar14 = iVar15;
			while (iVar14 <= ((iVar15 + iVar8) - 1))
			{
				iVar9[iVar14] = 1;
				iVar14++;
			}
		}
		iVar0++;
	}
}

void func_118(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam1)[iVar0] = -1;
		iVar0++;
	}
	if (iParam0 < 0 || iParam0 >= _journal_get_entry_count())
	{
		return;
	}
	iVar1 = func_72(iParam0, uParam2);
	iVar0 = uParam2[iVar1];
	while (iVar0 <= iParam0)
	{
		iVar4 = _journal_get_entry_at_index(iVar0);
		_journal_get_entry_info(iVar4, &Var5);
		iVar11 = func_53(Var5.f_5);
		if (func_54(Var5.f_2))
		{
		}
		else if (func_52(Var5.f_2) && iVar0 != iParam3)
		{
		}
		else
		{
			iVar18 = func_55(&Var5, &iVar12);
			if (iVar18 == 4)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					(*uParam1)[iVar2] = -1;
					iVar2++;
				}
				func_56(&uVar3, &iVar18, &iVar12);
				iVar19 = 0;
				if (!func_57(Var5.f_2) && Var5.f_5 != 0)
				{
					iVar18 = 2;
				}
			}
			(*uParam1)[iVar19] = iVar0;
			iVar19++;
			iVar17 = iVar18;
			while (iVar17 <= ((iVar18 + iVar11) - 1))
			{
				iVar12[iVar17] = 1;
				iVar17++;
			}
		}
		iVar0++;
	}
}

bool func_119(int iParam0)
{
	return func_115(iParam0, 2);
}

int func_120(int iParam0, int iParam1)
{
	if (iParam1[0] == 0 && iParam1[1] == 0)
	{
		if (func_124(iParam0))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1[2] == 0 && iParam1[3] == 0)
	{
		if (func_124(iParam0))
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	else if (iParam1[1] == 0 && iParam1[3] == 0)
	{
		if (func_124(iParam0))
		{
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (iParam1[1] == 0)
	{
		return 1;
	}
	else if (iParam1[3] == 0)
	{
		return 3;
	}
	return 4;
}

void func_121(int iParam0, var uParam1, var uParam2)
{
	iVar0 = func_125(iParam0);
	iVar7 = _journal_get_grime_at_index(iVar0);
	_journal_get_entry_info(iVar7, &uVar1);
	*uParam1 = func_126(iVar0);
	uParam1->f_2 = 0;
	*uParam2 = *uParam1;
	func_127(iVar0, &(uParam1->f_5), &(uParam1->f_6));
	func_128(iParam0, uParam1->f_5, uParam1->f_6, &(uParam1->f_3), &(uParam1->f_4));
}

void func_122(var uParam0, var uParam1)
{
	*uParam0 = _databinding_add_data_bool(uParam1, "Visible", 0);
	uParam0->f_1 = _databinding_add_data_hash(uParam1, "Txd", 0);
	uParam0->f_2 = _databinding_add_data_int(uParam1, "Top", 0);
	uParam0->f_3 = _databinding_add_data_int(uParam1, "Left", 0);
	uParam0->f_4 = _databinding_add_data_int(uParam1, "Width", 1);
	uParam0->f_5 = _databinding_add_data_int(uParam1, "Height", 1);
}

void func_123(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "Image", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		uVar4 = _databinding_add_data_container(uParam1, &cVar1);
		func_129((*uParam0)[iVar0], uVar4, iParam2, iVar0);
		iVar0++;
	}
}

bool func_124(int iParam0)
{
	while (iParam0 > 27)
	{
		iParam0 = (iParam0 - 28);
	}
	if (((((((((((((iParam0 == 0 || iParam0 == 2) || iParam0 == 3) || iParam0 == 5) || iParam0 == 8) || iParam0 == 12) || iParam0 == 14) || iParam0 == 15) || iParam0 == 17) || iParam0 == 20) || iParam0 == 21) || iParam0 == 23) || iParam0 == 25) || iParam0 == 26)
	{
		return true;
	}
	else if (((((((((((((iParam0 == 1 || iParam0 == 4) || iParam0 == 6) || iParam0 == 7) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11) || iParam0 == 13) || iParam0 == 16) || iParam0 == 18) || iParam0 == 19) || iParam0 == 22) || iParam0 == 24) || iParam0 == 27)
	{
		return false;
	}
	return true;
}

int func_125(int iParam0)
{
	while (iParam0 > 27)
	{
		iParam0 = (iParam0 - 28);
	}
	if (((iParam0 == 0 || iParam0 == 9) || iParam0 == 16) || iParam0 == 24)
	{
		return 0;
	}
	else if (((iParam0 == 1 || iParam0 == 11) || iParam0 == 20) || iParam0 == 26)
	{
		return 1;
	}
	else if (((iParam0 == 2 || iParam0 == 7) || iParam0 == 15) || iParam0 == 21)
	{
		return 2;
	}
	else if (((iParam0 == 3 || iParam0 == 13) || iParam0 == 19) || iParam0 == 23)
	{
		return 3;
	}
	else if (((iParam0 == 4 || iParam0 == 8) || iParam0 == 14) || iParam0 == 22)
	{
		return 4;
	}
	else if (((iParam0 == 5 || iParam0 == 12) || iParam0 == 18) || iParam0 == 27)
	{
		return 5;
	}
	else if (((iParam0 == 6 || iParam0 == 10) || iParam0 == 17) || iParam0 == 25)
	{
		return 6;
	}
	return 0;
}

int func_126(int iParam0)
{
	if (iParam0 == 0)
	{
		return -772642191;
	}
	else if (iParam0 == 1)
	{
		return -1601370201;
	}
	else if (iParam0 == 2)
	{
		return -1371626742;
	}
	else if (iParam0 == 3)
	{
		return 184245378;
	}
	else if (iParam0 == 4)
	{
		return 427424127;
	}
	else if (iParam0 == 5)
	{
		return 1385032614;
	}
	else if (iParam0 == 6)
	{
		return -187944924;
	}
	return -772642191;
}

void func_127(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		*uParam1 = 130;
		*uParam2 = 188;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = 93;
		*uParam2 = 118;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = 132;
		*uParam2 = 115;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = 174;
		*uParam2 = 160;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = 150;
		*uParam2 = 157;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = 151;
		*uParam2 = 116;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = 224;
		*uParam2 = 166;
	}
}

void func_128(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	while (iParam0 > 27)
	{
		iParam0 = (iParam0 - 28);
	}
	fVar0 = ((1000f / 2f) - IntToFloat(iParam2));
	fVar1 = ((1500f / 2f) - IntToFloat(iParam1));
	if (iParam0 == 0)
	{
		*uParam3 = round((fVar0 * 0.9f));
		*uParam4 = round((fVar1 * 0.6f));
	}
	else if (iParam0 == 1)
	{
		*uParam3 = round((fVar0 * 0.5f));
		*uParam4 = round((fVar1 * 0.2f));
	}
	else if (iParam0 == 2)
	{
		*uParam3 = round((fVar0 * 0.1f));
		*uParam4 = round((fVar1 * 0.4f));
	}
	else if (iParam0 == 3)
	{
		*uParam3 = round((fVar0 * 0.8f));
		*uParam4 = round((fVar1 * 0.3f));
	}
	else if (iParam0 == 4)
	{
		*uParam3 = round((fVar0 * 0.2f));
		*uParam4 = round((fVar1 * 0.9f));
	}
	else if (iParam0 == 5)
	{
		*uParam3 = round((fVar0 * 0.6f));
		*uParam4 = round((fVar1 * 0.1f));
	}
	else if (iParam0 == 6)
	{
		*uParam3 = round((fVar0 * 0.4f));
		*uParam4 = round((fVar1 * 0.7f));
	}
	else if (iParam0 == 7)
	{
		*uParam3 = round((fVar0 * 0.3f));
		*uParam4 = round((fVar1 * 0.8f));
	}
	else if (iParam0 == 8)
	{
		*uParam3 = round((fVar0 * 0.7f));
		*uParam4 = round((fVar1 * 0.5f));
	}
	else if (iParam0 == 9)
	{
		*uParam3 = round((fVar0 * 0.1f));
		*uParam4 = round((fVar1 * 0.2f));
	}
	else if (iParam0 == 10)
	{
		*uParam3 = round((fVar0 * 0.3f));
		*uParam4 = round((fVar1 * 0.9f));
	}
	else if (iParam0 == 11)
	{
		*uParam3 = round((fVar0 * 0.8f));
		*uParam4 = round((fVar1 * 0.5f));
	}
	else if (iParam0 == 12)
	{
		*uParam3 = round((fVar0 * 0.9f));
		*uParam4 = round((fVar1 * 0.7f));
	}
	else if (iParam0 == 13)
	{
		*uParam3 = round((fVar0 * 0.4f));
		*uParam4 = round((fVar1 * 0.6f));
	}
	else if (iParam0 == 14)
	{
		*uParam3 = round((fVar0 * 0.6f));
		*uParam4 = round((fVar1 * 0.3f));
	}
	else if (iParam0 == 15)
	{
		*uParam3 = round((fVar0 * 0.2f));
		*uParam4 = round((fVar1 * 0.1f));
	}
	else if (iParam0 == 16)
	{
		*uParam3 = round((fVar0 * 0.5f));
		*uParam4 = round((fVar1 * 0.4f));
	}
	else if (iParam0 == 17)
	{
		*uParam3 = round((fVar0 * 0.7f));
		*uParam4 = round((fVar1 * 0.8f));
	}
	else if (iParam0 == 18)
	{
		*uParam3 = round((fVar0 * 0.5f));
		*uParam4 = round((fVar1 * 0.1f));
	}
	else if (iParam0 == 19)
	{
		*uParam3 = round((fVar0 * 0.2f));
		*uParam4 = round((fVar1 * 0.4f));
	}
	else if (iParam0 == 20)
	{
		*uParam3 = round((fVar0 * 0.4f));
		*uParam4 = round((fVar1 * 0.7f));
	}
	else if (iParam0 == 21)
	{
		*uParam3 = round((fVar0 * 0.9f));
		*uParam4 = round((fVar1 * 0.2f));
	}
	else if (iParam0 == 22)
	{
		*uParam3 = round((fVar0 * 0.1f));
		*uParam4 = round((fVar1 * 0.5f));
	}
	else if (iParam0 == 23)
	{
		*uParam3 = round((fVar0 * 0.8f));
		*uParam4 = round((fVar1 * 0.6f));
	}
	else if (iParam0 == 24)
	{
		*uParam3 = round((fVar0 * 0.3f));
		*uParam4 = round((fVar1 * 0.3f));
	}
	else if (iParam0 == 25)
	{
		*uParam3 = round((fVar0 * 0.7f));
		*uParam4 = round((fVar1 * 0.9f));
	}
	else if (iParam0 == 26)
	{
		*uParam3 = round((fVar0 * 0.6f));
		*uParam4 = round((fVar1 * 0.7f));
	}
	else if (iParam0 == 27)
	{
		*uParam3 = round((fVar0 * 0.2f));
		*uParam4 = round((fVar1 * 0.6f));
	}
}

void func_129(var uParam0, var uParam1, int iParam2, int iParam3)
{
	*uParam0 = _databinding_add_data_bool(uParam1, "Visible", 0);
	uParam0->f_1 = _databinding_add_data_hash(uParam1, "Txd", 0);
	if (iParam2 == 1)
	{
		iVar0 = -1;
		iVar1 = 11;
		fVar2 = 1.2f;
		fVar3 = 1.1f;
		if (iParam3 > 1)
		{
			iVar1 = 13;
		}
	}
	else if (iParam2 == 2)
	{
		iVar0 = 2;
		iVar1 = 7;
		fVar2 = 1f;
		fVar3 = 1.1f;
		if (iParam3 > 0)
		{
			iVar1 = 9;
		}
	}
	else if (iParam2 == 3)
	{
		iVar0 = 5;
		iVar1 = 8;
		fVar2 = 1f;
		fVar3 = 1f;
		if (iParam3 > 1)
		{
			iVar1 = 7;
		}
	}
	else if (iParam2 == 4)
	{
		iVar0 = 0;
		iVar1 = 2;
		fVar2 = 0.9f;
		fVar3 = 0.9f;
		if (iParam3 > 2)
		{
			iVar1 = 5;
		}
	}
	else if (iParam2 == 5)
	{
		iVar0 = 2;
		iVar1 = 4;
		fVar2 = 1f;
		fVar3 = 0.9f;
		if (iParam3 > 1)
		{
			iVar1 = 5;
		}
	}
	else if (iParam2 == 6)
	{
		iVar0 = -5;
		iVar1 = 0;
		fVar2 = 1.1f;
		fVar3 = 1f;
		if (iParam3 > 3)
		{
			iVar1 = 1;
		}
	}
	else if (iParam2 == 7)
	{
		iVar0 = -3;
		iVar1 = 1;
		fVar2 = 1.1f;
		fVar3 = 1.1f;
		if (iParam3 > 1)
		{
			iVar1 = 0;
		}
	}
	else if (iParam2 == 8)
	{
		iVar0 = 1;
		iVar1 = -5;
		fVar2 = 0.9f;
		fVar3 = 0.9f;
		if (iParam3 > 3)
		{
			iVar1 = -3;
		}
	}
	else if (iParam2 == 9)
	{
		iVar0 = -2;
		iVar1 = 7;
		fVar2 = 1f;
		fVar3 = 1.1f;
		if (iParam3 > 2)
		{
			iVar1 = 5;
		}
	}
	else if (iParam2 == 10)
	{
		iVar0 = 7;
		iVar1 = 9;
		fVar2 = 1.1f;
		fVar3 = 1.1f;
		if (iParam3 > 2)
		{
			iVar1 = 10;
		}
	}
	else if (iParam2 == 11)
	{
		iVar0 = 4;
		iVar1 = -2;
		fVar2 = 0.9f;
		fVar3 = 0.9f;
		if (iParam3 > 3)
		{
			iVar1 = 1;
		}
	}
	else if (iParam2 == 12)
	{
		iVar0 = 0;
		iVar1 = 4;
		fVar2 = 1f;
		fVar3 = 0.9f;
		if (iParam3 > 1)
		{
			iVar1 = 5;
		}
	}
	else if (iParam2 == 13)
	{
		iVar0 = 2;
		iVar1 = 6;
		fVar2 = 1f;
		fVar3 = 1.1f;
		if (iParam3 > 4)
		{
			iVar1 = 5;
		}
	}
	else if (iParam2 == 14)
	{
		iVar0 = -2;
		iVar1 = -2;
		fVar2 = 1.1f;
		fVar3 = 1.1f;
		if (iParam3 > 1)
		{
			iVar1 = 0;
		}
	}
	else if (iParam2 == 15)
	{
		iVar0 = 0;
		iVar1 = 4;
		fVar2 = 0.9f;
		fVar3 = 1f;
		if (iParam3 > 3)
		{
			iVar1 = 3;
		}
	}
	else
	{
		iVar0 = -1;
		iVar1 = -2;
		fVar2 = 1f;
		fVar3 = 1f;
		if (iParam3 > 4)
		{
			iVar1 = 0;
		}
	}
	_databinding_add_data_int(uParam1, "Top", ((75 + iParam2 * 52) + iVar0));
	_databinding_add_data_int(uParam1, "Left", ((572 + iParam3 * 16) + iVar1));
	_databinding_add_data_int(uParam1, "Width", round((17f * fVar2)));
	_databinding_add_data_int(uParam1, "Height", round((30f * fVar3)));
}

