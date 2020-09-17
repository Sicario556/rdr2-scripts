void __EntryFunction__()
{
	Local_13.f_3 = "mech_inventory@binoculars";
	if (!is_entity_dead(Global_34))
	{
		Local_13.f_8 = is_ped_on_mount(Global_34);
	}
	func_1();
	if (func_2(507))
	{
		func_3(507);
	}
	if (has_force_cleanup_occurred(514))
	{
		func_4(&Local_13);
		terminate_this_thread();
	}
	while (!is_entity_dead(Global_34) && func_5(&Local_13))
	{
		if (func_6() == 4 || func_6() == 5)
		{
			func_7(&Local_13);
		}
		if (!_is_weapon_binoculars(func_8(Global_34, 1, 0, 1)))
		{
			func_9(&(Local_13.f_13), &(Local_13.f_14), &(Local_13.f_15), &(Local_13.f_16));
			if (Local_13.f_15 != 0 || Local_13.f_16 != 0)
			{
				func_10(&(Local_13.f_18));
			}
		}
		if (func_6() > 0 && !_is_weapon_binoculars(func_8(Global_34, 1, 0, 1)))
		{
			func_11(&Local_13, 8);
		}
		if (func_12(&(Local_13.f_4[0])) && func_13(&(Local_13.f_4[0]), 1))
		{
			func_11(&Local_13, 6);
		}
		func_14(&Local_13);
		switch (func_6())
		{
			case 0:
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
				}
				func_11(&Local_13, 1);
				break;
			case 1:
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
				}
				func_11(&Local_13, 2);
				break;
			case 2:
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
				}
				if (_is_weapon_binoculars(func_8(Global_34, 1, 0, 0)))
				{
					func_17(1);
					func_18(508, 0);
					func_19(&Local_13);
					Local_13.f_4[0] = func_20("BINO_PUT_AWAY", 1606906090, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_11(&Local_13, 4);
				}
				break;
			case 4:
				_0x2804658eb7d8a50b(5, -490854963);
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
				}
				if (func_21())
				{
					func_22("enter", "Binoculars_Sounds", 1);
					iLocal_50 = 0;
					func_11(&Local_13, 5);
				}
				break;
			case 5:
				_0x2804658eb7d8a50b(5, 711586536);
				if (is_disabled_control_just_pressed(0, -1514287812))
				{
					if (iLocal_50 < 2)
					{
						func_22("zoom_in", "Binoculars_Sounds", 1);
						iLocal_50 = (1 + iLocal_50);
					}
				}
				if (is_disabled_control_just_pressed(0, 1124438954))
				{
					if (iLocal_50 > 0)
					{
						func_22("zoom_out", "Binoculars_Sounds", 1);
						iLocal_50 = (iLocal_50 - 1);
					}
				}
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
					func_17(1);
					func_23(Local_13.f_4[2], 1, 1);
					Local_13.f_4[2] = func_24("IB_ZOOM", 2059168358, 17, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_25(&(Local_13.f_4[2]), 11, 1, 1);
					func_25(&(Local_13.f_4[2]), 17, 1, 1);
					func_26(&(Local_13.f_4[2]), 2059168358);
				}
				if (func_27())
				{
					func_17(1);
					func_23(Local_13.f_4[2], 1, 1);
					func_22("exit", "Binoculars_Sounds", 1);
					func_11(&Local_13, 4);
				}
				break;
			case 6:
				if (func_15(&Local_13))
				{
					func_19(&Local_13);
					func_16(&Local_13);
				}
				func_11(&Local_13, 7);
				break;
			case 7:
				if (func_15(&Local_13))
				{
					func_16(&Local_13);
				}
				func_11(&Local_13, 8);
				if (_is_weapon_binoculars(func_28(Global_34, 0)))
				{
					_hide_ped_weapons(Global_34, 2, false);
				}
				break;
			case 8:
				if (func_15(&Local_13))
				{
					func_17(1);
					func_16(&Local_13);
				}
				func_4(&Local_13);
				terminate_this_thread();
				break;
		}
		wait(0);
	}
	func_4(&Local_13);
	terminate_this_thread();
}

void func_1()
{
	Global_1913398 = 0;
}

bool func_2(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1904651->f_33[iParam0]->f_1;
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
	if (func_2(509))
	{
		func_3(509);
	}
	if (func_2(508))
	{
		func_3(508);
	}
	func_19(iParam0);
	func_1();
	Global_1913399 = 0;
	if (does_entity_exist(*iParam0))
	{
		delete_object(iParam0);
	}
	if (func_29(iParam0, 64))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
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
	if (is_entity_dead(Global_34))
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
	if ((!func_32(-160924582, 1) && !func_32(1652431022, 1)) && !_is_weapon_binoculars(func_8(Global_34, 1, 0, 1)))
	{
		return false;
	}
	if (func_33())
	{
		return false;
	}
	if (func_34(get_player_index()))
	{
		return false;
	}
	return true;
}

int func_6()
{
	return &Global_1913399;
}

void func_7(int* iParam0)
{
	if (func_35(1))
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
		func_36(1);
	}
	if (func_35(2))
	{
		if (!func_29(iParam0, 8))
		{
			if (func_6() == 5)
			{
				func_31(iParam0, 8);
			}
		}
		func_36(2);
	}
	if (func_35(4))
	{
		if (func_12(&(iParam0->f_4[0])))
		{
			func_37(&(iParam0->f_4[0]), 0, 1, 1);
		}
		func_36(4);
	}
	else if (func_12(&(iParam0->f_4[0])) && func_38(&(iParam0->f_4[0]), 1))
	{
		func_37(&(iParam0->f_4[0]), 1, 1, 1);
	}
	if (func_35(8))
	{
		if (!func_29(iParam0, 32))
		{
			func_31(iParam0, 32);
		}
		func_36(8);
	}
	if (func_35(16))
	{
		if (func_29(iParam0, 32))
		{
			func_39(iParam0, 32);
		}
		func_36(16);
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
	func_40(uParam0, 0f);
}

void func_11(int* iParam0, int iParam1)
{
	Global_1913399 = iParam1;
	func_41(iParam0);
}

bool func_12(int iParam0)
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

bool func_13(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_42(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_14(int iParam0)
{
	if (!_is_weapon_binoculars(func_8(Global_34, 1, 0, 1)))
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
	func_43(iParam0, &iVar0, &iVar1);
	if (!func_44(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_45(iVar0, iVar1);
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
	while (iVar0 < 60)
	{
		if (func_46(iVar0, 2))
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
		func_47(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_21()
{
	if (is_first_person_aim_cam_active())
	{
		if (!_is_weapon_binoculars(func_8(Global_34, 1, 0, 1)))
		{
			set_player_control(player_id(), false, 2048, false);
		}
		return true;
	}
	return false;
}

void func_22(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

void func_23(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_12(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_42(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_48(iVar0);
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
	while (iVar0 < 60)
	{
		if (func_46(iVar0, 2))
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
		func_47(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
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
	iVar0 = func_42(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_26(int iParam0, int iParam1)
{
	if (!func_12(iParam0))
	{
		return;
	}
	iVar0 = func_42(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1951255)[iVar0]->f_3, iParam1);
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

var func_28(int iParam0, int iParam1)
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
				if (func_49(iVar0))
				{
					return true;
				}
				break;
		}
		iVar0++;
	}
	if (is_ped_in_melee_combat(Global_34))
	{
		return true;
	}
	return false;
}

void func_31(int* iParam0, int iParam1)
{
	iParam0->f_12 = (iParam0->f_12 || iParam1);
}

bool func_32(int iParam0, int iParam1)
{
	if (!func_50(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_51(iParam0);
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
			if (!func_52(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_53(iParam0))
			{
				return true;
			}
			break;
	}
	return func_54(iParam0, 0, 0, 0) >= iParam1;
}

bool func_33()
{
	return Global_1940311->f_1;
}

bool func_34(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (!&Global_1296859->f_22[iParam0])
	{
		return false;
	}
	return _0xb655db7582aec805(get_player_ped(&(Global_1296859->f_154[iParam0])));
}

bool func_35(int iParam0)
{
	return (Global_1913398 && iParam0) != 0;
}

void func_36(int iParam0)
{
	Global_1913398 = (&Global_1913398 - (Global_1913398 && iParam0));
}

void func_37(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_42(iParam0);
	if (bParam1)
	{
		func_55(iParam0, 4);
		if (bParam3)
		{
			func_56(iVar0, 1);
		}
		func_57(iVar0, 1);
	}
	else
	{
		func_58(iParam0, 4);
		func_57(iVar0, 0);
	}
}

bool func_38(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return true;
	}
	return func_46(iParam0, 4);
}

void func_39(int* iParam0, int iParam1)
{
	iParam0->f_12 = (iParam0->f_12 - (iParam0->f_12 && iParam1));
}

void func_40(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_59() - fParam1);
	func_60(uParam0, 1);
	func_61(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_41(int* iParam0)
{
	iParam0->f_10 = 1;
}

int func_42(int iParam0)
{
	return iParam0;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_44(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_62(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_63(iParam0))
	{
		return false;
	}
	if (func_64(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_65(iParam0, 1)) || func_66(32768))
	{
		if (!func_65(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_67())
	{
		return false;
	}
	return true;
}

void func_45(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_46(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_47(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_56(iParam0, 1);
	func_57(iParam0, 1);
	func_58(iParam0, 128);
}

void func_48(int iParam0)
{
	if (!func_68(iParam0))
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

bool func_49(int iParam0)
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
			if (!does_entity_exist(iVar10) || iVar10 == Global_34)
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

bool func_50(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_51(int iParam0)
{
	if (!func_50(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_52(int iParam0, int iParam1)
{
	if (!func_50(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_69(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_70("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_71(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_72(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_73(iVar1);
				return true;
			}
			iVar3++;
		}
		func_73(iVar1);
	}
	return false;
}

bool func_53(int iParam0)
{
	if (!func_50(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_74(iParam0);
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
	iVar1 = func_75(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_76(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_77(iParam0);
	iVar2 = func_76(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_54(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_50(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_51(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_69(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_78(iParam0, 0);
	}
	if (func_79(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_80(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_81(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_80(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

void func_55(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_56(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_46(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_58(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

float func_59()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_60(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_62(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_63(int iParam0)
{
	if (func_65(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_64(int iParam0)
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

bool func_65(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_66(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_67()
{
	if (!func_82())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_68(int iParam0)
{
	return func_46(iParam0, 2);
}

int func_69(int iParam0, int iParam1)
{
	if (!func_50(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_51(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_83(iParam0, 1399091007))
	{
		func_84(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_70(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_80(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_71(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_72(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_73(int iParam0)
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

int func_74(int iParam0)
{
	if (!func_50(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_75(int iParam0)
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

int func_76(var uParam0, int iParam1)
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

int func_77(int iParam0)
{
	iVar0 = func_74(iParam0);
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

int func_78(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_85(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_87(&Var0, func_86(0));
	}
	if (!func_88(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_73(iVar14);
	return uVar15;
}

int func_79(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_80(bool bParam0)
{
	if (func_89() == -1)
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

struct<4> func_81(int iParam0, bool bParam1)
{
	Var0 = { func_90(iParam0, bParam1, 0) };
	return func_91(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_82()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_83(int iParam0, int iParam1)
{
	if (!func_50(iParam0, 0))
	{
		return func_93(func_92(iParam0), iParam1);
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

void func_84(int iParam0, var uParam1, var uParam2)
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

struct<14> func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_86(bool bParam0)
{
	iVar0 = func_80(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_91(923904168, func_94(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_91(923904168, func_94(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_91(923904168, func_94(bParam0), -740156546, 0);
}

void func_87(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_88(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_80(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_89()
{
	return Global_1572887->f_13;
}

struct<5> func_90(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_94(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_51(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_91(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_86(bParam1) };
			if (bParam2 && func_95(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_96(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_96(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_97(iParam0, &Var6, 1728382685))
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
			Var0 = { func_98(bParam1) };
			switch (func_74(iParam0))
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
			if (func_99(iParam0, -1823706425))
			{
				Var0 = { func_91(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_99(iParam0, -1483207246))
			{
				Var0 = { func_91(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_91(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_99(iParam0, -1653629781))
			{
				Var0 = { func_91(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_100(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_99(iParam0, -1653629781))
			{
				Var0 = { func_91(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_91(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_50(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_80(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_92(int iParam0)
{
	return iParam0;
}

int func_93(int iParam0, int iParam1)
{
	if (!func_101(iParam0, 2))
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

struct<4> func_94(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_80(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_91(1328661203, func_102(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_91(1328661203, func_102(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_91(1328661203, func_102(), -1591664384, bParam0);
}

bool func_95(int iParam0, bool bParam1)
{
	if (func_74(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_103();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_96(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_104(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_97(int iParam0, var uParam1, int iParam2)
{
	if (func_105(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_98(bool bParam0)
{
	iVar0 = func_80(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_91(271701509, func_94(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_91(271701509, func_94(bParam0), 12999093, 0);
}

bool func_99(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_74(iParam0);
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
			if (func_106(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_100(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_107(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_101(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

struct<4> func_102()
{
	return Var0;
}

bool func_103()
{
	return (func_108(-1185145312, 0, 0, 0) > 0 && func_109(func_91(889965687, func_94(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_104(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_50(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_79(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_91(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_80(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_80(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_105(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_80(0);
	*uParam1 = { func_91(iParam0, func_86(0), iParam3, 0) };
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

bool func_106(int iParam0, int iParam1, int iParam2)
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

bool func_107(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_80(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_108(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_110(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_80(bParam1), iParam0, iParam3);
}

int func_109(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_111(&uParam0, iParam4, bParam5, iParam6);
}

bool func_110(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_111(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_112(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_112(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_80(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_107(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

