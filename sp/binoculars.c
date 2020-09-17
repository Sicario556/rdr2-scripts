void __EntryFunction__()
{
	Local_0.f_3 = "mech_inventory@binoculars";
	if (!is_entity_dead(Global_35))
	{
		Local_0.f_8 = is_ped_on_mount(Global_35);
	}
	func_1();
	if (func_2(472))
	{
		func_3(472);
	}
	if (has_force_cleanup_occurred(514))
	{
		func_4(&Local_0);
		terminate_this_thread();
	}
	while (!is_entity_dead(Global_35) && func_5(&Local_0))
	{
		if (func_6() == 4 || func_6() == 5)
		{
			func_7(&Local_0);
		}
		if (func_8(Global_35, 1, 0, 1) != -160924582)
		{
			func_9(&(Local_0.f_13), &(Local_0.f_14), &(Local_0.f_15), &(Local_0.f_16));
			if (Local_0.f_15 != 0 || Local_0.f_16 != 0)
			{
				func_10(&(Local_0.f_18));
			}
		}
		if (func_6() > 0 && func_8(Global_35, 1, 0, 1) != -160924582)
		{
			func_11(&Local_0, 8);
		}
		if (func_12(&(Local_0.f_4[0])) && func_13(&(Local_0.f_4[0]), 1))
		{
			func_11(&Local_0, 6);
		}
		func_14(&Local_0);
		switch (func_6())
		{
			case 0:
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
				}
				func_11(&Local_0, 1);
				break;
			case 1:
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
				}
				func_11(&Local_0, 2);
				break;
			case 2:
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
				}
				if (func_8(Global_35, 1, 0, 0) != -160924582)
				{
				}
				else
				{
					func_17(1);
					func_18(473, 0);
					func_19(&Local_0);
					Local_0.f_4[0] = func_20("BINO_PUT_AWAY", 1606906090, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_11(&Local_0, 4);
				}
				break;
			case 4:
				_0x2804658eb7d8a50b(5, -490854963);
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
				}
				if (func_21())
				{
					func_22("enter", "Binoculars_Sounds");
					func_11(&Local_0, 5);
				}
				break;
			case 5:
				_0x2804658eb7d8a50b(5, 711586536);
				disable_control_action(0, -1404316431, false);
				if (_0xdc62cd70658e7a02())
				{
					func_22("zoom_in", "Binoculars_Sounds");
				}
				if (_0x796085220adcc847())
				{
					func_22("zoom_out", "Binoculars_Sounds");
				}
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
					func_17(1);
					func_23(Local_0.f_4[2], 1, 1);
					Local_0.f_4[2] = func_24("IB_ZOOM", 2059168358, 16, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_25(&(Local_0.f_4[2]), 11, 1, 1);
					func_25(&(Local_0.f_4[2]), 17, 1, 1);
					func_26(&(Local_0.f_4[2]), 2059168358);
				}
				if (func_27())
				{
					func_17(1);
					func_23(Local_0.f_4[2], 1, 1);
					func_22("exit", "Binoculars_Sounds");
					func_11(&Local_0, 4);
				}
				break;
			case 6:
				if (func_15(&Local_0))
				{
					func_19(&Local_0);
					func_16(&Local_0);
				}
				func_11(&Local_0, 7);
				break;
			case 7:
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
				}
				func_11(&Local_0, 8);
				if (func_28(Global_35, 0) == -160924582)
				{
					_hide_ped_weapons(Global_35, 2, false);
				}
				break;
			case 8:
				if (func_15(&Local_0))
				{
					func_17(1);
					func_16(&Local_0);
				}
				func_4(&Local_0);
				terminate_this_thread();
				break;
		}
		wait(0);
	}
	func_4(&Local_0);
	terminate_this_thread();
}

void func_1()
{
	Global_1911668 = 0;
}

bool func_2(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944->f_22[iParam0]->f_1;
	}
	return false;
}

void func_3(int iParam0)
{
	if (!func_2(iParam0))
	{
		return;
	}
	func_17(1);
}

void func_4(int* iParam0)
{
	if (func_2(474))
	{
		func_3(474);
	}
	if (func_2(473))
	{
		func_3(473);
	}
	func_19(iParam0);
	func_1();
	Global_1911669 = 0;
	if (does_entity_exist(*iParam0))
	{
		delete_object(iParam0);
	}
	if (func_29(iParam0, 64))
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
	}
	display_radar(true);
	if (does_cam_exist(iParam0->f_1))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		set_cam_active(iParam0->f_1, false);
		destroy_cam(iParam0->f_1, false);
	}
	set_player_control(player_id(), true, 2048, false);
	func_17(1);
	_text_database_delete("BINO");
}

bool func_5(int* iParam0)
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (func_30())
	{
		func_31(iParam0, 8);
		func_31(iParam0, 16);
		func_31(iParam0, 64);
	}
	if (func_29(iParam0, 8) || func_29(iParam0, 16))
	{
		return false;
	}
	if (!func_32(-160924582, 1, 0) && func_8(Global_35, 1, 0, 1) != -160924582)
	{
		return false;
	}
	if (func_33())
	{
		return false;
	}
	if (&Global_1357517)
	{
		return false;
	}
	return true;
}

int func_6()
{
	return &Global_1911669;
}

void func_7(int* iParam0)
{
	if (func_34(1))
	{
		if (!func_29(iParam0, 16))
		{
			if (func_6() == 5)
			{
				func_31(iParam0, 8);
				func_31(iParam0, 16);
			}
			else
			{
				func_11(iParam0, 6);
			}
		}
		func_35(1);
	}
	if (func_34(2))
	{
		if (!func_29(iParam0, 8))
		{
			if (func_6() == 5)
			{
				func_31(iParam0, 8);
			}
		}
		func_35(2);
	}
	if (func_34(4))
	{
		if (func_12(&(iParam0->f_4[0])))
		{
			func_36(&(iParam0->f_4[0]), 0, 1);
		}
		func_35(4);
	}
	else if (func_12(&(iParam0->f_4[0])) && func_37(&(iParam0->f_4[0]), 1))
	{
		func_36(&(iParam0->f_4[0]), 1, 1);
	}
	if (func_34(8))
	{
		if (!func_29(iParam0, 32))
		{
			func_31(iParam0, 32);
		}
		func_35(8);
	}
	if (func_34(16))
	{
		if (func_29(iParam0, 32))
		{
			func_38(iParam0, 32);
		}
		func_35(16);
	}
}

int func_8(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_9(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam0 = floor((get_control_normal(2, 529461124) * 127f));
	*uParam1 = floor((get_control_normal(2, 1410914475) * 127f));
	*uParam2 = floor((get_control_normal(2, -1497929239) * 127f));
	*uParam3 = floor((get_control_normal(2, 665185216) * 127f));
}

void func_10(var uParam0)
{
	func_39(uParam0, 0f);
}

void func_11(int* iParam0, int iParam1)
{
	Global_1911669 = iParam1;
	func_40(iParam0);
}

bool func_12(int iParam0)
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

bool func_13(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_41(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_14(int iParam0)
{
	if (func_8(Global_35, 1, 0, 1) != -160924582)
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, -1879280170, false);
		disable_control_action(0, 1520437207, false);
	}
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 278816850, false);
	disable_control_action(0, 2028806450, false);
	disable_control_action(0, 371916472, false);
	if (does_cam_exist(iParam0->f_1) && is_cam_active(iParam0->f_1))
	{
		disable_control_action(0, -1450761377, false);
		disable_control_action(0, -1722177808, false);
		disable_control_action(0, -2105631000, false);
	}
}

bool func_15(int iParam0)
{
	return iParam0->f_10;
}

void func_16(int iParam0)
{
	iParam0->f_10 = 0;
}

void func_17(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_18(int iParam0, bool bParam1)
{
	func_42(iParam0, &iVar0, &iVar1);
	if (!func_43(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_44(iVar0, iVar1);
}

void func_19(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_4)
	{
		if (func_12(&(iParam0->f_4[iVar0])))
		{
			func_23(iParam0->f_4[iVar0], 1, 1);
		}
		iVar0++;
	}
}

int func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_45(iVar0, 2))
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
		func_46(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_21()
{
	if (is_first_person_aim_cam_active())
	{
		if (func_8(Global_35, 1, 0, 1) != -160924582)
		{
			set_player_control(player_id(), false, 2048, false);
		}
		return true;
	}
	return false;
}

void func_22(char* sParam0, char* sParam1)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, 1);
		(*Global_1956588)[Global_1956588->f_25] = iVar0;
		Global_1956588->f_25 = (Global_1956588->f_25 + 1 % 24);
	}
}

void func_23(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_12(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_41(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_47(iVar0);
	*uParam0 = 0;
}

int func_24(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_45(iVar0, 2))
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
		func_46(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_25(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_26(int iParam0, int iParam1)
{
	if (!func_12(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1945938)[iVar0]->f_3, iParam1);
}

bool func_27()
{
	if (!is_first_person_aim_cam_active())
	{
		set_player_control(player_id(), true, 2048, false);
		return true;
	}
	return false;
}

int func_28(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_29(int* iParam0, int iParam1)
{
	return (iParam0->f_12 && iParam1) != 0;
}

bool func_30()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -978548489:
			case 402722103:
				if (func_48(iVar0))
				{
					return true;
				}
				break;
		}
		iVar0++;
	}
	if (is_ped_in_melee_combat(Global_35))
	{
		return true;
	}
	return false;
}

void func_31(int* iParam0, int iParam1)
{
	iParam0->f_12 = (iParam0->f_12 || iParam1);
}

bool func_32(int iParam0, int iParam1, bool bParam2)
{
	if (!func_49(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_50(iParam0);
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
		if (!func_51(iParam0, 1))
		{
			return false;
		}
	}
	return func_52(iParam0, 0, bParam2) >= iParam1;
}

bool func_33()
{
	return Global_1935689->f_1;
}

bool func_34(int iParam0)
{
	return (Global_1911668 && iParam0) != 0;
}

void func_35(int iParam0)
{
	Global_1911668 = (&Global_1911668 - (Global_1911668 && iParam0));
}

void func_36(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (bParam1)
	{
		func_53(iParam0, 4);
		func_54(iVar0, 1);
		func_55(iVar0, 1);
	}
	else
	{
		func_56(iParam0, 4);
		func_55(iVar0, 0);
	}
}

bool func_37(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return true;
	}
	return func_45(iParam0, 4);
}

void func_38(int* iParam0, int iParam1)
{
	iParam0->f_12 = (iParam0->f_12 - (iParam0->f_12 && iParam1));
}

void func_39(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_57() - fParam1);
	func_58(uParam0, 1);
	func_59(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_40(int* iParam0)
{
	iParam0->f_10 = 1;
}

int func_41(int iParam0)
{
	return iParam0;
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_43(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_60(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_61(iParam0))
	{
		return false;
	}
	if (func_62(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_63(iParam0, 1)) || func_64(32768))
	{
		if (!func_63(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_65())
	{
		return false;
	}
	return true;
}

void func_44(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_45(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_46(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_54(iParam0, 1);
	func_55(iParam0, 1);
	func_56(iParam0, 128);
}

void func_47(int iParam0)
{
	if (!func_66(iParam0))
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

bool func_48(int iParam0)
{
	get_event_data(0, iParam0, &Var0, 9);
	if (!does_entity_exist(Var0))
	{
		return false;
	}
	if (is_entity_a_ped(Var0))
	{
		iVar9 = get_ped_index_from_entity_index(Var0);
		if (!does_entity_exist(iVar9))
		{
			return false;
		}
		if (!is_ped_a_player(iVar9))
		{
			return false;
		}
		if (is_entity_a_ped(Var0.f_1))
		{
			iVar10 = get_ped_index_from_entity_index(Var0.f_1);
			if (!does_entity_exist(iVar10) || iVar10 == Global_35)
			{
				return false;
			}
		}
		else
		{
			return false;
		}
		if (Var0.f_4 <= 1f)
		{
			return false;
		}
		iVar11 = get_weapontype_group(Var0.f_2);
		if (iVar11 != -728555052 && iVar11 != -1609580060)
		{
			return false;
		}
	}
	return false;
}

bool func_49(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_50(int iParam0)
{
	if (!func_49(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_51(int iParam0, int iParam1)
{
	if (!func_49(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_67(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_68("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_69(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_70(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_71(iVar1);
				return true;
			}
			iVar3++;
		}
		func_71(iVar1);
	}
	return false;
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_50(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_67(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_72(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_73(bParam2), iParam0, 0);
	return uVar2;
}

void func_53(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_54(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_45(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_55(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_56(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

float func_57()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_58(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_60(int iParam0, int iParam1)
{
	if (func_74() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_61(int iParam0)
{
	if (func_74() != -1)
	{
		if (func_63(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_63(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_62(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_63(iParam0, 65536) && !func_63(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_63(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_63(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_63(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_64(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_65()
{
	return Global_1905944->f_5694;
}

bool func_66(int iParam0)
{
	return func_45(iParam0, 2);
}

int func_67(int iParam0, int iParam1)
{
	if (!func_49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_50(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_75(iParam0, 1399091007))
	{
		func_76(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_68(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_73(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_69(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_70(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_71(int iParam0)
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

int func_72(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_77(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_79(&Var0, func_78(0));
	}
	if (!func_80(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_71(iVar14);
	return uVar15;
}

int func_73(bool bParam0)
{
	if (func_74() == -1)
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

int func_74()
{
	return Global_1572887->f_12;
}

bool func_75(int iParam0, int iParam1)
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

void func_76(int iParam0, var uParam1, var uParam2)
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

struct<14> func_77(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_78(bool bParam0)
{
	iVar0 = func_73(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_82(923904168, func_81(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_82(923904168, func_81(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_82(923904168, func_81(bParam0), -740156546, 0);
}

void func_79(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_80(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_73(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<4> func_81(bool bParam0)
{
	return func_82(1328661203, func_83(), -1591664384, bParam0);
}

struct<4> func_82(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_49(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_73(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_83()
{
	return Var0;
}

