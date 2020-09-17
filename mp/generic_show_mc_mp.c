void __EntryFunction__()
{
	func_1(ScriptParam_0);
	func_2(&uLocal_16, &ScriptParam_0);
	Local_273.f_1 = network_get_participant_index(player_id());
	while (!func_3(&uLocal_16, &vLocal_176, &Local_273))
	{
		func_4(&uLocal_16, &vLocal_176, &Local_273);
		wait(0);
	}
	func_5(&Local_273);
	func_6(&uLocal_16, &vLocal_176, &Local_273, 0);
	func_7(&uLocal_16);
	func_8();
}

void func_1(int iParam0, var uParam1, var uParam2, var uParam3)
{
	func_9(32, iParam0);
	func_10();
	network_register_host_broadcast_variables(&uLocal_16, 160, 7);
	func_11(_0xba24095ea96dfe17(&uLocal_16), 160, "m_GSMC_HostData");
	network_register_player_broadcast_variables(&vLocal_176, 97, 8);
	func_12(_0x690806bc83bc8ca2(vLocal_176[0]), 97, "m_GSMC_ClientData");
	func_13(0);
	set_this_script_can_be_paused(true);
	register_script_with_audio(1);
	if (network_is_host_of_this_script())
	{
	}
}

void func_2(var uParam0, var uParam1)
{
	if (network_is_host_of_this_script())
	{
		if (uParam0->f_128 == -1)
		{
			uParam0->f_128 = uParam1->f_2;
			uParam0->f_140 = uParam1->f_1;
		}
		*uParam0 = uParam1->f_3;
	}
}

bool func_3(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam1)[uParam2->f_1]->f_1 == 10)
	{
		if (Global_1291035->f_3[0]->f_3 || func_14(&(uParam0->f_144)) > 15000)
		{
			return true;
		}
	}
	if (func_15(0, 0))
	{
		return true;
	}
	if (func_17(func_16(), 128, 0))
	{
		return true;
	}
	return false;
}

void func_4(var uParam0, var uParam1, var uParam2)
{
	if (network_is_host_of_this_script())
	{
		func_18(uParam0, uParam2);
	}
	func_19(uParam0, uParam1, uParam2);
}

void func_5(var uParam0)
{
	if (does_cam_exist(uParam0->f_252))
	{
		if (is_cam_rendering(uParam0->f_252))
		{
			render_script_cams(false, false, 3000, true, false, 0);
			set_cam_active(uParam0->f_252, false);
		}
		destroy_cam(uParam0->f_252, false);
	}
	if (!is_player_control_on(player_id()))
	{
		set_player_control(player_id(), true, 0, false);
	}
	func_20(&(uParam0->f_251), 512);
	if (func_21(&(uParam0->f_291[2])))
	{
		func_22(uParam0->f_291[2], 1, 1);
	}
}

int func_6(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bVar0 = func_23(Global_34, uParam0->f_127, 1, 0);
	bVar1 = func_23(Global_34, &(uParam0->f_121[4]), 1, 0);
	uParam0->f_18 = 0;
	uParam0->f_20 = 0;
	if (does_cam_exist(uParam2->f_252))
	{
		if (is_cam_rendering(uParam2->f_252))
		{
			render_script_cams(false, false, 3000, true, false, 0);
			set_cam_active(uParam2->f_252, false);
		}
		destroy_cam(uParam2->f_252, false);
	}
	_0xd5d72f1624f3ba7c(func_24(0));
	if (bParam3)
	{
		if (_does_volume_exist(uParam0->f_127) && _0x666c2f53abefc952(uParam0->f_127) != 5)
		{
			_0xfd010a2154b40676(uParam0->f_127, 623901053);
		}
		if (!is_entity_dead(uParam0->f_159))
		{
			remove_entity_from_audio_mix_group(uParam0->f_159, -1f);
			delete_ped(&(uParam0->f_159));
		}
		if (func_25(_net_to_anim_scene(uParam0->f_157), 1) && _does_anim_scene_exist(_net_to_anim_scene(uParam0->f_157)))
		{
			_delete_anim_scene(_net_to_anim_scene(uParam0->f_157));
		}
		if (network_has_control_of_entity(uParam0->f_158) && does_entity_exist(uParam0->f_158))
		{
			delete_entity(&(uParam0->f_158));
		}
		if (is_player_control_on(get_player_index()))
		{
			set_player_control(get_player_index(), true, 0, false);
		}
		func_26(&(uParam2->f_5), &(uParam2->f_250));
		func_27();
		if (network_is_host_of_this_script())
		{
			uParam0->f_15 = 0;
			uParam0->f_16 = 0;
			uParam0->f_14 = 0;
			func_28(uParam0);
		}
		if (network_is_host_of_this_script())
		{
			Var2.f_6 = -1;
			Var2.f_4 = 1;
			Var2.f_6 = uParam0->f_140;
			Var2 = 31;
			Var2.f_1 = player_id();
			Var2.f_2 = get_network_time_accurate();
			uVar9 = func_29(0, 8);
			trigger_script_event(1, &Var2, 7, 9, &uVar9);
		}
		return 1;
	}
	else if (!bVar0 && !bVar1)
	{
		if (!is_entity_dead(uParam0->f_159))
		{
			remove_entity_from_audio_mix_group(uParam0->f_159, -1f);
			delete_ped(&(uParam0->f_159));
		}
		if (func_25(_net_to_anim_scene(uParam0->f_157), 1) && _does_anim_scene_exist(_net_to_anim_scene(uParam0->f_157)))
		{
			_delete_anim_scene(_net_to_anim_scene(uParam0->f_157));
		}
		if (network_has_control_of_entity(uParam0->f_158) && does_entity_exist(uParam0->f_158))
		{
			delete_entity(&(uParam0->f_158));
		}
		if (_does_volume_exist(uParam0->f_127) && _0x666c2f53abefc952(uParam0->f_127) != 5)
		{
			_0xfd010a2154b40676(uParam0->f_127, 623901053);
		}
		func_26(&(uParam2->f_5), &(uParam2->f_250));
		func_27();
		if (network_is_host_of_this_script())
		{
			uParam0->f_15 = 0;
			uParam0->f_16 = 0;
			uParam0->f_14 = 0;
			func_28(uParam0);
		}
		if (network_is_host_of_this_script())
		{
			Var10.f_6 = -1;
			Var10.f_4 = 1;
			Var10.f_6 = uParam0->f_140;
			Var10 = 31;
			Var10.f_1 = player_id();
			Var10.f_2 = get_network_time_accurate();
			uVar17 = func_29(0, 8);
			trigger_script_event(1, &Var10, 7, 9, &uVar17);
		}
		return 1;
	}
	return 0;
}

void func_7(var uParam0)
{
	if (Global_1290948->f_30 == 0)
	{
		if ((_does_volume_exist(Global_1290948->f_23) && func_23(Global_34, Global_1290948->f_23, 1, 0)) && func_14(&(uParam0->f_144)) >= 15000)
		{
			func_30(1, 1);
		}
	}
}

void func_8()
{
	terminate_this_thread();
}

void func_9(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_8();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_10()
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
			func_8();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_8();
					break;
				case 2:
					func_8();
					break;
				case 4:
					func_8();
					break;
				case 3:
					func_8();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_8();
		}
		if (!network_is_game_in_progress())
		{
			func_8();
		}
		if (!network_is_signed_online())
		{
			func_8();
		}
		if (func_31() == 0)
		{
			if (func_32())
			{
				func_8();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_8();
	}
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_13(bool bParam0)
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
					func_8();
					break;
				case 2:
					func_8();
					break;
				case 4:
					func_8();
					break;
				case 3:
					func_8();
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
			func_8();
			return;
		}
		wait(0);
	}
}

int func_14(var uParam0)
{
	if (!func_33(uParam0))
	{
		return 0;
	}
	if (func_34(uParam0))
	{
		return uParam0->f_2;
	}
	return func_35(uParam0->f_1);
}

bool func_15(bool bParam0, bool bParam1)
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

struct<2> func_16()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_36(*Global_1051213) && !func_37(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_38(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_39(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return true;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return true;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return true;
	}
	if (func_40())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_36(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return true;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return true;
	}
	Global_1071686->f_28351 = 0;
	return false;
}

void func_18(var uParam0, var uParam1)
{
	func_41(uParam0, uParam1);
	uParam0->f_1 = Global_1291035->f_3[0]->f_3;
	if (uParam0->f_8 < 9)
	{
		if (uParam0->f_1 && !*uParam0)
		{
			func_42(&(uParam0->f_8), 9);
		}
	}
	func_43(uParam0);
	switch (uParam0->f_8)
	{
		case 0:
			_0xf008e0ba1fe1d644(1);
			func_44(uParam0);
			uParam0->f_141 = &uParam0->f_129.f_1[0];
			uParam0->f_4 = 0;
			func_42(&(uParam0->f_8), 1);
			break;
		case 1:
			if (!_0x5e420ff293ee5472())
			{
				return;
			}
			if (!func_45())
			{
				return;
			}
			if (!func_46())
			{
				return;
			}
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_48(uParam0))
			{
				return;
			}
			func_42(&(uParam0->f_8), 2);
			break;
		case 2:
			if (func_49(uParam0))
			{
				iVar12 = 1;
				while (iVar12 <= (5 - 1))
				{
					iVar11 = iVar12;
					if (!_does_volume_exist(&(uParam0->f_121[iVar11])))
					{
						Var0 = { func_50(iVar11) };
						uParam0->f_121[iVar11] = _create_volume_by_hash_with_custom_name(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
					}
					iVar12++;
				}
				if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_157), false))
				{
					func_42(&(uParam0->f_8), 6);
				}
			}
			break;
		case 6:
			uParam0->f_143 = get_network_time_accurate();
			func_42(&(uParam0->f_8), 7);
			break;
		case 7:
			bVar13 = false;
			if (get_time_difference(uParam0->f_143, get_network_time_accurate()) >= 10000)
			{
				bVar13 = true;
				uParam0->f_20 = 1;
			}
			if (bVar13)
			{
				func_51(&(uParam1->f_250), 2);
				func_51(&(uParam1->f_250), 4096);
				func_42(&(uParam0->f_8), 8);
			}
			break;
		case 8:
			if (func_52(uParam0) && !_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_155)))
			{
				func_51(&(uParam1->f_250), 4);
				func_51(&(uParam1->f_250), 8192);
				uParam0->f_21 = 1;
				func_53(&(uParam0->f_144), 0);
				func_42(&(uParam0->f_8), 10);
			}
			break;
		case 10:
			uParam0->f_18 = 0;
			func_54(uParam0);
			break;
	}
}

void func_19(var uParam0, var uParam1, var uParam2)
{
	func_55(uParam0);
	func_56(uParam2, &(uParam2->f_5), uParam0->f_140);
	func_57(uParam0, uParam2);
	switch ((*uParam1)[uParam2->f_1]->f_1)
	{
		case 0:
			func_58(uParam2, &(uParam2->f_5), uParam0->f_140);
			func_59(uParam2, &(uParam2->f_5));
			func_51(&(uParam2->f_250), 512);
			func_51(&(uParam2->f_250), 131072);
			func_42(&((*uParam1)[uParam2->f_1]->f_1), 1);
			break;
		case 1:
			if (!func_45())
			{
				return;
			}
			if (!func_46())
			{
				return;
			}
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_60(uParam2))
			{
				return;
			}
			if (uParam0->f_8 > 1)
			{
				func_42(&((*uParam1)[uParam2->f_1]->f_1), 2);
			}
			break;
		case 2:
			if (func_49(uParam0))
			{
				if (_network_has_control_of_anim_scene(_net_to_anim_scene(uParam0->f_157)))
				{
					set_anim_scene_entity(_net_to_anim_scene(uParam0->f_157), "CURTAIN", uParam0->f_158, 0);
					start_anim_scene(_net_to_anim_scene(uParam0->f_157));
				}
				if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_157), false))
				{
					func_42(&((*uParam1)[uParam2->f_1]->f_1), 6);
				}
			}
			break;
		case 6:
			_0xfd010a2154b40676(uParam0->f_127, func_62(func_61()));
			if (uParam0->f_8 > 6)
			{
				func_42(&((*uParam1)[uParam2->f_1]->f_1), 7);
			}
			break;
		case 7:
			if (uParam0->f_8 > 7)
			{
				func_42(&((*uParam1)[uParam2->f_1]->f_1), 8);
			}
			break;
		case 8:
			func_63(uParam0, uParam2);
			if (func_64(uParam0, uParam1, uParam2))
			{
				if ((func_25(_net_to_anim_scene(uParam0->f_155), 1) && _does_anim_scene_exist(_net_to_anim_scene(uParam0->f_155))) && _is_anim_scene_finished(_net_to_anim_scene(uParam0->f_155), false))
				{
					_delete_anim_scene(_net_to_anim_scene(uParam0->f_155));
				}
				if (uParam0->f_8 > 8)
				{
					func_42(&((*uParam1)[uParam2->f_1]->f_1), 10);
				}
			}
			break;
		case 10:
			break;
	}
}

void func_20(var uParam0, int iParam1)
{
	func_65(uParam0, iParam1);
}

bool func_21(int iParam0)
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

void func_22(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_21(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_66(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_67(iVar0);
	*uParam0 = 0;
}

bool func_23(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_24(bool bParam0)
{
	if (func_31() == -1)
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

bool func_25(int iParam0, bool bParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (bParam1 && !_network_has_control_of_anim_scene(iParam0))
	{
		return false;
	}
	return true;
}

void func_26(var uParam0, var uParam1)
{
	func_68(uParam0);
	func_68(&(uParam0->f_31));
	func_68(&(uParam0->f_107));
	func_68(&(uParam0->f_118));
	*uParam1 = 0;
}

void func_27()
{
	iVar2 = get_interior_at_coords(2546.453f, -1303.998f, 46.793f);
	iVar1 = 0;
	while (iVar1 <= (41 - 1))
	{
		iVar0 = iVar1;
		if (!is_string_null_or_empty(func_69(iVar0)))
		{
			if (is_valid_interior(iVar2))
			{
				if (is_interior_ready(iVar2))
				{
					if (_is_interior_entity_set_valid(iVar2, func_69(iVar0)))
					{
						deactivate_interior_entity_set(iVar2, func_69(iVar0), true);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_28(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		iVar1 = iVar0;
		if (_does_volume_exist(&(uParam0->f_121[iVar1])))
		{
			_delete_volume(&(uParam0->f_121[iVar1]));
		}
		iVar0++;
	}
}

var func_29(int iParam0, int iParam1)
{
	return func_70(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_30(bool bParam0, bool bParam1)
{
	if (func_71(255) == 4)
	{
		return;
	}
	if (func_72(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_73(0);
	}
	else
	{
		if (bParam1)
		{
			func_74(0, 0, 0, 1);
		}
		func_75(0);
		func_76(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_77(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_78(Global_1102219->f_3849, 36);
	func_79(Global_1102219->f_3888, 36);
}

int func_31()
{
	return Global_1572887->f_13;
}

bool func_32()
{
	return Global_1051252->f_8;
}

bool func_33(var uParam0)
{
	return func_80(*uParam0, 1);
}

bool func_34(var uParam0)
{
	return func_80(*uParam0, 2);
}

int func_35(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

bool func_36(struct<2> Param0)
{
	if (!func_81(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_82(Param0))
	{
		return false;
	}
	return true;
}

bool func_37(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_38(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_39(int iParam0, int iParam1)
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

bool func_40()
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
	if (!func_36(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_41(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_83(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
}

void func_42(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_43(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_84(uParam0->f_5, 32768))
			{
				func_85(&(uParam0->f_11), 1);
				return;
			}
			if (func_84(uParam0->f_5, 65536))
			{
				func_85(&(uParam0->f_11), 2);
				return;
			}
			if (func_84(uParam0->f_5, 512) && !func_84(uParam0->f_5, 2048))
			{
				func_85(&(uParam0->f_11), 3);
				return;
			}
			if (func_84(uParam0->f_5, 1024) && !func_84(uParam0->f_5, 4096))
			{
				func_85(&(uParam0->f_11), 4);
				return;
			}
			break;
		case 1:
			if (_does_anim_scene_exist(_net_to_anim_scene(&(uParam0->f_150[2]))))
			{
				_delete_anim_scene(_net_to_anim_scene(&(uParam0->f_150[2])));
			}
			uParam0->f_150[2] = _anim_scene_to_net(0);
			func_86(uParam0);
			func_20(&(uParam0->f_5), 32768);
			func_85(&(uParam0->f_11), 0);
			break;
		case 2:
			if (_does_anim_scene_exist(_net_to_anim_scene(&(uParam0->f_150[3]))))
			{
				_delete_anim_scene(_net_to_anim_scene(&(uParam0->f_150[3])));
			}
			uParam0->f_150[3] = _anim_scene_to_net(0);
			func_87(uParam0);
			func_20(&(uParam0->f_5), 65536);
			func_85(&(uParam0->f_11), 0);
			break;
		case 3:
			if (!func_91(uParam0->f_150[2], &(uParam0->f_5), func_89(func_88(uParam0), 2), func_90(func_88(uParam0)), 1))
			{
				return;
			}
			func_51(&(uParam0->f_5), 2048);
			func_85(&(uParam0->f_11), 0);
			break;
		case 4:
			if (uParam0->f_17)
			{
				if (!func_91(uParam0->f_150[3], &(uParam0->f_5), func_89(func_88(uParam0), 3), func_92(func_88(uParam0), 0), 1))
				{
					return;
				}
			}
			else if (!func_91(uParam0->f_150[3], &(uParam0->f_5), func_89(func_88(uParam0), 3), func_92(func_88(uParam0), 1), 1))
			{
				return;
			}
			func_51(&(uParam0->f_5), 4096);
			func_85(&(uParam0->f_11), 0);
			break;
	}
}

void func_44(var uParam0)
{
	iVar0 = 0;
	switch (uParam0->f_128)
	{
		case 0:
			func_93(&(uParam0->f_129), (3 + iVar0));
			func_94(&(uParam0->f_129), 9, (0 + iVar0));
			func_94(&(uParam0->f_129), 12, (1 + iVar0));
			func_94(&(uParam0->f_129), 7, (2 + iVar0));
			uParam0->f_3 = 1;
			break;
		case 1:
			func_93(&(uParam0->f_129), (3 + iVar0));
			func_94(&(uParam0->f_129), 5, (0 + iVar0));
			func_94(&(uParam0->f_129), 16, (1 + iVar0));
			func_94(&(uParam0->f_129), 18, (2 + iVar0));
			uParam0->f_3 = 2;
			break;
		case 2:
			func_93(&(uParam0->f_129), (3 + iVar0));
			func_94(&(uParam0->f_129), 8, (0 + iVar0));
			func_94(&(uParam0->f_129), 14, (1 + iVar0));
			func_94(&(uParam0->f_129), 6, (2 + iVar0));
			uParam0->f_3 = 3;
			break;
		case 3:
			func_93(&(uParam0->f_129), (3 + iVar0));
			func_94(&(uParam0->f_129), 17, (0 + iVar0));
			func_94(&(uParam0->f_129), 10, (1 + iVar0));
			func_94(&(uParam0->f_129), 15, (2 + iVar0));
			uParam0->f_3 = 4;
			break;
		case 4:
			func_93(&(uParam0->f_129), (3 + iVar0));
			func_94(&(uParam0->f_129), 13, (0 + iVar0));
			func_94(&(uParam0->f_129), 19, (1 + iVar0));
			func_94(&(uParam0->f_129), 11, (2 + iVar0));
			uParam0->f_3 = 5;
			break;
	}
}

bool func_45()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = func_95(iVar0);
		request_model(iVar1, false);
		if (!has_model_loaded(iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_46()
{
	if (!is_string_null_or_empty(func_96()))
	{
		if (_does_text_database_exist(func_96()))
		{
			_text_database_request(func_96());
		}
		if (!_text_database_has_loaded(func_96()))
		{
			return false;
		}
	}
	return true;
}

bool func_47(var uParam0)
{
	if (!func_91(&(uParam0->f_157), &(uParam0->f_5), func_97(), func_98(0), 1))
	{
		return false;
	}
	if (!func_99(uParam0->f_157, func_98(1), func_97()))
	{
		return false;
	}
	if (!func_99(uParam0->f_157, func_98(2), func_97()))
	{
		return false;
	}
	return true;
}

bool func_48(var uParam0)
{
	if (!func_91(uParam0->f_150[0], &(uParam0->f_5), func_100(uParam0->f_128, 0), func_101(uParam0->f_128), 1))
	{
		return false;
	}
	return true;
}

bool func_49(var uParam0)
{
	if (!does_entity_exist(uParam0->f_159) && network_is_host_of_this_script())
	{
		uParam0->f_159 = func_104(func_95(0), func_102(1), func_103(1), 1, 1, 0, 1, 1, 1, 0, 0);
	}
	if (!does_entity_exist(uParam0->f_159))
	{
		return false;
	}
	if (!does_entity_exist(uParam0->f_158) && network_is_host_of_this_script())
	{
		uParam0->f_158 = create_object(func_95(1), func_102(0), true, true, false, false, true);
		return false;
	}
	if (!does_entity_exist(uParam0->f_158))
	{
		return false;
	}
	if (!is_entity_dead(uParam0->f_159))
	{
		if (network_has_control_of_entity(uParam0->f_159))
		{
			set_blocking_of_non_temporary_events(uParam0->f_159, true);
			set_ped_config_flag(uParam0->f_159, 448, true);
			set_ped_config_flag(uParam0->f_159, 169, true);
		}
		set_ped_relationship_group_hash(uParam0->f_159, -1538724068);
		set_ped_can_be_targetted(uParam0->f_159, false);
		stop_ped_speaking(uParam0->f_159, true);
		add_entity_to_audio_mix_group(uParam0->f_159, "Default_Show_Performers_Group", -1f);
		set_ped_can_play_gesture_anims(uParam0->f_159, 0, 1);
	}
	return true;
}

struct<11> func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 2546.392f, -1311.06f, 49.80124f };
			Var0.f_3 = { 0f, 0f, -0.428209f };
			Var0.f_6 = { 17.93956f, 6.905415f, 3.337901f };
			Var0.f_9 = "SHOW_MC_ON_STAGE";
			Var0.f_10 = -1612834106;
			break;
		case 1:
			Var0 = { 2546.448f, -1301.489f, 51.592f };
			Var0.f_3 = { 0f, 0f, 0.496f };
			Var0.f_6 = { 18.193f, 22.845f, 8.938f };
			Var0.f_9 = "SHOW_MC_VOLUME_FOCUS_CAM";
			Var0.f_10 = -1612834106;
			break;
		case 2:
			Var0 = { 2549.975f, -1299.587f, 48.85019f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 5.433204f, 11.15138f, 4.404195f };
			Var0.f_9 = "SHOW_MC_LEFT_SEATS";
			Var0.f_10 = -1612834106;
			break;
		case 3:
			Var0 = { 2542.911f, -1299.587f, 48.85019f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 5.433204f, 11.15138f, 4.404195f };
			Var0.f_9 = "SHOW_MC_RIGHT_SEATS";
			Var0.f_10 = -1612834106;
			break;
		case 4:
			Var0 = { 2546.598f, -1288.292f, 51.77531f };
			Var0.f_3 = { 0f, 0f, 1.8f };
			Var0.f_6 = { 9.553825f, 4.673606f, 7.770726f };
			Var0.f_9 = "SHOW_MC_FRONT_BUFFER";
			Var0.f_10 = -1612834106;
			break;
	}
	return Var0;
}

void func_51(var uParam0, int iParam1)
{
	func_105(uParam0, iParam1);
}

bool func_52(var uParam0)
{
	if (!network_is_host_of_this_script())
	{
		return false;
	}
	func_54(uParam0);
	if ((uParam0->f_1 && does_entity_exist(uParam0->f_159)) && !is_entity_dead(uParam0->f_159))
	{
		switch (uParam0->f_10)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 6:
			case 9:
			case 10:
			case 11:
			case 12:
				set_ped_reset_flag(uParam0->f_159, 261, true);
				break;
		}
	}
	switch (uParam0->f_10)
	{
		case 0:
			if (!func_33(&(uParam0->f_147)))
			{
				func_106(&(uParam0->f_147));
			}
			if (func_33(&(uParam0->f_147)) && func_14(&(uParam0->f_147)) > 15000)
			{
				func_51(&(uParam0->f_5), 512);
				func_107(&(uParam0->f_10), 1);
			}
			return false;
		case 1:
			if (uParam0->f_22 == 0)
			{
				uParam0->f_155 = &uParam0->f_150[0];
				uParam0->f_156 = uParam0->f_155;
				uParam0->f_141 = &uParam0->f_129.f_1[uParam0->f_4];
				uParam0->f_22 = 1;
			}
			if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_155), false))
			{
				func_51(&(uParam0->f_5), 64);
				uParam0->f_22 = 0;
				func_107(&(uParam0->f_10), 2);
			}
			return false;
		case 2:
			if (_get_anim_scene_progress(_net_to_anim_scene(uParam0->f_155)) > 0.5f)
			{
				func_107(&(uParam0->f_10), 3);
			}
			return false;
		case 3:
			if (_0x005e6f28dd7ed58d(_net_to_anim_scene(uParam0->f_155), func_108()) || (_is_anim_scene_finished(_net_to_anim_scene(uParam0->f_155), false) && uParam0->f_22 == 0))
			{
				uParam0->f_155 = &uParam0->f_150[2];
				uParam0->f_156 = uParam0->f_155;
				func_109(uParam0, 65536);
				uParam0->f_22 = 1;
			}
			if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_155), false) && uParam0->f_22 == 1)
			{
				uParam0->f_22 = 0;
				func_107(&(uParam0->f_10), 4);
			}
			return false;
		case 4:
			if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_155), false))
			{
				return false;
			}
			else if (_0x005e6f28dd7ed58d(_net_to_anim_scene(uParam0->f_155), func_108()) || _is_anim_scene_finished(_net_to_anim_scene(uParam0->f_155), false))
			{
				func_107(&(uParam0->f_10), 6);
			}
			return false;
		case 6:
			if (func_110(uParam0))
			{
				func_109(uParam0, 32768);
				func_20(&(uParam0->f_5), 64);
				func_107(&(uParam0->f_10), 7);
			}
			return false;
		case 7:
			func_111(&(uParam0->f_147));
			func_107(&(uParam0->f_10), 8);
			return false;
		case 8:
			if (_does_anim_scene_exist(_net_to_anim_scene(&(uParam0->f_150[2]))))
			{
				return false;
			}
			if (!func_112(uParam0))
			{
				return false;
			}
			if (!func_33(&(uParam0->f_147)))
			{
				func_106(&(uParam0->f_147));
				return false;
			}
			else if (func_14(&(uParam0->f_147)) < 7000)
			{
				return false;
			}
			func_111(&(uParam0->f_147));
			if (uParam0->f_141 == 15 && uParam0->f_17)
			{
				uParam0->f_4++;
				uParam0->f_14 = 0;
				uParam0->f_15 = 0;
				uParam0->f_16 = 0;
				uParam0->f_17 = 0;
				func_107(&(uParam0->f_10), 13);
			}
			else
			{
				func_109(uParam0, 1024);
				func_51(&(uParam0->f_5), 64);
				func_107(&(uParam0->f_10), 9);
			}
			return false;
		case 9:
			if (_does_anim_scene_exist(_net_to_anim_scene(&(uParam0->f_150[3]))) && _is_anim_scene_loaded(_net_to_anim_scene(&(uParam0->f_150[3])), true, false))
			{
				if (uParam0->f_22 == 0)
				{
					uParam0->f_4++;
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
					uParam0->f_17 = 0;
					uParam0->f_155 = &uParam0->f_150[3];
					uParam0->f_156 = uParam0->f_155;
					uParam0->f_22 = 1;
					if (uParam0->f_4 < uParam0->f_129)
					{
						func_51(&(uParam0->f_5), 512);
					}
				}
				else if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_155), false))
				{
					uParam0->f_22 = 0;
					func_107(&(uParam0->f_10), 10);
				}
			}
			return false;
		case 10:
			if (uParam0->f_4 >= uParam0->f_129)
			{
				func_113(uParam0);
			}
			if (_get_anim_scene_progress(_net_to_anim_scene(uParam0->f_155)) > 0.98f)
			{
				if (uParam0->f_4 >= uParam0->f_129)
				{
					func_107(&(uParam0->f_10), 11);
				}
				else
				{
					uParam0->f_22 = 0;
					func_107(&(uParam0->f_10), 3);
				}
			}
			return false;
		case 11:
			func_114(&(uParam0->f_159));
			if (!uParam0->f_22)
			{
				if (_0x005e6f28dd7ed58d(_net_to_anim_scene(uParam0->f_155), func_108()) || _is_anim_scene_finished(_net_to_anim_scene(uParam0->f_155), false))
				{
					uParam0->f_155 = &uParam0->f_150[1];
					uParam0->f_156 = uParam0->f_155;
					uParam0->f_22 = 1;
				}
			}
			if (uParam0->f_22 && _is_anim_scene_started(_net_to_anim_scene(uParam0->f_155), false))
			{
				uParam0->f_22 = 0;
				func_107(&(uParam0->f_10), 12);
			}
			return false;
		case 12:
			func_114(&(uParam0->f_159));
			if (_is_anim_scene_finished(_net_to_anim_scene(uParam0->f_155), false) && func_115(uParam0))
			{
				func_107(&(uParam0->f_10), 13);
			}
			return false;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1 || !func_33(uParam0))
	{
		func_106(uParam0);
	}
}

void func_54(var uParam0)
{
	iVar0 = _net_to_anim_scene(uParam0->f_157);
	if (!_network_has_control_of_anim_scene(iVar0))
	{
		_network_request_control_of_anim_scene(iVar0);
		return;
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (!func_99(uParam0->f_157, func_98(1), func_97()))
			{
				return;
			}
			func_116(&(uParam0->f_6), 1);
			break;
		case 1:
			if (func_84(uParam0->f_5, 256))
			{
				set_anim_scene_entity(iVar0, func_117(), uParam0->f_158, 0);
				func_118(uParam0->f_157, func_98(1), func_97());
				func_116(&(uParam0->f_6), 2);
			}
			break;
		case 2:
			if (_0x1f0e401031e20146(iVar0, func_98(1)))
			{
				func_119(uParam0->f_157, func_98(2), func_97());
				func_20(&(uParam0->f_5), 256);
				func_116(&(uParam0->f_6), 3);
			}
			break;
		case 3:
			if (!func_99(uParam0->f_157, func_98(2), func_97()))
			{
				return;
			}
			func_116(&(uParam0->f_6), 4);
			break;
		case 4:
			if (uParam0->f_15)
			{
				set_anim_scene_entity(iVar0, func_117(), uParam0->f_158, 0);
				func_118(uParam0->f_157, func_98(2), func_97());
				func_116(&(uParam0->f_6), 5);
			}
			break;
		case 5:
			if (_0x1f0e401031e20146(iVar0, func_98(2)))
			{
				func_119(uParam0->f_157, func_98(1), func_97());
				func_116(&(uParam0->f_6), 0);
			}
			break;
		case 6:
			if (!func_99(uParam0->f_157, func_98(4), func_97()))
			{
				return;
			}
			set_anim_scene_entity(iVar0, func_117(), uParam0->f_158, 0);
			func_118(uParam0->f_157, func_98(4), func_97());
			func_116(&(uParam0->f_6), 7);
			break;
		case 7:
			break;
	}
}

void func_55(var uParam0)
{
	switch (uParam0->f_13)
	{
		case 0:
			if (uParam0->f_8 >= 6 && uParam0->f_8 <= 8)
			{
				func_120(&(uParam0->f_13), 1);
			}
			break;
		case 1:
			func_121(uParam0);
			func_120(&(uParam0->f_13), 2);
			break;
		case 2:
			if (uParam0->f_8 == 9 && !func_122(uParam0->f_140))
			{
				func_120(&(uParam0->f_13), 3);
			}
			break;
		case 3:
			func_123(uParam0);
			func_120(&(uParam0->f_13), 0);
			break;
	}
}

void func_56(var uParam0, var uParam1, int iParam2)
{
	if (func_84(uParam0->f_250, 1))
	{
		if (func_84(uParam0->f_250, 2) && func_127(uParam1, func_124(uParam1), &(uParam1->f_229), func_125(uParam1), func_126(uParam1)))
		{
			func_20(&(uParam0->f_250), 2);
		}
		if (func_84(uParam0->f_250, 4) && func_129(uParam1, func_128(uParam1), &(uParam1->f_229), func_125(uParam1), func_126(uParam1)))
		{
			func_20(&(uParam0->f_250), 4);
		}
	}
	if (func_84(uParam0->f_250, 8))
	{
		if (func_84(uParam0->f_250, 16) && func_127(&(uParam1->f_31), func_130(uParam1), &(uParam1->f_232), func_131(uParam1), func_126(uParam1)))
		{
			func_20(&(uParam0->f_250), 16);
		}
		if (func_84(uParam0->f_250, 32) && func_129(&(uParam1->f_31), func_132(uParam1), &(uParam1->f_232), func_131(uParam1), func_126(uParam1)))
		{
			func_20(&(uParam0->f_250), 32);
		}
	}
	if (func_84(uParam0->f_250, 2048))
	{
		if (func_84(uParam0->f_250, 4096) && func_127(&(uParam1->f_107), func_133(uParam1), &(uParam1->f_235), func_134(uParam1), func_126(uParam1)))
		{
			func_20(&(uParam0->f_250), 4096);
		}
		if (func_84(uParam0->f_250, 8192) && func_129(&(uParam1->f_107), func_135(uParam1), &(uParam1->f_235), func_134(uParam1), func_126(uParam1)))
		{
			func_20(&(uParam0->f_250), 8192);
		}
	}
	if (iParam2 == 0)
	{
		if (func_84(uParam0->f_250, 64))
		{
			if (func_84(uParam0->f_250, 128) && func_138(uParam1->f_118[0], func_136(uParam1), &(uParam1->f_238), func_137(uParam1), func_126(uParam1)))
			{
				func_20(&(uParam0->f_250), 128);
			}
			if (func_84(uParam0->f_250, 256) && func_140(uParam1->f_118[0], func_139(uParam1), &(uParam1->f_238), func_137(uParam1), func_126(uParam1)))
			{
				func_20(&(uParam0->f_250), 256);
			}
			if (func_84(uParam0->f_250, 512) && func_138(uParam1->f_118[0], func_136(uParam1), &(uParam1->f_238), 0.5f, func_126(uParam1)))
			{
				func_20(&(uParam0->f_250), 512);
			}
			if (func_84(uParam0->f_250, 1024) && func_140(uParam1->f_118[0], func_139(uParam1), &(uParam1->f_238), 0.5f, func_126(uParam1)))
			{
				func_20(&(uParam0->f_250), 1024);
			}
		}
		if (func_84(uParam0->f_250, 16384))
		{
			if (func_84(uParam0->f_250, 32768) && func_143(1, 2, &(uParam1->f_118), func_141(uParam1), &(uParam1->f_241), func_142(uParam1), func_126(uParam1)))
			{
				func_20(&(uParam0->f_250), 32768);
			}
			if (func_84(uParam0->f_250, 65536) && func_145(1, 2, &(uParam1->f_118), func_144(uParam1), &(uParam1->f_241), func_142(uParam1), func_126(uParam1)))
			{
				func_20(&(uParam0->f_250), 65536);
			}
			if (func_84(uParam0->f_250, 131072) && func_143(1, 2, &(uParam1->f_118), func_141(uParam1), &(uParam1->f_241), 0.5f, func_126(uParam1)))
			{
				func_20(&(uParam0->f_250), 131072);
			}
			if (func_84(uParam0->f_250, 262144) && func_145(1, 2, &(uParam1->f_118), func_144(uParam1), &(uParam1->f_241), 0.5f, func_126(uParam1)))
			{
				func_20(&(uParam0->f_250), 262144);
			}
		}
		if (func_84(uParam0->f_250, 524288))
		{
			bVar0 = true;
			if (!func_127(&(uParam1->f_31), func_130(uParam1), &(uParam1->f_232), 0.1f, func_126(uParam1)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_20(&(uParam0->f_250), 524288);
			}
		}
		if (func_84(uParam0->f_250, 1048576))
		{
			bVar1 = true;
			if (!func_129(&(uParam1->f_31), func_132(uParam1), &(uParam1->f_232), 0.1f, func_126(uParam1)))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_20(&(uParam0->f_250), 1048576);
			}
		}
	}
	if (iParam2 == 1)
	{
		if (func_84(uParam0->f_250, 2097152))
		{
			if (func_84(uParam0->f_250, 4194304) && func_127(&(uParam1->f_118), func_146(uParam1), &(uParam1->f_238), func_147(uParam1), func_126(uParam1)))
			{
				func_20(&(uParam0->f_250), 4194304);
			}
			if (func_84(uParam0->f_250, 8388608) && func_129(&(uParam1->f_118), func_148(uParam1), &(uParam1->f_238), func_147(uParam1), func_126(uParam1)))
			{
				func_20(&(uParam0->f_250), 8388608);
			}
		}
	}
}

void func_57(var uParam0, var uParam1)
{
	bVar0 = _is_ped_using_scenario_hash(Global_34, -447259824);
	bVar1 = func_23(Global_34, &(uParam0->f_121[2]), 1, 0);
	bVar2 = func_23(Global_34, &(uParam0->f_121[3]), 1, 0);
	if (Global_35.f_2 > 51f)
	{
		bVar2 = true;
	}
	if (bVar0)
	{
		if (bVar1)
		{
			if (!func_84(uParam1->f_251, 8388608) && !is_entity_dead(uParam0->f_159))
			{
				if (_0xdd0b7c5ae58f721d(&(uParam1->f_258)) && !_0x927b810e43e99932(&(uParam1->f_258)))
				{
					_0xb8b207c34285e978(&(uParam1->f_258));
					func_51(&(uParam1->f_251), 8388608);
				}
			}
		}
		if (bVar2)
		{
			if (!func_84(uParam1->f_251, 8388608) && !is_entity_dead(uParam0->f_159))
			{
				if (_0xdd0b7c5ae58f721d(&(uParam1->f_274)) && !_0x927b810e43e99932(&(uParam1->f_274)))
				{
					_0xb8b207c34285e978(&(uParam1->f_274));
					func_51(&(uParam0->f_5), 8388608);
				}
			}
		}
	}
	else
	{
		if (_0x927b810e43e99932(&(uParam1->f_258)))
		{
			_0x0a5a4f1979abb40e(&(uParam1->f_258));
			func_20(&(uParam1->f_251), 8388608);
		}
		if (_0x927b810e43e99932(&(uParam1->f_274)))
		{
			_0x0a5a4f1979abb40e(&(uParam1->f_274));
			func_20(&(uParam1->f_251), 8388608);
		}
	}
}

int func_58(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == -1 || !func_84(uParam0->f_250, -2147483648))
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (!func_84(uParam0->f_250, 1))
	{
		iVar1 = func_149(iParam2);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar3 = iVar0;
			if (func_152((*uParam1)[iVar0], func_150(iParam2), func_151(iParam2, iVar3), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_51(&(uParam0->f_250), 1);
		}
	}
	iVar2 = 0;
	if (!func_84(uParam0->f_250, 8))
	{
		iVar1 = func_153(iParam2);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar4 = iVar0;
			if (func_152(uParam1->f_31[iVar0], func_154(iParam2), func_155(iParam2, iVar4), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_51(&(uParam0->f_250), 8);
		}
	}
	iVar2 = 0;
	if (!func_84(uParam0->f_250, 2048))
	{
		iVar1 = func_156(iParam2);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar5 = iVar0;
			if (func_152(uParam1->f_107[iVar0], func_157(iParam2), func_158(iParam2, iVar5), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_51(&(uParam0->f_250), 2048);
		}
	}
	switch (iParam2)
	{
		case 0:
			if (!func_84(uParam0->f_250, 64) && func_152(uParam1->f_118[0], func_159(iParam2, 0), func_160(iParam2, 0), 1065353216))
			{
				func_51(&(uParam0->f_250), 64);
			}
			if ((!func_84(uParam0->f_250, 16384) && func_152(uParam1->f_118[1], func_159(iParam2, 1), func_160(iParam2, 1), 1065353216)) && func_152(uParam1->f_118[2], func_159(iParam2, 2), func_160(iParam2, 2), 1065353216))
			{
				func_51(&(uParam0->f_250), 16384);
			}
			break;
		case 1:
			iVar2 = 0;
			if (!func_84(uParam0->f_250, 2097152))
			{
				iVar1 = func_161(iParam2);
				iVar0 = 0;
				while (iVar0 <= (iVar1 - 1))
				{
					iVar6 = iVar0;
					if (func_152(uParam1->f_118[iVar0], func_159(iParam2, 0), func_160(iParam2, iVar6), 1065353216))
					{
						iVar2++;
					}
					iVar0++;
				}
				if (iVar2 >= iVar1)
				{
					func_51(&(uParam0->f_250), 2097152);
				}
			}
			break;
	}
	return 1;
}

void func_59(var uParam0, var uParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		(*uParam1)[iVar0]->f_2 = 1f;
		(*uParam1)[iVar0]->f_3 = 0f;
		(*uParam1)[iVar0]->f_4 = 1f;
		(*uParam1)[iVar0]->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		uParam1->f_31[iVar0]->f_2 = 1f;
		uParam1->f_31[iVar0]->f_3 = 0f;
		uParam1->f_31[iVar0]->f_4 = 1f;
		uParam1->f_31[iVar0]->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam1->f_107[iVar0]->f_2 = 1f;
		uParam1->f_107[iVar0]->f_3 = 0f;
		uParam1->f_107[iVar0]->f_4 = 1f;
		uParam1->f_107[iVar0]->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		uParam1->f_118[iVar0]->f_2 = 1f;
		uParam1->f_118[iVar0]->f_3 = 0f;
		uParam1->f_118[iVar0]->f_4 = 1f;
		uParam1->f_118[iVar0]->f_1 = 0;
		iVar0++;
	}
	func_51(&(uParam0->f_250), -2147483648);
}

bool func_60(var uParam0)
{
	StringCopy(&(uParam0->f_258), "camera_treatments", 64);
	StringCopy(&(uParam0->f_258.f_8), "THEATRE_CUSTOM_TREATMENT_REQUEST", 64);
	StringCopy(&(uParam0->f_274), "camera_treatments", 64);
	StringCopy(&(uParam0->f_274.f_8), "THEATRE_RIGHT_SIDE_CUSTOM_TREATMENT_REQUEST", 64);
	_0x6a4d224fc7643941("camera_treatments");
	return true;
}

int func_61()
{
	return Global_1102219->f_3672;
}

int func_62(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = func_61();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 623901053;
	}
	return func_162(get_unique_int_for_player(&(Global_1296859->f_154[iParam0])));
}

void func_63(var uParam0, var uParam1)
{
	bVar0 = false;
	if (func_23(Global_34, &(uParam0->f_121[1]), 1, 0))
	{
		bVar0 = true;
	}
	if (func_84(uParam1->f_251, 1024) && uParam1->f_257 < 6)
	{
		func_163(&(uParam1->f_257), 6);
	}
	switch (uParam1->f_257)
	{
		case 0:
			if (uParam0->f_8 != 8)
			{
				return;
			}
			if (!bVar0)
			{
				return;
			}
			if (bVar0)
			{
				if (!does_cam_exist(uParam1->f_252))
				{
					uParam1->f_252 = create_camera_with_params(26379945, func_164(0), func_165(0), get_final_rendered_cam_fov(), false, 2);
				}
				func_163(&(uParam1->f_257), 1);
			}
			break;
		case 1:
			if (!is_player_control_on(player_id()))
			{
				set_player_control(player_id(), true, 0, false);
			}
			if (is_disabled_control_pressed(0, -416594956))
			{
				if (!func_33(&(uParam1->f_253)))
				{
					func_106(&(uParam1->f_253));
					return;
				}
				else if (func_14(&(uParam1->f_253)) < 800)
				{
					return;
				}
			}
			else
			{
				if (func_33(&(uParam1->f_253)))
				{
					func_111(&(uParam1->f_253));
				}
				if (func_21(&(uParam1->f_291[2])))
				{
					func_22(uParam1->f_291[2], 1, 1);
				}
				return;
			}
			if (!func_21(&(uParam1->f_291[2])))
			{
				uParam1->f_291[2] = func_166("INTERACT_LOOK", -416594956, 6, 570, 570, 10, 1073741824, 0, 1065353216, 0, 1, 1704213876, 0);
			}
			else if (func_167(&(uParam1->f_291[2]), 1))
			{
				if (does_cam_exist(uParam1->f_252))
				{
					if (!is_cam_rendering(uParam1->f_252))
					{
						set_cam_active(uParam1->f_252, true);
						render_script_cams(true, false, 3000, true, false, 0);
						func_22(uParam1->f_291[2], 1, 1);
						func_51(&(uParam1->f_251), 512);
						func_163(&(uParam1->f_257), 2);
					}
				}
			}
			break;
		case 2:
			if (!is_disabled_control_pressed(0, -416594956))
			{
				func_163(&(uParam1->f_257), 3);
			}
			break;
		case 3:
			if (is_player_control_on(player_id()))
			{
				set_player_control(player_id(), false, 0, false);
			}
			disable_control_action(0, 2139949496, false);
			if (is_disabled_control_pressed(0, -416594956))
			{
				render_script_cams(false, false, 3000, true, false, 0);
				func_20(&(uParam1->f_251), 512);
				func_111(&(uParam1->f_253));
				func_163(&(uParam1->f_257), 4);
			}
			if (is_control_just_pressed(2, -1496944061))
			{
				uParam1->f_256++;
				if (uParam1->f_256 > 2)
				{
					uParam1->f_256 = 0;
				}
				set_cam_coord(uParam1->f_252, func_164(uParam1->f_256));
				set_cam_rot(uParam1->f_252, func_165(uParam1->f_256), 2);
			}
			if (uParam0->f_8 == 9 || !bVar0)
			{
				func_163(&(uParam1->f_257), 6);
			}
			break;
		case 4:
			disable_control_action(0, 2139949496, false);
			if (!is_disabled_control_pressed(0, -416594956))
			{
				func_163(&(uParam1->f_257), 1);
			}
			break;
		case 6:
			if (!is_player_control_on(player_id()))
			{
				set_player_control(player_id(), true, 0, false);
			}
			if (!bVar0)
			{
				if (does_cam_exist(uParam1->f_252) && is_cam_rendering(uParam1->f_252))
				{
					render_script_cams(false, false, 3000, true, false, 0);
					set_cam_active(uParam1->f_252, false);
				}
				if (func_21(&(uParam1->f_291[2])))
				{
					func_22(uParam1->f_291[2], 1, 1);
				}
				func_163(&(uParam1->f_257), 8);
			}
			else if (does_cam_exist(uParam1->f_252))
			{
				if (is_cam_rendering(uParam1->f_252))
				{
					render_script_cams(false, false, 3000, true, false, 0);
					set_cam_active(uParam1->f_252, false);
				}
				else
				{
					destroy_cam(uParam1->f_252, false);
					if (func_21(&(uParam1->f_291[2])))
					{
						func_22(uParam1->f_291[2], 1, 1);
					}
					func_163(&(uParam1->f_257), 8);
				}
			}
			func_20(&(uParam1->f_251), 512);
			break;
		case 8:
			if (!func_84(uParam1->f_251, 1024))
			{
				func_163(&(uParam1->f_257), 0);
			}
			break;
	}
}

bool func_64(var uParam0, var uParam1, var uParam2)
{
	switch ((*uParam1)[uParam2->f_1]->f_2)
	{
		case 0:
			if (func_33(&(uParam0->f_147)) && func_14(&(uParam0->f_147)) > 15000)
			{
				func_27();
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 1);
			}
			return false;
		case 1:
			if (uParam0->f_10 >= 2)
			{
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 2);
				return false;
			}
			if (!_is_anim_scene_started(_net_to_anim_scene(uParam0->f_155), false))
			{
				if (uParam0->f_22)
				{
					func_169(_net_to_anim_scene(uParam0->f_155), uParam0->f_159, uParam0->f_158);
				}
			}
			return false;
		case 2:
			func_114(&(uParam0->f_159));
			if (uParam0->f_10 >= 3)
			{
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 3);
			}
			return false;
		case 3:
			func_170(uParam0->f_141);
			func_114(&(uParam0->f_159));
			if ((uParam0->f_22 && uParam0->f_10 == 3) && !_is_anim_scene_started(_net_to_anim_scene(uParam0->f_155), false))
			{
				func_169(_net_to_anim_scene(uParam0->f_155), uParam0->f_159, uParam0->f_158);
			}
			if (uParam0->f_10 >= 4)
			{
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 4);
				return false;
			}
			return false;
		case 4:
			func_114(&(uParam0->f_159));
			if (uParam0->f_10 >= 6)
			{
				if ((_does_anim_scene_exist(_net_to_anim_scene(&(uParam0->f_150[0]))) && _is_anim_scene_loaded(_net_to_anim_scene(&(uParam0->f_150[0])), true, false)) && _network_has_control_of_anim_scene(_net_to_anim_scene(&(uParam0->f_150[0]))))
				{
					_delete_anim_scene(_net_to_anim_scene(&(uParam0->f_150[0])));
				}
				if (network_has_control_of_entity(uParam0->f_159))
				{
					_set_entity_coords_and_heading(uParam0->f_159, func_102(4), func_103(4), true, false, true);
				}
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 5);
			}
			return false;
		case 5:
			if (uParam0->f_10 >= 6)
			{
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 6);
			}
			return false;
		case 6:
			if (uParam0->f_10 >= 7)
			{
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 7);
			}
			return false;
		case 7:
			if (uParam0->f_10 >= 8)
			{
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 8);
			}
			return false;
		case 8:
			if ((func_25(_net_to_anim_scene(&(uParam0->f_150[2])), 1) && _is_anim_scene_loaded(_net_to_anim_scene(&(uParam0->f_150[2])), true, false)) && _is_anim_scene_finished(_net_to_anim_scene(&(uParam0->f_150[2])), false))
			{
				_delete_anim_scene(_net_to_anim_scene(&(uParam0->f_150[2])));
			}
			if (uParam0->f_10 >= 9)
			{
				if (uParam0->f_141 == 15 && uParam0->f_17)
				{
					func_168(&((*uParam1)[uParam2->f_1]->f_2), 13);
				}
				else
				{
					func_168(&((*uParam1)[uParam2->f_1]->f_2), 9);
				}
			}
			return false;
		case 9:
			func_114(&(uParam0->f_159));
			if (_does_anim_scene_exist(_net_to_anim_scene(&(uParam0->f_150[3]))) && _is_anim_scene_loaded(_net_to_anim_scene(&(uParam0->f_150[3])), true, false))
			{
				if (uParam0->f_22)
				{
					if (!_is_anim_scene_started(_net_to_anim_scene(uParam0->f_155), false))
					{
						func_169(_net_to_anim_scene(uParam0->f_155), uParam0->f_159, uParam0->f_158);
					}
				}
			}
			if (uParam0->f_10 >= 10)
			{
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 10);
			}
			return false;
		case 10:
			func_114(&(uParam0->f_159));
			if (uParam0->f_10 >= 11)
			{
				func_27();
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 11);
			}
			else if (uParam0->f_10 < 10)
			{
				func_27();
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 3);
			}
			return false;
		case 11:
			func_114(&(uParam0->f_159));
			if (uParam0->f_22 && !_is_anim_scene_started(_net_to_anim_scene(uParam0->f_155), false))
			{
				func_169(_net_to_anim_scene(uParam0->f_155), uParam0->f_159, uParam0->f_158);
			}
			if (uParam0->f_10 >= 12)
			{
				func_168(&((*uParam1)[uParam2->f_1]->f_2), 12);
			}
			return false;
		case 12:
			func_114(&(uParam0->f_159));
			if (_0x005e6f28dd7ed58d(_net_to_anim_scene(uParam0->f_155), func_108()) && network_has_control_of_entity(uParam0->f_159))
			{
				_set_entity_coords_and_heading(uParam0->f_159, func_102(4), func_103(4), true, false, true);
			}
			if (uParam0->f_10 < 13)
			{
				return false;
			}
			if (func_25(_net_to_anim_scene(&(uParam0->f_150[3])), 1))
			{
				_delete_anim_scene(_net_to_anim_scene(&(uParam0->f_150[3])));
			}
			if (_does_anim_scene_exist(_net_to_anim_scene(&(uParam0->f_150[3]))))
			{
				return false;
			}
			if (_is_anim_scene_finished(_net_to_anim_scene(uParam0->f_155), false))
			{
				func_51(&(uParam2->f_250), 32);
				func_51(&(uParam2->f_250), 4);
				func_51(&(uParam2->f_250), 128);
				func_51(&(uParam2->f_250), 32768);
			}
			func_168(&((*uParam1)[uParam2->f_1]->f_2), 13);
			return false;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

void func_65(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_66(int iParam0)
{
	return iParam0;
}

void func_67(int iParam0)
{
	if (!func_171(iParam0))
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

void func_68(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (_0x1ff441d7954f8709((*uParam0)[iVar0]->f_1))
		{
			_0xd2b9c78537ed5759((*uParam0)[iVar0]->f_1);
		}
		iVar0++;
	}
}

char* func_69(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return "new_theater_cancan";
		case 9:
			return "new_theater_magician";
		case 12:
		case 13:
		case 14:
			return "new_theater_fireperformer";
		case 16:
		case 17:
		case 19:
			return "new_theater_snakedancer";
		case 15:
		case 18:
			return "new_theater_strongwoman";
		case 20:
			return "new_theater_theOddFellows";
	}
	return "";
}

var func_70(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_172() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_173());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_173());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_173());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_174(get_player_team(iVar5)));
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
			if (func_175(iVar2))
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
				if (iVar9 & 8192 != 0 && func_71(iVar2) != 1)
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
					if (!func_176(iVar10))
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

int func_71(int iParam0)
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

bool func_72(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_73(int iParam0)
{
	if (func_177(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_74(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_178(iParam0);
	if (!func_179(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_180(128) && !func_181(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_182() == 4)
	{
		func_73(18);
	}
	func_183(1024);
}

int func_75(int iParam0)
{
	if (func_184(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_76(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_77(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_78(struct<29> Param0, var uParam29, int iParam30)
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

void func_79(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_80(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_81(int iParam0)
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

int func_82(int iParam0)
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

void func_83(var uParam0, var uParam1, int iParam2)
{
	get_event_data(1, iParam2, &iVar0, 4);
	if (iVar0 == 32)
	{
		func_185(uParam0, uParam1, iParam2);
	}
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_85(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_86(var uParam0)
{
	func_20(&(uParam0->f_5), 512);
	func_20(&(uParam0->f_5), 2048);
}

void func_87(var uParam0)
{
	func_20(&(uParam0->f_5), 1024);
	func_20(&(uParam0->f_5), 4096);
}

int func_88(var uParam0)
{
	return &(uParam0->f_129.f_1[uParam0->f_4]);
}

char* func_89(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 8:
			switch (iParam1)
			{
				case 2:
					return "script@shows@band_play@shw_bgb2@intro";
				case 3:
					return "script@shows@band_play@shw_bgb2@outro";
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 2:
					return "script@shows@band_play@shw_bgb1@intro";
				case 3:
					return "script@shows@band_play@shw_bgb1@outro";
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 2:
					return "script@shows@bulletcatcher@shw_bulc@intro";
				case 3:
					return "script@shows@bulletcatcher@shw_bulc@outro";
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 2:
					return "script@shows@cancan_dance@p1_intro";
				case 3:
					return "script@shows@cancan_dance@p1_outro";
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 2:
					return "script@shows@cancan_dance@p2_intro";
				case 3:
					return "script@shows@cancan_dance@p2_outro";
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 2:
					return "script@shows@escape_artist@shw_esca@intro";
				case 3:
					return "script@shows@escape_artist@shw_esca@outro";
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 2:
					return "script@shows@escape_noose@shw_escn@intro";
				case 3:
					return "script@shows@escape_noose@shw_escn@outro";
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_breather@shw_firb@intro";
				case 3:
					return "script@shows@fire_breather@shw_firb@outro";
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_performer@shw_frd1@intro";
				case 3:
					return "script@shows@fire_performer@shw_frd1@outro";
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_dancer@shw_frd2@intro";
				case 3:
					return "script@shows@fire_dancer@shw_frd2@outro";
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 2:
					return "script@shows@flex_fight@shw_flxf@intro";
				case 3:
					return "script@shows@flex_fight@shw_flxf@outro";
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 2:
					return "script@shows@snake_dancer@act1_p1@shw_snd1@intro";
				case 3:
					return "script@shows@snake_dancer@act1_p1@shw_snd1@outro";
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					return "script@shows@snake_dancer@act2_p1@shw_snd2@intro";
				case 3:
					return "script@shows@snake_dancer@act2_p1@shw_snd2@outro";
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 2:
					return "script@shows@feats_of_strength@shw_strw@intro";
				case 3:
					return "script@shows@feats_of_strength@shw_strw@outro";
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 2:
					return "script@shows@sword_dancer@shw_swrd@intro";
				case 3:
					return "script@shows@sword_dancer@shw_swrd@outro";
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 2:
					return "script@shows@odd_fellows@shw_oddf_int@intro";
				case 3:
					return "script@shows@odd_fellows@shw_oddf_out@outro";
			}
			break;
	}
	return "";
}

char* func_90(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return "PL_INTRO";
		case 7:
			return "PL_INTRO";
		case 9:
			return "PL_INTRO";
		case 5:
			return "PL_INTRO";
		case 6:
			return "PL_INTRO";
		case 10:
			return "PL_INTRO";
		case 11:
			return "PL_INTRO";
		case 12:
			return "PL_INTRO";
		case 13:
			return "PL_INTRO";
		case 14:
			return "PL_INTRO";
		case 15:
			return "PL_INTRO";
		case 16:
			return "PL_INTRO";
		case 17:
			return "PL_INTRO";
		case 18:
			return "PL_INTRO";
		case 19:
			return "PL_INTRO";
		case 20:
			return "PL_INTRO";
	}
	return "";
}

bool func_91(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4)
{
	iVar0 = 0;
	if (_does_anim_scene_exist(_net_to_anim_scene(*uParam0)) && _is_anim_scene_loaded(_net_to_anim_scene(*uParam0), true, false))
	{
		func_20(uParam1, 1);
		return true;
	}
	if (network_is_host_of_this_script() && _does_anim_scene_exist(_net_to_anim_scene(*uParam0)))
	{
		_network_request_control_of_anim_scene(_net_to_anim_scene(*uParam0));
	}
	if ((!func_84(*uParam1, 1) && !_does_anim_scene_exist(_net_to_anim_scene(*uParam0))) && network_is_host_of_this_script())
	{
		if (bParam4)
		{
			iVar0 = _create_anim_scene(sParam2, 0, sParam3, true, true);
			*uParam0 = _anim_scene_to_net(iVar0);
		}
	}
	if (!_is_anim_scene_loading(_net_to_anim_scene(*uParam0), true))
	{
		load_anim_scene(_net_to_anim_scene(*uParam0));
		func_51(uParam1, 1);
	}
	return false;
}

char* func_92(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 8:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 9:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 10:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 11:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 12:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 13:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 14:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 15:
			if (bParam1)
			{
				return "PL_INTRO";
			}
			else
			{
				return "PL_INTRO";
			}
			break;
		case 16:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 17:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 18:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 19:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 20:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
	}
	return "";
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_94(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[iParam2] = iParam1;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1410422943;
		case 1:
			return -262339715;
		default:
			break;
	}
	return 0;
}

char* func_96()
{
	return "SHRCTAU";
}

char* func_97()
{
	return "script@shows@curtains@curtains";
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
		case 1:
			return "PBL_OPEN_SLOW";
		case 2:
			return "PBL_CLOSE_SLOW";
		case 3:
			return "PBL_IDLE_OPEN";
		case 4:
			return "pl_OPEN_SLOW_HALF";
		default:
			break;
	}
	return "FAIL";
}

bool func_99(int iParam0, char* sParam1, char[4] cParam2)
{
	iVar0 = _net_to_anim_scene(iParam0);
	if (!_0x23e33cb9f4a3f547(iVar0, sParam1) || (!_0x0df57f86fe71dbe5(iVar0, sParam1) && _network_has_control_of_anim_scene(iVar0)))
	{
		_0xdf7b5144e25cd3fe(iVar0, sParam1);
	}
	if (!_0x0df57f86fe71dbe5(iVar0, sParam1))
	{
	}
	if (!_0x23e33cb9f4a3f547(iVar0, sParam1))
	{
		return false;
	}
	return true;
}

char[] func_100(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_1@intro";
				case 1:
					return "script@shows@set_1@outro";
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_2@intro";
				case 1:
					return "script@shows@set_2@outro";
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_3@intro";
				case 1:
					return "script@shows@set_3@outro";
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_4@intro";
				case 1:
					return "script@shows@set_4@outro";
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_5@intro";
				case 1:
					return "script@shows@set_5@outro";
			}
			break;
	}
	return "";
}

char* func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_INTRO";
		case 1:
			return "PL_INTRO";
		case 2:
			return "PL_INTRO";
		case 3:
			return "PL_INTRO";
		case 4:
			return "PL_INTRO";
	}
	return "";
}

Vector3 func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2546.522f, -1306.835f, 48.2666f;
		case 1:
			return 2538.551f, -1313.008f, 48.21665f;
		case 2:
			return 2546.186f, -1309.756f, 48.21665f;
		case 3:
			return 2546.202f, -1295.387f, 48.2419f;
		case 4:
			return 2538.551f, -1313.008f, 48.21665f;
		case 5:
			return 2546.278f, -1301.387f, 49.2503f;
		case 6:
			return 1.2492f, 0f, -179.3095f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return -88.38f;
		case 2:
			return 355.6767f;
		case 3:
			return 0f;
		case 4:
			return -88.38f;
		case 5:
			return 0f;
		case 6:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_104(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_186(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_105(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_106(var uParam0)
{
	func_187(uParam0, 0);
}

void func_107(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_108()
{
	return "MC";
}

void func_109(var uParam0, int iParam1)
{
	func_51(&(uParam0->f_5), iParam1);
}

bool func_110(var uParam0)
{
	if (uParam0->f_4 != 0 && uParam0->f_19)
	{
		return false;
	}
	sVar0 = func_188(&(uParam0->f_129.f_1[uParam0->f_4]));
	request_script(sVar0);
	if (!has_script_loaded(sVar0))
	{
		return false;
	}
	Var1.f_1 = &uParam0->f_129.f_1[uParam0->f_4];
	Var1.f_2 = 1;
	Var1.f_3 = uParam0->f_157;
	uParam0->f_129.f_6[uParam0->f_4] = start_new_script_with_args(sVar0, &Var1, 4, 5504);
	return true;
}

void func_111(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_112(var uParam0)
{
	if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_157)))
	{
		if (_0x1f0e401031e20146(_net_to_anim_scene(uParam0->f_157), func_98(2)) && _get_anim_scene_progress(_net_to_anim_scene(uParam0->f_157)) > 0.413f)
		{
			return true;
		}
		if (_0x1f0e401031e20146(_net_to_anim_scene(uParam0->f_157), func_98(0)))
		{
			return true;
		}
	}
	return false;
}

int func_113(var uParam0)
{
	if (!func_91(uParam0->f_150[1], &(uParam0->f_5), func_100(uParam0->f_128, 1), func_189(uParam0->f_128), 1))
	{
		return 0;
	}
	return 1;
}

void func_114(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return;
	}
	vVar0 = { get_entity_forward_vector(Global_34) };
	vVar3 = { get_entity_coords(*uParam0, true, false) - Global_35 };
	vVar3 = { func_190(vVar3) };
	fVar6 = func_191(vVar3, vVar0);
	if (fVar6 >= 0.2f)
	{
		func_192(uParam0);
	}
}

bool func_115(var uParam0)
{
	iVar0 = _net_to_anim_scene(uParam0->f_157);
	if (!_network_has_control_of_anim_scene(iVar0))
	{
		_network_request_control_of_anim_scene(iVar0);
		return false;
	}
	set_anim_scene_entity(iVar0, func_117(), uParam0->f_158, 0);
	uParam0->f_15 = 1;
	func_116(&(uParam0->f_6), 4);
	return true;
}

void func_116(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_117()
{
	return "CURTAIN";
}

void func_118(int iParam0, char* sParam1, char[4] cParam2)
{
	iVar0 = _net_to_anim_scene(iParam0);
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	if (!_network_has_control_of_anim_scene(iVar0))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(iVar0, sParam1, true);
}

void func_119(int iParam0, char* sParam1, char[4] cParam2)
{
	iVar0 = _net_to_anim_scene(iParam0);
	if (_0x23e33cb9f4a3f547(iVar0, sParam1) && _network_has_control_of_anim_scene(iVar0))
	{
		_0xae6ada8fe7e84acc(iVar0, sParam1);
	}
}

void func_120(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_121(var uParam0)
{
	func_193(uParam0, &uVar0);
	if (&uVar0[0] == 0)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar6 = &uVar0[iVar5];
		if (iVar6 != 0)
		{
			if (!func_194(iVar6))
			{
				func_195(iVar6, 0, 0);
			}
		}
		iVar5++;
	}
}

bool func_122(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	iVar0 = iParam0;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar2 = int_to_participantindex(iVar3);
		if (!func_196(iVar2) || !network_is_participant_active(iVar2))
		{
		}
		else
		{
			iVar1 = network_get_player_index(iVar2);
			if (!_network_is_player_index_valid(iVar1) || !network_is_player_connected(iVar1))
			{
			}
			else if (func_197(iVar3, iVar0 + 4))
			{
				return true;
			}
		}
		iVar3++;
	}
	return false;
}

void func_123(var uParam0)
{
	func_193(uParam0, &uVar0);
	if (&uVar0[0] == 0)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar6 = &uVar0[iVar5];
		if (iVar6 != 0)
		{
			if (!func_194(iVar6))
			{
				func_195(iVar6, 1, 0);
			}
		}
		iVar5++;
	}
}

float func_124(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_125(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

int func_126(var uParam0)
{
	iVar0 = 10;
	return iVar0;
}

bool func_127(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_198(uParam2))
	{
		func_199(uParam2);
	}
	fVar1 = func_200(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_201((*uParam0)[iVar0], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_202(uParam2);
		return true;
	}
	return false;
}

float func_128(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

bool func_129(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_198(uParam2))
	{
		func_199(uParam2);
	}
	fVar1 = func_200(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_203((*uParam0)[iVar0], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_202(uParam2);
		return true;
	}
	return false;
}

float func_130(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_131(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

float func_132(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

float func_133(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_134(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

float func_135(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

float func_136(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_137(var uParam0)
{
	fVar0 = 3f;
	return fVar0;
}

bool func_138(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_198(uParam2))
	{
		func_199(uParam2);
	}
	fVar0 = func_200(uParam2);
	func_201(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_202(uParam2);
		return true;
	}
	return false;
}

float func_139(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

bool func_140(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_198(uParam2))
	{
		func_199(uParam2);
	}
	fVar0 = func_200(uParam2);
	func_203(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_202(uParam2);
		return true;
	}
	return false;
}

float func_141(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_142(var uParam0)
{
	fVar0 = 3f;
	return fVar0;
}

bool func_143(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return true;
	}
	if (!func_198(uParam4))
	{
		func_199(uParam4);
	}
	fVar2 = func_200(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_201((*uParam2)[iVar3], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_202(uParam4);
		return true;
	}
	return false;
}

float func_144(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

bool func_145(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return true;
	}
	if (!func_198(uParam4))
	{
		func_199(uParam4);
	}
	fVar2 = func_200(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_203((*uParam2)[iVar3], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_202(uParam4);
		return true;
	}
	return false;
}

float func_146(var uParam0)
{
	fVar0 = 0.3f;
	return fVar0;
}

float func_147(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

float func_148(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 2;
		case 2:
			return 0;
	}
	return 0;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -842374052;
		case 1:
			return 2085190894;
		case 2:
			return 0;
	}
	return 0;
}

Vector3 func_151(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2553.688f, -1306.052f, 49.97987f;
				case 1:
					return 2539.203f, -1306.098f, 49.9794f;
				case 2:
					return 2539.188f, -1291.61f, 49.97276f;
				case 3:
					return 2543.014f, -1290.244f, 49.95035f;
				case 4:
					return 2549.863f, -1290.254f, 50.00306f;
				case 5:
					return 2553.694f, -1291.636f, 49.96515f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_152(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = _0x6f3068258a499e52(iParam1, vParam2, 7);
	}
	else if (_0x1ff441d7954f8709(uParam0->f_1))
	{
		*uParam0 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_1));
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	uParam0->f_2 = 1f;
	return true;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 13;
		case 2:
			return 0;
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1681397868;
		case 1:
			return 1663958773;
		case 2:
			return 0;
	}
	return 0;
}

Vector3 func_155(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2550.559f, -1306.926f, 48.30644f;
				case 1:
					return 2549.975f, -1306.784f, 48.30579f;
				case 2:
					return 2549.373f, -1306.661f, 48.27742f;
				case 3:
					return 2548.778f, -1306.565f, 48.3292f;
				case 4:
					return 2548.191f, -1306.501f, 48.33652f;
				case 5:
					return 2547.599f, -1306.461f, 48.33248f;
				case 6:
					return 2547.012f, -1306.439f, 48.3321f;
				case 7:
					return 2546.379f, -1306.432f, 48.32198f;
				case 8:
					return 2545.83f, -1306.439f, 48.32955f;
				case 9:
					return 2545.216f, -1306.474f, 48.32186f;
				case 10:
					return 2544.61f, -1306.53f, 48.32782f;
				case 11:
					return 2544.018f, -1306.617f, 48.31695f;
				case 12:
					return 2543.43f, -1306.736f, 48.32981f;
				case 13:
					return 2542.867f, -1306.884f, 48.33492f;
				case 14:
					return 2542.276f, -1307.063f, 48.32477f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2700.432f, -1348.183f, 47.87681f;
				case 1:
					return 2700.377f, -1348.514f, 47.85976f;
				case 2:
					return 2700.37f, -1348.888f, 47.8551f;
				case 3:
					return 2700.434f, -1349.257f, 47.86578f;
				case 4:
					return 2700.558f, -1349.631f, 47.84948f;
				case 5:
					return 2701.542f, -1350.802f, 47.85961f;
				case 6:
					return 2701.878f, -1350.986f, 47.88033f;
				case 7:
					return 2702.219f, -1351.111f, 47.86714f;
				case 8:
					return 2702.572f, -1351.179f, 47.87275f;
				case 9:
					return 2702.962f, -1351.181f, 47.87634f;
				case 10:
					return 2701.173f, -1350.579f, 47.846f;
				case 11:
					return 2700.92f, -1350.285f, 47.846f;
				case 12:
					return 2700.691f, -1349.987f, 47.846f;
				default:
					break;
			}
			break;
			break;
		case 2:
			break;
	}
	return 0f, 0f, 0f;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 0;
	}
	return 0;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1292279125;
		case 1:
			return -280988606;
		case 2:
			return 0;
	}
	return 0;
}

Vector3 func_158(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2548.641f, -1292.548f, 53.95758f;
				case 1:
					return 2544.289f, -1292.548f, 53.96331f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2691.054f, -1352.816f, 52.59f;
				case 1:
					return 2696.695f, -1359.527f, 52.59f;
				default:
					break;
			}
			break;
		case 2:
			break;
	}
	return 0f, 0f, 0f;
}

int func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -584148549;
				case 1:
					return 134813799;
				case 2:
					return 134813799;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			break;
	}
	return 0;
}

Vector3 func_160(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2546.694f, -1306.438f, 48.21665f;
				case 1:
					return 2551.421f, -1308.492f, 48.21665f;
				case 2:
					return 2541.836f, -1308.431f, 48.21665f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2697.828f, -1347.849f, 48.061f;
				case 1:
					return 2697.828f, -1347.854f, 48.89f;
				case 2:
					return 2697.827f, -1347.856f, 49.633f;
				case 3:
					return 2697.825f, -1347.853f, 50.458f;
				case 4:
					return 2697.889f, -1347.932f, 51.201f;
				case 5:
					return 2698.051f, -1348.127f, 52.013f;
				case 6:
					return 2698.298f, -1348.42f, 52.674f;
				case 7:
					return 2698.682f, -1348.865f, 53.307f;
				case 8:
					return 2699.068f, -1349.323f, 53.747f;
				case 9:
					return 2699.578f, -1349.924f, 54.096f;
				case 10:
					return 2700.049f, -1350.493f, 54.234f;
				case 11:
					return 2700.6f, -1351.151f, 54.236f;
				case 12:
					return 2701.085f, -1351.721f, 54.095f;
				case 13:
					return 2701.579f, -1352.32f, 53.744f;
				case 14:
					return 2701.959f, -1352.784f, 53.318f;
				case 15:
					return 2702.34f, -1353.231f, 52.683f;
				case 16:
					return 2702.584f, -1353.52f, 52.034f;
				case 17:
					return 2702.747f, -1353.716f, 51.212f;
				case 18:
					return 2702.814f, -1353.797f, 50.457f;
				case 19:
					return 2702.818f, -1353.797f, 49.618f;
				case 20:
					return 2702.819f, -1353.797f, 48.896f;
				case 21:
					return 2702.817f, -1353.803f, 48.036f;
				default:
					break;
			}
			break;
		case 2:
			break;
	}
	return 0f, 0f, 0f;
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 22;
		case 2:
			return 0;
	}
	return 0;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1158905413;
		case 1:
			return 358397622;
		case 2:
			return 65999835;
		case 3:
			return 814443795;
		case 4:
			return 519621102;
		case 5:
			return -1628223003;
		case 6:
			return 1278256225;
		case 7:
			return 2038628101;
		case 8:
			return 1742494648;
		case 9:
			return -1010166918;
		case 10:
			return 660170868;
		case 11:
			return -1278312096;
		case 12:
			return -509158128;
		case 13:
			return -226656579;
		case 14:
			return 2115868159;
		case 15:
			return 1495813101;
		case 16:
			return 1197385818;
		case 17:
			return 1015780020;
		case 18:
			return -1286733825;
		case 19:
			return -1670393277;
		case 20:
			return -415733461;
		case 21:
			return -1207924036;
		case 22:
			return 497702414;
		case 23:
			return 719188085;
		case 24:
			return 43753457;
		case 25:
			return 771290791;
		case 26:
			return 20356387;
		case 27:
			return 309149584;
		case 28:
			return 1613781781;
		case 29:
			return 1693607065;
		case 30:
			return 1132176120;
		case 31:
			return 869270437;
		default:
			break;
	}
	return 623901053;
}

void func_163(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

Vector3 func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2546.278f, -1301.387f, 49.2503f;
		case 1:
			return 2546.242f, -1298.337f, 51.3709f;
		case 2:
			return 2546.77f, -1304.337f, 48.7382f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.2492f, 0f, -179.3095f;
		case 1:
			return -7.8585f, 0f, -179.3892f;
		case 2:
			return 9.5547f, 0f, 178.3628f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_166(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_204(iVar0, 2))
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
		func_205(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

bool func_167(int iParam0, bool bParam1)
{
	if (bParam1 && !func_21(iParam0))
	{
		return false;
	}
	iVar0 = func_66(iParam0);
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

void func_168(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	if (!func_206(iParam0, 1))
	{
		return;
	}
	set_anim_scene_entity(iParam0, func_108(), iParam1, 0);
	set_anim_scene_entity(iParam0, func_117(), iParam2, 0);
	start_anim_scene(iParam0);
}

int func_170(int iParam0)
{
	if (!is_string_null_or_empty(func_69(iParam0)))
	{
		iVar0 = get_interior_at_coords(2546.453f, -1303.998f, 46.793f);
		if (is_valid_interior(iVar0))
		{
			if (is_interior_ready(iVar0))
			{
				if (_is_interior_entity_set_valid(iVar0, func_69(iParam0)))
				{
					activate_interior_entity_set(iVar0, func_69(iParam0), 0);
				}
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_171(int iParam0)
{
	return func_204(iParam0, 2);
}

int func_172()
{
	return Global_1051252->f_12;
}

char* func_173()
{
	return "unnamed";
}

int func_174(int iParam0)
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

bool func_175(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_207(36, iParam0);
}

bool func_176(int iParam0)
{
	if (func_208(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_209(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_177(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_178(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_179(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_180(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_181(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_182()
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

void func_183(int iParam0)
{
	if (func_210(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_184(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_185(var uParam0, var uParam1, int iParam2)
{
	Var0.f_5 = -1;
	if (!get_event_data(1, iParam2, &Var0, 8))
	{
		return;
	}
	if (Var0.f_5 != uParam0->f_140)
	{
		return;
	}
	if (Var0.f_7)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 0:
			func_211(uParam1, &Var0);
			break;
		case 1:
			func_212(uParam0, &Var0);
			break;
		case 2:
			func_213(uParam0, &Var0);
			break;
		case 3:
			break;
	}
}

void func_186(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (bParam5)
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
			func_214(iParam0, 0, 1);
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
			func_215(iParam0, 0);
			bVar0 = true;
		}
		func_216(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_187(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_217(uParam0, 1);
	func_218(uParam0, 2);
	uParam0->f_2 = 0;
}

char* func_188(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return "show_mp_nbx_cancan_01";
		case 9:
			return "show_mp_nbx_bulletCatcher";
		case 6:
			return "show_mp_nbx_cancan_02";
		case 11:
			return "show_mp_nbx_escapeNoose";
		case 10:
			return "show_mp_nbx_escapeArtist";
		case 12:
			return "show_mp_nbx_fireBreath";
		case 13:
			return "show_mp_nbx_fireDance_01";
		case 14:
			return "show_mp_nbx_fireDance_02";
		case 15:
			return "show_mp_nbx_flexFight";
		case 16:
			return "show_mp_nbx_snakeDance_01";
		case 17:
			return "show_mp_nbx_snakeDance_02";
		case 18:
			return "show_mp_nbx_strongWoman";
		case 19:
			return "show_mp_nbx_swordDancer";
		case 8:
			return "show_mp_nbx_bigband_02";
		case 7:
			return "show_mp_nbx_bigband_01";
		case 20:
			return "show_mp_nbx_oddFellows";
		case 36:
			return "show_movie_magic_lantern";
		case 37:
			return "show_movie_magic_lantern";
		case 38:
			return "show_movie_magic_lantern";
		case 21:
			return "show_movie_magic_lantern";
		case 22:
			return "show_movie_magic_lantern";
		case 23:
			return "show_movie_magic_lantern";
		case 24:
			return "show_movie_magic_lantern";
		case 25:
			return "show_movie_magic_lantern";
		case 26:
			return "show_movie_magic_lantern";
		case 27:
			return "show_movie_magic_lantern";
		case 28:
			return "show_movie_magic_lantern";
		case 31:
			return "show_movie_magic_lantern";
		case 32:
			return "show_movie_magic_lantern";
		case 33:
			return "show_movie_magic_lantern";
		case 34:
			return "show_movie_magic_lantern";
		case 35:
			return "show_movie_magic_lantern";
		case 0:
			return "generic_show_mc";
		default:
			break;
	}
	return "";
}

char* func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_OUTRO";
		case 1:
			return "PL_OUTRO";
		case 2:
			return "PL_OUTRO";
		case 3:
			return "PL_OUTRO";
		case 4:
			return "PL_OUTRO";
	}
	return "";
}

Vector3 func_190(vector3 vParam0)
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

float func_191(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_192(var uParam0)
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
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = *uParam0;
	Var0.f_4 = 21030;
	Var0.f_8 = 4;
	Var0.f_19 = 3;
	Var0.f_20 = 2;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_13 = 3;
	Var0.f_7 = 500;
	_0x66f9eb44342bb4c5(Global_34, &Var0);
}

void func_193(var uParam0, var uParam1)
{
	(*uParam1)[0] = 0;
	switch (uParam0->f_140)
	{
		case 0:
		case 1:
			(*uParam1)[0] = 544106233;
			(*uParam1)[1] = 340151973;
			(*uParam1)[2] = -317441493;
			(*uParam1)[3] = -2128813450;
			break;
	}
}

bool func_194(int iParam0)
{
	func_219(iParam0, 0, 0);
	if (func_220(iParam0))
	{
		return door_system_get_door_state(iParam0) == 0;
	}
	return false;
}

void func_195(int iParam0, int iParam1, bool bParam2)
{
	func_219(iParam0, 0, 0);
	if (func_220(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

bool func_196(int iParam0)
{
	return func_221(iParam0);
}

bool func_197(int iParam0, int iParam1)
{
	return is_bit_set(Global_1291002[iParam0], iParam1);
}

bool func_198(var uParam0)
{
	return func_80(*uParam0, 1);
}

void func_199(var uParam0)
{
	func_222(uParam0, 0f);
}

float func_200(var uParam0)
{
	if (!func_198(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_223(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_224() - uParam0->f_1);
}

void func_201(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	if (does_entity_exist(*uParam0))
	{
		if (uParam0->f_2 > fParam1 && uParam0->f_2 > uParam0->f_3)
		{
			fVar1 = (fParam3 - fParam2);
			fVar0 = (fVar1 / fParam3);
			uParam0->f_2 = func_225(fParam1, uParam0->f_4, fVar0);
			if (uParam0->f_2 < fParam1)
			{
				uParam0->f_2 = fParam1;
			}
		}
		fVar2 = pow(uParam0->f_2, to_float(iParam4));
		_0xf49574e2332a8f06(*uParam0, fVar2);
	}
}

void func_202(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_203(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	if (does_entity_exist(*uParam0))
	{
		if (uParam0->f_2 < fParam1 && uParam0->f_2 < uParam0->f_4)
		{
			fVar0 = (fParam2 / fParam3);
			uParam0->f_2 = func_225(uParam0->f_3, fParam1, fVar0);
			if (uParam0->f_2 > fParam1)
			{
				uParam0->f_2 = fParam1;
			}
			fVar1 = pow(uParam0->f_2, to_float(iParam4));
			_0xf49574e2332a8f06(*uParam0, fVar1);
		}
	}
}

bool func_204(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_205(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_226(iParam0, 1);
	func_227(iParam0, 1);
	func_228(iParam0, 128);
}

bool func_206(int iParam0, bool bParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(iParam0, true, false))
	{
		return false;
	}
	if (bParam1 && !_network_has_control_of_anim_scene(iParam0))
	{
		return false;
	}
	return true;
}

bool func_207(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_229(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_61())
	{
		return func_229(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_229(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_208(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_209(int iParam0)
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
		func_230(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_231(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_210(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

void func_211(var uParam0, var uParam1)
{
	uParam0->f_250 = uParam1->f_6;
}

void func_212(var uParam0, var uParam1)
{
	uParam0->f_5 = uParam1->f_6;
}

void func_213(var uParam0, var uParam1)
{
	switch (uParam1->f_6)
	{
		case 0:
			break;
		case 1:
			uParam0->f_6 = 0;
			func_51(&(uParam0->f_5), 256);
			break;
		case 2:
			uParam0->f_6 = 3;
			uParam0->f_15 = 1;
			break;
	}
}

void func_214(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		_0xdf631e4bce1b1fc4(iParam0, -1725579161, 0, 1);
	}
	else
	{
		_set_ped_component_disabled(iParam0, -1725579161, 1);
	}
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_215(int iParam0, bool bParam1)
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

void func_216(int iParam0, int iParam1)
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

void func_217(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_219(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_220(int iParam0)
{
	if (func_232(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

int func_221(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return 0;
	}
	return 1;
}

void func_222(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_224() - fParam1);
	func_217(uParam0, 1);
	func_218(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_223(var uParam0)
{
	return func_80(*uParam0, 2);
}

float func_224()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

float func_225(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_226(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_204(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_227(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_228(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_229(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

void func_230(int iParam0)
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
	func_231(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_231(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_232(int iParam0)
{
	return iParam0 != 0;
}

