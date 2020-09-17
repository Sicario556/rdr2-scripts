void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	fLocal_27 = 2f;
	Var0.f_17.f_9 = 1084227584;
	Var0.f_17.f_10 = 1073741824;
	Var0.f_17.f_30 = 1;
	Var0.f_82 = 5;
	Var0.f_94 = 1;
	Var0.f_10 = Local_191;
	func_1(&Var0);
	if (!func_2(Local_191.f_3))
	{
		Var0.f_1 = { Local_191.f_3 };
		Var0.f_4 = Local_191.f_6;
	}
	Var0.f_92 = Local_191.f_7;
	Var0.f_12 = Local_191.f_1;
	Var0.f_13 = Local_191.f_2;
	func_3(&Var0);
	if (has_force_cleanup_occurred(555) || func_4(0, 0))
	{
		func_5(&Var0);
		func_6();
	}
	func_7(&Var0, 1);
	while (func_8())
	{
		func_9(&Var0);
		wait(0);
	}
	func_5(&Var0);
	func_6();
}

void func_1(var uParam0)
{
	func_10(32, uParam0->f_10);
	func_11();
	func_12(0);
}

bool func_2(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_3(var uParam0)
{
	if (func_13(uParam0))
	{
		func_14();
		if (func_15(Global_34))
		{
			task_dismount_animal(Global_34, 0, 0, 0, 0, 0);
		}
	}
	func_16();
	Local_28.f_49.f_11 = 2133510819;
}

bool func_4(bool bParam0, bool bParam1)
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

void func_5(var uParam0)
{
	uParam0->f_99 = 4;
	Global_26633 = 0;
	func_17(uParam0);
	func_18(&Local_28);
	func_19(&Local_28);
	if (!is_string_null_or_empty(&(uParam0->f_64)))
	{
		_0x0a5a4f1979abb40e(&(uParam0->f_64));
		_0x798be43c9393632b(&(uParam0->f_64));
	}
	if (func_20(uParam0))
	{
		func_21(uParam0);
	}
	if (!is_player_control_on(player_id()))
	{
		set_player_control(player_id(), true, 0, false);
	}
	if (does_blip_exist(uParam0->f_54))
	{
		remove_blip(&(uParam0->f_54));
	}
	if (_does_volume_exist(uParam0->f_96))
	{
		_0xa1cfb35069d23c23(uParam0->f_96);
		_0x74c2b3dc0b294102(uParam0->f_96);
	}
	if (_does_volume_exist(uParam0->f_58))
	{
		_0xa1cfb35069d23c23(uParam0->f_58);
		_0x74c2b3dc0b294102(uParam0->f_58);
		_delete_volume(uParam0->f_58);
	}
	func_22(uParam0->f_1, 0);
	func_23(uParam0->f_1, 30f, 5);
	if (does_navmesh_blocking_object_exist(uParam0->f_97))
	{
		remove_navmesh_blocking_object(&(uParam0->f_97));
	}
	if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
	{
		clear_ped_tasks(Global_34, 1, 0);
	}
	_text_database_delete("CAMP");
	set_object_as_no_longer_needed(&(uParam0->f_16));
	func_24(uParam0);
	func_25(uParam0->f_55);
	if (does_particle_fx_looped_exist(uParam0->f_98))
	{
		stop_particle_fx_looped(uParam0->f_98, false);
	}
	if (does_entity_exist(uParam0->f_53))
	{
		delete_object(&(uParam0->f_53));
		set_model_as_no_longer_needed(uParam0->f_63);
	}
	iVar0 = player_id();
	iVar1 = iVar0;
	func_26(iVar1);
	func_27(&Local_28, 1);
	func_28(uParam0);
	func_29(8);
	func_29(256);
	func_30(uParam0->f_55);
	func_30(uParam0->f_56);
	func_30(uParam0->f_89);
	if ((func_31(uParam0, 16384) || Global_1915715->f_20637) || Global_1915715->f_22504.f_1)
	{
		if (is_screen_faded_out())
		{
			do_screen_fade_in(1000);
		}
		func_32(uParam0, 16384);
	}
	if (func_31(uParam0, 32768))
	{
		set_player_invincible(iVar0, false);
		func_32(uParam0, 32768);
	}
}

void func_6()
{
	terminate_this_thread();
}

void func_7(var uParam0, int iParam1)
{
	if (uParam0->f_93 != iParam1)
	{
		uParam0->f_93 = iParam1;
		Global_26633 = uParam0->f_93;
		func_33(uParam0);
	}
}

bool func_8()
{
	if (func_4(0, 0))
	{
		return false;
	}
	if (func_34(16))
	{
		return false;
	}
	if (func_35())
	{
		_display_hud_component(2011163970);
		return false;
	}
	return true;
}

void func_9(var uParam0)
{
	if (func_13(uParam0))
	{
		func_36(uParam0);
	}
	else
	{
		func_37(uParam0);
	}
}

void func_10(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_6();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_11()
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
			func_6();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!network_is_game_in_progress())
		{
			func_6();
		}
		if (!network_is_signed_online())
		{
			func_6();
		}
		if (func_38() == 0)
		{
			if (func_39())
			{
				func_6();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_6();
	}
	return 1;
}

void func_12(bool bParam0)
{
	iVar0 = (_get_system_time() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			_0x236905c700fdb54d();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
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
		if (_get_system_time() >= iVar0)
		{
			func_6();
			return;
		}
		wait(0);
	}
}

bool func_13(var uParam0)
{
	iVar0 = player_id();
	iVar1 = get_unique_int_for_player(iVar0);
	if (iVar1 != uParam0->f_10)
	{
		return false;
	}
	return true;
}

void func_14()
{
	if (func_40(Global_34, 1, 0, 0) != -1569615261 || func_40(Global_34, 1, 1, 0) != -1569615261)
	{
		_hide_ped_weapons(Global_34, 2, true);
		task_swap_weapon(Global_34, 0, 1, 0, 0);
		set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
		set_current_ped_weapon(Global_34, -1569615261, false, 1, false, false);
	}
}

bool func_15(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

void func_16()
{
	if (!_0x68821369a2ceadd5(Global_34, 872536795))
	{
		_0xd65fdc686a031c83(Global_34, 872536795, 30f);
	}
}

void func_17(var uParam0)
{
	if (func_41(&(uParam0->f_80)))
	{
		func_42(&(uParam0->f_80), 1);
	}
	if (func_41(&(uParam0->f_81)))
	{
		func_42(&(uParam0->f_81), 1);
	}
	if (func_41(&(uParam0->f_88)))
	{
		func_42(&(uParam0->f_88), 1);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_82)
	{
		if (func_41(uParam0->f_82[iVar0]))
		{
			func_42(uParam0->f_82[iVar0], 1);
		}
		iVar0++;
	}
}

void func_18(var uParam0)
{
	if (func_43(uParam0->f_145))
	{
		func_44(&(uParam0->f_145), 1, 1);
	}
}

void func_19(var uParam0)
{
	if (func_43(uParam0->f_146))
	{
		func_44(&(uParam0->f_146), 1, 1);
	}
}

bool func_20(var uParam0)
{
	return func_31(uParam0, 256);
}

void func_21(var uParam0)
{
	func_32(uParam0, 256);
}

void func_22(vector3 vParam0, int iParam3)
{
	if (func_2(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1913400)
	{
		iVar1 = Global_1913400[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_45(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 8192))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1913400)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_23(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_46(vVar0, vVar3, 0f) };
	vVar9 = { func_47(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_24(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_94)
	{
		if (func_43(&(uParam0->f_94[iVar0])))
		{
			func_44(uParam0->f_94[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_25(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17353[iVar0] == iParam0)
		{
			Global_17353[iVar0]->f_1 = 5;
		}
		iVar0++;
	}
}

void func_26(int iParam0)
{
	*(*Global_1138048)[iParam0] = { 0f, 0f, 0f };
	(*Global_1138048)[iParam0]->f_3 = 0f;
	(*Global_1138048)[iParam0]->f_4 = 0;
	func_48(64, player_id());
	if (_0xf6a8a652a6b186cd((*Global_1138048)[iParam0]->f_6))
	{
		_0xfdfecc6ee4491e11((*Global_1138048)[iParam0]->f_6);
	}
}

void func_27(var uParam0, bool bParam1)
{
	func_49(uParam0);
	func_50(uParam0);
	func_51(uParam0);
	func_52(uParam0);
	if (_0x927b810e43e99932(&(uParam0->f_18)))
	{
		_0x0a5a4f1979abb40e(&(uParam0->f_18));
	}
	if (bParam1)
	{
		func_53(uParam0);
	}
	uParam0->f_150 = -1;
	func_54(&(uParam0->f_126), 32768);
	func_55(&(uParam0->f_49), 0, 1);
}

void func_28(var uParam0)
{
	if ((_is_app_active(-1624772174) || func_56()) && func_57(uParam0))
	{
		clear_ped_tasks(Global_34, 1, 0);
		_display_hud_component(2011163970);
		func_58(6, player_id(), 0f, 0f, 0f, 0, 1);
		_0xfdecca06e8b81346(Global_34);
	}
}

void func_29(int iParam0)
{
	if (func_59(iParam0))
	{
		Global_1958000 = (&Global_1958000 - (Global_1958000 && iParam0));
	}
}

void func_30(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_31(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_33(var uParam0)
{
	func_60(uParam0, 256);
}

bool func_34(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_35()
{
	return func_61(1, 255);
}

void func_36(var uParam0)
{
	if ((!does_entity_exist(Global_34) || is_entity_dead(Global_34)) || func_4(0, 0))
	{
		func_7(uParam0, 13);
	}
	func_62(uParam0);
	if (uParam0->f_93 >= 8)
	{
		func_63(&(uParam0->f_17), &(uParam0->f_53));
		uParam0->f_17.f_1 = 1;
	}
	else if (uParam0->f_93 <= 5)
	{
		if (!is_screen_faded_out())
		{
			if (func_64())
			{
				do_screen_fade_in(500);
				func_7(uParam0, 14);
			}
		}
	}
	if (uParam0->f_93 < 11)
	{
		disable_control_action(0, -209515122, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, -1046962283, false);
		disable_control_action(0, -2131587435, false);
		disable_control_action(0, 1301263553, false);
		disable_control_action(0, -39308912, false);
		disable_control_action(0, -349518703, false);
		_display_hud_component(2011163970);
		func_65(0);
		if (((func_66(0, 1, 1) && !func_67(1)) || Global_1915715->f_20637) || Global_1915715->f_22504.f_1)
		{
			func_7(uParam0, 14);
		}
	}
	if (uParam0->f_93 == 3)
	{
		if (!is_screen_fading_out() && !is_screen_faded_out())
		{
			do_screen_fade_out(500);
		}
	}
	switch (uParam0->f_93)
	{
		case 1:
			func_68(uParam0);
			break;
		case 2:
			func_69(uParam0);
			break;
		case 3:
			func_70(uParam0);
			break;
		case 4:
			func_71(uParam0);
			break;
		case 5:
			func_72(uParam0);
			break;
		case 6:
			func_73(uParam0);
			break;
		case 7:
			func_74(uParam0);
			break;
		case 9:
			func_75(uParam0);
			break;
		case 10:
			func_76(uParam0);
			break;
		case 11:
			func_77(uParam0);
			break;
		case 12:
			func_78(uParam0);
			break;
		case 13:
			func_79(uParam0);
			break;
		case 14:
			func_80(uParam0);
			break;
	}
}

void func_37(var uParam0)
{
	switch (uParam0->f_99)
	{
		case 0:
			if (func_2(uParam0->f_1))
			{
				uParam0->f_99 = 4;
				return;
			}
			uParam0->f_63 = 1085378666;
			uParam0->f_62 = -1412768919;
			func_81(uParam0);
			if (func_82(uParam0))
			{
				uParam0->f_15 = func_83(uParam0->f_1);
				func_84(uParam0);
				func_85(uParam0);
				func_86(uParam0);
				func_87(uParam0);
				uParam0->f_17.f_1 = 1;
				uParam0->f_99 = 1;
			}
			break;
		case 1:
			if (does_entity_exist(uParam0->f_53))
			{
				func_88(&Local_28, 1);
				uParam0->f_17.f_1 = 1;
				uParam0->f_99 = 3;
			}
			break;
		case 3:
			func_88(&Local_28, 0);
			if (does_entity_exist(uParam0->f_53))
			{
			}
			func_63(&(uParam0->f_17), &(uParam0->f_53));
			if (func_89(uParam0))
			{
				uParam0->f_99 = 4;
			}
			break;
		case 4:
			if (func_31(uParam0, 8192))
			{
				if (is_screen_faded_out())
				{
					func_32(uParam0, 8192);
				}
			}
			else
			{
				func_17(uParam0);
				func_27(&Local_28, 1);
				if (does_entity_exist(uParam0->f_53))
				{
					delete_object(&(uParam0->f_53));
				}
				func_5(uParam0);
				if (is_screen_faded_out())
				{
					do_screen_fade_in(1000);
				}
				func_6();
			}
			break;
	}
}

int func_38()
{
	return Global_1572887->f_13;
}

bool func_39()
{
	return Global_1051252->f_8;
}

int func_40(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_41(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_42(var uParam0, int iParam1)
{
	if (func_41(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

bool func_43(int iParam0)
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

void func_44(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_43(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_90(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_91(iVar0);
	*uParam0 = 0;
}

bool func_45(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

Vector3 func_46(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_47(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_48(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	(*Global_1138048)[iVar0]->f_7 = ((*Global_1138048)[iVar0]->f_7 || iParam0);
}

void func_49(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_43(&(uParam0->f_135[iVar0])))
		{
			func_44(uParam0->f_135[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_50(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (_does_scenario_point_exist(uParam0[iVar0]))
		{
			_delete_scenario_point(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_51(var uParam0)
{
}

void func_52(var uParam0)
{
	func_44(&(uParam0->f_146), 1, 1);
	func_44(&(uParam0->f_145), 1, 1);
}

void func_53(var uParam0)
{
	uParam0->f_128 = 0;
	uParam0->f_129 = -1;
	uParam0->f_130 = 0;
	uParam0->f_131 = -1;
	uParam0->f_132 = 0;
	uParam0->f_127 = 0;
}

void func_54(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_55(var uParam0, bool bParam1, bool bParam2)
{
	func_92(uParam0);
	if (bParam2)
	{
		func_93(uParam0, 0);
		_databinding_remove_data_entry(uParam0->f_28);
	}
	if (func_94())
	{
		func_95(0);
	}
	if (bParam1)
	{
		func_96(uParam0);
		return;
	}
	if (_does_text_database_exist(&(uParam0->f_20)))
	{
		_text_database_delete(&(uParam0->f_20));
	}
	if (_does_anim_scene_exist(uParam0->f_48))
	{
		_delete_anim_scene(uParam0->f_48);
	}
	if (_does_anim_scene_exist(uParam0->f_49))
	{
		_delete_anim_scene(uParam0->f_49);
	}
	if (_does_anim_scene_exist(uParam0->f_50))
	{
		_delete_anim_scene(uParam0->f_50);
	}
	if (_does_anim_scene_exist(uParam0->f_51))
	{
		_delete_anim_scene(uParam0->f_51);
	}
	if (_does_anim_scene_exist(uParam0->f_52))
	{
		_delete_anim_scene(uParam0->f_52);
	}
	if (_does_anim_scene_exist(uParam0->f_53))
	{
		_delete_anim_scene(uParam0->f_53);
	}
	if (_does_anim_scene_exist(uParam0->f_54))
	{
		_delete_anim_scene(uParam0->f_54);
	}
	if (_does_anim_scene_exist(uParam0->f_55))
	{
		_delete_anim_scene(uParam0->f_55);
	}
	if (_does_anim_scene_exist(uParam0->f_56))
	{
		_delete_anim_scene(uParam0->f_56);
	}
	func_97(&(uParam0->f_63), &(uParam0->f_64));
	func_97(&(uParam0->f_65), &(uParam0->f_66));
	func_97(&(uParam0->f_67), &(uParam0->f_68));
	set_streamed_texture_dict_as_no_longer_needed("satchel_textures");
	Global_1913694->f_1576 = 0;
	if (func_98(uParam0, 2))
	{
		clear_ped_tasks(Global_34, 1, 0);
	}
	if (func_38() == -1)
	{
		func_99(uParam0, 18);
	}
	else
	{
		if (uParam0->f_10 == 11)
		{
			if (uParam0->f_23 == -1)
			{
				func_100(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
				func_101(uParam0->f_61, uParam0->f_22);
			}
		}
		if (!func_102(0) || func_103())
		{
			if (uParam0->f_27 > 0 && func_104(uParam0->f_61, 0))
			{
				uParam0->f_23 = func_100(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
				if (uParam0->f_11 == 2133510819)
				{
					func_106(func_105(-1108808256, -444296448), uParam0->f_27);
				}
				uParam0->f_27 = 0;
			}
		}
		uParam0->f_23 = -1;
		func_99(uParam0, 0);
	}
}

bool func_56()
{
	if (!func_59(8))
	{
		return false;
	}
	if (((_is_ped_using_scenario_hash(Global_34, 1020517461) || _is_ped_using_scenario_hash(Global_34, 1259174088)) || _is_ped_using_scenario_hash(Global_34, -1075420544)) || _is_ped_using_scenario_hash(Global_34, -1767895052))
	{
		return true;
	}
	return false;
}

bool func_57(var uParam0)
{
	return func_107(Global_34, uParam0->f_55, 1, 0);
}

void func_58(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	Var0 = 197;
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_6 = { vParam2 };
	if (bParam5)
	{
		iVar10 = network_get_host_of_this_script();
		uVar9 = func_108(network_get_player_index(iVar10));
	}
	else if (bParam6)
	{
		uVar9 = func_109(0, 8);
	}
	else
	{
		uVar9 = func_108(iParam1);
	}
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	trigger_script_event(1, &Var0, 9, 44, &uVar9);
}

bool func_59(int iParam0)
{
	return (Global_1958000 && iParam0) != 0;
}

void func_60(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_61(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_110(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_111())
	{
		return func_110(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_110(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_62(var uParam0)
{
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = int_to_playerindex(iVar2);
		if (network_is_player_active(iVar0))
		{
			if (iVar0 != uParam0->f_92)
			{
				_0x31010318ba9897ac(&iVar1, iVar2);
			}
		}
		iVar2++;
	}
	iVar3 = player_id();
	if (iVar1 != uParam0->f_112)
	{
		uParam0->f_112 = iVar1;
		_0xeba87b9273835cf3((*Global_1138048)[iVar3]->f_6, &iVar1);
	}
}

void func_63(var uParam0, var uParam1)
{
	fVar0 = 0.019f;
	func_112(uParam0);
	if (does_entity_exist(*uParam0))
	{
		fVar1 = get_rain_level();
		if ((fVar1 > 0f && uParam0->f_9 >= 1f) && !uParam0->f_3)
		{
			func_113(uParam0, 4);
		}
		else if (uParam0->f_5)
		{
			func_113(uParam0, 0);
		}
		else if (uParam0->f_2)
		{
			func_113(uParam0, 2);
		}
		else if (uParam0->f_3)
		{
			func_113(uParam0, 5);
		}
		else if (uParam0->f_6)
		{
			func_113(uParam0, 6);
		}
		else if (uParam0->f_7)
		{
			func_113(uParam0, 7);
		}
		else if (uParam0->f_8)
		{
			func_113(uParam0, 8);
		}
		else if (func_115(&(uParam0->f_31), func_114()))
		{
			func_116(uParam0);
		}
	}
	switch (uParam0->f_30)
	{
		case 0:
			if (uParam0->f_1)
			{
				set_task_move_network_signal_float(*uParam0, "LogBurnRate", 0f);
			}
			if (uParam0->f_1 && uParam0->f_9 <= 2f)
			{
				uParam0->f_20 = 0.25f;
				uParam0->f_21 = 0.015f;
				uParam0->f_22 = 0.25f;
				uParam0->f_23 = 0.015f;
				uParam0->f_24 = 0.5f;
				uParam0->f_25 = 0.01f;
				uParam0->f_26 = 0.5f;
				uParam0->f_27 = 0.01f;
				uParam0->f_28 = 0.1f;
			}
			else
			{
				uParam0->f_24 = 1f;
			}
			break;
		case 1:
			if (does_entity_exist(*uParam0) == 0)
			{
				*uParam0 = *uParam1;
			}
			else
			{
				uParam0->f_30 = 2;
			}
			break;
		case 2:
			if (uParam0->f_1)
			{
				func_113(uParam0, 0);
				request_anim_dict(sLocal_19);
				_0x2b6529c54d29037a(sLocal_20);
			}
			else
			{
				if (uParam0->f_5)
				{
					func_113(uParam0, 0);
				}
				else if (uParam0->f_2)
				{
					func_113(uParam0, 2);
				}
				else if (uParam0->f_3)
				{
					func_113(uParam0, 5);
				}
				else if (uParam0->f_6)
				{
					func_113(uParam0, 6);
				}
				else if (uParam0->f_7)
				{
					func_113(uParam0, 7);
				}
				else if (uParam0->f_8)
				{
					func_113(uParam0, 8);
				}
				else
				{
					func_113(uParam0, 0);
				}
				uParam0->f_35 = 1;
			}
			_set_lights_type_for_entity(*uParam0, 20);
			_set_lights_color_for_entity(*uParam0, 255, 50, 9);
			uParam0->f_29 = start_particle_fx_looped_on_entity("ent_amb_campfire_dynamic", *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			if (does_particle_fx_looped_exist(uParam0->f_29))
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Flames", uParam0->f_27, true);
				set_particle_fx_looped_evolution(uParam0->f_29, "Embers", uParam0->f_25, true);
			}
			uParam0->f_30 = 3;
			break;
		case 3:
			if (!uParam0->f_1)
			{
				uParam0->f_30 = 4;
			}
			else if (has_anim_dict_loaded(sLocal_19) && _0x2c04d89a0fb4e244(sLocal_20))
			{
				task_move_network_by_name(*uParam0, sLocal_20, 0f, false, sLocal_19, 128);
				uParam0->f_30 = 5;
			}
			func_117(&(uParam0->f_31));
			break;
		case 4:
			uParam0->f_34 = 1;
			break;
		case 5:
			if (is_task_move_network_active(*uParam0))
			{
				set_task_move_network_signal_float(*uParam0, "LogCount", uParam0->f_9);
				set_task_move_network_signal_float(*uParam0, "LogSet", uParam0->f_10);
				uParam0->f_30 = 6;
			}
			break;
		case 6:
			set_task_move_network_signal_float(*uParam0, "LogCount", uParam0->f_9);
			set_task_move_network_signal_float(*uParam0, "LogSet", uParam0->f_10);
			if (is_task_move_network_ready_for_transition(*uParam0))
			{
				uParam0->f_34 = 1;
				if (uParam0->f_1 && get_rain_level() <= 0f)
				{
					if (uParam0->f_9 <= 2f)
					{
						uParam0->f_30 = 0;
					}
					else if (_0x844ceee428ea35b0(*uParam0, "BurnPhase") <= 0f || _0x844ceee428ea35b0(*uParam0, "BurnPhase") >= 1f)
					{
						uParam0->f_30 = 8;
					}
					else
					{
						set_task_move_network_signal_float(*uParam0, "LogBurnRate", fVar0);
					}
				}
				else
				{
					uParam0->f_30 = 0;
				}
			}
			break;
		case 7:
			if (is_task_move_network_active(*uParam0))
			{
				if (get_task_move_network_event(*uParam0, "AddLogFinished"))
				{
					uParam0->f_30 = 8;
				}
			}
			break;
		case 8:
			if (is_task_move_network_active(*uParam0))
			{
				if (is_task_move_network_ready_for_transition(*uParam0))
				{
					request_task_move_network_state_transition(*uParam0, "CollapseLog");
					uParam0->f_24 = (uParam0->f_24 + (1f / 5f));
					uParam0->f_30 = 9;
				}
			}
			break;
		case 9:
			if (is_task_move_network_active(*uParam0))
			{
				set_task_move_network_signal_float(*uParam0, "LogBurnRate", fVar0);
				if (get_task_move_network_event(*uParam0, "CollapseLogFinished"))
				{
					uParam0->f_21 = (uParam0->f_21 - (1f / 5f));
					uParam0->f_22 = (uParam0->f_22 - (0.5f / 5f));
					uParam0->f_25 = (uParam0->f_25 - (1f / 5f));
					uParam0->f_26 = (uParam0->f_26 - (1f / 5f));
					uParam0->f_27 = (uParam0->f_27 - (1.55f / 5f));
					uParam0->f_9 = (uParam0->f_9 - 1f);
					if (uParam0->f_9 == 4f)
					{
						uParam0->f_20 = 0.8f;
						uParam0->f_23 = 0.4f;
					}
					else if (uParam0->f_9 == 3f)
					{
						uParam0->f_20 = 0.7f;
						uParam0->f_23 = 0.3f;
					}
					else if (uParam0->f_9 == 2f)
					{
						uParam0->f_20 = 0.6f;
						uParam0->f_23 = 0.2f;
					}
					else if (uParam0->f_9 == 1f)
					{
						uParam0->f_20 = 0.5f;
						uParam0->f_23 = 0.1f;
					}
					uParam0->f_30 = 6;
				}
			}
			break;
		case 10:
			set_task_move_network_signal_float(*uParam0, "LogBurnRate", 0f);
			break;
	}
}

bool func_64()
{
	if (is_entity_in_air(Global_34, 1))
	{
		return true;
	}
	if (is_ped_falling(Global_34))
	{
		return true;
	}
	return false;
}

void func_65(bool bParam0)
{
	if (bParam0)
	{
		func_118(4);
	}
	func_118(2);
	set_bit(&(Global_1957959->f_1), 0);
}

bool func_66(int iParam0, bool bParam1, bool bParam2)
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
		if (func_119())
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
	if (iParam0 == 0 && func_121(func_120(0)))
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
	switch (func_122(func_120(0)))
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

bool func_67(int iParam0)
{
	return (Global_1915692->f_22 && iParam0) != 0;
}

void func_68(var uParam0)
{
	if (func_20(uParam0))
	{
		func_60(uParam0, 32768);
		set_player_invincible(player_id(), true);
		func_21(uParam0);
	}
	_text_database_request("CAMP");
	if ((_text_database_has_loaded("CAMP") && func_40(Global_34, 1, 0, 0) == -1569615261) && func_40(Global_34, 1, 1, 0) == -1569615261)
	{
		if ((!is_ped_on_mount(Global_34) || _is_ped_getting_into_a_mount_seat(Global_34, true)) && (!func_123(Global_34, 1868526510) && !_0x1d46b417f926d34d(Global_34)))
		{
			if (_get_scenario_point_type_ped_is_using(Global_34) == -1241981548)
			{
				if (!_0x0c3cb2e600c8977d(Global_34, 1))
				{
					_0xd65fdc686a031c83(Global_34, 35709907, 2f);
					clear_ped_tasks(Global_34, 1, 0);
				}
				return;
			}
			if ((!func_31(uParam0, 64) && !func_31(uParam0, 4)) && !func_31(uParam0, 8))
			{
				func_124(uParam0);
			}
			func_7(uParam0, 2);
		}
	}
	else
	{
		func_14();
	}
}

void func_69(var uParam0)
{
	iVar0 = player_id();
	iVar1 = iVar0;
	if (func_20(uParam0))
	{
		func_125(&(uParam0->f_104), 0f, 1);
		func_21(uParam0);
	}
	func_126(uParam0);
	*(*Global_1138048)[iVar1] = { uParam0->f_1 };
	(*Global_1138048)[iVar1]->f_3 = uParam0->f_4;
	func_127(uParam0->f_1, 20f, 0);
	uParam0->f_15 = func_83(uParam0->f_1);
	func_84(uParam0);
	if (!func_128(uParam0))
	{
		func_7(uParam0, 14);
	}
	else if (func_129(uParam0) && func_130(uParam0))
	{
		func_7(uParam0, 3);
	}
	if (uParam0->f_93 == 14)
	{
		_0x565eaa726b2ce3b7(0);
	}
}

void func_70(var uParam0)
{
	if (func_20(uParam0))
	{
		func_81(uParam0);
		func_21(uParam0);
	}
	else
	{
		func_54(&(Local_28.f_125), 41);
		func_7(uParam0, 4);
	}
}

void func_71(var uParam0)
{
	if (func_20(uParam0))
	{
		if (func_131(Global_34, 0) != -1569615261)
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			set_current_ped_weapon(Global_34, -1569615261, true, 1, false, false);
		}
		if (!_0x5e420ff293ee5472())
		{
			return;
		}
		func_132(uParam0);
		func_21(uParam0);
	}
	if (func_131(Global_34, 0) == -1569615261)
	{
		if (func_133())
		{
			if (does_entity_exist(uParam0->f_90))
			{
				if (!is_entity_dead(uParam0->f_90))
				{
					set_blocking_of_non_temporary_events(uParam0->f_90, true);
					task_stand_still(uParam0->f_90, -1);
				}
			}
		}
		func_134(&(uParam0->f_104), 1);
		func_7(uParam0, 5);
	}
}

void func_72(var uParam0)
{
	if (func_20(uParam0))
	{
		func_135(uParam0);
		if (!does_entity_exist(uParam0->f_90))
		{
		}
		func_21(uParam0);
	}
	else
	{
		func_88(&Local_28, 1);
		if (func_136(&(uParam0->f_104)) > 20f)
		{
			clear_ped_tasks(Global_34, 1, 0);
			clear_ped_secondary_task(Global_34);
			func_137(&(uParam0->f_104));
			func_7(uParam0, 14);
		}
		if (has_model_loaded(uParam0->f_62) && has_model_loaded(uParam0->f_63))
		{
			func_137(&(uParam0->f_104));
			uParam0->f_8 = uParam0->f_4;
			func_138(uParam0, uParam0->f_1);
			func_7(uParam0, 6);
		}
	}
}

void func_73(var uParam0)
{
	if (func_20(uParam0))
	{
		func_21(uParam0);
	}
	if (!is_screen_fading_out())
	{
		do_screen_fade_out(1500);
	}
	if (func_131(Global_34, 0) != -1569615261)
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
	}
	func_7(uParam0, 7);
}

void func_74(var uParam0)
{
	if (is_screen_faded_in() && !is_screen_fading_out())
	{
		do_screen_fade_out(1000);
	}
	if (is_screen_faded_out())
	{
		if (!func_31(uParam0, 1024))
		{
			func_139(uParam0);
		}
		func_21(uParam0);
		Global_39.f_2 = { uParam0->f_1 };
		Global_39.f_5 = uParam0->f_4;
		if (!func_31(uParam0, 2))
		{
			_0x565eaa726b2ce3b7(1);
		}
		func_60(uParam0, 2);
	}
	if (!func_31(uParam0, 512) && is_screen_faded_out())
	{
		if (func_131(Global_34, 0) == -1569615261)
		{
			func_140(uParam0);
			func_141(uParam0, 1);
			func_142(uParam0);
			func_143(uParam0);
			if (!func_123(Global_34, -76381094))
			{
				func_144(uParam0);
				func_145(uParam0);
			}
			uParam0->f_107 = 1.5f;
			uParam0->f_55 = _create_volume_sphere_with_custom_name(uParam0->f_1, 0f, 0f, 0f, 7f, 7f, 7f, "volPlayerCamp");
			func_146(uParam0->f_55, 1);
			uParam0->f_56 = _create_volume_sphere_with_custom_name(uParam0->f_1, 0f, 0f, 0f, 175f, 175f, 175f, "volPC_OutOfRange");
			if (!is_entity_dead(uParam0->f_90))
			{
				func_147(uParam0->f_90, uParam0->f_55);
			}
			func_148(uParam0->f_96, 0, 0, 0, 0, 0);
			clear_area(uParam0->f_1, 100f, 2097152);
			_0x9851de7aec10b4e1(uParam0->f_1, 15f, 1, 0);
			uParam0->f_54 = _blip_add_for_coord(-336063235, uParam0->f_1);
			set_blip_sprite(uParam0->f_54, 1754365229, true);
			set_blip_name_from_text_file(uParam0->f_54, "CAMP_BLIP");
			use_particle_fx_asset("scr_distance_smoke");
			uParam0->f_98 = start_particle_fx_looped_at_coord("scr_campfire_distance_smoke_script", uParam0->f_1, 0f, 0f, uParam0->f_4, 1f, false, false, false, false);
			func_60(uParam0, 512);
		}
	}
	if (is_screen_faded_out())
	{
		if (!func_149(uParam0))
		{
			return;
		}
	}
	func_150(uParam0);
	func_151(uParam0);
	if (func_152() != 8 && func_153(31))
	{
		if (func_133())
		{
			if (does_entity_exist(uParam0->f_90))
			{
				if (!is_entity_dead(uParam0->f_90))
				{
					set_blocking_of_non_temporary_events(uParam0->f_90, false);
					_0x0348469daa17576c(uParam0->f_90);
					freeze_entity_position(uParam0->f_90, false);
					_0xf74e134f40192884(uParam0->f_90, 2);
				}
			}
		}
	}
	_hide_ped_weapons(Global_34, 2, true);
	func_154();
	func_85(uParam0);
	if (func_31(uParam0, 512))
	{
		func_88(&Local_28, 1);
		func_7(uParam0, 9);
	}
}

void func_75(var uParam0)
{
	if (func_20(uParam0))
	{
		func_117(&uLocal_24);
		if (!func_59(128))
		{
			_hide_hud_component(2011163970);
		}
		func_85(uParam0);
		if (is_screen_faded_out())
		{
			func_21(uParam0);
		}
		else
		{
			return;
		}
	}
	if (!is_screen_faded_in())
	{
		func_88(&Local_28, 1);
		func_85(uParam0);
	}
	func_32(uParam0, 512);
	_0x9ac65a36d3c0c189(0);
	if (!func_123(Global_34, -76381094) && !is_ped_active_in_scenario(Global_34, 0))
	{
		func_144(uParam0);
	}
	if (func_123(Global_34, -76381094))
	{
		func_7(uParam0, 10);
	}
	else
	{
		func_144(uParam0);
		if (func_115(&uLocal_24, fLocal_27))
		{
			func_7(uParam0, 10);
		}
	}
}

void func_76(var uParam0)
{
	if (func_20(uParam0))
	{
		func_117(&uLocal_24);
		func_21(uParam0);
		func_85(uParam0);
	}
	func_88(&Local_28, 0);
	if (func_123(Global_34, -76381094) || func_115(&uLocal_24, fLocal_27))
	{
		if (_0x02ebbb3989b7e695(Global_34))
		{
			func_7(uParam0, 11);
		}
		else
		{
			func_144(uParam0);
		}
	}
	else
	{
		func_144(uParam0);
	}
}

void func_77(var uParam0)
{
	if (func_20(uParam0))
	{
		freeze_entity_position(Global_34, false);
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(1000);
		}
		func_24(uParam0);
		func_32(uParam0, 32768);
		set_player_invincible(player_id(), false);
		func_21(uParam0);
	}
	func_155(uParam0);
	func_156(uParam0);
	if (!is_ped_in_combat(Global_34, 0) && !is_ped_in_cover(Global_34, 0, 0))
	{
		disable_control_action(0, -562475458, false);
	}
	if (ped_has_use_scenario_task(Global_34) && !func_59(128))
	{
		func_65(0);
		disable_control_action(0, -124244224, false);
		disable_control_action(0, -128997553, false);
	}
	else
	{
		_display_hud_component(2011163970);
	}
	disable_control_action(0, -1453452184, false);
	set_scenario_group_enabled("PLAYER_CAMP_INTERACTIONS", false);
	if (func_57(uParam0))
	{
		func_157(256);
		if (!func_31(uParam0, 2048))
		{
			if (func_158(Global_34, 0))
			{
				func_159(&(Local_28.f_125), 64);
				func_60(uParam0, 2048);
			}
		}
		else if (!func_158(Global_34, 0))
		{
			func_159(&(Local_28.f_125), 128);
			func_32(uParam0, 2048);
		}
		func_88(&Local_28, 0);
		if (_0x0c3cb2e600c8977d(Global_34, 0))
		{
			func_49(&Local_28);
			_display_hud_component(2011163970);
		}
		if (func_160(uParam0))
		{
			if (!func_43(&(uParam0->f_94[0])) && !func_31(uParam0, 64))
			{
				if (!ped_has_use_scenario_task(Global_34))
				{
					uParam0->f_94[0] = func_161("CAMP_TEARDOWN", 992265328, 0, 1, 0, 5, 570, 4000, 10, 1073741824, -2018976333, 0);
					func_162(&(uParam0->f_94[0]), 1, 1, 1);
					func_163(&(uParam0->f_94[0]), 1, 1);
				}
			}
			else if (ped_has_use_scenario_task(Global_34) || func_31(uParam0, 64))
			{
				func_44(uParam0->f_94[0], 1, 1);
			}
		}
		else
		{
			if (!ped_has_use_scenario_task(Global_34))
			{
				clear_bit(&(Global_1957959->f_1), 2);
				clear_bit(&(Global_1957959->f_1), 3);
			}
			func_24(uParam0);
		}
		if ((get_game_timer() - uParam0->f_14) >= 1000)
		{
			if (func_164(uParam0->f_55, 2, Global_34, 0, 0))
			{
				func_60(uParam0, 128);
				uParam0->f_14 = get_game_timer();
			}
			else
			{
				func_32(uParam0, 128);
				uParam0->f_14 = get_game_timer();
			}
		}
		if (func_59(32))
		{
			if (func_43(&(uParam0->f_94[0])))
			{
				func_162(&(uParam0->f_94[0]), 0, 1, 1);
			}
		}
		else if (func_43(&(uParam0->f_94[0])))
		{
			func_162(&(uParam0->f_94[0]), 1, 1, 1);
		}
	}
	else
	{
		if (!ped_has_use_scenario_task(Global_34))
		{
			clear_bit(&(Global_1957959->f_1), 2);
			clear_bit(&(Global_1957959->f_1), 3);
		}
		func_29(256);
		func_24(uParam0);
	}
	if (func_165(&(uParam0->f_94[0]), 1) || func_166(Local_28.f_126, 16384))
	{
		func_60(uParam0, 16384);
		do_screen_fade_out(500);
		func_60(uParam0, 8192);
		uParam0->f_17.f_18 = 0f;
		uParam0->f_17.f_27 = 0f;
		clear_bit(&(Global_1957959->f_1), 2);
		clear_bit(&(Global_1957959->f_1), 3);
		if (!func_167(Global_34, uParam0->f_1, 0))
		{
			func_117(&uLocal_21);
			open_sequence_task(&iVar0);
			task_look_at_coord(0, uParam0->f_1 + Vector(1f, 0f, 0f), 2500, 1, 51, 1);
			task_pause(0, 400);
			task_turn_ped_to_face_coord(0, uParam0->f_1, 0);
			close_sequence_task(iVar0);
			clear_ped_tasks(Global_34, 1, 0);
			task_perform_sequence(Global_34, iVar0);
			clear_sequence_task(&iVar0);
		}
		else if (func_56())
		{
			func_117(&uLocal_21);
			if (!_0x0c3cb2e600c8977d(Global_34, 1))
			{
				func_168(&Local_28);
			}
		}
		func_18(&Local_28);
		func_19(&Local_28);
		func_24(uParam0);
		func_49(&Local_28);
	}
	if (func_31(uParam0, 8192))
	{
		if (is_screen_faded_out())
		{
			func_32(uParam0, 8192);
			func_7(uParam0, 13);
		}
	}
	fVar1 = func_169(Global_34, uParam0->f_1, 1);
	if (fVar1 > 9f && fVar1 < 25f)
	{
		if (func_43(&(uParam0->f_94[0])))
		{
			func_170(&(uParam0->f_94[0]), -523698323, 0, 1);
		}
	}
	else if (func_43(&(uParam0->f_94[0])))
	{
		func_170(&(uParam0->f_94[0]), 1754796591, 0, 1);
	}
	if (!func_57(uParam0))
	{
		if (func_171(uParam0, 1))
		{
			func_7(uParam0, 14);
		}
	}
}

void func_78(var uParam0)
{
	if (func_20(uParam0))
	{
		func_24(uParam0);
		_display_hud_component(2011163970);
		func_21(uParam0);
	}
	if (func_171(uParam0, 1))
	{
		func_7(uParam0, 14);
	}
	else if (func_57(uParam0))
	{
		func_7(uParam0, 11);
	}
	if (_get_number_of_references_of_script_with_name_hash(954940763) > 1)
	{
		func_7(uParam0, 14);
	}
}

void func_79(var uParam0)
{
	func_18(&Local_28);
	func_19(&Local_28);
	func_172(uParam0->f_55, 0);
	if (func_20(uParam0))
	{
		if (func_31(uParam0, 2))
		{
			func_24(uParam0);
			func_17(uParam0);
			if (func_57(uParam0))
			{
				set_entity_proofs(Global_34, 2, false);
				_display_hud_component(2011163970);
			}
		}
		func_21(uParam0);
	}
	if (func_57(uParam0))
	{
		_display_hud_component(2011163970);
		uParam0->f_99 = 4;
		func_7(uParam0, 14);
		set_entity_proofs(Global_34, 0, false);
	}
	else
	{
		func_32(uParam0, 512);
		uParam0->f_99 = 4;
		func_7(uParam0, 14);
	}
}

void func_80(var uParam0)
{
	_display_hud_component(2011163970);
	func_5(uParam0);
	func_49(&Local_28);
	uParam0->f_99 = 4;
	func_6();
}

void func_81(var uParam0)
{
	request_model(uParam0->f_62, false);
	request_model(uParam0->f_63, false);
	request_ptfx_asset();
}

bool func_82(var uParam0)
{
	if (!has_model_loaded(uParam0->f_63))
	{
		request_model(uParam0->f_63, false);
	}
	if (!has_model_loaded(uParam0->f_62))
	{
		request_model(uParam0->f_62, false);
	}
	if (!has_model_loaded(uParam0->f_63))
	{
		return false;
	}
	if (!has_model_loaded(uParam0->f_62))
	{
		return false;
	}
	return true;
}

int func_83(vector3 vParam0)
{
	return func_173(_get_map_zone_at_coords(vParam0, 10));
}

void func_84(var uParam0)
{
	func_174(&(uParam0->f_1), 1, 10, 1, 0);
}

void func_85(var uParam0)
{
	iVar0 = func_83(uParam0->f_1);
	if (iVar0 == 7)
	{
		if (!func_41(&(uParam0->f_88)))
		{
			func_175(&(uParam0->f_88), uParam0->f_1, 1.75f);
		}
	}
	if (!func_41(&(uParam0->f_80)))
	{
		vVar1 = { uParam0->f_1 };
		func_176(&(uParam0->f_80), vVar1, 1.5f, 0, 0);
	}
	if (!func_41(&(uParam0->f_81)))
	{
		vVar1 = { uParam0->f_1 };
		func_177(&(uParam0->f_81), vVar1, 3f);
	}
	if (!func_41(uParam0->f_82[0]))
	{
		if (_does_scenario_point_exist(&(Local_28[0])))
		{
			vVar1 = { _get_scenario_point_coords(&(Local_28[0]), true) };
			func_178(uParam0->f_82[0], vVar1, 0.94f);
		}
	}
	if (!func_41(uParam0->f_82[1]))
	{
		if (_does_scenario_point_exist(&(Local_28[1])))
		{
			vVar1 = { _get_scenario_point_coords(&(Local_28[1]), true) };
			func_178(uParam0->f_82[1], vVar1, 1f);
		}
	}
	if (!func_41(uParam0->f_82[2]))
	{
		if (_does_scenario_point_exist(&(Local_28[2])))
		{
			vVar1 = { _get_scenario_point_coords(&(Local_28[2]), true) };
			func_178(uParam0->f_82[2], vVar1, 1.1f);
		}
	}
	if (!func_41(uParam0->f_82[3]))
	{
		if (_does_scenario_point_exist(&(Local_28[3])))
		{
			vVar1 = { _get_scenario_point_coords(&(Local_28[3]), true) };
			func_178(uParam0->f_82[3], vVar1, 0.9f);
		}
	}
	if (!func_41(uParam0->f_82[4]))
	{
		vVar1 = { uParam0->f_1 };
		func_178(uParam0->f_82[4], vVar1, 2.25f);
	}
}

void func_86(var uParam0)
{
	uParam0->f_16 = create_object(uParam0->f_62, uParam0->f_1, false, true, false, false, true);
	uParam0->f_53 = create_object_no_offset(uParam0->f_63, uParam0->f_1, false, true, false, true);
	set_entity_rotation(uParam0->f_53, 0f, 0f, (uParam0->f_4 + 26f), 2, true);
	freeze_entity_position(uParam0->f_53, true);
	Local_28.f_127 = get_object_index_from_entity_index(uParam0->f_53);
}

void func_87(var uParam0)
{
	uParam0->f_55 = _create_volume_sphere_with_custom_name(uParam0->f_1, 0f, 0f, 0f, 7f, 7f, 7f, "volPlayerCamp");
	func_141(uParam0, 0);
}

int func_88(var uParam0, bool bParam1)
{
	func_179(&(uParam0->f_49));
	if (!func_180(Global_34, 0))
	{
		return 0;
	}
	func_181(uParam0);
	if (uParam0->f_128 > 4 && uParam0->f_128 < 9)
	{
		func_65(0);
	}
	if (uParam0->f_128 > 3)
	{
		if (uParam0->f_128 != 9 && uParam0->f_128 != 4)
		{
			_0x18c3dfac458783bb();
			func_182(uParam0);
		}
	}
	else if (uParam0->f_128 == 3)
	{
		if (is_ped_active_in_scenario(Global_34, 1))
		{
			iVar0 = func_183(uParam0);
			if (iVar0 >= 0 && iVar0 <= 3)
			{
				func_182(uParam0);
			}
		}
		else if (_0x927b810e43e99932(&(uParam0->f_18)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_18));
		}
	}
	if (func_166(uParam0->f_126, 65536))
	{
		if (func_40(Global_34, 1, 0, 0) != -1569615261)
		{
			if (has_anim_event_fired(Global_34, 320193935))
			{
				set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
				func_54(&(uParam0->f_126), 65536);
			}
		}
	}
	switch (uParam0->f_128)
	{
		case 0:
			if (func_184(uParam0))
			{
				func_185(uParam0);
			}
			func_186(uParam0);
			func_187(&(uParam0->f_49), 4);
			func_188(uParam0, 1);
			break;
		case 1:
			if (func_184(uParam0))
			{
				func_185(uParam0);
			}
			if (func_189(uParam0))
			{
				func_188(uParam0, 2);
			}
			break;
		case 2:
			if (func_184(uParam0))
			{
				func_185(uParam0);
			}
			if (func_190(uParam0))
			{
				func_188(uParam0, 3);
			}
			break;
		case 3:
			if (func_184(uParam0))
			{
				_0x9428447ded71fc7e("Player_Campfire_Scenes");
				func_55(&(uParam0->f_49), 1, _get_scenario_point_type_ped_is_using(Global_34) != 1049986774);
				func_99(&(uParam0->f_49), 2);
				func_54(&(uParam0->f_126), 32768);
				func_185(uParam0);
			}
			func_191(uParam0);
			if (bParam1)
			{
				return 1;
			}
			func_157(8);
			if ((get_game_timer() - uParam0->f_148) >= 500)
			{
				if (func_192(uParam0))
				{
					func_159(&(uParam0->f_126), 131072);
				}
				else
				{
					func_54(&(uParam0->f_126), 131072);
				}
				uParam0->f_148 = get_game_timer();
			}
			if (func_193(Global_34, uParam0->f_127, 1) > 36f)
			{
				func_49(uParam0);
				func_52(uParam0);
				func_29(8);
				func_188(uParam0, 4);
				if (_0x927b810e43e99932(&(uParam0->f_18)))
				{
					_0x0a5a4f1979abb40e(&(uParam0->f_18));
				}
				return 0;
			}
			if (func_166(uParam0->f_125, 64))
			{
				if (func_166(uParam0->f_125, 8192))
				{
					func_194(uParam0, 0);
					func_54(&(uParam0->f_125), 8192);
				}
				func_54(&(uParam0->f_125), 64);
			}
			else if (func_166(uParam0->f_125, 128))
			{
				if (!func_166(uParam0->f_125, 8192))
				{
					func_194(uParam0, 1);
					func_159(&(uParam0->f_125), 8192);
				}
				func_54(&(uParam0->f_125), 128);
			}
			uParam0->f_129 = func_183(uParam0);
			if (uParam0->f_129 != -1)
			{
				func_195();
				disable_control_action(0, 1287709438, false);
				disable_control_action(0, -2131587435, false);
				disable_control_action(0, -399233038, false);
				iVar1 = create_itemset(true);
				if (func_196(&iVar1, *uParam0->f_5[uParam0->f_129], 0.75f) && !is_ped_active_in_scenario(Global_34, 1))
				{
					clear_ped_tasks(Global_34, 1, 0);
				}
				destroy_itemset(iVar1);
			}
			if ((func_197(0) && uParam0->f_129 != -1) || ((func_166(uParam0->f_126, 8192) && func_59(64)) && func_59(16)))
			{
				uParam0->f_130 = func_198();
				func_188(uParam0, 5);
				if (func_59(16) || func_166(uParam0->f_126, 32768))
				{
					if (func_59(64))
					{
						func_29(16);
						func_99(&(uParam0->f_49), 2);
						func_199(uParam0, 0);
						func_188(uParam0, 7);
					}
				}
				func_52(uParam0);
			}
			else
			{
				func_200(uParam0);
				func_201(uParam0);
				if (!func_59(128) && func_166(uParam0->f_125, 8192))
				{
					if (func_166(uParam0->f_126, 131072) && func_193(Global_34, uParam0->f_127, 1) <= 9f)
					{
						uParam0->f_147 = func_202(_uiprompt_get_group_active_page(1754796591));
						_uiprompt_set_ambient_group_this_frame(uParam0->f_127, func_203(func_166(uParam0->f_125, 16384), 1.75f, 3f), 1, 1, 1754796591, uParam0->f_147, 2);
					}
				}
				if ((func_59(16) && func_166(uParam0->f_126, 8192)) || func_166(uParam0->f_126, 32768))
				{
					if (!ped_has_use_scenario_task(Global_34))
					{
						if (uParam0->f_150 != -1 && (get_game_timer() - uParam0->f_150) > 1000)
						{
							func_29(16);
							func_54(&(uParam0->f_126), 32768);
							uParam0->f_150 = -1;
							clear_ped_tasks(Global_34, 1, 0);
							uParam0->f_132 = 0;
						}
						else
						{
							uParam0->f_132 = 2;
							func_204(uParam0);
							uParam0->f_150 = get_game_timer();
							if (func_59(64))
							{
								func_29(16);
								func_54(&(uParam0->f_126), 32768);
								func_99(&(uParam0->f_49), 2);
								func_199(uParam0, 0);
								func_188(uParam0, 7);
							}
						}
					}
					else if (uParam0->f_132 == 2)
					{
						if ((get_game_timer() - uParam0->f_150) > 10000)
						{
							clear_ped_tasks(Global_34, 1, 0);
							func_29(16);
							func_54(&(uParam0->f_126), 32768);
							uParam0->f_150 = -1;
							uParam0->f_132 = 0;
						}
					}
				}
			}
			break;
		case 4:
			if (func_184(uParam0))
			{
				func_185(uParam0);
			}
			if (func_193(Global_34, uParam0->f_127, 1) <= 36f)
			{
				func_188(uParam0, 3);
			}
			break;
		case 5:
			if (func_184(uParam0))
			{
				_0x6339c1ea3979b5f7("idle", "Player_Campfire_Scenes");
				func_185(uParam0);
			}
			_0xc9caeaeec1256e54(2011163970);
			disable_control_action(0, 255439828, false);
			func_205();
			if (!func_197(1))
			{
				func_65(0);
				uParam0->f_131 = -1;
				func_206(uParam0, 0);
				_0xfdecca06e8b81346(Global_34);
				func_188(uParam0, 3);
			}
			else
			{
				if (uParam0->f_129 != -1)
				{
					func_195();
				}
				if (has_anim_event_fired(Global_34, -996707397))
				{
					func_206(uParam0, 0);
				}
				else
				{
					func_206(uParam0, 1);
				}
				func_207(uParam0);
				if (func_208(uParam0, 0, 0, -1))
				{
					func_206(uParam0, 0);
					if (uParam0->f_132 == 2)
					{
						func_99(&(uParam0->f_49), 2);
						func_199(uParam0, 0);
						func_188(uParam0, 7);
					}
					else if (uParam0->f_132 == 0)
					{
						func_188(uParam0, 9);
					}
					else if (uParam0->f_132 == 11 || uParam0->f_132 == 10)
					{
						func_188(uParam0, 8);
					}
					else
					{
						func_188(uParam0, 6);
					}
				}
			}
			break;
		case 6:
			_0xc9caeaeec1256e54(2011163970);
			if (func_184(uParam0))
			{
				func_185(uParam0);
			}
			if (uParam0->f_129 != -1)
			{
				func_195();
				disable_control_action(0, 1287709438, false);
			}
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -399233038, false);
			if (((has_anim_event_fired(Global_34, 1070143458) && (get_game_timer() - uParam0->f_149) > 2000) && !func_166(uParam0->f_126, 4)) && uParam0->f_132 != 1)
			{
				if (func_208(uParam0, 1, uParam0->f_132, uParam0->f_131))
				{
					if (uParam0->f_132 == 0)
					{
						func_188(uParam0, 9);
						func_49(uParam0);
						return 0;
					}
					else
					{
						func_206(uParam0, 0);
						uParam0->f_149 = get_game_timer();
					}
				}
			}
			if (func_209(uParam0) || !ped_has_use_scenario_task(Global_34))
			{
				if ((uParam0->f_129 == uParam0->f_131 || uParam0->f_131 == -1) || uParam0->f_132 == 1)
				{
					if (uParam0->f_132 != 0)
					{
						uParam0->f_130 = uParam0->f_132;
					}
					if (uParam0->f_131 != -1)
					{
						uParam0->f_129 = uParam0->f_131;
					}
					else
					{
						uParam0->f_129 = func_183(uParam0);
					}
					uParam0->f_131 = -1;
					func_188(uParam0, 5);
				}
			}
			break;
		case 8:
			_0xc9caeaeec1256e54(2011163970);
			if (func_184(uParam0))
			{
				func_185(uParam0);
			}
			iVar2 = _0xc22aa08a8adb87d4(Global_34);
			if (func_210(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
			{
				if (((iVar2 == 1135271674 || iVar2 == 1844142525) || iVar2 == -571916863) || iVar2 == 825619760)
				{
					if (uParam0->f_132 == 11)
					{
						if (_0x3d10d7179d7034af(func_211(0), -569063887, 0))
						{
							_0x6a564540fac12211(func_211(0), -569063887);
						}
						func_212(-569063887, 0, 0, 0, 1, 0, 0);
						uParam0->f_149 = get_game_timer();
						uParam0->f_132 = 0;
					}
					else if (uParam0->f_132 == 10)
					{
						func_212(1259508039, 0, 0, 0, 1, 0, 0);
						uParam0->f_149 = get_game_timer();
						uParam0->f_132 = 0;
					}
					else
					{
						uParam0->f_132 = 0;
						_0xd962f8579d702db5();
						func_117(&(uParam0->f_157));
						func_188(uParam0, 5);
					}
				}
				else if (iVar2 == -597629206 || iVar2 == 1316803372)
				{
					func_213(36116464, 0.5f);
					uParam0->f_149 = get_game_timer();
				}
				else if (iVar2 == -518407211 || iVar2 == 1662215698)
				{
					func_213(653141085, 2f);
					uParam0->f_149 = get_game_timer();
				}
				else if (iVar2 == -1433449364 || iVar2 == 2058555960)
				{
					func_213(1335077954, 2f);
					uParam0->f_149 = get_game_timer();
				}
			}
			if (!ped_has_use_scenario_task(Global_34))
			{
				_0xd962f8579d702db5();
				uParam0->f_132 = 0;
				func_188(uParam0, 5);
			}
			break;
		case 7:
			_0xc9caeaeec1256e54(2011163970);
			if (func_184(uParam0))
			{
				func_214(-1199896558, 1, 1, -142743235);
				func_185(uParam0);
			}
			_disable_first_person_cam_this_frame();
			func_195();
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -399233038, false);
			disable_control_action(0, -1046962283, false);
			disable_control_action(0, -1404316431, false);
			if ((((func_215(uParam0, uParam0->f_130) || !ped_has_use_scenario_task(Global_34)) || _0x916b8e075abc8b4e(Global_34, 1)) || is_entity_on_fire(Global_34)) || _0x0c3cb2e600c8977d(Global_34, 0))
			{
				_0x0f2a2175734926d8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_214(-1199896558, 1, 1, -142743235);
				func_55(&(uParam0->f_49), 1, 1);
				_0xd962f8579d702db5();
				if (((!ped_has_use_scenario_task(Global_34) || _0x916b8e075abc8b4e(Global_34, 1)) || is_entity_on_fire(Global_34)) || _0x0c3cb2e600c8977d(Global_34, 0))
				{
					if (is_screen_faded_out())
					{
						do_screen_fade_in(500);
					}
					if (does_entity_exist(uParam0->f_133))
					{
						delete_object(&(uParam0->f_133));
					}
					if (((func_102(0) && !func_103()) && !func_166(uParam0->f_126, 256)) && uParam0->f_49.f_61 != -1199896558)
					{
						if (((((((uParam0->f_124 == 3 || uParam0->f_124 == 4) || uParam0->f_124 == 11) || uParam0->f_124 == 16) || uParam0->f_124 == 7) || uParam0->f_124 == 6) || uParam0->f_124 == 14) || uParam0->f_124 == 15)
						{
							func_216(uParam0->f_49.f_61, 1, 1, 1, 0);
							func_159(&(uParam0->f_126), 256);
						}
					}
					if (is_entity_on_fire(Global_34))
					{
						clear_ped_tasks(Global_34, 1, 0);
					}
				}
				uParam0->f_130 = 6;
				uParam0->f_132 = 6;
				func_117(&(uParam0->f_157));
				func_188(uParam0, 5);
			}
			break;
		case 9:
			if (func_184(uParam0))
			{
				func_185(uParam0);
			}
			if (!ped_has_use_scenario_task(Global_34))
			{
				_0xd962f8579d702db5();
				func_55(&(uParam0->f_49), 1, 1);
				func_188(uParam0, 3);
			}
			else if (!_0x0c3cb2e600c8977d(Global_34, 1))
			{
				func_168(uParam0);
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

bool func_89(var uParam0)
{
	if (func_169(Global_34, uParam0->f_1, 1) > 30625f)
	{
		return true;
	}
	if (!network_is_player_active(uParam0->f_92) || !(*Global_1138048)[uParam0->f_12]->f_4)
	{
		if (func_193(Global_34, uParam0->f_53, 1) < 25f)
		{
			func_60(uParam0, 8192);
			func_60(uParam0, 16384);
			do_screen_fade_out(500);
			func_217("NET_WCAMP_OWNER_SHUTDOWN", 10000, 0, 0, 0, 1);
		}
		return true;
	}
	return false;
}

int func_90(int iParam0)
{
	return iParam0;
}

void func_91(int iParam0)
{
	if (!func_218(iParam0))
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

void func_92(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		func_44(uParam0->f_1[iVar0], 1, 1);
		iVar0++;
	}
}

void func_93(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (_uistatemachine_request_transition(-1624772174, 1383188602))
		{
		}
		else
		{
			_close_app_by_hash(-1624772174);
		}
	}
	else
	{
		_close_app_by_hash(-1624772174);
	}
	func_219(uParam0, 256);
	_0xd962f8579d702db5();
}

bool func_94()
{
	if (decor_exist_on(player_ped_id(), "player_crafting_active"))
	{
		return decor_get_bool(player_ped_id(), "player_crafting_active");
	}
	return false;
}

void func_95(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913694->f_1582 = bParam0;
	decor_set_bool(Global_34, "player_crafting_active", bParam0);
}

void func_96(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_48))
	{
		reset_anim_scene(uParam0->f_48, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_49))
	{
		reset_anim_scene(uParam0->f_49, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_50))
	{
		reset_anim_scene(uParam0->f_50, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_51))
	{
		reset_anim_scene(uParam0->f_51, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_52))
	{
		reset_anim_scene(uParam0->f_52, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_53))
	{
		reset_anim_scene(uParam0->f_53, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_54))
	{
		reset_anim_scene(uParam0->f_54, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_55))
	{
		reset_anim_scene(uParam0->f_55, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_56))
	{
		reset_anim_scene(uParam0->f_56, 0);
	}
	func_97(&(uParam0->f_63), &(uParam0->f_64));
	func_97(&(uParam0->f_65), &(uParam0->f_66));
	func_97(&(uParam0->f_67), &(uParam0->f_68));
}

bool func_97(int* iParam0, var uParam1)
{
	if (!does_entity_exist(*iParam0))
	{
		return true;
	}
	if (network_has_control_of_entity(*iParam0))
	{
		delete_object(iParam0);
		return true;
	}
	*uParam1 = 1;
	network_request_control_of_entity(*iParam0);
	return false;
}

bool func_98(var uParam0, int iParam1)
{
	return func_166(*uParam0, iParam1);
}

void func_99(var uParam0, int iParam1)
{
	if (uParam0->f_10 != iParam1)
	{
		uParam0->f_10 = iParam1;
		func_220(uParam0);
	}
}

int func_100(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_104(iParam0, 0))
	{
		return -1;
	}
	if (func_221(iParam0))
	{
		if (!func_223(func_222(iParam0), iParam1, &uVar0, 0, 0))
		{
			return -1;
		}
	}
	else if (func_224(iParam0, iParam1, 0, 0) < iParam2)
	{
		return -1;
	}
	Var2 = { func_225(iParam0, 1, 0) };
	if (func_226(iParam0, &Var2, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	iVar7 = -1;
	iVar8 = func_227(iParam0);
	if (iVar8 == 1388422710)
	{
		iVar7 = func_228(iParam0, "SPEND STEW FEE", 1, 1, 0, iParam1);
	}
	else
	{
		Var9 = -1;
		Var9.f_1 = -1;
		if (func_221(iParam0))
		{
			Var19.f_9 = 1;
			Var19.f_11 = -1591664384;
			if (!func_229(&Var9, func_222(iParam0), &Var19, 1, iParam1, -1, 0, 0))
			{
				return -1;
			}
		}
		else
		{
			Var36.f_9 = 1;
			Var36.f_11 = -1591664384;
			if (!func_230(&Var9, iParam0, Var2, Var2.f_4, iParam2, &Var36, 1, iParam1, -1, 1))
			{
				return -1;
			}
		}
		iVar7 = Var9.f_1;
	}
	if (iVar7 == -1)
	{
		return -1;
	}
	Var52.f_7 = -142743235;
	Var52.f_16 = -1;
	Var52.f_1 = 1;
	if (iParam0 == -1283929968)
	{
		Var52.f_1 = 0;
	}
	if (func_221(iParam0))
	{
		if (func_231(func_222(iParam0), iParam1) == 1400824947)
		{
			Var52.f_1 = 0;
		}
	}
	else if (func_232(iParam0, iParam1) == 1400824947)
	{
		Var52.f_1 = 0;
	}
	func_233(iVar7, Var52);
	_0x78c2e029db205a3a(iParam0, iParam1, uParam3);
	return iVar7;
}

void func_101(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_234(11, 1, 0);
		iVar0++;
	}
	if (func_235(iParam0, 0))
	{
		func_236(40);
	}
	else
	{
		func_236(39);
	}
}

bool func_102(bool bParam0)
{
	if (func_38() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_211(bParam0));
}

bool func_103()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_104(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

struct<2> func_105(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_106(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_107(int iParam0, int iParam1, bool bParam2, int iParam3)
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

var func_108(int iParam0)
{
	_0x31010318ba9897ac(&uVar0, iParam0);
	return uVar0;
}

var func_109(int iParam0, int iParam1)
{
	return func_237(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

bool func_110(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_111()
{
	return Global_1102219->f_3672;
}

void func_112(var uParam0)
{
	bVar0 = does_particle_fx_looped_exist(uParam0->f_29);
	if (does_entity_exist(*uParam0))
	{
		_0x646564a3b7df68f8(*uParam0, (0.65f + (uParam0->f_11 * 0.35f)), (0.65f + (uParam0->f_11 * 0.35f)));
		if (bVar0)
		{
			set_particle_fx_looped_evolution(uParam0->f_29, "Smoke", uParam0->f_17, true);
		}
		if (uParam0->f_1)
		{
			_0xc8e21c1677dc5e6f(*uParam0, (uParam0->f_12 * 0.5f));
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if (uParam0->f_12 != uParam0->f_21 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_12 = uParam0->f_21;
		}
		else
		{
			uParam0->f_12 = (((uParam0->f_12 * 15f) + uParam0->f_21) / 16f);
		}
		if (absf((uParam0->f_12 - uParam0->f_21)) < 0.0025f)
		{
			uParam0->f_12 = uParam0->f_21;
			_0xc8e21c1677dc5e6f(*uParam0, (uParam0->f_12 * 0.5f));
		}
	}
	if (uParam0->f_13 != uParam0->f_22 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_13 = uParam0->f_22;
		}
		else
		{
			uParam0->f_13 = (((uParam0->f_13 * 12f) + uParam0->f_22) / 13f);
		}
		if (absf((uParam0->f_13 - uParam0->f_22)) < 0.0025f)
		{
			uParam0->f_13 = uParam0->f_22;
			_0x7d7285efeab5af15(*uParam0, uParam0->f_13);
		}
	}
	if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else
		{
			uParam0->f_14 = (((uParam0->f_14 * 14f) + uParam0->f_23) / 15f);
		}
		if (absf((uParam0->f_14 - uParam0->f_23)) < 0.005f && !uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
		{
			_0xf49574e2332a8f06(*uParam0, (uParam0->f_14 * 0.33f));
		}
	}
	if (uParam0->f_15 != uParam0->f_24 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_15 = uParam0->f_24;
		}
		else
		{
			uParam0->f_15 = (((uParam0->f_15 * 19f) + uParam0->f_24) / 20f);
		}
		if (absf((uParam0->f_15 - uParam0->f_24)) < 0.0025f)
		{
			uParam0->f_15 = uParam0->f_24;
			_set_object_burn_level(*uParam0, ((uParam0->f_15 * 0.9f) + 0.1f), true);
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			set_particle_fx_looped_evolution(uParam0->f_29, "Under", uParam0->f_16, true);
		}
	}
	else if ((uParam0->f_16 != uParam0->f_25 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_16 = uParam0->f_25;
		}
		else
		{
			uParam0->f_16 = (((uParam0->f_16 * 15f) + uParam0->f_25) / 16f);
		}
		if (absf((uParam0->f_16 - uParam0->f_25)) < 0.0025f)
		{
			uParam0->f_16 = uParam0->f_25;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Embers", uParam0->f_16, false);
			}
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			set_particle_fx_looped_evolution(uParam0->f_29, "Under", uParam0->f_17, true);
		}
	}
	else if ((uParam0->f_17 != uParam0->f_26 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_17 = uParam0->f_26;
		}
		else
		{
			uParam0->f_17 = (((uParam0->f_17 * 15f) + uParam0->f_26) / 16f);
		}
		if (absf((uParam0->f_17 - uParam0->f_26)) < 0.0025f)
		{
			uParam0->f_17 = uParam0->f_26;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Smoke", uParam0->f_17, true);
			}
		}
	}
	if ((uParam0->f_18 != uParam0->f_27 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_18 = uParam0->f_27;
		}
		else
		{
			uParam0->f_18 = (((uParam0->f_18 * 19f) + uParam0->f_27) / 20f);
		}
		if (absf((uParam0->f_18 - uParam0->f_27)) < 0.0025f)
		{
			uParam0->f_18 = uParam0->f_27;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if ((uParam0->f_19 != uParam0->f_28 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_19 = uParam0->f_28;
		}
		else
		{
			uParam0->f_19 = (((uParam0->f_19 * 19f) + uParam0->f_28) / 20f);
		}
		if (absf((uParam0->f_19 - uParam0->f_28)) < 0.0025f)
		{
			uParam0->f_19 = uParam0->f_28;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Smolder", uParam0->f_19, true);
			}
		}
	}
	if (uParam0->f_18 < 0f)
	{
		uParam0->f_18 = 0f;
	}
	if (uParam0->f_18 > 1f)
	{
		uParam0->f_18 = 1f;
	}
	if (uParam0->f_12 < 0f)
	{
		uParam0->f_12 = 0f;
	}
	if (uParam0->f_12 > 1f)
	{
		uParam0->f_12 = 1f;
	}
	if (uParam0->f_11 < 0.5f)
	{
		uParam0->f_11 = 0.5f;
	}
	if (uParam0->f_11 > 1f)
	{
		uParam0->f_11 = 1f;
	}
	if (bVar0)
	{
		uParam0->f_35 = 0;
	}
}

void func_113(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_20 = 0.9f;
			uParam0->f_21 = 1f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0.9f;
			uParam0->f_24 = 0.99f;
			uParam0->f_25 = 1f;
			uParam0->f_26 = 0.75f;
			uParam0->f_27 = 1f;
			uParam0->f_28 = 0f;
			break;
		case 1:
			uParam0->f_20 = 0.66f;
			uParam0->f_21 = 0.66f;
			uParam0->f_22 = 0.6f;
			uParam0->f_23 = 0.5f;
			uParam0->f_24 = 0.88f;
			uParam0->f_25 = 0.66f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0.66f;
			uParam0->f_28 = 0f;
			break;
		case 2:
			uParam0->f_20 = 0.25f;
			uParam0->f_21 = 0.25f;
			uParam0->f_22 = 0.25f;
			uParam0->f_23 = 0.25f;
			uParam0->f_24 = 0.77f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.2f;
			uParam0->f_28 = 0f;
			break;
		case 3:
			uParam0->f_20 = 0.2f;
			uParam0->f_21 = 0.1f;
			uParam0->f_22 = 0.22f;
			uParam0->f_23 = 0.1f;
			uParam0->f_24 = 0.66f;
			uParam0->f_25 = 0.1f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.1f;
			uParam0->f_28 = 0f;
			break;
		case 4:
			uParam0->f_20 = 0.15f;
			uParam0->f_21 = 0.01f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.018f;
			uParam0->f_24 = 0.55f;
			uParam0->f_25 = 0.005f;
			uParam0->f_26 = 0.25f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0.6f;
			break;
		case 5:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 1f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 1f;
			break;
		case 6:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 0f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
		case 7:
			uParam0->f_20 = 0.4f;
			uParam0->f_21 = 0.2f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.02f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0f;
			break;
		case 8:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0.06f;
			uParam0->f_22 = 0.1f;
			uParam0->f_23 = 0.01f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
	}
}

float func_114()
{
	if (func_238(&Global_1940258, 4194304) || func_239() == 5)
	{
		return 1f;
	}
	return 0.5f;
}

bool func_115(var uParam0, float fParam1)
{
	if (!func_240(uParam0))
	{
		return false;
	}
	if (func_136(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_116(var uParam0)
{
	if (!uParam0->f_1)
	{
		iVar0 = get_clock_hours();
		if (iVar0 >= 2 && iVar0 < 4)
		{
			func_113(uParam0, 1);
		}
		else if (iVar0 >= 4 && iVar0 < 6)
		{
			func_113(uParam0, 2);
		}
		else if (iVar0 >= 6 && iVar0 < 12)
		{
			func_113(uParam0, 3);
		}
		else if (iVar0 >= 12 && iVar0 < 17)
		{
			func_113(uParam0, 2);
		}
		else if (iVar0 >= 17 && iVar0 < 19)
		{
			func_113(uParam0, 1);
		}
		else
		{
			func_113(uParam0, 0);
		}
		func_117(&(uParam0->f_31));
	}
}

void func_117(var uParam0)
{
	func_241(uParam0, 0f);
}

void func_118(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 || iParam0);
}

bool func_119()
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
	if (!func_121(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_120(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_121(struct<2> Param0)
{
	if (!func_242(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_243(Param0))
	{
		return false;
	}
	return true;
}

int func_122(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_123(int iParam0, int iParam1)
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

int func_124(var uParam0)
{
	if (func_15(Global_34) && get_entity_speed(Global_34) >= 2f)
	{
		task_stand_still(func_244(7), 1);
		open_sequence_task(&iVar0);
		task_look_at_coord(0, uParam0->f_1 + Vector(1f, 0f, 0f), 2500, 1, 51, 1);
		task_pause(0, 400);
		task_turn_ped_to_face_coord(0, uParam0->f_1, 0);
		close_sequence_task(iVar0);
		func_60(uParam0, 4);
		return 1;
	}
	if (func_15(Global_34))
	{
		task_dismount_animal(Global_34, 0, 0, 0, 0, 0);
		func_60(uParam0, 8);
		func_117(&(uParam0->f_104));
		return 1;
	}
	return 0;
}

void func_125(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_240(uParam0))
	{
		func_241(uParam0, fParam1);
	}
}

void func_126(var uParam0)
{
	uParam0->f_62 = -1412768919;
	uParam0->f_63 = 1085378666;
	func_159(&(Local_28.f_126), 8192);
	func_159(&(Local_28.f_126), 64);
}

void func_127(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

bool func_128(var uParam0)
{
	if (func_2(uParam0->f_1) || get_distance_between_coords(uParam0->f_1, Global_35, true) > 150f)
	{
		func_217("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
		return false;
	}
	if (is_player_wanted_level_greater(player_id(), 1))
	{
		func_217("NET_WCAMP_OWNER_WANTED", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

int func_129(var uParam0)
{
	if (!func_31(uParam0, 32))
	{
		return 1;
	}
	if (get_entity_speed(Global_34) <= 1f || func_245(&(uParam0->f_104), 1.1f))
	{
		return 1;
	}
	return 0;
}

int func_130(var uParam0)
{
	if (!func_31(uParam0, 8))
	{
		return 1;
	}
	if (is_ped_on_foot(Global_34) || func_245(&(uParam0->f_104), 1f))
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_132(var uParam0)
{
	disable_control_action(0, -128997553, false);
}

bool func_133()
{
	iVar0 = func_246(7);
	if (iVar0 == 0 || iVar0 == get_id_of_this_thread())
	{
		return true;
	}
	return false;
}

void func_134(var uParam0, bool bParam1)
{
	if (bParam1 || !func_240(uParam0))
	{
		func_117(uParam0);
	}
}

void func_135(var uParam0)
{
	uParam0->f_90 = _0xf49f14462f0ae27c(player_id());
	if (!does_entity_exist(uParam0->f_90))
	{
		return;
	}
	if (func_247(uParam0))
	{
		func_60(uParam0, 16);
	}
}

float func_136(var uParam0)
{
	if (!func_240(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_248(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_249() - uParam0->f_1);
}

void func_137(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_138(var uParam0, vector3 vParam1)
{
	if (uParam0->f_62 == 0)
	{
	}
	if (does_object_of_type_exist_at_coords(vParam1, 15f, uParam0->f_62, true))
	{
		func_250(vParam1, 15f, 2);
	}
}

void func_139(var uParam0)
{
	func_60(uParam0, 1024);
	if (func_31(uParam0, 4096))
	{
		_remove_ped_from_mount(Global_34, true, false);
	}
	clear_ped_tasks(Global_34, 1, 0);
	clear_ped_secondary_task(Global_34);
	if (_0x513f8aa5bf2f17cf(uParam0->f_1, 100f, 0))
	{
		func_117(&(uParam0->f_101));
	}
	if (does_entity_exist(uParam0->f_53))
	{
		delete_object(&(uParam0->f_53));
	}
	if (!does_entity_exist(uParam0->f_53))
	{
		func_86(uParam0);
	}
	Local_28.f_127 = get_object_index_from_entity_index(uParam0->f_53);
}

void func_140(var uParam0)
{
	switch (uParam0->f_13)
	{
		case 0:
			vVar0 = { -5f, 4f, 0f };
			break;
		case 1:
			vVar0 = { -4f, -3.5f, 0f };
			break;
		case 2:
			vVar0 = { 5f, 4f, 0f };
			break;
		case 3:
			vVar0 = { 5f, -4f, 0f };
			break;
	}
	uParam0->f_59 = { _get_object_offset_from_coords(uParam0->f_1, uParam0->f_8, vVar0) };
}

void func_141(var uParam0, bool bParam1)
{
	if (!_does_volume_exist(uParam0->f_96))
	{
		if (!func_2(uParam0->f_1))
		{
			uParam0->f_96 = _create_volume_sphere(uParam0->f_1, 0f, 0f, 0f, 30f, 30f, 30f);
		}
	}
	_0x18262cafebb5fbe1(uParam0->f_96, 0, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(uParam0->f_96, 0, 2048, 0, -1, -1, 4);
	func_251(uParam0->f_1, 175f, "Player Camp", 1, 0, 0, 0, -1082130432);
	if (bParam1)
	{
		func_252(uParam0->f_1, 30f, 0, 0, 5, 1);
		func_253(uParam0->f_1, 60f, 0, 0);
		func_127(uParam0->f_1, 60f, 0);
	}
	if (!_does_volume_exist(uParam0->f_58))
	{
		uParam0->f_58 = _create_volume_sphere(uParam0->f_1, 0f, 0f, 0f, 70f, 70f, 70f);
		_0xb56d41a694e42e86(uParam0->f_58, 4096, 0, 0, -1, -1, 4);
		_0x18262cafebb5fbe1(uParam0->f_58, 4096, 0, 0, -1, -1, 0);
	}
	if (!does_navmesh_blocking_object_exist(uParam0->f_97))
	{
		uParam0->f_97 = add_navmesh_blocking_object(uParam0->f_1, 5f, 5f, 5f, 0f, false, 16);
	}
	uParam0->f_89 = _0x0eb78c2b156635b1(665633627, uParam0->f_1, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
}

void func_142(var uParam0)
{
	if (does_entity_exist(uParam0->f_90))
	{
		if (func_254(uParam0->f_90) > 2)
		{
			uParam0->f_57 = _create_volume_sphere_with_custom_name(uParam0->f_59, 0f, 0f, 0f, 3f, 3f, 15f, "volWander");
		}
		else
		{
			uParam0->f_57 = _create_volume_sphere_with_custom_name(uParam0->f_59, 0f, 0f, 0f, 5f, 5f, 15f, "volWander");
		}
	}
}

void func_143(var uParam0)
{
	if (does_entity_exist(uParam0->f_90))
	{
		if (!is_entity_dead(uParam0->f_90))
		{
			set_blocking_of_non_temporary_events(uParam0->f_90, false);
			func_255(uParam0->f_90, uParam0->f_59, (uParam0->f_8 - 90f), 2, 1073741824);
			_0x0348469daa17576c(uParam0->f_90);
			freeze_entity_position(uParam0->f_90, false);
			_0xf74e134f40192884(uParam0->f_90, 2);
		}
	}
}

int func_144(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return 0;
	}
	if (!func_123(Global_34, -76381094))
	{
		if (_does_scenario_point_exist(&(Local_28[0])))
		{
			if (!func_256(Global_35, uParam0->f_1, 5f, 1))
			{
				func_255(Global_34, _get_scenario_point_coords(&(Local_28[0]), true), uParam0->f_4, 2, 1073741824);
			}
			func_257();
		}
	}
	return 1;
}

void func_145(var uParam0)
{
	if (!func_123(uParam0->f_90, 1139527981))
	{
		if (!func_123(uParam0->f_90, -1098463898))
		{
			clear_ped_tasks(uParam0->f_90, 1, 0);
			task_start_scenario_at_position(uParam0->f_90, 1205237879, uParam0->f_59, uParam0->f_4, 0, false, true, 0, -1f, false);
		}
	}
	if (does_entity_exist(uParam0->f_91))
	{
		if (!func_123(uParam0->f_91, 1139527981))
		{
			if (!func_123(uParam0->f_91, -1098463898))
			{
				clear_ped_tasks(uParam0->f_91, 1, 0);
				task_start_scenario_at_position(uParam0->f_91, 1205237879, uParam0->f_59, uParam0->f_4, 0, false, true, 0, -1f, false);
			}
		}
	}
}

void func_146(int iParam0, int iParam1)
{
	if (func_258(iParam0))
	{
		return;
	}
	if (func_259(iParam0) == iParam1)
	{
		return;
	}
	if (Global_17374 >= 10)
	{
		Global_17374 = 0;
	}
	Global_17353[Global_17374]->f_1 = iParam1;
	Global_17353[Global_17374] = iParam0;
	Global_17374++;
}

int func_147(int iParam0, int iParam1)
{
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (!_0xde0ea444735c1368(iParam1))
	{
		_0x19c7567d2f2287d6(iParam1, 15);
	}
	if (_0xe9b168527b337bf0(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_148(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

bool func_149(var uParam0)
{
	if (_0xcf45df50c7775f2a())
	{
		if (_0x0909f71b5c070797() && func_115(&(uParam0->f_101), 2f))
		{
			_0x5a8b01199c3e79c3();
			return true;
		}
		else if (func_245(&(uParam0->f_101), 5f))
		{
			_0x5a8b01199c3e79c3();
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_150(var uParam0)
{
	if (uParam0->f_15 != 7)
	{
		uParam0->f_108 = { _get_object_offset_from_coords(uParam0->f_1, uParam0->f_8, 0f, 2f, 0f) };
	}
}

void func_151(var uParam0)
{
	if (_is_ped_carrying(Global_34))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_34);
		if (is_entity_a_ped(iVar0))
		{
			func_255(Global_34, (uParam0->f_1 + 5f), (uParam0->f_1.f_1 + 5f), (uParam0->f_1.f_2 + 0.5f), uParam0->f_4, 32, 1073741824);
			_0xed00d72f81cf7278(iVar0, 0, 0);
		}
		else
		{
			_0xed00d72f81cf7278(iVar0, 0, 0);
			func_255(iVar0, (uParam0->f_1 + 5f), (uParam0->f_1.f_1 + 5f), (uParam0->f_1.f_2 + 0.5f), uParam0->f_4, 32, 1073741824);
		}
	}
}

int func_152()
{
	return Global_1896622->f_41;
}

bool func_153(int iParam0)
{
	if (!func_260(iParam0))
	{
		return false;
	}
	return func_261(iParam0);
}

int func_154()
{
	if (!func_262(&iVar0))
	{
		return 0;
	}
	_0x2208438012482a1a(Global_34, false, false);
	_0xc494c76a34266e82(Global_34, 13);
	iVar1 = func_263(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_265(&(Global_1952637->f_83[func_264(iVar1, 1)]), 8);
	func_266(23, 0, 0, 0, 0);
	return 1;
}

void func_155(var uParam0)
{
	if (is_ped_in_combat(Global_34, 0) || func_31(uParam0, 128))
	{
		func_157(32);
		func_159(&(Local_28.f_125), 64);
	}
	else if (func_59(32))
	{
		func_159(&(Local_28.f_125), 128);
		func_29(32);
	}
}

void func_156(var uParam0)
{
	if (func_107(uParam0->f_90, uParam0->f_57, 1, 0))
	{
		set_ped_reset_flag(uParam0->f_90, 53, true);
		set_ped_reset_flag(uParam0->f_90, 49, true);
	}
}

void func_157(int iParam0)
{
	if (!func_59(iParam0))
	{
		Global_1958000 = (Global_1958000 || iParam0);
	}
}

bool func_158(int iParam0, int iParam1)
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

void func_159(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_160(var uParam0)
{
	func_32(uParam0, 64);
	if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
	{
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return false;
	}
	if (func_267(Global_34))
	{
		return false;
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_34);
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			if (_0x9a100f1cf4546629(iVar1))
			{
				func_60(uParam0, 64);
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (get_number_of_fires_in_range(get_entity_coords(Local_28.f_127, true, false), 1.5f) > 2)
	{
		return false;
	}
	return true;
}

int func_161(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_268(iVar0, 2))
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
		func_269(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_162(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_43(iParam0))
	{
		return;
	}
	iVar0 = func_90(iParam0);
	if (bParam1)
	{
		func_270(iParam0, 4);
		if (bParam3)
		{
			func_271(iVar0, 1);
		}
		func_272(iVar0, 1);
	}
	else
	{
		func_273(iParam0, 4);
		func_272(iVar0, 0);
	}
}

void func_163(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_43(iParam0))
	{
		return;
	}
	iVar0 = func_90(iParam0);
	func_271(iVar0, bParam1);
}

bool func_164(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!_does_item_have_valid_base(Global_26356))
	{
		Global_26356 = create_itemset(true);
	}
	_0x20a4bf0e09bee146(Global_26356);
	iVar0 = _0x886171a12f400b89(uParam0, Global_26356, iParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = get_indexed_item_in_itemset(iVar1, Global_26356);
		iVar3 = _get_entity_from_item(iVar2);
		if (iParam4 == 1 && is_entity_dead(iVar3))
		{
		}
		else if (iParam2 != iVar3 && iParam3 != iVar3)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_165(int iParam0, bool bParam1)
{
	if (bParam1 && !func_43(iParam0))
	{
		return false;
	}
	iVar0 = func_90(iParam0);
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

bool func_166(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_167(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_168(var uParam0)
{
	if (func_210(uParam0) && (get_game_timer() - uParam0->f_149) > 250)
	{
		iVar0 = _0xc22aa08a8adb87d4(Global_34);
		if (iVar0 == -518407211 || iVar0 == 1662215698)
		{
			func_213(653141085, 1086324736);
			uParam0->f_149 = get_game_timer();
		}
		else if (iVar0 == -1433449364 || iVar0 == 2058555960)
		{
			func_213(1335077954, 1086324736);
			uParam0->f_149 = get_game_timer();
		}
		else if (ped_has_use_scenario_task(Global_34) && (get_frame_count() % 2) == 0)
		{
			clear_ped_tasks(Global_34, 1, 0);
		}
	}
}

float func_169(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_274(vVar0, vParam1);
}

void func_170(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_43(iParam0))
	{
		return;
	}
	iVar0 = func_90(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

bool func_171(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return !func_107(Global_34, uParam0->f_56, 1, 0);
	}
	return false;
}

void func_172(var uParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

int func_173(int iParam0)
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

int func_174(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_275(*uParam0, 0f, 0f, 0f))
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
	if (bParam4)
	{
		vVar4 = { *uParam0 };
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

void func_175(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = -1;
	func_276(uParam0, vParam1, fParam4, 4, iVar0, 0);
}

void func_176(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_276(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_177(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 258;
	func_276(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_178(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 258;
	func_276(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_179(var uParam0)
{
	if (uParam0->f_64)
	{
		if (func_97(&(uParam0->f_63), &(uParam0->f_64)))
		{
			uParam0->f_64 = 0;
		}
	}
	if (uParam0->f_66)
	{
		if (func_97(&(uParam0->f_65), &(uParam0->f_66)))
		{
			uParam0->f_66 = 0;
		}
	}
	if (uParam0->f_68)
	{
		if (func_97(&(uParam0->f_67), &(uParam0->f_68)))
		{
			uParam0->f_68 = 0;
		}
	}
}

bool func_180(int iParam0, int iParam1)
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
	if (func_277(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_277(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_277(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_277(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_277(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_277(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_277(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_277(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_181(var uParam0)
{
	if (func_59(16) || uParam0->f_128 == 7)
	{
		iVar0 = func_183(uParam0);
		if (iVar0 != -1)
		{
			if (!func_43(&(uParam0->f_135[6])))
			{
				disable_control_action(0, 1287709438, false);
			}
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -1046962283, false);
		}
	}
}

void func_182(var uParam0)
{
	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_8 = 0;
	vVar0.f_14 = 0;
	vVar0.f_3 = uParam0->f_127;
	vVar0 = { 0f, 0f, 0.5f };
	_0x66f9eb44342bb4c5(Global_34, &vVar0);
	bVar25 = false;
	bVar26 = false;
	if (is_ped_active_in_scenario(Global_34, 0))
	{
		bVar26 = true;
	}
	if (!bVar26)
	{
		if (is_ped_active_in_scenario(Global_34, 1))
		{
			bVar25 = true;
		}
	}
	if (bVar26 || (bVar25 && has_anim_event_fired(Global_34, -1206250122)))
	{
		if (_0xdd0b7c5ae58f721d(&(uParam0->f_18)))
		{
			if (!_0x927b810e43e99932(&(uParam0->f_18)))
			{
				_0xb8b207c34285e978(&(uParam0->f_18));
			}
		}
	}
}

int func_183(var uParam0)
{
	iVar0 = _get_scenario_point_ped_is_using(Global_34, false);
	if (_does_scenario_point_exist(iVar0) && !_0x0c3cb2e600c8977d(Global_34, 1))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (_does_scenario_point_exist(uParam0[iVar1]))
			{
				if (iVar0 == uParam0[iVar1])
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_184(var uParam0)
{
	return func_166(uParam0->f_126, 512);
}

void func_185(var uParam0)
{
	func_54(&(uParam0->f_126), 512);
}

void func_186(var uParam0)
{
	StringCopy(&(uParam0->f_18), "restbyfire_orbit_cam", 64);
	StringCopy(&(uParam0->f_18.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
}

void func_187(var uParam0, int iParam1)
{
	func_159(uParam0, iParam1);
}

void func_188(var uParam0, int iParam1)
{
	func_159(&(uParam0->f_126), 512);
	uParam0->f_128 = iParam1;
}

bool func_189(var uParam0)
{
	return true;
}

bool func_190(var uParam0)
{
	if (does_entity_exist(uParam0->f_127))
	{
		if (func_166(uParam0->f_125, 512))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_127, -0.966f, 0.203f, 0.5f) };
			*uParam0->f_5[0] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_127) + -99.171f);
			func_174(&vVar0, 1, 10, 0, 0);
			(*uParam0)[0] = create_scenario_point(1020517461, vVar0, fVar3, 0, 0, 0);
		}
		if (func_166(uParam0->f_125, 1024))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_127, -0.212f, -1.045f, 0.5f) };
			*uParam0->f_5[1] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_127) + -11.405f);
			func_174(&vVar0, 1, 10, 0, 0);
			(*uParam0)[1] = create_scenario_point(1259174088, vVar0, fVar3, 0, 0, 0);
		}
		if (func_166(uParam0->f_125, 2048))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_127, 1.025f, 0.043f, 0.5f) };
			*uParam0->f_5[2] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_127) + 91.78f);
			func_174(&vVar0, 1, 10, 0, 0);
			(*uParam0)[2] = create_scenario_point(-1075420544, vVar0, fVar3, 0, 0, 0);
		}
		if (func_166(uParam0->f_125, 4096))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_127, 0.249f, 1.05f, 0.5f) };
			*uParam0->f_5[3] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_127) + 164.29f);
			func_174(&vVar0, 1, 10, 0, 0);
			(*uParam0)[3] = create_scenario_point(-1767895052, vVar0, fVar3, 0, 0, 0);
		}
		return true;
	}
	return false;
}

void func_191(var uParam0)
{
	if (!_0xdd0b7c5ae58f721d(&(uParam0->f_18)))
	{
		if (!_0xc285fd21294a1c49(&(uParam0->f_18)))
		{
			_0x6a4d224fc7643941(&(uParam0->f_18));
		}
	}
}

bool func_192(var uParam0)
{
	func_54(&(uParam0->f_126), 1024);
	if (_is_ped_carrying(Global_34))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_34);
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			if (_0x9a100f1cf4546629(iVar1))
			{
				func_159(&(uParam0->f_126), 1024);
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (func_59(32) || !func_166(uParam0->f_125, 8192))
	{
		return false;
	}
	if (func_158(Global_34, 0))
	{
		return false;
	}
	if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
	{
		return false;
	}
	if (get_ped_config_flag(Global_34, 227, true))
	{
		return false;
	}
	if (func_267(Global_34))
	{
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return false;
	}
	if (_0xd04241bbf6d03a5e(Global_34) != 0)
	{
		return false;
	}
	if ((func_278(Global_34) || func_279(Global_34)) || func_280(Global_34))
	{
		return false;
	}
	if (!func_281(Global_34, uParam0->f_127, -0.5f))
	{
		return false;
	}
	if (get_number_of_fires_in_range(get_entity_coords(uParam0->f_127, true, false), 1.5f) > 2)
	{
		return false;
	}
	if (func_38() == -1)
	{
		if (func_282())
		{
			return false;
		}
	}
	else if (func_282() && !((Global_1915715->f_20241 == 28 || Global_1915715->f_20241 == 27) || Global_1915715->f_20241 == 29))
	{
		return false;
	}
	if (func_283(uParam0) == -1)
	{
		return false;
	}
	return true;
}

float func_193(int iParam0, int iParam1, bool bParam2)
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
	return func_274(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_194(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (_does_scenario_point_exist(uParam0[iVar0]))
		{
			_set_scenario_point_flag(uParam0[iVar0], 8, !bParam1);
		}
		iVar0++;
	}
}

void func_195()
{
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	disable_control_action(0, 130948705, false);
}

bool func_196(int iParam0, vector3 vParam1, float fParam4)
{
	iVar0 = _create_volume_cylinder(vParam1, 0f, 0f, 0f, fParam4, fParam4, 1f);
	if (func_284(&vParam1, 1073741824))
	{
		func_30(iVar0);
		return true;
	}
	iVar1 = _0x84ccf9a12942c83d(iVar0, *iParam0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = get_indexed_item_in_itemset(iVar2, *iParam0);
		iVar4 = _get_entity_from_item(iVar3);
		if (is_entity_a_ped(iVar4))
		{
			iVar5 = get_ped_index_from_entity_index(iVar4);
			if (iVar5 != Global_34)
			{
				if (_get_carrier_as_ped(iVar5) != Global_34)
				{
					func_30(iVar0);
					return true;
				}
			}
		}
		iVar2++;
	}
	func_30(iVar0);
	return false;
}

bool func_197(bool bParam0)
{
	if (!is_entity_dead(Global_34))
	{
		if (ped_has_use_scenario_task(Global_34) && !_0x0c3cb2e600c8977d(Global_34, 1))
		{
			if (((_0x02ebbb3989b7e695(Global_34) || (bParam0 && is_ped_active_in_scenario(Global_34, 0))) || (is_task_move_network_active(Global_34) && get_task_move_network_event(Global_34, "SCENARIO_POINT_TRANS_COMPLETE"))) || (func_59(16) && has_anim_event_fired(Global_34, -1208591336)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_198()
{
	iVar0 = _0xc22aa08a8adb87d4(Global_34);
	switch (iVar0)
	{
		case 512684539:
		case 970934364:
			return 3;
		case 1135271674:
		case 1844142525:
			return 6;
		case -571916863:
		case 825619760:
			return 8;
		case -597629206:
		case 1316803372:
			return 7;
		case -1879538536:
			return 1;
		case -777009509:
		case -734326242:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_199(var uParam0, int iParam1)
{
	uParam0->f_124 = iParam1;
}

void func_200(var uParam0)
{
	if (((!ped_has_use_scenario_task(Global_34) && func_166(uParam0->f_126, 131072)) && !_is_ped_carrying(Global_34)) && !_0x0de0944eccb3df5d(Global_34))
	{
		if (does_entity_exist(uParam0->f_127))
		{
			if (!func_43(uParam0->f_145))
			{
				uParam0->f_145 = func_285("REST_BY_FIRE", -719620017, uParam0->f_127, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
			}
			else if (func_165(uParam0->f_145, 1))
			{
				func_204(uParam0);
				func_52(uParam0);
				func_54(&(uParam0->f_126), 131072);
			}
		}
	}
	else
	{
		func_18(uParam0);
	}
	if (func_43(uParam0->f_145))
	{
		func_170(uParam0->f_145, 1754796591, 0, 1);
	}
}

void func_201(var uParam0)
{
	if (func_166(uParam0->f_126, 131072))
	{
		if (!func_43(uParam0->f_146))
		{
			if (func_286(uParam0))
			{
				uParam0->f_146 = func_285("CRAFT_COOK", -473983589, uParam0->f_127, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
				set_bit(&(Global_1957959->f_1), 2);
				set_bit(&(Global_1957959->f_1), 3);
				if (func_166(uParam0->f_126, 1024))
				{
					if (func_287(uParam0))
					{
						func_288(uParam0->f_146, "CAMP_REC_COOK", 1);
					}
					else
					{
						clear_bit(&(Global_1957959->f_1), 2);
						func_162(uParam0->f_146, 0, 1, 1);
					}
				}
			}
		}
		else if (((((ped_has_use_scenario_task(Global_34) || _0x0de0944eccb3df5d(Global_34)) || func_289(872480335)) || func_289(-92416669)) || func_290()) || Global_1940258->f_38 == 332793555)
		{
			func_52(uParam0);
			func_54(&(uParam0->f_126), 131072);
		}
		else if (func_59(16) || func_166(uParam0->f_126, 32768))
		{
			func_29(16);
			func_159(&(uParam0->f_126), 32768);
			func_52(uParam0);
			func_54(&(uParam0->f_126), 131072);
		}
		else
		{
			if (func_166(uParam0->f_126, 1024) != func_166(uParam0->f_126, 2048))
			{
				if (func_166(uParam0->f_126, 1024))
				{
					if (func_287(uParam0) && !func_43(Global_1940144->f_85))
					{
						func_288(uParam0->f_146, "CAMP_REC_COOK", 1);
						func_162(uParam0->f_146, 1, 1, 1);
						func_159(&(uParam0->f_126), 4096);
					}
					else
					{
						func_44(&(uParam0->f_146), 1, 1);
						uParam0->f_146 = func_285("CRAFT_COOK", -473983589, uParam0->f_127, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
						func_162(uParam0->f_146, 0, 1, 1);
						func_54(&(uParam0->f_126), 4096);
					}
				}
				else
				{
					set_bit(&(Global_1957959->f_1), 2);
					set_bit(&(Global_1957959->f_1), 3);
					func_44(&(uParam0->f_146), 1, 1);
					uParam0->f_146 = func_285("CRAFT_COOK", -473983589, uParam0->f_127, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
				}
				if (func_166(uParam0->f_126, 1024))
				{
					func_159(&(uParam0->f_126), 2048);
				}
				else
				{
					func_54(&(uParam0->f_126), 2048);
				}
			}
			if (func_165(uParam0->f_146, 1))
			{
				func_159(&(uParam0->f_126), 32768);
				clear_bit(&(Global_1957959->f_1), 2);
				func_52(uParam0);
				func_54(&(uParam0->f_126), 131072);
				if (func_166(uParam0->f_126, 1024))
				{
					if (func_287(uParam0))
					{
						func_159(&(uParam0->f_126), 4096);
					}
					else
					{
						func_54(&(uParam0->f_126), 4096);
					}
				}
				if (func_166(uParam0->f_126, 1024) && func_166(uParam0->f_126, 4096))
				{
					func_157(64);
				}
			}
		}
	}
	else
	{
		func_44(&(uParam0->f_146), 1, 1);
	}
	if (func_43(uParam0->f_146))
	{
		func_170(uParam0->f_146, 1754796591, 0, 1);
	}
}

char* func_202(int iParam0)
{
	return "CAMPFIRE";
}

float func_203(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_204(var uParam0)
{
	iVar0 = func_283(uParam0);
	if (iVar0 == -1)
	{
		func_29(64);
		func_29(16);
		func_54(&(uParam0->f_126), 32768);
		uParam0->f_132 = 0;
		return;
	}
	if (func_59(64))
	{
		func_291(Global_34, 1, 1);
		switch (iVar0)
		{
			case 0:
			case 3:
				uParam0->f_132 = 2;
				_task_use_scenario_point(Global_34, uParam0[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_130 = 6;
				uParam0->f_129 = 0;
				break;
			case 1:
			case 2:
				uParam0->f_132 = 2;
				_task_use_scenario_point(Global_34, uParam0[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_130 = 6;
				uParam0->f_129 = 1;
				break;
		}
		do_screen_fade_out(0);
	}
	else
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				iVar1 = 0;
				if (((func_59(16) || func_166(uParam0->f_126, 32768)) || func_292(684307653, &iVar1)) || func_292(562107429, &iVar1))
				{
					bVar2 = true;
					if (func_293(0) || func_293(1))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						_0xd65fdc686a031c83(Global_34, -1955932021, 3f);
					}
					if (is_ped_male(Global_34))
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (uParam0->f_132 == 1)
				{
					if (is_ped_male(Global_34))
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (func_294())
				{
					if (is_ped_male(Global_34))
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (is_ped_male(Global_34))
				{
					_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				else
				{
					_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A", 0, true, false, 0, false, -1f, false);
				}
				break;
		}
		uParam0->f_129 = iVar0;
	}
}

void func_205()
{
	if (func_104(-160924582, 0))
	{
		func_295(32);
	}
	if (func_104(1652431022, 0))
	{
		func_295(32);
	}
	if (func_104(-1016714371, 0))
	{
		func_295(64);
	}
	if (func_104(332793555, 0))
	{
		func_295(131072);
	}
}

void func_206(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_43(&(uParam0->f_135[iVar0])))
		{
			if (func_296(&(uParam0->f_135[iVar0]), 0) == bParam1)
			{
			}
			else
			{
				func_162(&(uParam0->f_135[iVar0]), bParam1, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_207(var uParam0)
{
	iVar0 = _0xc22aa08a8adb87d4(Global_34);
	iVar1 = 0;
	if (iVar0 == 1135271674 || iVar0 == 1844142525)
	{
		if ((((((func_210(uParam0) && (get_game_timer() - uParam0->f_149) > 500) && !func_166(uParam0->f_126, 32768)) && !func_59(16)) && uParam0->f_132 != 1) && !func_292(684307653, &iVar1)) && !func_292(562107429, &iVar1))
		{
			func_117(&(uParam0->f_157));
			func_213(-63615330, 0.5f);
			uParam0->f_149 = get_game_timer();
		}
	}
	else if (iVar0 == -571916863 || iVar0 == 825619760)
	{
		if (func_210(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
		{
			if (!func_240(&(uParam0->f_157)))
			{
				func_117(&(uParam0->f_157));
			}
			if (func_115(&(uParam0->f_157), 180f))
			{
				func_117(&(uParam0->f_157));
				if (!func_294())
				{
					func_213(1698735158, 0.5f);
					uParam0->f_149 = get_game_timer();
				}
			}
		}
	}
	else if (iVar0 == -597629206 || iVar0 == 1316803372)
	{
		if (func_210(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
		{
			if (!func_240(&(uParam0->f_157)))
			{
				func_117(&(uParam0->f_157));
			}
			if (func_115(&(uParam0->f_157), 10f))
			{
				if (func_294())
				{
					func_117(&(uParam0->f_157));
					uParam0->f_149 = get_game_timer();
					func_213(-841180202, 0.5f);
				}
			}
		}
	}
	else if (iVar0 == -518407211 || iVar0 == 1662215698)
	{
		if (func_210(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
		{
			func_213(653141085, 2f);
			uParam0->f_149 = get_game_timer();
		}
	}
	else if (iVar0 == -1433449364 || iVar0 == 2058555960)
	{
		if (func_210(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
		{
			func_213(1335077954, 2f);
			uParam0->f_149 = get_game_timer();
		}
	}
}

bool func_208(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		iVar2 = iParam2;
		if (iParam3 != -1)
		{
			iVar1 = iParam3;
		}
		else
		{
			iVar1 = uParam0->f_129;
		}
	}
	else
	{
		iVar1 = uParam0->f_129;
		iVar2 = uParam0->f_130;
	}
	switch (iVar1)
	{
		case 0:
		case 1:
			switch (iVar2)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
				case 4:
					iVar0 = 0;
					break;
				default:
					if (func_38() != 0 || func_166(uParam0->f_126, 64))
					{
						iVar0 = 544786;
					}
					else
					{
						iVar0 = 20498;
					}
					break;
			}
			break;
		case 2:
		case 3:
			if ((iVar2 == 3 || iVar2 == 4) || iVar2 == 1)
			{
				iVar0 = 0;
			}
			else if (func_38() != 0 || func_166(uParam0->f_126, 64))
			{
				iVar0 = 544786;
			}
			else
			{
				iVar0 = 20498;
			}
			break;
	}
	if (_0x038b1f1674f0e242(Global_34) || func_166(uParam0->f_126, 16384))
	{
		iVar0 = 0;
	}
	else if (func_158(Global_34, 0) || _0x0de0944eccb3df5d(Global_34))
	{
		if (!func_166(uParam0->f_126, 32))
		{
			func_297(207, 1);
			func_159(&(uParam0->f_126), 32);
		}
		iVar0 = 16;
	}
	func_298(uParam0, iVar0);
	if (uParam0->f_132 == 2)
	{
		func_206(uParam0, 0);
	}
	iVar3 = func_299(uParam0);
	if (iVar3 != -1)
	{
		if (uParam0->f_131 != -1)
		{
			uParam0->f_129 = uParam0->f_131;
		}
	}
	switch (iVar3)
	{
		case 0:
			func_92(&(uParam0->f_49));
			func_99(&(uParam0->f_49), 1);
			uParam0->f_132 = 6;
			break;
		case 8:
			func_49(uParam0);
			func_159(&(uParam0->f_126), 16384);
			break;
		case 2:
			func_99(&(uParam0->f_49), 2);
			func_199(uParam0, 0);
			func_187(&(uParam0->f_49), 32);
			uParam0->f_132 = 2;
			func_49(uParam0);
			func_188(uParam0, 7);
			break;
		case 6:
			func_49(uParam0);
			uParam0->f_132 = 10;
			return true;
		case 1:
			uParam0->f_132 = 0;
			func_49(uParam0);
			break;
		default:
			return false;
	}
	return true;
}

bool func_209(var uParam0)
{
	switch (uParam0->f_129)
	{
		case 0:
			return func_300(uParam0);
		case 1:
			return func_301(uParam0);
		case 2:
			return func_302(uParam0);
		case 3:
			return func_303(uParam0);
	}
	func_49(uParam0);
	return false;
}

bool func_210(var uParam0)
{
	bVar0 = _0xc488b8c0e52560d8(Global_34);
	bVar1 = _0x2dc0e8dcbd3546e9(Global_34);
	if ((bVar0 || bVar1) && !has_anim_event_fired(Global_34, 1944546609))
	{
		return false;
	}
	if (bVar1 && uParam0->f_131 != -1)
	{
		iVar2 = func_183(uParam0);
		if (iVar2 != uParam0->f_131)
		{
			return false;
		}
		if (uParam0->f_129 != iVar2)
		{
			uParam0->f_129 = iVar2;
			return false;
		}
	}
	if (func_304())
	{
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return false;
	}
	return true;
}

int func_211(bool bParam0)
{
	if (func_38() == -1)
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

int func_212(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_305())
	{
		Global_1940311->f_10894 = iParam0;
		func_306(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_307(iParam0, bParam4))
	{
		return 0;
	}
	if (func_308(iParam0))
	{
		return 0;
	}
	if (_0xec7e480ff8bd0bed(Global_34) && !has_anim_event_fired(Global_34, 108107462))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (iParam0 == -418848773)
	{
		_launch_app_with_entry("player_menu", "mp_moonshine_selection");
	}
	if (func_309(iParam0))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		Global_1913503 = get_game_timer() + 3000;
		return 1;
	}
	if (func_310(iParam0, -2081717885))
	{
		func_311(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_310(iParam0, -1909684001))
	{
		func_312(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_310(iParam0, 587975446))
	{
		func_313(iParam0, Var10);
	}
	else if (func_310(iParam0, 566155764))
	{
		if (!func_314(iParam0))
		{
			return 0;
		}
	}
	if (func_315(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		return 1;
	}
	if (func_310(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_316(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_310(iParam0, -1472964441) || func_310(iParam0, -228153877)) || func_310(iParam0, 566155764))
	{
	}
	else if (func_310(iParam0, 1919582297))
	{
		if (((func_317() || is_ped_active_in_scenario(Global_34, 1)) || _0x0c3cb2e600c8977d(Global_34, 1)) || !is_ped_on_foot(Global_34))
		{
			return 0;
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
		func_316(Var10, 0);
		bVar28 = false;
	}
	else if (func_318(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_319(Global_1071686->f_28357.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_316(Var10, 0);
		iVar29 = 1;
	}
	else if (func_320(iParam0) == -1037537535)
	{
		if (!func_321(iParam0))
		{
			func_217("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_227(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_322();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_323(player_id()))
			{
				func_217("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_217("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1952637->f_1675 != iParam0)
			{
				func_266(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_324(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_325(iParam0);
					func_266(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1952637->f_1675.f_1[23])
					{
						func_326(Global_34, 260271636, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						_0xcb9401f918cb0f75(Global_34, "PlayUnequipGlovesFidget", 1, 15);
						func_327(iParam0, 0, 0);
						return 1;
					}
					else
					{
						_0xcb9401f918cb0f75(Global_34, "PlayEquipGlovesFidget", 1, 15);
						func_327(iParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (iParam0 == &Global_1952637->f_1675.f_1[10])
					{
						func_326(Global_34, &(Global_1952637->f_83[10]), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						func_327(iParam0, 0, 0);
						return 1;
					}
					else
					{
						func_327(iParam0, 1, 0);
						func_328(-2061583405, 0);
						if (iVar32 == 1388798186)
						{
							func_328(119907797, 0);
						}
						else if (iVar32 == 119907797)
						{
							func_328(1388798186, 0);
						}
					}
					break;
				default:
					if (!func_310(iParam0, 160827531))
					{
					}
					else
					{
						func_324(iParam0, 0);
					}
					break;
			}
			func_326(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039:
				func_329(1);
				break;
			case -727924611:
				if (func_38() != -1)
				{
				}
				else if (!func_321(iParam0))
				{
					func_217("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_330(7, iParam0);
					bVar31 = func_330(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (does_blip_exist(Global_17332))
						{
							remove_blip(&Global_17332);
						}
						Global_17332 = _0x3e593df9c2962ec6(-1925605092);
						_blip_set_modifier(Global_17332, 673950256);
						func_217(_create_var_string(0, -1680440926, Global_17332), 10000, 0, 0, 0, 1);
					}
					else if (!func_331(7))
					{
						func_217("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_332(Global_34, func_244(7), 0))
						{
							func_217("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (does_blip_exist(Global_17332))
							{
								remove_blip(&Global_17332);
							}
							Global_17332 = _0x3e593df9c2962ec6(-1925605092);
							_blip_set_modifier(Global_17332, 673950256);
							func_217(_create_var_string(0, -482898802, Global_17332), 10000, 0, 0, 0, 1);
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
							func_316(Var10, 0);
						}
						Jump @2406; //curOff = 1788
						func_333();
						Jump @2406; //curOff = 1795
						if (func_321(-1838434463))
						{
							if (func_334(1, 1))
							{
								func_335(2, 1);
							}
							else if (func_336(1))
							{
								func_217("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_337())
							{
								func_217("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (_0x424b17a7dc5c90bc(player_id()))
								{
									func_338();
								}
								else
								{
									func_217("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_339(_0x901e0dc25080c8b9(player_id()));
							}
						}
						else if (!_0x424b17a7dc5c90bc(player_id()))
						{
							func_217("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_339(_0x901e0dc25080c8b9(player_id()));
						}
						else if (func_337())
						{
							func_217("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_217("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2406; //curOff = 2016
						if (!_is_weapon_binoculars(func_40(Global_34, 1, 0, 0)))
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2406; //curOff = 2054
						if (func_40(Global_34, 1, 0, 0) != iParam0)
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2406; //curOff = 2089
						Jump @2406; //curOff = 2092
						func_297(535, 1);
						Jump @2406; //curOff = 2103
						func_340(1);
						Jump @2406; //curOff = 2111
						_task_item_interaction(player_ped_id(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return 1;
						Jump @2406; //curOff = 2146
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
							func_316(Var10, 0);
						}
						return 1;
						Jump @2406; //curOff = 2222
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
							func_316(Var10, 0);
						}
						return 1;
						Jump @2406; //curOff = 2352
						if ((*Global_1138048)[player_id()]->f_4)
						{
							func_217("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_341();
						}
						return 1;
						Jump @2406; //curOff = 2397
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

bool func_213(int iParam0, float fParam1)
{
	if (!_0x68821369a2ceadd5(Global_34, iParam0))
	{
		_0xd65fdc686a031c83(Global_34, iParam0, fParam1);
		_0x6d07b371e9439019(Global_34);
		return false;
	}
	return true;
}

bool func_214(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (iParam3 == -142743235)
	{
		if (func_342(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_343(iParam0, 1);
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
			func_344(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_345(iParam0, 1))
	{
		return false;
	}
	Var5 = { func_346(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_347(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_347(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_214(iParam0, func_347(iParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_320(iParam0) == -427144552)
	{
		if (!func_348(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_306(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_225(iParam0, 0, 0) };
		if (func_102(0) && Var7.f_4 == 1084182731)
		{
			func_349(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_102(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_344(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

bool func_215(var uParam0, var uParam1)
{
	if (func_350(uParam0))
	{
		return true;
	}
	return false;
}

void func_216(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_102(0) || func_103())
	{
		return;
	}
	if (!func_104(iParam0, 0))
	{
		return;
	}
	func_106(func_351(-413660030), iParam1);
	if (bParam3)
	{
		if (func_38() == -1)
		{
			if (func_310(iParam0, -1588156645))
			{
				iVar0 = func_353(func_352(iParam0, 0), 0);
				if (is_weapon_valid(iVar0))
				{
					func_354(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_320(iParam0) == -1977020088)
			{
				if (func_355(iParam0, 0))
				{
					func_344(iParam0, 1, 0, 1, 0, 0, 0);
				}
			}
			else
			{
				func_356(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_357(iParam0, iParam4, iParam1);
		}
	}
	func_358(iParam0, iParam1);
	Global_1051133 = iParam0;
}

var func_217(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_218(int iParam0)
{
	return func_268(iParam0, 2);
}

void func_219(var uParam0, int iParam1)
{
	func_54(uParam0, iParam1);
}

void func_220(var uParam0)
{
	func_187(uParam0, 1);
}

bool func_221(int iParam0)
{
	return (func_359(iParam0) && func_310(iParam0, 1584357097));
}

int func_222(int iParam0)
{
	if (!func_221(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 731907282:
			return 195889874;
		case 1561454517:
			return 465087209;
		case 1254834984:
			return -311177636;
		case 1829957287:
			return 857944907;
		case 919634467:
			return -1729036567;
		case -28339930:
			return -2035393948;
		case 507515628:
			return -284580868;
		case -1975194892:
			return 73453226;
		case 2039957913:
			return 329215271;
		case 1502511939:
			return 1942551232;
		case 1809065934:
			return 518344954;
		case -997271222:
			return 1353200767;
		case -878058438:
			return -668553641;
		case -1617589234:
			return -431273312;
		case -1042952050:
			return -1111852673;
		case -2050900874:
			return -856521084;
		case -1815586685:
			return -412238982;
		case -51500315:
			return -260158053;
		case 1348094862:
			return 863949896;
		case 1646522145:
			return 1693169437;
		case 1156363443:
			return 387193715;
		case 1952092069:
			return -1816797957;
		case -2109461640:
			return -1533903180;
		case -1806184545:
			return 1874334976;
		case -1053842899:
			return -2015093177;
		case -755677768:
			return -1841483015;
		case 767294276:
			return -600422706;
		case 1311814185:
			return -229245945;
		case -840486512:
			return -526428006;
		case -1029170414:
			return 1651235889;
		case -831411723:
			return -882484202;
		case -429434400:
			return 1973137538;
		case -131203731:
			return -1830556910;
		case 1800445393:
			return 596295460;
		case 2047228732:
			return 290265769;
		case -2027203194:
			return 2081091619;
		case -609641686:
			return 516107635;
		case 154924622:
			return 207980728;
		case -142781743:
			return -99130340;
		case -533360838:
			return 1220617347;
		case -464283790:
			return -553725692;
		case -186533746:
			return -1123513064;
		case -1593520704:
			return -769187178;
		case 1260724738:
			return -1889559288;
		case -297375678:
			return 2100623539;
		case 1701653225:
			return -1303234828;
		case 1386939749:
			return 2105724242;
		case 1103717282:
			return 1767482612;
		case 1332088703:
			return 1366042262;
		case 1034120186:
			return 2091613460;
		case 532885562:
			return 1728467402;
		case -452048774:
			return 974561281;
		case -1085571851:
			return 1934791288;
		case -862677113:
			return -1633818354;
		case 1890828381:
			return -1707282708;
		case 1864875333:
			return 1682604808;
		case -320325540:
			return 1029354793;
		case -1278925815:
			return 1640403026;
		case -80071950:
			return -1229833684;
		case -781656240:
			return -2040374903;
		case 525029001:
			return 463034341;
		case 1717296181:
			return 149336704;
		case 1894117705:
			return 1146825064;
		case 1464921218:
			return -979751655;
		case 550403966:
			return -1219424121;
		case 856007660:
			return 1019812717;
		case -1617179117:
			return 862573726;
		case 1784374159:
			return 1100771587;
		case 2081818376:
			return 1455922005;
		case -1615607679:
			return 1686296029;
		case -1894668475:
			return 1957000738;
		case 2095710966:
			return 1656345167;
		case -260985198:
			return -354862110;
		case -1179959034:
			return -146516808;
		case -873142887:
			return -337101316;
		case 245915270:
			return 518337236;
		case 844146134:
			return 966617156;
		case 538640747:
			return 677332424;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -240893062;
		case -188079477:
			return -547676440;
		case 1578729681:
			return 526083803;
		case 1879581870:
			return -1364982418;
		case 948647349:
			return -1058723344;
		default:
			break;
	}
	return 0;
}

bool func_223(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_360(iParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_361(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_362(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_363(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_364(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_347(&(Var0[iVar32]), 0, bParam3, 1);
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

int func_224(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_365(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = ((!bParam3 && func_102(0)) && !func_103());
	iVar34 = -1;
	iVar35 = -1;
	if (Global_1915715->f_20638)
	{
		iVar35 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
			Jump @338; //curOff = 103
		}
		else
		{
			iVar36 = func_363(iVar35, &(Var0[iVar32]));
			if (iVar36 != 0)
			{
				bParam2 = false;
				iVar37 = func_364(&(Var0[iVar32]), iVar36);
			}
			else
			{
				iVar37 = func_347(&(Var0[iVar32]), 0, !bVar33, 1);
			}
			if (bVar33)
			{
				if (func_366(&(Var0[iVar32])) || func_367(&(Var0[iVar32])))
				{
					iVar37 = (iVar37 + func_368(&(Var0[iVar32]), 0));
					if (bParam2)
					{
						iVar38 = 0;
						iVar37 = (iVar37 + func_369(7, &(Var0[iVar32]), &iVar38));
					}
				}
				else if (bParam2)
				{
					iVar37 = (iVar37 + (func_370(7, &(Var0[iVar32])) + func_371(&(Var0[iVar32]))));
				}
			}
			if (iVar37 < Var0[iVar32]->f_1)
			{
				return 0;
			}
			iVar37 = (iVar37 / Var0[iVar32]->f_1);
			if (iVar34 == -1 || iVar37 < iVar34)
			{
				iVar34 = iVar37;
			}
		}
		iVar32++;
	}
	return iVar34;
}

struct<5> func_225(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_372(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_320(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_373(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_374(bParam1) };
			if (bParam2 && func_375(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_376(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_376(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_377(iParam0, &Var6, 1728382685))
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
			Var0 = { func_378(bParam1) };
			switch (func_227(iParam0))
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
			if (func_379(iParam0, -1823706425))
			{
				Var0 = { func_373(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_379(iParam0, -1483207246))
			{
				Var0 = { func_373(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_373(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_379(iParam0, -1653629781))
			{
				Var0 = { func_373(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_380(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_379(iParam0, -1653629781))
			{
				Var0 = { func_373(1384535894, Var0, 1784584921, bParam1) };
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

bool func_226(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_381(&iParam0);
	if (!func_104(iParam0, 0) && !func_383(func_382(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_384(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_385(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_374(0) };
		Var4.f_9 = -1591664384;
		if (!func_376(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_377(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_375(iParam0, 1))
		{
			if (!func_376(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_377(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_386(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_387(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

int func_227(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_228(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!func_104(iParam0, 0))
	{
		return -1;
	}
	if (func_320(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_103())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_388(iParam0, iParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_388(iParam0, iParam5, 1, 0, 1, 773203532) * iParam2);
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
	else if (func_365(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_347(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_102(0))
	{
		if (iVar0 > 0)
		{
			func_306(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_306(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_389(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_306(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
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
	iVar52 = func_390(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_233(iVar52, Var53);
	}
	return iVar52;
}

bool func_229(int* iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!func_391(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_392(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_393(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	iVar0 = 541670136;
	if (bParam7)
	{
		iVar0 = -1883671814;
	}
	if (!func_394(iParam0, uParam2, iVar0, iParam4, bParam3))
	{
		return false;
	}
	return true;
}

bool func_230(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12)
{
	if (!func_391(iParam0, 0))
	{
		return false;
	}
	if (!func_395(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_396(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (!func_397(iParam0, &Var0, 2113164098, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_231(int iParam0, int iParam1)
{
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	iVar47 = _0x12df9c58201dd19a(iParam0);
	if (iVar47 == 0)
	{
		return 0;
	}
	iVar48 = 0;
	while (iVar48 < iVar47)
	{
		if (_0x1fc25aeb5f76b38d(iParam0, iVar48, &Var0) && Var0 == iParam1)
		{
			return Var0.f_2;
		}
		iVar48++;
	}
	return 0;
}

int func_232(int iParam0, int iParam1)
{
	if (func_398(iParam0))
	{
		return func_231(func_399(iParam0, 1), iParam1);
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_2;
}

void func_233(int iParam0, struct<17> Param1)
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

int func_234(int iParam0, bool bParam1, int iParam2)
{
	if (func_400(255))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(522750908))
	{
		return 0;
	}
	if (!func_401(iParam0))
	{
		return 0;
	}
	if (!func_403(func_402(iParam0), !bParam1, iParam2, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_235(int iParam0, int iParam1)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_320(iParam0);
	switch (iParam1)
	{
		case 1:
			if (((func_310(iParam0, -537818634) || func_310(iParam0, -458578204)) && !func_310(iParam0, -1242251796)) && !func_310(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == 307971639)
			{
				if (func_310(iParam0, -1588156645))
				{
					return false;
				}
				return true;
			}
			break;
		case 3:
			if (iVar0 == -427144552)
			{
				return true;
			}
			else if (iVar0 == 307971639)
			{
				if (func_310(iParam0, -1588156645))
				{
					return true;
				}
			}
			break;
		case 0:
			if ((func_404(iParam0) || func_405(iParam0, -1636519629) == -701492487) || iParam0 == 894654881)
			{
				return true;
			}
			break;
		case 4:
			if (func_310(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 5:
			if (func_310(iParam0, -1242251796))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_236(int iParam0)
{
	if (func_406())
	{
		return 0;
	}
	if (!_0xdd73c9838ce7181d())
	{
		return 0;
	}
	if (func_407())
	{
		return 0;
	}
	iVar0 = func_408(iParam0);
	iVar1 = func_409(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_403(func_410(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

var func_237(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_411() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_412());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_412());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_412());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_413(get_player_team(iVar5)));
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
			if (func_400(iVar2))
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
				if (iVar9 & 8192 != 0 && func_414(iVar2) != 1)
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
					if (!func_415(iVar10))
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

bool func_238(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_239()
{
	return Global_1893587->f_2;
}

bool func_240(var uParam0)
{
	return func_416(*uParam0, 1);
}

void func_241(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_249() - fParam1);
	func_417(uParam0, 1);
	func_418(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_242(int iParam0)
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

int func_243(int iParam0)
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

int func_244(int iParam0)
{
	iParam0 = func_419(iParam0);
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

bool func_245(var uParam0, float fParam1)
{
	if (func_115(uParam0, fParam1))
	{
		func_137(uParam0);
		return true;
	}
	return false;
}

int func_246(int iParam0)
{
	iParam0 = func_419(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1903136)[iParam0]->f_3;
}

bool func_247(var uParam0)
{
	if (is_ped_in_writhe(uParam0->f_90))
	{
		return false;
	}
	if (!_is_mount_seat_free(uParam0->f_90, -2))
	{
		return false;
	}
	iVar0 = _get_rider_of_mount(uParam0->f_90, true);
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != Global_34)
		{
			return false;
		}
	}
	if (!func_420(Global_34, uParam0->f_90, 50f, 1, 1))
	{
		return false;
	}
	return true;
}

bool func_248(var uParam0)
{
	return func_416(*uParam0, 2);
}

float func_249()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_250(vector3 vParam0, float fParam3, int iParam4)
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

int func_251(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_2(vParam0))
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
		if (func_421(vParam0))
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
	func_422(iVar0, bParam8);
	return iVar0;
}

void func_252(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_46(vVar0, vVar3, 0f) };
	vVar9 = { func_47(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		set_roads_back_to_original(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		set_roads_in_area(vVar6, vVar9, iParam4, iParam7, iParam5);
	}
	else
	{
		_0xafe2ae66f6251c66(vVar6, vVar9, iParam6, iParam7);
	}
}

void func_253(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_254(int iParam0)
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

void func_255(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_423(Global_34) && is_player_teleport_active())
	{
	}
	if (func_424(iParam0))
	{
		if (func_425(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_277(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_255(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_255(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_277(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_277(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_277(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_277(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_277(iParam5, 129))
	{
		if (func_277(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		_set_entity_coords_and_heading_no_offset(iParam0, vParam1, fParam4, func_277(iParam5, 32), true);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_277(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_277(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_424(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_277(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_34 && !func_277(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_256(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return vdist2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_274(vParam0, vParam3) <= (fParam6 * fParam6);
}

void func_257()
{
	iVar0 = 0;
	clear_ped_tasks_immediately(Global_34, false, true);
	if (func_292(684307653, &iVar0) || func_292(562107429, &iVar0))
	{
		_task_use_scenario_point(Global_34, &(Local_28[0]), "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, false, true, 0, false, -1f, false);
	}
	else if (func_294())
	{
		if (is_ped_male(Global_34))
		{
			sVar1 = "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A";
		}
		else
		{
			sVar1 = "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A";
		}
		_task_use_scenario_point(Global_34, &(Local_28[0]), sVar1, 0, false, true, 0, false, -1f, false);
	}
	else
	{
		func_426(get_random_int_in_range(0, 2));
	}
}

bool func_258(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17353[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_259(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17353[iVar0] == iParam0)
		{
			return Global_17353[Global_17374]->f_1;
		}
		iVar0++;
	}
	return 5;
}

bool func_260(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_261(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

bool func_262(int iParam0)
{
	if (func_292(81053684, iParam0))
	{
		return true;
	}
	if (func_292(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

int func_263(int iParam0)
{
	Var0 = { func_225(iParam0, 1, 0) };
	return func_427(Var0.f_4);
}

int func_264(int iParam0, int iParam1)
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

void func_265(int iParam0, int iParam1)
{
	iVar1 = func_263(iParam0);
	iVar2 = func_264(iVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (func_428(iParam0) && func_429(iParam0))
	{
		iParam1 |= 64;
	}
	if ((iVar1 == 1108822547 && func_430(32768)) || iParam0 != &Global_1952637->f_1675.f_1[iVar2])
	{
		if (func_428(&(Global_1952637->f_1675.f_1[iVar2])) && func_429(&(Global_1952637->f_1675.f_1[iVar2])))
		{
			iParam1 |= 32;
		}
		if (Global_1952637->f_83[iVar2]->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (func_227(iParam0))
		{
			case 81053684:
				if (func_292(-525676072, &uVar0))
				{
					iVar3 = func_264(func_431(-525676072), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
						if (func_310(iParam0, -180472385) && func_292(1024667707, &uVar0))
						{
							iVar3 = func_264(func_431(1024667707), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
								Jump @513; //curOff = 342
								if (func_430(32768))
								{
									func_433(func_432(iVar2, 1));
								}
								if (func_292(81053684, &uVar4))
								{
									iVar3 = func_264(func_431(81053684), 1);
									if (iVar3 == 39)
									{
									}
									else
									{
										Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
										Jump @513; //curOff = 428
										if (!func_310(iParam0, 160827531))
										{
										}
										else
										{
											if (func_292(-525676072, &uVar0))
											{
												iVar3 = func_264(func_431(-525676072), 1);
												if (iVar3 == 39)
												{
												}
												else
												{
													Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
												}
												Global_1952637->f_2685[iVar2] = iParam0;
												func_434(iVar1, iParam1, 6);
											}
										}
									}
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

void func_266(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_435(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_436(Var0);
}

bool func_267(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

bool func_268(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_269(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_271(iParam0, 1);
	func_272(iParam0, 1);
	func_273(iParam0, 128);
}

void func_270(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_271(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_268(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_272(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_273(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

float func_274(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_275(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_276(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_41(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_41(uParam0))
		{
		}
	}
}

bool func_277(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

var func_278(int iParam0)
{
	return (func_437(iParam0, 4) || func_437(iParam0, 5));
}

int func_279(int iParam0)
{
	return func_437(iParam0, 7);
}

int func_280(int iParam0)
{
	return func_437(iParam0, 6);
}

bool func_281(int iParam0, int iParam1, float fParam2)
{
	return func_167(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_282()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

int func_283(var uParam0)
{
	fVar0 = 10000f;
	iVar1 = -1;
	iVar2 = create_itemset(true);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (_does_scenario_point_exist(uParam0[iVar3]))
		{
			if (_get_ped_using_scenario_point(uParam0[iVar3]) != 0)
			{
			}
			else if (!_0xab643407d0b26f07(Global_34, uParam0[iVar3], 0, 0, 1) && !func_59(64))
			{
			}
			else
			{
				_0x20a4bf0e09bee146(iVar2);
				if (func_196(&iVar2, _get_scenario_point_coords(uParam0[iVar3], true), 1065353216))
				{
				}
				else
				{
					fVar4 = func_274(Global_35, *uParam0->f_5[iVar3]);
					if (fVar4 < fVar0)
					{
						iVar1 = iVar3;
						fVar0 = fVar4;
					}
				}
			}
		}
		iVar3++;
	}
	destroy_itemset(iVar2);
	return iVar1;
}

bool func_284(var uParam0, float fParam1)
{
	iVar0 = _create_volume_cylinder(*uParam0, 0f, 0f, 0f, fParam1, fParam1, 1f);
	if (_0xa1fbac56d38563e2(iVar0))
	{
		func_30(iVar0);
		return true;
	}
	if (func_438(&iVar0))
	{
		func_30(iVar0);
		return true;
	}
	func_30(iVar0);
	return false;
}

int func_285(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_268(iVar0, 2))
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
				func_269(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_286(var uParam0)
{
	if (_0x0de0944eccb3df5d(Global_34))
	{
		return false;
	}
	if (func_166(uParam0->f_126, 32768))
	{
		return false;
	}
	if (ped_has_use_scenario_task(Global_34))
	{
		return false;
	}
	if (func_59(16))
	{
		return false;
	}
	return true;
}

bool func_287(var uParam0)
{
	iVar0 = _get_first_entity_ped_is_carrying(Global_34);
	if (is_entity_a_ped(iVar0))
	{
		iVar1 = get_entity_model(iVar0);
		iVar2 = func_439(iVar1);
		if (((func_404(iVar2) && !_0x8de41e9902e85756(iVar0)) && _0xf8b48a361dc388ae(get_ped_index_from_entity_index(iVar0)) != 2) && !_0xcdc25355c0d65963(iVar0))
		{
			uParam0->f_49.f_61 = iVar2;
			uParam0->f_49.f_62 = -214678071;
			if (func_43(uParam0->f_146))
			{
				func_170(uParam0->f_146, _uiprompt_get_group_id_for_target_entity(iVar0), 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_288(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_43(iParam0))
	{
		return;
	}
	iVar0 = func_90(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

bool func_289(int iParam0)
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

bool func_290()
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

void func_291(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = func_440(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!func_102(0) || func_103())
	{
		iVar1 = get_entity_model(iVar0);
		func_441(iVar1, 0);
	}
	else if (is_ped_human(get_ped_index_from_entity_index(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar0), 1, 1, get_entity_model(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			iVar26 = &Var2.f_1[iVar25];
			if (func_104(iVar26, 0))
			{
				if (!bParam1 || func_366(iVar26))
				{
					func_356(iVar26, &(Var2.f_12[iVar25]), bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = _get_ped_damage(get_ped_index_from_entity_index(iVar0));
		if (func_345(-269048282, 1))
		{
			if (iVar39 < 2 && get_random_int_in_range(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = _0xf8b48a361dc388ae(get_ped_index_from_entity_index(iVar0));
		iVar42 = func_442(get_ped_index_from_entity_index(iVar0), iVar41);
		_0x6b89faa36fc909a3(&iVar27, get_ped_index_from_entity_index(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (&iVar27[iVar38] != 0)
			{
				if (func_443(iVar0) && !func_444(&(iVar27[iVar38])))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || func_366(&(iVar27[iVar38])))
				{
					func_356(&(iVar27[iVar38]), 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	iVar43 = func_445(&iVar0);
	if (!func_104(iVar43, 0))
	{
		iVar43 = func_446(iVar0);
	}
	if (func_104(iVar43, 0))
	{
		func_447(iVar43, 1, 1, -142743235);
	}
	_0x0d0db2b6af19a987(&iVar0);
}

bool func_292(int iParam0, int iParam1)
{
	iVar1 = func_264(func_431(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1952637->f_1675.f_1[iVar1] != 0 && &Global_1952637->f_1675.f_1[iVar1] != &Global_1952637->f_83[iVar1])
	{
		iVar0 = &Global_1952637->f_1675.f_1[iVar1];
		if (func_227(iVar0) == iParam0 || (iParam0 == 81053684 && func_310(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_293(int iParam0)
{
	iVar0 = 0;
	if (get_current_ped_weapon(Global_34, &iVar0, true, iParam0, false))
	{
		if (func_104(iVar0, 0))
		{
			if (_is_weapon_two_handed(iVar0) || func_448(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_294()
{
	iVar0 = _get_prev_weather_type_hash_name();
	if (((((iVar0 == 1420204096 || iVar0 == -416908843) || iVar0 == 212278652) || iVar0 == 839715153) || iVar0 == 2082228755) || iVar0 == -1233681761)
	{
		return true;
	}
	iVar1 = _get_next_weather_type_hash_name();
	if (((((iVar1 == 1420204096 || iVar1 == -416908843) || iVar1 == 212278652) || iVar1 == 839715153) || iVar1 == 2082228755) || iVar1 == -1233681761)
	{
		return true;
	}
	iVar2 = func_152();
	if (((iVar2 == 0 || iVar2 == 7) || iVar2 == 2) || iVar2 == 10)
	{
		return true;
	}
	return false;
}

void func_295(int iParam0)
{
	Global_1940144->f_39 = (Global_1940144->f_39 || iParam0);
}

bool func_296(int iParam0, bool bParam1)
{
	if (bParam1 && !func_43(iParam0))
	{
		return false;
	}
	return !func_268(iParam0, 4);
}

void func_297(int iParam0, bool bParam1)
{
	func_449(iParam0, &iVar0, &iVar1);
	if (!func_450(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_451(iVar0, iVar1);
}

void func_298(var uParam0, int iParam1)
{
	if (has_anim_event_fired(Global_34, -996707397))
	{
		func_159(&(uParam0->f_126), 2);
	}
	else
	{
		func_54(&(uParam0->f_126), 2);
	}
	if (func_166(iParam1, 1))
	{
		if (!func_43(&(uParam0->f_135[0])))
		{
			uParam0->f_135[0] = func_161("KNEEL_FIRE", 992265328, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			func_170(&(uParam0->f_135[0]), 1754796591, 0, 1);
		}
	}
	else if (func_43(&(uParam0->f_135[0])))
	{
		func_44(uParam0->f_135[0], 1, 1);
	}
	if (((func_166(iParam1, 4096) && func_166(uParam0->f_125, 16)) && !func_59(128)) && uParam0->f_132 != 2)
	{
		set_bit(&(Global_1957959->f_1), 2);
		set_bit(&(Global_1957959->f_1), 3);
		if (!func_43(&(uParam0->f_135[2])))
		{
			uParam0->f_135[2] = func_161("CRAFT_COOK", -473983589, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			func_170(&(uParam0->f_135[2]), 1754796591, 0, 1);
		}
	}
	else
	{
		clear_bit(&(Global_1957959->f_1), 2);
		if (func_43(&(uParam0->f_135[2])))
		{
			func_44(uParam0->f_135[2], 1, 1);
		}
	}
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, -399233038, false);
	disable_control_action(0, -1046962283, false);
	if (func_43(&(uParam0->f_135[6])))
	{
		func_44(uParam0->f_135[6], 1, 1);
	}
	if (func_59(32))
	{
		if (func_43(&(uParam0->f_135[6])))
		{
			func_162(&(uParam0->f_135[6]), 0, 1, 1);
		}
	}
	else if (func_43(&(uParam0->f_135[6])) && !func_296(&(uParam0->f_135[6]), 0))
	{
		func_162(&(uParam0->f_135[6]), 1, 1, 1);
	}
	if (func_59(32) || (func_166(uParam0->f_126, 2) && uParam0->f_132 != 2))
	{
		if (func_43(&(uParam0->f_135[2])))
		{
			func_162(&(uParam0->f_135[2]), 0, 1, 1);
		}
	}
	else if (func_43(&(uParam0->f_135[2])))
	{
		func_162(&(uParam0->f_135[2]), 1, 1, 1);
	}
	if ((func_166(iParam1, 16) && !func_59(128)) && uParam0->f_132 != 2)
	{
		if (!func_43(&(uParam0->f_135[1])))
		{
			uParam0->f_135[1] = func_161("LEAVE", 992265328, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			if (func_166(iParam1, 524288) && func_166(uParam0->f_126, 8192))
			{
				func_163(&(uParam0->f_135[1]), 0, 1);
				func_452(&(uParam0->f_135[1]), 20, 1, 1);
				func_452(&(uParam0->f_135[1]), 13, 1, 1);
			}
			func_170(&(uParam0->f_135[1]), 1754796591, 0, 1);
		}
		if (func_166(iParam1, 524288) && func_166(uParam0->f_126, 8192))
		{
			if (!func_43(&(uParam0->f_135[8])))
			{
				uParam0->f_135[8] = func_161("LEAVE", 992265328, 2, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
				func_452(&(uParam0->f_135[8]), 19, 1, 1);
				func_452(&(uParam0->f_135[8]), 20, 1, 1);
				func_452(&(uParam0->f_135[8]), 13, 1, 1);
				func_453(uParam0->f_135[8], "INPUT_PCAMP_TEARDWN");
				func_170(&(uParam0->f_135[8]), 1754796591, 0, 1);
			}
		}
		else if (func_43(&(uParam0->f_135[8])))
		{
			func_44(uParam0->f_135[8], 1, 1);
		}
	}
	else
	{
		if (func_43(&(uParam0->f_135[1])))
		{
			func_44(uParam0->f_135[1], 1, 1);
		}
		if (func_43(&(uParam0->f_135[8])))
		{
			func_44(uParam0->f_135[8], 1, 1);
		}
	}
	if (func_166(uParam0->f_126, 2))
	{
		if (func_43(&(uParam0->f_135[1])) && func_296(&(uParam0->f_135[1]), 0))
		{
			func_162(&(uParam0->f_135[1]), 0, 1, 1);
			if (func_166(iParam1, 524288) && func_166(uParam0->f_126, 8192))
			{
				func_163(&(uParam0->f_135[1]), 0, 1);
			}
		}
	}
	else if (func_43(&(uParam0->f_135[1])) && !func_296(&(uParam0->f_135[1]), 0))
	{
		func_162(&(uParam0->f_135[1]), 1, 1, 1);
		if (func_166(iParam1, 524288) && func_166(uParam0->f_126, 8192))
		{
			func_163(&(uParam0->f_135[1]), 0, 1);
		}
	}
	if (func_43(&(uParam0->f_135[8])))
	{
		func_162(&(uParam0->f_135[8]), 1, 1, 1);
	}
	uParam0->f_147 = func_202(_uiprompt_get_group_active_page(1754796591));
	iVar0 = 1;
	if (!func_59(128))
	{
		_uiprompt_set_ambient_group_this_frame(uParam0->f_127, 3f, 1, iVar0, 1754796591, uParam0->f_147, 0);
	}
}

int func_299(var uParam0)
{
	if (func_59(16) || func_166(uParam0->f_126, 32768))
	{
		func_54(&(uParam0->f_126), 32768);
		func_29(16);
		uParam0->f_150 = -1;
		return 2;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_43(&(uParam0->f_135[iVar0])))
		{
			if (iVar0 == 1)
			{
				if (func_296(&(uParam0->f_135[iVar0]), 0))
				{
					if (func_454(&(uParam0->f_135[iVar0]), 1))
					{
						return iVar0;
					}
					else if (func_455())
					{
						if (!func_240(&(uParam0->f_151)))
						{
							func_117(&(uParam0->f_151));
						}
						if (func_245(&(uParam0->f_151), 0.5f))
						{
							return iVar0;
						}
					}
					else if (func_240(&(uParam0->f_151)))
					{
						func_137(&(uParam0->f_151));
					}
				}
			}
			else if (iVar0 == 8 || iVar0 == 6)
			{
				if (func_165(&(uParam0->f_135[iVar0]), 1))
				{
					return iVar0;
				}
				else if (iVar0 == 8)
				{
					if (func_456(&(uParam0->f_135[8]), 1))
					{
						if (!func_240(&(uParam0->f_49.f_70)))
						{
							func_117(&(uParam0->f_49.f_70));
						}
						else if (func_115(&(uParam0->f_49.f_70), 0.1f))
						{
							func_288(&(uParam0->f_135[8]), "CAMP_TEARDOWN", 1);
						}
					}
					else
					{
						if (func_240(&(uParam0->f_49.f_70)))
						{
							func_137(&(uParam0->f_49.f_70));
						}
						func_288(&(uParam0->f_135[8]), "LEAVE", 1);
					}
				}
			}
			else if (func_454(&(uParam0->f_135[iVar0]), 1))
			{
				if (iVar0 == 2)
				{
					play_sound_frontend("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
				}
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_300(var uParam0)
{
	if (func_457(uParam0) && !func_166(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_210(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_213(-1890302844, 0.5f);
					break;
				case 7:
					func_213(36116464, 0.5f);
					break;
				case 6:
					if (func_213(420089068, 1f))
					{
						return 1;
					}
					break;
				default:
					func_458(uParam0);
					break;
			}
			break;
		case 6:
			func_459(uParam0);
			break;
	}
	return 0;
}

int func_301(var uParam0)
{
	if (func_457(uParam0) && !func_166(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_210(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_213(-1890302844, 0.5f);
					break;
				case 7:
					func_213(36116464, 0.5f);
					break;
				case 6:
					func_213(1352801403, 1f);
					return 1;
				default:
					func_458(uParam0);
					break;
			}
			break;
		case 6:
			func_460(uParam0);
			break;
	}
	return 0;
}

int func_302(var uParam0)
{
	if (func_457(uParam0) && !func_166(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_210(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_213(-1890302844, 0.5f);
					break;
				case 7:
					func_213(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_131 = 1;
					if (func_461(Global_34, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_458(uParam0);
					break;
			}
			break;
	}
	return 0;
}

int func_303(var uParam0)
{
	if (func_457(uParam0) && !func_166(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_210(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_213(-1890302844, 0.5f);
					break;
				case 7:
					func_213(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_131 = 0;
					if (func_461(Global_34, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_458(uParam0);
					break;
			}
			break;
	}
	return 0;
}

bool func_304()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

bool func_305()
{
	if (Global_1940311->f_36 == 3)
	{
		return true;
	}
	return false;
}

bool func_306(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_384(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_462(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_225(iParam0, bParam4, 0) };
	Var6 = { func_373(iParam0, Var1, Var1.f_4, bParam4) };
	return func_463(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_307(int iParam0, bool bParam1)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (Global_1940311->f_7)
	{
		return false;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_464(iParam0);
		if (func_310(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_465(1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_466())
		{
			return false;
		}
	}
	if (!func_345(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_308(int iParam0)
{
	if (func_318(iParam0))
	{
		return false;
	}
	if (!_0x3d10d7179d7034af(func_211(0), iParam0, func_467(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1838434463:
		case 2019377485:
			func_468(1, 1);
			_0x565eaa726b2ce3b7(0);
			return true;
		case 1807503187:
			if (func_469() != -1)
			{
				func_217(func_470(), 10000, 0, 0, 0, 1);
				func_471(-1);
			}
			break;
	}
	return true;
}

bool func_309(int iParam0)
{
	if (iParam0 == 17745825)
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_316(Var0, 0);
		return true;
	}
	return false;
}

bool func_310(int iParam0, int iParam1)
{
	if (!func_104(iParam0, 0))
	{
		return func_472(func_382(iParam0), iParam1);
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

void func_311(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_312(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_313(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_314(int iParam0)
{
	if (func_38() == 0 && func_474(func_473(iParam0), 1, 0) != 0)
	{
		func_217("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_315(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_475(iParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1913503 = get_game_timer() + 3000;
		return true;
	}
	switch (func_405(iParam0, -949239683))
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
				if (!func_476())
				{
					if (func_477(&Global_34))
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
					func_217("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
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
					func_478(iParam0);
				}
				else
				{
					func_479(iParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_480(iParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_481(iParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_482(iParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_478(iParam0);
				}
				else
				{
					func_483(iParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_478(iParam0);
				}
				else
				{
					func_484(iParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_478(iParam0);
				}
				else
				{
					func_485(iParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_478(iParam0);
				}
				else
				{
					func_486(iParam0);
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
				func_487(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_488(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_489(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_478(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_490(iParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_491(iParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_316(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493->f_161 >= 10)
	{
		return;
	}
	if (!func_492(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_493(&(Param0.f_10)))
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
			func_494(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_317()
{
	return Global_1893587 & 2 != 0;
}

bool func_318(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (func_320(iParam0) == -1650247667)
	{
		return true;
	}
	return false;
}

int func_319(int iParam0)
{
	return func_495(iParam0);
}

int func_320(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_321(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_320(iParam0) == -1037537535)
	{
		if (func_227(iParam0) == -999503751)
		{
		}
	}
	return true;
}

int func_322()
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

bool func_323(int iParam0)
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

int func_324(int iParam0, bool bParam1)
{
	if (!func_496())
	{
		return 0;
	}
	if (!func_497(iParam0))
	{
		return 0;
	}
	if (func_498(iParam0))
	{
		iVar0 = 0;
		if ((func_227(iParam0) == 81053684 || func_310(iParam0, 160827531)) && !func_310(iParam0, -1303648999))
		{
			if (bParam1)
			{
				func_499(&iVar0, 2);
			}
		}
		return func_500(iParam0, iVar0);
	}
	return 0;
}

void func_325(int iParam0)
{
	iVar0 = 10;
	iVar1 = &Global_1952637->f_1675.f_1[iVar0];
	if (iVar1 == iParam0)
	{
		_0xcb9401f918cb0f75(Global_34, "PlayUnequipHatFidget", 1, 15);
		func_326(Global_34, -2065815962, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_327(iParam0, 0, 0);
		return;
	}
	_0xcb9401f918cb0f75(Global_34, "PlayEquipHatFidget", 1, 15);
	func_326(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_430(32768))
	{
		knock_off_ped_prop(Global_34, false, true, false, true);
		func_501();
		func_435(128);
		return;
	}
	if (iVar1 == &Global_1952637->f_83[iVar0])
	{
		func_327(iParam0, 1, 0);
		return;
	}
	if (func_502(-2061583405, 0))
	{
		if (func_429(iVar1))
		{
			func_327(iVar1, 0, 0);
		}
		else
		{
			func_503(iVar1, 1, 1, 0, 0, 0);
		}
		func_327(iParam0, 1, 0);
		return;
	}
	if (func_429(iVar1))
	{
		func_327(iVar1, 0, 0);
		func_327(iParam0, 1, 0);
	}
	else if (func_429(iParam0))
	{
		if (iParam0 != func_504(0))
		{
			func_505(iParam0, iVar1, 0, 0, 0);
			func_327(iParam0, 0, 0);
			func_327(iVar1, 0, 0);
		}
		else
		{
			knock_off_ped_prop(Global_34, false, true, false, true);
			func_435(128);
			func_327(iParam0, 1, 0);
		}
	}
}

int func_326(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_225(iParam1, 1, 0) };
		iParam3 = func_427(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_506(iParam1, iParam2, func_264(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_507(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_508(iParam1, 0))
		{
			func_509(&(Global_1952637->f_1675.f_1[func_264(iParam3, 1)]), 0, 0);
		}
		else
		{
			func_509(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1952637->f_83[func_264(iParam3, 1)])
			{
				func_266(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_430(32768))
			{
				func_501();
				func_266(21, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_510(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_511(&iVar5, 4);
	}
	if (is_ped_a_player(iParam0))
	{
		func_266(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_266(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_327(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_225(iParam0, bParam2, 0) };
	Var5 = { func_373(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_387(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_211(bParam2), &Var5, iParam1);
}

int func_328(int iParam0, bool bParam1)
{
	iVar2 = 0;
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar7))
	{
		return 0;
	}
	Var8 = { func_373(889965687, func_372(bParam1), 1034665895, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_227(iVar1) == iParam0 || (iParam0 == 81053684 && func_310(iVar1, 160827531)))
		{
			Var3 = { func_373(iVar1, Var8, iVar7, bParam1) };
			if (_0x70e3a884ed000a01(func_211(bParam1), &Var3))
			{
				iVar2 = iVar1;
				_0x65a5f70f4a292ebe(func_211(bParam1), &Var3, 0);
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_329(bool bParam0)
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

int func_330(int iParam0, int iParam1)
{
	iParam0 = func_419(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
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
	if (func_512(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_331(int iParam0)
{
	iParam0 = func_419(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_244(iParam0);
	if (!does_entity_exist(iVar0))
	{
		if (iParam0 == func_513())
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

bool func_332(int iParam0, int iParam1, bool bParam2)
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

void func_333()
{
	if (func_514())
	{
		return;
	}
	if (func_515(8))
	{
		switch (Global_1051439->f_3629)
		{
			case 0:
				if (func_515(16))
				{
					if (is_ped_using_any_scenario(Global_34))
					{
						_0xf1c03a5352243a30(Global_34);
						clear_ped_tasks(Global_34, 1, 0);
					}
					func_516(16);
				}
				func_517(1);
				break;
			case 1:
				if (is_ped_using_any_scenario(Global_34))
				{
				}
				else
				{
					func_516(8);
					func_517(0);
				}
		}
		return;
	}
	if (func_518())
	{
		_task_item_interaction(player_ped_id(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1915715->f_22504.f_1 = 1;
		Global_1051439->f_43 = 0;
		func_519();
	}
	else
	{
		iVar0 = func_521(func_520());
		if (iVar0 != -1)
		{
			func_217(func_470(), 10000, 0, 0, 0, 1);
			Global_1051439->f_3628 = 0;
			Global_1051439->f_3629 = 0;
			func_522(0);
			func_471(-1);
		}
	}
}

bool func_334(int iParam0, int iParam1)
{
	if ((!func_523() || !network_is_game_in_progress()) || !network_is_session_active())
	{
		return false;
	}
	if (!func_524(16))
	{
		return false;
	}
	if (func_525())
	{
		if (!_unlock_is_unlocked(-75008140))
		{
			return false;
		}
	}
	if (!func_526())
	{
		return false;
	}
	if (func_34(16))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iParam1 == 1 && (!_0xd6f6acf4392187fb(iVar0) || !_0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 1 && func_277(Global_1137047->f_8, 1))
	{
		return false;
	}
	if (func_337())
	{
		return false;
	}
	return true;
}

int func_335(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_527();
	}
	if (!func_528(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_529(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

bool func_336(int iParam0)
{
	return func_277(Global_1137047->f_8, iParam0);
}

bool func_337()
{
	iVar0 = func_530(player_id());
	if (iVar0 != -1)
	{
		if ((*Global_1131196)[iVar0]->f_18.f_1 != 0 && func_277((*Global_1131196)[iVar0]->f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_338()
{
	Var0 = { func_120(0) };
	if (func_121(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_531(player_id(), 0);
			if (iVar2 != -1)
			{
				if (func_532(iVar2) == -785841056)
				{
					func_217("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_217("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_217("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_217("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_339(int iParam0)
{
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_533(Var0, func_109(0, 8), 0, 0);
}

void func_340(bool bParam0)
{
	if ((func_38() != -1 || !bParam0) || func_267(Global_34))
	{
		func_534();
		return;
	}
}

void func_341()
{
	iVar0 = player_id();
	func_48(1, iVar0);
}

bool func_342(int iParam0)
{
	return func_320(iParam0) == 2085633299;
}

int func_343(int iParam0, int iParam1)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_320(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_310(iParam0, 1399091007))
	{
		func_535(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_344(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_104(iParam0, 0))
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
	if (!func_536() || bParam6)
	{
		func_537(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_538(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_538(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_539(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_320(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_227(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_540(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	if (func_310(iParam0, 474910316))
	{
		sVar17 = func_541(iParam0);
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
	if (func_310(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_542(iParam0))
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
	iVar18 = func_543(iParam0);
	if ((func_544(iVar12) && func_310(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_545(iParam0);
	}
	else if (func_320(iParam0) == -1037537535)
	{
		iVar19 = func_546(iParam0);
		if (func_104(iVar19, 0))
		{
			iVar18 = func_543(iVar19);
		}
	}
	if (func_547(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_548(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_549(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_550(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_551(iParam0, &cVar22))
		{
			sVar21 = func_553(func_552(cVar22), 109029619);
		}
	}
	func_554(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

bool func_345(int iParam0, int iParam1)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_320(iParam0);
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
			if (!func_555(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_556(iParam0))
			{
				return true;
			}
			break;
	}
	return func_347(iParam0, 0, 0, 0) >= iParam1;
}

struct<2> func_346(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return Var0;
	}
	if (func_310(iParam0, -305066475))
	{
		if (func_38() == -1)
		{
			if (func_310(iParam0, -537818634))
			{
				return func_557(189951448);
			}
			else
			{
				return func_557(1176172851);
			}
		}
	}
	else if (func_310(iParam0, -537818634))
	{
		return func_557(-963660207);
	}
	if (func_310(iParam0, 2084895747))
	{
		return func_557(1694039471);
	}
	return Var2;
}

int func_347(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_320(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_343(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_558(iParam0, 0);
	}
	if (func_384(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_211(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_559(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_211(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_348(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_560(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_561(&Var0, func_374(0));
	}
	if (!func_562(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_563(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_463(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_564(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_349(bool bParam0, bool bParam1, int iParam2)
{
	Global_1940311->f_4 = bParam0;
	Global_1940311->f_34 = iParam2;
	if (bParam1 || (func_565() && iParam2 == 0))
	{
		func_566(1);
		func_567(1);
	}
}

bool func_350(var uParam0)
{
	disable_control_action(0, -124244224, false);
	func_187(&(uParam0->f_49), 32);
	iVar0 = _0xc22aa08a8adb87d4(Global_34);
	if (func_59(64) && uParam0->f_124 < 9)
	{
		func_568(&(uParam0->f_49));
		func_569(&(uParam0->f_49));
		if ((get_game_timer() - uParam0->f_150) > 1000 && func_570(&(uParam0->f_49)))
		{
			func_154();
			if (func_210(uParam0))
			{
				if (iVar0 == -571916863 || iVar0 == 825619760)
				{
					func_213(-1890302844, 0.5f);
					return false;
				}
				else if (iVar0 == -597629206 || iVar0 == 1316803372)
				{
					func_213(36116464, 0.5f);
					return false;
				}
			}
			else
			{
				return false;
			}
			if (Global_1913694->f_1577 != 0)
			{
				uParam0->f_49.f_61 = Global_1913694->f_1577;
			}
			uParam0->f_49.f_62 = -214678071;
			uParam0->f_150 = -1;
			do_screen_fade_in(500);
			if (iVar0 == -518407211 || iVar0 == 1662215698)
			{
				set_current_ped_weapon(Global_34, -618550132, true, 0, false, false);
				func_159(&(uParam0->f_126), 65536);
			}
			func_157(2);
			if (func_102(0) && !func_103())
			{
				func_571(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, 0, uParam0->f_49.f_11);
			}
			_0x378d3b1b11d9385b(uParam0->f_49.f_61);
			uParam0->f_161 = 3;
			if (does_entity_exist(uParam0->f_133))
			{
				delete_object(&(uParam0->f_133));
			}
			uParam0->f_133 = create_object(func_572(uParam0->f_49.f_61), Global_35, false, false, false, false, true);
			if (_0x3bbdd6143ff16f98(Global_34, uParam0->f_133, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
			{
			}
			set_entity_visible(uParam0->f_133, false);
			_set_object_burn_level(uParam0->f_133, 0f, true);
			func_92(&(uParam0->f_49));
			func_99(&(uParam0->f_49), 2);
			uParam0->f_135[3] = func_161("CRAFT_FASTER", 1138488863, 2, 0, 0, 6, 7000, 10000, 25, 1073741824, 1704213876, 0);
			func_573(uParam0, 3, 0, 0);
			func_162(&(uParam0->f_135[3]), 0, 1, 1);
			func_170(&(uParam0->f_135[3]), -1067771379, 0, 1);
			func_219(&(uParam0->f_49), 1024);
			_databinding_remove_data_entry(uParam0->f_49.f_28);
			func_199(uParam0, 9);
		}
		return false;
	}
	if (uParam0->f_124 != 0)
	{
		enable_control_action(0, -1450761377, true);
		enable_control_action(0, -771458680, true);
	}
	if (uParam0->f_124 > 0)
	{
		_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_49.f_61), 1, 0, 0, 0);
	}
	if (has_anim_event_fired(Global_34, 442509369))
	{
		uParam0->f_162++;
		if (uParam0->f_49.f_61 == -1199896558)
		{
			if (func_574())
			{
				func_575(1);
			}
			else if (func_576())
			{
				func_575(0);
			}
		}
		func_577(uParam0->f_49.f_61, to_float(uParam0->f_161), uParam0->f_162 >= uParam0->f_161);
	}
	if (func_102(0) && !func_103())
	{
		if (has_anim_event_fired(Global_34, -936525963))
		{
			func_159(&(uParam0->f_126), 256);
			func_216(uParam0->f_49.f_61, 1, 1, 1, 0);
		}
	}
	if (uParam0->f_49.f_23 != -1 && func_578(&(uParam0->f_49)) != 12)
	{
		if (func_579(uParam0->f_49.f_23))
		{
		}
		else
		{
			uParam0->f_49.f_23 = -1;
		}
	}
	set_ped_can_play_ambient_anims(Global_34, false);
	set_ped_can_play_gesture_anims(Global_34, 0, 1);
	switch (uParam0->f_124)
	{
		case 0:
			if (func_210(uParam0))
			{
				if (iVar0 == -571916863 || iVar0 == 825619760)
				{
					func_213(-1890302844, 0.5f);
					return false;
				}
				else if (iVar0 == -597629206 || iVar0 == 1316803372)
				{
					func_213(36116464, 0.5f);
					return false;
				}
			}
			if (((func_210(uParam0) || has_anim_event_fired(Global_34, -1208591336)) && func_580(iVar0)) || func_578(&(uParam0->f_49)) == 12)
			{
				func_581(&(uParam0->f_49), 1);
				if (func_578(&(uParam0->f_49)) == 11)
				{
					if (func_404(uParam0->f_49.f_61))
					{
						func_582(uParam0);
					}
					else if (func_98(&(uParam0->f_49), 8192))
					{
						uParam0->f_161 = 1;
						if (func_102(0) && !func_103())
						{
							func_571(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, func_583(), uParam0->f_49.f_11);
						}
						func_99(&(uParam0->f_49), 0);
						func_92(&(uParam0->f_49));
						func_44(uParam0->f_135[3], 1, 1);
						iVar1 = 6000;
						iVar2 = 10000;
						if (func_166(uParam0->f_125, 16384))
						{
							iVar1 = round((IntToFloat(iVar1) * 0.8f));
							iVar2 = round((IntToFloat(iVar2) * 0.8f));
						}
						uParam0->f_135[3] = func_161("CRAFT_FASTER", 1138488863, 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824, 1704213876, 0);
						func_573(uParam0, 3, 0, 0);
						func_162(&(uParam0->f_135[3]), 0, 1, 1);
						func_170(&(uParam0->f_135[3]), -1067771379, 0, 1);
						func_584();
						uParam0->f_149 = get_game_timer();
						func_199(uParam0, 1);
					}
					else
					{
						func_54(&(uParam0->f_126), 4);
					}
				}
				else if (func_578(&(uParam0->f_49)) == 0)
				{
					func_206(uParam0, 1);
					func_29(2);
				}
				else if (func_578(&(uParam0->f_49)) == 1 || func_158(Global_34, 0))
				{
					func_54(&(uParam0->f_126), 4);
					func_219(&(uParam0->f_49), 32);
					func_206(uParam0, 1);
					func_92(&(uParam0->f_49));
					func_29(2);
					uParam0->f_132 = 6;
					uParam0->f_149 = get_game_timer();
					func_54(&(uParam0->f_126), 128);
					return true;
				}
			}
			break;
		case 1:
			if (func_210(uParam0) && (get_game_timer() - uParam0->f_149) > 250)
			{
				if (iVar0 == -518407211 || iVar0 == 1662215698)
				{
					if (func_213(653141085, 1086324736))
					{
					}
				}
				else if (iVar0 == -1433449364 || iVar0 == 2058555960)
				{
					func_213(1520707380, 1086324736);
					func_199(uParam0, 2);
				}
				else
				{
					func_213(-1161086932, 1086324736);
					func_199(uParam0, 2);
				}
				uParam0->f_149 = get_game_timer();
			}
			break;
		case 2:
			if (!func_296(&(uParam0->f_135[3]), 0) && (get_game_timer() - uParam0->f_149) > 500)
			{
				if (has_anim_event_fired(Global_34, 1070143458) || func_210(uParam0))
				{
					func_162(&(uParam0->f_135[3]), 1, 1, 1);
				}
			}
			if (func_165(&(uParam0->f_135[3]), 1))
			{
				if (_0x1252c029fc8ebb4d())
				{
					_0x709ba8c08c5c008d();
				}
				func_573(uParam0, 3, 1, 0);
				func_44(uParam0->f_135[3], 1, 1);
				if ((((func_320(uParam0->f_49.f_61) == 2085633299 && !func_310(uParam0->f_49.f_61, -1242251796)) && !func_310(uParam0->f_49.f_61, 1919582297)) && !func_310(uParam0->f_49.f_61, -651046900)) && !func_310(uParam0->f_49.f_61, 127710288))
				{
					uParam0->f_135[5] = func_161("USE_ITEM", -1932931774, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_170(&(uParam0->f_135[5]), -1067771379, 0, 1);
					func_452(&(uParam0->f_135[5]), 10, 1, 1);
					uParam0->f_135[4] = func_161("STOW_ITEM", -69749786, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_452(&(uParam0->f_135[4]), 10, 1, 1);
					func_170(&(uParam0->f_135[4]), -1067771379, 0, 1);
					if (func_405(uParam0->f_49.f_61, -1636519629) == -701492487)
					{
						func_288(&(uParam0->f_135[5]), "DRINK", 1);
						func_162(&(uParam0->f_135[4]), 0, 1, 1);
					}
					if (!func_585(2))
					{
						func_162(&(uParam0->f_135[5]), 0, 1, 1);
					}
					_0x7e2c766adb2c5f1a(uParam0->f_49.f_61, 1);
				}
				if (!func_102(0) || func_103())
				{
					uParam0->f_49.f_23 = func_100(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, uParam0->f_49.f_11);
					if (func_43(&(uParam0->f_135[5])))
					{
						func_162(&(uParam0->f_135[5]), 0, 1, 1);
					}
				}
				uParam0->f_162 = 0;
				func_117(&(uParam0->f_154));
				uParam0->f_149 = get_game_timer();
				func_54(&(uParam0->f_126), 256);
				func_199(uParam0, 3);
			}
			else if (func_296(&(uParam0->f_135[3]), 0))
			{
				func_586(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_210(uParam0))
			{
				if (func_245(&(uParam0->f_154), 0.1f))
				{
					if (iVar0 == -87088667 || iVar0 == -8536912)
					{
						uParam0->f_149 = get_game_timer();
						func_213(-266297705, 1f);
						func_117(&(uParam0->f_154));
					}
					else
					{
						uParam0->f_149 = get_game_timer();
						func_213(1581850152, 1086324736);
					}
				}
			}
			func_587(uParam0);
			if (func_43(&(uParam0->f_135[5])))
			{
				if (func_296(&(uParam0->f_135[5]), 0) && (func_454(&(uParam0->f_135[5]), 1) || is_control_pressed(0, -1181049683)))
				{
					if (!func_102(0) || func_103())
					{
						func_214(uParam0->f_49.f_61, 1, 1, -142743235);
					}
					_0xd962f8579d702db5();
					func_216(uParam0->f_49.f_61, 1, 1, 0, 0);
					func_44(uParam0->f_135[5], 1, 1);
					func_44(uParam0->f_135[4], 1, 1);
					func_588(uParam0, 1);
					func_99(&(uParam0->f_49), 15);
					func_199(uParam0, 5);
					return false;
				}
			}
			if ((!func_43(&(uParam0->f_135[5])) || (func_296(&(uParam0->f_135[4]), 0) && (func_589(&(uParam0->f_135[4]), 1) || is_control_pressed(0, -69749786)))) || func_158(Global_34, 0))
			{
				func_44(uParam0->f_135[5], 1, 1);
				func_44(uParam0->f_135[4], 1, 1);
				_0xd962f8579d702db5();
				uParam0->f_149 = get_game_timer();
				if (func_166(uParam0->f_126, 128))
				{
					func_54(&(uParam0->f_126), 128);
					func_93(&(uParam0->f_49), 0);
					play_sound_frontend("Exit", "SSCRFT_Sounds", true, 0);
					func_99(&(uParam0->f_49), 1);
				}
				else
				{
					func_99(&(uParam0->f_49), 15);
				}
				func_588(uParam0, 1);
				func_199(uParam0, 4);
				return false;
			}
			break;
		case 4:
			if (func_210(uParam0) && ((get_game_timer() - uParam0->f_149) > 100 || func_240(&(uParam0->f_154))))
			{
				if (iVar0 == -87088667 || iVar0 == -8536912)
				{
					func_213(-1530401853, 1086324736);
				}
				else if (iVar0 == 512684539 || iVar0 == 970934364)
				{
					func_213(-1463467224, 1086324736);
					func_213(1111052667, 1086324736);
				}
				else
				{
					func_213(1111052667, 1086324736);
				}
				uParam0->f_149 = get_game_timer();
				func_199(uParam0, 7);
			}
			break;
		case 5:
			func_590();
			if (func_210(uParam0) && ((get_game_timer() - uParam0->f_149) > 100 || func_240(&(uParam0->f_154))))
			{
				if (iVar0 == -87088667 || iVar0 == -8536912)
				{
					func_213(-1878840211, 1086324736);
				}
				else if (iVar0 == 512684539 || iVar0 == 970934364)
				{
					func_213(-1510453203, 1086324736);
					func_213(-1783213919, 1086324736);
				}
				else
				{
					func_213(-1783213919, 1086324736);
				}
				uParam0->f_149 = get_game_timer();
				func_199(uParam0, 6);
			}
			break;
		case 9:
			if (func_210(uParam0))
			{
				if (iVar0 == -1433449364 || iVar0 == 2058555960)
				{
					func_213(1335077954, 1086324736);
					return false;
				}
				func_29(64);
				uParam0->f_149 = get_game_timer();
				if (iVar0 == -518407211 || iVar0 == 1662215698)
				{
					func_213(-9448781, 1086324736);
					func_157(2);
					func_199(uParam0, 10);
				}
				else
				{
					func_213(2101630952, 1086324736);
					func_157(2);
					func_199(uParam0, 10);
				}
			}
			break;
		case 10:
			if (has_anim_event_fired(Global_34, -560091334))
			{
				set_entity_visible(uParam0->f_133, true);
			}
			if (!func_296(&(uParam0->f_135[3]), 0) && (get_game_timer() - uParam0->f_149) > 500)
			{
				if (has_anim_event_fired(Global_34, 1070143458))
				{
					_play_sound_from_entity("cook_meat_sizzle_loop", uParam0->f_133, "Player_Campfire_Sounds", false, 0, 0);
					_0x9821b68cd3e05f2b("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_162(&(uParam0->f_135[3]), 1, 1, 1);
					func_591(&(uParam0->f_135[3]), 1);
				}
			}
			if (func_165(&(uParam0->f_135[3]), 1))
			{
				uParam0->f_160 = -1;
				_set_object_burn_level(uParam0->f_133, 1f, true);
				if (_0x1252c029fc8ebb4d())
				{
					_0x709ba8c08c5c008d();
				}
				uParam0->f_135[4] = func_161("STOW_ITEM", -69749786, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				uParam0->f_135[5] = func_161("EAT_MEAT", -1181049683, 1, 0, 0, 0, 570, 4000, 1, 1073741824, 1704213876, 0);
				func_452(&(uParam0->f_135[5]), 10, 1, 1);
				func_452(&(uParam0->f_135[4]), 10, 1, 1);
				func_170(&(uParam0->f_135[4]), -1067771379, 0, 1);
				func_170(&(uParam0->f_135[5]), -1067771379, 0, 1);
				if (func_592(uParam0->f_49.f_61, 1, 0))
				{
					func_162(&(uParam0->f_135[4]), 0, 1, 1);
				}
				else if (!func_585(2))
				{
					func_162(&(uParam0->f_135[5]), 0, 1, 1);
				}
				func_44(uParam0->f_135[3], 1, 1);
				func_117(&(uParam0->f_154));
				func_29(2);
				uParam0->f_162 = 0;
				if (!func_102(0) || func_103())
				{
					uParam0->f_49.f_23 = func_100(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, uParam0->f_49.f_11);
					func_162(&(uParam0->f_135[5]), 0, 1, 1);
				}
				_0x7e2c766adb2c5f1a(uParam0->f_49.f_61, 1);
				_0x0f2a2175734926d8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_54(&(uParam0->f_126), 256);
				func_199(uParam0, 11);
			}
			else
			{
				func_586(uParam0, iVar0);
				if (uParam0->f_160 == -1)
				{
					if (has_anim_event_fired(Global_34, 1070143458))
					{
						uParam0->f_160 = get_game_timer();
					}
				}
				else
				{
					fVar3 = func_593(&(uParam0->f_135[3]), 1);
					fVar3 = func_594(fVar3, 0f, 1f);
					_set_object_burn_level(uParam0->f_133, (1f * fVar3), true);
				}
			}
			break;
		case 11:
			if (func_210(uParam0))
			{
				if (func_245(&(uParam0->f_154), 0.1f))
				{
					uParam0->f_149 = get_game_timer();
					if (iVar0 == -283636008 || iVar0 == -341412437)
					{
						func_213(-1065570550, 2f);
					}
					else
					{
						func_213(-1295988014, 2f);
					}
				}
			}
			func_587(uParam0);
			if (func_43(&(uParam0->f_135[5])))
			{
				if (func_296(&(uParam0->f_135[5]), 0) && (func_454(&(uParam0->f_135[5]), 1) || is_control_pressed(0, -1181049683)))
				{
					_0xd962f8579d702db5();
					func_216(uParam0->f_49.f_61, 1, 1, 0, 0);
					func_44(uParam0->f_135[5], 1, 1);
					func_44(uParam0->f_135[4], 1, 1);
					func_588(uParam0, 1);
					if (!func_102(0) || func_103())
					{
						func_214(uParam0->f_49.f_61, 1, 1, -142743235);
					}
					uParam0->f_149 = get_game_timer();
					func_199(uParam0, 13);
					return false;
				}
			}
			if (func_43(&(uParam0->f_135[4])))
			{
				if (((func_296(&(uParam0->f_135[4]), 0) && (func_454(&(uParam0->f_135[4]), 1) || is_control_pressed(0, -69749786))) || func_158(Global_34, 0)) || _0x916b8e075abc8b4e(Global_34, 1))
				{
					_0xd962f8579d702db5();
					func_44(uParam0->f_135[4], 1, 1);
					func_44(uParam0->f_135[5], 1, 1);
					func_588(uParam0, 1);
					func_199(uParam0, 16);
					return false;
				}
			}
			break;
		case 16:
			if (func_210(uParam0) && ((get_game_timer() - uParam0->f_149) > 250 || func_240(&(uParam0->f_154))))
			{
				if (iVar0 == -283636008 || iVar0 == -341412437)
				{
					func_213(528569882, 1f);
				}
				else if (iVar0 == 1412614124 || iVar0 == 2134236454)
				{
					func_213(288708544, 1f);
				}
				else
				{
					func_213(-915834315, 1f);
				}
				uParam0->f_149 = get_game_timer();
				func_199(uParam0, 15);
			}
			break;
		case 13:
			func_590();
			if (func_210(uParam0) && ((get_game_timer() - uParam0->f_149) > 250 || func_240(&(uParam0->f_154))))
			{
				if (iVar0 == -283636008 || iVar0 == -341412437)
				{
					func_213(709478876, 1f);
				}
				else if (iVar0 == 1412614124 || iVar0 == 2134236454)
				{
					func_213(606164441, 1f);
				}
				else
				{
					func_213(-414126081, 2f);
				}
				uParam0->f_149 = get_game_timer();
				func_199(uParam0, 14);
			}
			break;
		case 6:
		case 7:
		case 14:
		case 15:
			if (uParam0->f_124 == 14 || uParam0->f_124 == 6)
			{
				func_590();
			}
			if (has_anim_event_fired(Global_34, -243011316) || has_anim_event_fired(Global_34, -1208591336))
			{
				func_595(uParam0, 1);
				if (uParam0->f_124 == 14 || uParam0->f_124 == 15)
				{
					if (func_59(256))
					{
						func_106(func_105(1643512046, -444296448), 1);
					}
					func_199(uParam0, 12);
				}
				else
				{
					if (func_59(256))
					{
						func_106(func_105(-1108808256, -444296448), 1);
					}
					func_199(uParam0, 8);
				}
			}
			else if ((get_game_timer() - uParam0->f_149) > 750)
			{
				if (!_0xc488b8c0e52560d8(Global_34))
				{
					if (iVar0 == -518407211 || iVar0 == 1662215698)
					{
						func_199(uParam0, 12);
					}
					else if (iVar0 == -1433449364 || iVar0 == 2058555960)
					{
						func_199(uParam0, 8);
					}
					else if (uParam0->f_124 == 14)
					{
						func_199(uParam0, 13);
					}
					else if (uParam0->f_124 == 15)
					{
						func_199(uParam0, 16);
					}
					else if (uParam0->f_124 == 7)
					{
						func_199(uParam0, 4);
					}
					else if (uParam0->f_124 == 6)
					{
						func_199(uParam0, 5);
					}
				}
			}
			break;
		case 8:
		case 12:
			if (func_296(&(uParam0->f_135[3]), 0))
			{
				if (func_158(Global_34, 0))
				{
					func_162(&(uParam0->f_135[3]), 0, 1, 1);
				}
			}
			if (func_454(&(uParam0->f_135[3]), 1))
			{
				func_596(&(uParam0->f_135));
				if (uParam0->f_124 == 12)
				{
					func_582(uParam0);
				}
				else
				{
					func_597(uParam0);
				}
			}
			else if (func_454(&(uParam0->f_135[7]), 1))
			{
				func_596(&(uParam0->f_135));
				func_199(uParam0, 0);
				func_99(&(uParam0->f_49), 15);
				func_54(&(uParam0->f_126), 128);
			}
			else if (func_165(&(uParam0->f_135[1]), 1))
			{
				func_596(&(uParam0->f_135));
				func_199(uParam0, 0);
				func_54(&(uParam0->f_126), 128);
				func_93(&(uParam0->f_49), 0);
				play_sound_frontend("Exit", "SSCRFT_Sounds", true, 0);
				func_99(&(uParam0->f_49), 1);
				func_199(uParam0, 0);
				return false;
			}
			else if (func_456(&(uParam0->f_135[1]), 1))
			{
				if (!func_240(&(uParam0->f_49.f_70)))
				{
					func_117(&(uParam0->f_49.f_70));
				}
				else if (func_115(&(uParam0->f_49.f_70), 0.1f))
				{
					func_288(&(uParam0->f_135[1]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_240(&(uParam0->f_49.f_70)))
				{
					func_137(&(uParam0->f_49.f_70));
				}
				if (func_43(&(uParam0->f_135[1])))
				{
					func_288(&(uParam0->f_135[1]), "CAMP_REC_BACK", 1);
				}
			}
			break;
	}
	return false;
}

struct<2> func_351(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_352(int iParam0, bool bParam1)
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
	if (func_104(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_598(iVar0) || func_599(iVar0))
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

int func_353(int iParam0, bool bParam1)
{
	if (!func_104(iParam0, 0))
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

void func_354(int iParam0)
{
	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_600(iParam0))
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

bool func_355(int iParam0, bool bParam1)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (!func_601(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_602() };
	Var10.f_4 = uVar9;
	if (func_603(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_604(iParam0, 1))
			{
			}
		}
		if (func_605(iParam0))
		{
			func_355(func_606(iParam0), 1);
		}
		func_607();
		return true;
	}
	return false;
}

int func_356(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	if (!func_608(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_609(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_610(iParam0, bParam2);
	iVar2 = 0;
	if (func_320(iParam0) == -1037537535)
	{
		if (!func_310(iParam0, 866047851) && !func_310(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_539(iParam0, 8388608) && !func_153(27))
	{
		func_611(27);
	}
	func_612(iParam0);
	if (!bVar3)
	{
		if (func_310(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_353(func_352(iParam0, 1), 0);
			if (is_weapon_valid(iVar1))
			{
				if (func_38() == -1)
				{
					func_354(iVar1);
				}
				if (func_102(0) && func_613(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_614(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_615(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_320(iParam0) == -427144552)
		{
			if (!func_616(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_320(iParam0) == 307971639 && func_617(iParam0))
		{
			if (!func_618(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_310(iParam0, -103750053))
		{
			func_106(func_351(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_106(func_105(-717883113, 2091222383), iVar0);
		}
		else if (func_310(iParam0, -121341956) && !func_310(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_297(536, 0);
			}
			if (func_310(iParam0, -2017733358) || func_310(iParam0, -1369131378))
			{
			}
		}
		else if (func_310(iParam0, -136654233))
		{
			if (func_310(iParam0, -1021472396))
			{
			}
		}
		else if (func_310(iParam0, -1466706512) && func_310(iParam0, 1147021565))
		{
			func_297(519, 0);
		}
		else if (func_310(iParam0, 1147021565) && func_310(iParam0, -524514947))
		{
		}
		else if (func_310(iParam0, 554195525))
		{
		}
		else if (func_310(iParam0, 589988438))
		{
			if (func_619())
			{
				func_620(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_310(iParam0, 787083290) && func_310(iParam0, 949916894))
		{
			func_621(iParam0);
		}
		else if (func_310(iParam0, -1718133314))
		{
			func_622(iParam0);
		}
		else if (func_310(iParam0, -1738650224))
		{
			func_623(iParam0);
		}
		else if (func_310(iParam0, -1112814642) && func_310(iParam0, 949916894))
		{
			func_624(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1940144->f_21 = 0;
		}
		else if (func_310(iParam0, 1841149704))
		{
			func_625();
		}
		else if (func_310(iParam0, -1979000645))
		{
		}
		else if (func_310(iParam0, 606799272))
		{
		}
		else if (func_310(iParam0, -1112814642) && func_310(iParam0, -1697809989))
		{
		}
		else if (func_310(iParam0, -2017733358) || func_310(iParam0, -1369131378))
		{
		}
		else if (func_310(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_310(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_345(215778062, 1))
					{
						func_356(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_345(670273567, 1))
					{
						func_356(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_345(-967317137, 1))
					{
						func_356(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_345(526074061, 1))
					{
						func_356(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_345(-1045488665, 1))
					{
						func_356(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_345(471514780, 1))
					{
						func_356(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_310(iParam0, -839724752) && func_539(iParam0, 4))
		{
		}
		else if (func_310(iParam0, 1399091007))
		{
			func_626(iParam0, &iVar2);
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
				func_627(272, func_543(-21093309), 0);
				break;
			case 204375141:
				func_627(270, func_543(204375141), 0);
				break;
			case -417963070:
				func_627(271, func_543(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_628(685, 1934060482, 1, 1);
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
					func_628(685, 1110018439, 1, 1);
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
					func_628(685, 1408511260, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_628(685, -1228016946, 1, 1);
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
					func_628(686, -103579, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_628(686, -1531530025, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case 80178851:
				func_297(526, 0);
				break;
			case 1613651027:
				func_297(529, 0);
				break;
			case -885810591:
				break;
			case -601932535:
				if (func_153(1))
				{
					func_297(522, 0);
				}
				break;
			case -898386032:
				func_297(521, 0);
				break;
			case -2035110427:
				if (func_38() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_297(534, 0);
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
		func_629(&iVar5);
		if (!func_615(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_102(0))
		{
			return 1;
		}
		if (func_320(iParam0) == -1037537535)
		{
			func_630(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_102(0) && !func_103())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_356(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_441(iVar2, 0);
		}
	}
	Var30 = { func_346(iParam0) };
	if (_stat_id_is_valid(&Var30))
	{
		_0x6a0184e904cdf25e(&Var30, iVar0);
	}
	func_631(iParam0);
	if (fParam6 > 0f)
	{
		if (func_310(iParam0, -839724752))
		{
			func_632(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_344(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_357(int iParam0, int iParam1, int iParam2)
{
	if (!func_633(iParam0, iParam1))
	{
		return 0;
	}
	Var0.f_4 = func_634(iParam1);
	Var0 = { func_372(0) };
	if (!func_603(iParam0, &uVar5, &Var0, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

void func_358(int iParam0, int iParam1)
{
	Var0 = { func_635(iParam0) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	if (!func_310(iParam0, 1714518167))
	{
		Var0 = { func_636(iParam0) };
		if (Var0.f_1 != 0)
		{
			_0x6a0184e904cdf25e(&Var0, iParam1);
		}
	}
}

bool func_359(int iParam0)
{
	return func_227(iParam0) == 1868067663;
}

bool func_360(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_637(iParam0))
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
		func_638(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_361(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_38() == 0)
	{
		return func_639(iParam0);
	}
	return iParam0 <= func_640();
}

bool func_362(int iParam0)
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

int func_363(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_310(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_364(int iParam0, int iParam1)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_372(0) };
	Var0.f_4 = func_634(iParam1);
	Var5 = { func_373(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_211(0), &Var5, 0);
	return iVar9;
}

bool func_365(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_104(iParam0, 0))
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
		func_641(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_366(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (func_310(iParam0, -887064662))
	{
		return true;
	}
	return func_367(iParam0);
}

bool func_367(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (func_310(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_368(int iParam0, int iParam1)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	if (!func_366(iParam0) && !func_367(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_405(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_642(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_643(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_644(iVar15, iVar1);
			if (func_104(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_645(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_364(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_647(iVar16, func_646(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_648(iVar1);
	}
	return iVar0;
}

int func_369(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_419(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_104(iParam1, 0))
	{
		return 0;
	}
	if (!func_649(iParam0))
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
		if (!func_650(iVar28))
		{
		}
		else
		{
			_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!does_entity_exist(*iParam2))
					{
						*iParam2 = get_ped_index_from_entity_index(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

int func_370(int iParam0, int iParam1)
{
	iParam0 = func_419(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_104(iParam1, 0))
	{
		return 0;
	}
	if (!func_649(iParam0))
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_371(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar1) && !is_entity_a_ped(iVar1))
		{
			if (iParam0 == _0x31fef6a20f00b963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

struct<4> func_372(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_211(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_373(1328661203, func_651(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_373(1328661203, func_651(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_373(1328661203, func_651(), -1591664384, bParam0);
}

struct<4> func_373(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_104(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_211(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_374(bool bParam0)
{
	iVar0 = func_211(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_373(923904168, func_372(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_373(923904168, func_372(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_373(923904168, func_372(bParam0), -740156546, 0);
}

bool func_375(int iParam0, bool bParam1)
{
	if (func_227(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_652();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_376(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_387(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_377(int iParam0, var uParam1, int iParam2)
{
	if (func_653(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_378(bool bParam0)
{
	iVar0 = func_211(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_373(271701509, func_372(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_373(271701509, func_372(bParam0), 12999093, 0);
}

bool func_379(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_227(iParam0);
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
			if (func_654(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_380(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_655(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_381(int iParam0)
{
	if (!func_104(*iParam0, 0))
	{
		return 0;
	}
	if (!func_656(*iParam0))
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

int func_382(int iParam0)
{
	return iParam0;
}

bool func_383(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_384(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_385(int iParam0)
{
	return func_320(iParam0) == -427144552;
}

int func_386(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_104(iParam0, 0) && !func_383(func_382(iParam0), 2))
	{
		return 0;
	}
	if (func_320(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_384(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_211(bParam3), iParam0);
}

int func_387(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_384(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_373(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_211(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_211(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_388(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_657(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_398(iParam0))
	{
		return func_658(func_399(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_365(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_389(int iParam0)
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

int func_390(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_659(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_661(func_660(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_662(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_391(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_663(iParam0))
		{
			return false;
		}
	}
	if (func_664(&(iParam0->f_6)))
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

int func_392(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_637(iParam0))
	{
		return 0;
	}
	bVar1 = func_166(iParam3, 2);
	bVar2 = func_665(iParam0, -570078785, bVar1);
	bVar3 = func_665(iParam0, -915411861, bVar1);
	if (func_665(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_666(iParam0, &iVar0) || func_667(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_668())
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
	else if (func_669(15) && func_665(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_665(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_166(iParam2, 2))
	{
		if (func_670(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_166(iParam2, 8))
	{
		return func_671(iParam0, iParam1);
	}
	return 1;
}

bool func_394(int* iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	uVar0 = 15;
	if (!func_360(uParam1->f_16, iParam3, &uVar0, &iVar31, 0, 1))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_672(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 2:
			return func_673(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 3:
			return func_674(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 4:
			return func_675(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 5:
			return func_676(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 6:
			return func_677(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 7:
			return func_678(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 8:
			return func_679(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 9:
			return func_680(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 10:
			return func_681(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 11:
			return func_682(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 12:
			return func_683(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 13:
			return func_684(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 14:
			return func_685(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 15:
			return func_686(iParam0, uParam1, iParam2, &uVar0, bParam4);
		default:
			break;
	}
	return false;
}

int func_395(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_166(iParam9, 32))
	{
		if (!_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_380(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_654(iParam1, func_227(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_166(iParam9, 1))
	{
		if (!func_687(iParam1))
		{
			return 0;
		}
	}
	if (func_166(iParam9, 2))
	{
		if (func_688(iParam1, iParam7, 1))
		{
			return 0;
		}
	}
	if (func_166(iParam9, 4))
	{
		if (!bParam10 && !_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_387(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_386(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_548(iParam1, iParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_689(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (iParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_166(iParam9, 8))
	{
		return func_690(iParam0, iParam1, iParam7, iParam8);
	}
	return 1;
}

struct<16> func_396(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_373(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_384(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_651() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_397(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	uVar0 = 15;
	if (!func_365(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_691(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_692(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_693(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_694(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_695(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_696(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_697(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_698(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_699(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_700(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_701(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_702(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_703(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_704(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_705(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_398(int iParam0)
{
	if (func_310(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_399(int iParam0, bool bParam1)
{
	if (!func_104(iParam0, 0))
	{
		return func_706(func_382(iParam0), bParam1);
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

bool func_400(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_61(36, iParam0);
}

bool func_401(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 184)
	{
		return true;
	}
	return false;
}

int func_402(int iParam0)
{
	if (!func_401(iParam0))
	{
		return 0;
	}
	return Global_1139381->f_11[iParam0]->f_2;
}

int func_403(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_707(iParam0, &uVar25, &Var12, &Var0, bParam1, iParam2, iParam3, bParam4);
}

bool func_404(int iParam0)
{
	if (func_320(iParam0) == 2085633299 && _0x245d07651b1d183b(iParam0, 16777216))
	{
		return true;
	}
	return false;
}

int func_405(int iParam0, int iParam1)
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

bool func_406()
{
	return (func_708(0) && func_708(1));
}

bool func_407()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

int func_408(int iParam0)
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

int func_409(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_709(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_50[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_50[iParam0]);
		default:
			break;
	}
	return 1;
}

int func_410(int iParam0)
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

int func_411()
{
	return Global_1051252->f_12;
}

char* func_412()
{
	return "unnamed";
}

int func_413(int iParam0)
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

int func_414(int iParam0)
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

bool func_415(int iParam0)
{
	if (func_710(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_711(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_416(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_417(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_418(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_419(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_420(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_274(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_421(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 8192);
}

int func_422(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1913400)
	{
		iVar0 = Global_1913400[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1913400)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_423(var uParam0)
{
	return uParam0;
}

bool func_424(int iParam0)
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

bool func_425(int iParam0)
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

void func_426(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (is_ped_male(Global_34))
			{
				sVar0 = "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A";
			}
			else
			{
				sVar0 = "WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A";
			}
			_task_use_scenario_point(Global_34, &(Local_28[0]), sVar0, 0, false, true, 0, false, -1f, false);
			break;
		case 1:
			if (is_ped_male(Global_34))
			{
				sVar0 = "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A";
			}
			else
			{
				sVar0 = "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A";
			}
			_task_use_scenario_point(Global_34, &(Local_28[0]), sVar0, 0, false, true, 0, false, -1f, false);
			break;
	}
}

int func_427(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == iParam0)
		{
			return func_432(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_428(int iParam0)
{
	switch (func_227(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case 119907797:
			return true;
		case 1388798186:
			return true;
		default:
			break;
	}
	if (func_310(iParam0, 160827531))
	{
		return true;
	}
	return false;
}

bool func_429(int iParam0)
{
	return func_712(iParam0, &uVar0);
}

bool func_430(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

int func_431(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_427(iVar0);
}

int func_432(int iParam0, int iParam1)
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

void func_433(int iParam0)
{
	func_713(iParam0, 8, 6);
}

void func_434(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_2685[func_264(iParam0, 1)])->f_1 = ((Global_1952637->f_2685[func_264(iParam0, 1)])->f_1 || iParam1);
}

void func_435(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_436(struct<4> Param0)
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
			if (func_714(Param0))
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
			func_715(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_435(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_714(Param0))
			{
				return;
			}
			func_715(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_435(8);
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
			if (func_714(Param0))
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
			func_715(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_435(8);
			break;
			break;
	}
}

int func_437(int iParam0, int iParam1)
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

bool func_438(int iParam0)
{
	iVar0 = create_itemset(true);
	iVar1 = _0x84ccf9a12942c83d(*iParam0, iVar0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = get_indexed_item_in_itemset(iVar2, iVar0);
		iVar4 = _get_entity_from_item(iVar3);
		if (is_entity_dead(iVar4))
		{
			destroy_itemset(iVar0);
			return true;
		}
		iVar2++;
	}
	destroy_itemset(iVar0);
	return false;
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case -2145890973:
		case -2073130256:
		case -1910795227:
		case -1302821723:
		case -1210546580:
		case -1076508705:
		case -1028170431:
		case -861544272:
		case -575340245:
		case -564099192:
		case -466687768:
		case -292997097:
		case -164963696:
		case 98537260:
		case 111281960:
		case 386506078:
		case 510312109:
		case 729471181:
		case 831859211:
		case 1095117488:
		case 1104697660:
		case 1205982615:
		case 1459778951:
		case 1582986780:
		case 1784941179:
			return 166398389;
		case -1797625440:
		case -1790499186:
		case -1550768676:
		case -1414989025:
		case -1211566332:
		case -1170118274:
		case -1134449699:
		case -229688157:
		case 252669332:
		case 480688259:
		case 545068538:
		case 759906147:
		case 846659001:
		case 989669666:
		case 1458540991:
		case 1464167925:
		case 1465438313:
			return -467118139;
		case -1854059305:
		case -1451393780:
		case -930822792:
		case -593056309:
		case -407730502:
		case 1502581273:
			return 524620511;
		case -2116748615:
		case -2022921611:
		case -711779521:
		case 703712157:
		case 1493541632:
		case 1538187374:
		case 1867262572:
			return -1768405210;
		case -1568716381:
		case -753902995:
		case 40345436:
			return -546209848;
		case -1981561472:
		case -1884490195:
		case -1553593715:
		case -1182983171:
		case -452224784:
		case -300867788:
		case -243188398:
		case 1520661:
		case 122748261:
		case 264156159:
		case 463643368:
		case 513249462:
		case 697075200:
		case 706485280:
		case 1860580756:
			return 880496229;
		case -2063183075:
		case -2011226991:
		case -466054788:
		case -166054593:
		case 723190474:
		case 2023522846:
		case 2079703102:
			return 2058993648;
		case -50684386:
		case 195700131:
		case 556355544:
		case 1556473961:
			return -1535978095;
		case -2021043433:
		case -1963605336:
		case -1098441944:
		case 1110710183:
		case 1755643085:
			return -151108755;
		case 1007418994:
		case 1751700893:
		case 2028722809:
			return 1663095412;
		case -1003616053:
		case -541762431:
		case 1416324601:
		case 2105463796:
			return -348823399;
		case 41707457:
		case 134747314:
		case 490159652:
		case 543892122:
			return -1240620284;
		case -1797450568:
		case 1265966684:
		case 1746830155:
			return 532201260;
		case -1892280447:
		case -1598866821:
		case -1295720802:
		case -1143398950:
		case -1124266369:
		case -885451903:
		case -829273561:
		case 90264823:
		case 730092646:
		case 1654513481:
			return 1610737930;
		case -2037578922:
			return -1277667710;
	}
	return 0;
}

int func_440(int iParam0)
{
	iVar0 = func_716(iParam0);
	if (does_entity_exist(iVar0) && is_ped_injured(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_441(int iParam0, int iParam1)
{
	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_717(&Var4, 1356624740);
	return func_718(iParam0, &Var4, &uVar0, iParam1, 0);
}

int func_442(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 3;
	}
	else
	{
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
	}
	return iVar0;
}

bool func_443(int iParam0)
{
	switch (get_entity_model(iParam0))
	{
		case -2116748615:
		case -2037578922:
		case -1981561472:
		case -1910795227:
		case -1550768676:
		case -1302821723:
		case -1210546580:
		case -1182983171:
		case -1028170431:
		case -930822792:
		case -452224784:
		case -292997097:
		case -243188398:
		case 1520661:
		case 41707457:
		case 98537260:
		case 111281960:
		case 122748261:
		case 264156159:
		case 490159652:
		case 510312109:
		case 513249462:
		case 674267496:
		case 703712157:
		case 706485280:
		case 729471181:
		case 989669666:
		case 1465438313:
		case 1493541632:
		case 1502581273:
		case 1582986780:
		case 1746830155:
		case 1784941179:
		case 1860580756:
		case 1867262572:
		case 2105463796:
			return true;
		default:
			break;
	}
	return false;
}

bool func_444(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
	}
	if (func_310(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_445(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(*iParam0);
	return func_719(iVar0);
}

int func_446(int iParam0)
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
			iVar0 = func_719(get_ped_index_from_entity_index(iParam0));
		}
	}
	return iVar0;
}

int func_447(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = func_720(iParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_721(iParam0, iParam1, bParam2, iParam3);
}

bool func_448(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_449(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_450(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_722(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_723(iParam0))
	{
		return false;
	}
	if (func_724(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_725(iParam0, 1)) || func_726(32768))
	{
		if (!func_725(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_727())
	{
		return false;
	}
	return true;
}

void func_451(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

void func_452(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_43(iParam0))
	{
		return;
	}
	iVar0 = func_90(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_453(var uParam0, char* sParam1)
{
	if (func_43(*uParam0))
	{
		iVar0 = func_90(*uParam0);
		if (_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
		{
			_uiprompt_set_tag((*Global_1951255)[iVar0]->f_3, sParam1);
		}
	}
}

bool func_454(int iParam0, bool bParam1)
{
	if (bParam1 && !func_43(iParam0))
	{
		return false;
	}
	iVar0 = func_90(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

bool func_455()
{
	fVar0 = get_disabled_control_normal(0, 1301263553);
	fVar1 = get_disabled_control_normal(0, -39308912);
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.9f * 0.9f))
	{
		return true;
	}
	return false;
}

bool func_456(int iParam0, bool bParam1)
{
	if (bParam1 && !func_43(iParam0))
	{
		return false;
	}
	iVar0 = func_90(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1951255)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1951255)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1951255)[iVar0]->f_3);
}

bool func_457(var uParam0)
{
	uParam0->f_130 = func_198();
	iVar0 = func_183(uParam0);
	if ((((uParam0->f_131 == -1 || iVar0 == uParam0->f_131) && (uParam0->f_132 == 0 || func_728(uParam0->f_130, uParam0->f_132))) || (uParam0->f_131 == -1 && func_728(uParam0->f_130, uParam0->f_132))) && !(_0xc488b8c0e52560d8(Global_34) || _0x2dc0e8dcbd3546e9(Global_34)))
	{
		uParam0->f_129 = iVar0;
		return true;
	}
	return false;
}

void func_458(var uParam0)
{
	iVar0 = _0xc22aa08a8adb87d4(Global_34);
	if (iVar0 == -518407211 || iVar0 == 1662215698)
	{
		if (func_210(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
		{
			func_213(653141085, 2f);
			uParam0->f_149 = get_game_timer();
		}
	}
	else if (iVar0 == -1433449364 || iVar0 == 2058555960)
	{
		if (func_210(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
		{
			func_213(1335077954, 2f);
			uParam0->f_149 = get_game_timer();
		}
	}
}

int func_459(var uParam0)
{
	if (uParam0->f_130 == 6 && func_197(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_130)
		{
			case 1:
				func_213(-73132177, 1086324736);
				break;
		}
	}
	return 0;
}

int func_460(var uParam0)
{
	if (uParam0->f_130 == 6 && func_197(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_130)
		{
			case 1:
				func_213(-73132177, 1086324736);
				break;
			case 8:
				func_213(-1890302844, 0.5f);
				break;
			case 7:
				func_213(36116464, 0.5f);
				break;
		}
	}
	return 0;
}

bool func_461(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4)
{
	_0x6d07b371e9439019(uParam0);
	return _0x79197f7d2bb5e73a(uParam0, uParam1, sParam2, sParam3, sParam4, 0);
}

int func_462(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_729(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_384(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_102(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_730(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_731(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_390(1702063850, &Var65, 1);
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
			func_233(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_211(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_463(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_729(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_380(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_102(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_38() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_390(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_233(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_211(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_464(int iParam0)
{
	if (func_310(iParam0, 1573112293))
	{
		return func_732(iParam0);
	}
	if (func_733(iParam0))
	{
		return func_734();
	}
	switch (func_227(iParam0))
	{
		case -77448735:
			if (func_735(iParam0))
			{
				return func_732(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_732(iParam0);
		case -1520388130:
		case 1802292908:
			return func_736();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_737();
		case -525676072:
			return func_737();
		case 1779021115:
			if (iParam0 == -1016714371 || iParam0 == 332793555)
			{
				return func_738();
			}
			return func_739();
		case -1823706425:
			if (iParam0 == -1115561122)
			{
				return func_740();
			}
			else
			{
				return func_741();
			}
			break;
		case -854348463:
			return func_742();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_743();
		default:
			if (func_104(iParam0, 0))
			{
				if (func_310(iParam0, 1919582297))
				{
					return func_744();
				}
				else if (iParam0 == -2035110427 || iParam0 == -1448210800)
				{
					return func_745();
				}
				else if (iParam0 == -1516555556)
				{
					return func_746();
				}
				else if (func_310(iParam0, 1147021565))
				{
					return func_747();
				}
			}
			return func_748();
	}
	return func_748();
}

bool func_465(bool bParam0, int iParam1)
{
	if ((Global_1940258->f_6 || is_ped_dead_or_dying(Global_34, true)) || is_entity_dead(Global_34))
	{
		return false;
	}
	if (func_38() == 0)
	{
		if (func_749(131072))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 1))
	{
		if (func_749(1024))
		{
			return false;
		}
	}
	if (Global_1940258->f_16)
	{
		return false;
	}
	if (!func_166(iParam1, 2) && func_749(32))
	{
		return false;
	}
	if (!func_166(iParam1, 4))
	{
		if (func_749(4096))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 8) && func_749(512))
	{
		return false;
	}
	if (!func_166(iParam1, 512) && !func_750(bParam0))
	{
		return false;
	}
	if (!func_166(iParam1, 262144) && !func_751(bParam0, func_166(iParam1, 524288)))
	{
		return false;
	}
	if (!func_166(iParam1, 64) && !func_752(bParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_166(iParam1, 128))
	{
		if (func_123(Global_34, 1868526510) || is_ped_on_mount(Global_34))
		{
			if (bParam0)
			{
				func_217("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_166(iParam1, 16))
	{
		if (func_15(Global_34))
		{
			iVar0 = get_mount(Global_34);
			if (!func_753(iVar0, 1))
			{
				if (bParam0)
				{
					func_217("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_166(iParam1, 256) && func_749(8192))
	{
		return false;
	}
	if (!func_166(iParam1, 1024) && func_749(65536))
	{
		if (bParam0)
		{
			func_217("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_166(iParam1, 2048))
	{
		if (func_749(32768))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 4096))
	{
		if (func_749(16384))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 8192))
	{
		if (!func_749(16))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 67108864))
	{
		if (!func_749(268435456))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 16384))
	{
		if (func_749(256))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 32768))
	{
		if (func_304())
		{
			if (bParam0)
			{
				func_217("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_166(iParam1, 131072))
	{
		if (!func_749(524288))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 65536))
	{
		if (!func_749(262144))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 1048576))
	{
		if (!func_749(2097152))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 2097152))
	{
		if (!func_749(8388608))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 4194304))
	{
		if (!func_749(16777216))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 8388608))
	{
		if (func_749(33554432))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 16777216))
	{
		if (func_749(67108864))
		{
			return false;
		}
	}
	if (!func_166(iParam1, 33554432))
	{
		if (func_749(134217728))
		{
			return false;
		}
	}
	if (func_749(64))
	{
		return false;
	}
	else if (func_749(128))
	{
		return false;
	}
	else if (func_749(1048576))
	{
		return false;
	}
	else if (func_749(4))
	{
		return false;
	}
	if (!func_166(iParam1, 134217728))
	{
		if (func_59(256))
		{
			return false;
		}
	}
	return true;
}

bool func_466()
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

bool func_467(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

var func_468(int iParam0, int iParam1)
{
	return _databinding_read_data_bool(Global_1940311->f_1433.f_54.f_85);
}

int func_469()
{
	return Global_1915715->f_22504.f_5;
}

char* func_470()
{
	iVar0 = func_469();
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
			Var1 = { func_120(0) };
			if (!func_121(Var1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar3 = func_754(&Var1, 1);
			if (iVar3 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_755(iVar3, 461218520, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_757(func_756(iVar3, 461218520));
	}
	return "";
}

void func_471(int iParam0)
{
	Global_1915715->f_22504.f_5 = iParam0;
}

int func_472(int iParam0, int iParam1)
{
	if (!func_383(iParam0, 2))
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

int func_473(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_758(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_474(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_759(iParam0))
	{
		return 1;
	}
	if (!func_760(iParam0))
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
	if (!bParam2 && !func_761(iParam0))
	{
		return 3;
	}
	if (func_762(iParam0) && !func_763())
	{
		return 4;
	}
	return 0;
}

bool func_475(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_405(iParam0, -949239683))
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

bool func_476()
{
	return Global_1952637->f_1675.f_1[1]->f_1 == -282754472;
}

bool func_477(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_764(*uParam0, -1725579161, 0))
	{
		return true;
	}
	return false;
}

void func_478(int iParam0)
{
	iVar0 = 406178289;
	switch (func_765())
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
		if (func_310(iParam0, 1573112293))
		{
			func_767(func_766(iParam0), 1, 1);
		}
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_479(int iParam0)
{
	iVar0 = 16939881;
	switch (func_765())
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
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_480(int iParam0, bool bParam1)
{
	iVar0 = -45077177;
	switch (func_765())
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
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_481(int iParam0, bool bParam1)
{
	iVar0 = 1700817728;
	switch (func_765())
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
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_482(int iParam0)
{
	iVar0 = -362580870;
	switch (func_765())
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
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_483(int iParam0)
{
	iVar0 = 2105609037;
	switch (func_765())
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
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_484(int iParam0)
{
	iVar0 = 1964324114;
	switch (func_765())
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
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_485(int iParam0)
{
	iVar0 = -1530144981;
	switch (func_765())
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
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_486(int iParam0)
{
	iVar0 = -1074475556;
	switch (func_765())
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
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_487(int iParam0)
{
	iVar0 = 1076410848;
	switch (func_765())
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
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_488(int iParam0)
{
	iVar0 = 1516413548;
	switch (func_765())
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
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_489(int iParam0)
{
	iVar0 = -1454586679;
	switch (func_765())
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
		func_768(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_490(int iParam0, bool bParam1)
{
	iVar0 = 1934039819;
	switch (func_765())
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
		if (!func_768(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_769(iParam0);
			func_214(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

void func_491(int iParam0, bool bParam1)
{
	iVar0 = -1054661625;
	switch (func_765())
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
		if (!func_768(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_769(iParam0);
			func_214(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_769(iParam0);
		func_214(iParam0, 1, 0, 562618531);
	}
}

bool func_492(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_493(char* sParam0)
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

void func_494(int iParam0)
{
	if (func_492(iParam0, 1))
	{
		func_770(1);
	}
}

int func_495(int iParam0)
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

bool func_496()
{
	return Global_1952637->f_3484;
}

bool func_497(int iParam0)
{
	if (func_771())
	{
		return false;
	}
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (!func_345(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_498(int iParam0)
{
	return func_772(iParam0);
}

void func_499(int iParam0, int iParam1)
{
	func_773(iParam0, iParam1);
}

int func_500(int iParam0, int iParam1)
{
	bVar3 = func_774(iParam0);
	if (func_227(iParam0) == -525676072 || func_310(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_775(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_776();
			}
			else
			{
				iVar0 = func_777();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_778();
		}
		else
		{
			iVar0 = func_779();
		}
	}
	else if (func_262(&iVar2))
	{
		if (func_310(iVar2, -1303648999) || func_227(iVar2) == -525676072)
		{
			iVar0 = func_776();
		}
		else
		{
			iVar0 = func_777();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_778();
	}
	else
	{
		iVar0 = func_779();
	}
	if (iVar0 != 0)
	{
		Global_1952637->f_3483 = get_game_timer();
		_task_item_interaction(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

void func_501()
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
	func_780(32768);
	func_713(1108822547, 8, 6);
}

bool func_502(int iParam0, bool bParam1)
{
	return func_781(iParam0, 0) < func_782(iParam0, bParam1);
}

void func_503(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_227(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_310(iParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_783(iParam0, &(Global_1952637->f_3334.f_28), Global_1952637->f_3334.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_783(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_783(iParam0, &(Global_1952637->f_3334.f_27), Global_1952637->f_3334.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_783(iParam0, &(Global_1952637->f_3334.f_29), Global_1952637->f_3334.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_783(iParam0, &(Global_1952637->f_3334.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_783(iParam0, &(Global_1952637->f_3334.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_783(iParam0, &(Global_1952637->f_3334.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_310(iParam0, 160827531))
			{
				bVar1 = func_783(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_784();
	if (func_785(iVar0) || (iVar0 != -999503751 && func_310(iParam0, -166674229)))
	{
		_0x766315a564594401(func_211(bParam5), iParam0, 0);
	}
	func_327(iParam0, iParam3, bParam5);
	if (bParam4)
	{
		func_786(1, iParam0);
	}
	if (bParam2)
	{
		func_787(0, 0);
	}
}

int func_504(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_788();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

void func_505(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (func_789(iParam0, iParam1))
	{
		func_790(iParam0, iParam1, 1, bParam2, iParam3, bParam4);
		return;
	}
}

bool func_506(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_791();
	if (iParam2 == 39)
	{
		Var0 = { func_225(iParam0, 1, 0) };
		iParam2 = func_264(func_427(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_430(32768) && iParam2 == 10)
	{
		func_433(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_508(iParam0, 1))
	{
		func_792(&(Global_1952637->f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_793(iParam2);
	}
	func_794(iParam2, iVar5);
	func_795(Global_1952637->f_1556.f_1[iParam2], 4, 6);
	func_795(Global_1952637->f_1675.f_1[iParam2], 4, 6);
	func_796(&(Global_1952637->f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637->f_1556.f_1[iParam2]->f_1;
	}
	Global_1952637->f_1556.f_1[iParam2] = iParam0;
	Global_1952637->f_1556.f_1[iParam2]->f_1 = func_797(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637->f_2897)
		{
			if (&Global_1952637->f_2897.f_2[iVar6] >= 0 && &Global_1952637->f_2897.f_2[iVar6] < 39)
			{
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]] = 0;
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]]->f_1 = 0;
				func_713(func_432(&(Global_1952637->f_2897.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_507(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_798(&(Global_1952637->f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_508(int iParam0, bool bParam1)
{
	if (!func_104(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return false;
	}
	if (func_310(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_509(int iParam0, int iParam1, bool bParam2)
{
	Var4 = { func_225(iParam0, bParam2, 0) };
	if (func_508(iParam0, 0))
	{
		iVar9 = func_799(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_225(iVar9, bParam2, 0) };
			Var0 = { func_373(iVar9, Var4, Var4.f_4, bParam2) };
			return func_800(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_373(iParam0, Var4, Var4.f_4, bParam2) };
	return func_800(Var0, iParam1, bParam2);
}

int func_510(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_264(iParam0, 1);
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

void func_511(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_512(int iParam0)
{
	iParam0 = func_419(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_244(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return false;
	}
	if (func_801(iVar0))
	{
		return true;
	}
	return false;
}

int func_513()
{
	return Global_39.f_281.f_3222;
}

bool func_514()
{
	return Global_1915715->f_22504.f_1;
}

bool func_515(int iParam0)
{
	return (Global_1051439->f_3628 && iParam0) != 0;
}

void func_516(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 - (Global_1051439->f_3628 && iParam0));
}

void func_517(int iParam0)
{
	Global_1051439->f_3629 = iParam0;
}

bool func_518()
{
	return Global_1915715->f_22504;
}

void func_519()
{
	_0x2804658eb7d8a50b(4, 666989068);
}

bool func_520()
{
	return func_515(4);
}

int func_521(bool bParam0)
{
	if (!func_802())
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
	if ((func_803(1106247680, 0) || _is_ped_hogtied(Global_34)) || _is_ped_hogtying(Global_34))
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
	if (func_804(255))
	{
		return 3;
	}
	if (is_minigame_in_progress())
	{
		return 44;
	}
	if ((Global_1108365->f_935.f_28 != -1 && Global_1108365->f_935.f_28 != 6) && Global_1108365->f_935.f_28 != 8)
	{
		if (func_805(Global_1108365->f_935.f_28))
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
	if (func_407())
	{
		return 43;
	}
	return -1;
}

void func_522(int iParam0)
{
	if (!func_520())
	{
		func_806(1);
	}
	Global_1051439->f_3630 = iParam0;
	iVar0 = func_521(1);
	if (iVar0 != -1)
	{
		func_471(iVar0);
		func_807(0);
	}
	else
	{
		func_807(1);
	}
}

bool func_523()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

bool func_524(int iParam0)
{
	return func_277((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

bool func_525()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_526()
{
	return !func_524(2);
}

void func_527()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_528(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_809(bParam2, func_808(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_529(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

int func_530(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

int func_531(int iParam0, bool bParam1)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339->f_1[iVar1]->f_1 != -1 && func_810(iVar1, 64, iVar0))
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

int func_532(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1196898->f_1[iParam0]);
}

void func_533(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_811(&(Global_1071686->f_23044), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 19, 5, &uParam19);
}

void func_534()
{
	Global_1913694->f_1583 = get_game_timer();
	Global_1913694->f_1581 = 1;
}

void func_535(int iParam0, int iParam1, var uParam2)
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

bool func_536()
{
	return !&Global_1913504;
}

void func_537(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_538(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_539(int iParam0, int iParam1)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_540(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*sParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_541(int iParam0)
{
	if (func_310(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_310(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_310(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_310(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_310(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_310(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_310(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_310(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_310(iParam0, -352095726) || func_310(iParam0, -2014783736)) || func_310(iParam0, -545064757)) || func_310(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_542(int iParam0)
{
	if (func_310(iParam0, -189374246))
	{
		if (((func_812(iParam0, -1305775593) || func_812(iParam0, 1384151091)) || func_812(iParam0, 2075388272)) || func_812(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_310(iParam0, -753854379) || func_310(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

int func_543(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_813(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_544(int iParam0)
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

int func_545(int iParam0)
{
	if (!func_104(iParam0, 0))
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

int func_546(int iParam0)
{
	iVar0 = func_814(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_642(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_643(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_815(iVar14))
			{
				func_648(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_648(iVar11);
	}
	return 0;
}

bool func_547(int iParam0, int iParam1)
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

bool func_548(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_104(iParam0, 0) && !func_383(func_382(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

char* func_549(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_550(int iParam0, int iParam1)
{
	iVar0 = func_816(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_551(int iParam0, char* sParam1)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_817(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_818(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_819(iParam0), 128);
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

char* func_552(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_553(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_549(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_554(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_820(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_555(int iParam0, int iParam1)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_343(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_821("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_563(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_600(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_564(iVar1);
				return true;
			}
			iVar3++;
		}
		func_564(iVar1);
	}
	return false;
}

bool func_556(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_227(iParam0);
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
	iVar1 = func_822(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_823(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_824(iParam0);
	iVar2 = func_823(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

struct<2> func_557(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_558(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_560(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_561(&Var0, func_374(0));
	}
	if (!func_562(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_564(iVar14);
	return uVar15;
}

struct<4> func_559(int iParam0, bool bParam1)
{
	Var0 = { func_225(iParam0, bParam1, 0) };
	return func_373(iParam0, Var0, Var0.f_4, bParam1);
}

struct<14> func_560(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_561(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_562(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_211(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_563(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_564(int iParam0)
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

bool func_565()
{
	if ((Global_1940311->f_10901 != (Global_1940311->f_38.f_203 - 1) || func_826(func_825(0), Global_1940311->f_10893, 0, 1, 1) > 0) || Global_1940311->f_10901 == 15)
	{
		return true;
	}
	func_827();
	if (Global_1940311->f_6)
	{
		return true;
	}
	return false;
}

void func_566(int iParam0)
{
	Global_1940311->f_10 = iParam0;
}

void func_567(int iParam0)
{
	Global_1940311->f_9 = iParam0;
}

void func_568(var uParam0)
{
	StringCopy(&(uParam0->f_20), "CAMP", 8);
}

void func_569(var uParam0)
{
	if (_does_text_database_exist(&(uParam0->f_20)))
	{
		_text_database_request(&(uParam0->f_20));
	}
	request_streamed_texture_dict("satchel_textures", false);
	if (func_98(uParam0, 2))
	{
		return;
	}
	request_anim_dict("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	request_anim_dict("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
	request_model(809653548, false);
	request_model(975914773, false);
	request_model(1537403900, false);
	request_model(-236347221, false);
	request_model(-91245513, false);
	request_model(-655768729, false);
	request_model(-936393949, false);
	request_model(1597043588, false);
	request_model(-1594634038, false);
	request_model(-467664954, false);
	request_model(-856043142, false);
	request_model(-370340297, false);
	request_model(1974613782, false);
	request_model(400517539, false);
	request_model(-1906499827, false);
	func_828(uParam0);
	if (func_98(uParam0, 4))
	{
		request_model(-194504515, false);
		request_model(-2049449981, false);
		request_model(-1172163183, false);
		request_model(222541312, false);
		request_model(1289914954, false);
	}
}

bool func_570(var uParam0)
{
	if (func_829(&(uParam0->f_20)))
	{
		if (!_text_database_has_loaded(&(uParam0->f_20)))
		{
			return false;
		}
	}
	if (!has_streamed_texture_dict_loaded("satchel_textures"))
	{
		return false;
	}
	if (func_98(uParam0, 2))
	{
		return true;
	}
	if (!has_anim_dict_loaded("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!has_anim_dict_loaded("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
	{
		return false;
	}
	if (!func_830(uParam0, &(uParam0->f_48)))
	{
		return false;
	}
	if (!func_830(uParam0, &(uParam0->f_49)))
	{
		return false;
	}
	if (!func_830(uParam0, &(uParam0->f_50)))
	{
		return false;
	}
	if (!func_830(uParam0, &(uParam0->f_51)))
	{
		return false;
	}
	if (!func_830(uParam0, &(uParam0->f_52)))
	{
		return false;
	}
	if (!func_830(uParam0, &(uParam0->f_53)))
	{
		return false;
	}
	if (!has_model_loaded(809653548))
	{
		return false;
	}
	if (!has_model_loaded(975914773))
	{
		return false;
	}
	if (!has_model_loaded(1537403900))
	{
		return false;
	}
	if (!has_model_loaded(-236347221))
	{
		return false;
	}
	if (!has_model_loaded(-655768729))
	{
		return false;
	}
	if (!has_model_loaded(-936393949))
	{
		return false;
	}
	if (!has_model_loaded(1597043588))
	{
		return false;
	}
	if (!has_model_loaded(-91245513))
	{
		return false;
	}
	if (!has_model_loaded(-370340297))
	{
		return false;
	}
	if (!has_model_loaded(-467664954))
	{
		return false;
	}
	if (!has_model_loaded(-856043142))
	{
		return false;
	}
	if (!has_model_loaded(1974613782))
	{
		return false;
	}
	if (!has_model_loaded(400517539))
	{
		return false;
	}
	if (!has_model_loaded(-1906499827))
	{
		return false;
	}
	if (func_98(uParam0, 4))
	{
		if (!has_model_loaded(-194504515))
		{
			return false;
		}
		if (!has_model_loaded(-2049449981))
		{
			return false;
		}
		if (!has_model_loaded(-1172163183))
		{
			return false;
		}
		if (!has_model_loaded(222541312))
		{
			return false;
		}
		if (!has_model_loaded(1289914954))
		{
			return false;
		}
	}
	return true;
}

int func_571(int iParam0, int iParam1, bool bParam2, bool bParam3, var uParam4)
{
	_0x78c2e029db205a3a(iParam0, iParam1, uParam4);
	return func_831(iParam0, iParam1, bParam2, bParam3);
}

int func_572(int iParam0)
{
	iVar0 = func_832(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 1289914954;
}

void func_573(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		uParam0->f_49.f_22++;
	}
	if (uParam0->f_49.f_26 == -1)
	{
		iVar0 = func_347(uParam0->f_49.f_61, 0, 0, 0);
		iVar1 = func_833(uParam0->f_49.f_61, 0);
		iVar2 = func_224(uParam0->f_49.f_61, uParam0->f_49.f_62, func_583(), 0);
		if (iVar1 == -1)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = (iVar1 - iVar0);
		}
		uParam0->f_49.f_26 = func_834(iVar1, iVar2);
	}
	if (func_404(uParam0->f_49.f_61))
	{
		if (bParam3)
		{
			func_288(&(uParam0->f_135[iParam1]), "CAMP_REC_COOK_AGN", 1);
		}
		else
		{
			func_288(&(uParam0->f_135[iParam1]), "CAMP_REC_COOK", 1);
		}
	}
	else if (bParam3)
	{
		if (func_405(uParam0->f_49.f_61, -1636519629) == -701492487)
		{
			func_288(&(uParam0->f_135[iParam1]), "CAMP_REC_BREW_AGN", 1);
		}
		else
		{
			func_288(&(uParam0->f_135[iParam1]), "CAMP_REC_MAKE_AGN", 1);
		}
	}
	else if (func_405(uParam0->f_49.f_61, -1636519629) == -701492487)
	{
		func_288(&(uParam0->f_135[iParam1]), "CAMP_REC_BREW", 1);
	}
	else
	{
		func_288(&(uParam0->f_135[iParam1]), "CAMP_REC_MAKE", 1);
	}
}

bool func_574()
{
	return &Global_1940085 == 2;
}

void func_575(int iParam0)
{
	if (iParam0 >= &Global_1940085)
	{
		return;
	}
	Global_1940085->f_1 = iParam0;
}

bool func_576()
{
	return &Global_1940085 == 1;
}

void func_577(int iParam0, float fParam1, bool bParam2)
{
	if ((func_310(iParam0, 1573112293) || func_310(iParam0, 672467738)) || func_310(iParam0, -550842268))
	{
		bVar10 = true;
	}
	Var11.f_1 = 20;
	_0xd962f8579d702db5();
	Global_1940144->f_26 = 0;
	if (_item_database_fillout_item_effects_ids(iParam0, &Var11))
	{
		iVar0 = 0;
		while (iVar0 < Var11)
		{
			if (_item_database_fillout_item_effects_id_info(&(Var11.f_1[iVar0]), Var33[iVar0]))
			{
				switch (Var33[iVar0]->f_1)
				{
					case -943921969:
						fVar1 = func_835(0, (IntToFloat(Var33[iVar0]->f_2) / fParam1));
						func_836((IntToFloat(Var33[iVar0]->f_2) / fParam1));
						bVar9 = true;
						break;
					case -1104847406:
						fVar3 = func_835(2, (IntToFloat(Var33[iVar0]->f_2) / fParam1));
						func_837((IntToFloat(Var33[iVar0]->f_2) / fParam1), 0);
						bVar8 = true;
						break;
					case 381158954:
						fVar2 = func_835(1, (IntToFloat(Var33[iVar0]->f_2) / fParam1));
						func_838((IntToFloat(Var33[iVar0]->f_2) / fParam1));
						break;
					case -416929031:
						fVar4 = func_839((IntToFloat(Var33[iVar0]->f_2) / fParam1), (Var33[iVar0]->f_5 / fParam1));
						func_840(0, fVar4, 1, 1, bVar10);
						bVar9 = true;
						break;
					case 1857353317:
						fVar5 = func_839((IntToFloat(Var33[iVar0]->f_2) / fParam1), (Var33[iVar0]->f_5 / fParam1));
						func_840(2, fVar5, 1, 1, bVar10);
						bVar8 = true;
						break;
					case 1681823811:
						fVar6 = func_839((IntToFloat(Var33[iVar0]->f_2) / fParam1), (Var33[iVar0]->f_5 / fParam1));
						func_840(1, fVar6, 1, 1, bVar10);
						break;
					case -816334026:
						func_841((to_float(Var33[iVar0]->f_2) / fParam1), 1);
						break;
					default:
						if (bParam2)
						{
							switch (Var33[iVar0]->f_1)
							{
								case 2062242710:
									fVar7 = func_842(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
									func_843(19, fVar7, 1, 1);
									bVar9 = true;
									break;
								case -826379728:
									fVar7 = func_842(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
									func_843(20, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1191740624:
									fVar7 = func_842(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
									func_843(18, fVar7, 1, 1);
									break;
								case 1869697234:
									fVar7 = func_842(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
									func_843(0, fVar7, 1, 1);
									bVar9 = true;
									break;
								case 1342237631:
									fVar7 = func_842(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
									func_843(2, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1240225157:
									fVar7 = func_842(to_float(Var33[iVar0]->f_3), Var33[iVar0]->f_4);
									func_843(1, fVar7, 1, 1);
									break;
							}
						}
						break;
				}
			}
			iVar0++;
		}
		if (bParam2)
		{
			func_844(iParam0, bVar8, bVar9, 562618531);
		}
		_0x0e1db1f8f5b561dc(fVar1, fVar2, fVar3, round(fVar4), round(fVar6), round(fVar5));
	}
}

int func_578(var uParam0)
{
	return uParam0->f_10;
}

bool func_579(int iParam0)
{
	iVar0 = func_845(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_580(int iParam0)
{
	switch (iParam0)
	{
		case -1433449364:
		case -597629206:
		case -571916863:
		case -518407211:
		case 825619760:
		case 1135271674:
		case 1316803372:
		case 1662215698:
		case 1844142525:
		case 2058555960:
			return true;
		default:
			break;
	}
	return false;
}

void func_581(var uParam0, int iParam1)
{
	uVar0[0] = &uParam0->f_1[1];
	if (!does_entity_exist(Global_34) || Global_1940258->f_6)
	{
		func_55(uParam0, 0, 1);
	}
	set_ped_can_play_ambient_anims(Global_34, false);
	set_ped_can_play_gesture_anims(Global_34, 0, 1);
	if (func_38() != -1 && func_846())
	{
		if (func_296(&(uParam0->f_1[0]), 0))
		{
			func_92(uParam0);
			func_220(uParam0);
		}
		return;
	}
	if (func_98(uParam0, 256))
	{
		_0xc9caeaeec1256e54(-469828803);
	}
	disable_control_action(0, -719620017, false);
	disable_control_action(0, -124244224, false);
	_disable_first_person_cam_this_frame();
	switch (func_578(uParam0))
	{
		case 2:
			disable_all_control_actions(0);
			if (func_847(uParam0))
			{
				func_568(uParam0);
				func_569(uParam0);
				func_848(uParam0);
			}
			if (func_570(uParam0))
			{
				func_99(uParam0, 3);
			}
			break;
		case 3:
			disable_all_control_actions(0);
			if (func_38() == 0 && _0x251241caec707106())
			{
				func_92(uParam0);
				return;
			}
			if (func_847(uParam0))
			{
				func_92(uParam0);
				func_848(uParam0);
				if (func_94())
				{
					func_95(0);
				}
			}
			if ((func_98(uParam0, 16) || func_454(&(uParam0->f_1[0]), 1)) || func_98(uParam0, 32))
			{
				func_849(uParam0);
			}
			break;
		case 4:
			if (!func_98(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (func_850(uParam0))
			{
				func_187(uParam0, 1024);
				func_99(uParam0, 5);
			}
			break;
		case 5:
			if (!func_98(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (func_851(uParam0))
			{
				func_99(uParam0, 6);
			}
			break;
		case 6:
			if (!func_98(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (func_852(uParam0))
			{
				func_99(uParam0, 7);
			}
			break;
		case 7:
			if (!func_98(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (func_847(uParam0))
			{
				func_853(uParam0);
				func_848(uParam0);
				return;
			}
			if (_is_app_active(29649618) || _is_app_running(29649618))
			{
				return;
			}
			if (func_854(uParam0, 0))
			{
				if (func_855(uParam0, func_98(uParam0, 65536)) || ((func_98(uParam0, 2) || func_98(uParam0, 65536)) && _is_app_active(-1624772174)))
				{
					func_219(uParam0, 65536);
					func_99(uParam0, 8);
				}
				else if (func_98(uParam0, 4))
				{
					func_99(uParam0, 1);
				}
				else
				{
					func_99(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!func_98(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (!func_98(uParam0, 1024))
			{
				func_99(uParam0, 4);
				return;
			}
			if (_is_app_active(29649618) || _is_app_running(29649618))
			{
				return;
			}
			if (func_856(uParam0))
			{
				func_855(uParam0, 1);
				func_99(uParam0, 8);
			}
			break;
		case 8:
			disable_all_control_actions(0);
			if (_is_app_active(-1624772174))
			{
				if (_0xf7c180f57f85d0b8(-1624772174))
				{
					Global_1913694->f_1580 = 0;
					func_99(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!func_98(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (_is_app_active(29649618) || _is_app_running(29649618))
			{
				return;
			}
			if (func_847(uParam0))
			{
				func_853(uParam0);
				func_848(uParam0);
				return;
			}
			if (func_854(uParam0, 1))
			{
				func_99(uParam0, 10);
			}
			break;
		case 10:
			func_857(0);
			if (func_847(uParam0))
			{
				func_858(uParam0);
				func_848(uParam0);
			}
			if (func_859(uParam0) || func_860(uParam0))
			{
				return;
			}
			if (Global_1913694->f_1580)
			{
				Global_1913694->f_1580 = 0;
				_0xd962f8579d702db5();
				func_861(uParam0);
				uParam0->f_61 = 0;
				uParam0->f_62 = 0;
				func_862(uParam0, 0, 0);
				func_162(&(uParam0->f_1[5]), 0, 1, 1);
				func_99(uParam0, 9);
			}
			else if (func_863(&(uParam0->f_1[2]), 1) || !_is_app_running(-1624772174))
			{
				if (func_98(uParam0, 16))
				{
					func_99(uParam0, 18);
				}
				else
				{
					func_93(uParam0, 0);
					func_864("Exit", "SSCRFT_Sounds", 1);
					if (func_98(uParam0, 32))
					{
						func_219(uParam0, 32);
						func_99(uParam0, 1);
					}
					else
					{
						func_99(uParam0, 3);
					}
				}
			}
			else if (func_454(&(uParam0->f_1[7]), 1))
			{
				func_865(uParam0);
			}
			else if (func_454(&(uParam0->f_1[1]), 1))
			{
				func_866(uParam0);
			}
			else if (func_454(&(uParam0->f_1[3]), 1))
			{
				_0xd962f8579d702db5();
				if (func_98(uParam0, 128))
				{
					func_219(uParam0, 128);
				}
				else
				{
					func_187(uParam0, 128);
				}
				func_861(uParam0);
				func_864("toggle_craftable_all", "SSCRFT_Sounds", 1);
				uParam0->f_61 = 0;
				uParam0->f_62 = 0;
				func_862(uParam0, 0, 0);
				func_162(&(uParam0->f_1[5]), 0, 1, 1);
				func_99(uParam0, 9);
			}
			else if (func_867(&(uParam0->f_1[5]), 0, 1))
			{
				if (func_98(uParam0, 4096))
				{
					func_864("Nav_Left", "SSCRFT_Sounds", 1);
					func_868(uParam0, 0);
				}
			}
			else if (func_867(&(uParam0->f_1[5]), 1, 1))
			{
				if (func_98(uParam0, 4096))
				{
					func_864("Nav_Right", "SSCRFT_Sounds", 1);
					func_868(uParam0, 1);
				}
			}
			else if (func_863(&(uParam0->f_1[6]), 1))
			{
				func_864("toggle_ingredients_effects", "SSCRFT_Sounds", 1);
				func_869(uParam0, 1);
			}
			else
			{
				iVar2 = -813979060;
				while (_event_manager_is_event_pending(iVar2))
				{
					if (_event_manager_peek_event(iVar2, &vVar3))
					{
						if (vVar3.x == 703281244 || vVar3.x == -722926211)
						{
							func_870(uParam0);
						}
						else if (vVar3.x == -1740156697)
						{
							func_871(uParam0, &vVar3);
						}
						else if (vVar3.x == -1203660660)
						{
							if (vVar3.z == -2127505795)
							{
								func_866(uParam0);
							}
						}
						_event_manager_pop_event(iVar2);
					}
				}
			}
			break;
		case 11:
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -399233038, false);
			break;
		case 12:
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_61), 1, 0, 0, 0);
			func_857(0);
			iVar7 = _0xc22aa08a8adb87d4(Global_34);
			iVar8 = func_405(uParam0->f_61, -1636519629);
			if (iVar7 == -1433449364 || iVar7 == 2058555960)
			{
				if (!_0x68821369a2ceadd5(Global_34, 1335077954))
				{
					_0xd65fdc686a031c83(Global_34, 1335077954, 6f);
					_0x6d07b371e9439019(Global_34);
				}
				return;
			}
			if (iVar8 != -715814988)
			{
				if ((_0xc488b8c0e52560d8(Global_34) || _0x2dc0e8dcbd3546e9(Global_34)) && !has_anim_event_fired(Global_34, 1944546609))
				{
					return;
				}
				if (iVar7 == -518407211 || iVar7 == 1662215698)
				{
					if (!_0x68821369a2ceadd5(Global_34, 653141085))
					{
						_0xd65fdc686a031c83(Global_34, 653141085, 6f);
						_0x6d07b371e9439019(Global_34);
					}
					return;
				}
				else
				{
					_hide_ped_weapons(Global_34, 2, false);
				}
				if (((((((((iVar8 == 414472632 && !_is_anim_scene_loaded(uParam0->f_48, true, false)) || (iVar8 == -1136843638 && !_is_anim_scene_loaded(uParam0->f_50, true, false))) || (uParam0->f_69 != 0 && !has_model_loaded(uParam0->f_69))) || (iVar8 == -732326901 && !_is_anim_scene_loaded(uParam0->f_52, true, false))) || (iVar8 == 786205940 && !_is_anim_scene_loaded(uParam0->f_51, true, false))) || (iVar8 == -1141771998 && !_is_anim_scene_loaded(uParam0->f_53, true, false))) || (iVar8 == 364689687 && !_is_anim_scene_loaded(uParam0->f_54, true, false))) || (iVar8 == -842117252 && !_is_anim_scene_loaded(uParam0->f_55, true, false))) || (iVar8 == -1610298873 && !_is_anim_scene_loaded(uParam0->f_56, true, false)))
				{
					return;
				}
				else if (func_98(uParam0, 2048))
				{
					func_872(uParam0);
					func_219(uParam0, 2048);
				}
			}
			else
			{
				if (!_is_anim_scene_loaded(uParam0->f_49, true, false) || (is_ped_active_in_scenario(Global_34, 1) && !is_ped_active_in_scenario(Global_34, 0)))
				{
					return;
				}
				else if (func_98(uParam0, 2048))
				{
					func_872(uParam0);
					func_219(uParam0, 2048);
				}
				if (iVar7 != -518407211 && iVar7 != 1662215698)
				{
					if (func_98(uParam0, 4))
					{
						if ((_0xc488b8c0e52560d8(Global_34) || _0x2dc0e8dcbd3546e9(Global_34)) && !has_anim_event_fired(Global_34, 1944546609))
						{
							return;
						}
						if (!_0x68821369a2ceadd5(Global_34, 796456488))
						{
							_0xd65fdc686a031c83(Global_34, 796456488, 2f);
							_0x6d07b371e9439019(Global_34);
						}
						return;
					}
				}
			}
			if (func_847(uParam0))
			{
				func_848(uParam0);
				func_873(uParam0, 0, &uVar0);
				func_872(uParam0);
				if (func_43(&(uParam0->f_1[1])))
				{
					func_44(uParam0->f_1[1], 1, 1);
				}
				if (func_874(iVar8))
				{
					uParam0->f_42 = 250;
					uParam0->f_1[1] = func_161("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, uParam0->f_42, uParam0->f_42 + 1, 1, 1073741824, 1704213876, 0);
					func_862(uParam0, uParam0->f_61, uParam0->f_62);
					func_170(&(uParam0->f_1[1]), -1067771379, 0, 1);
					func_452(&(uParam0->f_1[1]), 10, 1, 1);
					func_452(&(uParam0->f_1[1]), 11, 1, 1);
					func_162(&(uParam0->f_1[1]), 0, 1, 1);
				}
				else
				{
					uParam0->f_1[1] = func_161("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 250, 251, 1, 1073741824, 1704213876, 0);
					func_170(&(uParam0->f_1[1]), -1067771379, 0, 1);
					func_163(&(uParam0->f_1[1]), 1, 1);
					func_452(&(uParam0->f_1[1]), 10, 1, 1);
					func_452(&(uParam0->f_1[1]), 11, 1, 1);
					func_162(&(uParam0->f_1[1]), 0, 1, 1);
				}
				return;
			}
			if (has_anim_event_fired(Global_34, -563455375))
			{
				_0x5f217bc1190503d8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_874(iVar8))
			{
				if (!func_98(uParam0, 64))
				{
					if (func_296(&(uParam0->f_1[1]), 0))
					{
						if (func_589(&(uParam0->f_1[1]), 1) || is_control_pressed(0, 1138488863))
						{
							func_187(uParam0, 64);
							func_162(&(uParam0->f_1[1]), 0, 1, 1);
							func_162(&(uParam0->f_1[4]), 0, 1, 1);
						}
					}
				}
				if ((((((iVar8 == -1136843638 || iVar8 == -732326901) || iVar8 == 786205940) || iVar8 == -1141771998) || iVar8 == 364689687) || iVar8 == -842117252) || iVar8 == -1610298873)
				{
					if (uParam0->f_69 != 0)
					{
						if ((uParam0->f_69 == 1186037675 && has_anim_event_fired(Global_34, -1011038463)) || (uParam0->f_69 != 1186037675 && has_anim_event_fired(Global_34, 2024314131)))
						{
							if (does_entity_exist(uParam0->f_65))
							{
								if (network_has_control_of_entity(uParam0->f_65))
								{
									delete_object(&(uParam0->f_65));
								}
								else
								{
									network_request_control_of_entity(uParam0->f_65);
								}
							}
							if (!does_entity_exist(uParam0->f_65))
							{
								if (func_310(uParam0->f_61, -1588156645) && iVar8 != -842117252)
								{
									uParam0->f_65 = _create_weapon_object(func_352(uParam0->f_61, 0), 1, Global_35, true, 1f);
									set_entity_completely_disable_collision(uParam0->f_65, false, false);
									if (iVar8 == -1610298873)
									{
										set_anim_scene_entity(func_875(uParam0, iVar8), "DYNAMITE", uParam0->f_65, 0);
									}
								}
								else
								{
									uParam0->f_65 = create_object(uParam0->f_69, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, false);
									set_entity_completely_disable_collision(uParam0->f_65, false, false);
								}
								if (iVar8 == 786205940)
								{
									attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -1141771998 || iVar8 == -1610298873)
								{
									attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -842117252)
								{
									attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -1136843638 && !is_ped_male(Global_34))
								{
									attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else
								{
									attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
							}
						}
					}
					if (has_anim_event_fired(Global_34, 966057053))
					{
						if (does_entity_exist(uParam0->f_65))
						{
							if (network_has_control_of_entity(uParam0->f_65))
							{
								delete_object(&(uParam0->f_65));
							}
							else
							{
								network_request_control_of_entity(uParam0->f_65);
							}
						}
						if (!does_entity_exist(uParam0->f_65))
						{
							if (iVar8 == -732326901 || iVar8 == 364689687)
							{
								uParam0->f_65 = _create_weapon_object(-764310200, 1, Global_35, true, 1f);
							}
							else if (iVar8 == -1141771998)
							{
								uParam0->f_65 = _create_weapon_object(-1511427369, 1, Global_35, true, 1f);
							}
							else if (iVar8 == -842117252)
							{
								if (uParam0->f_61 == 963726415)
								{
									uParam0->f_65 = create_object(400517539, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, true);
								}
								else
								{
									uParam0->f_65 = create_object(-370340297, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, true);
								}
							}
							else if (iVar8 == -1610298873)
							{
								uParam0->f_65 = create_object(1974613782, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, true);
								if (iVar8 == -1610298873)
								{
									set_anim_scene_entity(func_875(uParam0, iVar8), "DYNAMITE", uParam0->f_65, 0);
								}
							}
							else
							{
								uParam0->f_65 = create_object(-655768729, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, false);
							}
						}
						set_entity_completely_disable_collision(uParam0->f_65, false, false);
						if (iVar8 == 786205940)
						{
							attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar8 == -1141771998 || iVar8 == -1610298873) || iVar8 == -842117252)
						{
							attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if (iVar8 == -1136843638 && !is_ped_male(Global_34))
						{
							attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (has_anim_event_fired(Global_34, 1394836706))
					{
						func_97(&(uParam0->f_65), &(uParam0->f_66));
					}
					if (has_anim_event_fired(Global_34, 1471149551))
					{
						if (!is_entity_dead(uParam0->f_67))
						{
							set_entity_visible(uParam0->f_67, true);
						}
					}
				}
				else if (iVar8 == 414472632 || iVar8 == -715814988)
				{
					if (has_anim_event_fired(Global_34, 966057053))
					{
						set_entity_visible(uParam0->f_63, true);
					}
				}
				if (has_anim_event_fired(Global_34, -61921192))
				{
					if (func_102(0) && !func_103())
					{
						func_571(uParam0->f_61, uParam0->f_62, 1, func_583(), uParam0->f_11);
						func_216(uParam0->f_61, 1, 0, 1, 0);
					}
					if (iVar8 == -842117252)
					{
						if (does_entity_exist(uParam0->f_65))
						{
							func_97(&(uParam0->f_65), &(uParam0->f_66));
						}
					}
					uParam0->f_22++;
					uParam0->f_27++;
					if ((!func_876(uParam0->f_61, uParam0->f_62, 0, func_583(), 0) || func_592(uParam0->f_61, 1, 0)) || uParam0->f_22 >= uParam0->f_26)
					{
						if (!func_102(0) || func_103())
						{
							uParam0->f_23 = func_100(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
							if (uParam0->f_11 == 2133510819)
							{
								func_106(func_105(-1108808256, -444296448), uParam0->f_27);
							}
							uParam0->f_27 = 0;
						}
						func_877(uParam0, iVar8, 0);
						return;
					}
				}
				if (!func_98(uParam0, 64))
				{
					if (!(func_296(&(uParam0->f_1[1]), 0) && is_control_pressed(0, 1138488863)))
					{
						if (has_anim_event_fired(Global_34, 596390595))
						{
							if (!func_102(0) || func_103())
							{
								uParam0->f_23 = func_100(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
								if (uParam0->f_11 == 2133510819)
								{
									func_106(func_105(-1108808256, -444296448), uParam0->f_27);
								}
								uParam0->f_27 = 0;
							}
							func_877(uParam0, iVar8, 1);
						}
					}
				}
				if (has_anim_event_fired(Global_34, 1290366555) && uParam0->f_22 < (uParam0->f_26 - 1))
				{
					func_162(&(uParam0->f_1[1]), 1, 1, 1);
					func_162(&(uParam0->f_1[4]), 1, 1, 1);
					func_219(uParam0, 64);
				}
				if (_0xb89fcff19dafff28(func_875(uParam0, iVar8), "player"))
				{
					if (!func_102(0) || func_103())
					{
						uParam0->f_23 = func_100(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
						if (uParam0->f_11 == 2133510819)
						{
							func_106(func_105(-1108808256, -444296448), uParam0->f_27);
						}
						uParam0->f_27 = 0;
					}
					func_877(uParam0, iVar8, 0);
				}
			}
			else if (func_115(&(uParam0->f_70), (IntToFloat(uParam0->f_42) / 1000f)))
			{
				if (!func_102(0) || func_103())
				{
					if (uParam0->f_23 == -1)
					{
						uParam0->f_23 = func_100(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
						if (uParam0->f_11 == 2133510819)
						{
							func_106(func_105(-1108808256, -444296448), 1);
						}
						if (uParam0->f_23 == -1)
						{
							func_877(uParam0, iVar8, 0);
						}
					}
					else if (func_579(uParam0->f_23))
					{
					}
					uParam0->f_23 = -1;
				}
				else
				{
					func_571(uParam0->f_61, uParam0->f_62, 1, func_583(), uParam0->f_11);
					func_216(uParam0->f_61, 1, 1, 1, 0);
				}
				uParam0->f_26 = -1;
				uParam0->f_27 = 0;
				func_97(&(uParam0->f_65), &(uParam0->f_66));
				uParam0->f_44 = 0;
				bVar9 = true;
				if (!func_876(uParam0->f_61, uParam0->f_62, 0, func_583(), 0) || func_592(uParam0->f_61, 1, 0))
				{
					bVar9 = false;
				}
				func_877(uParam0, iVar8, bVar9);
			}
			break;
		case 0:
			if (func_94())
			{
				func_95(0);
			}
			if (func_847(uParam0))
			{
				func_92(uParam0);
				func_848(uParam0);
			}
			break;
		case 13:
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_61), 1, 0, 0, 0);
			func_857(0);
			if (does_entity_exist(uParam0->f_67))
			{
				if (has_anim_event_fired(Global_34, -2015667492))
				{
					func_97(&(uParam0->f_67), &(uParam0->f_68));
				}
			}
			if (!func_296(&(uParam0->f_1[2]), 0))
			{
				func_162(&(uParam0->f_1[2]), 1, 1, 1);
				func_163(&(uParam0->f_1[2]), 0, 1);
			}
			if (!func_296(&(uParam0->f_1[4]), 0))
			{
				func_162(&(uParam0->f_1[4]), 1, 1, 1);
				func_163(&(uParam0->f_1[4]), 1, 1);
			}
			if (func_863(&(uParam0->f_1[2]), 1))
			{
				func_92(uParam0);
				func_137(&(uParam0->f_70));
				func_99(uParam0, 14);
				return;
			}
			else if (func_165(&(uParam0->f_1[4]), 1))
			{
				func_92(uParam0);
				func_97(&(uParam0->f_65), &(uParam0->f_66));
				func_97(&(uParam0->f_63), &(uParam0->f_64));
				func_97(&(uParam0->f_67), &(uParam0->f_68));
				iVar10 = _0x569f1e1237508deb(Global_34);
				if (iVar10 != -518407211 && iVar10 != 1662215698)
				{
					set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
				}
				iVar8 = func_405(uParam0->f_61, -1636519629);
				iVar11 = func_875(uParam0, iVar8);
				remove_anim_scene_entity(iVar11, "player", Global_34);
				func_93(uParam0, 0);
				func_864("Exit", "SSCRFT_Sounds", 1);
				if (func_98(uParam0, 4))
				{
					func_99(uParam0, 1);
				}
				else
				{
					func_99(uParam0, 0);
				}
				return;
			}
			else if (func_454(&(uParam0->f_1[1]), 1))
			{
				func_162(&(uParam0->f_1[4]), 0, 1, 1);
				func_162(&(uParam0->f_1[2]), 0, 1, 1);
				func_162(&(uParam0->f_1[1]), 0, 1, 1);
				iVar8 = func_405(uParam0->f_61, -1636519629);
				iVar12 = func_875(uParam0, iVar8);
				if (iVar12 != 0)
				{
					reset_anim_scene(iVar12, "pl_craft");
					load_anim_scene(iVar12);
				}
				func_137(&(uParam0->f_70));
				func_219(uParam0, 64);
				func_99(uParam0, 12);
				return;
			}
			if (func_456(&(uParam0->f_1[4]), 1))
			{
				if (!func_240(&(uParam0->f_70)))
				{
					func_117(&(uParam0->f_70));
				}
				else if (func_115(&(uParam0->f_70), 0.1f))
				{
					func_288(&(uParam0->f_1[4]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_240(&(uParam0->f_70)))
				{
					func_137(&(uParam0->f_70));
				}
				func_288(&(uParam0->f_1[4]), "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_61), 1, 0, 0, 0);
			func_857(0);
			if (does_entity_exist(uParam0->f_67))
			{
				if (has_anim_event_fired(Global_34, -2015667492))
				{
					func_97(&(uParam0->f_67), &(uParam0->f_68));
				}
			}
			iVar8 = func_405(uParam0->f_61, -1636519629);
			iVar13 = func_875(uParam0, iVar8);
			if ((iVar13 == 0 || (!_does_anim_scene_exist(iVar13) || _0xf94692eb9dc15d74(iVar13, 0))) || has_anim_event_fired(Global_34, -1208591336))
			{
				func_97(&(uParam0->f_65), &(uParam0->f_66));
				func_97(&(uParam0->f_63), &(uParam0->f_64));
				func_97(&(uParam0->f_67), &(uParam0->f_68));
				iVar14 = _0x569f1e1237508deb(Global_34);
				if (iVar14 != -518407211 && iVar14 != 1662215698)
				{
					set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
				}
				remove_anim_scene_entity(iVar13, "player", Global_34);
				if (!func_860(uParam0))
				{
					func_99(uParam0, 15);
				}
			}
			break;
		case 16:
			iVar15 = func_878();
			if (iVar15 == player_id())
			{
				uParam0->f_23 = func_100(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
				func_99(uParam0, 17);
			}
			else if (_network_is_player_index_valid(iVar15) && network_is_player_active(iVar15))
			{
				func_99(uParam0, 10);
			}
			else if (func_115(&(uParam0->f_70), 5f))
			{
				func_137(&(uParam0->f_70));
				func_99(uParam0, 10);
			}
			break;
		case 17:
			if (!func_579(uParam0->f_23) && func_879(1))
			{
				if (func_845(uParam0->f_23) != 3)
				{
					func_880(0);
				}
				else
				{
					func_881(uParam0->f_61);
					_0xd65fdc686a031c83(Global_34, -752808711, 1f);
					func_358(uParam0->f_61, 1);
					func_882(uParam0);
					if (func_310(uParam0->f_61, -2011345500))
					{
						func_403(-1266356243, 0, 255, 0, 0);
					}
					uParam0->f_25 = uParam0->f_61;
				}
				func_99(uParam0, 15);
			}
			else
			{
				func_883(1);
				_uiprompt_disable_prompts_this_frame();
				disable_all_control_actions(2);
			}
			break;
		case 1:
			if (func_94())
			{
				func_95(0);
			}
			if (func_847(uParam0))
			{
				if (func_43(&(uParam0->f_1[0])))
				{
					func_162(&(uParam0->f_1[0]), 0, 1, 1);
				}
				func_848(uParam0);
			}
			break;
		case 18:
			if (func_94())
			{
				func_95(0);
			}
			if (func_847(uParam0))
			{
				func_848(uParam0);
			}
			if (func_98(uParam0, 2))
			{
				clear_ped_tasks(Global_34, 1, 0);
			}
			func_93(uParam0, 0);
			_databinding_remove_data_entry(uParam0->f_28);
			Global_1913694->f_1576 = 0;
			terminate_this_thread();
			break;
	}
}

void func_582(var uParam0)
{
	if (uParam0->f_49.f_62 == 278772510)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_106(func_351(1281481195), 1);
	}
	_0x378d3b1b11d9385b(uParam0->f_49.f_61);
	func_157(2);
	if (func_102(0) && !func_103())
	{
		func_571(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, func_583(), uParam0->f_49.f_11);
	}
	func_44(uParam0->f_135[3], 1, 1);
	if (bVar0)
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (func_166(uParam0->f_125, 16384))
		{
			iVar1 = round((IntToFloat(iVar1) * 0.8f));
			iVar2 = round((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_135[3] = func_161("CRAFT_FASTER", 1138488863, 2, 0, 0, 6, iVar1, iVar2, 35, 1073741824, 1704213876, 0);
	}
	else
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (func_166(uParam0->f_125, 16384))
		{
			iVar1 = round((IntToFloat(iVar1) * 0.8f));
			iVar2 = round((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_135[3] = func_161("CRAFT_FASTER", 1138488863, 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824, 1704213876, 0);
	}
	func_573(uParam0, 3, 0, 0);
	func_162(&(uParam0->f_135[3]), 0, 1, 1);
	func_170(&(uParam0->f_135[3]), -1067771379, 0, 1);
	uParam0->f_149 = get_game_timer();
	if (does_entity_exist(uParam0->f_133))
	{
		delete_object(&(uParam0->f_133));
	}
	uParam0->f_133 = create_object(func_572(uParam0->f_49.f_61), Global_35, false, false, false, false, true);
	if (_0x3bbdd6143ff16f98(Global_34, uParam0->f_133, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
	{
	}
	set_entity_visible(uParam0->f_133, false);
	_set_object_burn_level(uParam0->f_133, 0f, true);
	uParam0->f_161 = 3;
	func_92(&(uParam0->f_49));
	func_99(&(uParam0->f_49), 0);
	func_584();
	_0xac84686c06184b0d("cooking", "Player_Campfire_Scenes");
	func_199(uParam0, 9);
}

bool func_583()
{
	iVar0 = func_244(7);
	if (!is_ped_injured(iVar0))
	{
		if (func_193(Global_34, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_584()
{
	if (!func_496())
	{
		return 0;
	}
	if (!func_262(&iVar0))
	{
		return 0;
	}
	if (!func_497(iVar0))
	{
		return 0;
	}
	iVar1 = func_263(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_499(&iVar2, 1);
	return func_500(iVar0, iVar2);
}

bool func_585(int iParam0)
{
	return func_277(Global_1940144->f_38, iParam0);
}

void func_586(var uParam0, int iParam1)
{
	if (func_456(&(uParam0->f_135[3]), 1))
	{
		bVar0 = true;
	}
	if (has_anim_event_fired(Global_34, -1812847403))
	{
		if (_0x1252c029fc8ebb4d())
		{
			_0x9821b68cd3e05f2b("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			_0x709ba8c08c5c008d();
		}
	}
	if (has_anim_event_fired(Global_34, 1738621174))
	{
		if (!_0x1252c029fc8ebb4d())
		{
			_0x9821b68cd3e05f2b("distanceToFlame", 0f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			_0x5f217bc1190503d8("CRFT_SEAR_MEAT", 7f);
		}
	}
	switch (iParam1)
	{
		case 1412614124:
		case 2134236454:
			if (bVar0)
			{
				if (func_210(uParam0))
				{
					if (func_213(1868334347, 0.5f))
					{
						uParam0->f_149 = get_game_timer();
					}
				}
			}
			break;
		case -341412437:
		case -283636008:
			if (!bVar0)
			{
				if (func_210(uParam0))
				{
					if (func_213(-1169480623, 0.5f))
					{
						uParam0->f_149 = get_game_timer();
					}
				}
			}
			break;
		case 512684539:
		case 970934364:
			if (bVar0)
			{
				if (func_210(uParam0))
				{
					if (func_213(-348575163, 0.5f))
					{
						uParam0->f_149 = get_game_timer();
					}
				}
			}
			break;
		case -87088667:
		case -8536912:
			if (!bVar0)
			{
				if (func_210(uParam0))
				{
					if (func_213(-266297705, 0.5f))
					{
						uParam0->f_149 = get_game_timer();
					}
				}
			}
			break;
	}
}

void func_587(var uParam0)
{
	if (!func_43(&(uParam0->f_135[5])))
	{
		return;
	}
	if (!func_585(2))
	{
		func_162(&(uParam0->f_135[5]), 0, 1, 1);
		return;
	}
	if (func_579(uParam0->f_49.f_23))
	{
		func_162(&(uParam0->f_135[5]), 0, 1, 1);
		return;
	}
	func_590();
	func_162(&(uParam0->f_135[5]), 1, 1, 1);
}

void func_588(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_135[3] = func_161("CRAFT_FASTER", 1138488863, 2, 0, 0, 0, 7000, 10000, 25, 1073741824, 1704213876, 0);
		func_573(uParam0, 3, 0, 1);
		func_162(&(uParam0->f_135[3]), 0, 1, 1);
		func_170(&(uParam0->f_135[3]), -1067771379, 0, 1);
	}
	uParam0->f_135[7] = func_161("CAMP_REC_BACK", 992265328, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	uParam0->f_135[1] = func_161("CAMP_REC_BACK", 992265328, 1, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
	func_453(uParam0->f_135[1], "INPUT_PCRAFT_EXIT");
	func_163(&(uParam0->f_135[7]), 0, 1);
	func_170(&(uParam0->f_135[7]), -1067771379, 0, 1);
	func_170(&(uParam0->f_135[1]), -1067771379, 0, 1);
	func_452(&(uParam0->f_135[1]), 19, 1, 1);
	func_452(&(uParam0->f_135[1]), 20, 1, 1);
	func_452(&(uParam0->f_135[1]), 13, 1, 1);
	func_452(&(uParam0->f_135[7]), 13, 1, 1);
	func_162(&(uParam0->f_135[7]), 0, 1, 1);
	func_162(&(uParam0->f_135[1]), 0, 1, 1);
}

bool func_589(int iParam0, bool bParam1)
{
	if (bParam1 && !func_43(iParam0))
	{
		return false;
	}
	iVar0 = func_90(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_590()
{
	_0xc9caeaeec1256e54(func_884(2));
	_0xc9caeaeec1256e54(func_884(0));
	_0xc9caeaeec1256e54(func_884(1));
	_0xc9caeaeec1256e54(func_885(2));
	_0xc9caeaeec1256e54(func_885(0));
	_0xc9caeaeec1256e54(func_885(1));
}

void func_591(int iParam0, bool bParam1)
{
	if (bParam1 && !func_43(iParam0))
	{
		return;
	}
	iVar0 = func_90(iParam0);
	_uiprompt_restart_modes((*Global_1951255)[iVar0]->f_3);
}

bool func_592(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_225(iParam0, 0, 0) };
	return func_226(iParam0, &Var0, iParam1, 0, bParam2, -1, 0);
}

float func_593(int iParam0, bool bParam1)
{
	if (bParam1 && !func_43(iParam0))
	{
		return 0f;
	}
	iVar0 = func_90(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1951255)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
}

float func_594(float fParam0, float fParam1, float fParam2)
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

void func_595(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_296(&(uParam0->f_135[3]), 0))
		{
			if (((func_43(&(uParam0->f_135[3])) && (uParam0->f_49.f_61 == -1199896558 || !func_592(uParam0->f_49.f_61, 1, 0))) && !func_579(uParam0->f_49.f_23)) && func_876(uParam0->f_49.f_61, uParam0->f_49.f_62, 0, func_583(), 0))
			{
				func_162(&(uParam0->f_135[3]), 1, 1, 1);
			}
		}
	}
	if (!func_296(&(uParam0->f_135[7]), 0))
	{
		func_162(&(uParam0->f_135[7]), 1, 1, 1);
		func_163(&(uParam0->f_135[7]), 0, 1);
	}
	if (!func_296(&(uParam0->f_135[1]), 0))
	{
		func_162(&(uParam0->f_135[1]), 1, 1, 1);
	}
}

void func_596(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_44((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

void func_597(var uParam0)
{
	func_44(uParam0->f_135[3], 1, 1);
	iVar0 = 6000;
	iVar1 = 10000;
	if (func_166(uParam0->f_125, 16384))
	{
		iVar0 = round((IntToFloat(iVar0) * 0.8f));
		iVar1 = round((IntToFloat(iVar1) * 0.8f));
	}
	uParam0->f_135[3] = func_161("CRAFT_FASTER", 1138488863, 2, 0, 0, 6, iVar0, iVar1, 25, 1073741824, 1704213876, 0);
	func_573(uParam0, 3, 0, 0);
	func_170(&(uParam0->f_135[3]), -1067771379, 0, 1);
	if (func_102(0) && !func_103())
	{
		func_571(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, func_583(), uParam0->f_49.f_11);
	}
	func_162(&(uParam0->f_135[3]), 0, 1, 1);
	func_584();
	uParam0->f_149 = get_game_timer();
	_0xac84686c06184b0d("crafting", "Player_Campfire_Scenes");
	func_199(uParam0, 1);
}

bool func_598(int iParam0)
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

bool func_599(int iParam0)
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

bool func_600(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_601(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_227(iParam1);
		iVar5 = func_886(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
			{
				if (func_654(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_225(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_373(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_211(0);
			Var37 = { func_225(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_373(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_227(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
						{
							if (func_654(iParam0, iVar1, iVar2))
							{
								if (func_887(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

struct<4> func_602()
{
	Var0 = { func_372(0) };
	return func_373(856287005, Var0, -218846335, 0);
}

bool func_603(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_226(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return false;
	}
	if (!func_102(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_211(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_604(int iParam0, int iParam1)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (!func_601(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_602() };
	Var14 = { func_373(iParam0, Var10, iVar9, 0) };
	if (func_800(Var14, iParam1, 0))
	{
		if (func_888(iParam0))
		{
			if (func_889(325139909, &iVar18))
			{
				if (func_604(iVar18, 0))
				{
				}
			}
		}
		else if (func_890(iParam0))
		{
			if (func_889(325139909, &iVar19))
			{
				if (func_604(iVar19, 0))
				{
				}
			}
			if (func_889(-1189569496, &iVar20))
			{
				if (func_604(iVar20, 0))
				{
				}
			}
		}
		else if (func_891(iParam0))
		{
			if (func_889(325139909, &iVar21))
			{
				if (func_604(iVar21, 0))
				{
				}
			}
			if (func_889(-1189569496, &iVar22))
			{
				if (func_604(iVar22, 0))
				{
				}
			}
			if (func_889(-997150586, &iVar23))
			{
				if (func_604(iVar23, 0))
				{
				}
			}
		}
		else if (func_605(iParam0))
		{
			if (func_889(325139909, &iVar24))
			{
				if (func_604(iVar24, 0))
				{
				}
			}
			if (func_889(986998820, &iVar25))
			{
				if (func_604(iVar25, 0))
				{
				}
			}
			iVar26 = func_606(iParam0);
			if (func_104(iVar26, 0))
			{
				if (func_604(iVar26, 1))
				{
				}
			}
		}
		func_607();
		return true;
	}
	return false;
}

bool func_605(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (func_310(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_606(int iParam0)
{
	switch (iParam0)
	{
		case -1249891745:
			return 263080063;
		case -769274720:
			return -34331381;
		case 893370428:
			return -993578318;
		case 736792276:
			return 579268144;
		case -949205287:
			return 1104489688;
	}
	return 0;
}

int func_607()
{
	Var0 = { func_225(856287005, 0, 0) };
	Var5 = { func_373(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_227(856287005);
	if (_item_database_get_has_slot_info(iVar10, 0, &iVar11))
	{
		iVar14 = func_799(Var5, -415648720, 0, -1);
	}
	if (!func_104(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_886(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (_item_database_get_has_slot_info(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_799(Var5, iVar11, 0, -1);
			if (!func_104(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (((func_605(iVar14) || func_888(iVar14)) || func_890(iVar14)) || func_891(iVar14))
					{
					}
					else
					{
						Jump @309; //curOff = 220
						if (iVar11 == -1189569496)
						{
							if (func_890(iVar14) || func_891(iVar14))
							{
							}
							else
							{
								Jump @309; //curOff = 257
								if (iVar11 == -997150586)
								{
									if (func_891(iVar14))
									{
									}
									else
									{
										Jump @309; //curOff = 284
										if (iVar11 == 986998820)
										{
											if (func_605(iVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @349; //curOff = 312
												if (iVar11 == -1189569496)
												{
													if (!func_605(iVar14) && func_892(iVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (func_893(iVar11, &Var16, 1))
													{
														if (!func_800(Var16, 1, 0))
														{
														}
													}
												}
											}
											iVar9++;
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_608(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_38() == -1)
	{
		if (func_385(iParam0) && func_894(iParam0))
		{
			func_895(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_609(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_896(iParam0, iParam1);
	Var0 = { func_225(iParam0, 0, 1) };
	iVar5 = func_386(iParam0, &Var0, 0, 0);
	iVar6 = func_897(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_310(iParam0, -2051813666))
		{
			func_297(674, 1);
		}
		else if (func_38() == -1)
		{
			func_297(673, 0);
		}
	}
	if (func_226(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_610(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_898())
	{
		return;
	}
	switch (func_405(iParam0, -949239683))
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

void func_611(int iParam0)
{
	if (!func_260(iParam0))
	{
		return;
	}
	func_899(iParam0);
	func_900(iParam0);
}

void func_612(int iParam0)
{
	if (func_310(iParam0, -1522723129))
	{
		func_403(-848633709, 0, 255, 0, 0);
	}
	else if (func_310(iParam0, -283942357))
	{
		func_403(-981153234, 0, 255, 0, 0);
	}
	else if (func_310(iParam0, 683680997))
	{
		func_403(-756350192, 0, 255, 0, 0);
	}
	else if (func_310(iParam0, 1307628809))
	{
		func_403(603094518, 0, 255, 0, 0);
	}
}

bool func_613(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_225(iParam0, 0, 1) };
		if (func_376(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_377(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_373(iParam0, Var0, Var0.f_4, 0) };
				func_463(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_102(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_614(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_901(iParam0, iParam1);
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

bool func_614(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_617(iParam0))
	{
		return false;
	}
	if (!func_102(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return true;
}

bool func_615(int iParam0, int iParam1, int iParam2)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_384(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_902(iParam0, iParam1, iParam2);
	}
	Var1 = { func_225(iParam0, 0, 1) };
	Var6 = { func_373(iParam0, Var1, Var1.f_4, 0) };
	return func_603(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_616(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_353(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_38() == -1)
		{
			func_354(iVar0);
			if (iParam1 == 1248274121)
			{
				func_903(iVar0);
			}
		}
		if (!func_226(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_895(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_904(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_613(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || _is_weapon_binoculars(iVar0))
			{
				func_613(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_lasso(iVar0))
			{
				func_613(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_905())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_906(iVar0))
				{
					func_613(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_613(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_907(Global_34, 2, 0, 1);
				if ((((func_600(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_345(-1185145312, 1)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_34, iVar7);
				}
				if (func_600(iVar7) && func_345(-1185145312, 1))
				{
					if (!func_613(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_613(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_613(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_297(515, 1);
	}
	return true;
}

bool func_617(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_618(int iParam0, int iParam1, int iParam2)
{
	if (!func_617(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_34, iParam0);
	if (func_600(iVar4))
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
		func_627(func_908(iParam0), func_543(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_102(0))
	{
		if (func_614(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_615(iParam0, *iParam1, iParam2);
	}
	return false;
}

bool func_619()
{
	return false;
}

int func_620(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	if (func_38() == 0)
	{
		func_441(iParam0, 0);
		return 0;
	}
	iVar0 = func_909(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_910(iVar0, sParam4, iParam5, 0);
	}
	func_911(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_621(int iParam0)
{
}

void func_622(int iParam0)
{
}

void func_623(int iParam0)
{
}

void func_624(int iParam0)
{
}

void func_625()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_626(int iParam0, int iParam1)
{
	func_535(iParam0, iParam1, &uVar0);
}

void func_627(int iParam0, int iParam1, bool bParam2)
{
	func_449(iParam0, &iVar0, &iVar1);
	if (!func_450(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_725(iParam0, 1024))
	{
		return;
	}
	func_451(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 2;
}

void func_628(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_449(iParam0, &iVar0, &iVar1);
	if (!func_450(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_725(iParam0, 1024))
	{
		return;
	}
	func_451(iVar0, iVar1);
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

void func_629(int iParam0)
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

void func_630(int iParam0)
{
	if (func_38() != -1)
	{
		return;
	}
}

void func_631(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			break;
	}
}

void func_632(int iParam0, char* sParam1)
{
	sVar0 = func_912(Global_1903071->f_37);
	func_554(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_913(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_633(int iParam0, int iParam1)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = func_634(iParam1);
	if (!func_914(iParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = func_386(iParam0, &Var0, 0, 0);
	iVar6 = func_897(iParam0, 0, 0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

int func_634(int iParam0)
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

struct<2> func_635(int iParam0)
{
	return func_105(-1108808256, iParam0);
}

struct<2> func_636(int iParam0)
{
	if (func_235(iParam0, 0))
	{
		Var0 = { func_105(-1276738576, -1555359431) };
	}
	else if (func_235(iParam0, 2))
	{
		Var0 = { func_105(-1276738576, 307971639) };
	}
	else if (func_235(iParam0, 5))
	{
		Var0 = { func_105(-1276738576, 644069854) };
	}
	else if (func_235(iParam0, 1))
	{
		Var0 = { func_105(-1276738576, -97115714) };
	}
	else if (func_235(iParam0, 3))
	{
		Var0 = { func_105(-1276738576, -2143405780) };
	}
	else if (func_235(iParam0, 4))
	{
		Var0 = { func_105(-1276738576, 1455184052) };
	}
	return Var0;
}

bool func_637(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

void func_638(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_227(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_639(int iParam0)
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

int func_640()
{
	if (func_38() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

void func_641(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_227(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

struct<10> func_642(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_643(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_644(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= _0xd389a2549c4efb30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!_0x8750f69a720c2e41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_645(int iParam0)
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

int func_646(int iParam0)
{
	if (func_310(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_310(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_310(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_647(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_104(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_648(int iParam0)
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

bool func_649(int iParam0)
{
	iParam0 = func_419(iParam0);
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

bool func_650(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!_0x9a100f1cf4546629(iVar0))
	{
		return false;
	}
	if (_0xf8b48a361dc388ae(iVar0) == 2)
	{
		return false;
	}
	if (_0x8de41e9902e85756(iParam0))
	{
		return false;
	}
	if (_0xcdc25355c0d65963(iParam0))
	{
		return false;
	}
	return true;
}

struct<4> func_651()
{
	return Var0;
}

bool func_652()
{
	return (func_897(-1185145312, 0, 0, 0) > 0 && func_799(func_373(889965687, func_372(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_653(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_211(0);
	*uParam1 = { func_373(iParam0, func_374(0), iParam3, 0) };
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

bool func_654(int iParam0, int iParam1, int iParam2)
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

bool func_655(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_211(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_656(int iParam0)
{
	return func_310(iParam0, 1279601681);
}

bool func_657(int iParam0, int iParam1)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (func_398(iParam0))
	{
		return func_665(func_399(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

int func_658(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_360(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_659(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_915(uParam1->f_8, iParam0, iVar0, 2048) || func_915(uParam1->f_8, iParam0, iVar0, 32768)) || func_915(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_915(uParam1->f_8, iParam0, iVar0, 4) || func_915(uParam1->f_8, iParam0, iVar0, 256)) || func_915(uParam1->f_8, iParam0, iVar0, 65536)) || func_915(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_915(uParam1->f_8, iParam0, iVar0, 1) || func_915(uParam1->f_8, iParam0, iVar0, 8)) || func_915(uParam1->f_8, iParam0, iVar0, 65536)) || func_915(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_915(uParam1->f_8, iParam0, iVar0, 1) || func_915(uParam1->f_8, iParam0, iVar0, 16)) || func_915(uParam1->f_8, iParam0, iVar0, 2)) || func_915(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_915(uParam1->f_8, iParam0, iVar0, 8) || func_915(uParam1->f_8, iParam0, iVar0, 4096)) || func_915(uParam1->f_8, iParam0, iVar0, 256)) || func_915(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_660(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_661(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_916(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_916(iParam1, 2, 0, 0);
	return -1;
}

int func_662(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_916(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_663(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_917(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_664(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_665(int iParam0, int iParam1, bool bParam2)
{
	if (!func_637(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_670(iParam0, iParam1);
	}
	return true;
}

bool func_666(int iParam0, int iParam1)
{
	*iParam1 = func_918(iParam0, 1);
	return *iParam1 != 0;
}

bool func_667(int iParam0, int iParam1)
{
	*iParam1 = func_919(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_668()
{
	return Global_1915715->f_22477;
}

bool func_669(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_467(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_670(int iParam0, int iParam1)
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
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iScriptParam_3 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iScriptParam_6 < iScriptParam_3)
	{
		if (&Var0[iScriptParam_6] == iParam1)
		{
			iVar473 = Var0[iScriptParam_6]->f_35;
			iVar475 = 0;
			while (iScriptParam_7 < iScriptParam_5)
			{
				uVar472 = &Var0[iScriptParam_6]->f_36[iScriptParam_7];
				if (iScriptParam_4 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iScriptParam_4))
				{
					return true;
				}
				iVar475 = iScriptParam_7 + 1;
			}
		}
		iVar474 = iScriptParam_6 + 1;
	}
	return false;
}

int func_671(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_658(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_362(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_921(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_920(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_658(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_361(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_921("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_223(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_672(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_673(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_674(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_675(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_676(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_677(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_678(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_679(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_680(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_681(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_682(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_683(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_684(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_685(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_686(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_922(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_687(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_38() == -1)
	{
		if (func_385(iParam0))
		{
			iVar1 = _get_weapon_unlock(iParam0);
			bVar0 = _unlock_is_visible(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = _unlock_is_visible(iParam0);
	}
	return bVar0;
}

bool func_688(int iParam0, int iParam1, bool bParam2)
{
	if (!func_104(iParam0, 0))
	{
		return func_923(func_382(iParam0), iParam1, bParam2);
	}
	if (func_398(iParam0))
	{
		return func_670(func_399(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_38() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_924(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_689(int* iParam0, int iParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_690(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_925(iParam1, 1) && !func_926(iParam1, 1))
	{
		if (Global_1915715->f_20644)
		{
			func_921(_create_var_string(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (iParam2 == -570078785)
	{
		iVar0 = func_388(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_362((iVar1 + func_927(iParam0, iParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_921(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (iParam2 == -915411861)
	{
		iVar2 = func_388(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_361((iVar3 + func_927(iParam0, iParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_921("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam2 == 997808187)
	{
		return 1;
	}
	if (func_383(func_382(iParam1), 2))
	{
		if (!func_928(func_382(iParam1), iParam3, iParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_104(iParam1, 0))
	{
		if (!func_929(iParam1, iParam3, iParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_691(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_692(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_693(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_694(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_695(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_696(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_697(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_698(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_699(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_700(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_701(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_702(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_703(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_704(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_705(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_930(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

int func_706(int iParam0, bool bParam1)
{
	if (!func_383(iParam0, 2))
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

int func_707(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_931(iParam2, -372840566);
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
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_932(uParam1, iParam0, Var3);
	return 1;
}

bool func_708(int iParam0)
{
	return func_110(&(Global_1956200->f_1565), iParam0, 1);
}

int func_709(int iParam0)
{
	return func_933(func_708(iParam0));
}

bool func_710(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_711(int iParam0)
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
		func_934(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_935(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_712(int iParam0, var uParam1)
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

void func_713(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_264(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_264(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_264(iParam0, 1)])->f_11 && iParam1));
}

bool func_714(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_715(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

int func_716(int iParam0)
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

void func_717(var uParam0, int iParam1)
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

int func_718(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_936(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_937(uParam2, iParam0, Var1);
	return 1;
}

int func_719(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = _get_ped_damage(iVar0);
	iVar2 = func_938(iVar0);
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
			iVar6 = func_939(iVar5);
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

int func_720(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_825(0);
	if (does_entity_exist(iVar0))
	{
		iVar1 = func_940(iVar0, iParam0);
		if (iVar1 > 0)
		{
			if (iParam1 < iVar1)
			{
				iVar1 = iParam1;
			}
			iParam1 = (iParam1 - iVar1);
			func_941(&iVar0, iParam0, &iVar1, bParam3, iParam4, iParam5);
			iParam1 = (iParam1 + iVar1);
		}
	}
	iParam1 = func_942(player_ped_id(), iParam0, iParam1, bParam2, iParam5);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_721(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_347(iParam0, 0, 0, 0);
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
		if (!func_214(iParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_943(iParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_944(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_943(iParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_217("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_722(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_723(int iParam0)
{
	if (func_725(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_724(int iParam0)
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

bool func_725(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_726(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_727()
{
	if (!func_525())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_728(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return true;
	}
	if (iParam0 == 6 && iParam1 == 4)
	{
		return true;
	}
	return false;
}

bool func_729(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_730(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_384(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_945(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_731(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_373(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_732(int iParam0)
{
	if (func_104(iParam0, 0))
	{
		if (func_310(iParam0, -1242251796))
		{
			if (func_310(iParam0, 2060589226))
			{
				return func_946();
			}
			return func_947();
		}
		else if (func_310(iParam0, 1919582297))
		{
			return func_744();
		}
		else if (func_310(iParam0, 1647670816))
		{
			return func_948();
		}
		else if (func_310(iParam0, 1147021565))
		{
			return func_747();
		}
	}
	if (Global_1940144->f_12)
	{
		return func_947();
	}
	else
	{
		return func_747();
	}
	return func_747();
}

bool func_733(int iParam0)
{
	return (iParam0 == 1401465909 || iParam0 == -1733092640);
}

int func_734()
{
	return 234350720;
}

bool func_735(int iParam0)
{
	if ((((((((((func_310(iParam0, 1147021565) || func_310(iParam0, -136654233)) || func_310(iParam0, -524514947)) || func_310(iParam0, -1238310989)) || func_310(iParam0, 1765172170)) || func_310(iParam0, 1490540191)) || func_310(iParam0, 1573112293)) || func_310(iParam0, -1242251796)) || func_310(iParam0, 1919582297)) || func_310(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return true;
	}
	return false;
}

int func_736()
{
	return 234086528;
}

int func_737()
{
	return 234339573;
}

int func_738()
{
	return 226211840;
}

int func_739()
{
	return 234596496;
}

int func_740()
{
	return 150191252;
}

int func_741()
{
	return 217554935;
}

int func_742()
{
	return 234596352;
}

int func_743()
{
	return 167247871;
}

int func_744()
{
	return 99859463;
}

int func_745()
{
	return 233516164;
}

int func_746()
{
	return 232407015;
}

int func_747()
{
	return 234339543;
}

int func_748()
{
	return 234348672;
}

bool func_749(int iParam0)
{
	return func_277(Global_1940144->f_7, iParam0);
}

bool func_750(bool bParam0)
{
	if (func_749(1))
	{
		if (bParam0)
		{
			func_217("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_749(2) && get_game_timer() >= Global_17388)
	{
		if (bParam0)
		{
			iVar0 = func_949(Global_34);
			if (iVar0 != 0)
			{
				if (_0x9a100f1cf4546629(iVar0))
				{
					func_217("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_217("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_749(4194304))
	{
		return false;
	}
	return true;
}

bool func_751(bool bParam0, bool bParam1)
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
			func_217("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_752(bool bParam0, int iParam1, bool bParam2)
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
					func_217("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				if (bParam0)
				{
					func_217("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_166(iParam1, 32) && !is_ped_on_mount(Global_34))
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

bool func_753(int iParam0, bool bParam1)
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

int func_754(int iParam0, int iParam1)
{
	if (!func_121(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_950(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_951(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_952(iVar1);
			}
			break;
		case 3:
			iVar3 = func_953(iVar5);
			iVar4 = func_954(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_955(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_755(int iParam0, int iParam1, bool bParam2)
{
	return !_0x375f5870a7b8bec1(func_757(func_956(iParam0, iParam1, bParam2)));
}

struct<8> func_756(int iParam0, int iParam1)
{
	return func_956(iParam0, iParam1, 1);
}

char* func_757(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_758(int iParam0, int iParam1)
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

bool func_759(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_760(int iParam0)
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
			else if (func_2(Global_17411.f_2966.f_1[iVar1]->f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_2((*Global_1211392->f_48[iParam0])[iVar2]->f_1))
					{
					}
					else
					{
						fVar0 = func_957(Global_17411.f_2966.f_1[iVar1]->f_1, (*Global_1211392->f_48[iParam0])[iVar2]->f_1);
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
	if (func_958(4))
	{
		return false;
	}
	if (func_763())
	{
		return true;
	}
	if (func_959())
	{
		return false;
	}
	if (func_960(1, 255))
	{
		return false;
	}
	if (func_121(func_961()) && Global_1211392->f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_761(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && func_345(&(Global_1211392->f_48[iParam0]->f_18[iVar0]), 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_762(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && func_962(&(Global_1211392->f_48[iParam0]->f_18[iVar0])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_763()
{
	return func_963(func_120(0));
}

bool func_764(int iParam0, int iParam1, bool bParam2)
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

int func_765()
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
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_448(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_34, true)) && !(is_ped_in_any_vehicle(Global_34, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (_is_weapon_binoculars(iVar0))
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_448(iVar0)) || _is_weapon_lasso(iVar0))
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

int func_766(int iParam0)
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

void func_767(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_964(iParam0);
	iVar1 = func_766(iVar0);
	if (iVar1 != iParam0)
	{
		func_965(iVar1, 4);
	}
	if (!func_966(iParam0))
	{
		return;
	}
	if (func_967(iParam0))
	{
		return;
	}
	func_965(iParam0, 4);
	func_968(iParam0, bParam1);
	if (!func_969(iParam0))
	{
		func_970(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_66(0, 0, 1))
		{
			func_971(1, 6);
		}
	}
}

bool func_768(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_769(int iParam0)
{
	Var0.f_1 = 20;
	if ((func_310(iParam0, 1573112293) || func_310(iParam0, 672467738)) || func_310(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_320(iParam0) == 2085633299)
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
				fVar30 = func_972(0, Var22.f_2);
				func_973(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_972(2, Var22.f_2);
				func_974(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_972(1, Var22.f_2);
				func_975(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_839(to_float(Var22.f_2), Var22.f_5);
				func_840(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_839(to_float(Var22.f_2), Var22.f_5);
				func_840(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_839(to_float(Var22.f_2), Var22.f_5);
				func_840(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_842(to_float(Var22.f_3), Var22.f_4);
				func_843(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_842(to_float(Var22.f_3), Var22.f_4);
				func_843(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_842(to_float(Var22.f_3), Var22.f_4);
				func_843(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_842(to_float(Var22.f_3), Var22.f_4);
				func_843(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_842(to_float(Var22.f_3), Var22.f_4);
				func_843(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_842(to_float(Var22.f_3), Var22.f_4);
				func_843(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_841(to_float(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_310(iParam0, -537818634))
		{
			func_106(func_557(-704089207), 1);
		}
		if (func_310(iParam0, -1457797660))
		{
			func_106(func_557(-1909697259), 1);
		}
		if (bVar38)
		{
			func_106(func_557(704570463), 1);
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

void func_770(int iParam0)
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

bool func_771()
{
	if (Global_1952637->f_3485)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1952637->f_3483)) < 1250)
	{
		return true;
	}
	if (func_976())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return true;
	}
	return false;
}

int func_772(int iParam0)
{
	iVar0 = func_227(iParam0);
	if (((iVar0 == 81053684 || iVar0 == -525676072) || func_310(iParam0, 160827531)) || func_310(iParam0, -1303648999))
	{
		return 1;
	}
	return 0;
}

void func_773(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_774(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_262(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_775(int iParam0)
{
	if (-1829635046 == func_977(81053684))
	{
		if (func_262(iParam0))
		{
			return true;
		}
	}
	else if (func_292(-525676072, iParam0) || func_310(func_978(1742327865), -1303648999))
	{
		if (func_262(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_776()
{
	iVar0 = 1549701178;
	switch (func_765())
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

int func_777()
{
	iVar0 = 614608656;
	switch (func_765())
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

int func_778()
{
	iVar0 = -1832677570;
	switch (func_765())
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

int func_779()
{
	iVar0 = 1623252156;
	switch (func_765())
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

void func_780(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

int func_781(int iParam0, bool bParam1)
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
				return func_979();
			}
			break;
	}
	return 0;
}

int func_782(int iParam0, bool bParam1)
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

int func_783(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (func_712(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_980(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_981(iParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1952637->f_3334[Global_1952637->f_3334.f_26] = iVar1;
	Global_1952637->f_3334.f_26++;
	*uParam1++;
	return 1;
}

void func_784()
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

bool func_785(int iParam0)
{
	return func_983(func_982(iParam0));
}

void func_786(bool bParam0, int iParam1)
{
	if (!func_104(iParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_540(iParam1, &Var0, 805880880, 0, 0, -401018458))
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
		iVar7 = func_984(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_985(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_757(func_986(iVar7));
		}
		else
		{
			iVar8 = func_546(iParam1);
			if (func_104(iVar8, 0))
			{
				iParam1 = iVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = _create_var_string(0, func_543(iParam1));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_984(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_985(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_757(func_986(iVar7));
		}
		else
		{
			iVar9 = func_546(iParam1);
			if (func_104(iVar9, 0))
			{
				iParam1 = iVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = _create_var_string(0, func_543(iParam1));
		}
	}
	sVar10 = func_549(_create_var_string(10, sVar3, sVar5), iVar6);
	func_554(sVar10, Var0.f_1, get_hash_key(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_787(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_987();
	}
	if (bParam0)
	{
		func_435(8);
		func_435(512);
	}
	else
	{
		func_435(8);
		func_435(16);
	}
}

int func_788()
{
	return Global_1952637->f_1;
}

bool func_789(int iParam0, int iParam1)
{
	iVar0 = func_227(iParam1);
	iVar1 = func_227(iParam0);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (func_988(iParam1) && func_988(iParam0))
	{
		return true;
	}
	return false;
}

void func_790(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	func_989(iParam0, 0, 0, bParam3, bParam5);
	func_503(iParam1, 1, bParam2, iParam4, bParam3, bParam5);
}

void func_791()
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

void func_792(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if ((*iParam1 == 832230214 || *iParam1 == 30652334) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_227(&(uParam0->f_1[iVar0])) != 1882579758)
			{
				return;
			}
			iVar1 = func_990(&(uParam0->f_1[iVar0]));
			if (iVar1 != 0 && iVar1 != &Global_1952637->f_83[iParam2])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_991(*iParam1, iParam2))
		{
			*iParam1 = &Global_1952637->f_1675.f_1[iParam2];
			return;
		}
	}
	*iParam1 = &Global_1952637->f_83[iParam2];
}

void func_793(int iParam0)
{
	func_992(&(Global_1952637->f_2897), iParam0);
}

void func_794(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_993(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_795(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_796(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = iParam1;
	bVar1 = func_508(iVar0, 1);
	if (bParam3 && func_310(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_994(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_432(iParam2, 1))
	{
		case -1130352927:
			func_995(uParam0, iVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_996(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_997(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_998(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_999(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_1000(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_1001(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_1002(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_1003(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_1004(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_1005(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_1006(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_1007(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_1008(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_1009(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_1010(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_797(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (func_788() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_1011(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_1012(iParam0, func_432(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_798(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_430(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1013(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637->f_1675 != 491602716 || !func_985(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_310(Global_1952637->f_1675, -166674229) && (Global_1952637->f_1675 != 491602716 || !func_985(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637->f_1675 = 491602716;
			Global_1952637->f_1556 = 491602716;
			func_1014(-1, 0, 6);
			func_266(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_787(0, 1);
	}
}

int func_799(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1015(&uParam0, iParam4, bParam5, iParam6);
}

bool func_800(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_102(0))
	{
		return func_1016(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_380(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_211(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_801(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (func_1017(Global_34, iParam0, 0, 1) < 2f && _0xd543d3a8fde4f185(Global_34, iParam0))
	{
		return true;
	}
	return false;
}

bool func_802()
{
	if (!_unlock_is_unlocked(-1624899219))
	{
		func_471(2);
		return false;
	}
	if (!func_525())
	{
		func_471(9);
		return false;
	}
	if (Global_1051439->f_72[34]->f_1 & 128 != 0)
	{
		func_471(3);
		return false;
	}
	Var0 = { func_120(0) };
	if (func_121(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_531(player_id(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_1018(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_754(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_755(iVar4, 461218520, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_471(iVar2);
			return false;
		}
	}
	if (func_1019())
	{
		func_471(4);
		return false;
	}
	if (func_960(4, network_player_id_to_int()) && Global_1051439->f_72[34]->f_49 & 1073741824 == 0)
	{
		func_471(5);
		return false;
	}
	if (func_1020(131072, 255))
	{
		func_471(7);
		return false;
	}
	if (func_1021())
	{
		func_471(8);
		return false;
	}
	return true;
}

bool func_803(int iParam0, int iParam1)
{
	if (((is_ped_in_combat(Global_34, 0) || is_ped_in_melee_combat(Global_34)) || func_166(iParam1, 1024)) && _0x336b3d200ab007cb(Global_34, Global_35, iParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_804(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 32 != 0;
	}
	return func_1020(32, iParam0);
}

bool func_805(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

void func_806(bool bParam0)
{
	if (bParam0)
	{
		func_1022(4);
	}
	else
	{
		func_516(4);
	}
}

void func_807(bool bParam0)
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

bool func_808()
{
	return Global_1915715->f_20643;
}

int func_809(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_1023())
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

bool func_810(int iParam0, int iParam1, int iParam2)
{
	return func_277((*Global_1196567)[iParam2][iParam0], iParam1);
}

int func_811(var uParam0, struct<21> Param1)
{
	if (!func_1024(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

int func_812(int iParam0, int iParam1)
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

int func_813(int iParam0)
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

int func_814(int iParam0)
{
	if (!func_104(iParam0, 0))
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

bool func_815(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
	}
	if (func_310(iParam0, -393037696))
	{
		return true;
	}
	return false;
}

int func_816(int iParam0, int iParam1)
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

char* func_817(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_543(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_818(int iParam0)
{
	if (func_227(iParam0) == -126813555 || func_227(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_819(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_545(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

void func_820(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_821(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_211(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_822(int iParam0)
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

int func_823(var uParam0, int iParam1)
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

int func_824(int iParam0)
{
	iVar0 = func_227(iParam0);
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

int func_825(int iParam0)
{
	return _0xf49f14462f0ae27c(get_player_index());
}

int func_826(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_347(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_1025(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_1026(iParam1, bParam4));
	}
	return iVar0;
}

void func_827()
{
	if (!func_104(Global_1940311->f_10893, 0))
	{
		Global_1940311->f_6 = 0;
	}
	else if ((((func_405(Global_1940311->f_10893, 1224357681) != 0 && Global_1940311->f_10892 != 0) && Global_1940311->f_10892 != -2074770370) && !Global_1915715->f_20638) && !Global_1915715->f_22504.f_1)
	{
		Global_1940311->f_6 = 1;
	}
	else
	{
		Global_1940311->f_6 = 0;
	}
}

void func_828(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_48))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_48 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_48 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_48);
	}
	if (!_does_anim_scene_exist(uParam0->f_49))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_49 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_49 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_49);
	}
	if (!_does_anim_scene_exist(uParam0->f_50))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_50 = _create_anim_scene("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_50 = _create_anim_scene("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_50);
	}
	if (!_does_anim_scene_exist(uParam0->f_51))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_51 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_51 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_51);
	}
	if (!_does_anim_scene_exist(uParam0->f_52))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_52 = _create_anim_scene("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_52 = _create_anim_scene("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_52);
	}
	if (!_does_anim_scene_exist(uParam0->f_53))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_53 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_53 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_53);
	}
	if (!_does_anim_scene_exist(uParam0->f_54))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_54 = _create_anim_scene("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_54 = _create_anim_scene("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_54);
	}
	if (!_does_anim_scene_exist(uParam0->f_55))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_55 = _create_anim_scene("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_55 = _create_anim_scene("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_55);
	}
	if (!_does_anim_scene_exist(uParam0->f_56))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_56 = _create_anim_scene("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_56 = _create_anim_scene("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_56);
	}
}

bool func_829(char* sParam0)
{
	return !is_string_null_or_empty(sParam0);
}

bool func_830(var uParam0, var uParam1)
{
	if (_does_anim_scene_exist(*uParam1))
	{
		if (!_is_anim_scene_loaded(*uParam1, true, false))
		{
			if (_is_anim_scene_loading(*uParam1, true))
			{
				return false;
			}
			else
			{
				load_anim_scene(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_828(uParam0);
		return false;
	}
	return true;
}

int func_831(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_102(0))
	{
		return 0;
	}
	else if (func_103())
	{
		return 0;
	}
	iVar0 = -1;
	if (Global_1915715->f_20638)
	{
		iVar0 = Global_1915715->f_20241;
	}
	if (!func_929(iParam0, 1, iParam1, &iVar32, &uVar36, bParam3, 0, 0))
	{
		iVar34 = iVar32;
		return 0;
	}
	if (func_365(iParam0, iParam1, &Var1, &iVar35, 1, 0))
	{
		iVar38 = 0;
		while (iVar38 < iVar35)
		{
			iVar34 = &Var1[iVar38];
			iVar37 = func_363(iVar0, iVar34);
			if (iVar37 != 0)
			{
				bParam3 = false;
			}
			if (func_104(iVar34, 0))
			{
				if (iVar34 == 2084597891)
				{
					func_1027(Var1[iVar38]->f_1, 0, 0, bParam2, 0);
				}
				else if (bParam3)
				{
					if (func_366(iVar34) || func_367(iVar34))
					{
						if (!func_345(iVar34, Var1[iVar38]->f_1))
						{
							iVar39 = func_1028(7, iVar34, Var1[iVar38]->f_1);
						}
						func_306(iVar34, iVar39, 562618531, 0, 0);
						Var1[iVar38]->f_1 = (Var1[iVar38]->f_1 - iVar39);
						if (Var1[iVar38]->f_1 > 0)
						{
							if (!func_345(iVar34, Var1[iVar38]->f_1))
							{
								func_1029(iVar34, Var1[iVar38]->f_1);
							}
							if (func_345(iVar34, Var1[iVar38]->f_1))
							{
								func_214(iVar34, Var1[iVar38]->f_1, bParam2, -142743235);
							}
						}
					}
					else
					{
						if (func_371(iVar34) > 0)
						{
							func_1030(iVar34);
							Var1[iVar38]->f_1 = (Var1[iVar38]->f_1 - 1);
						}
						if (Var1[iVar38]->f_1 > 0)
						{
							if (func_370(7, iVar34) > 0)
							{
								func_1031(7, iVar34, Var1[iVar38]->f_1);
								Var1[iVar38]->f_1 = (Var1[iVar38]->f_1 - func_1031(7, iVar34, Var1[iVar38]->f_1));
							}
						}
						if (Var1[iVar38]->f_1 > 0)
						{
							func_214(iVar34, Var1[iVar38]->f_1, bParam2, 562618531);
						}
					}
				}
				else if (iVar37 == 0)
				{
					if (func_366(iVar34) || func_367(iVar34))
					{
						if (!func_345(iVar34, Var1[iVar38]->f_1))
						{
							func_1029(iVar34, Var1[iVar38]->f_1);
						}
					}
					func_214(iVar34, Var1[iVar38]->f_1, bParam2, 562618531);
				}
				else
				{
					func_1032(iVar34, iVar37, Var1[iVar38]->f_1, 562618531);
				}
				iVar40 = func_766(iVar34);
				if (func_966(iVar40))
				{
					iVar41 = func_1033(iVar40);
					func_106(func_105(-333926856, iVar41), Var1[iVar38]->f_1);
				}
			}
			iVar38++;
		}
		return 1;
	}
	return 0;
}

int func_832(int iParam0)
{
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_833(int iParam0, bool bParam1)
{
	Var0 = { func_225(iParam0, 0, 0) };
	return func_386(iParam0, &Var0, 0, bParam1);
}

int func_834(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

float func_835(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = to_float(get_entity_health(Global_34));
			fVar1 = to_float(get_entity_max_health(Global_34, false));
			break;
		case 1:
			fVar0 = _get_ped_stamina(Global_34);
			fVar1 = _get_ped_max_stamina(Global_34);
			break;
		case 2:
			fVar0 = _0xa81d24ae0af99a5e(get_player_index());
			fVar1 = _0x592f58bc4d2a2cf3(get_player_index(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_836(float fParam0)
{
	iVar0 = player_ped_id();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = to_float(_0x16f2c8c084ab2092(iVar0));
	}
	iVar1 = func_1034(2);
	func_1035((fParam0 * IntToFloat(iVar1)), 0);
}

void func_837(float fParam0, bool bParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = to_float(10);
	}
	iVar0 = func_1036(2);
	func_1037((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_838(float fParam0)
{
	iVar0 = player_ped_id();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = to_float(_0xfc3b580c4380b5b7(iVar0));
	}
	iVar1 = func_1038(2);
	func_1039((fParam0 * IntToFloat(iVar1)), 0);
}

float func_839(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_840(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_1040(iParam0, fParam1, 1);
	}
	func_1042(iParam0, (func_1041(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_841(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_1043())
	{
		func_1044(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17411.f_55.f_2439.f_41++;
		if (5 == Global_17411.f_55.f_2439.f_41)
		{
			func_297(109, 0);
		}
	}
}

float func_842(float fParam0, int iParam1)
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

int func_843(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(player_ped_id()))
	{
		return 0;
	}
	return func_1045(iParam0, fParam1, bParam2, bParam3);
}

void func_844(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam2 || func_310(iParam0, -537818634))
	{
		func_106(func_557(-704089207), 1);
	}
	if (func_310(iParam0, -1457797660))
	{
		func_106(func_557(-1909697259), 1);
	}
	if (func_310(iParam0, 1573112293))
	{
		func_1046(func_766(iParam0), 1);
	}
	if (func_310(iParam0, 1939071949))
	{
		func_106(func_105(1368284188, -939665347), 1);
	}
	if (func_310(iParam0, 1992556171))
	{
		func_106(func_557(-1295035230), 1);
	}
	if (func_310(iParam0, 1239889275))
	{
		func_106(func_557(905765416), 1);
	}
	switch (iParam0)
	{
		case -1921080134:
		case -635441454:
		case 1448771675:
			func_106(func_105(1368284188, -2049431929), 1);
			break;
	}
	switch (iParam0)
	{
		case -611782825:
			func_106(func_105(1368284188, -1875859641), 1);
			break;
		case 299161628:
			func_106(func_105(1368284188, 304473406), 1);
			break;
		case -1907044919:
		case 688258043:
			func_106(func_105(1368284188, 894597474), 1);
			break;
		case -541584777:
		case 206762213:
			func_106(func_105(1368284188, 2119695263), 1);
			break;
		case -653299524:
		case -486559882:
		case 376981280:
			func_106(func_105(1368284188, -1791969490), 1);
			break;
		case -324053813:
		case 998010398:
			func_106(func_105(1368284188, -155567636), 1);
			break;
		case -2042563684:
		case -1871448371:
		case -834705084:
		case -623409049:
			func_106(func_105(1368284188, 497247514), 1);
			break;
		case 1929383243:
		case 2036955137:
			func_106(func_105(1368284188, -868741806), 1);
			break;
		case -1635450397:
		case 1831763320:
			func_106(func_105(1368284188, -208442209), 1);
			break;
	}
	if (func_38() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_106(func_105(1368284188, 595572217), 1);
		}
	}
	if (bParam1)
	{
		func_106(func_557(704570463), 1);
	}
	func_1047(iParam0, iParam3);
}

int func_845(int iParam0)
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

bool func_846()
{
	return Global_1896738->f_382;
}

bool func_847(var uParam0)
{
	return func_98(uParam0, 1);
}

void func_848(var uParam0)
{
	func_219(uParam0, 1);
}

void func_849(var uParam0)
{
	func_95(1);
	func_99(uParam0, 4);
}

bool func_850(var uParam0)
{
	uParam0->f_74 = Global_1913694->f_1584;
	uParam0->f_73 = Global_1913694->f_1585;
	if (func_98(uParam0, 2))
	{
		Global_1913694->f_1576 = 0;
		uParam0->f_44 = 0;
		iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
		if (_databinding_is_data_id_valid((*Global_1913694)[0]->f_1))
		{
			_databinding_remove_data_entry((*Global_1913694)[0]->f_1);
		}
		uParam0->f_24 = func_1048(iVar0);
		uParam0->f_25 = func_1049(iVar0);
		func_1050(uParam0, uParam0->f_24, 1472825031);
		func_1050(uParam0, -1171462349, 1472825031);
		func_1050(uParam0, 1689071181, 1472825031);
		func_1050(uParam0, -1612693182, 1472825031);
		func_1050(uParam0, 1856073229, 1472825031);
		return true;
	}
	if (uParam0->f_43 == 0)
	{
		Global_1913694->f_1576 = 0;
		uParam0->f_44 = 0;
		func_1051(uParam0, 600942249);
		uParam0->f_43++;
		return false;
	}
	else if (uParam0->f_43 == 1)
	{
		func_1051(uParam0, -257768755);
		uParam0->f_43++;
		return false;
	}
	else
	{
		func_1051(uParam0, -214678071);
		uParam0->f_43 = 0;
	}
	uParam0->f_44 = 0;
	return true;
}

bool func_851(var uParam0)
{
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	if ((func_98(uParam0, 2) || func_98(uParam0, 65536)) && _databinding_is_data_id_valid(uParam0->f_28))
	{
		return true;
	}
	uParam0->f_28 = _databinding_add_data_container_from_path("", "CraftingDatastore");
	_databinding_add_data_hash(uParam0->f_28, "filter", func_1053(func_98(uParam0, 2), -583079595, func_1052(uParam0->f_41)));
	if (func_98(uParam0, 2))
	{
		_databinding_add_data_int(uParam0->f_28, "filterCount", 1);
		_databinding_add_data_int(uParam0->f_28, "filterIndex", 0);
		_databinding_add_data_hash(uParam0->f_28, "headerText", -1710561039);
	}
	else
	{
		_databinding_add_data_int(uParam0->f_28, "filterCount", 5 + 1);
		_databinding_add_data_int(uParam0->f_28, "filterIndex", uParam0->f_41);
	}
	_databinding_add_data_string(uParam0->f_28, "tipText", "");
	uParam0->f_40 = _databinding_add_ui_item_list(uParam0->f_28, "recipes_lines");
	_databinding_add_data_bool(uParam0->f_28, "variantVisible", false);
	_databinding_add_data_string(uParam0->f_28, "variantText", " ");
	_databinding_add_data_int(uParam0->f_28, "variantCount", 0);
	_databinding_add_data_int(uParam0->f_28, "variantIndex", 0);
	_databinding_add_data_bool(uParam0->f_28, "ShowRpgDescription", false);
	_databinding_add_data_bool(uParam0->f_28, "ShowRpgPlayer", false);
	_databinding_add_data_bool(uParam0->f_28, "ShowRpgHorse", false);
	_databinding_add_data_hash(uParam0->f_28, "RPGDescription", 0);
	_databinding_add_data_bool(uParam0->f_28, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_1054(uParam0->f_30[iVar0], &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_35[iVar0] = _databinding_add_data_container(uParam0->f_28, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		_databinding_add_data_string(&(uParam0->f_35[iVar0]), &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		_databinding_add_data_int(&(uParam0->f_35[iVar0]), &cVar1, 0);
		iVar0++;
	}
	return true;
}

bool func_852(var uParam0)
{
	bVar2 = func_583();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694->f_1576 - 1))
	{
		if (func_104((*Global_1913694)[iVar0]->f_6, 0))
		{
			func_1055(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 10)
			{
				uParam0->f_44 = iVar0 + 1;
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_44 = 0;
	if (uParam0->f_47 == 0)
	{
		func_219(uParam0, 128);
	}
	uParam0->f_45 = 0;
	return true;
}

void func_853(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_29))
	{
		uParam0->f_29 = _databinding_add_ui_item_list(uParam0->f_28, "recipes");
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_29);
	}
	uParam0->f_60 = 600942249;
	uParam0->f_59 = 0;
	uParam0->f_58 = 0;
}

bool func_854(var uParam0, bool bParam1)
{
	bVar2 = func_583();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694->f_1576 - 1))
	{
		if ((func_98(uParam0, 128) && (*Global_1913694)[iVar0]->f_2) || !func_98(uParam0, 128))
		{
			if (Global_1913694->f_1585 != 0)
			{
				uParam0->f_73 = Global_1913694->f_1585;
				bVar3 = func_310((*Global_1913694)[iVar0]->f_6, Global_1913694->f_1585);
				if (func_98(uParam0, 16384) == bVar3)
				{
				}
				else
				{
					func_1055(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_44 = iVar0 + 1;
						return false;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_44 = 0;
				if (!func_98(uParam0, 16384) && Global_1913694->f_1585 != 0)
				{
					func_187(uParam0, 16384);
					return false;
				}
				uParam0->f_45 = 0;
				func_219(uParam0, 16384);
				return true;
			}
		}
	}
}

bool func_855(var uParam0, bool bParam1)
{
	func_187(uParam0, 256);
	if (bParam1 && _is_app_active(-1624772174))
	{
		if (_uistatemachine_request_transition(-1624772174, 1014850361))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = _launch_app_by_hash(-1624772174);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_856(var uParam0)
{
	bVar2 = func_583();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694->f_1576 - 1))
	{
		func_1056(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_44 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	func_219(uParam0, 512);
	uParam0->f_44 = 0;
	return true;
}

void func_857(bool bParam0)
{
	disable_control_action(0, 130948705, false);
	disable_control_action(0, 42190210, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -2131587435, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, -399233038, false);
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 1618006066, false);
	disable_control_action(0, -1304887797, false);
	iVar0 = func_1057(Global_34);
	if (!is_entity_dead(iVar0))
	{
		set_ped_max_move_blend_ratio(iVar0, 1f);
	}
	if (bParam0)
	{
		disable_control_action(0, -1860390754, false);
		disable_control_action(0, 1141111167, false);
		disable_control_action(0, -1460216218, false);
		disable_control_action(0, 1669958966, false);
		disable_control_action(0, -1666616423, false);
	}
}

void func_858(var uParam0)
{
	func_92(uParam0);
	func_1058(uParam0, 1);
	uParam0->f_1[2] = func_161("CAMP_REC_QUIT", 814057702, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	func_162(&(uParam0->f_1[2]), 1, 1, 1);
	uParam0->f_1[1] = func_161("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	if (!func_98(uParam0, 2))
	{
		if (func_104(uParam0->f_59, 0))
		{
			uParam0->f_61 = uParam0->f_59;
			uParam0->f_62 = uParam0->f_60;
			func_1059(uParam0, &(uParam0->f_58));
		}
		else
		{
			uParam0->f_61 = 0;
		}
		if (func_104(uParam0->f_59, 0))
		{
			if (func_404(uParam0->f_59))
			{
				func_288(&(uParam0->f_1[1]), "CAMP_REC_COOK", 1);
			}
			else if (func_405(uParam0->f_59, -1636519629) == -701492487)
			{
				func_288(&(uParam0->f_1[1]), "CAMP_REC_BREW", 1);
			}
			else
			{
				func_288(&(uParam0->f_1[1]), "CAMP_REC_MAKE", 1);
			}
		}
		uParam0->f_1[3] = func_161(func_1060(uParam0), -711536720, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	else
	{
		uParam0->f_1[7] = func_161("CAMP_ADD_TASK", -1981136987, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	uParam0->f_1[5] = func_1061("RECIPE", -1384133541, 1710877787, 0);
	func_1062(&(uParam0->f_1[5]), -1384133541);
	func_1062(&(uParam0->f_1[5]), 1710877787);
	if (_databinding_is_data_id_valid(uParam0->f_57))
	{
		iVar0 = _databinding_read_data_int_from_parent(uParam0->f_57, "iNumCostVariants");
	}
	if (iVar0 > 1 && func_104(uParam0->f_61, 0))
	{
		func_162(&(uParam0->f_1[5]), 1, 1, 1);
	}
	else
	{
		func_162(&(uParam0->f_1[5]), 0, 1, 1);
	}
	uParam0->f_1[6] = func_161("INFO", -69749786, 1, 0, 0, 2, 570, 4000, 10, 1073741824, 1704213876, 0);
	if (!func_98(uParam0, 32768))
	{
		func_288(&(uParam0->f_1[6]), "INFO", 1);
	}
	else
	{
		func_288(&(uParam0->f_1[6]), "INGREDIENTS", 1);
	}
	if (_databinding_get_array_count(uParam0->f_29) == 0)
	{
		func_861(uParam0);
		func_162(&(uParam0->f_1[6]), 0, 1, 1);
		_databinding_write_data_string_from_parent(uParam0->f_28, "tipText", _create_var_string(2, "CRFT_NO_REC_TIP"));
	}
	func_862(uParam0, uParam0->f_61, uParam0->f_62);
}

bool func_859(var uParam0)
{
	if (!func_98(uParam0, 2))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (uParam0->f_25 != func_1049(iVar0))
	{
		uParam0->f_25 = func_1049(iVar0);
		func_99(uParam0, 15);
		return true;
	}
	if (uParam0->f_24 != func_1048(iVar0))
	{
		func_99(uParam0, 4);
		return true;
	}
	return false;
}

bool func_860(var uParam0)
{
	if (Global_1913694->f_1584 != uParam0->f_74 || Global_1913694->f_1585 != uParam0->f_73)
	{
		uParam0->f_74 = Global_1913694->f_1584;
		uParam0->f_73 = Global_1913694->f_1585;
		func_187(uParam0, 65536);
		func_99(uParam0, 4);
		return true;
	}
	return false;
}

void func_861(var uParam0)
{
	_databinding_clear_binding_array(uParam0->f_40);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_30[iVar0]), "visible", 0);
		_databinding_write_data_bool_from_parent(&(uParam0->f_30[iVar0]), "inUse", 0);
		iVar0++;
	}
	_databinding_write_data_string_from_parent(uParam0->f_28, "tipText", "");
	_databinding_write_data_bool_from_parent(uParam0->f_28, "variantVisible", 0);
}

void func_862(var uParam0, int iParam1, int iParam2)
{
	if (!func_104(iParam1, 0))
	{
		if (func_43(&(uParam0->f_1[1])))
		{
			func_162(&(uParam0->f_1[1]), 0, 1, 1);
		}
		return;
	}
	bVar2 = func_583();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913694->f_1579 && func_688(iParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_1063(iParam1, iParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || func_579(uParam0->f_23))
	{
		bVar3 = false;
	}
	else if (func_98(uParam0, 2) && !func_1064(iParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((iParam1 != -1199896558 && func_592(iParam1, 1, 0)) || (!func_98(uParam0, 4) && ((func_98(uParam0, 8192) || iParam2 == -214678071) || iParam2 == 278772510)))
		{
			bVar3 = false;
		}
		else if (!func_585(2) && func_405(iParam1, -1636519629) == -701492487)
		{
			bVar3 = false;
		}
		else if (uParam0->f_26 == -1)
		{
			iVar6 = func_347(iParam1, 0, 0, 0);
			iVar7 = func_833(iParam1, 0);
			iVar8 = func_224(iParam1, iParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_26 = func_834(iVar7, iVar8);
		}
	}
	if (func_43(&(uParam0->f_1[1])))
	{
		if (func_98(uParam0, 2))
		{
			func_288(&(uParam0->f_1[1]), "DONATE_ING", 1);
		}
		else if (func_404(iParam1))
		{
			func_288(&(uParam0->f_1[1]), "CAMP_REC_COOK", 1);
		}
		else if (func_405(iParam1, -1636519629) == -701492487)
		{
			func_288(&(uParam0->f_1[1]), "CAMP_REC_BREW", 1);
		}
		else
		{
			func_288(&(uParam0->f_1[1]), "CAMP_REC_MAKE", 1);
		}
		func_162(&(uParam0->f_1[1]), bVar3, 1, 1);
	}
	func_1065(iParam1, iParam2, uParam0, iVar5, bVar4);
	if (func_43(&(uParam0->f_1[6])))
	{
		func_162(&(uParam0->f_1[6]), !bVar4, 1, 1);
	}
	func_1066(uParam0);
}

bool func_863(int iParam0, bool bParam1)
{
	if (bParam1 && !func_43(iParam0))
	{
		return false;
	}
	iVar0 = func_90(iParam0);
	return _uiprompt_is_just_released((*Global_1951255)[iVar0]->f_3);
}

void func_864(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

void func_865(var uParam0)
{
	if (func_104(uParam0->f_61, 0))
	{
		if (_uilog_is_entry_registered(7, uParam0->f_61))
		{
			return;
		}
		_uilog_add_entry_hash(7, uParam0->f_61, Global_35, uParam0->f_61, -2136842124, 0);
		func_365(uParam0->f_61, uParam0->f_62, &Var1, &iVar0, 1, 0);
		_uilog_add_or_update_objective(7, uParam0->f_61, 0, "CAMP_RECIPE_LOG_ALL_OBJ", false, true, false);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar34 = &Var1[iVar33];
				if (func_104(iVar34, 0))
				{
					iVar36 = func_347(iVar34, 0, 0, 0);
					sVar35 = _create_var_string(130, "CAMP_RECIPE_LOG_OBJ", iVar36, Var1[iVar33]->f_1, _create_var_string(0, iVar34));
					bVar37 = func_345(iVar34, Var1[iVar33]->f_1);
					if (bVar37)
					{
						iVar32++;
					}
					_uilog_add_or_update_objective(7, uParam0->f_61, iVar34, sVar35, bVar37, true, true);
				}
				iVar33++;
			}
		}
		if (func_1067(uParam0->f_61, &Var38, 805880880, 0, 0, 0))
		{
			_uilog_set_entry_icon_texture(7, uParam0->f_61, Var38, Var38.f_1);
			_uilog_set_entry_brief_texture(7, uParam0->f_61, Var38, Var38.f_1);
		}
		Global_1137047->f_339.f_16 = uParam0->f_61;
		Global_1137047->f_339.f_17 = uParam0->f_62;
		sVar41 = _create_var_string(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		_0x763637f9b838b0a7(7, uParam0->f_61, sVar41);
		play_sound_frontend("add_to_log", "SSCRFT_Sounds", true, 0);
	}
	func_1066(uParam0);
}

void func_866(var uParam0)
{
	if (!func_296(&(uParam0->f_1[1]), 0))
	{
		return;
	}
	if (func_98(uParam0, 2))
	{
		if (func_104(uParam0->f_61, 0))
		{
			func_880(1);
			func_117(&(uParam0->f_70));
			func_99(uParam0, 16);
		}
		return;
	}
	func_93(uParam0, 1);
	func_44(uParam0->f_1[1], 1, 1);
	func_44(uParam0->f_1[5], 1, 1);
	func_44(uParam0->f_1[6], 1, 1);
	func_44(uParam0->f_1[3], 1, 1);
	func_44(uParam0->f_1[7], 1, 1);
	func_187(uParam0, 64);
	if (!func_98(uParam0, 8192) && !func_404(uParam0->f_61))
	{
		iVar0 = func_405(uParam0->f_61, -1636519629);
		iVar1 = func_875(uParam0, iVar0);
		if (iVar1 != 0)
		{
			func_219(uParam0, 64);
			reset_anim_scene(iVar1, "pl_craft");
			load_anim_scene(iVar1);
			uParam0->f_69 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					if (uParam0->f_61 == 963726415)
					{
						uParam0->f_69 = -1906499827;
					}
					else
					{
						uParam0->f_69 = -467664954;
					}
				}
				else if (func_310(uParam0->f_61, -1588156645))
				{
					uParam0->f_69 = func_832(func_352(uParam0->f_61, 0));
				}
				else if (func_310(uParam0->f_61, 457423347))
				{
					uParam0->f_69 = -193645029;
				}
				else if (func_310(uParam0->f_61, -1846429632))
				{
					uParam0->f_69 = 2132464141;
				}
				else if (func_310(uParam0->f_61, -1067199465))
				{
					uParam0->f_69 = 1186037675;
				}
				else
				{
					uParam0->f_69 = func_832(uParam0->f_61);
				}
			}
			if (uParam0->f_69 != 0)
			{
				request_model(uParam0->f_69, false);
			}
		}
		func_288(&(uParam0->f_1[2]), "CAMP_REC_BACK", 1);
		func_170(&(uParam0->f_1[2]), -1067771379, 0, 1);
		func_162(&(uParam0->f_1[2]), 0, 1, 1);
		func_163(&(uParam0->f_1[2]), 0, 1);
		uParam0->f_1[4] = func_161("CAMP_REC_BACK", 814057702, 1, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
		func_453(uParam0->f_1[4], "INPUT_PCRAFT_EXIT");
		func_170(&(uParam0->f_1[4]), -1067771379, 0, 1);
		func_162(&(uParam0->f_1[4]), 0, 1, 1);
		func_452(&(uParam0->f_1[4]), 19, 1, 1);
		func_452(&(uParam0->f_1[4]), 20, 1, 1);
		func_452(&(uParam0->f_1[4]), 13, 1, 1);
		func_452(&(uParam0->f_1[2]), 13, 1, 1);
		if (func_43(&(uParam0->f_1[2])))
		{
			func_170(&(uParam0->f_1[2]), -1067771379, 0, 1);
		}
		uParam0->f_27 = 0;
		func_99(uParam0, 12);
	}
	else
	{
		func_99(uParam0, 11);
	}
}

bool func_867(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_43(iParam0))
	{
		return false;
	}
	iVar0 = func_90(iParam0);
	return _uiprompt_has_standard_mode_completed((*Global_1951255)[iVar0]->f_3, iParam1);
}

void func_868(var uParam0, bool bParam1)
{
	_0xd962f8579d702db5();
	if (_databinding_is_data_id_valid(uParam0->f_57))
	{
		iVar0 = _databinding_read_data_int_from_parent(uParam0->f_57, "iCurCostVariant");
		iVar1 = _databinding_read_data_int_from_parent(uParam0->f_57, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_62 == -214678071 || uParam0->f_62 == 278772510)
		{
			if (bParam1)
			{
				iVar0++;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
			if (iVar0 < 0)
			{
				iVar0 = (iVar1 - 1);
			}
			else if (iVar0 >= iVar1)
			{
				iVar0 = 0;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (iVar0 == 0)
			{
				Var5 = { func_642(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, func_405(uParam0->f_61, 1697966752), 0) };
				if (func_643(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_62 = -214678071;
						uParam0->f_61 = func_644(0, iVar3);
						bVar2 = true;
					}
					func_648(iVar3);
				}
			}
			else
			{
				Var5 = { func_642(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, func_405(uParam0->f_61, 1697966752), 0) };
				if (func_643(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (iVar0 == 1)
						{
							iVar15 = 2127114599;
						}
						else if (iVar0 == 2)
						{
							iVar15 = -1864584831;
						}
						else if (iVar0 == 3)
						{
							iVar15 = 1967571132;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							iVar17 = func_644(iVar16, iVar3);
							if (func_310(iVar17, iVar15))
							{
								uParam0->f_62 = 278772510;
								uParam0->f_61 = iVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_648(iVar3);
				}
			}
		}
		else
		{
			iVar18 = _item_database_get_acquire_costs_count(uParam0->f_61);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while ((((Var19.f_2 != 1644203656 || Var19 == -489628648) || Var19 == -2141192156) || (!Global_1913694->f_1579 && func_688(uParam0->f_61, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					iVar0++;
				}
				else
				{
					iVar0 = (iVar0 - 1);
				}
				if (iVar0 < 0)
				{
					iVar0 = (iVar18 - 1);
				}
				else if (iVar0 >= iVar18)
				{
					iVar0 = 0;
				}
				if (_item_database_get_acquire_cost(uParam0->f_61, iVar0, &Var19))
				{
				}
			}
			uParam0->f_62 = Var19;
		}
		_databinding_write_data_int_from_parent(uParam0->f_57, "eCost", uParam0->f_62);
		_databinding_write_data_int_from_parent(uParam0->f_57, "eOutputItem", uParam0->f_61);
		iVar67 = _databinding_read_data_int_from_parent(uParam0->f_57, "iIndex");
		if (iVar67 >= 0 && iVar67 < &Global_1913694)
		{
			iVar68 = (*Global_1913694)[iVar67]->f_8;
		}
		_databinding_write_data_int_from_parent(uParam0->f_57, "iCurCostVariant", iVar0);
		_databinding_write_data_int_from_parent(uParam0->f_28, "variantIndex", (iVar0 + 1 - iVar68));
		_databinding_write_data_string_from_parent(uParam0->f_28, "variantText", _create_var_string(0, uParam0->f_61));
		uParam0->f_26 = -1;
		uParam0->f_22 = 0;
		if (_databinding_read_data_bool_from_parent(uParam0->f_28, "ShowRpgDescription"))
		{
			_0x7e2c766adb2c5f1a(uParam0->f_61, 1);
		}
		_databinding_write_data_hash_string_from_parent(uParam0->f_28, "RPGDescription", func_1068(uParam0->f_61));
		func_1056(uParam0, -1, func_583(), uParam0->f_57, 0, bVar2, 0);
		func_862(uParam0, uParam0->f_61, uParam0->f_62);
	}
}

void func_869(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_98(uParam0, 32768))
		{
			func_219(uParam0, 32768);
		}
		else
		{
			func_187(uParam0, 32768);
		}
	}
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgDescription", func_98(uParam0, 32768));
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowIngredients", !func_98(uParam0, 32768));
	if (!func_98(uParam0, 32768))
	{
		if (func_43(&(uParam0->f_1[6])))
		{
			func_288(&(uParam0->f_1[6]), "INFO", 1);
		}
		_0xd962f8579d702db5();
		func_1069(uParam0);
	}
	else
	{
		if (func_43(&(uParam0->f_1[6])))
		{
			func_288(&(uParam0->f_1[6]), "INGREDIENTS", 1);
		}
		func_1070(uParam0);
	}
	if (uParam0->f_62 == -214678071)
	{
		if (_databinding_read_data_int_from_parent(uParam0->f_57, "enabled") == 1)
		{
			if (_databinding_read_data_int_from_parent(uParam0->f_57, "iNumCostVariants") <= 1 && func_98(uParam0, 32768))
			{
				_databinding_write_data_string_from_parent(uParam0->f_28, "tipText", _create_var_string(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_224(uParam0->f_61, uParam0->f_62, func_583(), 0);
				_databinding_write_data_string_from_parent(uParam0->f_28, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_870(var uParam0)
{
	if (func_98(uParam0, 2))
	{
		return;
	}
	_0xd962f8579d702db5();
	func_1071(uParam0);
	func_861(uParam0);
	func_1069(uParam0);
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgDescription", 0);
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowIngredients", 0);
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	func_862(uParam0, 0, 0);
	func_99(uParam0, 9);
}

void func_871(var uParam0, int iParam1)
{
	func_861(uParam0);
	func_1069(uParam0);
	func_1059(uParam0, &(iParam1->f_3));
}

void func_872(var uParam0)
{
	iVar0 = func_405(uParam0->f_61, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_42 = 250;
		if (!does_entity_exist(uParam0->f_63))
		{
			iVar1 = func_1072(uParam0->f_61);
			if (iVar1 != 0)
			{
				uParam0->f_63 = create_object(iVar1, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, false);
				set_entity_completely_disable_collision(uParam0->f_63, false, false);
				attach_entity_to_entity(uParam0->f_63, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
		set_anim_scene_entity(uParam0->f_48, "player", Global_34, 0);
		start_anim_scene(uParam0->f_48);
		_set_anim_scene_playback_list_bool(uParam0->f_48, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_42 = 250;
		set_anim_scene_entity(uParam0->f_50, "arrow", uParam0->f_65, 0);
		set_anim_scene_entity(uParam0->f_50, "player", Global_34, 0);
		start_anim_scene(uParam0->f_50);
		_set_anim_scene_playback_list_bool(uParam0->f_50, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_42 = 250;
		set_anim_scene_entity(uParam0->f_51, "player", Global_34, 0);
		start_anim_scene(uParam0->f_51);
		_set_anim_scene_playback_list_bool(uParam0->f_51, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_42 = 250;
		set_anim_scene_entity(uParam0->f_49, "player", Global_34, 0);
		if (!does_entity_exist(uParam0->f_63))
		{
			iVar2 = func_1072(uParam0->f_61);
			if (iVar2 != 0)
			{
				uParam0->f_63 = create_object(iVar2, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, false);
				set_entity_visible(uParam0->f_63, false);
				set_entity_completely_disable_collision(uParam0->f_63, false, false);
				attach_entity_to_entity(uParam0->f_63, Global_34, get_ped_bone_index(Global_34, 37709), func_1073(uParam0->f_61), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		set_anim_scene_entity(uParam0->f_49, "bullet", uParam0->f_63, 0);
		start_anim_scene(uParam0->f_49);
		_set_anim_scene_playback_list_bool(uParam0->f_49, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_42 = 250;
		if (!does_entity_exist(uParam0->f_65))
		{
			uParam0->f_65 = _create_weapon_object(-764310200, 1, Global_35, true, 1f);
			set_entity_visible(uParam0->f_65, false);
			set_entity_completely_disable_collision(uParam0->f_65, false, false);
		}
		set_anim_scene_entity(uParam0->f_52, "player", Global_34, 0);
		start_anim_scene(uParam0->f_52);
		_set_anim_scene_playback_list_bool(uParam0->f_52, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_42 = 250;
		if (!does_entity_exist(uParam0->f_65))
		{
			uParam0->f_65 = _create_weapon_object(-1511427369, 1, Global_35, true, 1f);
			set_entity_visible(uParam0->f_65, false);
			set_entity_completely_disable_collision(uParam0->f_65, false, false);
		}
		set_anim_scene_entity(uParam0->f_53, "player", Global_34, 0);
		start_anim_scene(uParam0->f_53);
		_set_anim_scene_playback_list_bool(uParam0->f_53, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_42 = 250;
		if (!does_entity_exist(uParam0->f_65))
		{
			uParam0->f_65 = _create_weapon_object(-764310200, 1, Global_35, true, 1f);
			set_entity_visible(uParam0->f_65, false);
			set_entity_completely_disable_collision(uParam0->f_65, false, false);
		}
		if (!does_entity_exist(uParam0->f_67))
		{
			uParam0->f_67 = create_object(-1594634038, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, false);
			set_entity_visible(uParam0->f_67, false);
			set_entity_completely_disable_collision(uParam0->f_67, false, false);
		}
		set_anim_scene_entity(uParam0->f_54, "RAG", uParam0->f_67, 0);
		set_anim_scene_entity(uParam0->f_54, "player", Global_34, 0);
		start_anim_scene(uParam0->f_54);
		_set_anim_scene_playback_list_bool(uParam0->f_54, "pl_craft", true);
		_set_anim_scene_playback_list_bool(uParam0->f_53, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_42 = 250;
		set_anim_scene_entity(uParam0->f_55, "player", Global_34, 0);
		start_anim_scene(uParam0->f_55);
		_set_anim_scene_playback_list_bool(uParam0->f_55, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_42 = 250;
		set_anim_scene_entity(uParam0->f_56, "player", Global_34, 0);
		start_anim_scene(uParam0->f_56);
		_set_anim_scene_playback_list_bool(uParam0->f_56, "pl_craft", true);
	}
	else
	{
		uParam0->f_42 = round((get_anim_duration(func_1074(uParam0->f_61), func_1075(uParam0->f_61)) * 1000f));
		func_117(&(uParam0->f_70));
		task_play_anim(Global_34, func_1074(uParam0->f_61), func_1075(uParam0->f_61), 8f, -8f, -1, 67108880, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_873(var uParam0, bool bParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		if (func_43(&(uParam0->f_1[iVar0])))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_43(uParam2[iVar1]))
				{
					if (&uParam0->f_1[iVar0] == uParam2[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_162(&(uParam0->f_1[iVar0]), bParam1, 1, 1);
		}
		iVar0++;
	}
}

bool func_874(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return true;
	}
	return false;
}

int func_875(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_49;
		case -732326901:
			return uParam0->f_52;
		case -1136843638:
			return uParam0->f_50;
		case 786205940:
			return uParam0->f_51;
		case -1141771998:
			return uParam0->f_53;
		case 364689687:
			return uParam0->f_54;
		case 414472632:
			return uParam0->f_48;
		case -842117252:
			return uParam0->f_55;
		case -1610298873:
			return uParam0->f_56;
		default:
			break;
	}
	return 0;
}

bool func_876(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_1063(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, bParam4);
}

void func_877(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_44 = 0;
	func_97(&(uParam0->f_65), &(uParam0->f_66));
	func_97(&(uParam0->f_63), &(uParam0->f_64));
	iVar0 = func_875(uParam0, iParam1);
	set_anim_scene_bool(iVar0, "bStopLoop", true, false);
	func_162(&(uParam0->f_1[2]), 1, 1, 1);
	func_162(&(uParam0->f_1[4]), 1, 1, 1);
	func_163(&(uParam0->f_1[2]), 0, 1);
	func_163(&(uParam0->f_1[4]), 1, 1);
	func_591(&(uParam0->f_1[1]), 1);
	func_44(uParam0->f_1[1], 1, 1);
	uParam0->f_1[1] = func_161("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, uParam0->f_42, uParam0->f_42 + 1, 1, 1073741824, 1704213876, 0);
	func_452(&(uParam0->f_1[1]), 11, 1, 1);
	func_452(&(uParam0->f_1[1]), 19, 1, 1);
	func_170(&(uParam0->f_1[1]), -1067771379, 0, 1);
	func_162(&(uParam0->f_1[1]), bParam2, 1, 1);
	func_99(uParam0, 13);
}

int func_878()
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (network_is_player_active(iVar0))
	{
		return (*Global_1134390)[iVar0]->f_38.f_28.f_2;
	}
	return 255;
}

bool func_879(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1132288->f_2050 == 0 || (_get_system_time() - Global_1132288->f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1132288->f_2050 == 0)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else if ((_get_system_time() - Global_1132288->f_2050) >= 1000)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else
	{
		return false;
	}
	return true;
}

void func_880(bool bParam0)
{
	if (bParam0)
	{
		iVar14 = 14;
	}
	else
	{
		iVar14 = 15;
	}
	func_1076(iVar14, Var0, func_108(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))));
}

void func_881(var uParam0)
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (iVar0 == player_id())
	{
		func_1077(iVar0, 1);
		func_1078(iVar0, uParam0);
		func_1080(func_1079(_0x901e0dc25080c8b9(player_id())), uParam0);
	}
	else
	{
		func_1081(uParam0);
	}
}

void func_882(var uParam0)
{
	if (_0xf184b3ece36219cf(uParam0->f_23, &uVar0))
	{
		vVar4 = { func_1082(&Global_1296859) };
		iVar7 = 0;
		bVar8 = func_310(uParam0->f_61, -2011345500);
		if (!bVar8)
		{
			if (func_365(uParam0->f_61, uParam0->f_62, &Var10, &iVar9, 1, 0) && iVar9 > 0)
			{
				iVar7 = &Var10[0];
			}
		}
		_0xdf516e598d966d06(&uVar0, iVar7, vVar4.z, 0, 1, 1084182731, 531932013, uParam0->f_61, bVar8);
	}
}

void func_883(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

int func_884(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1898574875;
		case 2:
			return 1506296948;
		case 1:
			return 308865989;
		default:
			break;
	}
	return 1898574875;
}

int func_885(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1135800718;
		case 2:
			return -402975377;
		case 1:
			return -2074936164;
		default:
			break;
	}
	return -1135800718;
}

int func_886(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_227(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_887(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_1083(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_888(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
	}
	if (func_310(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_889(int iParam0, int iParam1)
{
	if (!func_1084(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_602() };
	*iParam1 = func_799(Var0, iParam0, 0, -1);
	if (!func_104(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_890(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
	}
	return ((iParam0 == 1362183957 || iParam0 == 563996796) || iParam0 == -1128398025);
}

bool func_891(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
	}
	return (iParam0 == 2031387366 || iParam0 == 1270980548);
}

bool func_892(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_893(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_560(0, iParam0, -1591664384, -1591664384, 0, 0, 0) };
	func_561(&Var2, func_602());
	if (func_562(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_563(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_104(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_892(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_564(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_564(iVar0);
	}
	return false;
}

bool func_894(int iParam0)
{
	if (func_38() != -1)
	{
		return false;
	}
	if (func_539(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_226(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_345(iParam0, 1);
}

void func_895(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_320(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_353(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_599(iVar0))
	{
		if (bParam2 || (!has_ped_got_weapon(Global_34, iVar0, 0, false) && func_347(iParam0, 0, 0, 0) == 0))
		{
			if (func_38() == -1)
			{
				func_354(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_344(iParam0, iParam1, 0, 0, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_896(int iParam0, int iParam1)
{
	if (func_310(iParam0, 58855631))
	{
		func_548(iParam0, -915411861, iParam1, 1);
	}
}

int func_897(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_617(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_211(bParam1), iParam0, iParam3);
}

bool func_898()
{
	if (((((!_0x3ab6c7b0bb0df4b1(Global_34, -1) && !is_ped_using_any_scenario(Global_34)) && !func_1085(Global_34, 1369124074)) && !func_1085(Global_34, 713668775)) && !_0xec7e480ff8bd0bed(Global_34)) && !is_ped_in_any_vehicle(Global_34, false))
	{
		return true;
	}
	return false;
}

void func_899(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3643[iVar1];
	set_bit(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_900(int iParam0)
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
			func_1086(1);
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
			func_1087(1);
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1087(2);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1087(3);
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
			func_1088(1);
			break;
		case 33:
			func_1089(1);
			break;
		case 34:
			func_1090(1);
			break;
		case 35:
			break;
		case 36:
			func_1091(0);
			break;
		case 37:
			func_1092(0);
			break;
		case 38:
			func_1093(0);
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
			if (func_1094() && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_1095("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_297(677, 0);
			break;
		case 3:
			if (func_1094() && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_1095("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_297(678, 0);
			break;
		case 4:
			if (func_1094() && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_1095("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_297(679, 0);
			break;
		case 5:
			if (func_1094() && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_1095("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_297(680, 0);
			break;
		case 23:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			break;
		case 47:
			if (func_38() == -1)
			{
				if (!func_345(1013902307, 1))
				{
					func_615(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_38() == -1)
			{
				if (!func_345(1013902307, 1))
				{
					func_615(1013902307, 1, 752097756);
				}
				if (!func_345(142640135, 1))
				{
					func_615(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_38() == -1)
			{
				if (!func_345(786809402, 1))
				{
					func_615(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_38() == -1)
			{
				if (!func_345(786809402, 1))
				{
					func_615(786809402, 1, 752097756);
				}
				if (!func_345(-518019409, 1))
				{
					func_615(-518019409, 1, 752097756);
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

void func_901(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_834(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

int func_902(int iParam0, int iParam1, int iParam2)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_384(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_225(iParam0, 0, 0) };
	if (func_226(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_102(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_211(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_903(int iParam0)
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
	iVar2 = func_1096();
	func_1097(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_34, sVar1, iVar2);
}

int func_904(int iParam0)
{
	if (func_448(iParam0))
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

bool func_905()
{
	return false;
}

bool func_906(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_907(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_908(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_153(49))
			{
				if (!func_153(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_153(50))
			{
				if (!func_153(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

int func_909(int iParam0, bool bParam1, int iParam2)
{
	if (func_38() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_345(1811977508, 1))
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
			if (func_104(iVar25, 0) && func_310(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_910(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		if (bParam3)
		{
			func_1098(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_554(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_911(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1099() || func_1100())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_554(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_554(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, 752097756);
		func_106(func_557(1644987397), iVar1);
	}
}

char* func_912(int iParam0)
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

int func_913(int iParam0)
{
	if (!func_1067(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_914(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar3 = func_227(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_1101(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (_item_database_get_fits_slot_info(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
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

int func_915(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_277(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_916(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1102(iParam0, iParam1, iParam2, iParam3);
}

int func_917(int* iParam0)
{
	return func_1103(iParam0->f_1);
}

int func_918(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_1104(iVar0, 1, 0);
		if (!func_360(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1105(&(Var2[iVar34])))
				{
					if (!bParam1 || func_347(&(Var2[iVar34]), 0, 1, 1) > 0)
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

int func_919(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_1104(iVar0, 0, 1);
		if (!func_360(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_1106(&(Var9[iVar41])))
				{
					if (!bParam1 || func_347(&(Var9[iVar41]), 0, 1, 1) > 0)
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

int func_920(int iParam0)
{
	return (iParam0 / 100);
}

void func_921(char* sParam0)
{
	Global_1915715->f_22470 = func_217(sParam0, 10000, 0, 0, 0, 1);
}

bool func_922(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6)
{
	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (uParam3[iVar0] == 0 || (*uParam3)[iVar0]->f_1 == 0)
		{
			Jump @101; //curOff = 54
		}
		else if (!func_1107(uParam3[iVar0], (*uParam3)[iVar0]->f_1, (*uParam5)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return func_1108(iParam0, uParam1, uParam5, iParam2, bParam6);
}

int func_923(int iParam0, int iParam1, bool bParam2)
{
	if (!func_383(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_38() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_1109(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_924(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_925(int iParam0, bool bParam1)
{
	if (!func_310(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_310(iParam0, -1090933859))
		{
			return func_399(iParam0, 1) != 0;
		}
		if ((func_688(iParam0, -915411861, 0) || func_688(iParam0, 600942249, 0)) || func_688(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_926(int iParam0, bool bParam1)
{
	iVar0 = func_1110(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_670(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_223(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_927(int* iParam0, int iParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (iParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_388(Var3.f_8, iParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_928(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	if (!func_1111(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_102(0)) && !func_103());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && func_361(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (&Var0[iVar34] == 773203532 && func_362(iVar32))
			{
			}
			else
			{
				iVar33 = func_347(&(Var0[iVar34]), 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { *Var0[iVar34] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_929(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_398(iParam0))
	{
		return func_223(func_399(iParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_365(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_102(0)) && !func_103());
	iVar37 = -1;
	if (Global_1915715->f_20638)
	{
		iVar37 = Global_1915715->f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && (bParam7 || func_361(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (&Var0[iVar34] == 773203532 && (bParam7 || func_362(iVar32)))
			{
			}
			else
			{
				iVar36 = func_363(iVar37, &(Var0[iVar34]));
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_364(&(Var0[iVar34]), iVar36);
				}
				else
				{
					iVar33 = func_347(&(Var0[iVar34]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_366(&(Var0[iVar34])) || func_367(&(Var0[iVar34])))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_369(7, &(Var0[iVar34]), &iVar38);
						}
						iVar40 = func_368(&(Var0[iVar34]), iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && does_entity_exist(iVar38))
							{
								*iParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_370(7, &(Var0[iVar34]))) + func_371(&(Var0[iVar34]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *Var0[iVar34] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_930(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (uParam3[iVar0] == 0 || (*uParam3)[iVar0]->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_1107(uParam3[iVar0], ((*uParam3)[iVar0]->f_1 * uParam1->f_9), (*uParam5)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return func_1112(iParam0, uParam1, uParam5, iParam2, bParam6, iParam7);
}

void func_931(int iParam0, int iParam1)
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

void func_932(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_664(uParam0))
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

int func_933(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

void func_934(int iParam0)
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
	func_935(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_935(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

void func_936(var uParam0)
{
	func_717(uParam0, 143479330);
	if (func_788() == 2026485318)
	{
		func_717(uParam0, 617531372);
	}
	else
	{
		func_717(uParam0, 291123060);
	}
}

void func_937(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_664(uParam0))
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

int func_938(int iParam0)
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

int func_939(int iParam0)
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

int func_940(int iParam0, int iParam1)
{
	if (func_1113(iParam1))
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
	return func_1025(iParam0, iParam1);
}

int func_941(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	if (func_1114(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_346(iParam1) };
		if (_stat_id_is_valid(&Var0))
		{
			_0xbd861ae8a5181ed7(&Var0, *iParam2);
		}
		*iParam2 = func_942(*iParam0, iParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_1115(iParam1))
			{
				if (!func_1116(0, iParam1, *iParam2))
				{
				}
				if (func_1117(player_id(), 1, 0))
				{
					_0x18ff3110cf47115d(*iParam0, 32, 1);
				}
				else
				{
					_0x18ff3110cf47115d(*iParam0, 32, 0);
				}
				*iParam2 = func_1118(*iParam0, iParam1, *iParam2);
			}
		}
		*iParam2 = 0;
		func_349(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_942(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
				iVar0 = func_1119(iVar2);
				if (!func_1120(iVar0, &uVar102))
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
										func_1121(&Var6, Global_1904087->f_113[iVar5]);
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
										if (func_310(iVar0, -753854379) || func_310(iVar0, 173360570))
										{
											_set_ped_damage(get_ped_index_from_entity_index(iVar2), 2);
										}
										_0x831bf01c56149a8a(get_ped_index_from_entity_index(iVar2));
									}
									if (iParam0 == player_ped_id())
									{
										func_344(iVar0, -1, 0, 1, 0, 0, 0);
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

void func_943(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1915715->f_20637)
	{
		if (Global_1915715->f_20241 == 29)
		{
			if (func_444(iParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_1122(iParam0))
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
					_0x7c2abf6e556b21fc(func_1123(iParam0), iVar1, func_310(iParam0, 1064293907), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_944(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0 = { func_346(iParam0) };
	if (_stat_id_is_valid(&Var0))
	{
		_0xbd861ae8a5181ed7(&Var0, iParam1);
	}
	func_1124(iParam0, iParam1);
	return func_1125(iParam0, iParam1, bParam2, iParam3);
}

bool func_945(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_1126((*uParam0)[iVar0]))
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
				*(*uParam0)[iVar0] = { func_651() };
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

int func_946()
{
	return 232341495;
}

int func_947()
{
	return 232439799;
}

int func_948()
{
	return 230145239;
}

int func_949(int iParam0)
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

int func_950(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1127(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_951(int iParam0)
{
	iVar0 = -1;
	if (func_1128(&Var1, iParam0))
	{
		iVar0 = ((func_1129() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_952(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_1;
}

int func_953(int iParam0)
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

var func_954(int iParam0)
{
	iVar0 = func_1131(0, (func_1130() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_1132(iVar0);
}

int func_955(int iParam0)
{
	return &(Global_1109804->f_5737[iParam0]);
}

struct<8> func_956(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1133(iParam0))
	{
		return Var5;
	}
	if (!func_1134(&Var0))
	{
		return Var5;
	}
	if (!func_1135(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_1135(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_1135(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_1135(Var0, &(Var0.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
		return Var5;
	}
	return func_1136(Var0);
}

float func_957(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_958(int iParam0)
{
	return func_277(Global_1211392->f_1196, iParam0);
}

bool func_959()
{
	return Global_263042[&Global_1296859] > 2;
}

bool func_960(int iParam0, int iParam1)
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

struct<2> func_961()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_120(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_120(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_962(int iParam0)
{
	if (func_1137(iParam0) == -1)
	{
		return false;
	}
	return true;
}

bool func_963(struct<2> Param0)
{
	return func_1138(Param0, 1, 4);
}

int func_964(int iParam0)
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

void func_965(int iParam0, int iParam1)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if (func_38() != -1)
	{
		Global_17411[iParam0] = (Global_17411[iParam0] || iParam1);
		return;
	}
	Global_39.f_4667[iParam0] = (Global_39.f_4667[iParam0] || iParam1);
}

bool func_966(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_967(int iParam0)
{
	if (!func_966(iParam0))
	{
		return false;
	}
	return func_1139(iParam0, 4, 1);
}

void func_968(int iParam0, bool bParam1)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if (func_1140(iParam0))
	{
		return;
	}
	func_965(iParam0, 2);
	if (bParam1)
	{
		if (!func_66(0, 0, 1))
		{
			if (func_38() == -1)
			{
				func_971(1, 6);
			}
			else
			{
				func_1141(1, 1017438712);
			}
		}
	}
}

bool func_969(int iParam0)
{
	if (!func_966(iParam0))
	{
		return false;
	}
	return func_1139(iParam0, 1, 1);
}

void func_970(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if (func_969(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_1142(iParam0);
	}
	if (!bParam1)
	{
		func_1143(iParam0);
	}
	func_965(iParam0, 1);
	func_968(iParam0, 1);
	if (bParam2)
	{
		if (!func_66(0, 0, 1))
		{
			func_971(1, 6);
		}
	}
}

void func_971(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1144(&Global_0, 8);
	}
	if (!func_1094() || func_38() != -1)
	{
		return;
	}
	func_1144(&Global_0, 1);
}

float func_972(int iParam0, int iParam1)
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

void func_973(int iParam0)
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
	iVar1 = func_1034(2);
	func_1035(to_float((iParam0 * iVar1)), 0);
}

void func_974(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_1036(2);
	func_1037(to_float((iParam0 * iVar0)), 0, bParam1);
}

void func_975(int iParam0)
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
	iVar1 = func_1038(2);
	func_1039(to_float((iParam0 * iVar1)), 0);
}

bool func_976()
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

int func_977(int iParam0)
{
	iVar0 = func_264(func_431(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637->f_1675.f_1[iVar0]->f_1;
	}
	return 0;
}

int func_978(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_264(iParam0, 1)]);
}

int func_979()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_227(iVar1) == -999503751)
		{
			if (func_1145() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_980(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_1146(0);
	}
	if (func_227(iParam0) == -999503751 && func_984(iParam0) != -1)
	{
		return true;
	}
	if (iParam1 == 2026485318)
	{
		return func_310(iParam0, -287432114);
	}
	else if (iParam1 == 24043185)
	{
		return func_310(iParam0, -133342564);
	}
	return false;
}

bool func_981(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_225(iParam0, bParam2, 0) };
	Var5 = { func_373(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_387(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_211(bParam2), &Var5, iParam1);
	return true;
}

int func_982(int iParam0)
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

bool func_983(int iParam0)
{
	return (Global_1952637->f_3334.f_33.f_6 && iParam0) != 0;
}

int func_984(int iParam0)
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

bool func_985(int iParam0, int iParam1)
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

struct<8> func_986(int iParam0)
{
	if (func_985(4, iParam0))
	{
		return *Global_17411.f_2625[iParam0];
	}
	StringCopy(&cVar0, _get_label_text_by_hash(func_1147(iParam0)), 64);
	return cVar0;
}

void func_987()
{
	Global_1952637->f_1057 = 0;
}

int func_988(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	if (func_310(iParam0, 160827531) || func_227(iParam0) == 81053684)
	{
		return 1;
	}
	return 0;
}

void func_989(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bVar0 = false;
	switch (func_227(iParam0))
	{
		case -2061583405:
			bVar0 = func_1148(iParam0, &(Global_1952637->f_3334.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_1148(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_1148(iParam0, &(Global_1952637->f_3334.f_27), bParam4);
			if (func_310(iParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_1149(&Var1, iParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						iVar122 = &Var1.f_1[iVar121];
						if (func_104(iVar122, 0))
						{
							func_989(iVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_1148(iParam0, &(Global_1952637->f_3334.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_1148(iParam0, &(Global_1952637->f_3334.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_1148(iParam0, &(Global_1952637->f_3334.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_1148(iParam0, &(Global_1952637->f_3334.f_33.f_7), bParam4);
			break;
		default:
			if (func_310(iParam0, 160827531))
			{
				bVar0 = func_1148(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_786(0, iParam0);
	}
	if (bParam2)
	{
		func_784();
	}
	if (bParam1)
	{
		func_787(0, 0);
	}
}

int func_990(int iParam0)
{
	func_1150(&uVar1, 9044914, iParam0, 0, 0, 0);
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

bool func_991(int iParam0, int iParam1)
{
	iVar0 = func_227(&(Global_1952637->f_1675.f_1[iParam1]));
	if (func_227(iParam0) == iVar0)
	{
		return true;
	}
	else if (iParam0 == -992705550)
	{
		return func_310(&(Global_1952637->f_1675.f_1[iParam1]), 160827531);
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

void func_992(var uParam0, int iParam1)
{
	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		*Global_1952637->f_2897.f_35[iVar0] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_1151(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1151(uParam0->f_2[iVar0], 1))
				{
					func_1152(uParam0->f_2[iVar0], 2, 6);
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

void func_993(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_1153(uParam0, 1))
	{
		func_1154(uParam0, 1);
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

void func_994(var uParam0, var uParam1)
{
	Var0 = func_1155(0);
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
			iVar8 = func_264(iVar7, 1);
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
				func_794(iVar8, 0);
			}
		}
	}
}

void func_995(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_227(&(uParam0->f_1[iVar0]));
	if (iVar1 == 119907797)
	{
		if (func_310(iParam1, 458991572))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_794(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_310(iParam1, -93469181))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_794(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_310(&(uParam0->f_1[iVar0]), -1446529222) && func_310(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iParam1, -93469181)) && func_310(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
}

void func_996(var uParam0, int iParam1, int iParam2)
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

void func_997(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (!func_508(iVar1, 0) && func_310(iVar1, -180472385))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = &uParam0->f_1[iVar0];
	if ((iVar1 != &Global_1952637->f_83[iVar0] && func_227(iVar1) == 2086043523) && func_310(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
}

void func_998(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_227(iParam2))
	{
		case -525676072:
			func_1156(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_1157(uParam0, bParam1, iParam3);
			break;
	}
}

void func_999(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_227(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_794(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_227(iParam2) == 81053684 || func_310(iParam2, 160827531))
	{
		func_1158(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_310(iParam2, -180472385) && !func_508(&(uParam0->f_1[iVar0]), 0))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	if (func_310(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0]->f_1 == 1530758430)
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_794(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_794(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
	{
		uParam0->f_1[iVar0]->f_1 = -1539589426;
		func_794(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_794(iVar0, iParam3);
		}
	}
}

void func_1000(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 12;
	iVar1 = 0;
	if (func_788() == 24043185)
	{
		iVar1 = 1;
	}
	if (2056714954 == _get_ped_component_category(&(uParam0->f_1[iVar0]), iVar1, true))
	{
		if ((bParam1 || func_310(iParam2, 1872585553)) || func_227(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_794(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_508(&(uParam0->f_1[iVar0]), 0) && func_310(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_508(&(uParam0->f_1[iVar0]), 0) && func_310(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = &uParam0->f_1[iVar0];
	if (func_227(iVar2) == 1759215194 && func_227(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0] = func_990(iParam2);
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam4);
	}
	else if (func_1159(iVar2, bParam1, iVar1))
	{
		iVar2 = &uParam0->f_1[18];
		iVar3 = 0;
		if (func_227(iVar2) == 912453393 && func_1160(32))
		{
			iVar3 |= 1;
		}
		if (func_310(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_1161(Global_1952637->f_83[iVar0]->f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0] = iVar2;
			uParam0->f_1[iVar0]->f_1 = 0;
			func_794(iVar0, iParam4);
			func_1008(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_508(&(uParam0->f_1[iVar0]), 0))
	{
		return;
	}
	func_794(iVar0, iParam4);
	if (uParam0->f_1[iParam3]->f_1 == -1539589426 || uParam0->f_1[iParam3]->f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3]->f_1 == 0 || uParam0->f_1[iParam3]->f_1 == 1155669136)
	{
		if (func_1011(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3]->f_1 = -1539589426;
			return;
		}
	}
	if (func_1011(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3]->f_1 = 1334603721;
	}
}

void func_1001(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iParam2, 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
}

void func_1002(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_227(iParam2))
	{
		case 698653232:
			func_1162(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_1163(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_1003(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_227(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_1164(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_1165(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_1004(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_227(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_794(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_788() == 24043185)
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_794(iVar0, iParam3);
		if (uParam0->f_1[iVar0]->f_1 == -1539589426 || uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0]->f_1 == 0 || uParam0->f_1[iVar0]->f_1 == 1155669136)
		{
			if (func_1011(&(uParam0->f_1[iVar0]), iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0]->f_1 = -1539589426;
				return;
			}
		}
		if (func_1011(&(uParam0->f_1[iVar0]), iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0]->f_1 = 1334603721;
		}
	}
}

void func_1005(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(&(uParam0->f_1[iVar0]), 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
}

void func_1006(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_1166(99217379) && func_310(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_508(&(uParam0->f_1[iVar0]), 0) && func_310(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
}

void func_1007(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(&(uParam0->f_1[iVar0]), 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
}

void func_1008(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_227(iParam2))
	{
		case 1759215194:
			func_1167(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_1168(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_1169(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_1170(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_1171(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_1172(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1009(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_227(iParam2))
	{
		case 1769055947:
			func_1173(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_1174(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_1010(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		func_1175(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = &uParam0->f_1[iVar0];
	if ((func_310(iParam2, 813132419) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_227(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	if ((func_310(iParam2, -1650340550) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_227(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_310(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
}

int func_1011(int iParam0, int iParam1, int iParam2)
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

bool func_1012(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1013(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1952637->f_1675.f_1[iParam0] = { *Global_1952637->f_1556.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	func_1176(Global_1952637->f_1675.f_1[iParam0], iParam0, Global_17411.f_55.f_644.f_1777);
}

void func_1014(int iParam0, bool bParam1, int iParam2)
{
	func_1177(&(Global_1952637->f_1556), iParam0);
	func_1178(2, iParam0, 6);
	if (bParam1)
	{
		func_787(0, 1);
	}
}

int func_1015(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_1083(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1016(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_380(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_320(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1179(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_1180(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_1181(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_1182(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_1183(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_1184(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_1185(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_390(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

float func_1017(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1018(int iParam0)
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
	if (func_532(iParam0) == -785841056)
	{
		return 37;
	}
	return 23;
}

bool func_1019()
{
	if ((func_119() || Global_1572887->f_106.f_75 > 10) || func_1186())
	{
		if ((!func_763() && Global_265377->f_124517.f_71.f_21.f_2 != -504335712) && !func_1187(Global_265377->f_124517.f_71.f_21.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_1020(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_1021()
{
	iVar0 = get_frame_count();
	return (Global_1051439->f_3259 == iVar0 || Global_1051439->f_3259 == (iVar0 - 1));
}

void func_1022(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 || iParam0);
}

bool func_1023()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

bool func_1024(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

int func_1025(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (func_1113(iParam1))
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
			return func_1188(_inventory_get_ped_inventory_id(iParam0), iParam1);
		}
	}
	return 0;
}

int func_1026(int iParam0, bool bParam1)
{
	if (!bParam1 || func_1189())
	{
		return func_387(iParam0, func_372(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

void func_1027(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_38() == 0)
	{
		iVar0 = func_640();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_1190(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_1191(iParam0);
		if (bParam3)
		{
			func_1192(iParam0, sParam1, iParam2);
		}
	}
}

int func_1028(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_419(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_104(iParam1, 0))
	{
		return 0;
	}
	if (!func_649(iParam0))
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		if (iVar26 >= iParam2)
		{
		}
		else
		{
			iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
			if (!func_650(iVar28))
			{
			}
			else
			{
				_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = &Var3.f_1[iVar29];
					if (iVar30 == iParam1)
					{
						func_615(iParam1, 1, 752097756);
						if (does_entity_exist(iVar28))
						{
							iVar31 = func_445(&iVar28);
							if (!func_104(iVar31, 0))
							{
								iVar31 = func_446(iVar28);
							}
							if (func_104(iVar31, 0))
							{
								func_447(iVar31, 1, 1, -142743235);
							}
							_0x0d0db2b6af19a987(&iVar28);
						}
						iVar26++;
					}
					iVar29++;
				}
			}
			iVar27++;
		}
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

void func_1029(int iParam0, int iParam1)
{
	if (iParam1 > 0)
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
		iVar12 = func_405(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_642(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (func_643(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					iVar13 = func_644(iVar14, iVar0);
					if (func_104(iVar13, 0) && iParam0 != iVar13)
					{
						iVar15 = func_347(iVar13, 0, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_1193(iVar13, iParam0, 0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_648(iVar0);
		}
	}
}

void func_1030(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			if (is_entity_a_ped(iVar0))
			{
				iVar13 = func_1194(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (&uVar2[iVar14] == iParam0)
					{
						_0x0d0db2b6af19a987(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else if (_0x9e7738b291706746(&iVar15, iVar1, _get_ped_damage(iVar1)) && iVar15 == iParam0)
			{
				_0x0d0db2b6af19a987(&iVar0);
			}
		}
	}
}

int func_1031(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_419(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_104(iParam1, 0))
	{
		return 0;
	}
	if (!func_649(iParam0))
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < iParam2)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else if (func_1125(iParam1, iParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_1032(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_38() == 0)
	{
		return 0;
	}
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_372(0) };
	Var0.f_4 = func_634(iParam1);
	Var5 = { func_373(iParam0, Var0, Var0.f_4, 0) };
	if (!func_463(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1033(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117;
		case 3:
			return 1660962977;
		case 4:
			return -131409450;
		case 5:
			return -1487527516;
		case 6:
			return 561629573;
		case 7:
			return 1829679323;
		case 8:
			return -618617794;
		case 11:
			return 653458791;
		case 12:
			return 437319607;
		case 13:
			return -1519488075;
		case 15:
			return 1014445254;
		case 16:
			return 224814421;
		case 18:
			return 1012187868;
		case 19:
			return 1516353659;
		case 20:
			return -1040706491;
		case 21:
			return -1910627346;
		case 24:
			return -1812487593;
		case 27:
			return 1983971282;
		case 28:
			return 1561519041;
		case 29:
			return -980496853;
		case 30:
			return -1738887126;
		case 32:
			return 424771379;
		case 34:
			return 787316814;
		case 35:
			return 984616481;
		case 38:
			return 1078285403;
		case 39:
			return -262897007;
		case 49:
			return -1727702531;
		case 50:
			return 1783324404;
		case 51:
			return 1288848815;
		case 52:
			return 918090738;
		case 53:
			return 170272501;
		case 1:
			return 2056650000;
		case 9:
			return -1195354638;
		case 10:
			return 1077596967;
		case 14:
			return -2145199848;
		case 17:
			return 752824478;
		case 22:
			return -819513569;
		case 23:
			return 1906968775;
		case 25:
			return -135434663;
		case 26:
			return 920123680;
		case 31:
			return 150470908;
		case 33:
			return -1665125257;
		case 36:
			return 1587928307;
		case 37:
			return -1738925422;
		case 40:
			return 656594395;
		case 42:
			return -1174738785;
		case 43:
			return 1073505629;
		case 41:
			return -658674894;
		case 44:
			return -1504155535;
		case 45:
			return -1917345716;
		case 46:
			return 1823406682;
		case 47:
			return -1003637772;
		case 48:
			return -1571524081;
	}
	return 0;
}

int func_1034(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_709(1);
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

void func_1035(float fParam0, int iParam1)
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

int func_1036(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_709(1);
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

void func_1037(float fParam0, bool bParam1, bool bParam2)
{
	iVar0 = player_id();
	if (fParam0 > 0f && func_1195(iVar0))
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

int func_1038(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_709(1);
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

void func_1039(float fParam0, int iParam1)
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

float func_1040(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_1096();
	func_1196(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_1197(iParam0, 2);
	if (func_1199(iVar0, func_1198(iParam0, 2), 1))
	{
		func_1200(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_297(103, bParam2);
		return 0f;
	}
	func_1201(iParam0, func_1096(), 2);
	func_1200(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_1041(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_709(2);
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

int func_1042(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_709(2);
	}
	iVar0 = player_ped_id();
	if (func_1202(iVar0, iParam0, fParam1))
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
			func_1203(iParam0, 7000, iParam5);
		}
		func_1204(iVar0, iParam0, fParam1);
		func_1205(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

bool func_1043()
{
	if (Global_1956200->f_1431.f_107 == -15)
	{
		return true;
	}
	return func_1206(Global_1956200->f_1431.f_107, 0);
}

void func_1044(float fParam0, int iParam1)
{
	fVar0 = func_1207(13, 2);
	iVar1 = func_1208(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_594(fVar0, 0f, 100f);
	iVar2 = func_1208(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956200->f_1431.f_107 = func_1096();
		func_1097(&(Global_1956200->f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_1209(13, fVar0, 2);
	Global_1956200->f_1431.f_99 = iParam1;
}

int func_1045(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_1210(iParam0))
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
				sVar0 = func_1211(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_973(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_1211(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_1212(1775828486);
			func_975(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_1211(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_974(-1, 0);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2] = fParam1;
			break;
		case 19:
			func_1212(350943398);
			func_1213(0, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0]->f_1 = fParam1;
			break;
		case 18:
			func_1213(1, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1]->f_1 = fParam1;
			break;
		case 20:
			func_1213(2, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2]->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_1046(int iParam0, int iParam1)
{
	Var0 = { func_105(-372368982, func_1033(iParam0)) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	func_106(func_351(106002964), iParam1);
}

void func_1047(int iParam0, int iParam1)
{
	if (func_38() == 0)
	{
		iVar0 = func_405(iParam0, -949239683);
		if (iParam1 == -1387038764)
		{
			return;
		}
		if (func_310(iParam0, -136654233))
		{
			chal_add_goal_progress_int(-1823988672, -609313610, 1);
		}
		if ((func_310(iParam0, 1765172170) || 1443104131 == iVar0) || -1919515848 == iVar0)
		{
			chal_add_goal_progress_int(-1823988672, 733633210, 1);
		}
		if (func_310(iParam0, 1573112293))
		{
			chal_add_goal_progress_int(-1823988672, -1274788474, 1);
		}
		if (func_310(iParam0, -2085281117) && !func_310(iParam0, -1237028043))
		{
			chal_add_goal_progress_int(-1823988672, -1456129530, 1);
		}
		if (func_310(iParam0, 200705431))
		{
			chal_add_goal_progress_int(-1823988672, 1380824593, 1);
		}
		if (((func_310(iParam0, -887064662) || func_310(iParam0, -839724752)) || func_310(iParam0, 1264218912)) || iParam0 == -1994237933)
		{
			chal_add_goal_progress_int(-1823988672, 381139323, 1);
		}
		if (func_310(iParam0, -764700608))
		{
			chal_add_goal_progress_int(-1823988672, 1844266867, 1);
		}
		if ((iParam0 == -1442667564 || iParam0 == -951828978) || iParam0 == -1477273558)
		{
			chal_add_goal_progress_int(-1823988672, -1075364325, 1);
		}
		if (iParam0 == -1199896558)
		{
			chal_add_goal_progress_int(-1823988672, 2024753712, 1);
		}
	}
}

int func_1048(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_28;
}

int func_1049(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_28.f_1;
}

void func_1050(var uParam0, int iParam1, int iParam2)
{
	(*Global_1913694)[uParam0->f_44]->f_5 = iParam2;
	(*Global_1913694)[uParam0->f_44]->f_6 = iParam1;
	(*Global_1913694)[uParam0->f_44]->f_7 = 1;
	(*Global_1913694)[uParam0->f_44]->f_8 = 0;
	Global_1913694->f_1576++;
	uParam0->f_44++;
	if ((iParam2 == 600942249 || iParam2 == -257768755) || iParam2 == 1472825031)
	{
		func_1214(uParam0, iParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_1215(uParam0, iParam1);
	}
}

int func_1051(var uParam0, int iParam1)
{
	Var0 = { func_642(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1913694->f_1584, 0) };
	if (func_643(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			iVar13 = func_644(iVar12, iVar10);
			if (func_104(iVar13, 0))
			{
				if (uParam0->f_44 >= 175)
				{
				}
				else
				{
					if (Global_1913694->f_1584 == 0 && func_310(iVar13, 302810039))
					{
						if (!(Global_1913694->f_1585 != 0 && func_310(iVar13, Global_1913694->f_1585)))
						{
						}
						else if (func_310(iVar13, 266762988))
						{
						}
						else
						{
							func_1050(uParam0, iVar13, iParam1);
							func_1216(uParam0, iVar13, iParam1);
						}
						iVar12++;
						func_1217(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_1052(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
		case 1:
			return 461149715;
		case 2:
			return 210507310;
		case 3:
			return -1182908601;
		case 4:
			return 1647118377;
		case 5:
			return -867280435;
		default:
			break;
	}
	return 0;
}

int func_1053(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1054(var uParam0, char[4] cParam1, var uParam2)
{
	*uParam0 = _databinding_add_data_container(uParam2->f_28, cParam1);
	_databinding_add_data_bool(*uParam0, "visible", false);
	_databinding_add_data_string(*uParam0, "texture", "");
	_databinding_add_data_string(*uParam0, "textureDictionary", "inventory_items");
	_databinding_add_data_int(*uParam0, "count", 3);
	_databinding_add_data_int(*uParam0, "enabled", 1);
	_databinding_add_data_bool(*uParam0, "inUse", false);
}

void func_1055(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = (*Global_1913694)[iParam2]->f_6;
	if ((bParam4 || func_98(uParam0, 2)) || func_235(iVar0, uParam0->f_41))
	{
		if (bParam1)
		{
			if (_databinding_is_data_id_valid((*Global_1913694)[iParam2]->f_1))
			{
				if (bParam5)
				{
					func_1056(uParam0, -1, bParam3, (*Global_1913694)[iParam2]->f_1, 1, 0, 1);
				}
				_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_29, uParam0->f_45, -2047994727, (*Global_1913694)[iParam2]->f_1);
			}
			else
			{
				func_1218(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (_databinding_is_data_id_valid((*Global_1913694)[iParam2]->f_1))
			{
				_databinding_remove_data_entry((*Global_1913694)[iParam2]->f_1);
			}
			func_1218(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_45 == 0)
		{
			uParam0->f_59 = (*Global_1913694)[iParam2]->f_6;
			uParam0->f_60 = (*Global_1913694)[iParam2]->f_5;
			uParam0->f_58 = (*Global_1913694)[iParam2]->f_1;
		}
		uParam0->f_45++;
	}
}

void func_1056(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (_databinding_is_data_id_valid(iParam3))
	{
		iParam1 = _databinding_read_data_int_from_parent(iParam3, "iIndex");
	}
	iVar0 = (*Global_1913694)[iParam1]->f_1;
	if (!_databinding_is_data_id_valid(iVar0))
	{
		return;
	}
	iVar1 = _databinding_read_data_int_from_parent(iVar0, "eOutputItem");
	iVar2 = _databinding_read_data_int_from_parent(iVar0, "eCost");
	iVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = func_224(iVar3, iVar4, bParam2, 0);
	iVar6 = func_347(iVar3, 0, 0, 0);
	iVar7 = func_833(iVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_834(iVar7, iVar5), 8);
	_databinding_write_data_string_from_parent(iVar0, "count", &cVar8);
	_databinding_write_data_bool_from_parent(iVar0, "visible", 0);
	if (func_98(uParam0, 2))
	{
		iVar9 = func_1053((iVar5 > 0 && func_1064(iVar3)), 1, 0);
	}
	else
	{
		iVar9 = func_1053((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_1219(iVar3))
	{
		if (func_1220(iVar3, iVar4, uParam0, bParam2, &iVar11, &iVar12, &iVar13))
		{
			iVar9 = 1;
			bVar10 = true;
			if (bParam6)
			{
				iVar3 = iVar11;
				iVar4 = iVar12;
				_databinding_write_data_hash_string_from_parent(iVar0, "name", iVar11);
				_databinding_write_data_int_from_parent(iVar0, "eOutputItem", iVar11);
				_databinding_write_data_int_from_parent(iVar0, "eCost", iVar12);
				_databinding_write_data_int_from_parent(iVar0, "iCurCostVariant", iVar13);
				bParam5 = true;
			}
		}
	}
	if (!func_98(uParam0, 4))
	{
		if ((iVar4 == -214678071 || iVar4 == 278772510) || _databinding_read_data_bool_from_parent(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (!Global_1913694->f_1579 && func_688(iVar3, iVar4, 1))
	{
		iVar9 = 0;
		iVar14 = 1;
	}
	_databinding_write_data_bool_from_parent(iVar0, "lockVisible", iVar14);
	if (iVar9 == 1)
	{
		if (!func_585(2) && func_405(iVar3, -1636519629) == -701492487)
		{
			(*Global_1913694)[iParam1]->f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			(*Global_1913694)[iParam1]->f_2 = 1;
		}
	}
	else
	{
		if (((func_98(uParam0, 128) && iVar9 == 0) && (*Global_1913694)[iParam1]->f_2) && bParam4)
		{
			_databinding_remove_binding_array_item_by_data_context_id(uParam0->f_29, iVar0);
		}
		(*Global_1913694)[iParam1]->f_2 = 0;
	}
	if (bParam5)
	{
		if (func_540(iVar3, &Var15, 805880880, 0, 0, 0))
		{
			_databinding_write_data_string_from_parent(iVar0, "texture", Var15);
			_databinding_write_data_string_from_parent(iVar0, "textureDictionary", Var15.f_1);
		}
		_databinding_write_data_hash_string_from_parent(iVar0, "name", iVar3);
		Var18.f_1 = 20;
		iVar40 = 0;
		_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeCoreDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthHorseDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreHorseDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreHorseDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaHorseDurationCategory", 0);
		if (_item_database_fillout_item_effects_ids(iVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (_item_database_fillout_item_effects_id_info(&(Var18.f_1[iVar41]), &Var42))
				{
					iVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							_databinding_write_data_int_from_parent(iVar0, "deadeye", iVar49);
							break;
						case 1857353317:
							_databinding_write_data_int_from_parent(iVar0, "deadeyeCore", iVar49);
							break;
						case -826379728:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "deadeyeCore", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "deadeye", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							_databinding_write_data_int_from_parent(iVar0, "health", iVar49);
							break;
						case -416929031:
							_databinding_write_data_int_from_parent(iVar0, "healthCore", iVar49);
							break;
						case 1869697234:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "health", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "healthCore", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							_databinding_write_data_int_from_parent(iVar0, "stamina", iVar49);
							break;
						case 1681823811:
							_databinding_write_data_int_from_parent(iVar0, "staminaCore", iVar49);
							break;
						case -1191740624:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "staminaCore", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "stamina", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							_databinding_write_data_int_from_parent(iVar0, "healthHorse", iVar49);
							break;
						case -778289619:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "healthHorse", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							_databinding_write_data_int_from_parent(iVar0, "healthCoreHorse", iVar49);
							break;
						case 1136630075:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "healthCoreHorse", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							_databinding_write_data_int_from_parent(iVar0, "staminaCoreHorse", iVar49);
							break;
						case 1365603835:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "staminaCoreHorse", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "staminaHorse", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		_databinding_write_data_bool_from_parent(iVar0, "overpower", iVar40);
	}
	if (!func_98(uParam0, 4) && _databinding_read_data_bool_from_parent(iVar0, "bFireCrafting"))
	{
		iVar9 = 0;
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	_databinding_write_data_int_from_parent(iVar0, "enabled", iVar9);
}

int func_1057(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

void func_1058(var uParam0, bool bParam1)
{
	if (_does_scenario_point_exist(uParam0->f_12))
	{
		iVar0 = _get_entity_scenario_point_is_attached_to(uParam0->f_12);
	}
	if (does_entity_exist(iVar0))
	{
		set_entity_collision(iVar0, bParam1, false);
	}
}

void func_1059(var uParam0, var uParam1)
{
	_0xd962f8579d702db5();
	iVar0 = _databinding_read_data_int_from_parent(*uParam1, "eOutputItem");
	iVar1 = _databinding_read_data_int_from_parent(*uParam1, "eCost");
	iVar2 = iVar0;
	_0xd962f8579d702db5();
	if (func_104(iVar2, 0) && (func_98(uParam0, 2) || func_235(iVar2, uParam0->f_41)))
	{
		uParam0->f_26 = -1;
		uParam0->f_22 = 0;
		uParam0->f_61 = iVar2;
		uParam0->f_62 = iVar1;
		func_44(uParam0->f_1[1], 1, 1);
		iVar3 = _databinding_read_data_int_from_parent(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			_databinding_write_data_bool_from_parent(uParam0->f_28, "variantVisible", 1);
			_databinding_write_data_string_from_parent(uParam0->f_28, "variantText", _create_var_string(0, uParam0->f_61));
			_databinding_write_data_int_from_parent(uParam0->f_28, "variantCount", iVar3);
			iVar4 = _databinding_read_data_int_from_parent(*uParam1, "iCurCostVariant");
			iVar5 = _databinding_read_data_int_from_parent(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < &Global_1913694)
			{
				iVar6 = (*Global_1913694)[iVar5]->f_8;
			}
			_databinding_write_data_int_from_parent(uParam0->f_28, "variantIndex", (iVar4 + 1 - iVar6));
			func_187(uParam0, 4096);
			if (func_43(&(uParam0->f_1[5])))
			{
				func_162(&(uParam0->f_1[5]), 1, 1, 1);
			}
		}
		else
		{
			_databinding_write_data_bool_from_parent(uParam0->f_28, "variantVisible", 0);
			func_219(uParam0, 4096);
			if (func_43(&(uParam0->f_1[5])))
			{
				func_162(&(uParam0->f_1[5]), 0, 1, 1);
			}
		}
		if (!func_98(uParam0, 2))
		{
			uParam0->f_42 = round((get_anim_duration(func_1074(uParam0->f_61), func_1075(uParam0->f_61)) * 1000f));
		}
		if (_databinding_read_data_bool_from_parent(*uParam1, "bFireCrafting"))
		{
			func_187(uParam0, 8192);
		}
		else
		{
			func_219(uParam0, 8192);
		}
		uParam0->f_57 = *uParam1;
		uParam0->f_1[1] = func_161("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		func_862(uParam0, uParam0->f_61, uParam0->f_62);
		func_452(&(uParam0->f_1[1]), 11, 1, 1);
		if (Global_1913694->f_1579 || !func_688(uParam0->f_61, uParam0->f_62, 1))
		{
			_databinding_write_data_hash_string_from_parent(uParam0->f_28, "RPGDescription", func_1068(iVar2));
			func_869(uParam0, 0);
		}
		else
		{
			_databinding_write_data_hash_string_from_parent(uParam0->f_28, "RPGDescription", 0);
		}
		if (_databinding_read_data_bool_from_parent(uParam0->f_28, "ShowRpgDescription"))
		{
			if (Global_1913694->f_1579 || !func_688(uParam0->f_61, uParam0->f_62, 1))
			{
				func_1070(uParam0);
			}
		}
	}
}

char* func_1060(var uParam0)
{
	if (func_98(uParam0, 128))
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_1061(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_268(iVar0, 2))
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
		func_269(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

void func_1062(int iParam0, int iParam1)
{
	if (!func_43(iParam0))
	{
		return;
	}
	iVar0 = func_90(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1951255)[iVar0]->f_3, iParam1);
}

bool func_1063(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (!Global_1913694->f_1579 && !bParam5)
	{
		if (func_221(iParam0))
		{
			if (func_670(func_222(iParam0), iParam1))
			{
				return false;
			}
		}
		else if (func_688(iParam0, iParam1, 1))
		{
			return false;
		}
	}
	if (func_221(iParam0))
	{
		if (func_223(func_222(iParam0), iParam1, &Var0, 0, bParam7))
		{
			return true;
		}
	}
	else if (func_929(iParam0, 1, iParam1, &Var0, iParam4, bParam6, 0, bParam7))
	{
		return true;
	}
	*uParam2 = Var0;
	*uParam3 = Var0.f_1;
	return false;
}

bool func_1064(int iParam0)
{
	iVar0 = func_1222(func_1221());
	iVar1 = func_1222(iParam0);
	return iVar1 > iVar0;
}

bool func_1065(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	bVar34 = !bParam4;
	_databinding_clear_binding_array(uParam2->f_40);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		_databinding_remove_binding_array_item_by_data_context_id(uParam2->f_40, &(uParam2->f_35[iVar33]));
		_databinding_write_data_bool_from_parent(&(uParam2->f_30[iVar33]), "visible", 0);
		_databinding_write_data_bool_from_parent(&(uParam2->f_30[iVar33]), "inUse", 0);
		iVar33++;
	}
	if (!bParam4 && func_365(iParam0, iParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar31 = &Var0[iVar33];
				if (func_104(iVar31, 0))
				{
					_databinding_write_data_bool_from_parent(&(uParam2->f_30[iVar33]), "visible", 1);
					if (func_540(iVar31, &Var35, 805880880, 0, 0, 0))
					{
						_databinding_write_data_string_from_parent(&(uParam2->f_30[iVar33]), "texture", Var35);
						_databinding_write_data_string_from_parent(&(uParam2->f_30[iVar33]), "textureDictionary", Var35.f_1);
					}
					iVar38 = func_347(iVar31, 0, 0, 0);
					bVar39 = iVar38 >= Var0[iVar33]->f_1;
					_databinding_write_data_int_from_parent(&(uParam2->f_30[iVar33]), "count", iVar38);
					_databinding_write_data_int_from_parent(&(uParam2->f_30[iVar33]), "enabled", func_1053(bVar39, 1, 0));
					_databinding_write_data_bool_from_parent(&(uParam2->f_30[iVar33]), "inUse", 1);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = _create_var_string(10, "CRFT_ING_LIST", _create_var_string(0, &(Var0[iVar33])), Var0[iVar33]->f_1);
					StringCopy(&cVar41, "Text", 16);
					_databinding_write_data_string_from_parent(&(uParam2->f_35[iVar33]), &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					_databinding_write_data_int_from_parent(&(uParam2->f_35[iVar33]), &cVar41, func_1053(bVar39, 1, 0));
					_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam2->f_40, -1, 309940639, &(uParam2->f_35[iVar33]));
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!func_98(uParam2, 4) && ((func_98(uParam2, 8192) || uParam2->f_62 == -214678071) || uParam2->f_62 == 278772510))
		{
			bVar34 = false;
			if (func_404(iParam0))
			{
				_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_FIRE"));
			}
		}
		else
		{
			iVar43 = func_347(iParam0, 0, 0, 0);
			iVar44 = func_833(iParam0, 0);
			if (func_98(uParam2, 2) && !func_1064(iParam0))
			{
				bVar34 = false;
				iVar45 = func_1221();
				if (iParam0 == iVar45)
				{
					_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "STEW_MADE"));
				}
				else
				{
					_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - iVar43) > 0 || iVar44 == -1)
			{
				iVar46 = func_405(iParam0, -1636519629);
				if (!func_585(2) && iVar46 == -701492487)
				{
					bVar34 = false;
					_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_CONS"));
				}
				else if (does_entity_exist(iParam3))
				{
					_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(34, "CRFT_BREAK", 1, _create_var_string(0, _0x0139637a3bff8b6d(iParam3, &uVar47))));
				}
				else
				{
					iVar48 = func_224(iParam0, uParam2->f_62, func_583(), 0);
					if (func_98(uParam2, 2))
					{
						_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, func_1223(iParam0)));
					}
					else if (uParam2->f_62 == -214678071)
					{
						if (_databinding_read_data_int_from_parent(uParam2->f_57, "iNumCostVariants") <= 1 && _databinding_read_data_bool_from_parent(uParam2->f_28, "ShowRpgDescription"))
						{
							_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar48));
						}
					}
					else if (uParam2->f_62 == 278772510)
					{
						_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar48));
					}
					else if (iVar46 == -701492487)
					{
						if (iVar48 == 1)
						{
							_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "BREW_ING_HAVE1", iVar48));
						}
						else
						{
							_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "BREW_ING_HAVE", iVar48));
						}
					}
					else
					{
						_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_HAVE", iVar48));
					}
				}
			}
			else
			{
				_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(130, "CRFT_ING_MAX", iVar43, iVar44, _create_var_string(0, iParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_LOCK"));
	}
	else if (!func_98(uParam2, 4) && ((func_98(uParam2, 8192) || uParam2->f_62 == -214678071) || uParam2->f_62 == 278772510))
	{
		bVar34 = false;
		if (func_404(iParam0))
		{
			_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_FIRE"));
		}
	}
	else if (func_98(uParam2, 2) && !func_1064(iParam0))
	{
		iVar49 = func_1221();
		if (iParam0 == iVar49)
		{
			_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "STEW_MADE"));
		}
		else
		{
			_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "STEW_MADE_BETTER"));
		}
	}
	else
	{
		_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

void func_1066(var uParam0)
{
	if (func_98(uParam0, 2))
	{
		if (!func_310(uParam0->f_61, -2011345500))
		{
			func_44(uParam0->f_1[7], 1, 1);
			return;
		}
		if (!func_43(&(uParam0->f_1[7])))
		{
			uParam0->f_1[7] = func_161("CAMP_ADD_TASK", -1981136987, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		}
		if ((uParam0->f_26 > 0 || uParam0->f_61 == Global_1137047->f_339.f_16) || !func_1064(uParam0->f_61))
		{
			func_162(&(uParam0->f_1[7]), 0, 1, 1);
		}
		else
		{
			func_162(&(uParam0->f_1[7]), 1, 1, 1);
		}
	}
}

bool func_1067(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_1068(int iParam0)
{
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_1069(var uParam0)
{
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgHorse", 0);
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgPlayer", 0);
}

void func_1070(var uParam0)
{
	if ((func_310(uParam0->f_61, 1147021565) || func_98(uParam0, 2)) && !func_310(uParam0->f_61, 1919582297))
	{
		if (func_235(uParam0->f_61, 5))
		{
			_0x7e2c766adb2c5f1a(uParam0->f_61, 2);
			_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgHorse", 1);
			_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgPlayer", 0);
		}
		else
		{
			_0x7e2c766adb2c5f1a(uParam0->f_61, 1);
			_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgHorse", 0);
			_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgPlayer", 1);
		}
	}
	else
	{
		_0xd962f8579d702db5();
		_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgHorse", 0);
		_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgPlayer", 0);
	}
}

void func_1071(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0->f_28, "filterIndex");
	uParam0->f_41 = iVar0;
	_databinding_write_data_hash_string_from_parent(uParam0->f_28, "filter", func_1052(uParam0->f_41));
}

int func_1072(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_is_weapon_pistol(iVar0))
	{
		return -236347221;
	}
	else if (_is_weapon_revolver(iVar0))
	{
		return 1537403900;
	}
	else if (_is_weapon_rifle(iVar0))
	{
		return 809653548;
	}
	else if (_is_weapon_repeater(iVar0))
	{
		return 975914773;
	}
	else if (_is_weapon_shotgun(iVar0))
	{
		return -91245513;
	}
	return 0;
}

Vector3 func_1073(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_is_weapon_pistol(iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (_is_weapon_revolver(iVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (_is_weapon_rifle(iVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (_is_weapon_repeater(iVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (_is_weapon_shotgun(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

char* func_1074(var uParam0)
{
	if (is_ped_male(Global_34))
	{
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
	}
	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_1075(var uParam0)
{
	return "craft_trans_stow";
}

void func_1076(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!_0x179a6f0ee2e79026(&uParam15))
	{
		return;
	}
	if (!func_879(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = player_id();
	Param1.f_2 = get_network_time_accurate();
	Param1.f_4 = iParam0;
	trigger_script_event(1, &Param1, 14, 14, &uParam15);
}

void func_1077(int iParam0, bool bParam1)
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (network_is_player_active(iVar0))
	{
		if ((!network_is_player_active((*Global_1134390)[iVar0]->f_38.f_28.f_2) || (*Global_1134390)[iVar0]->f_38.f_28.f_2 == iParam0) || bParam1)
		{
			(*Global_1134390)[iVar0]->f_38.f_28.f_2 = 255;
			(*Global_1134390)[iVar0]->f_38.f_28.f_3 = -1;
		}
	}
}

void func_1078(int iParam0, var uParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	_0x86a68e84e5884951(&Var0);
	Var7.f_3 = 2;
	Var7.f_4 = 24;
	_0x28eeace9b43d9597(&Var0, &Var7, &Var0);
	(*Global_1134390)[iParam0]->f_38.f_28.f_1 = uParam1;
	Global_1137047->f_339.f_1 = uParam1;
	Global_1137047->f_339.f_9 = { Var0 };
}

int func_1079(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return -1;
	}
	if (iParam0 == _0x901e0dc25080c8b9(player_id()))
	{
		return func_530(player_id());
	}
	return func_1224(_0x4be6c13a45cca8ec(iParam0));
}

void func_1080(int iParam0, var uParam1)
{
	Var0.f_8 = iParam0;
	Var0.f_12 = uParam1;
	func_1076(17, Var0, func_109(0, 8));
}

void func_1081(var uParam0)
{
	Var0.f_12 = uParam0;
	func_1076(13, Var0, func_108(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))));
}

Vector3 func_1082(int iParam0)
{
	if (iParam0 == 255)
	{
		return (*Global_1134390)[func_111()]->f_38;
	}
	return (*Global_1134390)[iParam0]->f_38;
}

bool func_1083(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_211(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_655(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1084(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_227(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_886(iParam0);
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

bool func_1085(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_1086(bool bParam0)
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

void func_1087(int iParam0)
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

void func_1088(bool bParam0)
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

void func_1089(bool bParam0)
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

void func_1090(bool bParam0)
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

void func_1091(bool bParam0)
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

void func_1092(bool bParam0)
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

void func_1093(bool bParam0)
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

bool func_1094()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_1095(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

int func_1096()
{
	return &Global_1902818;
}

void func_1097(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1225(*iParam0);
	iVar1 = func_1226(*iParam0);
	iVar2 = func_1227(*iParam0);
	iVar3 = func_1228(*iParam0);
	iVar4 = func_1229(*iParam0);
	iVar5 = func_1230(*iParam0);
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
	iVar6 = func_1231(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1231(iVar1, iVar0);
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
	func_1232(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_1098(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1233())
	{
		Global_1913504->f_125 = get_game_timer();
		Global_1913504->f_126 = iParam1;
	}
	Global_1913504->f_127 = (Global_1913504->f_127 + iParam0);
}

bool func_1099()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_1100()
{
	return is_dlc_present(-2112896652);
}

int func_1101(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_227(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_fits_slot_count(iVar0);
}

void func_1102(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1234(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_1103(int iParam0)
{
	iVar0 = func_845(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_916(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_916(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_1104(int iParam0, bool bParam1, bool bParam2)
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

bool func_1105(int iParam0)
{
	return func_227(iParam0) == 1946043663;
}

bool func_1106(int iParam0)
{
	return func_227(iParam0) == -126813555;
}

bool func_1107(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam0;
	if (func_467(0))
	{
		iVar5 = func_363(func_1235(), iParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_372(1) };
			Var0.f_4 = func_634(iVar5);
			*uParam2->f_1[0] = { func_373(iParam0, Var0, Var0.f_4, 1) };
			if (_0xb881ca836cc4b6d4(uParam2->f_1[0]))
			{
				return true;
			}
		}
	}
	iVar6 = func_384(iParam0, -455129387);
	if (iVar6 != 0)
	{
		if (!func_730(&Var7, &iVar68, iParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			*uParam2->f_1[iVar69] = { func_373(iParam0, *Var7[iVar69], Var7[iVar69]->f_4, 1) };
			if (!_0xb881ca836cc4b6d4(uParam2->f_1[iVar69]))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_225(iParam0, 1, 0) };
	*uParam2->f_1[0] = { func_373(iParam0, Var0, Var0.f_4, 1) };
	if (!_0xb881ca836cc4b6d4(uParam2->f_1[0]))
	{
		return false;
	}
	return true;
}

bool func_1108(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (iParam3 != 541670136 && iParam3 != -1883671814)
	{
		return false;
	}
	if (!func_1236(*uParam1))
	{
		return false;
	}
	if (!func_1237(iParam0, iParam3))
	{
		return false;
	}
	if (_0xa3b8d31c13cb4239(*iParam0, 541670136, uParam1, 17, uParam2, *uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_1238(iParam0, bParam4);
}

bool func_1109(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_383(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_1239(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_1110(int iParam0, bool bParam1)
{
	if (!func_925(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_399(1657716792, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_399(963726415, 1);
	}
	else if (iParam0 == 318000298)
	{
		return func_399(-1939515319, 1);
	}
	else if (iParam0 == -1771777013)
	{
		return func_399(-1903059161, 1);
	}
	else if (iParam0 == 375366730)
	{
		return func_399(-252071901, 1);
	}
	else if (iParam0 == -1309887827)
	{
		return func_399(-611782825, 1);
	}
	return func_399(iParam0, 1);
}

bool func_1111(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_383(iParam0, 2))
	{
		return false;
	}
	*iParam3 = _0x388088bff3681189(iParam0, iParam1);
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
		if (!_0xb542632693d53408(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
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
		func_1240(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_1112(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 2113164098 && iParam3 != -1318406457) && iParam3 != 1702063850)
	{
		return false;
	}
	if (!func_1241(iParam3, uParam1, iParam5))
	{
		return false;
	}
	if (!func_1237(iParam0, iParam3))
	{
		return false;
	}
	if (func_1242(*iParam0, iParam3, uParam1, uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_1238(iParam0, bParam4);
}

bool func_1113(int iParam0)
{
	if (!func_547(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_1243(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_1114(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_1244(_inventory_get_ped_inventory_id(iParam0), iParam1, iParam2, bParam3, iParam4);
}

bool func_1115(int iParam0)
{
	if (!func_1245(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_1246(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1116(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_419(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_1247(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_1248(iVar0, 1);
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
				if (!func_1249(iVar3, 0))
				{
				}
				Global_1904087->f_402[iVar1] = (&Global_1904087->f_402[iVar1] - iVar3);
				return true;
			}
		}
	}
	return false;
}

bool func_1117(int iParam0, int iParam1, bool bParam2)
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
	return func_1250(iVar0, bParam2) >= func_1251(bParam2);
}

int func_1118(int iParam0, int iParam1, int iParam2)
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

int func_1119(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_445(&iParam0);
		if (!func_104(iVar0, 0))
		{
			iVar0 = func_446(iParam0);
		}
	}
	else
	{
		iVar0 = func_446(iParam0);
	}
	return iVar0;
}

bool func_1120(int iParam0, int iParam1)
{
	*iParam1 = func_1252(iParam0);
	return *iParam1 != 0;
}

void func_1121(var uParam0, var uParam1)
{
	_copy_memory(uParam1, uParam0, 96);
}

int func_1122(int iParam0)
{
	if (func_1120(iParam0, &iVar1))
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

int func_1123(int iParam0)
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

void func_1124(int iParam0, int iParam1)
{
	if (func_38() == -1)
	{
		iVar0 = func_244(7);
	}
	else
	{
		iVar0 = _0xf49f14462f0ae27c(player_id());
	}
	func_1118(iVar0, iParam0, iParam1);
}

bool func_1125(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_372(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_373(iParam0, Var0, Var0.f_4, 0) };
	return func_463(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

bool func_1126(var uParam0)
{
	if (!func_1253(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

bool func_1127(struct<2> Param0, var uParam2)
{
	if (!func_121(Param0))
	{
		return false;
	}
	func_1254(uParam2);
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

bool func_1128(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_1129()
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

int func_1130()
{
	return Global_1109804->f_5737.f_632;
}

int func_1131(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_1131(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_1131(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_1132(int iParam0)
{
	return Global_1109804->f_5737.f_451[iParam0]->f_1;
}

bool func_1133(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_1134(var uParam0)
{
	uVar0 = func_1255();
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

bool func_1135(struct<5> Param0, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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

struct<8> func_1136(struct<5> Param0)
{
	return func_1256(Param0, 52, 1);
}

int func_1137(int iParam0)
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

bool func_1138(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_121(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_1257(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_1139(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_966(iParam0))
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

bool func_1140(int iParam0)
{
	if (!func_966(iParam0))
	{
		return false;
	}
	return func_1139(iParam0, 2, 1);
}

int func_1141(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_1258())
	{
		return 0;
	}
	if (!func_525())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_1144(&Global_0, 8);
	}
	func_1144(&Global_0, 1);
	return 1;
}

int func_1142(int iParam0)
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
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_1143(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_297(239, 0);
			break;
		case 16:
			func_297(240, 0);
			break;
		case 34:
			func_297(241, 0);
			break;
		case 52:
			func_297(242, 0);
			break;
		case 2:
			func_297(243, 0);
			break;
		case 3:
			func_297(244, 0);
			break;
		case 53:
			func_297(245, 0);
			break;
		case 15:
			func_297(246, 0);
			break;
		case 24:
			func_297(247, 0);
			break;
		case 38:
			func_297(248, 0);
			break;
		case 27:
			func_297(249, 0);
			break;
		case 13:
			func_297(250, 0);
			break;
		case 19:
			func_297(251, 0);
			break;
		case 20:
			func_297(252, 0);
			break;
		case 35:
			func_297(253, 0);
			break;
		case 39:
			func_297(254, 0);
			break;
		case 50:
			func_297(255, 0);
			break;
		case 7:
			func_297(256, 0);
			break;
		case 21:
			func_297(257, 0);
			break;
		case 18:
			func_297(258, 0);
			break;
		case 6:
			func_297(259, 0);
			break;
		case 30:
			func_297(260, 0);
			break;
		case 49:
			func_297(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_297(263, 0);
			break;
		case 8:
			func_297(264, 0);
			break;
		case 29:
			func_297(265, 0);
			break;
		case 32:
			func_297(266, 0);
			break;
		case 12:
			func_297(267, 0);
			break;
		case 28:
			func_297(268, 0);
			break;
		case 51:
			func_297(269, 0);
			break;
	}
}

void func_1144(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1145()
{
	return Global_1952637->f_1675;
}

int func_1146(bool bParam0)
{
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_373(889965687, func_372(1), 1034665895, 1) };
	iVar19 = func_799(Var15, 552979403, 1, -1);
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
	Var22 = { func_560(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_562(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_563(&Var0, 0, iVar20, iVar21))
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
				func_564(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_800(Var0, 1, 0);
			}
			func_564(iVar20);
			return iVar14;
		}
		func_564(iVar20);
	}
	return 0;
}

int func_1147(int iParam0)
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

bool func_1148(int iParam0, var uParam1, bool bParam2)
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
		func_981(iParam0, 1, bParam2);
	}
	return bVar1;
}

bool func_1149(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	iVar11 = 0;
	Var4 = func_1155(iParam6);
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
		func_1260(uParam0, func_1259(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_793(-1);
		}
		if (_0x44b3a36933ac009c(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_1259(iVar0);
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
			iVar1 = func_264(iVar3, 1);
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
					func_1261(iVar3, 16, 6);
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
							if (func_1262(iVar3) && func_1012(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1264(uParam0, iVar11, func_1263(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_788() == 24043185 && &uParam0->f_1[iVar1] == &Global_1952637->f_83[iVar1]) && func_1263(&(uParam0->f_1[34])) == 0) && !func_430(32)) && !func_430(64))
					{
						uParam0->f_1[iVar1] = func_1161(-1293064293, 0);
						uParam0->f_1[iVar1]->f_1 = 1155669136;
						func_796(uParam0, &(uParam0->f_1[iVar1]), iVar1, 0, iParam9);
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

void func_1150(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_1151(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1152(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1153(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1154(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1155(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_788();
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

void func_1156(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (func_310(iVar1, 160827531) || func_227(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
}

void func_1157(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(&(uParam0->f_1[iVar0]), -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
}

void func_1158(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_227(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
}

bool func_1159(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_227(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

bool func_1160(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

int func_1161(int iParam0, int iParam1)
{
	iVar2 = 0;
	Var3 = { func_560(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_562(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_1265(iVar0, iVar1, iParam1);
		}
		func_564(iVar0);
	}
	return iVar2;
}

void func_1162(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iParam2, -1527414429)) && !func_310(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0]->f_1 == 1530758430 || uParam0->f_1[iVar0]->f_1 == 1334603721) && func_310(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0]->f_1 == 1530758430)
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_794(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			uParam0->f_1[iVar0]->f_1 = -1539589426;
			func_794(iVar0, iParam3);
		}
	}
}

void func_1163(var uParam0, bool bParam1, int iParam2, int iParam3)
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
		func_794(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2]->f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = &uParam0->f_1[iVar0];
		if (func_310(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2]->f_1 = -2081918609;
			func_794(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = &uParam0->f_1[iVar0];
			if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_227(iVar1))
			{
				uParam0->f_1[iParam2]->f_1 = -2081918609;
				func_794(iParam2, iParam3);
			}
		}
	}
}

void func_1164(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 16;
	func_794(iVar0, iParam3);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_794(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_794(iVar0, iParam3);
			func_1004(uParam0, 0, &(uParam0->f_1[iVar0]), iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iParam2, -985549034))
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
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iParam2, -1527414429)) && !func_310(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
}

void func_1165(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_794(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && !func_310(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 13;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 25;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iParam2, 675650051))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
}

bool func_1166(int iParam0)
{
	return &Global_1952637->f_1675.f_1[func_264(iParam0, 1)] != &Global_1952637->f_83[func_264(iParam0, 1)];
}

void func_1167(var uParam0, int iParam1)
{
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam1);
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_794(iVar0, iParam1);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_794(iVar0, iParam1);
	}
}

void func_1168(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_788() == 24043185)
	{
		iVar3 = 1;
	}
	if (func_788() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_227(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_1161(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_794(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_794(iVar0, iParam3);
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iParam2, -1473580422))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_310(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
		}
		else if (func_1011(&(uParam0->f_1[iVar0]), iVar3, -2081918609) != -1)
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
		if (func_227(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_310(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0]->f_1 = -2081918609;
				func_794(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0])
	{
		if (func_227(iVar1) == 1868067663 && func_310(iParam2, -1016441646))
		{
			func_1266(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_794(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_227(&(uParam0->f_1[iVar0])))
	{
		func_794(16, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iParam2, -1650340550))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_227(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_794(iVar0, iParam3);
		}
	}
}

void func_1169(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_788() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_227(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_1161(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_794(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_310(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_1175(uParam0, iParam3, 1, 0);
		}
		else if (func_310(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
	func_794(iVar0, iParam3);
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iVar1, 1090938458)) && func_310(iParam2, 475297062))
	{
		func_1266(uParam0, iVar0, iParam3);
	}
}

void func_1170(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	func_794(36, iParam2);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
	if (func_788() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0] = func_1161(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_794(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0] && func_310(iVar1, 353024991))
	{
		func_1266(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_227(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
}

void func_1171(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_227(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_227(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0]->f_1 != 1155669136)
			{
				uParam0->f_1[iVar0]->f_1 = 1155669136;
				func_794(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_794(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_310(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_1175(uParam0, iParam3, 1, 0);
		}
		else if (func_310(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
}

void func_1172(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_1266(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam2);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_310(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_1175(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_794(iVar0, iParam2);
		}
	}
}

void func_1173(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_794(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = -2081918609;
		func_794(iVar0, iParam3);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_310(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (912453393 == func_227(iVar1) && uParam0->f_1[iVar0]->f_1 != -2081918609)
		{
			uParam0->f_1[iVar0]->f_1 = -2081918609;
			func_794(iVar0, iParam3);
		}
	}
}

void func_1174(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_310(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam3);
	}
}

void func_1175(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam1);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam1);
	}
	iVar0 = 38;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_227(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_794(iVar0, iParam1);
	}
}

void func_1176(var uParam0, int iParam1, int iParam2)
{
	*Global_17411.f_55.f_644.f_33[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
}

void func_1177(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	Global_17411.f_55.f_644.f_33[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1176(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1178(int iParam0, int iParam1, int iParam2)
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

struct<28> func_1179(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_211(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1185(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1180(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_659(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_661(func_1267(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_662(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_1181(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_211(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_1185(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_1182(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_661(func_1268(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_662(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_1183(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_211(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1185(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1184(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_659(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_661(func_1269(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_662(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_1185(var uParam0, bool bParam1)
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
		Var0.f_15 = func_384(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_651() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1186()
{
	return func_121(*Global_1051213);
}

bool func_1187(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_1188(int iParam0, int iParam1)
{
	if (!func_104(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_1270(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	iVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return iVar4;
}

bool func_1189()
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
	if (!func_1271(iVar0))
	{
		return false;
	}
	return true;
}

int func_1190(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_225(2084597891, 1, 0) };
	Var6 = { func_1272(2084597891, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_390(1702063850, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_233(iVar0, Var22);
	}
	return iVar0;
}

void func_1191(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_640() < iParam0)
	{
		iParam0 = func_640();
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_557(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_1192(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_554(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_1193(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	iVar1 = func_646(iParam0);
	iVar2 = func_645(iParam0);
	if (iVar2 != 0)
	{
		if (!func_102(0) || func_103())
		{
			if (bParam2)
			{
				func_106(func_105(149041100, -1740237568), 1);
				return func_1273(iVar2, iVar1, iParam0, iParam1);
			}
			Var3 = { func_225(iParam0, 1, 0) };
			Var8 = { func_373(iParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_1274(iParam0, &Var8, 1, -142743235, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -142743235;
				Var13.f_16 = -1;
				Var13 = 1;
				Var13.f_3 = 1;
				func_233(iVar12, Var13);
			}
			return 0;
		}
		if (func_214(iParam0, 1, 1, -142743235))
		{
			iVar0 = func_1273(iVar2, iVar1, iParam0, iParam1);
		}
	}
	return iVar0;
}

int func_1194(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	iVar0 = _get_ped_damage(iParam0);
	iVar1 = _0xf8b48a361dc388ae(iParam0);
	if (iVar1 == 2)
	{
		iVar2 = 4;
	}
	else if (iVar1 == 1)
	{
		iVar2 = 3;
	}
	else
	{
		iVar3 = _get_ped_quality(iParam0);
		switch (iVar3)
		{
			case 0:
				iVar2 = 0;
				break;
			case 1:
				iVar2 = 1;
				break;
			case -1:
			case 2:
				iVar2 = 2;
				break;
		}
	}
	if (Global_17333.f_2 != 3)
	{
		iVar1 = Global_17333.f_2;
	}
	uVar4 = _0x6b89faa36fc909a3(uParam1, iParam0, iVar0, iVar2);
	return uVar4;
}

bool func_1195(int iParam0)
{
	fVar0 = (func_1275(iParam0) - _0xdf66a37936d5f3d9(iParam0));
	return fVar0 <= 1f;
}

void func_1196(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_1225(*iParam0);
	iVar1 = func_1226(*iParam0);
	iVar2 = func_1227(*iParam0);
	iVar3 = func_1228(*iParam0);
	iVar4 = func_1229(*iParam0);
	iVar5 = func_1230(*iParam0);
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
		iVar7 = func_1231(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1232(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1197(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_709(2);
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

int func_1198(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_709(2);
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

bool func_1199(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1276(iParam1) || !func_1276(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1200(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_709(2);
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

void func_1201(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_709(2);
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

bool func_1202(int iParam0, int iParam1, float fParam2)
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
	_set_attribute_core_value(iParam0, func_1277(iParam1), ceil(fParam2));
	return true;
}

void func_1203(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_709(2);
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

void func_1204(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_1278(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_1279(iParam1), fParam2, -1);
	}
}

void func_1205(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_709(2);
	}
	uVar0 = Global_1296859->f_21;
	func_1280(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1281(iParam0, uVar0, iParam3);
	}
}

bool func_1206(int iParam0, bool bParam1)
{
	return func_1199(func_1096(), iParam0, bParam1);
}

float func_1207(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_709(1);
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

int func_1208(float fParam0)
{
	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return round(((fVar0 / 100f) * to_float(10)));
}

int func_1209(int iParam0, float fParam1, int iParam2)
{
	if (!func_1282(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_709(2);
	}
	func_1283(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

bool func_1210(int iParam0)
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

char* func_1211(int iParam0)
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

void func_1212(int iParam0)
{
	iVar1 = Global_1146212->f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1146212->f_47689.f_1[iVar2];
		iVar3 = func_1284(iVar0, 1);
		if (&Global_1146212->f_35859.f_919[iVar3] == iParam0)
		{
			func_1285(iVar0);
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

void func_1213(int iParam0, bool bParam1, bool bParam2)
{
	func_1042(iParam0, 100f, bParam1, bParam2, 1, 2);
}

void func_1214(var uParam0, int iParam1, int iParam2)
{
	iVar0 = _item_database_get_acquire_costs_count(iParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (_item_database_get_acquire_cost(iParam1, iVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == 1644203656 && (Var1 != -489628648 && Var1 != -2141192156)) && (Global_1913694->f_1579 || !func_688(iParam1, Var1, 1)))
				{
					((*Global_1913694)[(uParam0->f_44 - 1)])->f_7++;
				}
			}
			else
			{
				((*Global_1913694)[(uParam0->f_44 - 1)])->f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_1215(var uParam0, int iParam1)
{
	iVar2 = func_405(iParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_642(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar2, 0) };
	if (func_643(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			iVar14 = func_644(iVar13, iVar0);
			if (func_104(iVar14, 0))
			{
				if (Global_1913694->f_1579 || !func_688(iVar14, 278772510, 1))
				{
					((*Global_1913694)[(uParam0->f_44 - 1)])->f_7++;
				}
			}
			iVar13++;
		}
		func_648(iVar0);
	}
}

void func_1216(var uParam0, int iParam1, int iParam2)
{
	iVar2 = func_405(iParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_642(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_643(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_44 >= 175)
			{
			}
			else
			{
				iVar14 = func_644(iVar13, iVar0);
				if (func_104(iVar14, 0) && iVar14 != iParam1)
				{
					func_1050(uParam0, iVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_648(iVar0);
	}
}

void func_1217(int iParam0)
{
	func_648(*iParam0);
	*iParam0 = -1;
}

void func_1218(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = (*Global_1913694)[iParam1]->f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, iVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (_databinding_is_data_id_valid((*Global_1913694)[iParam1]->f_1))
	{
		_databinding_remove_data_entry((*Global_1913694)[iParam1]->f_1);
	}
	iVar5 = _databinding_add_data_container(uParam0->f_29, &cVar1);
	(*Global_1913694)[iParam1]->f_1 = iVar5;
	iVar6 = (*Global_1913694)[iParam1]->f_5;
	iVar7 = func_224(iVar0, iVar6, bParam3, 0);
	iVar8 = func_347(iVar0, 0, 0, 0);
	iVar9 = func_833(iVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	_databinding_add_data_hash(iVar5, "name", iVar0);
	_databinding_add_data_int(iVar5, "eOutputItem", iVar0);
	_databinding_add_data_int(iVar5, "eCost", iVar6);
	_databinding_add_data_int(iVar5, "iIndex", iParam1);
	if (!Global_1913694->f_1579 && func_688(iVar0, iVar6, 1))
	{
		bVar10 = true;
		(*Global_1913694)[iParam1]->f_7 = 0;
	}
	_databinding_add_data_int(iVar5, "iCurCostVariant", (*Global_1913694)[iParam1]->f_8);
	_databinding_add_data_int(iVar5, "iNumCostVariants", (*Global_1913694)[iParam1]->f_7);
	_databinding_add_data_bool(iVar5, "bFireCrafting", iVar6 == -257768755);
	StringIntConCat(&cVar11, func_834(iVar9, iVar7), 8);
	_databinding_add_data_string(iVar5, "count", &cVar11);
	_databinding_add_data_bool(iVar5, "visible", false);
	bVar13 = false;
	if (func_98(uParam0, 2))
	{
		iVar12 = func_1053(((iVar7 > 0 && func_1064(iVar0)) && !bVar10), 1, 0);
	}
	else
	{
		iVar12 = func_1053(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (iVar12 == 0 && func_1219(iVar0))
	{
		if (func_1220(iVar0, iVar6, uParam0, bParam3, &iVar14, &iVar15, &iVar16))
		{
			iVar12 = 1;
			bVar13 = true;
			iVar0 = iVar14;
			iVar6 = iVar15;
			_databinding_write_data_hash_string_from_parent(iVar5, "name", iVar14);
			_databinding_write_data_int_from_parent(iVar5, "eOutputItem", iVar14);
			_databinding_write_data_int_from_parent(iVar5, "eCost", iVar15);
			_databinding_write_data_int_from_parent(iVar5, "iCurCostVariant", iVar16);
		}
	}
	if (func_540(iVar0, &Var17, 805880880, 0, 0, 0))
	{
		_databinding_add_data_string(iVar5, "texture", Var17);
		_databinding_add_data_string(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!func_98(uParam0, 4))
	{
		if ((iVar6 == -214678071 || iVar6 == 278772510) || iVar6 == -257768755)
		{
			iVar12 = 0;
		}
	}
	if (iVar12 == 1)
	{
		if (!func_585(2) && func_405(iVar0, -1636519629) == -701492487)
		{
			(*Global_1913694)[iParam1]->f_2 = 0;
			iVar12 = 0;
		}
		else
		{
			uParam0->f_46++;
			if (func_235(iVar0, uParam0->f_41))
			{
				uParam0->f_47++;
			}
			(*Global_1913694)[iParam1]->f_2 = 1;
		}
	}
	else
	{
		(*Global_1913694)[iParam1]->f_2 = 0;
	}
	if (bVar13)
	{
	}
	_databinding_add_data_bool(iVar5, "lockVisible", bVar10);
	_databinding_add_data_int(iVar5, "enabled", iVar12);
	Var20.f_1 = 20;
	bVar42 = false;
	_databinding_add_data_hash(iVar5, "deadeyeCoreDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "deadeyeDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthCoreDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaCoreDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthHorseDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthCoreHorseDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaCoreHorseDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaHorseDurationCategory", 0);
	if (_item_database_fillout_item_effects_ids(iVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (_item_database_fillout_item_effects_id_info(&(Var20.f_1[iVar43]), &Var44))
			{
				iVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						_databinding_add_data_int(iVar5, "deadeye", iVar51);
						break;
					case 1857353317:
						_databinding_add_data_int(iVar5, "deadeyeCore", iVar51);
						break;
					case -826379728:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "deadeyeCore", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "deadeye", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						_databinding_add_data_int(iVar5, "health", iVar51);
						break;
					case -416929031:
						_databinding_add_data_int(iVar5, "healthCore", iVar51);
						break;
					case 1869697234:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "health", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "healthCore", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						_databinding_add_data_int(iVar5, "stamina", iVar51);
						break;
					case 1681823811:
						_databinding_add_data_int(iVar5, "staminaCore", iVar51);
						break;
					case -1191740624:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "staminaCore", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "stamina", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						_databinding_add_data_int(iVar5, "healthHorse", iVar51);
						break;
					case -778289619:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "healthHorse", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						_databinding_add_data_int(iVar5, "healthCoreHorse", iVar51);
						break;
					case 1136630075:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "healthCoreHorse", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						_databinding_add_data_int(iVar5, "staminaCoreHorse", iVar51);
						break;
					case 1365603835:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "staminaCoreHorse", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "staminaHorse", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	_databinding_add_data_bool(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_29, -1, -2047994727, iVar5);
	}
}

bool func_1219(int iParam0)
{
	return true;
}

bool func_1220(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	if (!Global_1913694->f_1579 && func_688(iParam0, iParam1, 1))
	{
		return false;
	}
	if (func_98(uParam2, 2) && !func_1064(iParam0))
	{
		return false;
	}
	if (iParam1 == -214678071 || iParam1 == 278772510)
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
		iVar12 = func_405(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return false;
		}
		Var2 = { func_642(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar12, 0) };
		if (func_643(Var2, &iVar0, &iVar1, 0))
		{
			iVar13 = 0;
			while (iVar13 < iVar1)
			{
				iVar14 = func_644(iVar13, iVar0);
				if (iParam0 == iVar14)
				{
				}
				else if (!Global_1913694->f_1579 && func_688(iVar14, 278772510, 1))
				{
				}
				else if (func_876(iVar14, 278772510, 0, bParam3, 0) && !func_592(iVar14, 1, 0))
				{
					func_648(iVar0);
					*iParam4 = iVar14;
					*iParam5 = 278772510;
					*iParam6 = iVar13;
					return true;
				}
				iVar13++;
			}
			func_648(iVar0);
		}
		if (iParam1 == 278772510)
		{
			Var2 = { func_642(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (func_643(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					iVar16 = func_644(iVar15, iVar0);
					if (iParam0 == iVar16)
					{
					}
					else if (!Global_1913694->f_1579 && func_688(iVar16, -214678071, 1))
					{
					}
					else if (func_876(iVar16, -214678071, 0, bParam3, 0) && !func_592(iVar16, 1, 0))
					{
						func_648(iVar0);
						*iParam4 = iVar16;
						*iParam5 = -214678071;
						*iParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				func_648(iVar0);
			}
		}
	}
	else
	{
		iVar17 = _item_database_get_acquire_costs_count(iParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		iVar65 = 0;
		while (iVar65 < iVar17)
		{
			if (_item_database_get_acquire_cost(iParam0, iVar65, &Var18))
			{
				if (Var18.f_2 == 1644203656)
				{
					if ((Var18 != -489628648 && Var18 != -2141192156) && (Global_1913694->f_1579 || !func_688(iParam0, Var18, 1)))
					{
						if (func_876(iParam0, Var18, 0, bParam3, 0) && !func_592(iParam0, 1, 0))
						{
							*iParam4 = iParam0;
							*iParam5 = Var18;
							*iParam6 = iVar65;
							return true;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return false;
}

int func_1221()
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	return func_1049(iVar0);
}

int func_1222(int iParam0)
{
	switch (iParam0)
	{
		case -1171462349:
			return 4;
		case 1689071181:
			return 3;
		case -1612693182:
			return 2;
		case 1856073229:
			return 1;
		case 1046181202:
			return 0;
		default:
			break;
	}
	if (func_310(iParam0, -2011345500))
	{
		return 5;
	}
	return 0;
}

char* func_1223(int iParam0)
{
	switch (func_1222(iParam0))
	{
		case 5:
			return "STEW_TIP_DAILY";
		case 4:
			return "STEW_TIP_BEST";
		case 3:
			return "STEW_TIP_HIGH";
		case 2:
			return "STEW_TIP_MED";
		case 1:
			return "STEW_TIP_LOW";
		default:
			break;
	}
	return "STEW_TIP_LOW";
}

int func_1224(int iParam0)
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

int func_1225(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1053(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_1226(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_1227(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_1228(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_1229(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_1230(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_1231(int iParam0, int iParam1)
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

void func_1232(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1286(iParam0, iParam6);
	func_1287(iParam0, iParam5);
	func_1288(iParam0, iParam4);
	func_1289(iParam0, iParam3);
	func_1290(iParam0, iParam2);
	func_1291(iParam0, iParam1);
}

bool func_1233()
{
	return Global_1913504->f_127 == 0;
}

void func_1234(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1292(&(uParam0->f_4));
}

int func_1235()
{
	return Global_1915715->f_20241;
}

bool func_1236(struct<17> Param0)
{
	if (!func_637(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_1237(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_1293(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_1294(iParam0))
		{
			return false;
		}
		if (!func_1293(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_1238(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_1294(iParam0);
	}
	return true;
}

bool func_1239(int iParam0, int iParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1240(int iParam0, int iParam1, var uParam2, int iParam3)
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
	if (!_0xa97ee5e4589fcf5a(iParam0, &Var7) || Var7 == 0)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_227(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_1241(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_104(uParam1->f_8, 0) && !func_383(func_382(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_166(iParam2, 128))
	{
		if (func_227(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_166(iParam2, 16))
	{
		if (!func_659(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_1242(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam3, *uParam3);
}

bool func_1243(int iParam0, int iParam1)
{
	iVar0 = func_1295(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

int func_1244(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_104(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_1296(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_346(iParam1) };
	if (_stat_id_is_valid(&Var3))
	{
		if ((func_1188(iParam0, iParam1) - iParam2) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var3, iParam2);
		}
		else if ((func_1188(iParam0, iParam1) - iParam2) < 0)
		{
			func_1244(iParam0, iParam1, func_347(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_1297(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_344(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

bool func_1245(int iParam0)
{
	if (!func_104(iParam0, 0))
	{
		return false;
	}
	return (func_310(iParam0, 1686880204) || _0x4aef1fb5b9011d75(iParam0));
}

int func_1246(int iParam0, int iParam1)
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

int func_1247(int iParam0)
{
	if (!func_1115(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_1248(int iParam0, int iParam1)
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

bool func_1249(int iParam0, bool bParam1)
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
	if (func_1250(iVar1, bParam1) == 0)
	{
		return false;
	}
	iVar2 = iParam0;
	if (iVar2 > func_1250(iVar1, bParam1))
	{
		iVar2 = func_1250(iVar1, bParam1);
	}
	if (!bParam1)
	{
		(*Global_1291106)[iVar1]->f_7 = ((*Global_1291106)[iVar1]->f_7 - iVar2);
	}
	else
	{
		(*Global_1291106)[iVar1]->f_8 = ((*Global_1291106)[iVar1]->f_8 - iVar2);
	}
	if (func_1250(iVar1, bParam1) < 0)
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
	else if (func_1250(iVar1, bParam1) > func_1251(bParam1))
	{
		if (!bParam1)
		{
			(*Global_1291106)[iVar1]->f_7 = func_1251(bParam1);
		}
		else
		{
			(*Global_1291106)[iVar1]->f_8 = func_1251(bParam1);
		}
	}
	return true;
}

int func_1250(int iParam0, bool bParam1)
{
	return func_1053(bParam1, (*Global_1291106)[iParam0]->f_8, (*Global_1291106)[iParam0]->f_7);
}

int func_1251(bool bParam0)
{
	return func_1053(bParam0, Global_1901947->f_681.f_30, Global_1901947->f_681.f_29);
}

int func_1252(int iParam0)
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

bool func_1253(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_1254(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_1255()
{
	return Global_1071686->f_28448[32]->f_3;
}

struct<8> func_1256(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(&Var0, &vParam0))
	{
	}
	return Var0;
}

int func_1257(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_950(Param0);
	}
	return -1;
}

bool func_1258()
{
	return !Global_1572887->f_9;
}

int func_1259(int iParam0)
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

void func_1260(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1298(uParam0->f_1[iVar0], 2))
		{
			if (func_1299(iVar0, iParam1))
			{
				vVar4 = { func_1300(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1952637->f_83[iVar0]) && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1301(iVar0, 4))
				{
					func_1302(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1303(iVar0, 4, 6);
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

void func_1261(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_264(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_264(iParam0, 1)])->f_11 || iParam1);
}

bool func_1262(int iParam0)
{
	Global_1952637->f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_1150(&(Global_1952637->f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

int func_1263(int iParam0)
{
	if (!func_104(iParam0, 0))
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

void func_1264(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_310(&(uParam0->f_1[34]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_1301(iVar0, 16);
		if (bVar1)
		{
			func_1302(iVar0, 16, 9);
		}
		if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_794(iVar0, iParam3);
			}
			if (!bParam2 && func_1263(&(uParam0->f_1[iVar0])) != 0)
			{
			}
			else if (func_1299(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
				uParam0->f_1[iVar0]->f_1 = 0;
				func_796(uParam0, &(uParam0->f_1[iVar0]), iVar0, 1, iParam3);
				func_794(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_796(uParam0, &(uParam0->f_1[iVar0]), iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_1265(int iParam0, int iParam1, int iParam2)
{
	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_788() == 24043185)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_563(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (_get_ped_component_category(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != 1733464892 && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_1263(Var1.f_4) != 0)
			{
			}
			else if (func_310(Var1.f_4, -166674229))
			{
			}
			else if (func_310(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_227(Var1.f_4);
				if (func_1305(iParam2, func_1304(iVar15)))
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

void func_1266(var uParam0, int iParam1, int iParam2)
{
	if (func_310(&(uParam0->f_1[iParam1]), 343781202))
	{
		func_994(uParam0, &(uParam0->f_1[iParam1]));
	}
	else
	{
		uParam0->f_1[iParam1] = &Global_1952637->f_83[iParam1];
		uParam0->f_1[iParam1]->f_1 = 0;
		func_794(iParam1, iParam2);
	}
}

bool func_1267(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_1268(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_1269(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

struct<4> func_1270(int iParam0, int iParam1)
{
	Var0 = { func_1306(iParam0) };
	return func_1307(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_1271(int iParam0)
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

struct<16> func_1272(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_373(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_384(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_651() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_1273(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_102(0) || func_103())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_1309(iParam1, func_1308(iParam2), &Var1, 1);
		if (func_1310(iVar0, &Var1, 0, 0))
		{
		}
		func_297(501, 0);
		return 0;
	}
	_0xb29c553ba582d09e(&uVar13, iParam0, iParam1, func_1308(iParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_104(&(uVar13[iVar29]), 0) && !func_310(&(uVar13[iVar29]), 1286414894)) && !&uVar13[iVar29] == iParam2)
		{
			func_356(&(uVar13[iVar29]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
	func_349(func_102(0), 0, 0);
	return iVar30;
}

int func_1274(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return -1;
	}
	if (func_729(iParam0))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_380(*uParam1, &Var0, 1, 0, -1))
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
	Var14 = { func_1185(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = iParam3;
	iVar30 = -1;
	iVar30 = func_390(1702063850, &Var14, bParam5);
	if (bParam4 && iVar30 != -1)
	{
		Var31.f_7 = -142743235;
		Var31.f_16 = -1;
		Var31 = 1;
		func_233(iVar30, Var31);
	}
	return iVar30;
}

float func_1275(int iParam0)
{
	return (_0x592f58bc4d2a2cf3(iParam0, 0) - IntToFloat(func_1311(2)));
}

bool func_1276(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1230(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1229(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1228(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1225(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1226(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1227(iParam0);
	if (iVar5 < 1 || iVar5 > func_1231(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_1277(int iParam0)
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

char* func_1278(int iParam0)
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

char* func_1279(int iParam0)
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

void func_1280(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_709(2);
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

void func_1281(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_709(2);
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

bool func_1282(int iParam0)
{
	if (func_1210(iParam0))
	{
		return true;
	}
	else if (func_1312(iParam0))
	{
		return true;
	}
	return false;
}

void func_1283(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_709(1);
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

int func_1284(int iParam0, int iParam1)
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

int func_1285(int iParam0)
{
	if (!func_1313(iParam0))
	{
		return 0;
	}
	iVar0 = func_1284(iParam0, 1);
	if (!func_1314(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_1315(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_1316(iParam0, iVar1))
		{
			case 0:
				func_1317(iVar1, iParam0, iVar4);
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
						func_1317(iVar1, iParam0, iVar4);
						func_1318(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_1318(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1319(iVar1, 1);
				func_1320(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_1321(iVar2, 0);
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
			func_1322(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

void func_1286(int iParam0, int iParam1)
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

void func_1287(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1288(int iParam0, int iParam1)
{
	iVar0 = func_1226(*iParam0);
	iVar1 = func_1225(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1231(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1289(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1290(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1291(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1292(var uParam0)
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

bool func_1293(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

bool func_1294(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_916(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_916(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_916(*iParam0, 2, 0, 0);
		return false;
	}
	func_916(*iParam0, 1, 0, 0);
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

int func_1295(int iParam0)
{
	if (!_item_database_fillout_satchel_data(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

bool func_1296(int iParam0, int iParam1, int iParam2)
{
	if (!func_104(iParam1, 0))
	{
		return false;
	}
	return func_1188(iParam0, iParam1) >= iParam2;
}

int func_1297(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_104(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_1306(iParam0) };
	Var5 = { func_1307(iParam0, iParam1, Var0, Var0.f_4) };
	return func_1323(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

bool func_1298(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1299(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

Vector3 func_1300(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return *Global_17411.f_55.f_644.f_33[iParam1]->f_1.f_1[iParam0];
}

bool func_1301(int iParam0, int iParam1)
{
	return (Global_1952637->f_83[iParam0]->f_11 && iParam1) != 0;
}

void func_1302(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 - (Global_1952637->f_83[iParam0]->f_11 && iParam1));
}

void func_1303(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 || iParam1);
}

int func_1304(int iParam0)
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

bool func_1305(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

struct<5> func_1306(int iParam0)
{
	Var0 = { func_1307(iParam0, 1328661203, func_651(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_1307(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_104(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_1308(int iParam0)
{
	if (func_310(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_310(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_310(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

struct<12> func_1309(int iParam0, int iParam1, var uParam2, bool bParam3)
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
		func_717(uParam2, 1528001899);
	}
	else
	{
		func_717(uParam2, 1884295263);
	}
	func_717(uParam2, iVar0);
	return *uParam2;
}

int func_1310(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (0 == iParam0)
	{
		return 0;
	}
	return func_718(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

int func_1311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1034(2) * 2;
		case 1:
			return func_1038(2) * 2;
		case 2:
			return func_1036(2) * 2;
		default:
			break;
	}
	return -1;
}

bool func_1312(int iParam0)
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

bool func_1313(int iParam0)
{
	iVar0 = func_1284(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_1314(int iParam0)
{
	iVar0 = func_1315(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_1315(int iParam0, int iParam1)
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

int func_1316(int iParam0, int iParam1)
{
	iVar0 = func_1324(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_1319(iParam1, 1);
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

int func_1317(int iParam0, int iParam1, int iParam2)
{
	if (!func_1313(iParam1))
	{
		return 0;
	}
	if (!func_1325(iParam0))
	{
		return 0;
	}
	iVar0 = func_1319(iParam0, 1);
	func_1326(iParam0, iParam1, iParam2);
	if (func_1327(*Global_1146212->f_35859.f_3116[iVar0]) && func_1328(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_1329(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_1330(vVar1))
		{
			if (func_1331(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1332(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1333(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_1333(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_1318(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1319(int iParam0, int iParam1)
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

void func_1320(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_1321(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_1322(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

int func_1323(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_729(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1334(iParam0, *uParam2, &Var0, 0))
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

int func_1324(int iParam0)
{
	if (func_1335(iParam0))
	{
		return (func_1336(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_1325(int iParam0)
{
	iVar0 = func_1319(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_1326(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1284(iParam1, 1);
	iVar1 = func_1319(iParam0, 1);
	iVar2 = func_1315(&(Global_1146212->f_35859.f_919[iVar0]), 1);
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
		iVar5 = func_1337(iVar3, 1);
		if (!func_1338(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_1339(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_1340(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_1341(iVar6))
		{
		}
		else
		{
			iVar8 = func_1342(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_1343(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1327(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1328(int iParam0, int iParam1)
{
	if (!func_1325(iParam0))
	{
		return false;
	}
	if (!func_1344(iParam1))
	{
		return false;
	}
	iVar0 = func_1345(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_1329(int iParam0)
{
	iVar0 = func_1346(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_1330(vector3 vParam0)
{
	if (!func_1325(vParam0.x))
	{
		return false;
	}
	if (!func_1313(vParam0.y))
	{
		return false;
	}
	if (!func_1347(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1331(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1284(iParam1, 1);
	iVar1 = func_1319(iParam0, 1);
	iVar2 = func_1315(&(Global_1146212->f_35859.f_919[iVar0]), 1);
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
		iVar5 = func_1337(iVar3, 1);
		if (!func_1338(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_1339(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_1348(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_1341(iVar6))
		{
		}
		else if (!func_1349(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_1342(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_1350(iVar6);
			}
		}
		iVar7++;
	}
	func_1351(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_1332(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_1344(iParam0))
	{
		return;
	}
	iVar0 = func_1345(iParam0, 1);
	if (!func_1325(iParam1))
	{
		return;
	}
	if (!func_1313(iParam2))
	{
		return;
	}
	if (!func_1347(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_1333(int iParam0)
{
	if (!func_1344(iParam0))
	{
		return;
	}
	iVar0 = func_1345(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

bool func_1334(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
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

bool func_1335(int iParam0)
{
	iVar0 = func_1284(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_1336(int iParam0)
{
	iVar0 = func_1284(iParam0, 1);
	if (func_1335(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1352(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1353(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1354(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_1355(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1356(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1357(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1337(int iParam0, int iParam1)
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

bool func_1338(int iParam0)
{
	iVar0 = func_1337(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_1339(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_1358(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_1340(int iParam0)
{
	if (!func_1338(iParam0))
	{
		return;
	}
	iVar0 = func_1337(iParam0, 1);
	if (!func_1359(&(Global_1146212->f_2169[iVar0])))
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
	if (!func_1360(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_1361(Global_1146212->f_2169[iVar0]->f_203, 1);
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

bool func_1341(int iParam0)
{
	iVar0 = func_1342(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_1342(int iParam0, int iParam1)
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

void func_1343(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_1362();
			break;
		case -2103256604:
			func_1363();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_1364(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_1364(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_1364(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_297(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_1364(iParam0));
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
			func_1366(func_1365(iParam0));
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
			func_1367();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_1359(17);
			break;
		case -824728332:
			func_1359(16);
			break;
	}
}

bool func_1344(int iParam0)
{
	iVar0 = func_1345(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1345(int iParam0, int iParam1)
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

int func_1346(int iParam0)
{
	iVar0 = func_1368(iParam0);
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
		iVar64 = func_1319(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_1369(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_1370(&(Global_1146212->f_35859.f_9503[iVar65])) };
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

bool func_1347(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_1348(int iParam0)
{
	if (!func_1338(iParam0))
	{
		return;
	}
	iVar0 = func_1337(iParam0, 1);
	if (!func_1359(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_1360(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_1361(Global_1146212->f_2169[iVar0]->f_203, 1);
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

bool func_1349(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_1371(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_1350(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_1362();
			break;
		case -2103256604:
			func_1363();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_1364(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_1364(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_1364(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_297(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_1364(iParam0));
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
			iVar2 = func_1365(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1372(iParam0, 0));
			func_1373(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1372(iParam0, 1));
			func_1373(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1372(iParam0, 2));
			func_1373(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1372(iParam0, 3));
			func_1373(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_1365(iParam0);
			func_1373(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_1365(iParam0);
			func_1373(iVar2, 4, 1, -1, 0);
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
			func_1374();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_1359(17);
			break;
		case -824728332:
			func_1359(16);
			break;
	}
}

void func_1351(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1375(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_1376(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

bool func_1352(int iParam0)
{
	iVar0 = func_1284(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1353(int iParam0)
{
	iVar0 = func_1284(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1354(int iParam0)
{
	iVar0 = func_1284(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1355(int iParam0)
{
	iVar0 = func_1284(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_1356(int iParam0)
{
	iVar0 = func_1284(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1357(int iParam0)
{
	iVar0 = func_1284(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_1358(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_1377(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_1359(int iParam0)
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

bool func_1360(int iParam0)
{
	iVar0 = func_1361(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1361(int iParam0, int iParam1)
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

void func_1362()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_277((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_1363()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_1364(int iParam0)
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

int func_1365(int iParam0)
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

void func_1366(int iParam0)
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

void func_1367()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

int func_1368(int iParam0)
{
	if (!func_1344(iParam0))
	{
		return -1;
	}
	iVar0 = func_1345(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

bool func_1369(int iParam0, int iParam1)
{
	if (!func_1325(iParam0))
	{
		return false;
	}
	iVar0 = func_1319(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_1327(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_1345(iVar2, 1)];
		Var4 = { func_1370(iVar3) };
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
			if (!func_1378() && !func_1379())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_1378())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_1324(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_1324(iParam1);
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
			iVar1 = func_1324(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_415(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_1020(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_1324(iParam1);
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

struct<31> func_1370(int iParam0)
{
	iVar0 = func_1319(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_1371(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_1377(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1372(int iParam0, int iParam1)
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

void func_1373(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_1374()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_1375(int iParam0)
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

char* func_1376(int iParam0)
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

bool func_1377(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_1380(iVar7);
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

bool func_1378()
{
	return Global_1572887->f_6;
}

bool func_1379()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_121(func_120(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_1187(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

int func_1380(int iParam0)
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

