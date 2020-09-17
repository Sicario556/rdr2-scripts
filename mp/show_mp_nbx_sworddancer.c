void __EntryFunction__()
{
	func_1(iVar2426);
	if (network_is_host_of_this_script())
	{
		func_2(&uLocal_16, ScriptParam_0);
	}
	Local_2177.f_1 = participant_id_to_int();
	while (!func_3(Local_1600[Local_2177.f_1]))
	{
		if (network_is_host_of_this_script())
		{
			func_4(&uLocal_16, &Local_1600, &Local_2177);
		}
		func_5(&uLocal_16, &Local_1600, &Local_2177);
		wait(0);
	}
	if (network_is_host_of_this_script())
	{
		func_6(&uLocal_16);
	}
	func_7();
}

void func_1(int iParam0)
{
	func_8(32, iParam0);
	func_9();
	network_register_host_broadcast_variables(&uLocal_16, 1584, 8);
	func_10(_0xba24095ea96dfe17(&uLocal_16), 1584, "sHostData");
	network_register_player_broadcast_variables(&Local_1600, 577, 9);
	func_11(_0x690806bc83bc8ca2(Local_1600[0]), 577, "m_showClientStruct");
	func_12(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	if (network_is_host_of_this_script())
	{
	}
}

void func_2(var uParam0, vector3 vParam1, var uParam4)
{
	if (vParam1.z == 1)
	{
		uParam0->f_1357 = 1;
	}
	if (!uParam0->f_1357 && func_13(Global_1958010->f_1321, -2147483648))
	{
		func_14(&(Global_1958010->f_1321), -2147483648);
	}
	if (!uParam0->f_1559)
	{
		uParam0->f_1547 = 180000;
	}
	uParam0->f_1350 = vParam1.y;
	uParam0->f_1367 = { 2553.875f, -1313.143f, 48.2166f };
	uParam0->f_1370 = { 2546.522f, -1306.835f, 48.26664f };
	uParam0->f_4 = 0;
	uParam0->f_3 = 0;
}

bool func_3(var uParam0)
{
	if (func_15(0, 0))
	{
		return true;
	}
	if (uParam0->f_14 == 12)
	{
		return true;
	}
	if (_0x54ae4fdeefeab77e() != 0)
	{
		return true;
	}
	return false;
}

void func_4(var uParam0, var uParam1, var uParam2)
{
	if (!func_16(uParam1, 2) && uParam0->f_1352 > 12)
	{
		uParam0->f_1352 = 12;
		func_17(uParam0, 2);
	}
	if (uParam0->f_2 != -1)
	{
		uParam0->f_4 = !Global_1291035->f_3[uParam0->f_2]->f_3;
		if (!uParam0->f_4)
		{
			if (uParam0->f_1352 >= 11 && uParam0->f_1352 < 12)
			{
				func_18(&(uParam0->f_26), -2147483648);
				uParam0->f_1352 = 12;
			}
		}
	}
	else
	{
		uParam0->f_4 = 1;
	}
	func_19(uParam0, uParam1);
	switch (uParam0->f_1352)
	{
		case 0:
			if (uParam0->f_25 == 0)
			{
				uParam0->f_25 = Global_1296859->f_21;
			}
			if ((Global_1296859->f_21 - uParam0->f_25) > 5)
			{
				func_20(uParam0, 12);
				return;
			}
			if (!func_21(uParam0))
			{
				return;
			}
			else
			{
				func_22(uParam0, (*uParam1)[uParam2->f_1]);
			}
			uParam0->f_25 = 0;
			func_23(uParam0);
			uParam0->f_5 = 0;
			func_20(uParam0, 1);
			break;
		case 1:
			if (func_24(uParam0))
			{
				func_20(uParam0, 2);
			}
			break;
		case 2:
			if (uParam0->f_25 == 0)
			{
				uParam0->f_25 = Global_1296859->f_21;
			}
			if ((Global_1296859->f_21 - uParam0->f_25) > 5)
			{
				func_20(uParam0, 12);
				return;
			}
			if (get_num_reserved_mission_objects(0) < uParam0->f_24)
			{
				reserve_network_mission_objects((1 - get_num_reserved_mission_objects(0)));
				return;
			}
			if (get_num_reserved_mission_peds(0) < uParam0->f_23)
			{
				reserve_network_mission_peds((1 - get_num_reserved_mission_peds(0)));
				return;
			}
			uParam0->f_25 = 0;
			func_20(uParam0, 3);
			break;
		case 3:
			if (func_25(uParam0))
			{
				func_20(uParam0, 4);
			}
			break;
		case 4:
			if (func_16(uParam1, 16))
			{
				func_20(uParam0, 8);
			}
			break;
		case 8:
			if (func_26(uParam0))
			{
				func_27(&(uParam0->f_1437));
				if (uParam0->f_1559)
				{
					uParam0->f_1548.f_1 = uParam0->f_1351;
				}
				func_28(uParam0);
				func_29(uParam0);
			}
			if (func_30(uParam0->f_1548.f_1))
			{
				if (uParam0->f_1559 && !func_31(uParam0, 4))
				{
					uParam0->f_23++;
					uParam0->f_24 += 5;
					reserve_network_mission_peds(1);
					reserve_network_mission_objects(5);
					func_17(uParam0, 4);
					uParam0->f_25 = 0;
				}
				if (get_num_reserved_mission_peds(0) != uParam0->f_23 || get_num_reserved_mission_objects(0) != uParam0->f_24)
				{
					uParam0->f_25++;
					return;
				}
				func_32(&(uParam0->f_1548), uParam0->f_1350);
			}
			if (func_33(uParam0))
			{
				if ((func_34(&(uParam0->f_1437)) && func_35(&(uParam0->f_1437)) > uParam0->f_1547) || uParam0->f_4)
				{
					func_27(&(uParam0->f_1437));
					func_20(uParam0, 9);
				}
			}
			break;
		case 9:
			if ((uParam0->f_1559 && uParam0->f_1548.f_10 == 0) && func_36(&(uParam0->f_1437)) > 3f)
			{
				uParam0->f_1548.f_10 = 1;
			}
			if ((func_34(&(uParam0->f_1437)) && func_35(&(uParam0->f_1437)) > 10000) || uParam0->f_1357)
			{
				uParam0->f_3 = 1;
			}
			if (uParam0->f_1559)
			{
				func_32(&(uParam0->f_1548), uParam0->f_1350);
			}
			if (uParam0->f_3)
			{
				func_20(uParam0, 10);
			}
			break;
		case 10:
			if (func_37(uParam1, 9, -1))
			{
				func_20(uParam0, 11);
			}
			if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1376)) && !func_13(uParam0->f_1358, 512))
			{
				func_18(&(uParam0->f_1358), -2147483648);
				func_18(&(uParam0->f_1358), 512);
			}
			if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1374)))
			{
				if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_1374), false))
				{
					func_20(uParam0, 11);
				}
			}
			else if (func_13(uParam0->f_1358, 256))
			{
				func_18(&((*uParam1)[uParam2->f_1]->f_1), -2147483648);
				func_38((*uParam1)[uParam2->f_1], 10);
			}
			break;
		case 11:
			if (func_26(uParam0))
			{
				if (uParam0->f_1559 || !uParam0->f_1357)
				{
					if (uParam0->f_1351 == 4 || uParam0->f_1351 == 2)
					{
						uParam0->f_31[4] = &uParam0->f_31[4] + 1;
						uParam0->f_31[2] = &uParam0->f_31[2] + 1;
					}
					else
					{
						uParam0->f_31[1] = &uParam0->f_31[1] + 1;
						uParam0->f_31[3] = &uParam0->f_31[3] + 1;
					}
				}
				func_29(uParam0);
			}
			if (!uParam0->f_1357)
			{
			}
			func_39(uParam0, uParam1, uParam2);
			if (func_13(uParam0->f_1358, 4096))
			{
				if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_1374), false) && _get_anim_scene_progress(_net_to_anim_scene(uParam0->f_1374)) > func_40())
				{
					func_18(&(uParam0->f_1358), 2);
				}
			}
			if (func_13(uParam0->f_1358, 268435456) && func_13(uParam0->f_1358, 134217728))
			{
				_0x8bf907833be275de(1f, 1f);
				func_14(&(uParam0->f_1358), 268435456);
			}
			if (uParam0->f_1559)
			{
				func_32(&(uParam0->f_1548), uParam0->f_1350);
				if (func_41())
				{
					if (!func_13(uParam0->f_1358, 67108864))
					{
						uParam0->f_6 = 0;
						uParam0->f_7 = 0;
						func_18(&(uParam0->f_1358), 67108864);
					}
					if (!uParam0->f_4)
					{
						func_20(uParam0, 12);
					}
				}
			}
			else if (func_13(uParam0->f_1358, 8388608))
			{
				if (!func_13(uParam0->f_1358, 67108864))
				{
					if (uParam0->f_1357)
					{
						uParam0->f_8 = 1;
					}
					func_18(&(uParam0->f_1358), 67108864);
				}
				if (uParam0->f_1357)
				{
					if (func_42(&(uParam0->f_27)) && func_43(&(uParam0->f_27)) > 9000)
					{
						func_20(uParam0, 12);
					}
				}
				else if (!uParam0->f_4)
				{
					func_20(uParam0, 12);
				}
			}
			break;
		case 12:
			if (!uParam0->f_1357 && func_13(uParam0->f_26, -2147483648))
			{
				if (uParam0->f_1559)
				{
					func_44(&(uParam0->f_1548));
					func_18(&(uParam2->f_247), 4);
					func_18(&(uParam2->f_247), 32);
					func_45(uParam0);
				}
				else
				{
					uParam0->f_5 = 0;
					func_46(uParam0->f_1350);
				}
				uParam0->f_6 = 0;
				uParam0->f_7 = 0;
				func_20(uParam0, 13);
				return;
			}
			if (uParam0->f_1357)
			{
				func_20(uParam0, 13);
			}
			else if (func_13(uParam0->f_1358, 536870912))
			{
				uParam0->f_6 = 0;
				uParam0->f_7 = 0;
				func_20(uParam0, 13);
			}
			else if (!uParam0->f_4 && !uParam0->f_1357)
			{
				uParam0->f_6 = 0;
				uParam0->f_7 = 0;
				if (!func_47(uParam0->f_1350))
				{
					func_20(uParam0, 13);
				}
			}
			else
			{
				func_28(uParam0);
				func_20(uParam0, 11);
			}
			break;
	}
}

void func_5(var uParam0, var uParam1, var uParam2)
{
	func_48(uParam0, uParam1, uParam2);
	func_49(uParam0, (*uParam1)[uParam2->f_1]);
	if (!uParam0->f_1357)
	{
		func_50(uParam0, uParam2);
	}
	if (((*uParam1)[uParam2->f_1]->f_14 < 11 && (*uParam1)[uParam2->f_1]->f_14 >= 10) && uParam0->f_1352 >= 12)
	{
		(*uParam1)[uParam2->f_1]->f_14 = 11;
	}
	switch ((*uParam1)[uParam2->f_1]->f_14)
	{
		case 0:
			if (!uParam0->f_1357)
			{
				func_51(&(uParam2->f_2), &(uParam2->f_247));
			}
			func_21(uParam0);
			func_38((*uParam1)[uParam2->f_1], 1);
			break;
		case 1:
			if (uParam0->f_1352 > 0)
			{
				func_38((*uParam1)[uParam2->f_1], 2);
			}
			break;
		case 2:
			func_22(uParam0, (*uParam1)[uParam2->f_1]);
			func_38((*uParam1)[uParam2->f_1], 3);
			break;
		case 3:
			if (func_24(uParam0) && uParam0->f_1352 > 3)
			{
				func_38((*uParam1)[uParam2->f_1], 4);
			}
			break;
		case 4:
			if (!_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1374)))
			{
				func_52((*uParam1)[uParam2->f_1], 16);
			}
			else if (_network_has_control_of_anim_scene(_net_to_anim_scene(uParam0->f_1374)) && !func_16(uParam1, 16))
			{
				func_53(uParam0, (*uParam1)[uParam2->f_1]);
			}
			if (func_16(uParam1, 16))
			{
				func_38((*uParam1)[uParam2->f_1], 5);
			}
			break;
		case 5:
			func_28(uParam0);
			func_38((*uParam1)[uParam2->f_1], 6);
			break;
		case 6:
			if (func_54((*uParam1)[uParam2->f_1]))
			{
				if (uParam0->f_1351 == 0 && !uParam0->f_1357)
				{
					func_18(&(uParam2->f_247), 512);
					func_18(&(uParam2->f_247), 131072);
				}
				func_55((*uParam1)[uParam2->f_1]);
			}
			if (func_30(uParam0->f_1548.f_1) && func_31(uParam0, 4))
			{
				func_56(&(uParam0->f_1548), &((*uParam1)[uParam2->f_1]->f_15), uParam0->f_1350);
			}
			if (uParam0->f_1352 > 8)
			{
				func_38((*uParam1)[uParam2->f_1], 7);
			}
			break;
		case 7:
			if (uParam0->f_1559)
			{
				func_56(&(uParam0->f_1548), &((*uParam1)[uParam2->f_1]->f_15), uParam0->f_1350);
			}
			if (uParam0->f_3)
			{
				if (!uParam0->f_1357)
				{
					func_18(&(uParam2->f_247), 2);
					func_18(&(uParam2->f_247), 4096);
				}
				if (uParam0->f_1351 == 0)
				{
				}
				if (uParam0->f_1559)
				{
					func_18(&(uParam2->f_247), 16);
					Global_1958010->f_1325 = 1;
					if (uParam0->f_1351 == 1 || uParam0->f_1351 == 2)
					{
						func_18(&(uParam2->f_247), 4194304);
					}
				}
				func_38((*uParam1)[uParam2->f_1], 8);
			}
			break;
		case 8:
			if (uParam0->f_1559)
			{
				func_56(&(uParam0->f_1548), &((*uParam1)[uParam2->f_1]->f_15), uParam0->f_1350);
				if (!func_13(uParam2->f_247, 16))
				{
					func_57(uParam0);
					func_58(uParam0->f_1350);
					func_38((*uParam1)[uParam2->f_1], 9);
				}
				return;
			}
			if ((func_59(_net_to_anim_scene(uParam0->f_1374), 1) && !_is_anim_scene_started(_net_to_anim_scene(uParam0->f_1374), false)) && !func_13((*uParam1)[uParam2->f_1]->f_1, 128))
			{
				start_anim_scene(_net_to_anim_scene(uParam0->f_1374));
				func_18(&((*uParam1)[uParam2->f_1]->f_1), 128);
			}
			if (!_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1376)))
			{
			}
			if (!_0x23e33cb9f4a3f547(_net_to_anim_scene(uParam0->f_1376), func_60(1)))
			{
			}
			if (!_0x1f0e401031e20146(_net_to_anim_scene(uParam0->f_1376), func_60(1)))
			{
				_set_anim_scene_playback_list_bool(_net_to_anim_scene(uParam0->f_1376), func_60(1), true);
			}
			if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1376)) && !func_13(uParam0->f_1358, 512))
			{
			}
			else if (!func_13((*uParam1)[uParam2->f_1]->f_1, 1024))
			{
				_0x8bf907833be275de(0f, 1f);
				func_18(&((*uParam1)[uParam2->f_1]->f_1), 268435456);
				func_63(func_61(6), func_62());
				if (func_13(uParam0->f_1359, 1))
				{
					play_stream_from_position(2552.53f, -1310.069f, 49.21665f, _0x0556c784fa056628(func_64(uParam0->f_1350), func_65(uParam0->f_1350)));
				}
				if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1374)))
				{
					if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_1374), false))
					{
						func_38((*uParam1)[uParam2->f_1], 9);
					}
				}
				else if (func_13((*uParam1)[uParam2->f_1]->f_1, 256))
				{
					func_18(&((*uParam1)[uParam2->f_1]->f_1), -2147483648);
					func_38((*uParam1)[uParam2->f_1], 9);
				}
			}
			break;
		case 9:
			if ((uParam0->f_1559 && !uParam0->f_1561) && !is_entity_visible(uParam0->f_1576))
			{
				if (network_has_control_of_entity(uParam0->f_1576))
				{
					set_entity_visible(uParam0->f_1576, true);
				}
			}
			if (uParam0->f_1352 > 10)
			{
				func_38((*uParam1)[uParam2->f_1], 10);
			}
			break;
		case 10:
			func_39(uParam0, uParam1, uParam2);
			if (uParam0->f_1559)
			{
				func_56(&(uParam0->f_1548), &((*uParam1)[uParam2->f_1]->f_15), uParam0->f_1350);
				func_66(uParam0);
				if (func_41())
				{
					if (!func_13(uParam0->f_1358, 67108864))
					{
						func_18(&(uParam2->f_247), 4);
						func_18(&(uParam2->f_247), 32);
						if (uParam0->f_1351 == 1 || uParam0->f_1351 == 2)
						{
							func_18(&(uParam2->f_247), 8388608);
						}
						func_18(&((*uParam1)[uParam2->f_1]->f_1), 67108864);
					}
					func_45(uParam0);
					if (!uParam0->f_4)
					{
						func_46(uParam0->f_1350);
						func_38((*uParam1)[uParam2->f_1], 11);
					}
				}
			}
			else
			{
				if (func_13(uParam0->f_1358, 8388608))
				{
					if (!func_13((*uParam1)[uParam2->f_1]->f_1, 67108864))
					{
						func_67(func_61(6), func_62());
						if (func_13((*uParam1)[uParam2->f_1]->f_1, 268435456))
						{
							_0x8bf907833be275de(1f, 1f);
							func_14(&((*uParam1)[uParam2->f_1]->f_1), 268435456);
						}
						if (func_13(uParam0->f_1358, 4096) && !uParam0->f_1357)
						{
							func_18(&(uParam2->f_247), 4);
							func_18(&(uParam2->f_247), 8192);
						}
					}
					if (uParam0->f_1357)
					{
						if (func_42(&(uParam0->f_27)) && func_43(&(uParam0->f_27)) > 9000)
						{
							func_20(uParam0, 12);
						}
					}
					else if (!uParam0->f_4)
					{
						func_46(uParam0->f_1350);
						func_38((*uParam1)[uParam2->f_1], 11);
					}
					if (func_13(uParam0->f_1358, 256))
					{
						if (!uParam0->f_4)
						{
							func_38((*uParam1)[uParam2->f_1], 11);
							if (!uParam0->f_1357)
							{
								func_46(uParam0->f_1350);
							}
						}
						if (uParam0->f_1357 && uParam0->f_5)
						{
							func_38((*uParam1)[uParam2->f_1], 11);
						}
					}
				}
				if (!func_68((*uParam1)[uParam2->f_1], 1))
				{
					func_69(&(uParam2->f_250), 1, 1);
				}
			}
			break;
		case 11:
			if (uParam0->f_4)
			{
				if (uParam0->f_1559)
				{
				}
			}
			if (!uParam0->f_1357 && func_13(uParam0->f_26, -2147483648))
			{
				if (uParam0->f_1559)
				{
					func_44(&(uParam0->f_1548));
					func_18(&(uParam2->f_247), 4);
					func_18(&(uParam2->f_247), 32);
					func_45(uParam0);
				}
				else
				{
					func_46(uParam0->f_1350);
				}
				if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1376)) && _network_has_control_of_anim_scene(_net_to_anim_scene(uParam0->f_1376)))
				{
					_delete_anim_scene(_net_to_anim_scene(uParam0->f_1376));
				}
				_0x531a78d6bf27014b(func_62());
				func_70(uParam0, uParam2);
				_display_hud_component(-1618603322);
				func_38((*uParam1)[uParam2->f_1], 12);
				return;
			}
			if (uParam0->f_1357)
			{
				if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1376)) && _network_has_control_of_anim_scene(_net_to_anim_scene(uParam0->f_1376)))
				{
					_delete_anim_scene(_net_to_anim_scene(uParam0->f_1376));
				}
				_0x531a78d6bf27014b(func_62());
				func_70(uParam0, uParam2);
				func_38((*uParam1)[uParam2->f_1], 12);
			}
			else if (func_13(uParam0->f_1358, 536870912))
			{
				if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1376)) && _network_has_control_of_anim_scene(_net_to_anim_scene(uParam0->f_1376)))
				{
					_delete_anim_scene(_net_to_anim_scene(uParam0->f_1376));
				}
				_0x531a78d6bf27014b(func_62());
				func_70(uParam0, uParam2);
				func_38((*uParam1)[uParam2->f_1], 12);
			}
			else if (!uParam0->f_4 && !uParam0->f_1357)
			{
				func_44(&(uParam0->f_1548));
				if (!func_47(uParam0->f_1350))
				{
					if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1376)) && _network_has_control_of_anim_scene(_net_to_anim_scene(uParam0->f_1376)))
					{
						_delete_anim_scene(_net_to_anim_scene(uParam0->f_1376));
					}
					_0x531a78d6bf27014b(func_62());
					func_70(uParam0, uParam2);
					_display_hud_component(-1618603322);
					func_38((*uParam1)[uParam2->f_1], 12);
				}
			}
			else
			{
				func_28(uParam0);
				func_38((*uParam1)[uParam2->f_1], 10);
				func_71((*uParam1)[uParam2->f_1]);
			}
			break;
	}
}

void func_6(var uParam0)
{
	if (uParam0->f_1357)
	{
		return;
	}
	func_72(uParam0->f_2);
}

void func_7()
{
	terminate_this_thread();
}

void func_8(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_7();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_9()
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
			func_7();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_7();
					break;
				case 2:
					func_7();
					break;
				case 4:
					func_7();
					break;
				case 3:
					func_7();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_7();
		}
		if (!network_is_game_in_progress())
		{
			func_7();
		}
		if (!network_is_signed_online())
		{
			func_7();
		}
		if (func_73() == 0)
		{
			if (func_74())
			{
				func_7();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_7();
	}
	return 1;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
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
					func_7();
					break;
				case 2:
					func_7();
					break;
				case 4:
					func_7();
					break;
				case 3:
					func_7();
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
			func_7();
			return;
		}
		wait(0);
	}
}

bool func_13(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_14(var uParam0, int iParam1)
{
	func_75(uParam0, iParam1);
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

bool func_16(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (!func_76(iVar1) || !network_is_participant_active(iVar1))
		{
		}
		else
		{
			iVar2 = network_get_player_index(iVar1);
			if (!_network_is_player_index_valid(iVar2) || !network_is_player_connected(iVar2))
			{
			}
			else if (func_68((*uParam0)[iVar0], iParam1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_17(var uParam0, int iParam1)
{
	func_77(&(uParam0->f_11), iParam1);
}

void func_18(var uParam0, int iParam1)
{
	func_78(uParam0, iParam1);
}

void func_19(var uParam0, var uParam1)
{
	iVar0 = _net_to_anim_scene(uParam0->f_1376);
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	if (!_network_has_control_of_anim_scene(iVar0))
	{
		_network_request_control_of_anim_scene(iVar0);
		return;
	}
	switch (uParam0->f_1356)
	{
		case 0:
			if (!func_79(iVar0, func_60(1), func_60(1)))
			{
				return;
			}
			func_80(&(uParam0->f_1356), 1);
			break;
		case 1:
			if (uParam0->f_30 == 1)
			{
				set_anim_scene_entity(iVar0, func_81(), uParam0->f_1384, 0);
				func_83(iVar0, func_60(1), func_82());
				func_80(&(uParam0->f_1356), 2);
			}
			break;
		case 2:
			if (_0x1f0e401031e20146(iVar0, func_60(1)))
			{
				func_84(iVar0, func_60(2), func_82());
				func_85(uParam0, 0);
				func_80(&(uParam0->f_1356), 3);
			}
			break;
		case 3:
			if (!func_79(iVar0, func_60(2), func_82()))
			{
				return;
			}
			func_80(&(uParam0->f_1356), 4);
			break;
		case 4:
			if (uParam0->f_30 == 2)
			{
				set_anim_scene_entity(iVar0, func_81(), uParam0->f_1384, 0);
				func_83(iVar0, func_60(2), func_82());
				func_80(&(uParam0->f_1356), 5);
			}
			break;
		case 5:
			if (_0x1f0e401031e20146(iVar0, func_60(2)))
			{
				func_84(iVar0, func_60(1), func_82());
				func_85(uParam0, 0);
				func_80(&(uParam0->f_1356), 0);
			}
			break;
	}
}

void func_20(var uParam0, int iParam1)
{
	if (uParam0->f_1352 != iParam1)
	{
		uParam0->f_1352 = iParam1;
		func_86(uParam0);
	}
}

bool func_21(var uParam0)
{
	if (network_is_host_of_this_script())
	{
		uParam0->f_1351 = 0;
		uParam0->f_24 = 1;
		uParam0->f_23 = 1;
		uParam0->f_2 = 0;
		uParam0->f_1401[0] = -1772823089;
		uParam0->f_1385[0] = -422520518;
		uParam0->f_1436 = "SHSDAUD";
		func_18(&(uParam0->f_1358), 131072);
		uParam0->f_1377 = { 2546.453f, -1303.998f, 46.793f };
		uParam0->f_1380 = { 0f, 0f, 40f };
		if (!_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1374)))
		{
			uParam0->f_1373 = _create_anim_scene(func_87(), 2, func_88(), true, true);
			uParam0->f_1374 = _anim_scene_to_net(uParam0->f_1373);
		}
	}
	return true;
}

void func_22(var uParam0, var uParam1)
{
	if (func_68(uParam1, 16))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1385)
	{
		iVar1 = &uParam0->f_1385[iVar0];
		if (func_89(iVar1))
		{
			request_model(iVar1, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1401)
	{
		iVar2 = &uParam0->f_1401[iVar0];
		if (func_89(iVar2))
		{
			request_model(iVar2, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1415)
	{
		iVar3 = &uParam0->f_1415[iVar0];
		if (iVar3 != 0)
		{
			if (is_weapon_valid(iVar3))
			{
				_0x72d4cb5db927009c(iVar3, -1, 0);
			}
		}
		iVar0++;
	}
	request_model(uParam0->f_1383, false);
	if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1374)) && !_is_anim_scene_loaded(_net_to_anim_scene(uParam0->f_1374), true, false))
	{
		load_anim_scene(_net_to_anim_scene(uParam0->f_1374));
	}
}

void func_23(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1415)
	{
		uParam0->f_1415[iVar0] = 0;
		iVar0++;
	}
}

bool func_24(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1385)
	{
		iVar1 = &uParam0->f_1385[iVar0];
		if (func_89(iVar1))
		{
			if (!has_model_loaded(iVar1))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1401)
	{
		iVar2 = &uParam0->f_1401[iVar0];
		if (func_89(iVar2))
		{
			if (!has_model_loaded(iVar2))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1415)
	{
		iVar3 = &uParam0->f_1415[iVar0];
		if (iVar3 != 0)
		{
			if (is_weapon_valid(iVar3) && !_0xff07cf465f48b830(iVar3))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!has_model_loaded(uParam0->f_1383))
	{
		return false;
	}
	if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1374)))
	{
		if (!_is_anim_scene_loaded(_net_to_anim_scene(uParam0->f_1374), true, false))
		{
			return false;
		}
	}
	if (!_0xd9130842d7226045(func_62(), 1))
	{
		return false;
	}
	if (!func_90(uParam0))
	{
		return false;
	}
	if (!is_string_null_or_empty(uParam0->f_1435))
	{
		if (_does_text_database_exist(uParam0->f_1435))
		{
			_text_database_request(uParam0->f_1435);
		}
		if (!_text_database_has_loaded(uParam0->f_1435))
		{
			return false;
		}
	}
	if (!func_91(uParam0))
	{
		return false;
	}
	return true;
}

bool func_25(var uParam0)
{
	if (!uParam0->f_1357 && !uParam0->f_1559)
	{
		if (!func_92(&(uParam0->f_1384), uParam0->f_1383, uParam0->f_1370))
		{
			return false;
		}
		if (!func_94(&(uParam0->f_1375), &(uParam0->f_1376), &(uParam0->f_1358), func_82(), func_93(0), 1))
		{
			return false;
		}
		set_anim_scene_entity(_net_to_anim_scene(uParam0->f_1376), func_81(), uParam0->f_1384, 0);
		if (!func_79(_net_to_anim_scene(uParam0->f_1376), func_93(1), func_82()))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (is_model_valid(&(uParam0->f_1401[iVar0])))
		{
			if (!func_95(uParam0->f_1408[iVar0], &(uParam0->f_1401[iVar0]), uParam0->f_1367, 0f))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!func_96(uParam0))
	{
		return false;
	}
	func_97(uParam0);
	if (!uParam0->f_1357 && !uParam0->f_1559)
	{
		set_anim_scene_entity(_net_to_anim_scene(uParam0->f_1376), "CURTAIN", uParam0->f_1384, 0);
	}
	return true;
}

bool func_26(var uParam0)
{
	return uParam0->f_1353;
}

void func_27(var uParam0)
{
	func_98(uParam0, 0f);
}

void func_28(var uParam0)
{
	func_99(uParam0, &uVar0);
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
			if (!func_100(iVar6))
			{
				func_101(iVar6, 0, 0);
			}
		}
		iVar5++;
	}
}

void func_29(var uParam0)
{
	uParam0->f_1353 = 0;
}

bool func_30(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

bool func_31(var uParam0, int iParam1)
{
	return func_102(uParam0->f_11, iParam1);
}

void func_32(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 0:
			func_103(uParam0, 1);
			break;
		case 1:
			if (!has_model_loaded(func_104()) || !has_model_loaded(func_105(0)))
			{
				return;
			}
			if (!does_entity_exist(uParam0->f_2))
			{
				uParam0->f_2 = func_108(func_104(), func_106(uParam0->f_1), func_107(uParam0->f_1), 1, 1, 1, 1, 1, 1, 0, 0);
			}
			if (!does_entity_exist(uParam0->f_2))
			{
				return;
			}
			else
			{
				if (!network_has_control_of_entity(uParam0->f_2))
				{
				}
				set_blocking_of_non_temporary_events(uParam0->f_2, true);
				_0x870708a6e147a9ad(uParam0->f_2, "", 17f, 0, 0, 0, 0, 0, 0, -1);
				set_ped_config_flag(uParam0->f_2, 178, true);
				set_ped_config_flag(uParam0->f_2, 315, true);
			}
			iVar0 = 0;
			while (iVar0 <= (5 - 1))
			{
				iVar1 = iVar0;
				uParam0->f_3[iVar0] = create_object(func_105(iVar1), func_109(iVar1), true, true, false, false, true);
				iVar0++;
			}
			func_103(uParam0, 2);
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam0->f_9))
			{
				uParam0->f_9 = _create_anim_scene(func_110(iParam1), 0, func_111(iParam1, 0), true, true);
				load_anim_scene(uParam0->f_9);
				set_anim_scene_origin(uParam0->f_9, func_112(iParam1), func_113(iParam1), 2);
			}
			else if (_is_anim_scene_loaded(uParam0->f_9, true, false))
			{
				func_103(uParam0, 3);
			}
			break;
		case 3:
			if (!_is_anim_scene_started(uParam0->f_9, false))
			{
				return;
			}
			func_103(uParam0, 4);
			break;
		case 4:
			if (!_0x1f0e401031e20146(uParam0->f_9, func_111(iParam1, 1)) || !_0x23e33cb9f4a3f547(uParam0->f_9, func_111(iParam1, 1)))
			{
				return;
			}
			func_103(uParam0, 5);
			break;
		case 5:
			break;
	}
}

bool func_33(var uParam0)
{
	return true;
}

bool func_34(var uParam0)
{
	return func_114(*uParam0, 1);
}

int func_35(var uParam0)
{
	if (!func_34(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_115(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_116() - round((uParam0->f_1 * 1000f)));
}

float func_36(var uParam0)
{
	if (!func_34(uParam0))
	{
		return 0f;
	}
	if (func_115(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_117() - uParam0->f_1);
}

bool func_37(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (!func_76(iVar1) || !network_is_participant_active(iVar1))
		{
		}
		else
		{
			iVar2 = network_get_player_index(iVar1);
			if (!_network_is_player_index_valid(iVar2) || !network_is_player_connected(iVar2))
			{
			}
			else if ((*uParam0)[iVar0]->f_14 != iParam1 && (iParam2 != -1 && (*uParam0)[iVar0]->f_14 != iParam2))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_38(var uParam0, int iParam1)
{
	if (uParam0->f_14 != iParam1)
	{
		uParam0->f_14 = iParam1;
		func_118(uParam0);
	}
}

void func_39(var uParam0, var uParam1, var uParam2)
{
	if (!_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1374)))
	{
		return;
	}
	fVar0 = _get_anim_scene_progress(_net_to_anim_scene(uParam0->f_1374));
	if (network_is_host_of_this_script())
	{
		func_119(uParam0, uParam1, uParam2, fVar0);
	}
	func_120(uParam0, uParam1, uParam2, fVar0);
}

float func_40()
{
	return 0.95f;
}

bool func_41()
{
	if (get_tv_channel() == -1)
	{
		return true;
	}
	if (_is_tv_playlist_item_playing(-1302053960))
	{
		return true;
	}
	return false;
}

bool func_42(var uParam0)
{
	return func_114(*uParam0, 1);
}

int func_43(var uParam0)
{
	if (!func_42(uParam0))
	{
		return 0;
	}
	if (func_121(uParam0))
	{
		return uParam0->f_2;
	}
	return func_122(uParam0->f_1);
}

void func_44(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_9) && _network_has_control_of_anim_scene(uParam0->f_9))
	{
		_delete_anim_scene(uParam0->f_9);
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (does_entity_exist(&(uParam0->f_3[iVar0])) && network_has_control_of_entity(&(uParam0->f_3[iVar0])))
		{
			delete_object(uParam0->f_3[iVar0]);
		}
		iVar0++;
	}
	if (does_entity_exist(uParam0->f_2) && network_has_control_of_entity(uParam0->f_2))
	{
		delete_ped(&(uParam0->f_2));
	}
}

void func_45(var uParam0)
{
	if (get_tv_channel() == -1)
	{
		return;
	}
	set_tv_channel(-1);
	if (does_entity_exist(uParam0->f_1576) && network_has_control_of_entity(uParam0->f_1576))
	{
		set_entity_visible(uParam0->f_1576, false);
	}
	if (uParam0->f_1561)
	{
		if (does_entity_exist(uParam0->f_1577))
		{
			_0xf49574e2332a8f06(uParam0->f_1577, 0f);
			_0x04d1d4e411ce52d0(uParam0->f_1577, 0);
		}
	}
}

void func_46(int iParam0)
{
	if (&Global_1958010->f_7[iParam0]->f_7[0] == 0)
	{
		if (func_123() == 81)
		{
			func_124(1015669983);
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1958010->f_7[iParam0]->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!func_125(iVar1) && !func_126(iVar1))
			{
				func_127(iVar1, 1, 0, 0, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

bool func_47(int iParam0)
{
	if (&Global_1958010->f_7[iParam0]->f_7[0] == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1958010->f_7[iParam0]->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (func_128(iVar1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_48(var uParam0, var uParam1, var uParam2)
{
	if (func_129(Global_34, uParam0->f_9, 1, 0))
	{
		func_52((*uParam1)[uParam2->f_1], 1);
	}
	else if (func_68((*uParam1)[uParam2->f_1], 1))
	{
		func_130((*uParam1)[uParam2->f_1], 1);
	}
	if (func_129(Global_34, uParam0->f_10, 1, 0))
	{
		func_52((*uParam1)[uParam2->f_1], 2);
	}
	else if (func_68((*uParam1)[uParam2->f_1], 2))
	{
		func_130((*uParam1)[uParam2->f_1], 2);
	}
}

void func_49(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!uParam0->f_12[iVar0]->f_2)
		{
			*uParam1->f_3[iVar0] = { vVar1 };
		}
		else
		{
			if (!func_131(uParam0->f_12[iVar0], uParam1->f_3[iVar0]))
			{
				func_132(uParam0->f_12[iVar0], uParam1->f_3[iVar0]);
			}
			uParam1->f_3[iVar0]->f_2 = func_79(_net_to_anim_scene(&(uParam1->f_3[iVar0])), uParam1->f_3[iVar0]->f_1, uParam1->f_3[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_50(var uParam0, var uParam1)
{
	func_133(&(uParam1->f_2), &(uParam1->f_247), uParam0->f_2);
	func_134(&(uParam1->f_247), &(uParam1->f_2), uParam0->f_2);
}

void func_51(var uParam0, var uParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		(*uParam0)[iVar0]->f_2 = 1f;
		(*uParam0)[iVar0]->f_3 = 0f;
		(*uParam0)[iVar0]->f_4 = 1f;
		(*uParam0)[iVar0]->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		uParam0->f_31[iVar0]->f_2 = 1f;
		uParam0->f_31[iVar0]->f_3 = 0f;
		uParam0->f_31[iVar0]->f_4 = 1f;
		uParam0->f_31[iVar0]->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_107[iVar0]->f_2 = 1f;
		uParam0->f_107[iVar0]->f_3 = 0f;
		uParam0->f_107[iVar0]->f_4 = 1f;
		uParam0->f_107[iVar0]->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		uParam0->f_118[iVar0]->f_2 = 1f;
		uParam0->f_118[iVar0]->f_3 = 0f;
		uParam0->f_118[iVar0]->f_4 = 1f;
		uParam0->f_118[iVar0]->f_1 = 0;
		iVar0++;
	}
	func_18(uParam1, -2147483648);
}

void func_52(var uParam0, int iParam1)
{
	func_77(&(uParam0->f_13), iParam1);
}

void func_53(var uParam0, var uParam1)
{
	if (!_is_anim_scene_loaded(_net_to_anim_scene(uParam0->f_1374), true, false))
	{
		load_anim_scene(_net_to_anim_scene(uParam0->f_1374));
		return;
	}
	func_135(uParam0);
	func_52(uParam1, 16);
}

bool func_54(var uParam0)
{
	return uParam0->f_2;
}

void func_55(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_56(var uParam0, var uParam1, int iParam2)
{
	switch (*uParam1)
	{
		case 0:
			request_model(func_104(), false);
			request_model(func_105(0), false);
			func_136(uParam1, 1);
			break;
		case 1:
			if (*uParam0 > 1)
			{
				func_136(uParam1, 3);
			}
			break;
		case 3:
			if ((_does_anim_scene_exist(uParam0->f_9) && _is_anim_scene_loaded(uParam0->f_9, true, false)) && _network_has_control_of_anim_scene(uParam0->f_9))
			{
				set_anim_scene_entity(uParam0->f_9, func_137(iParam2), uParam0->f_2, 0);
				iVar0 = 0;
				while (iVar0 <= (5 - 1))
				{
					set_anim_scene_entity(uParam0->f_9, func_138(iParam2, iVar0), &(uParam0->f_3[iVar0]), 0);
					iVar0++;
				}
				start_anim_scene(uParam0->f_9);
				func_136(uParam1, 4);
			}
			if (!_is_anim_scene_started(uParam0->f_9, false))
			{
				return;
			}
			func_136(uParam1, 4);
			break;
		case 4:
			if ((_does_anim_scene_exist(uParam0->f_9) && _network_has_control_of_anim_scene(uParam0->f_9)) && uParam0->f_10)
			{
				if (!_0x1f0e401031e20146(uParam0->f_9, func_111(iParam2, 1)))
				{
					if (!_0x23e33cb9f4a3f547(uParam0->f_9, func_111(iParam2, 1)))
					{
						_0xdf7b5144e25cd3fe(uParam0->f_9, func_111(iParam2, 1));
					}
					else
					{
						_set_anim_scene_playback_list_bool(uParam0->f_9, func_111(iParam2, 1), true);
					}
				}
			}
			if (!_0x1f0e401031e20146(uParam0->f_9, func_111(iParam2, 1)) || !_0x23e33cb9f4a3f547(uParam0->f_9, func_111(iParam2, 1)))
			{
				return;
			}
			func_136(uParam1, 5);
			break;
		case 5:
			if (*uParam0 == 5)
			{
				func_136(uParam1, 6);
			}
			break;
		case 6:
			break;
	}
}

void func_57(var uParam0)
{
	if (uParam0->f_1560 == 0)
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_1576))
	{
		return;
	}
	if (!uParam0->f_1561 && network_has_control_of_entity(uParam0->f_1576))
	{
		set_entity_visible(uParam0->f_1576, true);
	}
	attach_tv_audio_to_entity(uParam0->f_1576);
	set_tv_audio_frontend(false);
	set_tv_volume(uParam0->f_1583);
	if (uParam0->f_1561)
	{
		if (does_entity_exist(uParam0->f_1577))
		{
			_0xf49574e2332a8f06(uParam0->f_1577, 5f);
		}
	}
	enable_movie_subtitles(true);
	set_tv_channel(-1);
	set_tv_channel_playlist(0, uParam0->f_1564, true);
	set_tv_channel(0);
}

void func_58(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			func_139();
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			func_140();
			break;
	}
}

bool func_59(int iParam0, bool bParam1)
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

char* func_60(int iParam0)
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
		default:
			break;
	}
	return "FAIL";
}

char* func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEER_SMALL";
		case 1:
			return "CHEER_MEDIUM";
		case 2:
			return "CHEER_LARGE";
		case 3:
			return "JEER_SMALL";
		case 4:
			return "JEER_MEDIUM";
		case 5:
			return "JEER_LARGE";
		case 6:
			return "CROWD_LISTENS_TO_SHOW";
		default:
			break;
	}
	return "CHEER_SMALL";
}

char* func_62()
{
	return "SHOWS_sounds";
}

void func_63(char* sParam0, char* sParam1)
{
	play_sound_frontend(sParam0, sParam1, true, 0);
}

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "Curtain_Opens_Music";
		case 11:
			return "Escape_Noose_Curtain_Music";
		default:
			break;
	}
	return "";
}

char* func_65(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "2245181467_action";
		case 11:
			return "4224921010_action";
		default:
			break;
	}
	return "";
}

void func_66(var uParam0)
{
	if (get_tv_channel() == -1)
	{
		return;
	}
	if (uParam0->f_1560)
	{
		set_text_render_id(uParam0->f_1562);
		draw_tv_channel(uParam0->f_1581, uParam0->f_1582, uParam0->f_1579, uParam0->f_1580, 0f, 255, 255, 255, 128);
	}
}

void func_67(char* sParam0, char* sParam1)
{
	_0x0f2a2175734926d8(sParam0, sParam1);
}

bool func_68(var uParam0, int iParam1)
{
	return func_102(uParam0->f_13, iParam1);
}

void func_69(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_141(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_142(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_143(iVar0);
	*uParam0 = 0;
}

void func_70(var uParam0, var uParam1)
{
	if (uParam0->f_1559)
	{
		func_144(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1393)
	{
		iVar1 = &uParam0->f_1393[iVar0];
		if (does_entity_exist(iVar1) && network_has_control_of_entity(iVar1))
		{
			delete_object(&iVar1);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1408)
	{
		iVar2 = &uParam0->f_1408[iVar0];
		if (does_entity_exist(iVar2) && network_has_control_of_entity(iVar2))
		{
			delete_ped(&iVar2);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1423)
	{
		iVar3 = &uParam0->f_1423[iVar0];
		if (does_entity_exist(iVar3) && network_has_control_of_entity(iVar3))
		{
			delete_object(&iVar3);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(_net_to_anim_scene(uParam0->f_1374)) && _network_has_control_of_anim_scene(_net_to_anim_scene(uParam0->f_1374)))
	{
		_delete_anim_scene(_net_to_anim_scene(uParam0->f_1374));
	}
	if (does_entity_exist(uParam0->f_1384) && network_has_control_of_entity(uParam0->f_1384))
	{
		delete_object(&(uParam0->f_1384));
	}
	func_145(uParam0);
	if (!uParam0->f_1357)
	{
		func_146(&(uParam1->f_2), &(uParam1->f_247));
	}
	if (!uParam0->f_4)
	{
		func_46(uParam0->f_1350);
	}
}

void func_71(var uParam0)
{
	uParam0->f_13 = 0;
}

void func_72(var uParam0)
{
	Var0.f_6 = -1;
	Var0.f_4 = 1;
	Var0.f_6 = uParam0;
	Var0 = 31;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	uVar7 = func_147(0, 8);
	trigger_script_event(1, &Var0, 7, 7, &uVar7);
}

int func_73()
{
	return Global_1572887->f_13;
}

bool func_74()
{
	return Global_1051252->f_8;
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_76(int iParam0)
{
	return func_148(iParam0);
}

void func_77(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_78(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_79(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (!_is_anim_scene_metadata_loaded(iParam0, true))
	{
		return false;
	}
	if (!_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		if (!_0x0df57f86fe71dbe5(iParam0, sParam1))
		{
			_0xdf7b5144e25cd3fe(iParam0, sParam1);
		}
	}
	if (!_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		return false;
	}
	return true;
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_81()
{
	return "CURTAIN";
}

char* func_82()
{
	return "script@shows@curtains@curtains";
}

void func_83(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(iParam0, sParam1, true);
}

void func_84(int iParam0, char* sParam1, char* sParam2)
{
	if (_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		_0xae6ada8fe7e84acc(iParam0, sParam1);
	}
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_30 = iParam1;
	Var0.f_5 = -1;
	Var0 = 32;
	Var0.f_5 = uParam0->f_2;
	Var0.f_4 = 2;
	Var0.f_6 = iParam1;
	uVar8 = func_147(4, 8);
	trigger_script_event(1, &Var0, 8, 6, &uVar8);
}

void func_86(var uParam0)
{
	uParam0->f_1353 = 1;
}

char* func_87()
{
	return "script@shows@sword_dancer@act3_p1@action";
}

char* func_88()
{
	return "s_Performance";
}

bool func_89(int iParam0)
{
	return iParam0 != 0;
}

bool func_90(var uParam0)
{
	return true;
}

bool func_91(var uParam0)
{
	bVar0 = false;
	if (!func_34(&(uParam0->f_1363)))
	{
		func_27(&(uParam0->f_1363));
	}
	else if (func_149(&(uParam0->f_1363)) > 10f)
	{
		bVar0 = true;
	}
	if (func_13(uParam0->f_1359, 1))
	{
		sVar1 = func_64(uParam0->f_1350);
		sVar2 = func_65(uParam0->f_1350);
		if (is_string_null_or_empty(sVar1) || is_string_null_or_empty(sVar2))
		{
			bVar0 = true;
		}
		else if (load_stream(sVar1, sVar2))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_150(&(uParam0->f_1363));
		return true;
	}
	return false;
}

bool func_92(var uParam0, int iParam1, vector3 vParam2)
{
	if (!has_model_loaded(iParam1))
	{
		return false;
	}
	if (!does_entity_exist(*uParam0) && can_register_mission_objects(1))
	{
		*uParam0 = create_object(iParam1, vParam2, true, true, false, false, true);
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	return true;
}

char* func_93(int iParam0)
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
		default:
			break;
	}
	return "FAIL";
}

bool func_94(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, bool bParam5)
{
	if (_does_anim_scene_exist(*uParam0) && _is_anim_scene_loaded(*uParam0, true, false))
	{
		func_14(uParam2, 1);
		return true;
	}
	if (!func_13(*uParam2, 1) && !_does_anim_scene_exist(*uParam0))
	{
		if (bParam5)
		{
			*uParam0 = _create_anim_scene(sParam3, 0, sParam4, true, true);
		}
		*uParam1 = _anim_scene_to_net(*uParam0);
		load_anim_scene(*uParam0);
		func_18(uParam2, 1);
	}
	return false;
}

bool func_95(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	if (!has_model_loaded(iParam1))
	{
		return false;
	}
	bVar0 = true;
	bVar1 = false;
	iVar2 = func_151(iParam1);
	if (iVar2 != 41788943)
	{
		bVar0 = false;
		bVar1 = true;
	}
	if (!does_entity_exist(*uParam0) && can_register_mission_peds(1))
	{
		*uParam0 = func_108(iParam1, vParam2, fParam5, 1, 1, 0, 1, 1, bVar0, 0, bVar1);
		return false;
	}
	if (does_entity_exist(*uParam0) && _0xa0bc8faed8cfeb3c(*uParam0))
	{
		if (!bVar0)
		{
			func_152(*uParam0, iVar2);
		}
		return true;
	}
	return false;
}

bool func_96(var uParam0)
{
	iVar0 = _net_to_anim_scene(uParam0->f_1374);
	_network_request_control_of_anim_scene(iVar0);
	if (!_network_has_control_of_anim_scene(iVar0))
	{
		return false;
	}
	if (!does_entity_exist(&(uParam0->f_1393[0])))
	{
		if (func_154(uParam0->f_1393[0], &(uParam0->f_1385[0]), func_153(0)))
		{
			set_anim_scene_entity(iVar0, "Sword", &(uParam0->f_1393[0]), 0);
		}
		else
		{
			return false;
		}
	}
	if (!func_155(uParam0, iVar0, 0, "DANCER"))
	{
		return false;
	}
	uParam0->f_1355 = &uParam0->f_1408[0];
	return true;
}

void func_97(var uParam0)
{
}

void func_98(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_117() - fParam1);
	func_156(uParam0, 1);
	func_157(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_99(var uParam0, var uParam1)
{
	(*uParam1)[0] = 0;
	switch (uParam0->f_1351)
	{
		case 0:
		case 1:
		case 2:
			(*uParam1)[0] = 544106233;
			(*uParam1)[1] = 340151973;
			(*uParam1)[2] = -317441493;
			(*uParam1)[3] = -2128813450;
			break;
	}
}

bool func_100(int iParam0)
{
	func_158(iParam0, 0, 0);
	if (func_159(iParam0))
	{
		return door_system_get_door_state(iParam0) == 0;
	}
	return false;
}

void func_101(int iParam0, int iParam1, bool bParam2)
{
	func_158(iParam0, 0, 0);
	if (func_159(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

bool func_102(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_103(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_104()
{
	return -2002682906;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1647947738;
		default:
			break;
	}
	return 1647947738;
}

Vector3 func_106(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2693.964f, -1356.467f, 50.81907f;
		case 2:
			return 2688.162f, -1362.869f, 54.23667f;
		case 0:
			return 0f, 0f, 0f;
		case 4:
			return -782.7046f, -1364.543f, 46.42249f;
		case 3:
			return -350.1178f, 702.2504f, 117.7055f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_107(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -52.52f;
		case 2:
			return 16.48f;
		case 0:
			return 0f;
		case 4:
			return -20f;
		case 3:
			return -164.26f;
		default:
			break;
	}
	return 0f;
}

int func_108(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_160(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

Vector3 func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -349.8668f, 701.5555f, 118.5235f;
		case 1:
			return -349.7668f, 701.5555f, 118.5235f;
		case 2:
			return -349.5668f, 701.5555f, 118.5235f;
		case 3:
			return -349.9668f, 701.3555f, 118.5235f;
		case 4:
			return -349.7668f, 701.3555f, 118.5235f;
		default:
			break;
	}
	return -349.8668f, 701.5555f, 118.5235f;
}

char* func_110(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "script@shows@magic_lantern@ig2_projectionist@thebear";
		case 22:
		case 32:
			return "script@shows@magic_lantern@ig2_projectionist@legendofblackwater";
		case 23:
		case 33:
			return "script@shows@magic_lantern@ig2_projectionist@manflight";
		case 24:
		case 34:
			return "script@shows@magic_lantern@ig2_projectionist@saviorsandsavages";
		case 25:
		case 35:
			return "script@shows@magic_lantern@ig2_projectionist@ghastlyserenade";
	}
	return "script@shows@magic_lantern@ig2_projectionist@thebear";
}

char* func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "pl_action";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 22:
		case 32:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 23:
		case 33:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 24:
		case 34:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 25:
		case 35:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
	}
	return "[GSMP_SHOW_PROJECTIONIST_GET_PLAYLIST] fail - no playlist";
}

Vector3 func_112(int iParam0)
{
	switch (iParam0)
	{
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return -350.055f, 701.392f, 117.679f;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 2694.933f, -1356.293f, 50.879f;
	}
	return -350.055f, 701.392f, 117.679f;
}

Vector3 func_113(int iParam0)
{
	switch (iParam0)
	{
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0f, 0f, 30f;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 7.1f, 0f, 145.6f;
	}
	return 0f, 0f, 30f;
}

bool func_114(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_115(var uParam0)
{
	return func_114(*uParam0, 2);
}

int func_116()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

float func_117()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_118(var uParam0)
{
	uParam0->f_2 = 1;
}

void func_119(var uParam0, var uParam1, var uParam2, float fParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			func_161(&(uParam0->f_1), 32);
			break;
		case 32:
			if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_1374), false))
			{
				uParam0->f_3 = 1;
				func_85(uParam0, 1);
				func_161(&(uParam0->f_1), 33);
			}
			break;
		case 33:
			func_161(&(uParam0->f_1), 34);
			break;
		case 34:
			if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_1374), false) && _get_anim_scene_progress(_net_to_anim_scene(uParam0->f_1374)) > 0.978f)
			{
				func_161(&(uParam0->f_1), 37);
			}
			break;
		case 37:
			uParam0->f_5 = 1;
			func_18(&(uParam0->f_1358), 8388608);
			func_85(uParam0, 2);
			func_162(&(uParam0->f_27), 0);
			func_161(&(uParam0->f_1), 40);
			break;
		case 40:
			break;
	}
}

void func_120(var uParam0, var uParam1, var uParam2, float fParam3)
{
	switch ((*uParam1)[uParam2->f_1]->f_17)
	{
		case 0:
			func_163(&((*uParam1)[uParam2->f_1]->f_17), 32);
			break;
		case 32:
			if (uParam0->f_1 > 32)
			{
				func_163(&((*uParam1)[uParam2->f_1]->f_17), 33);
			}
			break;
		case 33:
			if (uParam0->f_1 > 33)
			{
				func_163(&((*uParam1)[uParam2->f_1]->f_17), 34);
			}
			break;
		case 34:
			if (_is_anim_scene_started(_net_to_anim_scene(uParam0->f_1374), false) && _get_anim_scene_progress(_net_to_anim_scene(uParam0->f_1374)) > 0.978f)
			{
				func_163(&((*uParam1)[uParam2->f_1]->f_17), 37);
			}
			break;
		case 37:
			if (!func_13(uParam0->f_1358, 8388608))
			{
				return;
			}
			if (!uParam0->f_1357)
			{
				func_18(&(uParam2->f_247), 4);
				func_18(&(uParam2->f_247), 8192);
			}
			func_18(&(uParam2->f_247), 32);
			func_163(&((*uParam1)[uParam2->f_1]->f_17), 40);
			break;
		case 40:
			break;
	}
}

bool func_121(var uParam0)
{
	return func_114(*uParam0, 2);
}

int func_122(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

int func_123()
{
	return Global_1893587->f_2;
}

void func_124(int iParam0)
{
	iVar0 = func_164(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

bool func_125(int iParam0)
{
	func_158(iParam0, 0, 0);
	if (func_159(iParam0))
	{
		return (door_system_get_door_state(iParam0) == 2 || door_system_get_door_state(iParam0) == 1);
	}
	return false;
}

bool func_126(int iParam0)
{
	return func_165(iParam0, 23);
}

void func_127(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_158(iParam0, 0, 0);
	if (func_159(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_166(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_167(iParam0, 1);
			}
			else
			{
				func_168(iParam0, 1);
			}
		}
		else
		{
			func_169(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_170())
	{
	}
	else if (network_is_in_session())
	{
	}
}

bool func_128(int iParam0)
{
	func_158(iParam0, 0, 0);
	if (func_159(iParam0))
	{
		return !is_door_closed(iParam0);
	}
	return false;
}

bool func_129(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_130(var uParam0, int iParam1)
{
	func_171(&(uParam0->f_13), iParam1);
}

bool func_131(var uParam0, var uParam1)
{
	if (is_string_null_or_empty(uParam0->f_1) || is_string_null_or_empty(uParam1->f_1))
	{
		return false;
	}
	if (*uParam0 != *uParam1)
	{
		return false;
	}
	if (!are_strings_equal(uParam0->f_1, uParam1->f_1))
	{
		return false;
	}
	return true;
}

void func_132(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
}

int func_133(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == -1 || !func_13(*uParam1, -2147483648))
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (!func_13(*uParam1, 1))
	{
		iVar1 = func_172(iParam2);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar3 = iVar0;
			if (func_175((*uParam0)[iVar0], func_173(iParam2), func_174(iParam2, iVar3), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_18(uParam1, 1);
		}
	}
	iVar2 = 0;
	if (!func_13(*uParam1, 8))
	{
		iVar1 = func_176(iParam2);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar4 = iVar0;
			if (func_175(uParam0->f_31[iVar0], func_177(iParam2), func_178(iParam2, iVar4), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_18(uParam1, 8);
		}
	}
	iVar2 = 0;
	if (!func_13(*uParam1, 2048))
	{
		iVar1 = func_179(iParam2);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar5 = iVar0;
			if (func_175(uParam0->f_107[iVar0], func_180(iParam2), func_181(iParam2, iVar5), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_18(uParam1, 2048);
		}
	}
	switch (iParam2)
	{
		case 0:
			if (!func_13(*uParam1, 64) && func_175(uParam0->f_118[0], func_182(iParam2, 0), func_183(iParam2, 0), 1065353216))
			{
				func_18(uParam1, 64);
			}
			if ((!func_13(*uParam1, 16384) && func_175(uParam0->f_118[1], func_182(iParam2, 1), func_183(iParam2, 1), 1065353216)) && func_175(uParam0->f_118[2], func_182(iParam2, 2), func_183(iParam2, 2), 1065353216))
			{
				func_18(uParam1, 16384);
			}
			break;
		case 1:
			iVar2 = 0;
			if (!func_13(*uParam1, 2097152))
			{
				iVar1 = func_184(iParam2);
				iVar0 = 0;
				while (iVar0 <= (iVar1 - 1))
				{
					iVar6 = iVar0;
					if (func_175(uParam0->f_118[iVar0], func_182(iParam2, 0), func_183(iParam2, iVar6), 1065353216))
					{
						iVar2++;
					}
					iVar0++;
				}
				if (iVar2 >= iVar1)
				{
					func_18(uParam1, 2097152);
				}
			}
			break;
	}
	return 1;
}

void func_134(var uParam0, var uParam1, int iParam2)
{
	if (func_13(*uParam0, 1))
	{
		if (func_13(*uParam0, 2) && func_188(uParam1, func_185(uParam1), &(uParam1->f_229), func_186(uParam1), func_187(uParam1)))
		{
			func_14(uParam0, 2);
		}
		if (func_13(*uParam0, 4) && func_190(uParam1, func_189(uParam1), &(uParam1->f_229), func_186(uParam1), func_187(uParam1)))
		{
			func_14(uParam0, 4);
		}
	}
	if (func_13(*uParam0, 8))
	{
		if (func_13(*uParam0, 16) && func_188(&(uParam1->f_31), func_191(uParam1), &(uParam1->f_232), func_192(uParam1), func_187(uParam1)))
		{
			func_14(uParam0, 16);
		}
		if (func_13(*uParam0, 32) && func_190(&(uParam1->f_31), func_193(uParam1), &(uParam1->f_232), func_192(uParam1), func_187(uParam1)))
		{
			func_14(uParam0, 32);
		}
	}
	if (func_13(*uParam0, 2048))
	{
		if (func_13(*uParam0, 4096) && func_188(&(uParam1->f_107), func_194(uParam1), &(uParam1->f_235), func_195(uParam1), func_187(uParam1)))
		{
			func_14(uParam0, 4096);
		}
		if (func_13(*uParam0, 8192) && func_190(&(uParam1->f_107), func_196(uParam1), &(uParam1->f_235), func_195(uParam1), func_187(uParam1)))
		{
			func_14(uParam0, 8192);
		}
	}
	if (iParam2 == 0)
	{
		if (func_13(*uParam0, 64))
		{
			if (func_13(*uParam0, 128) && func_199(uParam1->f_118[0], func_197(uParam1), &(uParam1->f_238), func_198(uParam1), func_187(uParam1)))
			{
				func_14(uParam0, 128);
			}
			if (func_13(*uParam0, 256) && func_201(uParam1->f_118[0], func_200(uParam1), &(uParam1->f_238), func_198(uParam1), func_187(uParam1)))
			{
				func_14(uParam0, 256);
			}
			if (func_13(*uParam0, 512) && func_199(uParam1->f_118[0], func_197(uParam1), &(uParam1->f_238), 0.5f, func_187(uParam1)))
			{
				func_14(uParam0, 512);
			}
			if (func_13(*uParam0, 1024) && func_201(uParam1->f_118[0], func_200(uParam1), &(uParam1->f_238), 0.5f, func_187(uParam1)))
			{
				func_14(uParam0, 1024);
			}
		}
		if (func_13(*uParam0, 16384))
		{
			if (func_13(*uParam0, 32768) && func_204(1, 2, &(uParam1->f_118), func_202(uParam1), &(uParam1->f_241), func_203(uParam1), func_187(uParam1)))
			{
				func_14(uParam0, 32768);
			}
			if (func_13(*uParam0, 65536) && func_206(1, 2, &(uParam1->f_118), func_205(uParam1), &(uParam1->f_241), func_203(uParam1), func_187(uParam1)))
			{
				func_14(uParam0, 65536);
			}
			if (func_13(*uParam0, 131072) && func_204(1, 2, &(uParam1->f_118), func_202(uParam1), &(uParam1->f_241), 0.5f, func_187(uParam1)))
			{
				func_14(uParam0, 131072);
			}
			if (func_13(*uParam0, 262144) && func_206(1, 2, &(uParam1->f_118), func_205(uParam1), &(uParam1->f_241), 0.5f, func_187(uParam1)))
			{
				func_14(uParam0, 262144);
			}
		}
		if (func_13(*uParam0, 524288))
		{
			bVar0 = true;
			if (!func_188(&(uParam1->f_31), func_191(uParam1), &(uParam1->f_232), 0.1f, func_187(uParam1)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_14(uParam0, 524288);
			}
		}
		if (func_13(*uParam0, 1048576))
		{
			bVar1 = true;
			if (!func_190(&(uParam1->f_31), func_193(uParam1), &(uParam1->f_232), 0.1f, func_187(uParam1)))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_14(uParam0, 1048576);
			}
		}
	}
	if (iParam2 == 1)
	{
		if (func_13(*uParam0, 2097152))
		{
			if (func_13(*uParam0, 4194304) && func_188(&(uParam1->f_118), func_207(uParam1), &(uParam1->f_238), func_208(uParam1), func_187(uParam1)))
			{
				func_14(uParam0, 4194304);
			}
			if (func_13(*uParam0, 8388608) && func_190(&(uParam1->f_118), func_209(uParam1), &(uParam1->f_238), func_208(uParam1), func_187(uParam1)))
			{
				func_14(uParam0, 8388608);
			}
		}
	}
}

void func_135(var uParam0)
{
}

void func_136(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_137(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "PROJECTIONIST";
		case 22:
		case 32:
			return "PROJECTIONIST";
		case 23:
		case 33:
			return "PROJECTIONIST";
		case 24:
		case 34:
			return "PROJECTIONIST";
		case 25:
		case 35:
			return "PROJECTIONIST";
	}
	return "PROJECTIONIST";
}

char* func_138(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 22:
		case 32:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 23:
		case 33:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 24:
		case 34:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 25:
		case 35:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
	}
	return "SLIDE0";
}

void func_139()
{
}

void func_140()
{
}

bool func_141(int iParam0)
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

var func_142(var uParam0)
{
	return uParam0;
}

void func_143(int iParam0)
{
	if (!func_210(iParam0))
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

void func_144(var uParam0)
{
	set_tv_channel(-1);
	if (uParam0->f_1560)
	{
		if (does_entity_exist(uParam0->f_1577))
		{
			_0x04d1d4e411ce52d0(uParam0->f_1577, 0);
			set_object_as_no_longer_needed(&(uParam0->f_1577));
		}
		if (is_named_rendertarget_registered(uParam0->f_1563))
		{
			release_named_rendertarget(uParam0->f_1563);
		}
		uParam0->f_1560 = 0;
	}
	if (does_entity_exist(uParam0->f_1576) && network_has_control_of_entity(uParam0->f_1576))
	{
		delete_object(&(uParam0->f_1576));
	}
}

void func_145(var uParam0)
{
	_0x7d4e70a67a651c71(1);
}

void func_146(var uParam0, var uParam1)
{
	func_211(uParam0);
	func_211(&(uParam0->f_31));
	func_211(&(uParam0->f_107));
	func_211(&(uParam0->f_118));
	*uParam1 = 0;
}

var func_147(int iParam0, int iParam1)
{
	return func_212(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

int func_148(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return 0;
	}
	return 1;
}

float func_149(var uParam0)
{
	if (!func_34(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_115(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_117() - uParam0->f_1);
}

void func_150(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_151(int iParam0)
{
	return 41788943;
}

void func_152(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_213(iParam0, iParam1))
		{
			if (func_214(iParam0, iParam1))
			{
				if (func_215(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_216(iParam0);
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

Vector3 func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2546.948f, -1311.025f, 48.21665f;
		default:
			break;
	}
	return 2546.948f, -1311.025f, 48.21665f;
}

bool func_154(var uParam0, int iParam1, vector3 vParam2)
{
	if (!has_model_loaded(iParam1))
	{
		return false;
	}
	if (!does_entity_exist(*uParam0) && can_register_mission_objects(1))
	{
		*uParam0 = create_object(iParam1, vParam2, true, true, false, false, true);
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	return true;
}

bool func_155(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	if (_does_anim_scene_exist(iParam1))
	{
		if (_network_has_control_of_anim_scene(iParam1))
		{
			if (!network_has_control_of_entity(&(uParam0->f_1408[iParam2])))
			{
				network_request_control_of_entity(&(uParam0->f_1408[iParam2]));
				return false;
			}
			else if ((_get_anim_scene_ped(iParam1, sParam3, false) != &uParam0->f_1408[iParam2] && does_entity_exist(&(uParam0->f_1408[iParam2]))) && !is_entity_dead(&(uParam0->f_1408[iParam2])))
			{
				set_blocking_of_non_temporary_events(&(uParam0->f_1408[iParam2]), true);
				set_anim_scene_entity(iParam1, sParam3, &(uParam0->f_1408[iParam2]), 0);
				return false;
			}
		}
		else if ((!does_entity_exist(&(uParam0->f_1408[iParam2])) || is_entity_dead(&(uParam0->f_1408[iParam2]))) || !_0x9d1eca9337be9fc3(iParam1, sParam3))
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

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_157(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_158(int iParam0, bool bParam1, bool bParam2)
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

bool func_159(int iParam0)
{
	if (func_217(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_218(iParam0, 0, 1);
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
			func_219(iParam0, 0);
			bVar0 = true;
		}
		func_220(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_161(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_162(var uParam0, bool bParam1)
{
	if (bParam1 || !func_42(uParam0))
	{
		func_221(uParam0);
	}
}

void func_163(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_164(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 394;
		case -2058120606:
			return 194;
		case -2056579774:
			return 464;
		case -2043909922:
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 387;
		case -1939389836:
			return 416;
		case -1932919229:
			return 428;
		case -1925798111:
			return 41;
		case -1914141706:
			return 439;
		case -1906892166:
			return 403;
		case -1882707460:
			return 463;
		case -1861414976:
			return 380;
		case -1852605133:
			return 10;
		case -1848799275:
			return 409;
		case -1847672446:
			return 312;
		case -1842033327:
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case -1749433374:
			return 479;
		case -1749043433:
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 421;
		case -1700452710:
			return 317;
		case -1684974589:
			return 466;
		case -1674179981:
			return 53;
		case -1673998598:
			return 527;
		case -1666278201:
			return 33;
		case -1664435783:
			return 486;
		case -1624627591:
			return 438;
		case -1612662716:
			return 198;
		case -1610966108:
			return 354;
		case -1608141409:
			return 538;
		case -1585840296:
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 434;
		case -1573753524:
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case -1547280108:
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 523;
		case -1462313959:
			return 462;
		case -1455998786:
			return 370;
		case -1447311849:
			return 321;
		case -1445041595:
			return 528;
		case -1442844448:
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 478;
		case -1387772214:
			return 407;
		case -1378911044:
			return 475;
		case -1369678628:
			return 487;
		case -1344601768:
			return 347;
		case -1341750998:
			return 476;
		case -1340339190:
			return 362;
		case -1339871203:
			return 532;
		case -1329135070:
			return 138;
		case -1319875891:
			return 437;
		case -1311865656:
			return 37;
		case -1296807958:
			return 352;
		case -1290997627:
			return 461;
		case -1287894233:
			return 426;
		case -1283202000:
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 382;
		case -1029225159:
			return 104;
		case -1023919011:
			return 431;
		case -1014145132:
			return 273;
		case -1004266677:
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case -941648233:
			return 511;
		case -939420910:
			return 44;
		case -931337253:
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case -911126844:
			return 368;
		case -897750037:
			return 366;
		case -895307590:
			return 500;
		case -895073533:
			return 393;
		case -889906510:
			return 389;
		case -888632790:
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 432;
		case -851626677:
			return 371;
		case -839820438:
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case -800891377:
			return 493;
		case -797689456:
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 372;
		case -729679654:
			return 530;
		case -699277634:
			return 4;
		case -693828600:
			return 355;
		case -683458244:
			return 78;
		case -677920206:
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 512;
		case -632127260:
			return 342;
		case -630295963:
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 471;
		case -591815673:
			return 383;
		case -583127403:
			return 506;
		case -574190021:
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 337;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 515;
		case -492731190:
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case -448554447:
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case -414883443:
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case -381925743:
			return 507;
		case -371827125:
			return 388;
		case -364475655:
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 433;
		case -279765076:
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 516;
		case -209894800:
			return 344;
		case -207792846:
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 430;
		case -108780030:
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case -101740709:
			return 498;
		case -99303535:
			return 165;
		case -90486812:
			return 490;
		case -89829333:
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 508;
		case -75024673:
			return 244;
		case -74031276:
			return 440;
		case -70727482:
			return 452;
		case -63926460:
			return 87;
		case -61411516:
			return 357;
		case -38135693:
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case 64896505:
			return 390;
		case 74872959:
			return 331;
		case 84709454:
			return 453;
		case 93964309:
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 455;
		case 565812320:
			return 447;
		case 582380806:
			return 358;
		case 588987611:
			return 177;
		case 589380360:
			return 340;
		case 618699440:
			return 75;
		case 619839857:
			return 375;
		case 630808005:
			return 126;
		case 640520536:
			return 469;
		case 642824856:
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 483;
		case 723021499:
			return 250;
		case 730069127:
			return 474;
		case 747514327:
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 361;
		case 791041526:
			return 18;
		case 799106423:
			return 454;
		case 803929300:
			return 468;
		case 804063423:
			return 502;
		case 817925178:
			return 227;
		case 826868753:
			return 473;
		case 831940854:
			return 406;
		case 846837291:
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case 883901517:
			return 384;
		case 885203519:
			return 315;
		case 885378256:
			return 378;
		case 885777893:
			return 374;
		case 896725436:
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case 965467037:
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 445;
		case 1032791043:
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case 1126565489:
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 451;
		case 1157309080:
			return 513;
		case 1159471771:
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 480;
		case 1238086793:
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case 1279586666:
			return 448;
		case 1280406542:
			return 441;
		case 1287917122:
			return 386;
		case 1302228510:
			return 348;
		case 1306158345:
			return 199;
		case 1321892118:
			return 356;
		case 1325325699:
			return 420;
		case 1341699707:
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 435;
		case 1521272922:
			return 457;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case 1703398561:
			return 364;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case 1788424349:
			return 444;
		case 1812677765:
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case 1891256113:
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 497;
		case 2051822093:
			return 284;
		case 2068208444:
			return 427;
		case 2068253437:
			return 477;
		case 2077022393:
			return 291;
		case 2079292950:
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 396;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

int func_165(int iParam0, int iParam1)
{
	if (func_73() == 0)
	{
		return 0;
	}
	func_158(iParam0, 0, 0);
	if (func_159(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, 0);
		if (iVar0 != 0)
		{
			return _0x0943113e02322164(get_object_index_from_entity_index(iVar0), iParam1);
		}
	}
	return 0;
}

void func_166(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_159(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_167(int iParam0, bool bParam1)
{
	if (func_159(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_168(int iParam0, bool bParam1)
{
	if (func_159(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_169(int iParam0, bool bParam1)
{
	if (func_159(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_170()
{
	return true;
}

void func_171(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_172(int iParam0)
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

int func_173(int iParam0)
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

Vector3 func_174(int iParam0, int iParam1)
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

bool func_175(var uParam0, int iParam1, vector3 vParam2, int iParam5)
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

int func_176(int iParam0)
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

int func_177(int iParam0)
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

Vector3 func_178(int iParam0, int iParam1)
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

int func_179(int iParam0)
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

int func_180(int iParam0)
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

Vector3 func_181(int iParam0, int iParam1)
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

int func_182(int iParam0, int iParam1)
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

Vector3 func_183(int iParam0, int iParam1)
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

int func_184(int iParam0)
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

float func_185(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_186(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

int func_187(var uParam0)
{
	iVar0 = 10;
	return iVar0;
}

bool func_188(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_34(uParam2))
	{
		func_27(uParam2);
	}
	fVar1 = func_149(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_222((*uParam0)[iVar0], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_150(uParam2);
		return true;
	}
	return false;
}

float func_189(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

bool func_190(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_34(uParam2))
	{
		func_27(uParam2);
	}
	fVar1 = func_149(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_223((*uParam0)[iVar0], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_150(uParam2);
		return true;
	}
	return false;
}

float func_191(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_192(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

float func_193(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

float func_194(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_195(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

float func_196(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

float func_197(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_198(var uParam0)
{
	fVar0 = 3f;
	return fVar0;
}

bool func_199(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_34(uParam2))
	{
		func_27(uParam2);
	}
	fVar0 = func_149(uParam2);
	func_222(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_150(uParam2);
		return true;
	}
	return false;
}

float func_200(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

bool func_201(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_34(uParam2))
	{
		func_27(uParam2);
	}
	fVar0 = func_149(uParam2);
	func_223(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_150(uParam2);
		return true;
	}
	return false;
}

float func_202(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_203(var uParam0)
{
	fVar0 = 3f;
	return fVar0;
}

bool func_204(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return true;
	}
	if (!func_34(uParam4))
	{
		func_27(uParam4);
	}
	fVar2 = func_149(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_222((*uParam2)[iVar3], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_150(uParam4);
		return true;
	}
	return false;
}

float func_205(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

bool func_206(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return true;
	}
	if (!func_34(uParam4))
	{
		func_27(uParam4);
	}
	fVar2 = func_149(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_223((*uParam2)[iVar3], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_150(uParam4);
		return true;
	}
	return false;
}

float func_207(var uParam0)
{
	fVar0 = 0.3f;
	return fVar0;
}

float func_208(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

float func_209(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

bool func_210(int iParam0)
{
	return func_224(iParam0, 2);
}

void func_211(var uParam0)
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

var func_212(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_225() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_226());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_226());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_226());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_227(get_player_team(iVar5)));
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
			if (func_228(iVar2))
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
				if (iVar9 & 8192 != 0 && func_229(iVar2) != 1)
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
					if (!func_230(iVar10))
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

bool func_213(int iParam0, int iParam1)
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

bool func_214(int iParam0, int iParam1)
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

bool func_215(int iParam0, int iParam1)
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
	if (!func_213(iParam0, iVar0))
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

void func_216(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_217(int iParam0)
{
	return iParam0 != 0;
}

void func_218(int iParam0, bool bParam1, bool bParam2)
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

void func_219(int iParam0, bool bParam1)
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

void func_220(int iParam0, int iParam1)
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

void func_221(var uParam0)
{
	func_231(uParam0, 0);
}

void func_222(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	if (does_entity_exist(*uParam0))
	{
		if (uParam0->f_2 > fParam1 && uParam0->f_2 > uParam0->f_3)
		{
			fVar1 = (fParam3 - fParam2);
			fVar0 = (fVar1 / fParam3);
			uParam0->f_2 = func_232(fParam1, uParam0->f_4, fVar0);
			if (uParam0->f_2 < fParam1)
			{
				uParam0->f_2 = fParam1;
			}
		}
		fVar2 = pow(uParam0->f_2, to_float(iParam4));
		_0xf49574e2332a8f06(*uParam0, fVar2);
	}
}

void func_223(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	if (does_entity_exist(*uParam0))
	{
		if (uParam0->f_2 < fParam1 && uParam0->f_2 < uParam0->f_4)
		{
			fVar0 = (fParam2 / fParam3);
			uParam0->f_2 = func_232(uParam0->f_3, fParam1, fVar0);
			if (uParam0->f_2 > fParam1)
			{
				uParam0->f_2 = fParam1;
			}
			fVar1 = pow(uParam0->f_2, to_float(iParam4));
			_0xf49574e2332a8f06(*uParam0, fVar1);
		}
	}
}

bool func_224(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

int func_225()
{
	return Global_1051252->f_12;
}

char* func_226()
{
	return "unnamed";
}

int func_227(int iParam0)
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

bool func_228(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_233(36, iParam0);
}

int func_229(int iParam0)
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

bool func_230(int iParam0)
{
	if (func_234(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_235(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_231(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_156(uParam0, 1);
	func_157(uParam0, 2);
	uParam0->f_2 = 0;
}

float func_232(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_233(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_236(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_237())
	{
		return func_236(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_236(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_234(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_235(int iParam0)
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
		func_238(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_239(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_236(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_237()
{
	return Global_1102219->f_3672;
}

void func_238(int iParam0)
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
	func_239(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_239(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

