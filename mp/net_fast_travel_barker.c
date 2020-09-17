void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(&uLocal_24, iLocal_55);
	while (!func_2(&uLocal_24))
	{
		func_3(&uLocal_24);
		wait(0);
	}
	func_4(&uLocal_24);
}

void func_1(var uParam0, int iParam1)
{
	register_script_with_audio(1);
	set_this_script_can_be_paused(false);
	network_set_script_is_safe_for_network_game();
	func_5(0);
	func_6();
	func_7();
	Global_1071686->f_23887.f_2 = 0;
	if (!does_entity_exist(iParam1))
	{
		uParam0->f_3 = _0x6818d1a194e29983();
	}
	else
	{
		uParam0->f_3 = iParam1;
	}
}

bool func_2(var uParam0)
{
	if (func_8(1, 1))
	{
		return true;
	}
	if (*uParam0 <= 0)
	{
		return false;
	}
	if (*uParam0 == 5)
	{
		if (is_screen_faded_out())
		{
			return true;
		}
		else if (uParam0->f_5)
		{
			if (Global_1071686->f_23887.f_2)
			{
				return true;
			}
			if (func_9(uParam0->f_8, Global_35) > Global_1901947->f_584.f_1)
			{
				return true;
			}
		}
	}
	if (!does_entity_exist(uParam0->f_3))
	{
		return true;
	}
	return false;
}

void func_3(var uParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	switch (*uParam0)
	{
		case 0:
			func_10(uParam0);
			break;
		case 1:
			func_11(uParam0);
			break;
		case 2:
			func_12(uParam0);
			break;
		case 3:
			func_13(uParam0);
			break;
		case 4:
			func_14(uParam0);
			break;
		case 5:
			break;
	}
	if (uParam0->f_25 > 0f)
	{
		uParam0->f_25 = (uParam0->f_25 - get_frame_time());
	}
}

void func_4(var uParam0)
{
	iVar0 = player_id();
	iVar1 = get_player_ped(iVar0);
	if (busyspinner_is_on())
	{
		func_15();
		func_16();
	}
	if (_does_volume_exist(uParam0->f_26))
	{
		_delete_volume(uParam0->f_26);
	}
	if (_does_volume_exist(uParam0->f_27))
	{
		_0x2c87c3e1c7b96ee2(uParam0->f_27);
		_delete_volume(uParam0->f_27);
	}
	if (_does_volume_exist(uParam0->f_28))
	{
		_0x74c2b3dc0b294102(uParam0->f_28);
		_delete_volume(uParam0->f_28);
	}
	_0x9cf1836c03fb67a2(&(uParam0->f_29), 1);
	if (!func_17(8))
	{
		func_18();
	}
	if (!is_entity_dead(iVar1))
	{
		func_19(iVar1, 0);
	}
	func_20(uParam0);
	func_21();
}

void func_5(bool bParam0)
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

void func_6()
{
	Global_1913501 = 1;
}

void func_7()
{
	if (!Global_1071686->f_23887)
	{
		Global_1071686->f_23887 = 1;
	}
}

bool func_8(bool bParam0, bool bParam1)
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

float func_9(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_10(var uParam0)
{
	uParam0->f_4 = func_22(uParam0->f_3);
	if (uParam0->f_4 == 15)
	{
		return;
	}
	uParam0->f_8 = { get_entity_coords(uParam0->f_3, true, false) };
	fVar0 = vdist(Global_1071686->f_23887.f_366[uParam0->f_4]->f_2, uParam0->f_8);
	uParam0->f_2 = 1;
	if (fVar0 > 5f)
	{
		if (decor_exist_on(uParam0->f_3, "fast_travel_camp_barker"))
		{
			iVar1 = decor_get_int(uParam0->f_3, "fast_travel_camp_barker");
			if (func_23(iVar1))
			{
				iVar2 = func_24(iVar1, 1);
				if (_0xd6f6acf4392187fb(iVar2))
				{
					uParam0->f_11 = iVar2;
					uParam0->f_6 = fVar0;
					uParam0->f_5 = 1;
					uParam0->f_7 = round((fVar0 / 1000f));
					uParam0->f_12 = iVar1;
				}
				else
				{
					uParam0->f_2 = 0;
				}
			}
			else
			{
				uParam0->f_2 = 0;
			}
		}
		else
		{
			uParam0->f_2 = 0;
		}
	}
	else
	{
		iVar1 = func_25(_0x901e0dc25080c8b9(player_id()));
		if (iVar1 >= 0)
		{
			uParam0->f_8 = { func_26(iVar1) };
			fVar0 = vdist(Global_1071686->f_23887.f_366[uParam0->f_4]->f_2, uParam0->f_8);
			iVar2 = func_24(iVar1, 1);
			if (_0xd6f6acf4392187fb(iVar2))
			{
				uParam0->f_11 = iVar2;
				uParam0->f_6 = fVar0;
				uParam0->f_7 = round((fVar0 / 1000f));
				uParam0->f_12 = iVar1;
			}
		}
	}
	uParam0->f_19 = func_27("NFT_MENU_OPEN", -719620017, uParam0->f_3, 0, 0, 0, 1, 5, 3.5f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	if (!func_28(uParam0->f_19))
	{
		return;
	}
	func_29(uParam0->f_19, 13, 1, 1);
	uParam0->f_26 = _create_volume_cylinder_with_custom_name(Global_1071686->f_23887.f_366[uParam0->f_4]->f_2, 0f, 0f, 0f, 10.5f, 10.5f, 5.5f, "Fast Travel Ghosting Area");
	uParam0->f_27 = _create_volume_cylinder_with_custom_name(Global_1071686->f_23887.f_366[uParam0->f_4]->f_2, 0f, 0f, 0f, 1f, 1f, 2f, "Fast Travel Navmesh Blocking Area");
	uParam0->f_28 = _create_volume_cylinder_with_custom_name(Global_1071686->f_23887.f_366[uParam0->f_4]->f_2, 0f, 0f, 0f, 2f, 2f, 2f, "Fast Travel Ambient Avoidance Area");
	_0x19c7567d2f2287d6(uParam0->f_27, 7);
	_0xb56d41a694e42e86(uParam0->f_28, 2238463, 0, 0, -1, -1, 0);
	uParam0->f_29 = _0xfa50f79257745e74(Global_1071686->f_23887.f_366[uParam0->f_4]->f_2, 1f, 1, 4, 0);
	uParam0->f_20 = -1;
	func_30(uParam0, 4);
	func_30(uParam0, 2);
	func_30(uParam0, 8);
	func_31(uParam0->f_19, 0, 1, 1);
	func_32(uParam0->f_19, 0, 1);
	func_18();
	func_33(uParam0, 0);
	func_34(uParam0, 1);
}

void func_11(var uParam0)
{
	if (Global_1071686->f_23887.f_2)
	{
		func_34(uParam0, 5);
		return;
	}
	iVar0 = player_id();
	iVar1 = get_player_ped(iVar0);
	if (func_35(32768, network_player_id_to_int()))
	{
		if (!_0xf256a75210c5c0eb(uParam0->f_26, get_entity_coords(iVar1, false, true)))
		{
			func_18();
		}
	}
	bVar2 = false;
	if (busyspinner_is_on())
	{
		func_16();
	}
	if (!uParam0->f_2)
	{
		bVar2 = func_33(uParam0, 2);
	}
	else if (((((is_screen_faded_out() || is_screen_fading_out()) || func_36()) || func_37()) || func_38()) || !is_player_control_on(player_id()))
	{
		bVar2 = func_33(uParam0, 14);
	}
	else if (_0xb655db7582aec805(iVar1))
	{
		bVar2 = func_33(uParam0, 7);
	}
	else if (_is_ped_hogtied(iVar1))
	{
		bVar2 = func_33(uParam0, 8);
	}
	else if (_is_ped_carrying(iVar1))
	{
		bVar2 = func_33(uParam0, 9);
	}
	else if (func_39(255))
	{
		bVar2 = func_33(uParam0, 10);
	}
	else if (func_40(iVar0, 1, 0, 1))
	{
		bVar2 = func_33(uParam0, 5);
	}
	else if (func_41())
	{
		bVar2 = func_33(uParam0, 3);
	}
	else if (func_42())
	{
		bVar2 = func_33(uParam0, 6);
	}
	else if (uParam0->f_5 && !_0x9be7dcb22d32ccbe(uParam0->f_11, iVar0))
	{
		bVar2 = func_33(uParam0, 11);
	}
	else if (func_43())
	{
		bVar2 = func_33(uParam0, 4);
	}
	else if (func_44())
	{
		bVar2 = func_33(uParam0, 16);
	}
	else if (func_45())
	{
		bVar2 = func_33(uParam0, 17);
	}
	else if (func_46())
	{
		bVar2 = func_33(uParam0, 15);
	}
	else if (func_47(iVar0))
	{
		bVar2 = func_33(uParam0, 13);
	}
	else if (func_48(Global_34, 0))
	{
		bVar2 = func_33(uParam0, 18);
	}
	else
	{
		bVar2 = func_33(uParam0, 1);
	}
	switch (uParam0->f_18)
	{
		case 1:
			if (!is_entity_dead(iVar1))
			{
				if (func_9(Global_1071686->f_23887.f_366[uParam0->f_4]->f_2, get_entity_coords(iVar1, false, false)) <= 3.5f)
				{
					func_19(iVar1, 1);
				}
				else
				{
					func_19(iVar1, 0);
				}
			}
			if (bVar2)
			{
				func_31(uParam0->f_19, 1, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_49(uParam0->f_19, 1) > 0f)
			{
				disable_control_action(0, -2131587435, false);
			}
			if (func_50(uParam0->f_19, 1))
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
				func_33(uParam0, 0);
				func_51(32);
				func_34(uParam0, 2);
			}
			break;
		case 14:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 13:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 3:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_MISSION_RUNNING");
			}
			break;
		case 4:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_PASSENGER_HORSE_WARN");
			}
			break;
		case 17:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_PASSENGER_WAGON_WARN");
			}
			break;
		case 16:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_PASSENGER_WAGON_PASSENGER_WARN");
			}
			break;
		case 15:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_HOGTIED_HORSE_WARN");
			}
			break;
		case 5:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_WANTED");
			}
			break;
		case 6:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 7:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 9:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 8:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 10:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 18:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_COMBAT");
			}
			break;
	}
}

void func_12(var uParam0)
{
	if (!_can_launch_app_by_hash(1833066477))
	{
		return;
	}
	else
	{
		if (!func_54(1, 1))
		{
			return;
		}
		if (_launch_app_by_hash(1833066477) == 0)
		{
		}
		else
		{
			return;
		}
	}
	func_55();
	func_30(uParam0, 2);
	func_30(uParam0, 4);
	func_56(uParam0, -931758312);
	func_34(uParam0, 3);
}

void func_13(var uParam0)
{
	iVar0 = player_id();
	iVar1 = get_player_ped(iVar0);
	if (is_player_dead(iVar0))
	{
		func_57(uParam0, 2);
	}
	if (Global_1071686->f_23887.f_2)
	{
		func_57(uParam0, 2);
	}
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 1);
	if (uParam0->f_5)
	{
		if (func_9(uParam0->f_8, get_entity_coords(player_ped_id(), true, false)) > (3.5f + 2f))
		{
			func_57(uParam0, 2);
		}
	}
	else
	{
		iVar2 = func_25(_0x901e0dc25080c8b9(player_id()));
		if (iVar2 >= 0 && iVar2 != uParam0->f_12)
		{
			uParam0->f_8 = { func_26(iVar2) };
			fVar3 = vdist(Global_1071686->f_23887.f_366[uParam0->f_4]->f_2, uParam0->f_8);
			iVar4 = func_24(iVar2, 1);
			if (_0xd6f6acf4392187fb(iVar4))
			{
				uParam0->f_11 = iVar4;
				uParam0->f_6 = fVar3;
				uParam0->f_7 = round((fVar3 / 1000f));
				uParam0->f_12 = iVar2;
			}
		}
		if (func_9(Global_1071686->f_23887.f_366[uParam0->f_4]->f_2, get_entity_coords(player_ped_id(), true, false)) > (3.5f + 2f))
		{
			func_57(uParam0, 2);
		}
	}
	iVar5 = get_mount(player_ped_id());
	if (does_entity_exist(iVar5))
	{
		if (!_is_mount_seat_free(iVar5, 0))
		{
			func_57(uParam0, 2);
		}
	}
	if (func_47(iVar0))
	{
		func_57(uParam0, 2);
	}
	if (!func_58(uParam0, 2))
	{
		func_59(uParam0, &(uParam0->f_20));
		if (uParam0->f_20 == -1)
		{
			return;
		}
		if (func_58(uParam0, 8))
		{
			bVar8 = func_61(func_60(uParam0), &uVar7);
			bVar8 = (bVar8 || func_62(func_60(uParam0), &uVar7));
			if (uParam0->f_20 < 14)
			{
				if (bVar8)
				{
					_databinding_write_data_string(Global_1071686->f_23887.f_5.f_1, _create_var_string(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					sVar6 = _get_label_text_by_hash(&(Global_1071686->f_23887.f_366[uParam0->f_4]->f_5[uParam0->f_20]));
					_databinding_write_data_string(Global_1071686->f_23887.f_5.f_1, _create_var_string(10, "NFT_FOOTER", sVar6));
				}
				_databinding_write_data_string(Global_1071686->f_23887.f_5.f_2, _create_var_string(2, func_63(&(Global_1071686->f_23887.f_366[uParam0->f_4]->f_5[uParam0->f_20]))));
			}
			else if (uParam0->f_20 == 14)
			{
				if (uParam0->f_5)
				{
					if (bVar8)
					{
						_databinding_write_data_string(Global_1071686->f_23887.f_5.f_1, _create_var_string(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						sVar6 = _create_var_string(0, &(Global_1071686->f_23887.f_366[uParam0->f_4]));
						_databinding_write_data_string(Global_1071686->f_23887.f_5.f_1, _create_var_string(10, "NFT_FOOTER", sVar6));
					}
					_databinding_write_data_string(Global_1071686->f_23887.f_5.f_2, _create_var_string(2, func_63(&(Global_1071686->f_23887.f_366[uParam0->f_4]))));
				}
				else
				{
					if (!func_25(_0x901e0dc25080c8b9(player_id())) >= 0)
					{
						_databinding_write_data_string(Global_1071686->f_23887.f_5.f_1, _create_var_string(2, "NFT_NO_CAMP_FOOTER"));
					}
					else if (bVar8)
					{
						_databinding_write_data_string(Global_1071686->f_23887.f_5.f_1, _create_var_string(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						sVar6 = _create_var_string(2, "NFT_LOCATION_TYPE_CAMP_DESC");
						_databinding_write_data_string(Global_1071686->f_23887.f_5.f_1, _create_var_string(10, "NFT_FOOTER", sVar6));
					}
					_databinding_write_data_string(Global_1071686->f_23887.f_5.f_2, _create_var_string(2, "NFT_CAMP_DESC"));
				}
			}
			else if (uParam0->f_20 == 15)
			{
				iVar9 = func_64();
				if (!func_65(iVar9, 1))
				{
					_databinding_write_data_string(Global_1071686->f_23887.f_5.f_1, _create_var_string(2, "NFT_NO_MOONSHINE_FOOTER"));
				}
				else if (bVar8)
				{
					_databinding_write_data_string(Global_1071686->f_23887.f_5.f_1, _create_var_string(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					sVar6 = _create_var_string(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
					_databinding_write_data_string(Global_1071686->f_23887.f_5.f_1, _create_var_string(10, "NFT_FOOTER", sVar6));
				}
				_databinding_write_data_string(Global_1071686->f_23887.f_5.f_2, _create_var_string(2, "NFT_MOONSHINE_DESC"));
			}
			if (uParam0->f_20 < 14)
			{
				iVar10 = func_60(uParam0);
				if (!_network_is_money_balance_not_less_than(func_66(iVar10, 59806960, 1, 0, 1, 0), 0))
				{
					_databinding_add_data_string(Global_1071686->f_23887.f_5.f_4, "subFooter", _create_var_string(2, "NFT_CANT_AFFORD_SHORT"));
				}
				else
				{
					_databinding_add_data_string(Global_1071686->f_23887.f_5.f_4, "subFooter", "");
				}
			}
			else if (uParam0->f_20 == 14)
			{
				if (uParam0->f_5)
				{
					iVar10 = func_67(0, uParam0);
					if (!_network_is_money_balance_not_less_than(func_66(iVar10, 59806960, 1, 0, 1, 0), 0))
					{
						_databinding_add_data_string(Global_1071686->f_23887.f_5.f_4, "subFooter", _create_var_string(2, "NFT_CANT_AFFORD_SHORT"));
					}
					else
					{
						_databinding_add_data_string(Global_1071686->f_23887.f_5.f_4, "subFooter", "");
					}
				}
				else
				{
					iVar10 = func_67(0, uParam0);
					if (!_network_is_money_balance_not_less_than(func_66(iVar10, 59806960, 1, 0, 1, 0), 0))
					{
						_databinding_add_data_string(Global_1071686->f_23887.f_5.f_4, "subFooter", _create_var_string(2, "NFT_CANT_AFFORD_SHORT"));
					}
					else
					{
						_databinding_add_data_string(Global_1071686->f_23887.f_5.f_4, "subFooter", "");
					}
				}
			}
			else if (uParam0->f_20 == 15)
			{
				iVar10 = func_67(0, uParam0);
				if (!_network_is_money_balance_not_less_than(func_66(iVar10, 59806960, 1, 0, 1, 0), 0))
				{
					_databinding_add_data_string(Global_1071686->f_23887.f_5.f_4, "subFooter", _create_var_string(2, "NFT_CANT_AFFORD_SHORT"));
				}
				else
				{
					_databinding_add_data_string(Global_1071686->f_23887.f_5.f_4, "subFooter", "");
				}
			}
			func_30(uParam0, 8);
		}
		if (func_58(uParam0, 4))
		{
			iVar11 = func_60(uParam0);
			switch (func_68(uParam0->f_20, iVar11))
			{
				case 0:
					if (func_61(iVar11, &iVar12))
					{
						uParam0->f_21 = func_69(iVar11, 0, 1, 1, 1, iVar12);
					}
					else if (func_62(iVar11, &iVar12))
					{
						uParam0->f_21 = func_69(iVar11, 0, 1, 1, 1, iVar12);
					}
					else
					{
						uParam0->f_21 = func_69(iVar11, 0, 1, 1, 1, 59806960);
					}
					func_72(uParam0, iVar11, iVar12, func_71(func_70(iVar11, iVar12, 0)));
					func_30(uParam0, 4);
					func_57(uParam0, 2);
					func_20(uParam0);
					func_73(1);
					func_74(0, 72);
					func_34(uParam0, 4);
					return;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					func_53(uParam0, "NFT_CANT_AFFORD");
					func_30(uParam0, 4);
					func_57(uParam0, 2);
					func_20(uParam0);
					break;
				case 5:
					func_53(uParam0, "NFT_NO_CAMP");
					func_30(uParam0, 4);
					func_57(uParam0, 2);
					func_20(uParam0);
					break;
				case 6:
					func_53(uParam0, "NFT_NO_MOONSHINE");
					func_30(uParam0, 4);
					func_57(uParam0, 2);
					func_20(uParam0);
					break;
				case 7:
					func_53(uParam0, "NFT_POSSE_DISBAND");
					func_30(uParam0, 4);
					func_57(uParam0, 2);
					func_20(uParam0);
					break;
			}
		}
	}
	if (func_58(uParam0, 2))
	{
		func_19(iVar1, 0);
		func_75(32);
		func_20(uParam0);
		func_18();
		func_34(uParam0, 1);
	}
}

void func_14(var uParam0)
{
	iVar3 = func_64();
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case 1731288223:
				iVar2 = func_76(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
	if (iVar2 != 2 && iVar2 != 3)
	{
		iVar2 = func_77(uParam0->f_21);
	}
	switch (iVar2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_53(uParam0, "NFT_TRANSACTION_FAILED");
			func_34(uParam0, 1);
			func_74(1, 2);
			break;
		case 3:
			func_78(uParam0);
			if (uParam0->f_20 < 14)
			{
				if ((_get_system_time() - uParam0->f_30) >= 1000)
				{
					if (!func_79(0, &(Global_1071686->f_23887.f_366[uParam0->f_4]->f_5[uParam0->f_20]), 1))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 5);
					}
				}
			}
			else if (uParam0->f_20 == 14)
			{
				if (uParam0->f_5)
				{
					if (!func_79(0, &(Global_1071686->f_23887.f_366[uParam0->f_4]), 1))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 5);
					}
				}
				else if (!func_79(1, 0, 0))
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 5);
				}
			}
			else if (uParam0->f_20 == 15)
			{
				if (func_65(iVar3, 1))
				{
					if (!func_79(2, 0, 0))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 5);
					}
				}
			}
			func_30(uParam0, 4);
			break;
		case 4:
			func_53(uParam0, "NFT_TRANSACTION_FAILED");
			func_34(uParam0, 1);
			break;
		case 5:
			break;
	}
}

bool func_15()
{
	iVar0 = func_80();
	bVar1 = func_81();
	bVar2 = (!is_screen_faded_out() && !&Global_1048581);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
		case 5:
			if (bVar1)
			{
				if (func_82() <= 3)
				{
					if (!is_entity_visible(get_player_ped(player_id())))
					{
						func_74(0, 124);
					}
					else
					{
						func_74(0, 104);
					}
				}
				else if (func_83(2))
				{
					func_74(0, 112);
				}
				else
				{
					func_74(0, 124);
				}
			}
			else if (bVar2)
			{
				func_74(1, 2);
			}
			else if (!is_entity_visible(get_player_ped(player_id())))
			{
				func_74(0, 12);
			}
			else
			{
				func_74(0, 8);
			}
			break;
		case 2:
		case 3:
			if (bVar1)
			{
				func_74(0, 72);
			}
			else if (bVar2)
			{
				func_74(0, 72);
			}
			else
			{
				func_74(0, 8);
			}
			break;
		case 4:
			if (&Global_1102219 != 22)
			{
				if (bVar1)
				{
					bVar3 = &Global_1102219 <= 10;
					if (bVar2)
					{
						if (bVar3)
						{
							func_74(0, 104);
						}
						else
						{
							func_74(0, 124);
						}
					}
					else if (bVar3)
					{
						func_74(0, 40);
					}
					else
					{
						func_74(0, 60);
					}
				}
				else
				{
					bVar3 = Global_1102219->f_3914;
					if (is_entity_dead(player_ped_id()))
					{
						bVar3 = true;
					}
					if ((Global_1102219->f_4[Global_1106305[2]] && (*Global_1106305)[2]->f_1) == (*Global_1106305)[2]->f_1)
					{
						bVar3 = false;
					}
					if ((((Global_1102219->f_4[Global_1106305[70]] && (*Global_1106305)[70]->f_1) == (*Global_1106305)[70]->f_1 || (Global_1102219->f_4[Global_1106305[71]] && (*Global_1106305)[71]->f_1) == (*Global_1106305)[71]->f_1) || (Global_1102219->f_4[Global_1106305[65]] && (*Global_1106305)[65]->f_1) == (*Global_1106305)[65]->f_1) || (Global_1102219->f_4[Global_1106305[66]] && (*Global_1106305)[66]->f_1) == (*Global_1106305)[66]->f_1)
					{
						if (&Global_1102219 > 10)
						{
							bVar3 = false;
						}
					}
					if (bVar2)
					{
						func_84(bVar3, 1, 0, bVar3, 1, 0, 0);
					}
					else
					{
						func_84(bVar3, 1, 0, bVar3, 0, 0, 0);
					}
				}
			}
			else if (bVar1)
			{
				if (bVar2)
				{
					func_74(0, 124);
				}
				else
				{
					func_74(0, 60);
				}
			}
			else if (!(Global_1102219->f_4[Global_1106305[25]] && (*Global_1106305)[25]->f_1) == (*Global_1106305)[25]->f_1)
			{
				if ((Global_1102219->f_4[Global_1106305[59]] && (*Global_1106305)[59]->f_1) == (*Global_1106305)[59]->f_1 || (Global_1102219->f_4[Global_1106305[60]] && (*Global_1106305)[60]->f_1) == (*Global_1106305)[60]->f_1)
				{
					func_74(1, 256);
				}
				else
				{
					func_74(1, 2);
				}
			}
			else
			{
				func_74(0, 8);
			}
			func_85();
			break;
	}
	return is_entity_visible(player_ped_id());
}

void func_16()
{
	Global_1940144->f_105 = -1;
	Global_1940144->f_105.f_1 = 0;
}

bool func_17(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

void func_18()
{
	func_86(0, 4, 0);
	if (_get_global_block_can_be_accessed(4))
	{
		func_87(32768);
	}
}

void func_19(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_88(64))
		{
			set_ped_reset_flag(iParam0, 187, bParam1);
			set_ped_reset_flag(iParam0, 129, bParam1);
			set_ped_reset_flag(iParam0, 219, bParam1);
			set_ped_reset_flag(iParam0, 220, bParam1);
			func_51(64);
		}
	}
	else if (func_88(64))
	{
		set_ped_reset_flag(iParam0, 187, bParam1);
		set_ped_reset_flag(iParam0, 129, bParam1);
		set_ped_reset_flag(iParam0, 219, bParam1);
		set_ped_reset_flag(iParam0, 220, bParam1);
		func_75(64);
	}
}

void func_20(var uParam0)
{
	func_89();
	func_30(uParam0, 2);
	func_30(uParam0, 4);
}

void func_21()
{
	terminate_this_thread();
}

int func_22(int iParam0)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	iVar3 = 0;
	fVar4 = 1E+15f;
	fVar5 = fVar4;
	iVar6 = -1;
	iVar3 = 0;
	while (iVar3 <= 14)
	{
		fVar4 = vdist(vVar0, Global_1071686->f_23887.f_366[iVar3]->f_2);
		if (fVar4 < fVar5)
		{
			fVar5 = fVar4;
			iVar6 = iVar3;
		}
		iVar3++;
	}
	return iVar6;
}

bool func_23(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

int func_24(int iParam0, bool bParam1)
{
	if (!func_23(iParam0))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	if (!network_is_player_active((*Global_1131196)[iParam0]->f_9))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	return _0x901e0dc25080c8b9((*Global_1131196)[iParam0]->f_9);
}

int func_25(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return -1;
	}
	if (iParam0 == _0x901e0dc25080c8b9(player_id()))
	{
		return func_90(player_id());
	}
	return func_91(_0x4be6c13a45cca8ec(iParam0));
}

Vector3 func_26(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

int func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 60)
	{
		if (func_92(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1951255)[iVar0]->f_11 && iParam1 == (*Global_1951255)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1951255[iVar0])
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
				func_93(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_28(int iParam0)
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

void func_29(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_94(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_30(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_31(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_94(iParam0);
	if (bParam1)
	{
		func_95(iParam0, 4);
		if (bParam3)
		{
			func_96(iVar0, 1);
		}
		func_97(iVar0, 1);
	}
	else
	{
		func_98(iParam0, 4);
		func_97(iVar0, 0);
	}
}

void func_32(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_94(iParam0);
	func_96(iVar0, bParam1);
}

int func_33(var uParam0, int iParam1)
{
	if (uParam0->f_18 != iParam1)
	{
		uParam0->f_18 = iParam1;
		return 1;
	}
	return 0;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_30 = _get_system_time();
}

bool func_35(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_36()
{
	return Global_1071686->f_28662.f_65.f_42 != 0;
}

bool func_37()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

bool func_38()
{
	return Global_1071686->f_28662.f_58.f_6 == 2;
}

bool func_39(int iParam0)
{
	return func_99(1, iParam0);
}

int func_40(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_100(bParam1, bParam2, bParam3);
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

bool func_41()
{
	if (Global_1108365->f_935.f_23 && func_101())
	{
		return true;
	}
	if (func_103(func_102(0)))
	{
		if (func_101() && !func_104())
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_42()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

bool func_43()
{
	iVar1 = player_ped_id();
	if (!is_ped_in_any_vehicle(iVar1, false) && !func_105(iVar1))
	{
		return false;
	}
	iVar0 = _0x849bd6c6314793d0(iVar1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!func_106(iVar0))
	{
		return false;
	}
	if (!_0x2e2e06023d07631e(iVar0, -2))
	{
		return false;
	}
	return true;
}

bool func_44()
{
	iVar1 = player_ped_id();
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		return false;
	}
	if (!is_ped_sitting_in_any_vehicle(iVar1))
	{
		return false;
	}
	iVar0 = _0x849bd6c6314793d0(iVar1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!is_entity_a_vehicle(iVar0))
	{
		return false;
	}
	iVar2 = get_vehicle_index_from_entity_index(iVar0);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 < 9)
	{
		iVar4 = iVar3;
		if (get_ped_in_vehicle_seat(iVar2, iVar4) == iVar1)
		{
			iVar5 = 1;
		}
		iVar3++;
	}
	return iVar5;
}

bool func_45()
{
	iVar1 = player_ped_id();
	if (!is_ped_in_any_vehicle(iVar1, false) && !func_105(iVar1))
	{
		return false;
	}
	iVar0 = _0x849bd6c6314793d0(iVar1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!is_entity_a_vehicle(iVar0))
	{
		return false;
	}
	if (!_0x2e2e06023d07631e(iVar0, -2))
	{
		return false;
	}
	return true;
}

bool func_46()
{
	if (!does_entity_exist(Global_1296859->f_8))
	{
		return false;
	}
	if (!is_ped_a_player(Global_1296859->f_8))
	{
		return false;
	}
	iVar0 = func_107(Global_1296859->f_8);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!is_ped_a_player(iVar0))
	{
		return false;
	}
	return true;
}

bool func_47(int iParam0)
{
	if (is_player_dead(iParam0))
	{
		return true;
	}
	if (_0xb655db7582aec805(get_player_ped(iParam0)))
	{
		return true;
	}
	if (_0x038b1f1674f0e242(get_player_ped(iParam0)))
	{
		return true;
	}
	if (func_108())
	{
		return true;
	}
	if (func_109(func_102(0)) == 7)
	{
		return true;
	}
	if (func_110())
	{
		return true;
	}
	if (func_39(255))
	{
		return true;
	}
	if (!func_111(0, 0, 0, 1, 0, 0, 0, 1, 1))
	{
		return true;
	}
	if (func_112())
	{
		return true;
	}
	if (func_113())
	{
		return true;
	}
	if (func_114())
	{
		return true;
	}
	if (Global_1901947->f_681.f_33)
	{
		iVar0 = _0xf49f14462f0ae27c(iParam0);
		if (does_entity_exist(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (!func_115(Global_1904087->f_113[iVar1]->f_1, 0))
				{
				}
				else
				{
					func_116(68, 0);
					return true;
				}
				iVar1++;
			}
		}
	}
	return false;
}

bool func_48(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_49(int iParam0, bool bParam1)
{
	if (bParam1 && !func_28(iParam0))
	{
		return 0f;
	}
	iVar0 = func_94(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1951255)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
}

bool func_50(int iParam0, bool bParam1)
{
	if (bParam1 && !func_28(iParam0))
	{
		return false;
	}
	iVar0 = func_94(iParam0);
	if (_uiprompt_has_hold_auto_fill_mode((*Global_1951255)[iVar0]->f_3))
	{
		if ((*Global_1951255)[iVar0]->f_20)
		{
			iVar1 = get_game_timer();
		}
		else
		{
			iVar1 = _get_system_time();
		}
		uVar2 = _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
		if (!_uiprompt_is_active((*Global_1951255)[iVar0]->f_3))
		{
			iVar3 = (iVar1 - (*Global_1951255)[iVar0]->f_21);
			iVar4 = floor((IntToFloat((*Global_1951255)[iVar0]->f_18) * (1f - (*Global_1951255)[iVar0]->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			(*Global_1951255)[iVar0]->f_21 = iVar1;
			(*Global_1951255)[iVar0]->f_22 = uVar2;
		}
	}
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1951255)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1951255)[iVar0]->f_3);
}

void func_51(int iParam0)
{
	func_117(&(Global_1071686->f_23887.f_4), iParam0);
}

bool func_52(int iParam0, bool bParam1)
{
	if (bParam1 && !func_28(iParam0))
	{
		return false;
	}
	iVar0 = func_94(iParam0);
	return _uiprompt_is_active((*Global_1951255)[iVar0]->f_3);
}

void func_53(var uParam0, char* sParam1)
{
	if (uParam0->f_25 > 0f)
	{
		return;
	}
	func_118(sParam1, 10000, 0, 0, 0, 1);
	uParam0->f_25 = 20f;
}

bool func_54(bool bParam0, int iParam1)
{
	if (!func_119(player_id(), bParam0, iParam1))
	{
		func_120(1, 1);
		return false;
	}
	else if (!func_121(player_id(), bParam0, iParam1))
	{
		return false;
	}
	return true;
}

void func_55()
{
	func_122(0, 4);
	func_123(32768);
}

int func_56(var uParam0, int iParam1)
{
	Global_1071686->f_23887.f_3 = iParam1;
	_databinding_write_data_string(Global_1071686->f_23887.f_5.f_3, _create_var_string(2, func_124(iParam1)));
	func_125(uParam0);
	return 1;
}

void func_57(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_58(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_59(var uParam0, var uParam1)
{
	while (_event_manager_is_event_pending(1833066477))
	{
		if (_event_manager_peek_event(1833066477, &Var0))
		{
			iVar4 = _databinding_read_data_int_from_parent(Var0.f_3, "locationArrayIndex");
			switch (Var0)
			{
				case -1203660660:
					switch (Var0.f_2)
					{
						case -997855324:
							func_57(uParam0, 2);
							break;
						case 42753526:
							func_57(uParam0, 4);
							*uParam1 = iVar4;
							break;
					}
					break;
				case -1740156697:
					switch (Var0.f_2)
					{
						case 42753526:
							func_57(uParam0, 8);
							*uParam1 = iVar4;
							break;
					}
					break;
				case 703281244:
					switch (Var0.f_2)
					{
						case -1517694752:
							func_126(uParam0, 1);
							break;
					}
					break;
				case -722926211:
					switch (Var0.f_2)
					{
						case -1517694752:
							func_126(uParam0, 0);
							break;
					}
					break;
			}
			_event_manager_pop_event(1833066477);
		}
	}
}

int func_60(var uParam0)
{
	if (uParam0->f_20 < 14)
	{
		iVar0 = Global_1071686->f_23887.f_366[uParam0->f_4]->f_5[uParam0->f_20]->f_17;
	}
	else if (uParam0->f_20 == 14)
	{
		if (uParam0->f_5)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (uParam0->f_20 == 15)
	{
		iVar0 = func_127(uParam0);
	}
	return func_67(iVar0, uParam0);
}

bool func_61(int iParam0, int iParam1)
{
	*iParam1 = func_128(iParam0, 1);
	return *iParam1 != 0;
}

bool func_62(int iParam0, int iParam1)
{
	*iParam1 = func_129(iParam0, 1, 0);
	return *iParam1 != 0;
}

char* func_63(var uParam0)
{
	iVar0 = uParam0;
	switch (iVar0)
	{
		case -2040555425:
			return "NFT_BLACKWATER_DESC";
		case 1048602539:
			return "NFT_MANZANITA_DESC";
		case 1736907121:
			return "NFT_STRAWBERRY_DESC";
		case -1067122960:
			return "NFT_COLTER_DESC";
		case -1734290691:
			return "NFT_WAPITI_DESC";
		case 792805517:
			return "NFT_VALENTINE_DESC";
		case -1805494951:
			return "NFT_VAN_HORN_DESC";
		case -1934798422:
			return "NFT_ANNESBERG_DESC";
		case -200062769:
			return "NFT_EMERALD_DESC";
		case 1426955875:
			return "NFT_RHODES_DESC";
		case -423969023:
			return "NFT_LAGRAS_DESC";
		case 802776412:
			return "NFT_TUMBLEWEED_DESC";
		case 1158633383:
			return "NFT_MACFARLANES_DESC";
		case -1792739478:
			return "NFT_ARMADILLO_DESC";
		case 1525531195:
			return "NFT_SAINT_DENIS_DESC";
	}
	return "";
}

int func_64()
{
	return Global_1298166->f_200;
}

bool func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0) || !network_is_player_active(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (!func_130(Global_1298536[iVar0]))
	{
		return false;
	}
	if ((*Global_1298536)[iVar0]->f_5.f_12 == -1)
	{
		return false;
	}
	return true;
}

int func_66(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_131(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_132(iParam0))
	{
		return func_134(func_133(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_135(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_67(int iParam0, var uParam1)
{
	if (uParam1->f_5 || (uParam1->f_7 != 0 && iParam0 == 0))
	{
		iParam0 = (iParam0 + uParam1->f_7);
	}
	switch (iParam0)
	{
		case 1:
			return -1224135119;
		case 2:
			return -1540978580;
		case 3:
			return -1837275878;
		case 4:
			return 307422403;
		case 5:
			return 5849296;
		case 6:
			return -316007822;
		case 7:
			return -605358092;
		case 8:
			return 455865965;
		case 9:
			return 158356214;
		case 10:
			return -1476715399;
		case 11:
			return -1297534507;
		case 12:
			return 1282532708;
		case 13:
			return 482346497;
		case 14:
			return 1858054659;
		case 15:
			return 1100140454;
		case 16:
			return 1100140454;
		default:
			break;
	}
	if (iParam0 <= 0)
	{
		return -1224135119;
	}
	return 1100140454;
}

int func_68(int iParam0, int iParam1)
{
	if (!func_115(iParam1, 0))
	{
		return 1;
	}
	if (func_136(iParam1) != 1388422710)
	{
		return 2;
	}
	if (!func_61(iParam1, &uVar0))
	{
		iVar1 = func_66(iParam1, 59806960, 1, 0, 1, 0);
		if (iVar1 < 0 || !func_131(iParam1, 59806960))
		{
			return 3;
		}
		if (!_network_is_money_balance_not_less_than(iVar1, 0) && iVar1 != 0)
		{
			return 4;
		}
	}
	if (iParam0 == 14)
	{
		if (!func_25(_0x901e0dc25080c8b9(player_id())) >= 0)
		{
			return 5;
		}
	}
	if (iParam0 == 15)
	{
		iVar2 = func_64();
		if (!func_65(iVar2, 1))
		{
			return 6;
		}
	}
	return 0;
}

int func_69(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!func_115(iParam0, 0))
	{
		return -1;
	}
	if (func_137(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_138())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_66(iParam0, iParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_66(iParam0, iParam5, 1, 0, 1, 773203532) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!_network_is_money_balance_not_less_than(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_135(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_139(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_140(0))
	{
		if (iVar0 > 0)
		{
			func_141(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_141(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_142(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_141(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_143(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_144(iVar52, Var53);
	}
	return iVar52;
}

int func_70(int iParam0, int iParam1, bool bParam2)
{
	if (!func_135(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_145(&(Var0[iVar32])))
		{
			return &(Var0[iVar32]);
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

int func_71(int iParam0)
{
	iVar0 = -1;
	if (!func_145(iParam0))
	{
		return iVar0;
	}
	iVar0 = 74330131;
	Var1 = { func_146(iParam0, 0, 0) };
	Var6 = { func_147(iParam0, Var1, Var1.f_4, 0) };
	if (!func_148(&Var6))
	{
		return -1;
	}
	if (func_149(Var6))
	{
		iVar0 = 90473367;
	}
	return iVar0;
}

void func_72(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_23 = iParam2;
	uParam0->f_22 = iParam1;
	uParam0->f_24 = iParam3;
}

void func_73(int iParam0)
{
	iVar0 = get_id_of_this_thread();
	if (_does_thread_exist(Global_1940144->f_105.f_1) && Global_1940144->f_105.f_1 != iVar0)
	{
		return;
	}
	Global_1940144->f_105.f_1 = iVar0;
	Global_1940144->f_105 = iParam0;
}

void func_74(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_150(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_84(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_75(int iParam0)
{
	func_151(&(Global_1071686->f_23887.f_4), iParam0);
}

int func_76(int iParam0, var uParam1)
{
	iVar6 = get_event_at_index(1, iParam0);
	if (!get_event_data(1, iParam0, &Var0, 6))
	{
		return 1;
	}
	Var8.f_9 = -1591664384;
	iVar22 = Var0.f_5;
	if (iVar6 != 1731288223)
	{
		return 1;
	}
	if (Var0 != uParam1->f_21)
	{
		return 1;
	}
	if (Var0.f_2 == 1)
	{
		return 2;
	}
	iVar7 = 0;
	while (iVar7 < Var0.f_4)
	{
		if (_cashinventory_transaction_response_get_item_info(Var0, iVar7, &Var8))
		{
			if (!func_115(Var8.f_8, 0))
			{
			}
			else
			{
				if (iVar22 == 1702063850)
				{
					return 3;
				}
			}
		}
		iVar7++;
	}
	return 1;
}

int func_77(int iParam0)
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

void func_78(var uParam0)
{
	if (!func_152(uParam0))
	{
		return;
	}
	if (!func_153(uParam0->f_21, &uVar0))
	{
		func_154(uParam0);
		return;
	}
	iVar4 = func_70(uParam0->f_22, uParam0->f_23, 0);
	_0x621d719c4836292b(&uVar0, func_155(iVar4), iVar4, uParam0->f_24, uParam0->f_22, -614895324);
	func_154(uParam0);
}

bool func_79(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = get_player_index();
	iVar1 = player_ped_id();
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	if (func_108())
	{
		if (bParam2)
		{
		}
		else
		{
			return false;
		}
	}
	switch (iParam0)
	{
		case 0:
			iVar10 = func_156(iParam1);
			if (iVar10 < 0)
			{
				return false;
			}
			func_157();
			func_158();
			bVar11 = true;
			if (func_159(0) && func_160(0))
			{
				bVar11 = false;
			}
			if (bVar11)
			{
				if (func_161(iVar1))
				{
					func_162(0, 1, 1);
				}
				else if (func_163(iVar0))
				{
					func_162(0, 1, 1);
				}
				else if (func_164())
				{
					func_165();
				}
				else if (func_105(iVar1))
				{
					func_166(1, 1);
				}
				else
				{
					iVar12 = _0xf49f14462f0ae27c(iVar0);
					if (does_entity_exist(iVar12))
					{
						if (vdist(get_entity_coords(iVar1, false, false), get_entity_coords(iVar12, false, false)) < 15f)
						{
							func_167(1, 1);
						}
					}
				}
			}
			func_168(&(Global_1071686->f_23887.f_366[iVar10]));
			func_169(0, 1017438712);
			func_170();
			if (func_171())
			{
				iVar2 = 954940763;
			}
			else
			{
				iVar2 = func_173(func_172(), 0);
			}
			_0x7cef4ac79f7e7fad(iVar2, func_173(func_174(Global_1071686->f_23887.f_366[iVar10]->f_2, 1), 0), Global_1071686->f_23887.f_366[iVar10]->f_2);
			return true;
		case 1:
			if (!func_175(iVar0, 0))
			{
				return false;
			}
			func_157();
			func_158();
			if (func_161(iVar1))
			{
				func_162(0, 1, 1);
			}
			else if (func_163(iVar0))
			{
				func_162(0, 1, 1);
			}
			else if (func_164())
			{
				func_165();
			}
			func_176();
			func_169(0, 1017438712);
			func_170();
			iVar2 = 954940763;
			_0x7cef4ac79f7e7fad(func_173(func_172(), 0), iVar2, func_26(func_90(player_id())));
			return true;
		case 2:
			iVar3 = func_64();
			if (!func_65(iVar3, 1))
			{
				return false;
			}
			iVar4 = func_177(iVar3, 1);
			iVar5 = 1;
			if (iVar3 == iVar0)
			{
				iVar5 = 0;
			}
			vVar6 = { func_178(iVar4, iVar5) };
			fVar9 = func_179(iVar4, iVar5);
			func_180(vVar6, fVar9, 2f, 25f, 1, 1, 1);
			func_169(0, 1017438712);
			func_170();
			iVar2 = -1840671857;
			_0x7cef4ac79f7e7fad(func_173(func_172(), 0), iVar2, vVar6);
			return true;
	}
	return true;
}

int func_80()
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

int func_81()
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
	if (func_83(2048))
	{
		return 1;
	}
	if (func_181(1))
	{
		return 1;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	return Global_1102219->f_26.f_3337;
}

bool func_83(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

void func_84(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = player_id();
	iVar1 = player_ped_id();
	iVar2 = 0;
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	set_player_control(iVar0, false, iVar2, false);
	set_entity_visible(iVar1, bParam0);
	_0x18ff3110cf47115d(iVar1, 2, bParam0);
	_0x18ff3110cf47115d(iVar1, 3, bParam0);
	_0x18ff3110cf47115d(iVar1, 11, bParam0);
	_0x18ff3110cf47115d(iVar1, 12, bParam0);
	_0x18ff3110cf47115d(iVar1, 1, bParam0);
	_0x18ff3110cf47115d(iVar1, 0, bParam0);
	if (bParam1)
	{
		set_player_invincible(iVar0, true);
	}
	if ((!is_ped_in_any_vehicle(iVar1, true) && !is_entity_attached_to_any_object(iVar1)) && !is_entity_attached_to_any_ped(iVar1))
	{
		if (bParam2)
		{
			set_entity_collision(iVar1, false, false);
			set_entity_completely_disable_collision(iVar1, false, false);
			freeze_entity_position(iVar1, true);
		}
	}
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		if (_0x9ff5f9b24e870748(iVar1))
		{
			clear_ped_tasks_immediately(iVar1, false, !bParam6);
		}
	}
}

void func_85()
{
	if (func_17(36))
	{
		iVar0 = player_ped_id();
		set_entity_coords(iVar0, Global_1102219->f_3897, false, false, true, true);
		set_entity_invincible(iVar0, true);
		set_entity_visible(iVar0, false);
		set_entity_collision(iVar0, false, false);
		set_entity_completely_disable_collision(iVar0, false, false);
		set_ped_can_be_targetted(iVar0, false);
		freeze_entity_position(iVar0, true);
		set_ped_config_flag(iVar0, 301, true);
		set_ped_config_flag(iVar0, 277, true);
		set_ped_config_flag(iVar0, 417, true);
		set_ped_config_flag(iVar0, 394, true);
		set_ped_config_flag(iVar0, 253, true);
		set_blocking_of_non_temporary_events(iVar0, true);
	}
}

void func_86(int iParam0, int iParam1, bool bParam2)
{
	if (func_182(iParam0, iParam1) && (!bParam2 || &Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] == get_id_of_this_thread()))
	{
		clear_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = 0;
		func_183();
	}
}

void func_87(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 - (Global_1102219->f_3 && iParam0));
}

bool func_88(int iParam0)
{
	return (Global_1071686->f_23887.f_4 && iParam0) != 0;
}

void func_89()
{
	if (func_119(player_id(), 1, 1))
	{
		func_120(0, 1);
	}
	_close_app_by_hash(1833066477);
}

int func_90(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

int func_91(int iParam0)
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

bool func_92(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_93(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_96(iParam0, 1);
	func_97(iParam0, 1);
	func_98(iParam0, 128);
}

int func_94(int iParam0)
{
	return iParam0;
}

void func_95(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_96(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_92(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_97(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_98(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_99(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_184(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_185())
	{
		return func_184(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_184(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_100(bool bParam0, bool bParam1, bool bParam2)
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

bool func_101()
{
	return Global_1108365->f_935.f_28 != -1;
}

struct<2> func_102(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_103(struct<2> Param0)
{
	if (!func_186(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_187(Param0))
	{
		return false;
	}
	return true;
}

bool func_104()
{
	switch (Global_1108365->f_935.f_28)
	{
		case 6:
			return true;
		case 7:
			if (func_188())
			{
				return true;
			}
			return false;
		default:
			break;
	}
	return false;
}

bool func_105(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_106(int iParam0)
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

int func_107(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		iVar0 = func_189(iParam0);
		if (!does_entity_exist(iVar0) && is_ped_on_mount(iParam0))
		{
			iVar0 = func_189(get_mount(iParam0));
		}
	}
	return iVar0;
}

bool func_108()
{
	if (!_unlock_is_unlocked(1636781897))
	{
		return true;
	}
	if (func_41())
	{
		return true;
	}
	return func_88(2);
}

int func_109(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_110()
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
	if (!func_103(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_111(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!bParam7 && _is_any_app_running())
	{
		return false;
	}
	iVar0 = &Global_1296859->f_154[&Global_1296859];
	iVar1 = Global_1296859->f_8;
	bVar2 = is_entity_dead(iVar1);
	bVar3 = _0xb655db7582aec805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return false;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (_0xec7e480ff8bd0bed(Global_34))
			{
				return false;
			}
			if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
			{
				return false;
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
				return false;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
		{
			return false;
		}
		if (_0xd04241bbf6d03a5e(Global_34) != 0)
		{
			return false;
		}
	}
	if (func_190())
	{
		return false;
	}
	if (Global_15)
	{
		return false;
	}
	if (!bParam2 && (((Global_1940144->f_10 || Global_1940144->f_11) || Global_1940144->f_12) || Global_1940144->f_13))
	{
		return false;
	}
	if (!bParam3)
	{
		iVar4 = network_player_id_to_int();
		if (Global_1248240->f_9297 != -1)
		{
			return false;
		}
		if ((*Global_1128574)[iVar4]->f_34 & 1 != 0 && (*Global_1128574)[iVar4]->f_34 & 2 == 0)
		{
			return false;
		}
		if (Global_1130634->f_293)
		{
			return false;
		}
		if (Global_1572887->f_106.f_75 > 11 && Global_1572887->f_106.f_75 < 15)
		{
			return false;
		}
		else if (Global_1572887->f_106.f_75 > 15)
		{
			return false;
		}
	}
	if (!bParam8)
	{
		if ((_get_global_block_can_be_accessed(2) && _get_global_block_can_be_accessed(8)) && _get_global_block_can_be_accessed(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return false;
			}
			if (&Global_1048581)
			{
				return false;
			}
			if (&Global_1048585)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_112()
{
	return Global_1896738->f_382;
}

bool func_113()
{
	return Global_1940311->f_1;
}

bool func_114()
{
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (!does_entity_exist(iVar0))
	{
		if (func_191(65536, 255))
		{
			func_192(65536);
		}
		return false;
	}
	if (func_191(65536, 255))
	{
		return true;
	}
	return false;
}

bool func_115(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_116(int iParam0, bool bParam1)
{
	func_193(iParam0, &iVar0, &iVar1);
	if (!func_194(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_195(iVar0, iVar1);
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_118(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_119(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return iParam2;
		}
		if (!network_is_player_active(iParam0))
		{
			return iParam2;
		}
	}
	if (!does_entity_exist(_0xf49f14462f0ae27c(iParam0)))
	{
		return iParam2;
	}
	return func_196((*Global_1291106)[iParam0]->f_4, 1);
}

void func_120(bool bParam0, bool bParam1)
{
	iVar0 = player_id();
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iVar0))
		{
			return;
		}
		if (!network_is_player_active(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (func_196((*Global_1291106)[iVar1]->f_4, 1) != bParam0)
	{
		if (bParam0)
		{
			func_117(&((*Global_1291106)[iVar1]->f_4), 1);
		}
		else
		{
			func_151(&((*Global_1291106)[iVar1]->f_4), 1);
		}
		func_151(&((*Global_1291106)[iVar1]->f_4), 2);
		if (bParam0)
		{
			func_197(&(Global_1291734->f_11.f_556));
		}
		else
		{
			func_198(&(Global_1291734->f_11.f_556));
		}
	}
}

bool func_121(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return iParam2;
		}
		if (!network_is_player_active(iParam0))
		{
			return iParam2;
		}
	}
	if (!does_entity_exist(_0xf49f14462f0ae27c(iParam0)))
	{
		return iParam2;
	}
	return func_196((*Global_1291106)[iParam0]->f_4, 2);
}

void func_122(int iParam0, int iParam1)
{
	if (!func_182(iParam0, iParam1))
	{
		set_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = get_id_of_this_thread();
		func_183();
	}
}

void func_123(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 || iParam0);
}

char* func_124(int iParam0)
{
	switch (iParam0)
	{
		case -931758312:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case -2021996203:
			return "TITHE_AMBARINO";
		case -1898198457:
			return "TITHE_LEMOYNE";
		case 1316689641:
			return "TITHE_WEST_ELIZABETH";
		case 147265738:
			return "TITHE_NEW_HANOVER";
		case -793104390:
			return "TITHE_NEW_AUSTIN";
	}
	return "ALL";
}

void func_125(var uParam0)
{
	_databinding_clear_binding_array(Global_1071686->f_23887.f_5.f_5);
	Var1 = 1;
	Var1.f_1 = 1;
	Var1.f_2 = 1105014447;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_10 = -1;
	Var1.f_11 = -1;
	Var1.f_12 = -1;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (func_199(&(Global_1071686->f_23887.f_366[uParam0->f_4]->f_5[iVar0])))
		{
			iVar20 = func_67(Global_1071686->f_23887.f_366[uParam0->f_4]->f_5[iVar0]->f_17, uParam0);
			if (func_61(iVar20, &iVar22))
			{
				iVar21 = 0;
				Var1 = 1;
			}
			else if (func_62(iVar20, &iVar22))
			{
				iVar21 = func_66(iVar20, iVar22, 1, 0, 1, 0);
				if (iVar21 != 0)
				{
					Var1 = _network_is_money_balance_not_less_than(iVar21, 0);
				}
				else
				{
					Var1 = 1;
				}
			}
			else
			{
				iVar21 = func_66(iVar20, 59806960, 1, 0, 1, 0);
				if (iVar21 != 0)
				{
					Var1 = _network_is_money_balance_not_less_than(iVar21, 0);
				}
				else
				{
					Var1 = 1;
				}
			}
			Var1.f_16 = _create_var_string(0, &(Global_1071686->f_23887.f_366[uParam0->f_4]->f_5[iVar0]));
			Var1.f_1 = 1;
			Var1.f_2 = 1105014447;
			Var1.f_3 = 0;
			Var1.f_17 = iVar21;
			Var1.f_18 = iVar21;
			Var1.f_6 = 42753526;
			Var1.f_5 = 42753526;
			Var1.f_4 = 1833066477;
			func_200(Global_1071686->f_23887.f_5.f_7[iVar0], Var1, iVar0);
		}
		iVar0++;
	}
	func_201(uParam0);
	func_202(uParam0);
}

void func_126(var uParam0, bool bParam1)
{
	iVar0 = func_203();
	iVar1 = func_204(bParam1, 1, -1);
	iVar2 = (func_205(iVar0, 1) + iVar1);
	if (iVar2 < 1)
	{
		iVar2 = 6;
	}
	else if (iVar2 > 6)
	{
		iVar2 = 1;
	}
	iVar0 = func_206(iVar2, 1);
	func_56(uParam0, iVar0);
}

int func_127(var uParam0)
{
	iVar1 = func_64();
	if (!func_65(iVar1, 1))
	{
		iVar0 = 1;
		return iVar0;
	}
	iVar2 = func_177(iVar1, 1);
	vVar3 = { func_178(iVar2, 1) };
	fVar6 = func_9(vVar3, Global_35);
	uParam0->f_16 = round((fVar6 / 1000f));
	if (uParam0->f_16 == 0)
	{
		uParam0->f_16 = 1;
	}
	return (iVar0 + uParam0->f_16);
}

int func_128(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_207(iVar0, 1, 0);
		if (!func_135(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_208(&(Var2[iVar34])))
				{
					if (!bParam1 || func_139(&(Var2[iVar34]), 0, 1, 1) > 0)
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

int func_129(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_207(iVar0, 0, 1);
		if (!func_135(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_209(&(Var9[iVar41])))
				{
					if (!bParam1 || func_139(&(Var9[iVar41]), 0, 1, 1) > 0)
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

bool func_130(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 32);
}

bool func_131(int iParam0, int iParam1)
{
	if (!func_115(iParam0, 0))
	{
		return false;
	}
	if (func_132(iParam0))
	{
		return func_210(func_133(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_132(int iParam0)
{
	if (func_211(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_133(int iParam0, bool bParam1)
{
	if (!func_115(iParam0, 0))
	{
		return func_213(func_212(iParam0), bParam1);
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

int func_134(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_214(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_135(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_115(iParam0, 0))
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
		func_215(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_136(int iParam0)
{
	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_137(int iParam0)
{
	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_138()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

int func_139(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_137(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_216(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_217(iParam0, 0);
	}
	if (func_218(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_219(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_220(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_219(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_140(bool bParam0)
{
	if (func_221() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_219(bParam0));
}

bool func_141(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_115(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_218(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_222(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_146(iParam0, bParam4, 0) };
	Var6 = { func_147(iParam0, Var1, Var1.f_4, bParam4) };
	return func_223(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_142(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_143(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_224(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_226(func_225(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_227(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_144(int iParam0, struct<17> Param1)
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

bool func_145(int iParam0)
{
	if (func_136(iParam0) == -126813555 || func_136(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

struct<5> func_146(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_228(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_137(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_147(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_229(bParam1) };
			if (bParam2 && func_230(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_231(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_231(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_232(iParam0, &Var6, 1728382685))
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
			Var0 = { func_233(bParam1) };
			switch (func_136(iParam0))
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
			if (func_234(iParam0, -1823706425))
			{
				Var0 = { func_147(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_234(iParam0, -1483207246))
			{
				Var0 = { func_147(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_147(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_234(iParam0, -1653629781))
			{
				Var0 = { func_147(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_235(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_234(iParam0, -1653629781))
			{
				Var0 = { func_147(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_147(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_115(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_219(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_148(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_149(struct<4> Param0)
{
	if (!func_148(&Param0))
	{
		return false;
	}
	if (func_236(&Param0))
	{
		return false;
	}
	return func_238(func_237(Param0));
}

void func_150(int iParam0)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	set_entity_visible(iVar1, true);
	_0x18ff3110cf47115d(iVar1, 2, true);
	_0x18ff3110cf47115d(iVar1, 3, true);
	_0x18ff3110cf47115d(iVar1, 11, true);
	_0x18ff3110cf47115d(iVar1, 12, true);
	_0x18ff3110cf47115d(iVar1, 1, true);
	_0x18ff3110cf47115d(iVar1, 0, true);
	set_ped_can_ragdoll(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		set_player_control(iVar0, true, 0, false);
	}
	else
	{
		set_player_control(iVar0, true, 4, false);
	}
	freeze_entity_position(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_239();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_151(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_152(var uParam0)
{
	if (uParam0->f_23 == 0)
	{
		return false;
	}
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	if (uParam0->f_24 == -1)
	{
		return false;
	}
	return true;
}

bool func_153(var uParam0, var uParam1)
{
	if (_0xf184b3ece36219cf(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

void func_154(var uParam0)
{
	uParam0->f_24 = -1;
	uParam0->f_23 = 0;
	uParam0->f_22 = 0;
}

int func_155(int iParam0)
{
	return func_240(iParam0);
}

int func_156(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (&Global_1071686->f_23887.f_366[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_157()
{
	func_241(1);
	func_242(1);
}

void func_158()
{
	if (get_player_wanted_level(player_id()) > 0)
	{
		clear_player_wanted_level(player_id());
	}
}

int func_159(bool bParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_243(&Var0, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_160(bool bParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_244(&Var0, bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_161(int iParam0)
{
	if (!is_ped_in_any_vehicle(iParam0, false))
	{
		return false;
	}
	iVar0 = get_vehicle_ped_is_using(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (get_ped_in_vehicle_seat(iVar0, -1) != iParam0)
	{
		return false;
	}
	iVar1 = network_get_player_index_from_ped(iParam0);
	if (!_network_is_player_index_valid(iVar1))
	{
		return false;
	}
	iVar2 = _0xb9050a97594c8832(iVar1);
	if (!does_entity_exist(iVar2))
	{
		return false;
	}
	if (iVar0 != iVar2)
	{
		return false;
	}
	return true;
}

void func_162(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_245(74);
		if (bParam2)
		{
			func_245(72);
		}
		Global_1102219->f_3802 = iParam0;
	}
	else
	{
		func_246(74);
		func_246(72);
	}
}

bool func_163(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	iVar0 = _0xb9050a97594c8832(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = get_player_ped(iParam0);
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	if (func_247(iVar1, iVar0, 1, 1) > 25f)
	{
		return false;
	}
	return true;
}

bool func_164()
{
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (get_vehicle_number_of_passengers(iVar0) > 0)
	{
		return false;
	}
	return true;
}

void func_165()
{
	if (func_248(8, 255))
	{
		return;
	}
	func_249(3);
}

void func_166(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_245(66);
		if (bParam1)
		{
			func_245(69);
		}
	}
	else
	{
		func_246(66);
		func_246(69);
	}
}

void func_167(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_245(62);
		if (bParam1)
		{
			func_245(69);
		}
	}
	else
	{
		func_246(62);
		func_246(50);
		func_246(69);
	}
}

void func_168(int iParam0)
{
	func_250(iParam0, 1);
}

int func_169(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_251())
	{
		return 0;
	}
	if (!func_252())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_253(&Global_0, 8);
	}
	func_253(&Global_0, 1);
	return 1;
}

void func_170()
{
	if (Global_1291734->f_1403.f_5 == 1)
	{
		return;
	}
	Global_1291734->f_1403.f_5 = 1;
}

bool func_171()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_254(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_172()
{
	return Global_1893587->f_2;
}

int func_173(int iParam0, bool bParam1)
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

int func_174(vector3 vParam0, int iParam3)
{
	iVar0 = func_172();
	if (func_255(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_256(vParam0, iParam3);
}

bool func_175(int iParam0, bool bParam1)
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
			func_118("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	iVar1 = _0x901e0dc25080c8b9(iParam0);
	if (func_23(func_25(iVar1)))
	{
		return true;
	}
	if (bParam1)
	{
		func_118("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return false;
}

void func_176()
{
	func_257(1);
	func_258(1, 1);
}

int func_177(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return -1;
		}
	}
	return (*Global_1298536)[iParam0]->f_5.f_12;
}

Vector3 func_178(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam1 == -1)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	func_261(1268215321, func_259(iParam0), func_260(iParam1), 0);
	if (!_datafile_get_vector(&vVar0, &(Global_1298378->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

float func_179(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam1 == -1)
	{
		return 0f;
	}
	fVar0 = 0f;
	func_261(-226869021, func_259(iParam0), func_260(iParam1), 0);
	if (!_datafile_get_float(&fVar0, &(Global_1298378->f_1)))
	{
		return 0f;
	}
	return fVar0;
}

void func_180(vector3 vParam0, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	fVar3 = fParam3;
	if (!func_262(Global_1296859->f_17, &vVar0, &fVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		fVar3 = fParam3;
	}
	func_263(vParam0, fParam3, vVar0, fVar3, fParam4, fParam5, iParam6, iParam7, fParam8, 1);
}

bool func_181(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_182(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_1071686->f_22538.f_385[iParam0]), iParam1);
}

void func_183()
{
	_0x20f4cb76689acdbc(&(Global_1071686->f_21416.f_260));
}

bool func_184(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_185()
{
	return Global_1102219->f_3672;
}

bool func_186(int iParam0)
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

int func_187(int iParam0)
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

bool func_188()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_264(iVar0, 8192))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_189(int iParam0)
{
	iVar0 = func_265(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (_is_ped_hogtied(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_190()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

bool func_191(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_1 && iParam0) != 0;
}

void func_192(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_1 = ((*Global_1291106)[iVar0]->f_1 - ((*Global_1291106)[iVar0]->f_1 && iParam0));
}

void func_193(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_194(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_266(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_267(iParam0))
	{
		return false;
	}
	if (func_268(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_269(iParam0, 1)) || func_270(32768))
	{
		if (!func_269(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_271())
	{
		return false;
	}
	return true;
}

void func_195(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_196(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_197(var uParam0)
{
	func_272(uParam0, 0f);
}

void func_198(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_199(var uParam0)
{
	iVar0 = func_203();
	if (iVar0 == -931758312)
	{
		return true;
	}
	return func_273(uParam0) == iVar0;
}

void func_200(var uParam0, struct<19> Param1, int iParam20)
{
	func_274(uParam0, Param1, iParam20);
	Global_1071686->f_23887.f_5.f_302[iParam20] = _databinding_add_data_int(&(Global_1071686->f_23887.f_5.f_7[iParam20]), "locationArrayIndex", iParam20);
}

void func_201(var uParam0)
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
	bVar19 = true;
	if (uParam0->f_5)
	{
		if (func_61(func_67(0, uParam0), &iVar21))
		{
			iVar20 = 0;
			Var0 = 1;
		}
		else if (func_62(func_67(0, uParam0), &iVar21))
		{
			iVar20 = func_66(func_67(0, uParam0), iVar21, 1, 0, 1, 0);
			Var0 = _network_is_money_balance_not_less_than(iVar20, 0);
		}
		else
		{
			iVar20 = func_66(func_67(0, uParam0), 59806960, 1, 0, 1, 0);
			Var0 = _network_is_money_balance_not_less_than(iVar20, 0);
		}
		Var0.f_1 = 1;
		Var0.f_2 = 1105014447;
		Var0.f_3 = 0;
		Var0.f_16 = "";
		Var0.f_16 = _create_var_string(0, &(Global_1071686->f_23887.f_366[uParam0->f_4]));
		Var0.f_17 = iVar20;
		Var0.f_18 = iVar20;
		Var0.f_6 = 42753526;
		Var0.f_5 = 42753526;
		Var0.f_4 = 1833066477;
		func_275(&(Global_1071686->f_23887.f_5.f_317), Var0, 14);
		return;
	}
	else if (!func_25(_0x901e0dc25080c8b9(player_id())) >= 0)
	{
		bVar19 = false;
	}
	if (func_61(func_67(0, uParam0), &iVar21))
	{
		iVar20 = 0;
		Var0 = bVar19;
	}
	else if (func_62(func_67(0, uParam0), &iVar21))
	{
		iVar20 = func_66(func_67(0, uParam0), iVar21, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (_network_is_money_balance_not_less_than(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	else
	{
		iVar20 = func_66(func_67(0, uParam0), 59806960, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (_network_is_money_balance_not_less_than(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_3 = 0;
	Var0.f_16 = "";
	Var0.f_16 = _create_var_string(2, "NFT_LOCATION_TYPE_CAMP_DESC");
	Var0.f_17 = iVar20;
	Var0.f_18 = iVar20;
	Var0.f_6 = 42753526;
	Var0.f_5 = 42753526;
	Var0.f_4 = 1833066477;
	func_275(&(Global_1071686->f_23887.f_5.f_317), Var0, 14);
}

void func_202(var uParam0)
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
	bVar19 = true;
	iVar23 = func_64();
	if (func_65(iVar23, 1))
	{
		iVar21 = func_127(uParam0);
		if (func_61(func_67(0, uParam0), &iVar22))
		{
			iVar20 = 0;
			Var0 = 1;
		}
		else if (func_62(func_67(0, uParam0), &iVar22))
		{
			iVar20 = func_66(func_67(iVar21, uParam0), iVar22, 1, 0, 1, 0);
			Var0 = _network_is_money_balance_not_less_than(iVar20, 0);
		}
		else
		{
			iVar20 = func_66(func_67(iVar21, uParam0), 59806960, 1, 0, 1, 0);
			Var0 = _network_is_money_balance_not_less_than(iVar20, 0);
		}
		Var0.f_1 = 1;
		Var0.f_2 = 1105014447;
		Var0.f_3 = 0;
		Var0.f_16 = "";
		Var0.f_16 = _create_var_string(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
		Var0.f_17 = iVar20;
		Var0.f_18 = iVar20;
		Var0.f_6 = 42753526;
		Var0.f_5 = 42753526;
		Var0.f_4 = 1833066477;
		func_276(&(Global_1071686->f_23887.f_5.f_339), Var0, 15);
		return;
	}
	else
	{
		bVar19 = false;
	}
	if (func_61(func_67(0, uParam0), &iVar22))
	{
		iVar20 = 0;
		Var0 = bVar19;
	}
	else if (func_62(func_67(0, uParam0), &iVar22))
	{
		iVar20 = func_66(func_67(0, uParam0), iVar22, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (_network_is_money_balance_not_less_than(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	else
	{
		iVar20 = func_66(func_67(0, uParam0), 59806960, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (_network_is_money_balance_not_less_than(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_3 = 0;
	Var0.f_16 = "";
	Var0.f_16 = _create_var_string(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
	Var0.f_17 = iVar20;
	Var0.f_18 = iVar20;
	Var0.f_6 = 42753526;
	Var0.f_5 = 42753526;
	Var0.f_4 = 1833066477;
	func_276(&(Global_1071686->f_23887.f_5.f_339), Var0, 15);
}

var func_203()
{
	return Global_1071686->f_23887.f_3;
}

int func_204(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_205(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2021996203:
			return 2;
		case -1898198457:
			return 3;
		case -931758312:
			return 1;
		case -793104390:
			return 6;
		case 0:
			return 0;
		case 147265738:
			return 5;
		case 1316689641:
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

int func_206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return -931758312;
		case 2:
			return -2021996203;
		case 3:
			return -1898198457;
		case 4:
			return 1316689641;
		case 5:
			return 147265738;
		case 6:
			return -793104390;
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

int func_207(int iParam0, bool bParam1, bool bParam2)
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

bool func_208(int iParam0)
{
	return func_136(iParam0) == 1946043663;
}

bool func_209(int iParam0)
{
	return func_136(iParam0) == -126813555;
}

bool func_210(int iParam0, int iParam1, bool bParam2)
{
	if (!func_277(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_278(iParam0, iParam1);
	}
	return true;
}

bool func_211(int iParam0, int iParam1)
{
	if (!func_115(iParam0, 0))
	{
		return func_279(func_212(iParam0), iParam1);
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

int func_212(int iParam0)
{
	return iParam0;
}

int func_213(int iParam0, bool bParam1)
{
	if (!func_280(iParam0, 2))
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

bool func_214(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_277(iParam0))
	{
		return false;
	}
	*uParam3 = _0xf540239f9937033b(iParam0, iParam1);
	if (*uParam3 == 0)
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
	while (iVar0 < *uParam3)
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
		func_281(iParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

void func_215(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_136(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_216(int iParam0, int iParam1)
{
	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_137(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_211(iParam0, 1399091007))
	{
		func_282(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_217(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_283(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_284(&Var0, func_229(0));
	}
	if (!func_285(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_286(iVar14);
	return uVar15;
}

int func_218(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_219(bool bParam0)
{
	if (func_221() == -1)
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

struct<4> func_220(int iParam0, bool bParam1)
{
	Var0 = { func_146(iParam0, bParam1, 0) };
	return func_147(iParam0, Var0, Var0.f_4, bParam1);
}

int func_221()
{
	return Global_1572887->f_13;
}

int func_222(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_287(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_218(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_140(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_288(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_289(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_143(1702063850, &Var65, 1);
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
			Var81 = iParam3;
			Var81.f_7 = iParam2;
			func_144(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_219(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_223(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_287(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_235(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_140(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_221() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_143(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_144(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_219(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_224(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_290(uParam1->f_8, iParam0, uVar0, 2048) || func_290(uParam1->f_8, iParam0, uVar0, 32768)) || func_290(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_290(uParam1->f_8, iParam0, uVar0, 4) || func_290(uParam1->f_8, iParam0, uVar0, 256)) || func_290(uParam1->f_8, iParam0, uVar0, 65536)) || func_290(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_290(uParam1->f_8, iParam0, uVar0, 1) || func_290(uParam1->f_8, iParam0, uVar0, 8)) || func_290(uParam1->f_8, iParam0, uVar0, 65536)) || func_290(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_290(uParam1->f_8, iParam0, uVar0, 1) || func_290(uParam1->f_8, iParam0, uVar0, 16)) || func_290(uParam1->f_8, iParam0, uVar0, 2)) || func_290(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_290(uParam1->f_8, iParam0, uVar0, 8) || func_290(uParam1->f_8, iParam0, uVar0, 4096)) || func_290(uParam1->f_8, iParam0, uVar0, 256)) || func_290(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_225(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_226(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_291(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_291(iParam1, 2, 0, 0);
	return -1;
}

int func_227(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_291(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

struct<4> func_228(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_219(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_147(1328661203, func_292(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_147(1328661203, func_292(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_147(1328661203, func_292(), -1591664384, bParam0);
}

struct<4> func_229(bool bParam0)
{
	iVar0 = func_219(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_147(923904168, func_228(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_147(923904168, func_228(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_147(923904168, func_228(bParam0), -740156546, 0);
}

bool func_230(int iParam0, bool bParam1)
{
	if (func_136(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_293();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_231(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_294(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_232(int iParam0, var uParam1, int iParam2)
{
	if (func_295(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_233(bool bParam0)
{
	iVar0 = func_219(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_147(271701509, func_228(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_147(271701509, func_228(bParam0), 12999093, 0);
}

bool func_234(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_136(iParam0);
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
			if (func_296(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_235(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_297(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_236(var uParam0)
{
	if (!func_148(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_237(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_148(&uParam0))
	{
		return 0;
	}
	return _0x4a606c17276e1bcc(&uParam0);
}

bool func_238(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (get_cloud_time_as_int() + func_298()) > iParam0;
}

void func_239()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

int func_240(int iParam0)
{
	if (!func_145(iParam0))
	{
		return 0;
	}
	if (func_209(iParam0))
	{
		return -1957466003;
	}
	if (func_211(iParam0, -1457263561))
	{
		return -84670860;
	}
	if (func_211(iParam0, -732976331))
	{
		return -700121520;
	}
	if (func_211(iParam0, 1495098826))
	{
		return 917298505;
	}
	if (func_211(iParam0, 2088554948))
	{
		return -1638586319;
	}
	return 176863985;
}

void func_241(bool bParam0)
{
	if (bParam0)
	{
		func_245(113);
	}
	else
	{
		func_246(113);
	}
}

void func_242(bool bParam0)
{
	if (bParam0)
	{
		func_245(112);
	}
	else
	{
		func_246(112);
	}
}

bool func_243(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_283(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_285(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_299(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_300(&Var45, &Var0, 0))
				{
					if (func_301(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_286(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_286(iVar43);
	}
	return false;
}

bool func_244(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var24 = { func_283(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (func_285(&Var24, &iVar38, &iVar39, bParam1))
	{
		Var40.f_9 = -1591664384;
		iVar54 = 0;
		while (iVar54 < iVar39)
		{
			if (func_299(&Var40, iVar54, iVar38, iVar39))
			{
				if (func_302(&Var40, &Var0, 0))
				{
					if (func_301(&(Var0.f_23), 16))
					{
						*uParam0 = { Var0 };
						func_286(iVar38);
						return true;
					}
				}
			}
			iVar54++;
		}
		func_286(iVar38);
	}
	return false;
}

int func_245(int iParam0)
{
	if (func_303(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)
{
	if (func_304(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

float func_247(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_248(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_2 && iParam0) != 0;
}

void func_249(int iParam0)
{
	func_305(2, iParam0);
}

void func_250(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_246(8);
	}
	else
	{
		if (func_306(255) == 4)
		{
			return;
		}
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (&Global_1071686->f_23887.f_366[iVar1] == iParam0)
			{
				iVar0 = iVar1;
			}
			iVar1++;
		}
		if (iVar0 < 0)
		{
			iVar0 = get_random_int_in_range(0, 15);
			iParam0 = &Global_1071686->f_23887.f_366[iVar0];
		}
		Global_1102219->f_3915 = iParam0;
		func_307(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { Global_1071686->f_23887.f_366[iVar0]->f_2 };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_308(&(Global_1102219->f_3888));
		iVar2 = func_309(iParam0);
		iVar3 = get_random_int_in_range(0, iVar2);
		if (func_310(iParam0, iVar3, &(Global_1102219->f_3888.f_6), &(Global_1102219->f_3888)))
		{
			Global_1102219->f_3888.f_5 = 1;
		}
		func_245(8);
		func_245(0);
	}
}

bool func_251()
{
	return !Global_1572887->f_9;
}

bool func_252()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_253(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_254(int iParam0)
{
	return func_311(iParam0, 1);
}

bool func_255(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_256(vector3 vParam0, bool bParam3)
{
	iVar0 = func_312(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892753)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1887339)[iVar4]->f_4))
			{
				if (_0xf256a75210c5c0eb((*Global_1887339)[iVar4]->f_4, vParam0))
				{
					switch ((*Global_1887339)[iVar4]->f_21)
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

void func_257(bool bParam0)
{
	if (!bParam0)
	{
		func_246(5);
	}
	else
	{
		if (func_306(255) == 4)
		{
			return;
		}
		func_245(5);
	}
}

void func_258(bool bParam0, bool bParam1)
{
	if (func_306(255) == 4)
	{
		return;
	}
	if (func_313(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_246(0);
	}
	else
	{
		if (bParam1)
		{
			func_314(0, 0, 0, 1);
		}
		func_245(0);
		func_307(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_308(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_315(Global_1102219->f_3849, 36);
	func_316(Global_1102219->f_3888, 36);
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 680390016;
		case 1:
			return -2070886255;
		case 2:
			return 1821948827;
		case 3:
			return -1823593561;
		case 4:
			return -1930045261;
		default:
			break;
	}
	return -1588462292;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1799339271;
		case 1:
			return -1712995813;
		case 2:
			return -43333367;
		case 3:
			return 1618302617;
		case 4:
			return -2113498014;
		default:
			break;
	}
	return -1950033077;
}

void func_261(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_317();
	Global_1298378->f_1.f_2 = iParam0;
	Global_1298378->f_1.f_3 = iParam1;
	Global_1298378->f_1.f_4 = iParam2;
	Global_1298378->f_1.f_1 = iParam3;
}

bool func_262(vector3 vParam0, var uParam3, float fParam4)
{
	iVar0 = &Global_1071686->f_23887.f_366[func_318(vParam0)];
	iVar1 = func_309(iVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_310(iVar0, iVar2, uParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_263(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_306(255) == 4)
	{
		return;
	}
	if (func_313(vParam0))
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
		func_314(0, 0, 0, 1);
	}
	func_245(0);
	func_245(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_307(&(Global_1102219->f_3849));
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
	func_308(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = fParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_315(Global_1102219->f_3849, 36);
	func_316(Global_1102219->f_3888, 36);
}

bool func_264(int iParam0, int iParam1)
{
	return func_319(Global_1196898->f_78[iParam0]->f_6, iParam1);
}

int func_265(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = _get_first_entity_ped_is_carrying(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			return iVar1;
		}
	}
	return 0;
}

bool func_266(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_267(int iParam0)
{
	if (func_269(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_268(int iParam0)
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

bool func_269(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_270(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_271()
{
	if (!func_252())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

void func_272(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_320() - fParam1);
	func_321(uParam0, 1);
	func_322(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_273(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 724817478;
	Var0.f_3 = uParam0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 355943382;
		_datafile_get_hash(&uVar5, &Var0);
		return uVar5;
	}
	return -931758312;
}

void func_274(var uParam0, struct<19> Param1, int iParam20)
{
	StringCopy(&cVar0, "Fast_Travel_Location_", 64);
	StringIntConCat(&cVar0, iParam20, 64);
	Param1.f_7 = 1993479432;
	func_323(uParam0, Global_1071686->f_23887.f_5.f_4, cVar0, Param1);
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1071686->f_23887.f_5.f_5, iParam20, "ft_dynamic_text_and_price", *uParam0);
}

void func_275(var uParam0, struct<19> Param1, int iParam20)
{
	func_274(uParam0, Param1, iParam20);
	Global_1071686->f_23887.f_5.f_338 = _databinding_add_data_int(Global_1071686->f_23887.f_5.f_317, "locationArrayIndex", 14);
}

void func_276(var uParam0, struct<19> Param1, int iParam20)
{
	func_274(uParam0, Param1, iParam20);
	Global_1071686->f_23887.f_5.f_360 = _databinding_add_data_int(Global_1071686->f_23887.f_5.f_339, "locationArrayIndex", 15);
}

bool func_277(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_278(int iParam0, int iParam1)
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

int func_279(int iParam0, int iParam1)
{
	if (!func_280(iParam0, 2))
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

bool func_280(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_281(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_136(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

void func_282(int iParam0, var uParam1, var uParam2)
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

struct<14> func_283(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_284(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_285(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_219(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_286(int iParam0)
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

bool func_287(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_288(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_218(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_324(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_289(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_147(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_290(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_319(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_291(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_325(iParam0, iParam1, iParam2, iParam3);
}

struct<4> func_292()
{
	return Var0;
}

bool func_293()
{
	return (func_326(-1185145312, 0, 0, 0) > 0 && func_327(func_147(889965687, func_228(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_294(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_218(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_147(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_219(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_219(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_295(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_219(0);
	*uParam1 = { func_147(iParam0, func_229(0), iParam3, 0) };
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

bool func_296(int iParam0, int iParam1, int iParam2)
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

bool func_297(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_219(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_298()
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

bool func_299(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_300(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_219(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_301(var uParam0, int iParam1)
{
	return func_319(*uParam0, iParam1);
}

bool func_302(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_219(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_303(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_304(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_305(int iParam0, int iParam1)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!_network_is_player_index_valid(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = int_to_playerindex(iVar8);
			if (!network_is_player_active(iVar7))
			{
			}
			else
			{
				_0x31010318ba9897ac(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		_0x31010318ba9897ac(&uVar6, network_player_id_to_int());
	}
	trigger_script_event(1, &Var0, 6, 0, &uVar6);
}

int func_306(int iParam0)
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

void func_307(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_308(var uParam0)
{
	*uParam0 = { Var0 };
}

int func_309(int iParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_310(int iParam0, int iParam1, var uParam2, float fParam3)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
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

bool func_311(int iParam0, int iParam1)
{
	if (!func_23(iParam0))
	{
		return false;
	}
	return func_319(Global_1132288->f_1[iParam0]->f_61, iParam1);
}

int func_312(vector3 vParam0)
{
	iVar0 = func_328(vParam0, 0f, 0f, 0, 2);
	return func_328(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

bool func_313(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_314(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_329(iParam0);
	if (!func_181(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_83(128) && !func_17(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_80() == 4)
	{
		func_246(18);
	}
	func_330(1024);
}

void func_315(struct<29> Param0, var uParam29, int iParam30)
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

void func_316(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_317()
{
	Global_1298378->f_1 = Global_1071686->f_28448[50]->f_3;
	Global_1298378->f_1.f_1 = 0;
	Global_1298378->f_1.f_2 = 0;
	Global_1298378->f_1.f_3 = 0;
	Global_1298378->f_1.f_4 = 0;
}

int func_318(vector3 vParam0)
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

bool func_319(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_320()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_322(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_323(var uParam0, var uParam1, char[32] cParam2, struct<19> Param10)
{
	func_331(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_string(*uParam0, func_332(15), Param10.f_16);
	uParam0->f_19 = _databinding_add_data_int(*uParam0, func_332(50), Param10.f_17);
	uParam0->f_20 = _databinding_add_data_int(*uParam0, func_332(51), Param10.f_18);
}

bool func_324(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_236((*uParam0)[iVar0]))
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
				*(*uParam0)[iVar0] = { func_292() };
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

void func_325(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_333(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_326(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_334(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_219(bParam1), iParam0, iParam3);
}

int func_327(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_335(&uParam0, iParam4, bParam5, iParam6);
}

int func_328(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_329(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

void func_330(int iParam0)
{
	if (func_336(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

void func_331(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_332(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_332(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_332(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_332(54), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_332(55), Param10.f_4);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_332(57), Param10.f_5);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_332(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_332(58), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_332(59), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_332(60), Param10.f_9);
	uParam0->f_11 = _databinding_add_data_hash(*uParam0, func_332(61), Param10.f_10);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_332(67), Param10.f_11);
	uParam0->f_12 = _databinding_add_data_hash(*uParam0, func_332(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -672301300;
	}
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_332(64), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, func_332(65), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, func_332(66), Param10.f_15);
}

char* func_332(int iParam0)
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

void func_333(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_337(&(uParam0->f_4));
}

bool func_334(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_335(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_338(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_336(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

void func_337(var uParam0)
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

bool func_338(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_219(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_297(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

