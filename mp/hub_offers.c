void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (func_1(&iLocal_19))
	{
		func_2(&iLocal_19);
	}
	func_3(&iLocal_19);
}

bool func_1(int iParam0)
{
	if (has_force_cleanup_occurred(4))
	{
		return false;
	}
	network_set_script_is_safe_for_network_game();
	func_4(iParam0, 0);
	if (!func_5(&(iParam0->f_18)))
	{
		return false;
	}
	func_6(&(iParam0->f_42));
	if (!func_7(&(iParam0->f_46)))
	{
		return false;
	}
	func_8(iParam0);
	return true;
}

void func_2(int* iParam0)
{
	bVar0 = false;
	while (!bVar0)
	{
		if (func_9(iParam0))
		{
			bVar0 = true;
		}
		func_10(iParam0);
		func_11(iParam0);
		func_12(&(iParam0->f_18), &(iParam0->f_42));
		func_13(&(iParam0->f_42));
		func_14(&(iParam0->f_46));
		wait(0);
	}
}

void func_3(int iParam0)
{
	func_15(&(iParam0->f_79));
	func_16(iParam0);
	func_17(&(iParam0->f_46));
	if (_0x9e4ef615e307fbbe())
	{
	}
	else
	{
		terminate_this_thread();
	}
}

void func_4(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_5(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_18(uParam0->f_2[iVar0]);
		iVar0++;
	}
	func_18(&(uParam0->f_18));
	return true;
}

void func_6(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
}

bool func_7(int* iParam0)
{
	func_19(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
	return true;
}

int func_8(int iParam0)
{
	iVar0 = 2;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_20(iVar2, 1);
		if (!func_21(iParam0, iVar1))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

bool func_9(var uParam0)
{
	if (_0x9e4ef615e307fbbe())
	{
		return true;
	}
	return false;
}

void func_10(int* iParam0)
{
	while (_event_manager_is_event_pending(-21855895))
	{
		if (!_event_manager_peek_event(-21855895, &uVar0))
		{
		}
		else
		{
			func_22(iParam0, &uVar0, 0);
			_event_manager_pop_event(-21855895);
		}
	}
	if (func_23(iParam0, 1))
	{
		Var4 = { func_24(iParam0) };
		if (func_25(iParam0, &Var4))
		{
			func_22(iParam0, &Var4, 1);
		}
		func_26(iParam0, 1, 0);
	}
}

void func_11(int* iParam0)
{
	iVar0 = _0x96fd694fe5be55dc(1821104826);
	iVar1 = func_27(iParam0);
	iVar0 = 669725655;
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_28(iParam0, iVar1);
		}
		func_4(iParam0, iVar0);
		func_29(iParam0, iVar0);
	}
	func_30(iParam0, iVar0);
}

void func_12(var uParam0, var uParam1)
{
	if (*uParam0)
	{
		if (!func_31(uParam1))
		{
			*uParam0 = 0;
		}
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = &uParam0->f_2[iVar1];
		if (!func_32(uParam0->f_2[iVar1]))
		{
		}
		else
		{
			if (!func_31(uParam1))
			{
				if (!func_33(uParam1, 35f, 1065353216))
				{
				}
				Jump @201; //curOff = 96
			}
			else
			{
				switch (func_34(uParam0->f_2[iVar1]))
				{
					case 0:
					case 2:
					case 4:
						break;
					case 3:
						break;
					default:
						iVar0++;
						Jump @201; //curOff = 156
						if (func_35(uParam1) < 1f)
						{
							iVar0++;
						}
						else
						{
							func_36(uParam1);
							func_37(uParam0, iVar2);
							*uParam0 = 1;
						}
						iVar1++;
						uParam0->f_1 = iVar0 > 0;
					}
				}
			}
		}

void func_13(var uParam0)
{
	if (!func_31(uParam0))
	{
		return;
	}
	if (uParam0->f_2 > 0f)
	{
		if (func_35(uParam0) > uParam0->f_2)
		{
			*uParam0 = 0;
			return;
		}
	}
	func_38(0);
	_uiprompt_disable_prompts_this_frame();
}

void func_14(int* iParam0)
{
	if (!func_39(*iParam0, 1))
	{
		return;
	}
	if (!_0xd9130842d7226045(&(iParam0->f_1), 0))
	{
		return;
	}
	play_sound_frontend(&(iParam0->f_17), &(iParam0->f_1), false, 0);
	func_40(iParam0, 1);
}

void func_15(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	func_41(uParam0, *uParam0, 0);
}

int func_16(int iParam0)
{
	iVar0 = 2;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_20(iVar2, 1);
		func_42(iParam0, iVar1);
		iVar2++;
	}
	return 1;
}

void func_17(int* iParam0)
{
	if (!is_string_null_or_empty(&(iParam0->f_1)))
	{
		_0x531a78d6bf27014b(&(iParam0->f_1));
	}
	func_40(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
}

void func_18(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
}

void func_19(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 669725655;
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

int func_21(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 669725655:
			return func_43(iParam0);
	}
	return 0;
}

void func_22(var uParam0, var uParam1, int iParam2)
{
	switch (*uParam1)
	{
		case -1740156697:
			func_44(uParam0, uParam1, iParam2);
			func_45(uParam0, uParam1);
			break;
		case -1203660660:
			func_46(uParam0, uParam1, iParam2);
			break;
	}
}

bool func_23(int* iParam0, int iParam1)
{
	return func_39(*iParam0, iParam1);
}

struct<4> func_24(var uParam0)
{
	return uParam0->f_14;
}

bool func_25(var uParam0, var uParam1)
{
	iVar0 = 1;
	if (func_47(uParam0) > 0)
	{
		if (uParam1->f_1 >= func_47(uParam0))
		{
			uParam1->f_1 = (func_47(uParam0) - 1);
		}
		if (!func_48(uParam0, uParam1->f_1, &(uParam1->f_3)))
		{
		}
		if (*uParam1 != -1740156697)
		{
			*uParam1 = -1740156697;
		}
		if (_databinding_is_data_id_valid(uParam1->f_3))
		{
			uParam1->f_2 = _databinding_read_data_int_from_parent(uParam1->f_3, func_49(57));
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_26(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_19(iParam0, iParam1);
	}
	else
	{
		func_40(iParam0, iParam1);
	}
}

var func_27(var uParam0)
{
	return uParam0->f_1;
}

void func_28(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 669725655:
			func_50(uParam0);
			break;
	}
}

void func_29(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 669725655:
			func_51(iParam0);
			break;
	}
}

void func_30(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 669725655:
			func_52(iParam0);
			break;
	}
}

bool func_31(var uParam0)
{
	return *uParam0;
}

bool func_32(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (uParam0->f_1 == 0)
	{
		return false;
	}
	return true;
}

bool func_33(var uParam0, float fParam1, int iParam2)
{
	if (func_31(uParam0))
	{
		return false;
	}
	*uParam0 = 1;
	uParam0->f_1 = func_53();
	uParam0->f_2 = fParam1;
	uParam0->f_3 = iParam2;
	return true;
}

int func_34(var uParam0)
{
	return func_54(*uParam0);
}

float func_35(var uParam0)
{
	if (!*uParam0)
	{
		return 0f;
	}
	return absf((func_53() - uParam0->f_1));
}

void func_36(var uParam0)
{
	if (func_35(uParam0) < uParam0->f_3)
	{
		uParam0->f_2 = absf((uParam0->f_3 - func_35(uParam0)));
	}
	else
	{
		*uParam0 = 0;
	}
}

int func_37(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&uParam0->f_2[iVar0] != iParam1)
		{
		}
		else
		{
			_copy_memory(&(uParam0->f_18), uParam0->f_2[iVar0], 3);
			func_18(uParam0->f_2[iVar0]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_38(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

bool func_39(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

void func_40(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_41(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 != iParam1)
	{
		return;
	}
	iVar0 = (Global_1296859->f_21 - uParam0->f_1);
	_0x3255d4d2082c6339(*uParam0, iVar0, uParam0->f_2, iParam2);
	func_55(uParam0);
}

void func_42(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 669725655:
			func_56(iParam0);
			break;
	}
}

int func_43(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_44(int* iParam0, var uParam1, int iParam2)
{
	if (iParam0->f_14.f_1 != uParam1->f_1)
	{
		func_58(&(iParam0->f_82));
	}
	switch (uParam1->f_2)
	{
		case -571766943:
		case 705463926:
			if (!func_59(iParam0, &(uParam1->f_3)))
			{
				func_60(iParam0);
			}
			break;
		case -1948187754:
		case -1585562139:
		case -797654126:
		case 678711754:
			if (!func_61(iParam0, &(uParam1->f_3)))
			{
				func_60(iParam0);
			}
			break;
		default:
			func_60(iParam0);
			break;
	}
}

void func_45(var uParam0, var uParam1)
{
	if (*uParam1 != -1740156697)
	{
		return;
	}
	_copy_memory(&(uParam0->f_14), uParam1, 4);
}

void func_46(var uParam0, var uParam1, int iParam2)
{
	switch (uParam1->f_2)
	{
		case -797654126:
		case -571766943:
			func_62();
			func_63();
			func_64();
			func_65();
			func_66(-1062814807);
			if (func_67())
			{
				func_68(1);
				func_69(1, 1);
			}
			else
			{
				func_69(0, 0);
			}
			break;
		case -1948187754:
			if (!func_70(uParam0, &(uParam1->f_3)))
			{
			}
			break;
		case 678711754:
			func_71();
			break;
	}
}

int func_47(int* iParam0)
{
	return _databinding_get_array_count(&(iParam0->f_2[1]));
}

bool func_48(int* iParam0, int iParam1, var uParam2)
{
	iVar0 = _databinding_get_array_count(&(iParam0->f_2[1]));
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	*uParam2 = _databinding_get_item_context_by_index(&(iParam0->f_2[1]), iParam1);
	return true;
}

char* func_49(int iParam0)
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

void func_50(int iParam0)
{
	func_58(&(iParam0->f_82));
	func_72(-712383481);
}

int func_51(int* iParam0)
{
	func_73(iParam0);
	func_26(iParam0, 0, 1);
	func_60(iParam0);
	func_74(&(iParam0->f_84), 4000);
	func_75(-712383481);
	return 1;
}

void func_52(int* iParam0)
{
	if (func_76(&(iParam0->f_84)))
	{
		if (func_77(&(iParam0->f_18)))
		{
		}
		else
		{
			func_26(iParam0, 0, 1);
		}
	}
	func_78(iParam0);
	if (func_79(&(iParam0->f_82)))
	{
		func_26(iParam0, 0, 1);
	}
	if (func_23(iParam0, 0))
	{
		func_80(iParam0);
		func_26(iParam0, 0, 0);
	}
}

float func_53()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_54(int iParam0)
{
	iVar0 = func_81(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_82(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_82(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

void func_55(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_56(int iParam0)
{
	func_50(iParam0);
}

bool func_57(int iParam0)
{
	iParam0->f_2[0] = _0xd7db94ab78e8ebe4("", -1505966001);
	iParam0->f_2[1] = _databinding_add_ui_item_list_by_hash(&(iParam0->f_2[0]), -849224310);
	iParam0->f_2[2] = _databinding_add_data_string_by_hash(&(iParam0->f_2[0]), 616081382, "");
	iParam0->f_2[3] = _databinding_add_data_bool_by_hash(&(iParam0->f_2[0]), -781821188, 0);
	iParam0->f_2[4] = _databinding_add_data_int_by_hash(&(iParam0->f_2[0]), -3675574, 0);
	iParam0->f_2[5] = _databinding_add_data_int_by_hash(&(iParam0->f_2[0]), -536627617, 0);
	iParam0->f_2[6] = _databinding_add_data_bool_by_hash(&(iParam0->f_2[0]), 1527945487, 1);
	iParam0->f_2[7] = _databinding_add_data_string_by_hash(&(iParam0->f_2[0]), -242834141, "");
	iParam0->f_2[8] = _databinding_add_data_int_by_hash(&(iParam0->f_2[0]), 1959966745, 0);
	iParam0->f_2[9] = _databinding_add_data_int_by_hash(&(iParam0->f_2[0]), -1952794871, 0);
	iParam0->f_2[10] = _databinding_add_data_int_by_hash(&(iParam0->f_2[0]), -129582355, 0);
	return true;
}

int func_58(var uParam0)
{
	if (!func_83(*uParam0, 0))
	{
		return 0;
	}
	if (!func_84(*uParam0))
	{
		return 1;
	}
	func_85(*uParam0);
	*uParam0 = 0;
	uParam0->f_1 = 1;
	return 1;
}

bool func_59(var uParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	func_86(uParam0, uParam1);
	if (!func_87(uParam1, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	if (!func_88(Var0, &Var4, 0, 0, -1))
	{
	}
	func_89(Var4.f_4, uParam1);
	func_90(&(uParam0->f_82), Var4.f_4);
	iVar19 = 0;
	if (func_91(&Var0))
	{
		sVar18 = func_92(1);
	}
	else if (func_93(Var0))
	{
		sVar18 = func_94(Var0);
		iVar19 = 1;
	}
	else
	{
		sVar18 = func_94(Var0);
	}
	func_95(uParam0, iVar19);
	func_96(uParam0, sVar18);
	return true;
}

void func_60(int* iParam0)
{
	_databinding_write_data_string(&(iParam0->f_2[2]), "");
	func_95(iParam0, 0);
}

bool func_61(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	func_86(iParam0, uParam1);
	if (!func_87(uParam1, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	if (!func_88(Var0, &Var4, 0, 0, -1))
	{
		return false;
	}
	func_89(Var4.f_4, uParam1);
	func_90(&(iParam0->f_82), Var4.f_4);
	iVar19 = 0;
	if (func_97(Var4.f_4))
	{
		sVar18 = func_92(9);
	}
	else if (func_91(&Var0))
	{
		sVar18 = func_92(0);
	}
	else if (func_93(Var0))
	{
		sVar18 = func_94(Var0);
		iVar19 = 1;
	}
	else
	{
		sVar18 = func_94(Var0);
	}
	func_95(iParam0, iVar19);
	func_96(iParam0, sVar18);
	return true;
}

int func_62()
{
	if (!_is_app_active(29649618) && !_is_app_running(29649618))
	{
		return 0;
	}
	_close_app_by_hash(29649618);
	return 1;
}

void func_63()
{
	func_98(0);
}

void func_64()
{
	if (!_is_app_active(1821104826) && !_is_app_running(1821104826))
	{
		return;
	}
	_close_app_by_hash(1821104826);
}

void func_65()
{
	if (!_is_app_active(1890312850) && !_is_app_running(1890312850))
	{
		return;
	}
	_close_app_by_hash(1890312850);
}

void func_66(int iParam0)
{
	Global_1960148->f_2 = iParam0;
}

bool func_67()
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

void func_68(bool bParam0)
{
	if (func_67())
	{
		Global_1958008 = 1;
	}
	if (func_99(-92416669))
	{
	}
	if (bParam0 && (Global_1940258->f_38 == -1016714371 || Global_1940258->f_38 == 332793555))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		Global_1940258->f_38 = -1569615261;
	}
}

void func_69(bool bParam0, bool bParam1)
{
	if (!func_100())
	{
		func_101(1);
	}
	func_102(1);
	if (bParam0 || bParam1)
	{
		Global_1051439->f_3629 = 0;
		func_102(8);
		if (bParam1)
		{
			func_102(16);
		}
	}
	func_103(&(Global_1051439->f_3631));
}

bool func_70(var uParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	if (!func_87(uParam1, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	if (!func_88(Var0, &Var4, 1, 0, -1))
	{
		return false;
	}
	if (!func_83(Var4.f_4, 0))
	{
		return false;
	}
	if (!func_104(Var4.f_4))
	{
		return false;
	}
	if (!func_105(Var4.f_4))
	{
		return false;
	}
	if (!func_106(uParam0, Var4.f_4))
	{
		return false;
	}
	return true;
}

void func_71()
{
	if (!_request_uiapp_transition_by_hash(1821104826, -1633545653))
	{
	}
}

void func_72(int iParam0)
{
	if (Global_1960148->f_5 == -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1960148->f_5 == -1)
	{
		return;
	}
	if (Global_1960148->f_5 != iParam0)
	{
	}
	iVar0 = absi((Global_1296859->f_21 - Global_1960148->f_3));
	_0x25cc50ec1a6f3a96(Global_1960148->f_4, Global_1960148->f_5, iVar0, Global_1960148->f_2);
	Global_1960148->f_1 = 0;
	func_107(Global_1960148);
	func_108(iParam0, 0);
}

int func_73(var uParam0)
{
	if (!func_109(uParam0->f_2[1]))
	{
		return 0;
	}
	return 1;
}

void func_74(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_75(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1960148->f_5 != -1 && Global_1960148->f_5 != iParam0)
	{
		func_72(Global_1960148->f_5);
	}
	Global_1960148->f_3 = Global_1296859->f_21;
	Global_1960148->f_5 = iParam0;
	Global_1960148->f_4 = &Global_1960148;
}

bool func_76(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
		if (func_110(uParam0))
		{
			func_103(uParam0);
		}
		return false;
	}
	if (!func_110(uParam0))
	{
		func_111(uParam0, 1);
		return true;
	}
	if (!func_112(uParam0) >= uParam0->f_3)
	{
		return false;
	}
	func_113(uParam0);
	return true;
}

bool func_77(var uParam0)
{
	return uParam0->f_1;
}

void func_78(int* iParam0)
{
	if (!func_114(&(iParam0->f_18), &(iParam0->f_42)))
	{
		return;
	}
	if (func_115(&(iParam0->f_18)) == -1948187754)
	{
		func_116(iParam0, &vVar0);
		if (!func_117(vVar0.x, &uVar3))
		{
		}
		_0x621d719c4836292b(&uVar3, func_118(vVar0.z), vVar0.z, vVar0.y, vVar0.z, 1821104826);
		if (!func_119(iParam0, 0))
		{
		}
	}
	func_26(iParam0, 0, 1);
	func_26(iParam0, 1, 1);
}

bool func_79(var uParam0)
{
	if (uParam0->f_1)
	{
		uParam0->f_1 = 0;
		return true;
	}
	return false;
}

void func_80(int* iParam0)
{
	iVar1 = _0x97a3646645727f42(&iVar0);
	Var2.f_9 = -1591664384;
	iVar17 = 0;
	iVar18 = 0;
	iVar19 = 0;
	iVar16 = 0;
	while (iVar16 < iVar0)
	{
		if (func_120(iVar17, 200))
		{
		}
		else
		{
			if (!_0x82fa24c3d3fcd9b7(iVar1, iVar16, &Var2))
			{
			}
			else
			{
				iVar18 = Var2.f_11;
				if (!func_121(&Var2))
				{
				}
				else if (!func_122(Var2.f_9))
				{
				}
				else
				{
					iVar19 = 0;
					while (iVar19 < iVar18)
					{
						if (func_120(iVar17, 200))
						{
						}
						else
						{
							if (!func_123(iParam0, &Var2, iVar17))
							{
							}
							else
							{
								iVar17++;
							}
							iVar19++;
						}
					}
				}
			}
			iVar16++;
		}
	}
	_0x42a2f33a1942e865(iVar1);
	if (iVar17 == 0)
	{
		func_124(iParam0);
	}
	if (func_47(iParam0) > iVar17)
	{
		func_125(iParam0, iVar17);
	}
}

int func_81(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			return Global_1293346->f_20.f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_82(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_126(iParam0, iParam1, iParam2, iParam3);
}

bool func_83(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_84(int iParam0)
{
	return _unlock_is_new(func_127(iParam0));
}

void func_85(int iParam0)
{
	_unlock_set_new(func_127(iParam0), false);
}

int func_86(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return 0;
	}
	func_128(iParam0, _0x6329c34bee5bff4b(*uParam1, -242834141));
	func_129(iParam0, _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, 1959966745));
	func_130(iParam0, _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, -1952794871));
	func_131(iParam0, _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, -129582355));
	func_132(iParam0, _databinding_read_data_bool_from_parent_by_hash(*uParam1, 1527945487));
	func_133(iParam0, _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, 440050042), _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, 1058850005));
	return 1;
}

bool func_87(var uParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	*uParam1 = _databinding_read_data_int_from_parent_by_hash(*uParam0, -376630643);
	uParam1->f_1 = _databinding_read_data_int_from_parent_by_hash(*uParam0, -539230421);
	uParam1->f_2 = _databinding_read_data_int_from_parent_by_hash(*uParam0, -1019689499);
	uParam1->f_3 = _databinding_read_data_int_from_parent_by_hash(*uParam0, -1283381642);
	return true;
}

bool func_88(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_134(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_89(int iParam0, var uParam1)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	_0x37aa282163b0d2c4(iParam0, *uParam1);
	return 1;
}

int func_90(var uParam0, int iParam1)
{
	if (!func_83(iParam1, 0))
	{
		return 0;
	}
	if (!func_84(iParam1))
	{
		return 1;
	}
	*uParam0 = iParam1;
	return 1;
}

bool func_91(var uParam0)
{
	if (!func_121(uParam0))
	{
		return false;
	}
	return func_135(uParam0);
}

char* func_92(int iParam0)
{
	sVar0 = func_136(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return "";
	}
	return _create_var_string(2, sVar0);
}

bool func_93(struct<4> Param0)
{
	if (!func_121(&Param0))
	{
		return false;
	}
	if (func_135(&Param0))
	{
		return false;
	}
	return func_138(func_137(Param0));
}

char* func_94(struct<4> Param0)
{
	if (!func_121(&Param0))
	{
		return "";
	}
	if (func_137(Param0) <= 0)
	{
		return "";
	}
	vVar0 = { func_139(func_137(Param0), 1) };
	vVar3 = { func_140(func_137(Param0), 1) };
	vVar6 = { func_141(func_137(Param0)) };
	return _create_var_string(170, func_136(2), &vVar0, &vVar3, &vVar6);
}

void func_95(int* iParam0, int iParam1)
{
	_databinding_write_data_bool(&(iParam0->f_2[3]), iParam1);
}

void func_96(int* iParam0, char* sParam1)
{
	_databinding_write_data_string(&(iParam0->f_2[2]), sParam1);
}

bool func_97(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (!func_104(iParam0))
	{
		return false;
	}
	if (!func_142(iParam0, get_hash_key("CI_TAG_OFFER_MYSTERY")))
	{
		return false;
	}
	iVar0 = func_143(iParam0, 1);
	if (iVar0 != 0)
	{
		return false;
	}
	return true;
}

void func_98(bool bParam0)
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

bool func_99(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1939493)[iVar0]->f_10)))
		{
			func_144(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_100()
{
	return func_145(4);
}

void func_101(bool bParam0)
{
	if (bParam0)
	{
		func_102(4);
	}
	else
	{
		func_146(4);
	}
}

void func_102(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 || iParam0);
}

void func_103(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_104(int iParam0)
{
	return func_147(iParam0) == 1946043663;
}

bool func_105(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (!func_104(iParam0))
	{
		return false;
	}
	if (func_97(iParam0))
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, 920823793, -153848696))
	{
		iVar0 = func_143(iParam0, 1);
		if (!func_148(iVar0))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_106(var uParam0, int iParam1)
{
	if (!func_83(iParam1, 0))
	{
		return false;
	}
	if (!func_104(iParam1))
	{
		return false;
	}
	iVar0 = func_143(iParam1, 1);
	if (!_item_database_is_buy_award_key_valid(iVar0))
	{
		return false;
	}
	if (!func_148(iVar0))
	{
		return false;
	}
	if (func_149(iVar0))
	{
		return false;
	}
	Var4 = -1;
	Var4.f_1 = -1;
	if (!func_151(&Var4, iVar0, 1, 1, 0, 0, func_150(iVar0, 0, 1, -1, 1), -1, 0))
	{
		return false;
	}
	if (!func_152(&(uParam0->f_18), Var4, -1948187754, iParam1))
	{
		return false;
	}
	vVar1.x = Var4;
	vVar1.f_2 = iParam1;
	vVar1.f_1 = func_153(iParam1);
	_0xca9e42f437625a85(Var4, 1821104826, 1821104826);
	if (!func_154(&Var4))
	{
		return false;
	}
	func_155(uParam0, &vVar1);
	return true;
}

void func_107(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_2 = 1894345440;
}

void func_108(int iParam0, bool bParam1)
{
	if (Global_1960148->f_1)
	{
		return;
	}
	Global_1960148 = iParam0;
	if (bParam1)
	{
		Global_1960148->f_1 = 1;
	}
}

bool func_109(var uParam0)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	iVar1 = _databinding_get_array_count(*uParam0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		uVar0 = _databinding_get_item_context_by_index(*uParam0, iVar2);
		if (!_databinding_is_data_id_valid(uVar0))
		{
		}
		else
		{
			_databinding_remove_data_entry(uVar0);
		}
		iVar2++;
	}
	_databinding_clear_binding_array(*uParam0);
	return true;
}

bool func_110(var uParam0)
{
	return func_156(*uParam0, 1);
}

void func_111(var uParam0, bool bParam1)
{
	if (bParam1 || !func_110(uParam0))
	{
		func_113(uParam0);
	}
}

int func_112(var uParam0)
{
	if (!func_110(uParam0))
	{
		return 0;
	}
	if (func_157(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_158() - round((uParam0->f_1 * 1000f)));
}

void func_113(var uParam0)
{
	func_159(uParam0, 0f);
}

bool func_114(var uParam0, var uParam1)
{
	if (*uParam0 && func_31(uParam1))
	{
		return false;
	}
	return *uParam0;
}

int func_115(var uParam0)
{
	return uParam0->f_18.f_1;
}

void func_116(var uParam0, var uParam1)
{
	_copy_memory(uParam1, &(uParam0->f_39), 3);
}

bool func_117(var uParam0, var uParam1)
{
	if (_0xf184b3ece36219cf(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

int func_118(int iParam0)
{
	return func_160(iParam0);
}

bool func_119(var uParam0, int iParam1)
{
	if (!func_161(iParam1, &cVar0, &cVar16))
	{
		return false;
	}
	if (!func_162(&(uParam0->f_46), &cVar16, &cVar0))
	{
		return false;
	}
	return true;
}

bool func_120(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam0 <= iParam1)
	{
		return false;
	}
	return true;
}

bool func_121(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_122(int iParam0)
{
	if (iParam0 == 1045621973)
	{
		return false;
	}
	return true;
}

bool func_123(int* iParam0, var uParam1, int iParam2)
{
	if (!func_121(uParam1))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	func_88(*uParam1, &Var0, 1, 0, -1);
	if (!func_83(Var0.f_4, 0))
	{
		return false;
	}
	if (func_163(Var0.f_4) == 785047730)
	{
		return false;
	}
	Var14 = 1;
	Var14.f_1 = 1;
	Var14.f_2 = 1105014447;
	Var14.f_4 = -1;
	Var14.f_5 = -1;
	Var14.f_6 = -1;
	Var14.f_10 = -1;
	Var14.f_11 = -1;
	Var14.f_12 = -1;
	if (func_164(Var0.f_4))
	{
		if (!func_165(uParam1, &Var14))
		{
			return false;
		}
	}
	else if (func_104(Var0.f_4))
	{
		if (!func_166(uParam1, &Var14))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (!func_167(iParam0, &Var14, iParam2))
	{
		return false;
	}
	return true;
}

void func_124(int* iParam0)
{
	func_168(&Var0);
	func_128(iParam0, _create_var_string(2, &Var0));
	func_129(iParam0, get_hash_key(&(Var0.f_16)));
	func_130(iParam0, 0);
	func_131(iParam0, 0);
	func_132(iParam0, 0);
	func_133(iParam0, Var0.f_34, Var0.f_35);
}

int func_125(int* iParam0, int iParam1)
{
	if (!func_169(iParam0->f_2[1], iParam1))
	{
		return 0;
	}
	return 1;
}

void func_126(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_170(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_127(int iParam0)
{
	return iParam0;
}

void func_128(int* iParam0, char* sParam1)
{
	_databinding_write_data_string(&(iParam0->f_2[7]), sParam1);
}

void func_129(int* iParam0, int iParam1)
{
	_databinding_write_data_int(&(iParam0->f_2[8]), iParam1);
}

void func_130(int* iParam0, int iParam1)
{
	_databinding_write_data_int(&(iParam0->f_2[9]), iParam1);
}

void func_131(int* iParam0, int iParam1)
{
	_databinding_write_data_int(&(iParam0->f_2[10]), iParam1);
}

void func_132(int* iParam0, int iParam1)
{
	_databinding_write_data_bool(&(iParam0->f_2[6]), iParam1);
}

void func_133(int* iParam0, int iParam1, int iParam2)
{
	_databinding_write_data_int(&(iParam0->f_2[4]), iParam1);
	_databinding_write_data_int(&(iParam0->f_2[5]), iParam2);
}

bool func_134(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_171(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_135(var uParam0)
{
	if (!func_121(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

char* func_136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HO_TOOLTIP_REWARD_EXPIRED";
		case 1:
			return "HO_TOOLTIP_OFFER_EXPIRED";
		case 2:
			return "HO_TOOLTIP_OFFER_AVAILABLE_DATE";
		case 3:
			return "HO_PROMPT_BROWSE_CATALOGUE";
		case 4:
			return "HO_PROMPT_REDEEM";
		case 5:
			return "HO_PROMPT_OWNED";
		case 6:
			return "HO_TOOLTIP_OFFER_FOR_HORSES";
		case 7:
			return "HO_ITEM_MYSTERY_REWARD_NAME";
		case 8:
			return "HO_ITEM_MYSTERY_REWARD_DESCRIPTION";
		case 9:
			return "HO_TOOLTIP_ITEM_MYSTERY_REWARD_NOT_REVEALED";
		default:
			break;
	}
	return "";
}

int func_137(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_121(&uParam0))
	{
		return 0;
	}
	return _0x4a606c17276e1bcc(&uParam0);
}

bool func_138(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (get_cloud_time_as_int() + func_172()) > iParam0;
}

Vector3 func_139(int iParam0, bool bParam1)
{
	_get_date_and_time_from_unix_epoch(iParam0, &vVar0);
	if (bParam1)
	{
		StringCopy(&cVar6, "SR_DAY_", 24);
		StringIntConCat(&cVar6, vVar0.z, 24);
		StringCopy(&cVar6, _create_var_string(2, &cVar6), 24);
		return cVar6;
	}
	StringCopy(&cVar6, func_173(vVar0.z), 24);
	return cVar6;
}

Vector3 func_140(int iParam0, bool bParam1)
{
	_get_date_and_time_from_unix_epoch(iParam0, &Var0);
	if (bParam1)
	{
		StringCopy(&cVar6, "MONTH_", 24);
		StringIntConCat(&cVar6, Var0.f_1, 24);
		StringCopy(&cVar6, _create_var_string(2, &cVar6), 24);
		return cVar6;
	}
	StringCopy(&cVar6, func_173(Var0.f_1), 24);
	return cVar6;
}

Vector3 func_141(int iParam0)
{
	_get_date_and_time_from_unix_epoch(iParam0, &iVar0);
	StringCopy(&cVar6, func_173(iVar0), 24);
	return cVar6;
}

bool func_142(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return func_175(func_174(iParam0), iParam1);
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

int func_143(int iParam0, bool bParam1)
{
	if (!func_83(iParam0, 0))
	{
		return func_176(func_174(iParam0), bParam1);
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

void func_144(int iParam0)
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

bool func_145(int iParam0)
{
	return (Global_1051439->f_3628 && iParam0) != 0;
}

void func_146(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 - (Global_1051439->f_3628 && iParam0));
}

int func_147(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_148(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_149(int iParam0)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_2011)
	{
		if (Global_1293346->f_2011.f_1[iVar0]->f_4 == iParam0 && Global_1293346->f_2011.f_1[iVar0]->f_5 == 0)
		{
			return _0xe10f2d7715ababec(Global_1293346->f_2011.f_1[iVar0]);
		}
		iVar0++;
	}
	return false;
}

int func_150(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	bVar1 = func_178(iParam3, 2);
	bVar2 = func_179(iParam0, -570078785, bVar1);
	bVar3 = func_179(iParam0, -915411861, bVar1);
	if (func_179(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_180(iParam0, &iVar0) || func_181(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_182())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_183(15) && func_179(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

bool func_151(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_184(iParam0, iParam1, &Var0, iParam4, iParam6, iParam7, bParam8))
	{
		return false;
	}
	func_185(Var0);
	return true;
}

bool func_152(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = 4;
	while (iVar0 >= 1)
	{
		_copy_memory(uParam0->f_2[iVar0], uParam0->f_2[(iVar0 - 1)], 3);
		iVar0 = (iVar0 + -1);
	}
	uParam0->f_2[0] = iParam1;
	uParam0->f_2[0]->f_1 = iParam2;
	uParam0->f_2[0]->f_2 = iParam3;
	return true;
}

int func_153(int iParam0)
{
	iVar0 = -1;
	if (!func_186(iParam0))
	{
		return iVar0;
	}
	iVar0 = 74330131;
	Var1 = { func_187(iParam0, 0, 0) };
	Var6 = { func_188(iParam0, Var1, Var1.f_4, 0) };
	if (!func_121(&Var6))
	{
		return -1;
	}
	if (func_93(Var6))
	{
		iVar0 = 90473367;
	}
	return iVar0;
}

bool func_154(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_82(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_82(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_82(*iParam0, 2, 0, 0);
		return false;
	}
	func_82(*iParam0, 1, 0, 0);
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

void func_155(var uParam0, var uParam1)
{
	_copy_memory(&(uParam0->f_39), uParam1, 3);
}

bool func_156(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_157(var uParam0)
{
	return func_156(*uParam0, 2);
}

int func_158()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_159(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_53() - fParam1);
	func_189(uParam0, 1);
	func_190(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_160(int iParam0)
{
	if (!func_186(iParam0))
	{
		return 0;
	}
	if (func_164(iParam0))
	{
		return -1957466003;
	}
	if (func_142(iParam0, -1457263561))
	{
		return -84670860;
	}
	if (func_142(iParam0, -732976331))
	{
		return -700121520;
	}
	if (func_142(iParam0, 1495098826))
	{
		return 917298505;
	}
	if (func_142(iParam0, 2088554948))
	{
		return -1638586319;
	}
	return 176863985;
}

bool func_161(int iParam0, char* sParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "RDRO_Offer_Menu_Sounds", 128);
			StringCopy(sParam2, "offer_redeem", 128);
			return true;
		default:
			break;
	}
	return false;
}

bool func_162(int* iParam0, char* sParam1, char* sParam2)
{
	if (!func_39(*iParam0, 0))
	{
		return false;
	}
	if (func_39(*iParam0, 1))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	func_19(iParam0, 1);
	StringCopy(&(iParam0->f_1), sParam2, 128);
	StringCopy(&(iParam0->f_17), sParam1, 128);
	_0x0f2a2175734926d8(&(iParam0->f_17), &(iParam0->f_1));
	return true;
}

int func_163(var uParam0)
{
	if (_0x8870895ba5ed9385(uParam0, -153848696, &uVar0) > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

bool func_164(int iParam0)
{
	return func_147(iParam0) == -126813555;
}

bool func_165(var uParam0, var uParam1)
{
	if (!func_191(uParam0, &uVar0))
	{
		return false;
	}
	if (!func_192(uParam0, uParam1))
	{
		return false;
	}
	uParam1->f_22 = get_hash_key(func_193(&uVar0));
	if (func_194(&uVar0))
	{
		uParam1->f_5 = -571766943;
	}
	else
	{
		uParam1->f_5 = 705463926;
	}
	if (func_194(&uVar0))
	{
		uParam1->f_9 = 1;
		uParam1->f_8 = uParam1->f_24;
		StringCopy(&(uParam1->f_27), func_92(3), 128);
	}
	return true;
}

bool func_166(var uParam0, var uParam1)
{
	if (!func_191(uParam0, &iVar0))
	{
		return false;
	}
	if (!func_192(uParam0, uParam1))
	{
		return false;
	}
	if (func_195(iVar0))
	{
		if (!func_196(iVar0, &(uParam1->f_23)))
		{
		}
	}
	if (func_97(iVar0))
	{
		uParam1->f_5 = -1585562139;
	}
	else if (!func_105(iVar0))
	{
		uParam1->f_5 = -797654126;
	}
	else if (func_197(iVar0))
	{
		uParam1->f_5 = 678711754;
	}
	else
	{
		uParam1->f_5 = -1948187754;
	}
	uParam1->f_22 = get_hash_key(func_198(&iVar0));
	if (func_97(iVar0))
	{
		func_199(&Var1);
		uParam1->f_20 = _create_var_string(2, &Var1);
		uParam1->f_21 = get_hash_key(&(Var1.f_16));
		uParam1->f_16 = Var1.f_32;
		uParam1->f_17 = Var1.f_33;
		uParam1->f_18 = Var1.f_34;
		uParam1->f_19 = Var1.f_35;
		uParam1->f_22 = 0;
	}
	if (!uParam1->f_24)
	{
	}
	else if (func_195(iVar0))
	{
	}
	else if (!func_105(iVar0))
	{
	}
	else
	{
		uParam1->f_8 = 1;
	}
	if (func_105(iVar0))
	{
		if (!func_200(iVar0))
		{
			uParam1->f_9 = 1;
			uParam1->f_8 = 0;
			StringCopy(&(uParam1->f_27), func_92(5), 128);
		}
		else
		{
			uParam1->f_9 = 1;
			StringCopy(&(uParam1->f_27), func_92(4), 128);
		}
	}
	else if (func_194(&iVar0))
	{
		uParam1->f_9 = 1;
		uParam1->f_8 = 1;
		StringCopy(&(uParam1->f_27), func_92(3), 128);
	}
	return true;
}

bool func_167(int* iParam0, var uParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(&(iParam0->f_2[1])))
	{
		return false;
	}
	if (iParam2 < -1)
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(&(iParam0->f_2[1]));
	if (iParam2 == -1 || iParam2 >= iVar0)
	{
		StringCopy(&cVar1, "coupon_item_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		Var9.f_18 = 16;
		if (!func_201(&Var9, iParam0->f_2[1], cVar1, uParam1))
		{
			return false;
		}
		_databinding_insert_ui_item_to_list_from_context_string_alias(&(iParam0->f_2[1]), -1, "coupon_entry", Var9);
	}
	else
	{
		if (!func_48(iParam0, iParam2, &uVar44))
		{
			return false;
		}
		if (!func_202(&uVar44, uParam1))
		{
			return false;
		}
	}
	return true;
}

void func_168(char* sParam0)
{
	StringCopy(sParam0, "COUPON_OFFER_NO_VALUE", 128);
	StringCopy(&(sParam0->f_16), "COUPON_OFFER_NO_VALUE_DESC", 128);
	sParam0->f_34 = get_hash_key("COUPON_OFFER_NO_VALUE");
	sParam0->f_35 = get_hash_key("mp_hub_coupons");
	sParam0->f_32 = get_hash_key("COUPON_OFFER_NO_VALUE");
	sParam0->f_33 = get_hash_key("mp_hub_coupons");
}

bool func_169(var uParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(*uParam0);
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	iVar1 = iVar0;
	while (iVar1 >= iParam1)
	{
		_0x6318fb3be37e11b3(*uParam0, iParam1);
		iVar1 = (iVar1 + -1);
	}
	return true;
}

void func_170(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_203(&(uParam0->f_4));
}

int func_171(bool bParam0)
{
	if (func_204() == -1)
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

int func_172()
{
	if (!network_does_tunable_exist(-475019843, 135369362))
	{
		return 604800;
	}
	iVar0 = 604800;
	if (!network_access_tunable_int(-475019843, 135369362, &iVar0))
	{
		return 604800;
	}
	return iVar0;
}

char* func_173(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

int func_174(int iParam0)
{
	return iParam0;
}

int func_175(int iParam0, int iParam1)
{
	if (!func_205(iParam0, 2))
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

int func_176(int iParam0, bool bParam1)
{
	if (!func_205(iParam0, 2))
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

bool func_177(int iParam0)
{
	return iParam0 != 0;
}

bool func_178(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_179(int iParam0, int iParam1, bool bParam2)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_206(iParam0, iParam1);
	}
	return true;
}

bool func_180(int iParam0, int iParam1)
{
	*iParam1 = func_207(iParam0, 1);
	return *iParam1 != 0;
}

bool func_181(int iParam0, int iParam1)
{
	*iParam1 = func_208(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_182()
{
	return Global_1915715->f_22477;
}

bool func_183(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_209(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_184(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_210(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_150(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_211(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_212(iParam0, *uParam2, 541670136, iParam3))
	{
		return false;
	}
	if (_0x9adee485726025d4(iParam1) != 0)
	{
		if (Global_1293346->f_20.f_422 != -1)
		{
		}
		Global_1293346->f_20.f_422.f_1 = iParam1;
		Global_1293346->f_20.f_422 = iParam0->f_1;
	}
	return true;
}

void func_185(struct<17> Param0)
{
	iVar0 = Param0.f_16;
	iVar1 = Param0.f_13;
	if (func_213(iVar0, 773203532, iVar1, 0, 1) > 0)
	{
		func_214("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

bool func_186(int iParam0)
{
	if (func_147(iParam0) == -126813555 || func_147(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

struct<5> func_187(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_215(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_216(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_188(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_217(bParam1) };
			if (bParam2 && func_218(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_219(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_219(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_220(iParam0, &Var6, 1728382685))
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
			Var0 = { func_221(bParam1) };
			switch (func_147(iParam0))
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
			if (func_222(iParam0, -1823706425))
			{
				Var0 = { func_188(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_222(iParam0, -1483207246))
			{
				Var0 = { func_188(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_188(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_222(iParam0, -1653629781))
			{
				Var0 = { func_188(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_88(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_222(iParam0, -1653629781))
			{
				Var0 = { func_188(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_188(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_83(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_171(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_189(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_190(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_191(var uParam0, int iParam1)
{
	*iParam1 = 0;
	if (!func_121(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_88(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_83(Var0.f_4, 0))
	{
		return false;
	}
	if (!func_186(Var0.f_4))
	{
		return false;
	}
	*iParam1 = Var0.f_4;
	return true;
}

bool func_192(var uParam0, var uParam1)
{
	if (!func_191(uParam0, &iVar0))
	{
		return false;
	}
	uParam1->f_4 = -21855895;
	uParam1->f_43 = { *uParam0 };
	if (func_91(uParam0))
	{
		uParam1->f_24 = 0;
	}
	else
	{
		uParam1->f_24 = 1;
		if (func_223(uParam0))
		{
			uParam1->f_25 = 1;
		}
		else if (func_93(*uParam0))
		{
			uParam1->f_26 = 1;
		}
	}
	uParam1->f_20 = func_224(&iVar0);
	uParam1->f_21 = func_225(iVar0);
	Var1.f_8 = 10;
	Var1.f_8.f_1.f_4 = 15;
	Var1.f_8.f_1.f_36 = 10;
	Var1.f_8.f_1.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_480 = 10;
	Var1.f_480.f_1.f_4 = 10;
	Var1.f_480.f_1.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_732.f_2 = 5;
	Var1.f_732.f_18 = 8;
	if (_0x2a610bee7d341cc4(iVar0, &Var1))
	{
		iVar768 = 0;
		while (iLocal_772 < 5)
		{
			switch (Var1.f_732.f_2[iLocal_772]->f_2)
			{
				case -774197843:
					func_226(Var1.f_732.f_2[iLocal_772], &(uParam1->f_17), &(uParam1->f_16), 1);
					func_226(Var1.f_732.f_2[iLocal_772], &(uParam1->f_19), &(uParam1->f_18), 1);
					break;
			}
			iVar768 = iLocal_772 + 1;
		}
	}
	return true;
}

char* func_193(var uParam0)
{
	if (!func_83(*uParam0, 0))
	{
		return "";
	}
	if (!func_164(*uParam0))
	{
		return "";
	}
	if (func_142(*uParam0, -462364930))
	{
		sVar0 = "COUPON_OFFER_LOCATION_BOUNTY_BOARD";
	}
	else if (func_142(*uParam0, 791503389))
	{
		sVar0 = "COUPON_OFFER_LOCATION_COOK";
	}
	else if (func_142(*uParam0, 1631625825) || func_142(*uParam0, 769052425))
	{
		sVar0 = "COUPON_OFFER_LOCATION_OUTFITTERS";
	}
	else if (func_142(*uParam0, 805642000))
	{
		sVar0 = "COUPON_OFFER_LOCATION_MADAM_NAZAR";
	}
	else if (func_142(*uParam0, -290607961))
	{
		sVar0 = "COUPON_OFFER_LOCATION_OFFER";
	}
	else if (func_142(*uParam0, -657940588))
	{
		sVar0 = "COUPON_OFFER_LOCATION_CATALOGUE";
	}
	else if (func_142(*uParam0, -2141994197))
	{
		sVar0 = "COUPON_OFFER_LOCATION_STABLE";
	}
	else if (func_142(*uParam0, -1336773246))
	{
		sVar0 = "COUPON_OFFER_LOCATION_GUNSMITH_STORE_CATALOGUE";
	}
	else if (func_142(*uParam0, 565025927))
	{
		sVar0 = "COUPON_OFFER_LOCATION_GUNSMITH";
	}
	else if (func_142(*uParam0, -698888345))
	{
		sVar0 = "COUPON_OFFER_LOCATION_GUNSMITH_CATALOGUE";
	}
	else if (func_142(*uParam0, -700325949))
	{
		sVar0 = "COUPON_OFFER_LOCATION_ABILITIES_MENU";
	}
	else if (func_142(*uParam0, 563589121))
	{
		sVar0 = "COUPON_OFFER_LOCATION_FAST_TRAVEL";
	}
	else if (func_142(*uParam0, -1572489300))
	{
		sVar0 = "COUPON_OFFER_LOCATION_MAGGIES";
	}
	else if (func_142(*uParam0, -1197174069))
	{
		sVar0 = "COUPON_OFFER_LOCATION_TAILOR_STORE_CATALOGUE";
	}
	else if (func_142(*uParam0, -1037742291))
	{
		sVar0 = "COUPON_OFFER_LOCATION_TAILOR_STORE_CATALOGUE_NAZAR";
	}
	else if (func_142(*uParam0, 1385045652))
	{
		sVar0 = "COUPON_OFFER_LOCATION_HARRIET_OR_NATURALIST_SHOP";
	}
	else if (func_142(*uParam0, 1403030884))
	{
		sVar0 = "COUPON_OFFER_LOCATION_NATURALIST_SHOP";
	}
	else if (func_142(*uParam0, 69270755))
	{
		sVar0 = "COUPON_OFFER_LOCATION_TRAPPER";
	}
	else if (func_142(*uParam0, 1509670012))
	{
		sVar0 = "COUPON_OFFER_LOCATION_FENCE";
	}
	else if (func_142(*uParam0, -2017051481))
	{
		sVar0 = "COUPON_OFFER_LOCATION_ALL_ROLE_LOCATIONS";
	}
	else if (func_142(*uParam0, 354986833))
	{
		sVar0 = "COUPON_OFFER_LOCATION_BOUNTY_HUNTER_USE_LOCATIONS";
	}
	else if (func_142(*uParam0, -1002212774))
	{
		sVar0 = "COUPON_OFFER_LOCATION_COLLECTOR_USE_LOCATIONS";
	}
	else if (func_142(*uParam0, -1197306303))
	{
		sVar0 = "COUPON_OFFER_LOCATION_MOONSHINER_USE_LOCATIONS";
	}
	else if (func_142(*uParam0, -1788339758))
	{
		sVar0 = "COUPON_OFFER_LOCATION_NATURALIST_USE_LOCATIONS";
	}
	else if (func_142(*uParam0, -1574774506))
	{
		sVar0 = "COUPON_OFFER_LOCATION_TRADER_USE_LOCATIONS";
	}
	else if (func_142(*uParam0, 407365210))
	{
		sVar0 = "COUPON_OFFER_LOCATION_GUS_USE_LOCATIONS";
	}
	else if (func_142(*uParam0, -1835855000))
	{
		sVar0 = "COUPON_OFFER_LOCATION_STABLE_BOUNTY_HUNTER";
	}
	else if (func_142(*uParam0, 1685177972))
	{
		sVar0 = "COUPON_OFFER_LOCATION_STABLE_TRADER";
	}
	else if (func_142(*uParam0, 1926306718))
	{
		sVar0 = "COUPON_OFFER_LOCATION_GENERAL_AND_CATALOGUE";
	}
	else if (func_142(*uParam0, 1739189908))
	{
		sVar0 = "COUPON_OFFER_LOCATION_MOONSHINER_STORE_USE_LOCATIONS";
	}
	else if (func_142(*uParam0, 1315004435))
	{
		sVar0 = "COUPON_OFFER_LOCATION_MOONSHINER_STORE_FENCE_USE_LOCATIONS";
	}
	if (is_string_null_or_empty(sVar0))
	{
		return "";
	}
	return sVar0;
}

bool func_194(int iParam0)
{
	if (!func_83(*iParam0, 0))
	{
		return false;
	}
	if (func_104(*iParam0) && func_97(*iParam0))
	{
		return false;
	}
	if (func_142(*iParam0, -2141147161))
	{
		return true;
	}
	if (func_142(*iParam0, -657940588))
	{
		return true;
	}
	else if (func_142(*iParam0, -1197174069))
	{
		return true;
	}
	else if (func_142(*iParam0, -1336773246))
	{
		return true;
	}
	else if (func_142(*iParam0, -698888345))
	{
		return true;
	}
	return false;
}

bool func_195(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (!func_104(iParam0))
	{
		return false;
	}
	if (func_97(iParam0))
	{
		return false;
	}
	iVar0 = func_143(iParam0, 1);
	if (!func_148(iVar0))
	{
		return false;
	}
	if (!func_206(iVar0, 205718222))
	{
		return false;
	}
	return true;
}

bool func_196(int iParam0, var uParam1)
{
	if (!func_195(iParam0))
	{
		return false;
	}
	iVar0 = func_227(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	*uParam1 = iVar0;
	return true;
}

bool func_197(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (!func_142(iParam0, get_hash_key("CI_TAG_OFFER_SEASON_PASS")))
	{
		return false;
	}
	return true;
}

char* func_198(int iParam0)
{
	if (!func_83(*iParam0, 0))
	{
		return "";
	}
	if (!func_104(*iParam0))
	{
		return "";
	}
	if (func_142(*iParam0, 791503389))
	{
		sVar0 = "COUPON_REWARD_LOCATION_COOK";
	}
	else if (func_142(*iParam0, 1678998893))
	{
		sVar0 = "COUPON_REWARD_LOCATION_BUTCHERS_TABLE";
	}
	else if (func_142(*iParam0, 1060967958))
	{
		sVar0 = "COUPON_REWARD_LOCATION_POSSE";
	}
	else if (func_142(*iParam0, -354977419))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OPTIONS";
	}
	else if (func_142(*iParam0, -700325949))
	{
		sVar0 = "COUPON_REWARD_LOCATION_ABILITIES";
	}
	else if (func_142(*iParam0, -462364930))
	{
		sVar0 = "COUPON_REWARD_LOCATION_BOUNTY_BOARD";
	}
	else if (func_142(*iParam0, 769052425))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OUTFITTERS_OR_CRIPPS";
	}
	else if (func_142(*iParam0, 1631625825))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OUTFITTERS";
	}
	else if (func_142(*iParam0, 805642000))
	{
		sVar0 = "COUPON_REWARD_LOCATION_MADAM_NAZAR";
	}
	else if (func_142(*iParam0, -290607961))
	{
		sVar0 = "COUPON_REWARD_LOCATION_REWARD";
	}
	else if (func_142(*iParam0, -13230814))
	{
		sVar0 = "COUPON_REWARD_LOCATION_POST_OFFICE";
	}
	else if (func_142(*iParam0, 1501879121))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OLD_MAN_JONES";
	}
	else if (func_142(*iParam0, -657940588))
	{
		sVar0 = "COUPON_REWARD_LOCATION_CATALOGUE";
	}
	else if (func_142(*iParam0, -1197174069))
	{
		sVar0 = "COUPON_REWARD_LOCATION_TAILOR_STORE_CATALOGUE";
	}
	else if (func_142(*iParam0, 565025927))
	{
		sVar0 = "COUPON_REWARD_LOCATION_GUNSMITH";
	}
	else if (func_142(*iParam0, -1336773246))
	{
		sVar0 = "COUPON_REWARD_LOCATION_GUNSMITH_STORE_CATALOGUE";
	}
	else if (func_142(*iParam0, -698888345))
	{
		sVar0 = "COUPON_REWARD_LOCATION_GUNSMITH_CATALOGUE";
	}
	else if (func_142(*iParam0, 720980519))
	{
		sVar0 = "COUPON_REWARD_LOCATION_CAMP_AND_PROPERTIES";
	}
	else if (func_142(*iParam0, -1197174069))
	{
		sVar0 = "COUPON_REWARD_LOCATION_TAILOR_STORE_CATALOGUE";
	}
	else if (func_142(*iParam0, -1037742291))
	{
		sVar0 = "COUPON_REWARD_LOCATION_TAILOR_STORE_CATALOGUE_NAZAR";
	}
	else if (func_142(*iParam0, 1385045652))
	{
		sVar0 = "COUPON_REWARD_LOCATION_HARRIET_OR_NATURALIST_SHOP";
	}
	else if (func_142(*iParam0, 1403030884))
	{
		sVar0 = "COUPON_REWARD_LOCATION_NATURALIST_SHOP";
	}
	else if (func_142(*iParam0, 69270755))
	{
		sVar0 = "COUPON_REWARD_LOCATION_TRAPPER";
	}
	else if (func_142(*iParam0, 1509670012))
	{
		sVar0 = "COUPON_REWARD_LOCATION_FENCE";
	}
	else if (func_142(*iParam0, -2017051481))
	{
		sVar0 = "COUPON_REWARD_LOCATION_ALL_ROLE_LOCATIONS";
	}
	else if (func_142(*iParam0, 354986833))
	{
		sVar0 = "COUPON_REWARD_LOCATION_BOUNTY_HUNTER_USE_LOCATIONS";
	}
	else if (func_142(*iParam0, -1002212774))
	{
		sVar0 = "COUPON_REWARD_LOCATION_COLLECTOR_USE_LOCATIONS";
	}
	else if (func_142(*iParam0, -1197306303))
	{
		sVar0 = "COUPON_REWARD_LOCATION_MOONSHINER_USE_LOCATIONS";
	}
	else if (func_142(*iParam0, -1788339758))
	{
		sVar0 = "COUPON_REWARD_LOCATION_NATURALIST_USE_LOCATIONS";
	}
	else if (func_142(*iParam0, -1574774506))
	{
		sVar0 = "COUPON_REWARD_LOCATION_TRADER_USE_LOCATIONS";
	}
	else if (func_142(*iParam0, 1926306718))
	{
		sVar0 = "COUPON_REWARD_LOCATION_GENERAL_AND_CATALOGUE";
	}
	else if (func_142(*iParam0, 1739189908))
	{
		sVar0 = "COUPON_REWARD_LOCATION_MOONSHINER_STORE";
	}
	else if (func_142(*iParam0, -2141994197))
	{
		sVar0 = "COUPON_REWARD_LOCATION_STABLE";
	}
	if (is_string_null_or_empty(sVar0))
	{
		return "";
	}
	return sVar0;
}

void func_199(char* sParam0)
{
	StringCopy(sParam0, "HO_ITEM_MYSTERY_REWARD_NAME", 128);
	StringCopy(&(sParam0->f_16), "HO_ITEM_MYSTERY_REWARD_DESCRIPTION", 128);
	sParam0->f_34 = get_hash_key("VOUCHER_MYSTERY");
	sParam0->f_35 = get_hash_key("mp_hub_coupons");
	sParam0->f_32 = get_hash_key("VOUCHER_MYSTERY");
	sParam0->f_33 = get_hash_key("mp_hub_coupons");
}

bool func_200(int iParam0)
{
	iVar0 = func_228(iParam0);
	if (!func_83(iVar0, 0))
	{
		return true;
	}
	if (func_229(iVar0, 1))
	{
		return false;
	}
	return true;
}

bool func_201(var uParam0, var uParam1, char[32] cParam2, var uParam10)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	func_230(uParam0, *uParam1, cParam2, *uParam10);
	uParam0->f_18[0] = _databinding_add_data_hash_by_hash(*uParam0, 440050042, uParam10->f_16);
	uParam0->f_18[1] = _databinding_add_data_hash_by_hash(*uParam0, 1058850005, uParam10->f_17);
	uParam0->f_18[2] = _databinding_add_data_hash_by_hash(*uParam0, -3675574, uParam10->f_18);
	uParam0->f_18[3] = _databinding_add_data_hash_by_hash(*uParam0, -536627617, uParam10->f_19);
	uParam0->f_18[4] = _databinding_add_data_string_by_hash(*uParam0, -242834141, uParam10->f_20);
	uParam0->f_18[5] = _databinding_add_data_hash_by_hash(*uParam0, 1959966745, uParam10->f_21);
	uParam0->f_18[6] = _databinding_add_data_hash_by_hash(*uParam0, -1952794871, uParam10->f_22);
	uParam0->f_18[7] = _databinding_add_data_hash_by_hash(*uParam0, -129582355, uParam10->f_23);
	uParam0->f_18[8] = _databinding_add_data_bool_by_hash(*uParam0, 1527945487, uParam10->f_24);
	uParam0->f_18[9] = _databinding_add_data_bool_by_hash(*uParam0, 1024435631, uParam10->f_25);
	uParam0->f_18[10] = _databinding_add_data_bool_by_hash(*uParam0, 596676017, uParam10->f_26);
	uParam0->f_18[11] = _databinding_add_data_int_by_hash(*uParam0, -376630643, uParam10->f_43);
	uParam0->f_18[12] = _databinding_add_data_int_by_hash(*uParam0, -539230421, uParam10->f_43.f_1);
	uParam0->f_18[13] = _databinding_add_data_int_by_hash(*uParam0, -1019689499, uParam10->f_43.f_2);
	uParam0->f_18[14] = _databinding_add_data_int_by_hash(*uParam0, -1283381642, uParam10->f_43.f_3);
	uParam0->f_18[15] = _databinding_add_data_string_by_hash(*uParam0, -2035241910, &(uParam10->f_27));
	return true;
}

bool func_202(var uParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	_databinding_write_data_bool_from_parent(*uParam0, func_49(0), *uParam1);
	_databinding_write_data_bool_from_parent(*uParam0, func_49(1), uParam1->f_1);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_49(2), uParam1->f_2);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_49(54), uParam1->f_3);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_49(57), uParam1->f_5);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_49(56), uParam1->f_6);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_49(55), uParam1->f_4);
	_0xa3bd6ff95e713ee5(*uParam0, -2035241910, &(uParam1->f_27));
	_databinding_write_data_bool_from_parent(*uParam0, func_49(59), uParam1->f_8);
	_databinding_write_data_bool_from_parent(*uParam0, func_49(60), uParam1->f_9);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, 440050042, uParam1->f_16);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, 1058850005, uParam1->f_17);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, -3675574, uParam1->f_18);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, -536627617, uParam1->f_19);
	_0xa3bd6ff95e713ee5(*uParam0, -242834141, uParam1->f_20);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, 1959966745, uParam1->f_21);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, -1952794871, uParam1->f_22);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, -129582355, uParam1->f_23);
	_0xbfc83da249befcc9(*uParam0, 1527945487, uParam1->f_24);
	_0xbfc83da249befcc9(*uParam0, 1024435631, uParam1->f_25);
	_0xbfc83da249befcc9(*uParam0, 596676017, uParam1->f_26);
	_databinding_write_data_int_from_parent_by_hash(*uParam0, -376630643, uParam1->f_43);
	_databinding_write_data_int_from_parent_by_hash(*uParam0, -539230421, uParam1->f_43.f_1);
	_databinding_write_data_int_from_parent_by_hash(*uParam0, -1019689499, uParam1->f_43.f_2);
	_databinding_write_data_int_from_parent_by_hash(*uParam0, -1283381642, uParam1->f_43.f_3);
	return true;
}

void func_203(var uParam0)
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

int func_204()
{
	return Global_1572887->f_13;
}

bool func_205(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_206(int iParam0, int iParam1)
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

int func_207(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_231(iVar0, 1, 0);
		if (!func_232(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_104(&(Var2[iVar34])))
				{
					if (!bParam1 || func_233(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_208(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_231(iVar0, 0, 1);
		if (!func_232(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_164(&(Var9[iVar41])))
				{
					if (!bParam1 || func_233(&(Var9[iVar41]), 0, 1, 1) > 0)
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

bool func_209(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_210(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_234(iParam0))
		{
			return false;
		}
	}
	if (func_235(&(iParam0->f_6)))
	{
		if (_0xe10f2d7715ababec(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!_0xce54c9abe6fbc6db(2113164098))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1318406457))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1230526146))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(1702063850))
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_cashinventory_is_connection_faulted())
	{
		return false;
	}
	if (_cashinventory_init_session_is_faulted())
	{
		return false;
	}
	return true;
}

int func_211(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_179(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_178(iParam2, 2))
	{
		if (func_206(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_178(iParam2, 8))
	{
		return func_236(iParam0, iParam1);
	}
	return 1;
}

bool func_212(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_237(Param1))
	{
		return false;
	}
	if (!func_238(iParam0, iParam18))
	{
		return false;
	}
	if (func_239(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_240(iParam0, bParam19);
}

int func_213(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_232(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
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

void func_214(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

struct<4> func_215(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_171(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_188(1328661203, func_241(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_188(1328661203, func_241(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_188(1328661203, func_241(), -1591664384, bParam0);
}

int func_216(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_217(bool bParam0)
{
	iVar0 = func_171(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_188(923904168, func_215(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_188(923904168, func_215(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_188(923904168, func_215(bParam0), -740156546, 0);
}

bool func_218(int iParam0, bool bParam1)
{
	if (func_147(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_242();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_219(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_243(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_220(int iParam0, var uParam1, int iParam2)
{
	if (func_244(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_221(bool bParam0)
{
	iVar0 = func_171(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_188(271701509, func_215(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_188(271701509, func_215(bParam0), 12999093, 0);
}

bool func_222(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_147(iParam0);
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
			if (func_245(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_223(var uParam0)
{
	if (!func_121(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_88(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_83(Var0.f_4, 0))
	{
		return false;
	}
	return func_84(Var0.f_4);
}

var func_224(int iParam0)
{
	if (!func_83(*iParam0, 0))
	{
		return "";
	}
	if (!func_186(*iParam0))
	{
		return "";
	}
	StringCopy(&cVar0, func_246(*iParam0), 128);
	iVar16 = func_247(*iParam0);
	if (iVar16 != 0)
	{
		StringCopy(&cVar17, _get_label_text_by_hash(iVar16), 128);
		return _create_var_string(42, "HO_COMBINE_ITEM_NAME", &cVar17, &cVar0);
	}
	return func_248(cVar0);
}

int func_225(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	return _0xa4550fe9c512e3dd(iParam0);
}

int func_226(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (is_string_null_or_empty(uParam0->f_1))
	{
		return 0;
	}
	if (is_string_null_or_empty(*uParam0))
	{
		return 0;
	}
	iVar0 = get_hash_key(uParam0->f_1);
	iVar1 = get_hash_key(*uParam0);
	if (!_does_streamed_txd_exist(iVar0))
	{
		return 0;
	}
	if (!bParam3)
	{
		if (_has_streamed_txd_loaded(iVar0))
		{
			if (!_0xa2a51869bded733b(iVar0, iVar1))
			{
				return 0;
			}
		}
	}
	*uParam1 = iVar0;
	*uParam2 = iVar1;
	return 1;
}

int func_227(int iParam0)
{
	if (!func_83(iParam0, 0))
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
			if (Var0.f_18[iVar35]->f_1 == 1646708583)
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

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 356514541:
			return 1689808789;
		case -675620145:
			return 1044551780;
		case 414262351:
			return 1738926692;
		case -1977623839:
			return -1795333811;
		case 1689521960:
			return 1701862746;
		case 1394442858:
			return 619325440;
		case -119339893:
			return -2042222161;
		case 945680884:
			return -1664861890;
		case -244789314:
			return 901783124;
		case 166893886:
			return -452146133;
		case -631403597:
			return -1221719366;
		case 693447592:
			return -1647798846;
		default:
			break;
	}
	return 0;
}

bool func_229(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_216(iParam0);
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
			if (!func_249(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_250(iParam0))
			{
				return true;
			}
			break;
	}
	return func_233(iParam0, 0, 0, 0) >= iParam1;
}

void func_230(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_49(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_49(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_49(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_49(54), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_49(55), Param10.f_4);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_49(57), Param10.f_5);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_49(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_49(58), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_49(59), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_49(60), Param10.f_9);
	uParam0->f_11 = _databinding_add_data_hash(*uParam0, func_49(61), Param10.f_10);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_49(67), Param10.f_11);
	uParam0->f_12 = _databinding_add_data_hash(*uParam0, func_49(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -672301300;
	}
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_49(64), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, func_49(65), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, func_49(66), Param10.f_15);
}

int func_231(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_232(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_148(iParam0))
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
		func_251(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_233(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_216(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_252(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_253(iParam0, 0);
	}
	if (func_254(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_171(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_255(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_171(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_234(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_256(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_235(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_236(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_257(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_258(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_260(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_259(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_257(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_261(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_260("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_262(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_237(struct<17> Param0)
{
	if (!func_148(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_238(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_263(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_154(iParam0))
		{
			return false;
		}
		if (!func_263(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_239(var uParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(uParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_240(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_154(iParam0);
	}
	return true;
}

struct<4> func_241()
{
	return Var0;
}

bool func_242()
{
	return (func_264(-1185145312, 0, 0, 0) > 0 && func_265(func_188(889965687, func_215(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_243(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_254(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_188(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_171(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_171(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_244(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_171(0);
	*uParam1 = { func_188(iParam0, func_217(0), iParam3, 0) };
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

bool func_245(int iParam0, int iParam1, int iParam2)
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

char* func_246(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_266(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

int func_247(int iParam0)
{
	if (!func_83(iParam0, 0))
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

var func_248(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_249(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_252(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_267("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_268(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_269(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_270(iVar1);
				return true;
			}
			iVar3++;
		}
		func_270(iVar1);
	}
	return false;
}

bool func_250(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_147(iParam0);
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
	iVar1 = func_271(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_272(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_273(iParam0);
	iVar2 = func_272(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

void func_251(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_147(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_252(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_216(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_142(iParam0, 1399091007))
	{
		func_274(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_253(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_275(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_276(&Var0, func_217(0));
	}
	if (!func_277(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_270(iVar14);
	return uVar15;
}

int func_254(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_255(int iParam0, bool bParam1)
{
	Var0 = { func_187(iParam0, bParam1, 0) };
	return func_188(iParam0, Var0, Var0.f_4, bParam1);
}

int func_256(int* iParam0)
{
	return func_54(iParam0->f_1);
}

int func_257(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_232(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_258(int iParam0)
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

int func_259(int iParam0)
{
	return (iParam0 / 100);
}

void func_260(char* sParam0)
{
	Global_1915715->f_22470 = func_278(sParam0, 10000, 0, 0, 0, 1);
}

bool func_261(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_204() == 0)
	{
		return func_279(iParam0);
	}
	return iParam0 <= func_280();
}

bool func_262(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_232(iParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_261(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_258(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_281(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_282(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_233(&(Var0[iVar32]), 0, bParam3, 1);
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

bool func_263(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

int func_264(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_283(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_171(bParam1), iParam0, iParam3);
}

int func_265(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_284(&uParam0, iParam4, bParam5, iParam6);
}

int func_266(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_285(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_267(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_171(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_268(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_269(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_270(int iParam0)
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

int func_271(int iParam0)
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

int func_272(var uParam0, int iParam1)
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

int func_273(int iParam0)
{
	iVar0 = func_147(iParam0);
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

void func_274(int iParam0, var uParam1, var uParam2)
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

struct<14> func_275(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_276(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_277(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_171(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

var func_278(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_279(int iParam0)
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

int func_280()
{
	if (func_204() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_281(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_142(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_282(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_215(0) };
	Var0.f_4 = func_286(iParam1);
	Var5 = { func_188(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_171(0), &Var5, 0);
	return iVar9;
}

bool func_283(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_284(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_287(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_285(int iParam0)
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

int func_286(int iParam0)
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

bool func_287(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_171(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_134(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

