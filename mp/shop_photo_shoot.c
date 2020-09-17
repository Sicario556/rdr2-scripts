void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iLocal_47 = 675980447;
	if (Global_1051439->f_4653)
	{
		func_1(iVar636);
	}
	func_2();
	while (!func_3(0, 0) && func_4())
	{
		wait(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(7, iParam0);
	func_8();
	network_register_host_broadcast_variables(&Local_470, 90, 49);
	func_9(_0xba24095ea96dfe17(&Local_470), 90, "m_PHST_HostData");
	network_register_player_broadcast_variables(&Local_560, 78, 50);
	func_10(_0x690806bc83bc8ca2(Local_560[0]), 78, "m_PHST_PlayerData");
	func_11(0);
	set_this_script_can_be_paused(false);
}

int func_2()
{
	func_12();
	func_13();
	func_14();
	func_15();
	func_16();
	func_17();
	func_18();
	return 1;
}

bool func_3(bool bParam0, bool bParam1)
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

bool func_4()
{
	switch (Local_58.f_59)
	{
		case 0:
			if (func_19())
			{
				Local_58.f_59 = 1;
			}
			break;
		case 1:
			if (!func_20())
			{
				return false;
			}
			if (Global_1051439->f_4653)
			{
				func_21();
			}
			break;
	}
	return true;
}

void func_5()
{
	if ((Local_58.f_410 && func_22() == 6) && get_status_of_save_high_quality_photo() != 2)
	{
		Local_58.f_409 = func_23(1938417563, 0, 1, 1, 0, 59806960);
		Local_58.f_410 = 0;
	}
	if (Global_1051439->f_4653.f_3)
	{
		Global_1051439->f_4653.f_3 = 0;
		if ((is_screen_faded_out() || is_screen_fading_out()) && !func_24(0))
		{
			do_screen_fade_in(1000);
		}
	}
	func_25();
}

void func_6()
{
	terminate_this_thread();
}

void func_7(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_6();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_8()
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
		if (func_26() == 0)
		{
			if (func_27())
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

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11(bool bParam0)
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

int func_12()
{
	if (!func_28(18))
	{
		return 0;
	}
	if (!func_29(18) || func_30(18))
	{
		return 0;
	}
	_datafile_register_query(&(Global_1915715->f_20346[18]), 1084942842, "SHOP_TYPE/BACKGROUNDS/BACKGROUND(id=%x)");
	_datafile_register_query(&(Global_1915715->f_20346[18]), 350029031, "SHOP_TYPE/POSES/POSE(id=%x)");
	_datafile_register_query(&(Global_1915715->f_20346[18]), 843957109, "PROPS");
	_datafile_register_query(&(Global_1915715->f_20346[18]), 290941431, "PROPS/PROP(%i)");
	_datafile_register_query(&(Global_1915715->f_20346[18]), 1707208274, "VARIANTS");
	_datafile_register_query(&(Global_1915715->f_20346[18]), -882970998, "VARIANTS/VARIANT(%i)");
	func_31(Global_1915715->f_20387[18], 16);
	return 1;
}

void func_13()
{
	Global_1051439->f_4653.f_7 = 0;
	Local_58.f_30 = 0;
	Local_58.f_57 = 0;
	Local_58.f_31 = 0;
	Local_58.f_112 = 0;
	Local_58.f_114 = 0;
	Local_58.f_118 = 0;
	if (Global_1051439->f_4653)
	{
		Local_58.f_75 = "CameraViewfinderStudioPosse";
	}
	else
	{
		Local_58.f_75 = "CameraViewfinderStudio";
	}
	Local_58.f_76 = "CameraViewfinderForceOutro";
	Local_58.f_77 = "CameraTakePictureStudio";
	Local_58.f_80 = 0;
	Local_58.f_78 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	Local_58.f_79 = "facials@gen_male@portrait";
	Local_58.f_67 = 0f;
	Local_19.f_23 = 0;
	switch (Global_1051439->f_72[18]->f_18)
	{
		case 12:
			Local_58.f_14 = { -811.0848f, -1374.732f, 43.0233f };
			Local_58.f_17 = 86.2824f;
			Local_58.f_22 = { -813.9198f, -1375.396f, 43.216f };
			Local_58.f_25 = 304.6703f;
			Local_58.f_18 = { -811.0161f, -1373.142f, 43.0233f };
			Local_58.f_21 = 82.6367f;
			if (Global_1051439->f_4653)
			{
				Local_19.f_26 = 12;
				Local_58 = { -808.9622f, -1374.784f, 34.2373f };
				Local_58.f_3 = { 2.5419f, 0f, 89.4133f };
				Local_58.f_9 = 29.8f;
				Local_58.f_26 = { -816.0643f, -1374.725f, 34.93691f };
				Local_58.f_125 = 347949850;
				Local_58.f_119 = { -816.0643f, -1374.725f, 34.93691f };
				Local_58.f_122 = { 0f, 0f, 0f };
				Local_58.f_89 = -1633870518;
				Local_58.f_113 = _create_volume_box(-813.74f, -1374.56f, 35.02f, 0f, 0f, 0f, 5f, 5f, 3f);
				Local_58.f_10 = { -814.8005f, -1374.676f, 33.2272f };
				Local_58.f_13 = 274.5823f;
			}
			else
			{
				Local_19.f_26 = 2;
				Local_58 = { -812.2573f, -1374.602f, 44.3923f };
				Local_58.f_3 = { 2.464f, 0f, 92.7079f };
				Local_58.f_9 = 34.7f;
				Local_58.f_26 = { -817.1328f, -1375.047f, 44.5194f };
				Local_58.f_89 = 1076045342;
				Local_58.f_10 = { -814.8005f, -1374.676f, 43.2272f };
				Local_58.f_13 = 274.5823f;
			}
			break;
		case 60:
			Local_58.f_14 = { 2732.675f, -1117.746f, 48.1073f };
			Local_58.f_17 = 227.78f;
			Local_58.f_22 = { 2734.343f, -1119.988f, 48.1337f };
			Local_58.f_25 = 47.9115f;
			Local_58.f_18 = { 2734.672f, -1117.845f, 48.1059f };
			Local_58.f_21 = 300f;
			if (Global_1051439->f_4653)
			{
				Local_19.f_26 = 11;
				Local_58 = { 2731.44f, -1115.38f, 39.1157f };
				Local_58.f_3 = { 2.5419f, 0f, -153.5867f };
				Local_58.f_9 = 29.8f;
				Local_58.f_26 = { 2734.613f, -1121.733f, 39.8153f };
				Local_58.f_89 = -1983826837;
				Local_58.f_125 = -523720059;
				Local_58.f_119 = { 2734.613f, -1121.733f, 39.8153f };
				Local_58.f_122 = { 0f, 0f, 117f };
				Local_58.f_113 = _create_volume_box(2734.43f, -1119.7f, 40.13f, 0f, 0f, 0f, 5f, 5f, 3f);
				Local_58.f_10 = { 2734.1f, -1120.6f, 38.134f };
				Local_58.f_13 = 23.8f;
			}
			else
			{
				Local_19.f_26 = 1;
				Local_58 = { 2733.209f, -1118.628f, 49.521f };
				Local_58.f_3 = { -1.9048f, 0f, -155.1498f };
				Local_58.f_9 = 34.7f;
				Local_58.f_26 = { 2734.884f, -1122.124f, 49.597f };
				Local_58.f_89 = 1751872362;
				Local_58.f_10 = { 2734.1f, -1120.6f, 48.134f };
				Local_58.f_13 = 23.8f;
			}
			break;
	}
	func_32();
	if (Global_1051439->f_4653)
	{
		Local_560[participant_id_to_int()] = 0;
		Local_560[participant_id_to_int()]->f_8 = 0;
		Local_560[participant_id_to_int()]->f_9 = 0;
		Local_560[participant_id_to_int()]->f_1 = 0;
		Local_560[participant_id_to_int()]->f_3 = -1;
		Local_560[participant_id_to_int()]->f_4 = 0;
		Local_560[participant_id_to_int()]->f_10 = 0;
		Local_560[participant_id_to_int()]->f_2 = 0;
	}
	_0x5199405eabfbd7f0("CameraTransitionWipe_L");
	_0x5199405eabfbd7f0("CameraTransitionWipe_R");
}

void func_14()
{
	iVar0 = -1;
	Var3.f_9 = -1591664384;
	Var17 = { func_33(0, -1591664384, -1591664384, -1591664384, -424477160, 0, 0) };
	if (func_34(&Var17, &iVar0, &iVar1, 0))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_35(&Var3, iVar2, iVar0, iVar1))
			{
				if (Local_58.f_231 >= 32)
				{
					func_36(iVar0);
					return;
				}
				Local_58.f_132[Local_58.f_231] = Var3.f_4;
				Local_58.f_231++;
			}
			iVar2++;
		}
	}
	func_36(iVar0);
}

void func_15()
{
	iVar0 = -1;
	Var3.f_9 = -1591664384;
	Var17 = { func_33(0, -1591664384, -1591664384, -1591664384, 1160200607, 0, 0) };
	if (func_34(&Var17, &iVar0, &iVar1, 0))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_35(&Var3, iVar2, iVar0, iVar1))
			{
				if (Local_58.f_248 >= 12)
				{
					func_36(iVar0);
					return;
				}
				Local_58.f_235[Local_58.f_248] = Var3.f_4;
				Local_58.f_248++;
			}
			iVar2++;
		}
	}
	func_36(iVar0);
}

int func_16()
{
	Var0 = &Global_1915715->f_20346[18];
	Var5 = &Global_1915715->f_20346[18];
	iVar10 = 0;
	while (iVar10 < Local_58.f_231)
	{
		Var0.f_2 = 1084942842;
		Var0.f_3 = &Local_58.f_132[iVar10];
		if (_datafile_get_data_node_index(&(Var5.f_1), &Var0))
		{
			Var5.f_2 = -1407851228;
			if (Global_1051439->f_4653)
			{
				Var5.f_3 = 715395819;
			}
			else
			{
				Var5.f_3 = -302053561;
			}
			_datafile_get_hash(&uVar11, &Var5);
			Local_58.f_165[iVar10] = uVar11;
			Var5.f_3 = -120316632;
			_datafile_get_hash(&uVar11, &Var5);
			Local_58.f_198[iVar10] = uVar11;
		}
		else
		{
			Local_58.f_165[iVar10] = 0;
		}
		iVar10++;
	}
	return 1;
}

void func_17()
{
	if (!Global_1051439->f_4653)
	{
		return;
	}
	iVar0 = 0;
	iVar2 = 2147483647;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (iVar1 == participant_id() || (network_is_participant_active(iVar1) && Local_560[iVar0]) // PointerArith)
		{
			if (iVar1 != participant_id())
			{
				if (Local_560[iVar0]->f_1 < iVar2)
				{
					iVar2 = Local_560[iVar0]->f_1;
					iVar3 = iVar1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 < 2147483647)
	{
		Local_560[participant_id_to_int()]->f_5 = Local_560[iVar3]->f_5;
		Local_560[participant_id_to_int()]->f_8 = Local_560[iVar3]->f_8;
		Local_560[participant_id_to_int()]->f_9 = Local_560[iVar3]->f_9;
		iVar4 = 0;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_58.f_231)
		{
			if (&Local_58.f_165[iVar5] == Local_560[participant_id_to_int()]->f_5)
			{
				Local_58.f_129 = iVar5;
				iVar4 = 0;
				while (iVar4 < 5)
				{
					if (func_38(&(Local_58.f_132[iVar5]), func_37(Local_58.f_130)))
					{
						Jump @313; //curOff = 275
					}
					else
					{
						Local_58.f_130++;
						if (Local_58.f_130 >= 5)
						{
							Local_58.f_130 = 0;
						}
					}
					iVar4++;
				}
			}
			else
			{
				iVar5++;
			}
		}
		iVar5 = 0;
		while (iVar5 < Local_58.f_248)
		{
			if (&Local_58.f_235[iVar5] == Local_560[participant_id_to_int()]->f_8)
			{
				Local_58.f_252 = iVar5;
			}
			else
			{
				iVar5++;
			}
		}
	}
	set_timecycle_modifier("MP_photo_posse");
}

void func_18()
{
	if (Global_1051439->f_72[18]->f_18 == 12)
	{
		remove_model_hide(-814.042f, -1374.27f, 44.941f, 2f, -899803912, 0);
		remove_model_hide(-814.042f, -1374.27f, 44.941f, 2f, 1866258194, 0);
		remove_model_hide(-814.042f, -1374.27f, 44.941f, 2f, -1313455184, 0);
	}
	else if (Global_1051439->f_72[18]->f_18 == 60)
	{
		remove_model_hide(2734.165f, -1119.711f, 50.122f, 2f, 561132976, 0);
		remove_model_hide(2734.165f, -1119.711f, 50.122f, 2f, -1392495588, 0);
		remove_model_hide(2734.165f, -1119.711f, 50.122f, 2f, 1333110032, 0);
	}
}

bool func_19()
{
	if (!_0xd9130842d7226045("RDRO_Photo_Shop_Sounds", 0))
	{
		return false;
	}
	if (_0xbf2dd155b2adcd0a("CameraTransitionWipe_L") || _0xbf2dd155b2adcd0a("CameraTransitionWipe_R"))
	{
		return false;
	}
	return true;
}

bool func_20()
{
	func_39();
	func_40();
	func_41();
	if (Global_1051439->f_4653.f_7 != 15 && Global_1051439->f_4653.f_7 != 16)
	{
		if (Global_1051439->f_4653.f_3)
		{
			func_42(15);
		}
		else
		{
			func_43();
		}
	}
	if (Global_1051439->f_4653)
	{
		func_44();
		force_room_for_game_viewport(get_interior_at_coords(Local_58.f_119), Local_58.f_125);
	}
	if ((Global_1051439->f_4653.f_7 != 0 && Global_1051439->f_4653.f_7 != 1) && Global_1051439->f_4653.f_7 != 16)
	{
		func_45();
	}
	switch (Global_1051439->f_4653.f_7)
	{
		case 0:
			do_screen_fade_out(500);
			set_player_control(player_id(), false, 0, false);
			func_46();
			request_model(Local_58.f_95, false);
			if (!has_model_loaded(Local_58.f_95))
			{
				return true;
			}
			func_42(1);
			break;
		case 1:
			if (!is_screen_faded_out())
			{
			}
			else
			{
				_disable_first_person_cam_this_frame();
				if (!func_47())
				{
					return true;
				}
				if (!func_48())
				{
					return true;
				}
				if (!func_49())
				{
					return true;
				}
				if (!func_50())
				{
					return true;
				}
				func_51();
				if (Global_1051439->f_4653 && !Local_58.f_234)
				{
				}
				else if (!func_52(1))
				{
				}
				else
				{
					_0x754937c28271bc65(Local_58.f_66);
					stop_fire_in_range(Local_58.f_26, 5f);
					func_53();
					func_54();
					func_55();
					func_56(1);
					func_57(Local_58.f_29);
					func_58();
					func_59();
					func_42(4);
					Jump @1005; //curOff = 488
					if (Local_58.f_62 == 1)
					{
						animpostfx_play("CameraTransitionWipe_R");
					}
					else
					{
						animpostfx_play("CameraTransitionWipe_L");
					}
					func_60(&(Local_58.f_406), 0);
					func_61();
					func_42(3);
					Jump @1005; //curOff = 537
					if (func_62(&(Local_58.f_406)) < 250)
					{
					}
					else
					{
						_disable_first_person_cam_this_frame();
						if (!func_52(0))
						{
						}
						else
						{
							if (Local_58.f_62 == 1)
							{
								_0xc5cb91d65852ed7e("CameraTransitionWipe_R");
							}
							else
							{
								_0xc5cb91d65852ed7e("CameraTransitionWipe_L");
							}
							func_63(&(Local_58.f_406));
							func_64();
							func_42(4);
							Jump @1005; //curOff = 618
							if (is_screen_faded_out())
							{
								if (get_ped_config_flag(func_65(), 408, true))
								{
									clear_ped_tasks_immediately(func_65(), false, true);
								}
								do_screen_fade_in(500);
							}
							if (!is_screen_faded_in())
							{
							}
							else if (animpostfx_is_running("CameraTransitionWipe_L") || animpostfx_is_running("CameraTransitionWipe_R"))
							{
							}
							else
							{
								func_66();
								func_42(5);
								Jump @1005; //curOff = 708
								func_67();
								Jump @1005; //curOff = 715
								func_67();
								if (!get_ped_config_flag(func_65(), 408, true))
								{
									func_66();
									func_42(5);
								}
								Jump @1005; //curOff = 747
								func_67();
								if (!get_ped_config_flag(func_65(), 408, true))
								{
									func_66();
									func_42(5);
								}
								Jump @1005; //curOff = 779
								if (!func_68(700))
								{
								}
								else
								{
									func_42(2);
									Jump @1005; //curOff = 801
									func_69();
									func_42(10);
									Jump @1005; //curOff = 814
									func_45();
									if (!func_68(1000))
									{
									}
									else
									{
										func_42(4);
										Jump @1005; //curOff = 840
										if (func_70())
										{
											func_42(4);
										}
										Jump @1005; //curOff = 855
										if (func_71())
										{
											func_42(4);
										}
										Jump @1005; //curOff = 870
										func_72(1);
										func_73();
										func_42(14);
										Jump @1005; //curOff = 888
										if (!func_74(1))
										{
											if (Local_58.f_410)
											{
												if (get_status_of_take_high_quality_photo() == 0 && get_status_of_save_high_quality_photo() == 0)
												{
													Local_58.f_409 = func_23(1938417563, 0, 1, 1, 0, 59806960);
													Local_58.f_410 = 0;
												}
											}
											func_42(10);
										}
										Jump @1005; //curOff = 963
										if (!is_screen_fading_out())
										{
											do_screen_fade_out(1000);
										}
										if (is_screen_faded_out())
										{
											func_42(16);
										}
										Jump @1005; //curOff = 994
										func_25();
										return false;
									}
								}
							}
						}
					}
				}
			}
			return true;
			default:
				break;
	}
}

void func_21()
{
	if (network_is_host_of_this_script())
	{
		if (!bVar468)
		{
			reserve_network_mission_peds(14);
			reserve_network_mission_objects(7);
			Local_470 = 1;
		}
		iVar4 = -1;
		iVar9 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar3 = int_to_participantindex(iVar0);
			if ((network_is_participant_active(iVar3) && Local_560[iVar0]->f_1 > 0) && !&Local_560[iVar0])
			{
				iVar8 = network_get_player_index(iVar3);
				iVar9 = network_hash_from_player_handle(iVar8);
				iVar10 = Local_560[iVar0]->f_1;
			}
			else
			{
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar3 = int_to_participantindex(iVar0);
			if ((network_is_participant_active(iVar3) && Local_560[iVar0]) // PointerArith)
			{
				if (iVar9 != 0 && Local_560[iVar0]->f_1 >= iVar10)
				{
					iVar9 = 0;
				}
			}
			iVar0++;
		}
		Local_470.f_1 = iVar9;
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!network_does_network_id_exist(&(Local_470.f_44[iVar1])))
			{
				func_75(iVar1);
				if (iVar4 < 0)
				{
					iVar4 = iVar1;
				}
			}
			else
			{
				bVar6 = false;
				iVar0 = 0;
				while (iVar0 < 7)
				{
					iVar3 = int_to_participantindex(iVar0);
					if ((network_is_participant_active(iVar3) && Local_560[iVar0]) // PointerArith)
					{
						iVar11 = network_hash_from_player_handle(network_get_player_index(iVar3));
						if (&Local_470.f_28[iVar1] == iVar11)
						{
							bVar7 = false;
							if (&Local_470.f_36[iVar1] != iVar11)
							{
								if (Local_560[iVar0]->f_3 == iVar1)
								{
									Local_470.f_36[iVar1] = iVar11;
								}
								else
								{
									bVar7 = true;
								}
							}
							if (!bVar7)
							{
								if (&Local_470.f_74[iVar1] != Local_560[iVar0]->f_2 && Local_560[iVar0]->f_2 != 0)
								{
									Local_470.f_74[iVar1] = Local_560[iVar0]->f_2;
								}
								bVar6 = true;
							}
							else
							{
								Jump @498; //curOff = 443
								if (&Local_470.f_36[iVar1] == iVar11)
								{
									bVar6 = true;
								}
								else if (is_bit_set(Local_560[iVar0]->f_4, iVar1))
								{
									Local_470.f_36[iVar1] = iVar11;
									bVar6 = true;
								}
								iVar0++;
							}
							if (!bVar6)
							{
								if (network_has_control_of_network_id(&(Local_470.f_44[iVar1])))
								{
									if (!func_76(Local_470.f_52[iVar1]))
									{
										func_60(Local_470.f_52[iVar1], 0);
									}
									if (func_62(Local_470.f_52[iVar1]) > 5000)
									{
										iVar5 = net_to_ped(&(Local_470.f_44[iVar1]));
										delete_ped(&iVar5);
										func_75(iVar1);
										if (iVar4 < 0)
										{
											iVar4 = iVar1;
										}
									}
								}
								else
								{
									network_request_control_of_network_id(&(Local_470.f_44[iVar1]));
								}
							}
							else if (func_76(Local_470.f_52[iVar1]))
							{
								func_63(Local_470.f_52[iVar1]);
							}
							iVar1++;
							iVar0 = 0;
							while (iVar0 < 7)
							{
								iVar3 = int_to_participantindex(iVar0);
								bVar16 = false;
								if ((network_is_participant_active(iVar3) && Local_560[iVar0]) // PointerArith && Local_560[iVar0]->f_3 < 0)
								{
									iVar11 = network_hash_from_player_handle(network_get_player_index(iVar3));
									iVar1 = 0;
									while (iVar1 < 7)
									{
										if (&Local_470.f_28[iVar1] == iVar11)
										{
											bVar16 = true;
											if (!&Local_470.f_82[iVar1])
											{
												if (network_has_control_of_network_id(&(Local_470.f_44[iVar1])))
												{
													if (_0xa0bc8faed8cfeb3c(net_to_ped(&(Local_470.f_44[iVar1]))))
													{
														_0x59bd177a1a48600a(net_to_ped(&(Local_470.f_44[iVar1])), 1);
														Local_470.f_82[iVar1] = 1;
													}
												}
												else
												{
													network_request_control_of_network_id(&(Local_470.f_44[iVar1]));
												}
											}
										}
										else
										{
											iVar1++;
										}
									}
									if (!bVar16)
									{
										if (iVar4 > -1)
										{
											if (can_register_mission_peds(1))
											{
												iVar17 = clone_ped(get_player_ped(network_get_player_index(iVar3)), 1.401298E-45f, true, true);
												_set_ped_component_disabled(iVar17, -1229581779, 1);
												_update_ped_variation(iVar17, false, true, true, true, false);
												_network_set_entity_invisible_to_network(iVar17, true);
												set_blocking_of_non_temporary_events(iVar17, true);
												_set_entity_coords_and_heading_no_offset(iVar17, get_entity_coords(get_player_ped(network_get_player_index(iVar3)), true, false), get_entity_heading(get_player_ped(network_get_player_index(iVar3))), false, true);
												freeze_entity_position(iVar17, true);
												set_entity_completely_disable_collision(iVar17, false, false);
												set_entity_visible(iVar17, false);
												func_77(get_player_ped(network_get_player_index(iVar3)), iVar17);
												Local_470.f_28[iVar4] = iVar11;
												Local_470.f_36[iVar4] = iVar11;
												Local_470.f_44[iVar4] = ped_to_net(iVar17);
											}
										}
										else
										{
											iVar18 = 0;
											iVar1 = 0;
											while (iVar1 < 7)
											{
												if (&Local_470.f_28[iVar1] != &Local_470.f_36[iVar1])
												{
													iVar18 = iVar1;
												}
												else
												{
													iVar1++;
												}
											}
											if (network_has_control_of_network_id(&(Local_470.f_44[iVar18])))
											{
												iVar5 = net_to_ped(&(Local_470.f_44[iVar18]));
												delete_ped(&iVar5);
												func_75(iVar18);
											}
											else
											{
												network_request_control_of_network_id(&(Local_470.f_44[iVar18]));
											}
										}
									}
									else
									{
										iVar0++;
									}
									iVar12 = -1;
									bVar19 = false;
									bVar21 = true;
									bVar29 = true;
									iVar0 = 0;
									while (iVar0 < 7)
									{
										iVar3 = int_to_participantindex(iVar0);
										if ((network_is_participant_active(iVar3) && Local_560[iVar0]->f_3 > -1) && Local_560[iVar0]->f_10 == 1)
										{
											iVar28 = Local_560[iVar0]->f_3;
											iVar12 = -1;
											if (network_does_network_id_exist(&(Local_470.f_4[iVar28])))
											{
												iVar12 = _net_to_anim_scene(&(Local_470.f_4[iVar28]));
											}
											if (_does_anim_scene_exist(iVar12) && !get_anim_scene_bool(iVar12, "BREAKLOOP"))
											{
												if (!_network_has_control_of_anim_scene(iVar12))
												{
													_network_request_control_of_anim_scene(iVar12);
												}
												else
												{
													set_anim_scene_bool(iVar12, "BREAKLOOP", true, false);
													iVar1 = 0;
													while (iVar1 < 7)
													{
														if (is_bit_set(Local_560[iVar0]->f_4, iVar1))
														{
															iVar12 = -1;
															if (network_does_network_id_exist(&(Local_470.f_4[iVar1])))
															{
																iVar12 = _net_to_anim_scene(&(Local_470.f_4[iVar1]));
															}
															if (_does_anim_scene_exist(iVar12) && !get_anim_scene_bool(iVar12, "BREAKLOOP"))
															{
																if (!_network_has_control_of_anim_scene(iVar12))
																{
																	_network_request_control_of_anim_scene(iVar12);
																}
																else
																{
																	set_anim_scene_bool(iVar12, "BREAKLOOP", true, false);
																}
															}
														}
														iVar1++;
													}
													if (bVar29)
													{
														if ((network_is_participant_active(iVar3) && Local_560[iVar0]->f_10 != 4) && Local_560[iVar0]->f_10 != 0)
														{
															bVar29 = false;
														}
													}
												}
												iVar0++;
												if (bVar29)
												{
													iVar0 = 0;
													while (iVar0 < 7)
													{
														if (network_does_network_id_exist(&(Local_470.f_4[iVar0])))
														{
															iVar12 = _net_to_anim_scene(&(Local_470.f_4[iVar0]));
															if (_does_anim_scene_exist(iVar12) && !_is_anim_scene_started(iVar12, false))
															{
																if (!_network_has_control_of_anim_scene(iVar12))
																{
																	_network_request_control_of_anim_scene(iVar12);
																}
																else
																{
																	start_anim_scene(iVar12);
																}
															}
														}
														iVar0++;
													}
												}
												switch (Local_470.f_2)
												{
													case 0:
														iVar0 = 0;
														while (iVar0 < 7)
														{
															iVar3 = int_to_participantindex(iVar0);
															if (network_is_participant_active(iVar3) && Local_560[iVar0]->f_10 == 3)
															{
																iVar28 = Local_560[iVar0]->f_3;
																iVar12 = -1;
																if (network_does_network_id_exist(&(Local_470.f_4[iVar28])))
																{
																	iVar12 = _net_to_anim_scene(&(Local_470.f_4[iVar28]));
																}
																if (_does_anim_scene_exist(iVar12))
																{
																	bVar15 = true;
																	if (!_network_has_control_of_anim_scene(iVar12))
																	{
																		_network_request_control_of_anim_scene(iVar12);
																		bVar15 = false;
																	}
																	if (!network_has_control_of_network_id(&(Local_470.f_44[iVar28])))
																	{
																		network_request_control_of_network_id(&(Local_470.f_44[iVar28]));
																		bVar15 = false;
																	}
																	iVar2 = 0;
																	while (iVar2 < 7)
																	{
																		if (network_does_network_id_exist(&(Local_470.f_12[iVar2])) && func_78(&(Local_470.f_20[iVar2])) == &Local_470.f_74[iVar28])
																		{
																			if (!network_has_control_of_network_id(&(Local_470.f_12[iVar2])))
																			{
																				network_request_control_of_network_id(&(Local_470.f_12[iVar2]));
																				bVar15 = false;
																			}
																			else
																			{
																				_0x7182edda1ee7db5a(&(Local_470.f_12[iVar2]));
																			}
																		}
																		iVar2++;
																	}
																	if (!bVar15)
																	{
																	}
																	else
																	{
																		_delete_anim_scene(iVar12);
																		iVar2 = 0;
																		while (iVar2 < 7)
																		{
																			if (network_does_network_id_exist(&(Local_470.f_12[iVar2])) && func_78(&(Local_470.f_20[iVar2])) == &Local_470.f_74[iVar28])
																			{
																				if (is_entity_a_ped(net_to_ent(&(Local_470.f_12[iVar2]))))
																				{
																					iVar14 = net_to_ped(&(Local_470.f_12[iVar2]));
																					delete_ped(&iVar14);
																				}
																				else
																				{
																					iVar13 = net_to_obj(&(Local_470.f_12[iVar2]));
																					delete_object(&iVar13);
																				}
																				Local_470.f_12[iVar2] = 0;
																				Local_470.f_20[iVar2] = 0;
																			}
																			iVar2++;
																		}
																		clear_ped_tasks_immediately(net_to_ped(&(Local_470.f_44[iVar28])), false, true);
																		func_79(net_to_ped(&(Local_470.f_44[iVar28])), Local_58.f_10, Local_58.f_13, 2, 1073741824);
																		_0x2208438012482a1a(net_to_ped(&(Local_470.f_44[iVar28])), false, false);
																		if (network_is_participant_active(iVar3) && (Local_58.f_253 != Local_560[iVar0]->f_8 || Local_58.f_404 != Local_560[iVar0]->f_9))
																		{
																			Local_58.f_253 = Local_560[iVar0]->f_8;
																			Local_58.f_404 = Local_560[iVar0]->f_9;
																			if (Local_58.f_253 != 0 && !func_80())
																			{
																			}
																			else
																			{
																				Local_470.f_3 = iVar28;
																				if (Local_58.f_253 == 0 || is_string_null_or_empty(&(Local_58.f_254)))
																				{
																					func_81(3);
																				}
																				else
																				{
																					iVar12 = _create_anim_scene(&(Local_58.f_254), 32768, 0, true, true);
																					set_anim_scene_origin(iVar12, Local_58.f_119, Local_58.f_122, 2);
																					Var22 = { func_82(iVar0) };
																					set_anim_scene_entity(iVar12, &Var22, net_to_ped(&(Local_470.f_44[iVar28])), 0);
																					remove_all_ped_weapons(net_to_ped(&(Local_470.f_44[iVar28])), true, true);
																					func_77(get_player_ped(network_get_player_index(iVar3)), net_to_ped(&(Local_470.f_44[iVar28])));
																					Local_470.f_4[iVar28] = _anim_scene_to_net(iVar12);
																					func_81(1);
																				}
																			}
																			else
																			{
																				iVar0++;
																			}
																			Jump @3528; //curOff = 2462
																			iVar12 = -1;
																			if (network_does_network_id_exist(&(Local_470.f_4[Local_470.f_3])))
																			{
																				iVar12 = _net_to_anim_scene(&(Local_470.f_4[Local_470.f_3]));
																			}
																			if (!network_has_control_of_network_id(&(Local_470.f_44[Local_470.f_3])))
																			{
																				network_request_control_of_network_id(&(Local_470.f_44[Local_470.f_3]));
																			}
																			else if (!_is_anim_scene_loaded(iVar12, true, false))
																			{
																				if (!_is_anim_scene_loading(iVar12, true))
																				{
																					load_anim_scene(iVar12);
																				}
																			}
																			else if (!_is_anim_scene_metadata_loaded(iVar12, false))
																			{
																			}
																			else
																			{
																				iVar0 = 0;
																				while (iVar0 < 7)
																				{
																					iVar3 = int_to_participantindex(iVar0);
																					if (network_is_participant_active(iVar3) && Local_560[iVar0]->f_3 == Local_470.f_3)
																					{
																						bVar19 = true;
																						set_entity_visible(net_to_ent(&(Local_470.f_44[Local_470.f_3])), true);
																					}
																					else
																					{
																						iVar0++;
																					}
																				}
																				if (bVar19)
																				{
																					func_81(2);
																				}
																				else
																				{
																					Local_470.f_3 = -1;
																					func_81(0);
																				}
																			}
																			Jump @3528; //curOff = 2697
																			iVar0 = 0;
																			while (iVar0 < 7)
																			{
																				iVar3 = int_to_participantindex(iVar0);
																				if ((network_is_participant_active(iVar3) && Local_560[iVar0]->f_3 == Local_470.f_3) && Local_560[iVar0]->f_2 > 0)
																				{
																					bVar19 = true;
																					iVar26 = Local_560[iVar0]->f_2;
																					bVar27 = is_ped_male(net_to_ped(&(Local_470.f_44[Local_560[iVar0]->f_3])));
																					bVar21 = true;
																					iVar2 = 0;
																					while (iVar2 < 7)
																					{
																						if (func_78(&(Local_58.f_270[iVar2])) == iVar26)
																						{
																							iVar4 = -1;
																							iVar20 = 0;
																							while (iVar20 < 7)
																							{
																								if (!network_does_network_id_exist(&(Local_470.f_12[iVar20])))
																								{
																									if (iVar4 == -1)
																									{
																										iVar4 = iVar20;
																									}
																								}
																								else if (&Local_470.f_20[iVar20] == &Local_58.f_270[iVar2])
																								{
																									iVar4 = -1;
																								}
																								else
																								{
																									iVar20++;
																								}
																							}
																							if (iVar4 > -1)
																							{
																								bVar21 = false;
																								request_model(Local_58.f_270[iVar2]->f_17, false);
																								if (has_model_loaded(Local_58.f_270[iVar2]->f_17))
																								{
																									iVar12 = -1;
																									if (network_does_network_id_exist(&(Local_470.f_4[Local_470.f_3])))
																									{
																										iVar12 = _net_to_anim_scene(&(Local_470.f_4[Local_470.f_3]));
																									}
																									if (!network_has_control_of_network_id(&(Local_470.f_44[Local_470.f_3])))
																									{
																										network_request_control_of_network_id(&(Local_470.f_44[Local_470.f_3]));
																									}
																									else
																									{
																										if (is_model_a_ped(Local_58.f_270[iVar2]->f_17))
																										{
																											if (can_register_mission_peds(1))
																											{
																												iVar14 = func_83(Local_58.f_270[iVar2]->f_17, Local_58.f_119, 0, 1, 1, 0, 1, 1, 1, 0, 0);
																												if (Local_58.f_270[iVar2]->f_18 > -1)
																												{
																													_set_ped_outfit_preset(iVar14, Local_58.f_270[iVar2]->f_18, 0);
																												}
																												_network_set_entity_invisible_to_network(iVar14, true);
																												set_entity_collision(iVar14, false, false);
																												freeze_entity_position(iVar14, true);
																												set_blocking_of_non_temporary_events(iVar14, true);
																												if (bVar27)
																												{
																													set_anim_scene_entity(iVar12, &(Local_58.f_270[iVar2]->f_1), iVar14, 0);
																												}
																												else
																												{
																													set_anim_scene_entity(iVar12, &(Local_58.f_270[iVar2]->f_9), iVar14, 0);
																												}
																												Local_470.f_12[iVar4] = ped_to_net(iVar14);
																												Local_470.f_20[iVar4] = &Local_58.f_270[iVar2];
																											}
																										}
																										else if (can_register_mission_objects(1))
																										{
																											iVar13 = create_object(Local_58.f_270[iVar2]->f_17, Local_58.f_119, true, true, false, false, true);
																											_network_set_entity_invisible_to_network(iVar13, true);
																											set_entity_collision(iVar13, false, false);
																											if (bVar27)
																											{
																												set_anim_scene_entity(iVar12, &(Local_58.f_270[iVar2]->f_1), iVar13, 0);
																											}
																											else
																											{
																												set_anim_scene_entity(iVar12, &(Local_58.f_270[iVar2]->f_9), iVar13, 0);
																											}
																											Local_470.f_12[iVar4] = obj_to_net(iVar13);
																											Local_470.f_20[iVar4] = &Local_58.f_270[iVar2];
																										}
																									}
																									else
																									{
																										iVar2++;
																									}
																									if (bVar21)
																									{
																										func_81(3);
																									}
																									Jump @3403; //curOff = 3391
																									iVar0++;
																									if (!bVar19)
																									{
																										Local_470.f_3 = -1;
																										func_81(0);
																									}
																									Jump @3528; //curOff = 3420
																									iVar0 = 0;
																									while (iVar0 < 7)
																									{
																										iVar3 = int_to_participantindex(iVar0);
																										if (network_is_participant_active(iVar3) && Local_560[iVar0]->f_3 == Local_470.f_3)
																										{
																											bVar19 = true;
																											if (Local_560[iVar0]->f_10 != 3)
																											{
																												Local_470.f_3 = -1;
																												func_81(0);
																											}
																										}
																										else
																										{
																											iVar0++;
																										}
																									}
																									if (!bVar19)
																									{
																										Local_470.f_3 = -1;
																										func_81(0);
																									}
																									iVar0 = 0;
																									while (iVar0 < 7)
																									{
																										if (network_does_network_id_exist(&(Local_470.f_4[iVar0])))
																										{
																											if (!network_has_control_of_network_id(&(Local_470.f_4[iVar0])))
																											{
																												network_request_control_of_network_id(&(Local_470.f_4[iVar0]));
																											}
																											else if (network_does_network_id_exist(&(Local_470.f_44[iVar0])))
																											{
																												_0x7182edda1ee7db5a(&(Local_470.f_4[iVar0]));
																												iVar12 = _net_to_anim_scene(&(Local_470.f_4[iVar0]));
																												if (!_is_anim_scene_started(iVar12, false) || _0x8d81e7824b7753f7(iVar12, "s_INTRO", 1))
																												{
																													if (!network_has_control_of_network_id(&(Local_470.f_44[iVar0])))
																													{
																														network_request_control_of_network_id(&(Local_470.f_44[iVar0]));
																													}
																													else
																													{
																														_0x7182edda1ee7db5a(&(Local_470.f_44[iVar0]));
																													}
																												}
																											}
																											else
																											{
																												iVar12 = _net_to_anim_scene(&(Local_470.f_4[iVar0]));
																												_delete_anim_scene(iVar12);
																												Local_470.f_4[iVar0] = 0;
																											}
																										}
																										iVar0++;
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
														}
														default:
															break;
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
	}
}

int func_22()
{
	return Local_19.f_23;
}

int func_23(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!func_84(iParam0, 0))
	{
		return -1;
	}
	if (func_85(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_86())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_87(iParam0, iParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_87(iParam0, iParam5, 1, 0, 1, 773203532) * iParam2);
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
	else if (func_88(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_89(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_90(0))
	{
		if (iVar0 > 0)
		{
			func_91(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_91(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_92(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_91(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
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
	iVar52 = func_93(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_94(iVar52, Var53);
	}
	return iVar52;
}

bool func_24(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

void func_25()
{
	if (Local_58.f_80)
	{
		return;
	}
	if (does_cam_exist(Local_58.f_53))
	{
		destroy_cam(Local_58.f_53, false);
	}
	if (func_95(Local_58.f_51, 0))
	{
		freeze_entity_position(Local_58.f_51, false);
		clear_ped_tasks_immediately(Local_58.f_51, false, true);
		_0x2208438012482a1a(Global_34, false, false);
	}
	if (func_95(Global_34, 0))
	{
		freeze_entity_position(Global_34, false);
		set_entity_completely_disable_collision(Global_34, true, false);
		_set_entity_coords_and_heading(Global_34, Local_58.f_22, Local_58.f_25, true, false, true);
		set_entity_visible(Global_34, true);
		task_clear_look_at(Global_34);
		clear_ped_tasks_immediately(Global_34, false, true);
		_0x2208438012482a1a(Global_34, false, false);
	}
	set_model_as_no_longer_needed(Local_58.f_95);
	set_entity_visible(Local_58.f_66, true);
	_0xd2b9c78537ed5759(Local_58.f_65);
	Local_58.f_65 = 0;
	Local_58.f_66 = 0;
	func_96();
	func_18();
	func_56(0);
	func_97();
	func_98();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Local_58.f_96[iVar0]->f_1 = 0;
		Local_58.f_96[iVar0] = 0;
		iVar0++;
	}
	_0xf1142e5d64b47802(false, false);
	_0x614682e715adbaac();
	_0xd45547d8396f002a();
	clear_facial_idle_anim_override(Global_34);
	remove_clip_set(Local_58.f_79);
	remove_anim_dict(Local_58.f_78);
	if (animpostfx_is_running("CameraTransitionWipe_R"))
	{
		_0xc5cb91d65852ed7e("CameraTransitionWipe_R");
	}
	if (animpostfx_is_running("CameraTransitionWipe_L"))
	{
		_0xc5cb91d65852ed7e("CameraTransitionWipe_L");
	}
	_0x37d7bdba89f13959(Local_58.f_75);
	_0x37d7bdba89f13959(Local_58.f_76);
	_0x37d7bdba89f13959(Local_58.f_77);
	_0x37d7bdba89f13959("CameraTransitionWipe_L");
	_0x37d7bdba89f13959("CameraTransitionWipe_R");
	set_player_control(player_id(), true, 0, false);
	func_99(0, 1, 1, 0);
	if (_does_volume_exist(Local_58.f_113))
	{
		_delete_volume(Local_58.f_113);
	}
	if (does_entity_exist(Local_58.f_116))
	{
		set_model_as_no_longer_needed(get_entity_model(Local_58.f_116));
		delete_object(&(Local_58.f_116));
	}
	if (does_entity_exist(Local_58.f_117))
	{
		delete_object(&(Local_58.f_117));
	}
	if (does_entity_exist(Local_58.f_131))
	{
		delete_object(&(Local_58.f_131));
	}
	if (_does_anim_scene_exist(Local_58.f_232))
	{
		_delete_anim_scene(Local_58.f_232);
	}
	if (Global_1051439->f_4653)
	{
		if (func_100(participant_id_to_int()))
		{
			Local_560[participant_id_to_int()] = 0;
			Local_560[participant_id_to_int()]->f_8 = 0;
			Local_560[participant_id_to_int()]->f_9 = 0;
			Local_560[participant_id_to_int()]->f_1 = 0;
		}
		clear_timecycle_modifier();
	}
	Local_58.f_80 = 1;
}

int func_26()
{
	return Global_1572887->f_13;
}

bool func_27()
{
	return Global_1051252->f_8;
}

bool func_28(int iParam0)
{
	if (_0x7907969497ea92f5(&(Global_1915715->f_20346[iParam0])))
	{
		if (_0x603ac35fd4602c76(&(Global_1915715->f_20346[iParam0])))
		{
			if (!func_101(&(Global_1915715->f_20387[iParam0]), 2))
			{
				func_31(Global_1915715->f_20387[iParam0], 2);
			}
			return true;
		}
	}
	return false;
}

bool func_29(int iParam0)
{
	if (_0x7907969497ea92f5(&(Global_1915715->f_20346[iParam0])))
	{
		return func_101(&(Global_1915715->f_20387[iParam0]), 4);
	}
	return false;
}

bool func_30(int iParam0)
{
	if (_0x7907969497ea92f5(&(Global_1915715->f_20346[iParam0])))
	{
		return func_101(&(Global_1915715->f_20387[iParam0]), 16);
	}
	return false;
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_32()
{
	Local_58.f_68[0] = "portrait_normal";
	Local_58.f_68[1] = "portrait_happy";
	Local_58.f_68[2] = "portrait_pensive";
	Local_58.f_68[3] = "portrait_relaxed";
	Local_58.f_68[4] = "portrait_angry";
	Local_58.f_68[5] = "portrait_annoyed";
	Local_58.f_29 = 0;
}

struct<14> func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_34(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_102(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_35(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_36(int iParam0)
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

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1822204474;
		case 1:
			return -2119261942;
		case 2:
			return -970760213;
		case 3:
			return 919627684;
		case 4:
			return -1686928836;
		default:
			break;
	}
	return 0;
}

bool func_38(int iParam0, int iParam1)
{
	if (!func_84(iParam0, 0))
	{
		return func_104(func_103(iParam0), iParam1);
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

void func_39()
{
	if (Local_19.f_1 == 1)
	{
		func_105();
	}
	if (Local_19.f_23 == 0 && Local_19.f_1 == 0)
	{
		if (Local_19.f_2)
		{
			if ((get_game_timer() - Local_19.f_21) > 2500)
			{
				iVar0 = _0x78c56b8a7b1d000c();
				if (Local_19.f_6 && Local_19.f_7 != iVar0)
				{
					Local_19.f_6 = 0;
				}
				Local_19.f_7 = iVar0;
				func_106();
				Local_19.f_21 = get_game_timer();
			}
		}
	}
	switch (Local_19.f_23)
	{
		case 1:
			if (is_control_just_pressed(2, 217814591))
			{
				_0x00a15b94cba4f76f(Local_19.f_19);
				Local_19.f_19 = 0;
				Local_19.f_6 = 1;
				func_107(2);
			}
			break;
		case 0:
			if (func_74(1))
			{
				Local_19.f_25 = 0;
				if (Local_19 || Local_19.f_6)
				{
					func_107(2);
				}
				else if (Local_19.f_7 == Local_19.f_8)
				{
					if (Local_19.f_19 == 0)
					{
						Var1.f_2 = 0;
						Var1.f_7 = get_hash_key("IB_BACK");
						Var1.f_7.f_3 = 0;
						Local_19.f_19 = func_108(&Var1, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_107(1);
					}
					else
					{
						Local_19.f_6 = 1;
						func_107(2);
					}
				}
				else
				{
					func_107(2);
				}
			}
			if (func_74(4))
			{
				_0x614682e715adbaac();
				_0x494a9874f17a7d50(1);
				func_107(7);
			}
			break;
		case 2:
			Local_19.f_5 = 0;
			func_107(3);
			Local_19.f_20 = get_game_timer();
			break;
		case 3:
			if ((get_game_timer() - Local_19.f_20) > 0)
			{
				Local_19.f_20 = get_game_timer();
				if (Local_19 || Local_19.f_6)
				{
					func_107(4);
				}
				else
				{
					_0xd45547d8396f002a();
					begin_take_high_quality_photo();
					Local_19.f_7++;
					func_107(5);
				}
			}
			break;
		case 5:
			Local_19.f_24 = get_status_of_take_high_quality_photo();
			if (Local_19.f_24 == 1)
			{
			}
			if (Local_19.f_24 == 0)
			{
				Local_19.f_25 = 1;
				_0x2705d18c11b61046(0);
				_0x8e6aff353c09652e(Local_19.f_26);
				if (is_itemset_valid(Local_19.f_27))
				{
					_0x20a4bf0e09bee146(Local_19.f_27);
				}
				else
				{
					Local_19.f_27 = create_itemset(true);
				}
				switch (Local_19.f_26)
				{
					case 11:
					case 12:
					case 13:
						_0xc08aff658b2e51da(&iVar20);
						if (iVar20 != 0)
						{
							_0x564837d4a9ede296(iVar20);
						}
						if (network_get_this_script_is_network_script())
						{
							iVar21 = 0;
							while (iVar21 < network_get_max_num_participants())
							{
								iVar22 = int_to_participantindex(iVar21);
								if (network_is_participant_active(iVar22))
								{
									_0x75d568607909333e(network_get_player_index(iVar22));
									add_to_itemset(get_player_ped(network_get_player_index(iVar22)), Local_19.f_27);
								}
								iVar21++;
							}
						}
						break;
					case 1:
					case 2:
						_0x75d568607909333e(player_id());
						add_to_itemset(get_player_ped(player_id()), Local_19.f_27);
						break;
				}
				_0x4d31051a4ca83787(Local_19.f_27);
				StringCopy(&cVar23, "", 32);
				iVar27 = func_109();
				if (func_110(iVar27))
				{
					MemCopy(&cVar23, {func_111(iVar27)}, 4);
				}
				if (is_string_null_or_empty(&cVar23))
				{
					iVar28 = func_112();
					StringCopy(&cVar23, func_113(iVar28), 32);
				}
				_0xd1031b83ac093bc7(&cVar23);
				StringCopy(&cVar29, "", 16);
				StringCopy(&cVar31, "", 16);
				iVar33 = func_114();
				if (func_115(iVar33))
				{
					StringCopy(&cVar29, func_116(iVar33), 16);
					StringCopy(&cVar31, func_117(iVar33), 16);
				}
				_0x9937facbbf267244(&cVar29);
				_0x8952e857696b8a79(&cVar31);
				save_high_quality_photo(0);
				Local_19.f_3 = 0;
				func_107(6);
			}
			else if (Local_19.f_24 == 2)
			{
				func_107(4);
			}
			break;
		case 6:
			if (Local_19.f_3 == 0)
			{
				set_no_loading_screen(false);
				Local_19.f_3 = 1;
			}
			Local_19.f_24 = get_status_of_save_high_quality_photo();
			if (Local_19.f_24 == 0)
			{
				Local_19.f_5 = 1;
				func_118(1);
				func_107(0);
				if (_0x4ad019591e94c064("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
			}
			else if (Local_19.f_24 == 2)
			{
				Local_19.f_5 = 1;
				func_118(1);
				func_107(0);
			}
			break;
		case 4:
			if ((get_game_timer() - Local_19.f_20) > 300)
			{
				set_no_loading_screen(false);
				func_118(1);
				func_107(0);
			}
			break;
		case 7:
			Local_19.f_24 = _0x13430d3d5a45f14b(1);
			if (Local_19.f_24 == 0)
			{
				_0xf1142e5d64b47802(true, false);
				func_72(8);
				func_118(4);
				func_107(0);
			}
			else if (Local_19.f_24 == 2)
			{
				func_118(4);
				func_107(0);
			}
			break;
	}
}

void func_40()
{
	if (Local_58.f_409 != -1 && !func_119(Local_58.f_409))
	{
		_0xf184b3ece36219cf(Local_58.f_409, &uVar0);
		if (Global_1051439->f_4653)
		{
			_0xed22be4c5a399e63(&uVar0, func_120(), Local_560[participant_id_to_int()]->f_8, Global_1051439->f_4653.f_4);
		}
		else
		{
			_0xed22be4c5a399e63(&uVar0, func_120(), 0, 1);
		}
		Local_58.f_409 = -1;
	}
}

void func_41()
{
	if (Local_58.f_411 == -1)
	{
		if (load_stream("track", "inworld_music_wax_cylinder_photostudio"))
		{
			Local_58.f_411 = _0x0556c784fa056628("track", "inworld_music_wax_cylinder_photostudio");
			if (Local_58.f_411 != -1)
			{
				play_stream_from_position(Local_58, Local_58.f_411);
			}
		}
	}
	if (Local_58.f_411 != -1)
	{
		if (!is_stream_playing(Local_58.f_411))
		{
			Local_58.f_411 = -1;
		}
	}
}

void func_42(int iParam0)
{
	Global_1051439->f_4653.f_7 = iParam0;
}

void func_43()
{
	if (!Global_1051439->f_4653)
	{
		return;
	}
	iVar3 = 0;
	if (!&Local_560[participant_id_to_int()])
	{
		if (Local_470.f_1 == network_hash_from_player_handle(player_id()))
		{
			Local_560[participant_id_to_int()] = 1;
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (&Local_470.f_28[iVar0] == network_hash_from_player_handle(player_id()) && &Local_470.f_74[iVar0] != 0)
				{
					bVar5 = true;
					Jump @243; //curOff = 110
				}
				else if (&Local_470.f_28[iVar0] != 0)
				{
					bVar6 = false;
					iVar1 = 0;
					while (iVar1 < 7)
					{
						iVar2 = int_to_participantindex(iVar1);
						if (((iVar2 != participant_id() && network_is_participant_active(iVar2)) && Local_560[iVar1]) // PointerArith && &Local_470.f_28[iVar0] == network_hash_from_player_handle(network_get_player_index(iVar2)))
						{
							bVar6 = true;
						}
						else
						{
							iVar1++;
						}
					}
					if (!bVar6)
					{
						iVar4++;
					}
				}
				iVar0++;
			}
			if (!bVar5)
			{
				iVar0 = 0;
				while (iVar0 < 7)
				{
					iVar2 = int_to_participantindex(iVar0);
					if (((iVar2 != participant_id() && network_is_participant_active(iVar2)) && Local_560[iVar0]) // PointerArith)
					{
						iVar7++;
					}
					iVar0++;
				}
				if ((iVar4 + iVar7) >= 7)
				{
					func_42(15);
					return;
				}
				Local_58.f_115 = (iVar4 + iVar7) + 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iVar2 = int_to_participantindex(iVar0);
				if (((iVar2 != participant_id() && network_is_participant_active(iVar2)) && Local_560[iVar0]) // PointerArith)
				{
					if (Local_560[iVar0]->f_1 > iVar3)
					{
						iVar3 = Local_560[iVar0]->f_1;
					}
				}
				iVar0++;
			}
			Local_560[participant_id_to_int()]->f_1 = iVar3 + 1;
			return;
		}
	}
	Global_1051439->f_4653.f_4 = 0;
	Global_1051439->f_4653.f_1 = 0;
	Global_1051439->f_4653.f_2 = 0;
	iVar8 = -1;
	iVar13 = 2147483647;
	if (Local_560[participant_id_to_int()]->f_3 < 0)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if ((&Local_470.f_28[iVar1] == network_hash_from_player_handle(player_id()) && Local_470.f_82[iVar1]) // PointerArith)
			{
				Local_560[participant_id_to_int()]->f_3 = iVar1;
			}
			else
			{
				iVar1++;
			}
		}
	}
	Local_58.f_114 = 0;
	if (Local_560[participant_id_to_int()]->f_3 > -1 && Local_560[participant_id_to_int()]->f_10 != 3)
	{
		if (!network_has_control_of_network_id(&(Local_470.f_44[Local_560[participant_id_to_int()]->f_3])))
		{
			network_request_control_of_network_id(&(Local_470.f_44[Local_560[participant_id_to_int()]->f_3]));
		}
		else
		{
			Local_58.f_114 = 1;
			_0x7182edda1ee7db5a(&(Local_470.f_44[Local_560[participant_id_to_int()]->f_3]));
		}
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = int_to_participantindex(iVar0);
		bVar9 = false;
		if (iVar2 == participant_id() || (network_is_participant_active(iVar2) && Local_560[iVar0]) // PointerArith)
		{
			set_bit(&iVar11, iVar0);
			Global_1051439->f_4653.f_4++;
			func_121(network_get_player_index(iVar2));
			if (Local_560[iVar0]->f_1 < iVar13)
			{
				iVar13 = Local_560[iVar0]->f_1;
				iVar10 = iVar0;
			}
		}
		iVar0++;
	}
	Local_58.f_112 = iVar10 == participant_id_to_int();
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Local_58.f_96[iVar1]->f_1 != 0)
		{
			bVar9 = false;
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iVar2 = int_to_participantindex(iVar0);
				if (network_is_participant_active(iVar2) && Local_58.f_96[iVar1]->f_1 == network_hash_from_player_handle(network_get_player_index(iVar2)))
				{
					if (is_bit_set(iVar11, iVar0))
					{
						bVar9 = true;
						set_bit(&iVar12, iVar0);
					}
					iVar8 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
			if (!bVar9)
			{
				if (Local_58.f_112)
				{
					iVar0 = 0;
					while (iVar0 < 7)
					{
						if (Local_58.f_96[iVar1]->f_1 == &Local_470.f_28[iVar0] || Local_58.f_96[iVar1]->f_1 == &Local_470.f_36[iVar0])
						{
							set_bit(&(Local_560[participant_id_to_int()]->f_4), iVar0);
						}
						iVar0++;
					}
				}
				Local_58.f_96[iVar1]->f_1 = 0;
				Local_58.f_96[iVar1] = 0;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = int_to_participantindex(iVar0);
		if (is_bit_set(iVar11, iVar0) && !is_bit_set(iVar12, iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 7)
			{
				if (Local_58.f_96[iVar1]->f_1 == 0)
				{
					iVar8 = iVar1;
				}
				else
				{
					iVar1++;
				}
			}
			Local_58.f_96[iVar8]->f_1 = network_hash_from_player_handle(network_get_player_index(iVar2));
			Local_58.f_96[iVar8] = Local_560[iVar0]->f_1;
			Global_1051439->f_4653.f_4++;
			func_121(network_get_player_index(iVar2));
			if (iVar2 != participant_id())
			{
				iVar1 = 0;
				while (iVar1 < 7)
				{
					if (is_bit_set(Local_560[participant_id_to_int()]->f_4, iVar1))
					{
						if (&Local_470.f_28[iVar1] == Local_58.f_96[iVar8]->f_1)
						{
							clear_bit(&(Local_560[participant_id_to_int()]->f_4), iVar1);
						}
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	func_122(iVar10);
}

void func_44()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1))
		{
			set_player_invisible_locally(iVar1, false);
		}
		iVar0++;
	}
}

void func_45()
{
	_disable_first_person_cam_this_frame();
	if (!does_cam_exist(Local_58.f_53))
	{
		Local_58.f_53 = create_camera_with_params(26379945, Local_58, Local_58.f_3, 65f, false, 2);
		set_cam_fov(Local_58.f_53, Local_58.f_9);
	}
	else
	{
		set_cam_active(Local_58.f_53, true);
		render_script_cams(true, false, 3000, true, false, 0);
		set_cam_fov(Local_58.f_53, Local_58.f_9);
	}
	func_123();
	if (!func_124(Global_34, 150319005))
	{
		task_look_at_entity(Global_34, Local_58.f_51, -1, 0, 51, 0);
	}
	_0xc9caeaeec1256e54(-492723688);
}

void func_46()
{
	request_anim_dict(Local_58.f_78);
	request_clip_set(Local_58.f_79);
}

bool func_47()
{
	if (!has_anim_dict_loaded(Local_58.f_78))
	{
		return false;
	}
	if (!has_clip_set_loaded(Local_58.f_79))
	{
		return false;
	}
	return true;
}

bool func_48()
{
	func_125(18, &(Local_58.f_51));
	if (!func_95(Local_58.f_51, 0))
	{
		return false;
	}
	_set_entity_coords_and_heading(Local_58.f_51, Local_58.f_14, Local_58.f_17, true, false, true);
	task_stand_still(Local_58.f_51, -1);
	return true;
}

bool func_49()
{
	if (does_entity_exist(Local_58.f_116))
	{
		return true;
	}
	if (does_entity_exist(Local_58.f_66))
	{
		iVar0 = func_126();
		request_model(iVar0, false);
		if (Global_1051439->f_4653)
		{
			request_model(1546100104, false);
		}
		if (has_model_loaded(iVar0) && (!Global_1051439->f_4653 || has_model_loaded(1546100104)))
		{
			if (Global_1051439->f_4653)
			{
				Local_58.f_26 = { get_entity_coords(Local_58.f_66, true, false) + func_127(0.1f, 0f, -1.5f, get_entity_rotation(Local_58.f_66, 2)) };
			}
			else
			{
				Local_58.f_26 = { get_entity_coords(Local_58.f_66, true, false) + func_127(0.1f, 0f, -1.25f, get_entity_rotation(Local_58.f_66, 2)) };
			}
			Local_58.f_116 = create_object(iVar0, Local_58.f_26, false, true, false, false, true);
			freeze_entity_position(Local_58.f_116, true);
			set_entity_completely_disable_collision(Local_58.f_116, false, false);
			set_entity_rotation(Local_58.f_116, get_entity_rotation(Local_58.f_66, 2) + Vector(180f, 0f, 0f), 2, true);
			if (Global_1051439->f_4653)
			{
				Local_58.f_131 = create_object(1546100104, get_entity_coords(Local_58.f_66, true, false) + func_127(0.1f, 0f, -1.72f, get_entity_rotation(Local_58.f_66, 2)), false, true, false, false, true);
				freeze_entity_position(Local_58.f_131, true);
				set_entity_completely_disable_collision(Local_58.f_131, false, false);
				set_entity_rotation(Local_58.f_131, get_entity_rotation(Local_58.f_66, 2), 2, true);
			}
			set_entity_visible(Local_58.f_66, false);
			return true;
		}
		return false;
	}
	if (Local_58.f_65 == 0)
	{
		Local_58.f_65 = _0x6f3068258a499e52(Local_58.f_89, Local_58.f_26, 7);
	}
	else if (_0x1ff441d7954f8709(Local_58.f_65))
	{
		Local_58.f_66 = _0x4735e2a4bb83d9da(Local_58.f_65);
	}
	return false;
}

bool func_50()
{
	if (!Global_1051439->f_4653)
	{
		return true;
	}
	if (!_does_anim_scene_exist(Local_58.f_232))
	{
		Local_58.f_232 = _create_anim_scene("lightrig_mp@photo@photo_studio", 2, 0, false, true);
	}
	else if (!_is_anim_scene_loaded(Local_58.f_232, true, false))
	{
		load_anim_scene(Local_58.f_232);
	}
	else if (!_is_anim_scene_metadata_loaded(Local_58.f_232, false))
	{
	}
	else
	{
		if (!_is_anim_scene_started(Local_58.f_232, false))
		{
			set_anim_scene_origin(Local_58.f_232, Local_58.f_26, get_entity_rotation(Local_58.f_66, 2), 2);
			start_anim_scene(Local_58.f_232);
		}
		return true;
	}
	return false;
}

void func_51()
{
	if (!Global_1051439->f_4653 || Local_58.f_234)
	{
		return;
	}
	_0xdf7b5144e25cd3fe(Local_58.f_232, func_128(Local_560[participant_id_to_int()]->f_7));
	if (_0x23e33cb9f4a3f547(Local_58.f_232, func_128(Local_560[participant_id_to_int()]->f_7)))
	{
		if (Local_58.f_233 != 0)
		{
			set_anim_scene_bool(Local_58.f_232, func_129(Local_58.f_233), false, false);
		}
		_set_anim_scene_playback_list_bool(Local_58.f_232, func_128(Local_560[participant_id_to_int()]->f_7), true);
		Local_58.f_234 = 1;
	}
}

bool func_52(bool bParam0)
{
	if (Global_1051439->f_4653)
	{
		iVar8 = -1;
		bVar9 = true;
		if ((Local_58.f_118 == 5 || Local_58.f_118 == 3) || Local_58.f_118 == 4)
		{
			iVar10 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
			if (network_is_player_active(iVar10) && network_is_player_a_participant(iVar10))
			{
				iVar11 = network_get_participant_index(iVar10);
				if (Local_560[iVar11] && (Local_560[iVar11]->f_8 != Local_560[participant_id_to_int()]->f_8 || Local_560[iVar11]->f_9 != Local_560[participant_id_to_int()]->f_9))
				{
					func_130(0);
				}
			}
		}
		switch (Local_58.f_118)
		{
			case 0:
				Local_560[participant_id_to_int()]->f_10 = 2;
				if (!Local_58.f_114)
				{
					return false;
				}
				if (Local_560[participant_id_to_int()]->f_4 > 0)
				{
					iVar3 = 0;
					while (iVar3 < 7)
					{
						if (is_bit_set(Local_560[participant_id_to_int()]->f_4, iVar3))
						{
							bVar9 = true;
							if (!network_has_control_of_network_id(&(Local_470.f_44[iVar3])))
							{
								network_request_control_of_network_id(&(Local_470.f_44[iVar3]));
								bVar9 = false;
							}
							iVar4 = 0;
							while (iVar4 < 7)
							{
								if ((network_does_network_id_exist(&(Local_470.f_12[iVar4])) && func_78(&(Local_470.f_20[iVar4])) == &Local_470.f_74[iVar3]) && !network_has_control_of_network_id(&(Local_470.f_12[iVar4])))
								{
									network_request_control_of_network_id(&(Local_470.f_12[iVar4]));
									bVar9 = false;
								}
								iVar4++;
							}
							if (!bVar9)
							{
							}
							else
							{
								iVar0 = net_to_ped(&(Local_470.f_44[iVar3]));
								delete_ped(&iVar0);
								iVar4 = 0;
								while (iVar4 < 7)
								{
									if (network_does_network_id_exist(&(Local_470.f_12[iVar4])) && func_78(&(Local_470.f_20[iVar4])) == &Local_470.f_74[iVar3])
									{
										if (is_entity_a_ped(net_to_ent(&(Local_470.f_12[iVar4]))))
										{
											iVar2 = net_to_ped(&(Local_470.f_12[iVar4]));
											delete_ped(&iVar2);
										}
										else
										{
											iVar1 = net_to_obj(&(Local_470.f_12[iVar4]));
											delete_object(&iVar1);
										}
										Local_470.f_12[iVar4] = 0;
										Local_470.f_20[iVar4] = 0;
									}
									iVar4++;
								}
								clear_bit(&(Local_560[participant_id_to_int()]->f_4), iVar3);
							}
						}
						iVar3++;
					}
					if (Local_560[participant_id_to_int()]->f_4 > 0)
					{
						return false;
					}
				}
				iVar5 = 0;
				while (iVar5 < 7)
				{
					iVar6 = int_to_participantindex(iVar5);
					if (iVar6 == participant_id())
					{
					}
					else if ((network_is_participant_active(iVar6) && Local_560[iVar5]) // PointerArith && ((Local_560[iVar5]->f_8 != Local_560[participant_id_to_int()]->f_8 || Local_560[iVar5]->f_9 != Local_560[participant_id_to_int()]->f_9) || Local_560[iVar5]->f_10 == 1))
					{
						return false;
					}
					iVar5++;
				}
				Local_58.f_128 = 0;
				func_130(2);
				return false;
			case 2:
				iVar0 = func_65();
				if (bParam0)
				{
					if (&Local_470.f_74[Local_560[participant_id_to_int()]->f_3] != 0)
					{
						Local_58.f_128 = 1;
						Local_560[participant_id_to_int()]->f_2 = &Local_470.f_74[Local_560[participant_id_to_int()]->f_3];
						Local_560[participant_id_to_int()]->f_10 = 4;
						func_130(3);
						return false;
					}
					else if (Local_58.f_115 > 0)
					{
						Local_560[participant_id_to_int()]->f_2 = Local_58.f_115;
					}
				}
				else
				{
					_0x7e300b5b86ab1d1a(&(Local_58.f_96), 7, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					iVar7 = 0;
					iVar5 = 0;
					while (iVar5 < 7)
					{
						if (Local_58.f_96[iVar5]->f_1 == network_hash_from_player_handle(player_id()))
						{
							Local_560[participant_id_to_int()]->f_2 = (iVar5 - iVar7) + 1;
							Jump @1010; //curOff = 975
						}
						else if (Local_58.f_96[iVar5]->f_1 == 0)
						{
							iVar7++;
						}
						iVar5++;
					}
				}
				Local_560[participant_id_to_int()]->f_10 = 3;
				func_130(1);
				return false;
			case 1:
				if (Local_470.f_3 == Local_560[participant_id_to_int()]->f_3 && Local_470.f_2 == 3)
				{
					Local_560[participant_id_to_int()]->f_10 = 4;
					func_130(3);
				}
				return false;
			case 3:
				if (Local_560[participant_id_to_int()]->f_8 != 0)
				{
					if (network_does_network_id_exist(&(Local_470.f_4[Local_560[participant_id_to_int()]->f_3])))
					{
						iVar8 = _net_to_anim_scene(&(Local_470.f_4[Local_560[participant_id_to_int()]->f_3]));
					}
					else
					{
						Local_560[participant_id_to_int()]->f_10 = 3;
						func_130(1);
					}
					if (_is_anim_scene_started(iVar8, false))
					{
						Local_560[participant_id_to_int()]->f_10 = 0;
						func_130(5);
					}
				}
				else if (!Local_58.f_128)
				{
					if (!Local_58.f_114)
					{
						return false;
					}
					iVar0 = func_65();
					clear_ped_tasks_immediately(iVar0, false, true);
					func_130(4);
				}
				else
				{
					Local_560[participant_id_to_int()]->f_10 = 0;
					func_130(5);
				}
				return false;
			case 4:
				if (!Local_58.f_114)
				{
					return false;
				}
				iVar0 = func_65();
				func_79(iVar0, _get_object_offset_from_coords(Local_58.f_10, Local_58.f_13, func_131((Local_560[participant_id_to_int()]->f_2 - 1))), Local_58.f_13, 0, 1073741824);
				freeze_entity_position(iVar0, true);
				set_entity_completely_disable_collision(iVar0, false, false);
				set_entity_visible(iVar0, true);
				remove_all_ped_weapons(iVar0, true, true);
				func_77(get_player_ped(player_id()), iVar0);
				Local_560[participant_id_to_int()]->f_10 = 0;
				func_130(5);
				return false;
			case 5:
				if (Local_560[participant_id_to_int()]->f_8 == 0)
				{
					iVar5 = 0;
					while (iVar5 < 7)
					{
						iVar6 = int_to_participantindex(iVar5);
						if (iVar6 == participant_id())
						{
						}
						else if ((network_is_participant_active(iVar6) && Local_560[iVar5]) // PointerArith && Local_560[iVar5]->f_10 != 0)
						{
							return false;
						}
						iVar5++;
					}
				}
				func_79(Global_34, Local_58.f_10, Local_58.f_13, 0, 1073741824);
				freeze_entity_position(Global_34, true);
				set_entity_completely_disable_collision(Global_34, false, false);
				set_entity_visible(Global_34, false);
				func_130(0);
				break;
		}
	}
	else
	{
		func_99(1, 1, 0, 0);
		func_79(Global_34, Local_58.f_10, Local_58.f_13, 0, 1073741824);
		freeze_entity_position(Global_34, true);
		set_entity_completely_disable_collision(Global_34, false, false);
	}
	return true;
}

void func_53()
{
	if (Global_1051439->f_72[18]->f_18 == 12)
	{
		create_model_hide(-814.042f, -1374.27f, 44.941f, 2f, -899803912, false);
		create_model_hide(-814.042f, -1374.27f, 44.941f, 2f, 1866258194, false);
		create_model_hide(-814.042f, -1374.27f, 44.941f, 2f, -1313455184, false);
	}
	else if (Global_1051439->f_72[18]->f_18 == 60)
	{
		create_model_hide(2734.165f, -1119.711f, 50.122f, 2f, 561132976, false);
		create_model_hide(2734.165f, -1119.711f, 50.122f, 2f, -1392495588, false);
		create_model_hide(2734.165f, -1119.711f, 50.122f, 2f, 1333110032, false);
	}
}

void func_54()
{
	Local_58.f_52 = _get_first_entity_ped_is_carrying(Global_34);
	if (Local_58.f_52 != 0)
	{
		_0xed00d72f81cf7278(Local_58.f_52, 0, 0);
		_set_entity_coords_and_heading(Local_58.f_52, Local_58.f_18, Local_58.f_21, true, false, true);
	}
}

void func_55()
{
	if (!animpostfx_is_running(Local_58.f_75))
	{
		animpostfx_play(Local_58.f_75);
	}
}

void func_56(bool bParam0)
{
	if (Global_1051439->f_72[18]->f_18 == 12)
	{
		iVar0 = get_interior_at_coords(-814.042f, -1374.27f, 44.941f);
		sVar1 = "bla_photo_LightBoxPortrait";
	}
	else if (Global_1051439->f_72[18]->f_18 == 60)
	{
		return;
	}
	if (is_valid_interior(iVar0) && is_interior_ready(iVar0))
	{
		if (bParam0)
		{
			if (!is_interior_entity_set_active(iVar0, sVar1))
			{
				activate_interior_entity_set(iVar0, sVar1, 0);
			}
		}
		else if (is_interior_entity_set_active(iVar0, sVar1))
		{
			deactivate_interior_entity_set(iVar0, sVar1, true);
		}
	}
}

void func_57(int iParam0)
{
	clear_facial_idle_anim_override(func_65());
	set_facial_idle_anim_override(func_65(), &(Local_58.f_68[iParam0]), Local_58.f_78);
}

void func_58()
{
	_0xa42edf1e88734a7e();
	Local_19.f_1 = 1;
}

void func_59()
{
	if (_0x8b25a18e390f75bf(Local_58.f_51) != 1527430303)
	{
		add_entity_to_audio_mix_group(Local_58.f_51, "MP007_PhotoStudio_Photographer", 0f);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Local_470.f_44[iVar0] != 0)
		{
			iVar1 = net_to_ent(&(Local_470.f_44[iVar0]));
			if (_0x8b25a18e390f75bf(iVar1) != -1899314680)
			{
				add_entity_to_audio_mix_group(iVar1, "MP007_PhotoStudio_Subjects", 0f);
			}
		}
		iVar0++;
	}
	func_132("PhotoMode", "MP007_PhotoStudio_Sceneset");
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1 || !func_76(uParam0))
	{
		func_133(uParam0);
	}
}

void func_61()
{
	func_134("PoseTransition", "MP007_PhotoStudio_Sceneset");
}

int func_62(var uParam0)
{
	if (!func_76(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_135(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_136() - round((uParam0->f_1 * 1000f)));
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_64()
{
	func_134("PhotoMode", "MP007_PhotoStudio_Sceneset");
}

int func_65()
{
	iVar0 = Global_34;
	if (Local_58.f_114)
	{
		iVar0 = net_to_ped(&(Local_470.f_44[Local_560[participant_id_to_int()]->f_3]));
	}
	return iVar0;
}

void func_66()
{
	bVar0 = _0x424b17a7dc5c90bc(player_id());
	if (!Local_58.f_31)
	{
		func_137(&(Local_58.f_40), 1, 1);
		func_137(&(Local_58.f_41), 1, 1);
		func_137(&(Local_58.f_42), 1, 1);
		func_137(&(Local_58.f_43), 1, 1);
		func_137(&(Local_58.f_44), 1, 1);
		func_137(&(Local_58.f_45), 1, 1);
		func_137(&(Local_58.f_46), 1, 1);
		func_137(&(Local_58.f_47), 1, 1);
		func_137(&(Local_58.f_49), 1, 1);
		if (Global_1051439->f_4653)
		{
			if (!func_138(Local_58.f_32))
			{
				Local_58.f_32 = func_139("PHOTO_STUDIO_CHANGE_POSE", -1384133541, 1710877787, 0);
				func_140(Local_58.f_32, 4, 1, 0);
				func_140(Local_58.f_32, 2, 1, 0);
			}
			func_141(Local_58.f_32, (Global_1051439->f_4653.f_4 > 1 && bVar0), 1, 1);
			if (Local_58.f_405 > 0)
			{
				if (!func_138(Local_58.f_33))
				{
					Local_58.f_33 = func_139("PHOTO_STUDIO_CHANGE_VARIANT", -875187602, 285921746, 0);
					func_140(Local_58.f_33, 4, 1, 0);
					func_140(Local_58.f_33, 2, 1, 0);
				}
				func_141(Local_58.f_33, (Global_1051439->f_4653.f_4 > 1 && bVar0), 1, 1);
			}
			else
			{
				func_137(&(Local_58.f_33), 1, 1);
			}
		}
		if (!func_138(Local_58.f_36))
		{
			Local_58.f_36 = func_139("PHOTO_STUDIO_CHANGE_EXPRESSION", -1860390754, 1141111167, 0);
			func_140(Local_58.f_36, 4, 1, 0);
			func_140(Local_58.f_36, 2, 1, 0);
		}
		else
		{
			func_141(Local_58.f_36, 1, 1, 1);
		}
		if (!func_138(Local_58.f_34))
		{
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < Local_58.f_231)
			{
				if (iVar3 == Local_58.f_129)
				{
					if (bVar1)
					{
						Local_58.f_60 = -763919645;
					}
					else
					{
						Local_58.f_60 = -39308912;
					}
					iVar2 = iVar3;
				}
				else if (func_38(&(Local_58.f_132[iVar3]), func_37(Local_58.f_130)))
				{
					bVar1 = false;
					iVar2 = iVar3;
				}
				iVar3++;
			}
			Local_58.f_61 = 1;
			if (Local_58.f_129 == iVar2)
			{
				if (Local_58.f_60 == -763919645)
				{
					Local_58.f_61 = 0;
				}
				else
				{
					Local_58.f_60 = -1882188328;
				}
			}
			Local_58.f_34 = func_142("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_58.f_60, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_140(Local_58.f_34, 4, 1, 0);
		}
		func_141(Local_58.f_34, ((!Global_1051439->f_4653 || bVar0) && Local_58.f_61), 1, 1);
		if (!func_138(Local_58.f_35))
		{
			Local_58.f_35 = func_142("PHOTO_STUDIO_CHANGE_BACKGROUND_SET", 1301263553, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_140(Local_58.f_35, 4, 1, 0);
		}
		func_141(Local_58.f_35, (!Global_1051439->f_4653 || bVar0), 1, 1);
		if (!func_138(Local_58.f_37))
		{
			Local_58.f_37 = func_142("PHOTO_STUDIO_QUIT", 814057702, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_140(Local_58.f_37, 4, 1, 0);
			func_140(Local_58.f_37, 2, 1, 0);
		}
		else
		{
			func_141(Local_58.f_37, 1, 1, 1);
		}
		if (!func_138(Local_58.f_39))
		{
			Local_58.f_39 = func_142("PHOTO_STUDIO_GALLERY", -711536720, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_140(Local_58.f_39, 4, 1, 0);
			func_140(Local_58.f_39, 2, 1, 0);
		}
		else
		{
			func_141(Local_58.f_39, 1, 1, 1);
		}
	}
	else
	{
		func_137(&(Local_58.f_32), 1, 1);
		func_137(&(Local_58.f_33), 1, 1);
		func_137(&(Local_58.f_36), 1, 1);
		func_137(&(Local_58.f_34), 1, 1);
		func_137(&(Local_58.f_35), 1, 1);
		func_137(&(Local_58.f_37), 1, 1);
		func_137(&(Local_58.f_39), 1, 1);
		func_143(&(Local_58.f_40), &(Local_58.f_41), 0);
		func_143(&(Local_58.f_42), &(Local_58.f_43), 3);
		func_143(&(Local_58.f_44), &(Local_58.f_45), 2);
		func_143(&(Local_58.f_46), &(Local_58.f_47), 1);
		if (!func_138(Local_58.f_49))
		{
			Local_58.f_49 = func_142("EMOTE_PERFORM_ACTION", 331623346, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_140(Local_58.f_49, 13, 1, 1);
			func_140(Local_58.f_49, 10, 1, 1);
			func_140(Local_58.f_49, 14, 1, 1);
			func_140(Local_58.f_49, 4, 1, 0);
			func_140(Local_58.f_49, 2, 1, 0);
			func_141(Local_58.f_49, 0, 1, 1);
			func_144(Local_58.f_49, 0, 1);
		}
	}
	if (!Global_1051439->f_4653 || Local_560[participant_id_to_int()]->f_8 == 0)
	{
		if (!func_138(Local_58.f_50))
		{
			Local_58.f_50 = func_142("NET_INTERACT_OPTION_EMOTE", -491432029, 2, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_140(Local_58.f_50, 4, 1, 0);
			func_140(Local_58.f_50, 2, 1, 0);
		}
	}
	else
	{
		func_137(&(Local_58.f_50), 1, 1);
	}
	if (!func_138(Local_58.f_38))
	{
		Local_58.f_38 = func_142("PHOTO_STUDIO_TAKE_PHOTO", -1053137564, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_145(Local_58.f_38, "PHOTO_STUDIO_TAKE_PHOTO", (to_float(500) / 100f), 2, 1);
		func_140(Local_58.f_38, 2, 1, 0);
	}
	if (func_146())
	{
		func_141(Local_58.f_38, 1, 1, 1);
	}
	else
	{
		func_141(Local_58.f_38, 0, 1, 1);
	}
}

void func_67()
{
	bVar1 = _0x424b17a7dc5c90bc(player_id());
	_0x2804658eb7d8a50b(4, -74730614);
	if (func_138(Local_58.f_32))
	{
		bVar0 = (Global_1051439->f_4653.f_4 > 1 && bVar1);
		bVar0 = (bVar0 && Global_1051439->f_4653.f_7 == 5);
		if (func_147(Local_58.f_32, 0) != bVar0)
		{
			func_141(Local_58.f_32, bVar0, 1, 1);
		}
		if (func_148(Local_58.f_32, 0, 1))
		{
			Local_58.f_252 = (Local_58.f_252 - 1);
			func_149("change_pose", "RDRO_Photo_Shop_Sounds", 1);
			Local_58.f_62 = 1;
			func_42(8);
			func_150();
			func_151();
			return;
		}
		else if (func_148(Local_58.f_32, 1, 1))
		{
			Local_58.f_252++;
			func_149("change_pose", "RDRO_Photo_Shop_Sounds", 1);
			Local_58.f_62 = 0;
			func_42(8);
			func_150();
			func_151();
			return;
		}
		if (func_138(Local_58.f_33))
		{
			if (func_147(Local_58.f_33, 0) != bVar0)
			{
				func_141(Local_58.f_33, bVar0, 1, 1);
			}
			if (func_148(Local_58.f_33, 0, 1))
			{
				Local_58.f_404 = (Local_560[participant_id_to_int()]->f_9 - 1);
				func_149("change_pose_variation", "RDRO_Photo_Shop_Sounds", 1);
				Local_58.f_62 = 1;
				func_42(8);
				func_150();
				func_151();
				return;
			}
			else if (func_148(Local_58.f_33, 1, 1))
			{
				Local_58.f_404 = Local_560[participant_id_to_int()]->f_9 + 1;
				func_149("change_pose_variation", "RDRO_Photo_Shop_Sounds", 1);
				Local_58.f_62 = 0;
				func_42(8);
				func_150();
				func_151();
				return;
			}
		}
	}
	if (func_138(Local_58.f_36))
	{
		if (func_148(Local_58.f_36, 0, 1))
		{
			func_149("dpad_up", "RDRO_Photo_Shop_Sounds", 1);
			Local_58.f_63 = 1;
			func_42(9);
			func_151();
			return;
		}
		else if (func_148(Local_58.f_36, 1, 1))
		{
			func_149("dpad_down", "RDRO_Photo_Shop_Sounds", 1);
			Local_58.f_63 = 0;
			func_42(9);
			func_151();
			return;
		}
	}
	if (func_138(Local_58.f_38))
	{
		if (func_146())
		{
			if (!func_147(Local_58.f_38, 0))
			{
				func_141(Local_58.f_38, 1, 1, 1);
			}
		}
		if (func_152(Local_58.f_38, 1))
		{
			if (Global_1051439->f_4653.f_7 == 6)
			{
				_0xbdfeeb7600bcd938(func_65());
				Local_58.f_48 = 0;
			}
			func_42(13);
			func_151();
			if (Local_19.f_7 < Local_19.f_8)
			{
				Local_58.f_410 = 1;
			}
			else
			{
				Local_58.f_410 = 0;
			}
		}
		if (is_disabled_control_just_pressed(2, func_153(Local_58.f_38)))
		{
			if (!func_154(500))
			{
				func_155("SHOP_H_TOO_POOR_PH", 10000, 0, 0, 0, 1);
				func_149("UNAFFORDABLE", "HUD_SHOP_SOUNDSET", 1);
			}
			else if (Global_1051439->f_4653 && Global_1051439->f_4653.f_4 <= 1)
			{
				func_155("PHOTO_REQUIRE_MORE_POSSE", 10000, 0, 0, 0, 1);
			}
		}
	}
	if (func_138(Local_58.f_37))
	{
		if (func_156(Local_58.f_37, 1) == 1f)
		{
			func_42(15);
			func_151();
		}
	}
	if (func_138(Local_58.f_34))
	{
		bVar0 = (!Global_1051439->f_4653 || bVar1);
		bVar0 = (bVar0 && Global_1051439->f_4653.f_7 == 5);
		bVar0 = (bVar0 && Local_58.f_61);
		if (func_147(Local_58.f_34, 0) != bVar0)
		{
			func_141(Local_58.f_34, bVar0, 1, 1);
		}
		if (func_157())
		{
			func_151();
			func_158();
			func_149("Backdrop_Move", "RDRO_Photo_Shop_Sounds", 1);
			func_42(11);
		}
	}
	if (func_138(Local_58.f_35))
	{
		bVar0 = (!Global_1051439->f_4653 || bVar1);
		bVar0 = (bVar0 && Global_1051439->f_4653.f_7 == 5);
		if (func_147(Local_58.f_35, 0) != bVar0)
		{
			func_141(Local_58.f_35, bVar0, 1, 1);
		}
		if (func_159())
		{
			func_151();
			func_158();
			if (Global_1051439->f_4653)
			{
				if (Local_560[participant_id_to_int()]->f_6 == 2)
				{
					func_149("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
				}
				else
				{
					func_149("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
				}
			}
			else if (Local_58.f_250 == 2)
			{
				func_149("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
			}
			else
			{
				func_149("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
			}
			func_42(12);
		}
	}
	if (func_138(Local_58.f_50))
	{
		bVar0 = Global_1051439->f_4653.f_7 == 5;
		if (func_147(Local_58.f_50, 0) != bVar0)
		{
			func_141(Local_58.f_50, bVar0, 1, 1);
		}
		if (func_152(Local_58.f_50, 1))
		{
			func_149("bumper_right", "RDRO_Photo_Shop_Sounds", 1);
			Local_58.f_31 = !Local_58.f_31;
			func_66();
			if (Local_58.f_31)
			{
				func_160(Local_58.f_50, "NET_INTERACT_OPTION_EMOTE_PARENT", 1);
			}
			else
			{
				func_160(Local_58.f_50, "NET_INTERACT_OPTION_EMOTE", 1);
			}
		}
	}
	func_161(Local_58.f_40, Local_58.f_41, 0);
	func_161(Local_58.f_42, Local_58.f_43, 3);
	func_161(Local_58.f_44, Local_58.f_45, 2);
	func_161(Local_58.f_46, Local_58.f_47, 1);
	if (func_138(Local_58.f_49))
	{
		if (func_162(Local_58.f_49, 1))
		{
			_0x6a1af481407bf6e9(func_65());
		}
	}
	if (func_138(Local_58.f_39))
	{
		if (!func_74(1))
		{
			if (func_156(Local_58.f_39, 1) == 1f)
			{
				func_163();
				func_151();
				func_42(10);
			}
		}
	}
}

bool func_68(int iParam0)
{
	if (!func_76(&(Local_58.f_54)))
	{
		func_60(&(Local_58.f_54), 0);
	}
	else if (func_62(&(Local_58.f_54)) > iParam0)
	{
		func_63(&(Local_58.f_54));
		return true;
	}
	return false;
}

void func_69()
{
	if (Local_58.f_63 == 1)
	{
		Local_58.f_29++;
		if (Local_58.f_29 > 5)
		{
			Local_58.f_29 = 0;
		}
		func_57(Local_58.f_29);
	}
	else if (Local_58.f_63 == 0)
	{
		Local_58.f_29 = (Local_58.f_29 - 1);
		if (Local_58.f_29 < 0)
		{
			Local_58.f_29 = 5;
		}
		func_57(Local_58.f_29);
	}
}

bool func_70()
{
	if (!does_entity_exist(Local_58.f_117))
	{
		if (Global_1051439->f_4653)
		{
			iVar0 = Local_560[participant_id_to_int()]->f_5;
		}
		else
		{
			iVar0 = Local_58.f_249;
		}
		request_model(iVar0, false);
		if (!has_model_loaded(iVar0))
		{
			return false;
		}
		Local_58.f_117 = create_object(iVar0, Local_58.f_26, false, true, false, false, true);
		freeze_entity_position(Local_58.f_117, true);
		set_entity_completely_disable_collision(Local_58.f_117, false, false);
		set_entity_rotation(Local_58.f_117, get_entity_rotation(Local_58.f_116, 2), 2, true);
	}
	if (Global_1051439->f_4653)
	{
		iVar1 = Local_560[participant_id_to_int()]->f_6;
	}
	else
	{
		iVar1 = Local_58.f_250;
	}
	if (iVar1 == 0)
	{
		fVar2 = (1f - Local_58.f_67);
	}
	else
	{
		fVar2 = (Local_58.f_67 + 1f);
	}
	if (fVar2 <= 0.15f)
	{
		fVar3 = (fVar2 / 0.125f);
	}
	else if (fVar2 >= 0.85f)
	{
		fVar3 = ((1f - fVar2) / 0.125f);
	}
	else
	{
		fVar3 = 1f;
	}
	if (fVar3 < 0.05f)
	{
		fVar3 = 0.05f;
	}
	if (iVar1 == 0)
	{
		Local_58.f_67 = (Local_58.f_67 + ((fVar3 * 0.6f) * timestep()));
	}
	else
	{
		Local_58.f_67 = (Local_58.f_67 + (((fVar3 * 0.6f) * -1f) * timestep()));
	}
	if ((iVar1 == 0 && Local_58.f_67 >= 1f) || (iVar1 == 1 && Local_58.f_67 <= -1f))
	{
		if (does_entity_exist(Local_58.f_116))
		{
			set_entity_coords(Local_58.f_117, Local_58.f_26, true, false, true, true);
			delete_object(&(Local_58.f_116));
		}
		if (!Global_1051439->f_4653 || Local_58.f_234)
		{
			Local_58.f_67 = 0f;
			Local_58.f_116 = Local_58.f_117;
			Local_58.f_117 = 0;
			if (Global_1051439->f_4653)
			{
				Global_1051439->f_4653.f_6 = Local_560[participant_id_to_int()]->f_5;
			}
			else
			{
				Global_1051439->f_4653.f_6 = Local_58.f_249;
			}
			return true;
		}
	}
	else
	{
		get_model_dimensions(Local_58.f_89, &vVar4, &vVar7);
		vVar10 = { 0f, 0f, Local_58.f_67 };
		if (iVar1 == 0)
		{
			vVar13 = { vVar10 - Vector(1f, 0f, 0f) };
		}
		else
		{
			vVar13 = { vVar10 + Vector(1f, 0f, 0f) };
		}
		if (fVar2 < 0.5f)
		{
			func_51();
		}
		vVar10 = { vVar10 * FtoV(absf((vVar7.z - vVar4.z))) };
		vVar13 = { vVar13 * FtoV(absf((vVar7.z - vVar4.z))) };
		set_entity_coords(Local_58.f_116, Local_58.f_26 + vVar10, true, false, false, true);
		set_entity_coords(Local_58.f_117, Local_58.f_26 + vVar13, true, false, false, true);
		force_room_for_entity(Local_58.f_116, get_interior_from_entity(Global_34), get_room_key_from_entity(Global_34));
		force_room_for_entity(Local_58.f_117, get_interior_from_entity(Global_34), get_room_key_from_entity(Global_34));
	}
	return false;
}

bool func_71()
{
	if (!does_entity_exist(Local_58.f_117))
	{
		if (!func_76(&(Local_58.f_406)))
		{
			if (Global_1051439->f_4653)
			{
				if (Local_560[participant_id_to_int()]->f_6 == 2)
				{
					animpostfx_play("CameraTransitionWipe_L");
				}
				else
				{
					animpostfx_play("CameraTransitionWipe_R");
				}
			}
			else if (Local_58.f_250 == 2)
			{
				animpostfx_play("CameraTransitionWipe_L");
			}
			else
			{
				animpostfx_play("CameraTransitionWipe_R");
			}
			func_60(&(Local_58.f_406), 0);
		}
		if (Global_1051439->f_4653)
		{
			iVar0 = Local_560[participant_id_to_int()]->f_5;
		}
		else
		{
			iVar0 = Local_58.f_249;
		}
		request_model(iVar0, false);
		if (has_model_loaded(iVar0) && func_62(&(Local_58.f_406)) > 250)
		{
			Local_58.f_117 = create_object(iVar0, Local_58.f_26, false, true, false, false, true);
		}
		else
		{
			return false;
		}
		freeze_entity_position(Local_58.f_117, true);
		set_entity_completely_disable_collision(Local_58.f_117, false, false);
		set_entity_rotation(Local_58.f_117, get_entity_rotation(Local_58.f_116, 2), 2, true);
		delete_object(&(Local_58.f_116));
	}
	func_51();
	if (!Global_1051439->f_4653 || Local_58.f_234)
	{
		if (func_76(&(Local_58.f_406)))
		{
			if (Global_1051439->f_4653)
			{
				if (Local_560[participant_id_to_int()]->f_6 == 2)
				{
					_0xc5cb91d65852ed7e("CameraTransitionWipe_L");
				}
				else
				{
					_0xc5cb91d65852ed7e("CameraTransitionWipe_R");
				}
			}
			else if (Local_58.f_250 == 2)
			{
				_0xc5cb91d65852ed7e("CameraTransitionWipe_L");
			}
			else
			{
				_0xc5cb91d65852ed7e("CameraTransitionWipe_R");
			}
			func_63(&(Local_58.f_406));
		}
		if (animpostfx_is_running("CameraTransitionWipe_R") || animpostfx_is_running("CameraTransitionWipe_L"))
		{
			return false;
		}
		Local_58.f_116 = Local_58.f_117;
		Local_58.f_117 = 0;
		if (Global_1051439->f_4653)
		{
			Global_1051439->f_4653.f_6 = Local_560[participant_id_to_int()]->f_5;
		}
		else
		{
			Global_1051439->f_4653.f_6 = Local_58.f_249;
		}
		return true;
	}
	return false;
}

void func_72(int iParam0)
{
	Local_19.f_22 = (Local_19.f_22 || iParam0);
}

void func_73()
{
	if (!animpostfx_is_running(Local_58.f_77))
	{
		animpostfx_play(Local_58.f_77);
	}
	func_149("Camera_Flash", "RDRO_Photo_Shop_Sounds", 1);
	Local_58.f_57 = 1;
}

bool func_74(int iParam0)
{
	return (Local_19.f_22 && iParam0) != 0;
}

void func_75(int iParam0)
{
	Local_470.f_44[iParam0] = 0;
	Local_470.f_28[iParam0] = 0;
	Local_470.f_36[iParam0] = 0;
	Local_470.f_74[iParam0] = 0;
	Local_470.f_82[iParam0] = 0;
	func_63(Local_470.f_52[iParam0]);
}

bool func_76(var uParam0)
{
	return func_164(*uParam0, 1);
}

void func_77(int iParam0, int iParam1)
{
	func_165(iParam0, iParam1);
	if (get_current_ped_weapon(iParam0, &iVar0, false, 2, false))
	{
		if (iVar0 != -1569615261)
		{
			set_current_ped_weapon(iParam1, iVar0, true, 2, false, false);
		}
	}
	if (get_current_ped_weapon(iParam0, &iVar0, false, 4, false))
	{
		if (iVar0 != -1569615261)
		{
			set_current_ped_weapon(iParam1, iVar0, true, 4, false, false);
		}
	}
}

int func_78(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iParam0 = (iParam0 % 7);
	if (iParam0 == 0)
	{
		return 7;
	}
	return iParam0;
}

void func_79(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_166(Global_34) && is_player_teleport_active())
	{
	}
	if (func_167(iParam0))
	{
		if (func_168(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_169(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_79(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_79(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_169(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_169(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_169(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_169(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_169(iParam5, 129))
	{
		if (func_169(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		_set_entity_coords_and_heading_no_offset(iParam0, vParam1, fParam4, func_169(iParam5, 32), true);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_169(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_169(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_167(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_169(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_34 && !func_169(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_80()
{
	Var0 = &Global_1915715->f_20346[18];
	Var0.f_2 = 350029031;
	Var0.f_3 = Local_58.f_253;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -1793904784;
		Var0.f_3 = -1495475299;
		_0x951327435dc5164b(&(Local_58.f_254), &Var0);
		Var5 = &Global_1915715->f_20346[18];
		iVar10 = 0;
		Var0.f_2 = 843957109;
		if (_datafile_get_data_node_index(&(Var5.f_1), &Var0))
		{
			iVar10 = _datafile_get_num_children(Var5, Var5.f_1);
		}
		iVar11 = 0;
		while (iVar11 < 7)
		{
			Local_58.f_270[iVar11] = 0;
			Local_58.f_270[iVar11]->f_17 = 0;
			iVar11++;
		}
		Local_58.f_405 = 0;
		if (iVar10 > 0)
		{
			iVar11 = 0;
			while (iVar11 < iVar10)
			{
				func_170(&Var0, iVar11, iVar11);
				iVar11++;
			}
		}
		Var12 = &Global_1915715->f_20346[18];
		iVar17 = 0;
		Var0.f_2 = 1707208274;
		if (_datafile_get_data_node_index(&(Var12.f_1), &Var0))
		{
			iVar17 = _datafile_get_num_children(Var12, Var12.f_1);
		}
		Local_58.f_405 = (Local_58.f_405 + iVar17);
		if (iVar17 > 0)
		{
			Var0.f_2 = -882970998;
			Var0.f_3 = Local_58.f_404;
			if (_datafile_get_data_node_index(&(Var12.f_1), &Var0))
			{
				Var12.f_2 = -1793904784;
				Var12.f_3 = -1208866095;
				if (_0x951327435dc5164b(&Var18, &Var12))
				{
					Local_58.f_254 = { Var18 };
				}
				iVar34 = 0;
				Var12.f_2 = 843957109;
				if (_datafile_get_data_node_index(&(Var5.f_1), &Var12))
				{
					iVar34 = _datafile_get_num_children(Var5, Var5.f_1);
				}
				if (iVar34 > 0)
				{
					iVar11 = 0;
					while (iVar11 < iVar34)
					{
						func_170(&Var12, iVar11, (iVar10 + iVar11));
						iVar11++;
					}
				}
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_81(int iParam0)
{
	Local_470.f_2 = iParam0;
}

struct<4> func_82(int iParam0)
{
	iVar4 = net_to_ped(&(Local_470.f_44[Local_560[iParam0]->f_3]));
	if (is_ped_male(iVar4))
	{
		StringCopy(&cVar0, "MP_MALE_0", 32);
	}
	else
	{
		StringCopy(&cVar0, "MP_FEMALE_0", 32);
	}
	StringIntConCat(&cVar0, Local_560[iParam0]->f_2, 32);
	return cVar0;
}

int func_83(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_171(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_84(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_85(int iParam0)
{
	if (!func_84(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_86()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

int func_87(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_172(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_173(iParam0))
	{
		return func_175(func_174(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_88(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_88(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_84(iParam0, 0))
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
		func_176(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_89(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_84(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_85(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_177(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_178(iParam0, 0);
	}
	if (func_179(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_102(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_180(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_102(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_90(bool bParam0)
{
	if (func_26() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_102(bParam0));
}

bool func_91(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_84(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_179(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_181(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_182(iParam0, bParam4, 0) };
	Var6 = { func_183(iParam0, Var1, Var1.f_4, bParam4) };
	return func_184(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_92(int iParam0)
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

int func_93(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_185(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_187(func_186(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_188(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_94(int iParam0, struct<17> Param1)
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

bool func_95(int iParam0, int iParam1)
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
	if (func_169(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_169(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_169(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_169(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_169(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_169(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_169(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_169(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_96()
{
	func_137(&(Local_58.f_34), 1, 1);
	func_137(&(Local_58.f_35), 1, 1);
	func_137(&(Local_58.f_32), 1, 1);
	func_137(&(Local_58.f_33), 1, 1);
	func_137(&(Local_58.f_36), 1, 1);
	func_137(&(Local_58.f_50), 1, 1);
	func_137(&(Local_58.f_38), 1, 1);
	func_137(&(Local_58.f_37), 1, 1);
	func_137(&(Local_58.f_39), 1, 1);
	func_137(&(Local_58.f_40), 1, 1);
	func_137(&(Local_58.f_41), 1, 1);
	func_137(&(Local_58.f_42), 1, 1);
	func_137(&(Local_58.f_43), 1, 1);
	func_137(&(Local_58.f_44), 1, 1);
	func_137(&(Local_58.f_45), 1, 1);
	func_137(&(Local_58.f_46), 1, 1);
	func_137(&(Local_58.f_47), 1, 1);
	func_137(&(Local_58.f_49), 1, 1);
}

void func_97()
{
	if (animpostfx_is_running(Local_58.f_75))
	{
		animpostfx_stop(Local_58.f_75);
	}
}

void func_98()
{
	if (_0x8b25a18e390f75bf(Local_58.f_51) == 1527430303)
	{
		remove_entity_from_audio_mix_group(Local_58.f_51, 0f);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Local_470.f_44[iVar0] != 0)
		{
			iVar1 = net_to_ent(&(Local_470.f_44[iVar0]));
			if (_0x8b25a18e390f75bf(iVar1) == -1899314680)
			{
				remove_entity_from_audio_mix_group(iVar1, 0f);
			}
		}
		iVar0++;
	}
	if (Local_58.f_411 != -1)
	{
		stop_stream(Local_58.f_411);
		Local_58.f_411 = -1;
	}
	func_189("MP007_PhotoStudio_Sceneset");
	_0x531a78d6bf27014b("RDRO_Photo_Shop_Sounds");
}

void func_99(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_26() != 0)
	{
		return;
	}
	iVar0 = player_id();
	if (bParam0)
	{
		if (!network_is_player_in_mp_cutscene(iVar0))
		{
			set_local_player_visible_in_cutscene(iParam1, iParam2, 256);
			Global_1051439->f_3727 = get_unique_int_for_player(iVar0);
			network_set_in_mp_cutscene(true, true, Global_1051439->f_3727, bParam3);
		}
	}
	else if (network_is_player_in_mp_cutscene(iVar0))
	{
		network_set_in_mp_cutscene(false, false, Global_1051439->f_3727, bParam3);
	}
}

bool func_100(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return false;
	}
	return true;
}

bool func_101(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_102(bool bParam0)
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

int func_103(int iParam0)
{
	return iParam0;
}

int func_104(int iParam0, int iParam1)
{
	if (!func_190(iParam0, 2))
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

void func_105()
{
	Local_19.f_24 = _0xb28894cd7408bd0c();
	if (Local_19.f_24 == 1)
	{
	}
	if (Local_19.f_24 == 0)
	{
		Local_19 = false;
		Local_19.f_7 = _0x78c56b8a7b1d000c();
		Local_19.f_8 = _0x8e587fcd30e05592();
		Local_19.f_9 = _databinding_add_data_container_from_path("", "playerCamera");
		Local_19.f_10 = _databinding_add_data_string(Local_19.f_9, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		func_106();
		Local_19.f_1 = 0;
		Local_19.f_2 = 1;
		Local_19.f_21 = get_game_timer();
	}
	else if (Local_19.f_24 == 2)
	{
		Local_19 = true;
		Local_19.f_9 = _databinding_add_data_container_from_path("", "playerCamera");
		Local_19.f_10 = _databinding_add_data_string(Local_19.f_9, "cameraRollCapacityLabel", "failed/failed");
		func_191();
		Local_19.f_1 = 0;
		Local_19.f_2 = 0;
	}
}

void func_106()
{
	StringCopy(&(Local_19.f_11), "", 32);
	_int_to_string(Local_19.f_7, "%i", &(Local_19.f_11));
	StringConCat(&(Local_19.f_11), " / ", 32);
	StringCopy(&(Local_19.f_15), "", 32);
	_int_to_string(Local_19.f_8, "%i", &(Local_19.f_15));
	StringConCat(&(Local_19.f_11), &(Local_19.f_15), 32);
	_databinding_write_data_string(Local_19.f_10, &(Local_19.f_11));
}

void func_107(int iParam0)
{
	Local_19.f_23 = iParam0;
}

var func_108(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

int func_109()
{
	return Global_1893587->f_2;
}

bool func_110(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_111(int iParam0)
{
	if (!func_110(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return (*Global_1887339)[iParam0]->f_23;
}

int func_112()
{
	return _get_water_map_zone_at_coords(Global_35);
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return "WATER_AURORA_BASIN";
		case 795414694:
			return "WATER_BARROW_LAGOON";
		case -557290573:
			return "WATER_BAYOU_NWA";
		case 650214731:
			return "WATER_BEARTOOTH_BECK";
		case -1073312073:
			return "WATER_CAIRN_LAKE";
		case 231313522:
			return "WATER_CALUMET_RAVINE";
		case -804804953:
			return "WATER_CATTAIL_POND";
		case 370072007:
			return "WATER_DAKOTA_RIVER";
		case 1245451421:
			return "WATER_DEADBOOT_CREEK";
		case 469159176:
			return "WATER_DEWBERRY_CREEK";
		case -105598602:
			return "WATER_ELYSIAN_POOL";
		case -1356490953:
			return "WATER_FLAT_IRON";
		case -1276586360:
			return "WATER_HAWKS_EYE_CREEK";
		case 1755369577:
			return "WATER_HEARTLANDS_OVERFLOW";
		case 1175365009:
			return "WATER_HOT_SPRINGS";
		case -1229593481:
			return "WATER_KAMASSA_RIVER";
		case -1369817450:
			return "WATER_LAKE_DON_JULIO";
		case 592454541:
			return "WATER_LAKE_ISABELLA";
		case -2040708515:
			return "WATER_LANNACHECHEE_RIVER";
		case -1410384421:
			return "WATER_LITTLE_CREEK_RIVER";
		case -1308233316:
			return "WATER_LOWER_MONTANA_RIVER";
		case 301094150:
			return "WATER_MATTLOCK_POND";
		case -811730579:
			return "WATER_MOONSTONE_POND";
		case -1817904483:
			return "WATER_OCREAGHS_RUN";
		case -1300497193:
			return "WATER_OWANJILA";
		case 2005774838:
			return "WATER_RINGNECK_CREEK";
		case -1504425495:
			return "WATER_SAN_LUIS_RIVER";
		case -247856387:
			return "WATER_SEA_OF_CORONADO";
		case -823661292:
			return "WATER_SOUTHFIELD_FLATS";
		case -218679770:
			return "WATER_SPIDER_GORGE";
		case -1287619521:
			return "WATER_STILLWATER_CREEK";
		case -1781130443:
			return "WATER_UPPER_MONTANA_RIVER";
		case -261541730:
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

int func_114()
{
	return Global_1896622->f_41;
}

bool func_115(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	if (func_26() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	if (func_26() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

void func_118(int iParam0)
{
	Local_19.f_22 = (Local_19.f_22 - (Local_19.f_22 && iParam0));
}

bool func_119(int iParam0)
{
	iVar0 = func_192(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

int func_120()
{
	if (Global_1915715->f_22504.f_1)
	{
		return func_193(152);
	}
	return func_193(Global_1915715->f_20241.f_1);
}

void func_121(int iParam0)
{
	if ((!Global_1051439->f_4653.f_1 || !Global_1051439->f_4653.f_2) && does_entity_exist(get_player_ped(iParam0)))
	{
		if (is_ped_male(get_player_ped(iParam0)))
		{
			Global_1051439->f_4653.f_1 = 1;
		}
		else
		{
			Global_1051439->f_4653.f_2 = 1;
		}
	}
}

void func_122(int iParam0)
{
	iVar0 = participant_id_to_int();
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		return;
	}
	iVar1 = iParam0;
	iVar2 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (network_is_player_active(iVar2) && network_is_player_a_participant(iVar2))
	{
		iVar3 = network_get_participant_index(iVar2);
		if (&Local_560[iVar3])
		{
			iVar1 = iVar3;
		}
	}
	if ((((Global_1051439->f_4653.f_7 == 5 || Global_1051439->f_4653.f_7 == 6) || Global_1051439->f_4653.f_7 == 7) || Global_1051439->f_4653.f_7 == 10) || ((Global_1051439->f_4653.f_7 == 1 || Global_1051439->f_4653.f_7 == 3) && Local_58.f_118 == 0))
	{
		if (Local_560[iVar1]->f_5 != Local_560[iVar0]->f_5 && Local_560[iVar1]->f_5 != 0)
		{
			if (Global_1051439->f_4653.f_7 == 1 || Global_1051439->f_4653.f_7 == 3)
			{
				if (!Local_58.f_251)
				{
					Local_58.f_251 = 1;
				}
			}
			else
			{
				Local_560[iVar0]->f_5 = Local_560[iVar1]->f_5;
				Local_560[iVar0]->f_6 = Local_560[iVar1]->f_6;
				Local_58.f_233 = Local_560[iVar0]->f_7;
				Local_560[iVar0]->f_7 = Local_560[iVar1]->f_7;
				if (Global_1051439->f_4653.f_7 == 6)
				{
					_0xbdfeeb7600bcd938(func_65());
					Local_58.f_48 = 0;
				}
				func_151();
				if ((Local_560[iVar0]->f_6 == 2 || Local_560[iVar0]->f_6 == 3) || Local_58.f_251)
				{
					Local_58.f_251 = 0;
					func_158();
					if (Local_560[iVar0]->f_6 == 2)
					{
						func_149("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
					}
					else
					{
						func_149("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
					}
					func_42(12);
				}
				else
				{
					func_158();
					func_149("Backdrop_Move", "RDRO_Photo_Shop_Sounds", 1);
					func_42(11);
				}
				return;
			}
		}
		if (Local_560[iVar1]->f_8 != Local_560[iVar0]->f_8 || Local_560[iVar1]->f_9 != Local_560[iVar0]->f_9)
		{
			if (Global_1051439->f_4653.f_7 == 6)
			{
				_0xbdfeeb7600bcd938(func_65());
				Local_58.f_48 = 0;
			}
			if (Local_58.f_31)
			{
				Local_58.f_31 = 0;
			}
			Local_560[iVar0]->f_8 = Local_560[iVar1]->f_8;
			Local_560[iVar0]->f_9 = Local_560[iVar1]->f_9;
			if (!(Global_1051439->f_4653.f_7 == 1 || Global_1051439->f_4653.f_7 == 3))
			{
				func_42(8);
				func_150();
				func_151();
			}
		}
	}
}

void func_123()
{
	disable_control_action(0, -2131587435, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -668070958, false);
	disable_control_action(0, 1250966545, false);
	disable_control_action(0, -484677055, false);
}

bool func_124(int iParam0, int iParam1)
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

int func_125(int iParam0, var uParam1)
{
	if (!func_194(iParam0))
	{
		return 0;
	}
	if ((iParam0 == 28 || iParam0 == 29) || iParam0 == 33)
	{
		*uParam1 = 0;
		return 1;
	}
	if (func_26() != -1)
	{
		if (does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
		{
			*uParam1 = get_ped_index_from_entity_index(Global_1051439->f_72[iParam0]->f_21);
		}
		else
		{
			return 0;
		}
	}
	else if (does_entity_exist(Global_1915715->f_3[iParam0]->f_23))
	{
		*uParam1 = get_ped_index_from_entity_index(Global_1915715->f_3[iParam0]->f_23);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_126()
{
	if (Global_1051439->f_4653)
	{
		iVar0 = Local_560[participant_id_to_int()]->f_5;
	}
	else
	{
		iVar0 = Local_58.f_249;
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	Local_58.f_130 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < Local_58.f_231)
		{
			if (func_38(&(Local_58.f_132[iVar2]), func_37(Local_58.f_130)))
			{
				Local_58.f_129 = iVar2;
				if (Global_1051439->f_4653)
				{
					Local_560[participant_id_to_int()]->f_5 = &Local_58.f_165[iVar2];
					Local_560[participant_id_to_int()]->f_7 = &Local_58.f_198[iVar2];
				}
				else
				{
					Local_58.f_249 = &Local_58.f_165[iVar2];
				}
				return &(Local_58.f_165[iVar2]);
			}
			iVar2++;
		}
		Local_58.f_130++;
		if (Local_58.f_130 >= 5)
		{
			Local_58.f_130 = 0;
		}
		iVar1++;
	}
	return 497185279;
}

Vector3 func_127(vector3 vParam0, vector3 vParam3)
{
	fVar0 = cos(vParam3.x);
	fVar1 = sin(vParam3.x);
	vVar2.x = vParam0.x;
	vVar2.f_1 = ((fVar0 * vParam0.y) - (fVar1 * vParam0.z));
	vVar2.f_2 = ((fVar1 * vParam0.y) + (fVar0 * vParam0.z));
	vParam0 = { vVar2 };
	fVar0 = cos(vParam3.y);
	fVar1 = sin(vParam3.y);
	vVar2.x = ((fVar0 * vParam0.x) + (fVar1 * vParam0.z));
	vVar2.f_1 = vParam0.y;
	vVar2.f_2 = ((fVar0 * vParam0.z) - (fVar1 * vParam0.x));
	vParam0 = { vVar2 };
	fVar0 = cos(vParam3.z);
	fVar1 = sin(vParam3.z);
	vVar2.x = ((fVar0 * vParam0.x) - (fVar1 * vParam0.y));
	vVar2.f_1 = ((fVar1 * vParam0.x) + (fVar0 * vParam0.y));
	vVar2.f_2 = vParam0.z;
	vParam0 = { vVar2 };
	return vParam0;
}

char* func_128(int iParam0)
{
	switch (iParam0)
	{
		case 84486308:
			return "standard_PL";
		case 458599716:
			return "sunny_PL";
		case -358564271:
			return "sunset_PL";
		case -450294390:
			return "interior_PL";
		case 2101619512:
			return "night_PL";
		default:
			break;
	}
	return "standard_PL";
}

char* func_129(int iParam0)
{
	switch (iParam0)
	{
		case 84486308:
			return "b_standard";
		case 458599716:
			return "b_sunny";
		case -358564271:
			return "b_sunset";
		case -450294390:
			return "b_interior";
		case 2101619512:
			return "b_night";
		default:
			break;
	}
	return "b_standard";
}

void func_130(int iParam0)
{
	Local_58.f_118 = iParam0;
}

Vector3 func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 0.75f, 0f, 0f;
		case 2:
			return -0.75f, 0f, 0f;
		case 3:
			return (0.9f * 0.5f), -0.75f, 0f;
		case 4:
			return (0.9f * -0.5f), -0.75f, 0f;
		case 5:
			return (0.9f * 1.5f), -0.75f, 0f;
		case 6:
			return (0.9f * -1.5f), -0.75f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_132(char* sParam0, char* sParam1)
{
	_0x6339c1ea3979b5f7(sParam0, sParam1);
}

void func_133(var uParam0)
{
	func_195(uParam0, 0f);
}

void func_134(char* sParam0, char* sParam1)
{
	_0xac84686c06184b0d(sParam0, sParam1);
}

bool func_135(var uParam0)
{
	return func_164(*uParam0, 2);
}

int func_136()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_137(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_138(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_196(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_197(iVar0);
	*uParam0 = 0;
}

bool func_138(int iParam0)
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

int func_139(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_198(iVar0, 2))
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
		func_199(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

void func_140(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_138(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_141(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_138(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (bParam1)
	{
		func_200(iParam0, 4);
		if (bParam3)
		{
			func_201(iVar0, 1);
		}
		func_202(iVar0, 1);
	}
	else
	{
		func_203(iParam0, 4);
		func_202(iVar0, 0);
	}
}

int func_142(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_198(iVar0, 2))
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
		func_199(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_143(var uParam0, var uParam1, int iParam2)
{
	if (func_204(iParam2, &iVar0))
	{
		switch (iParam2)
		{
			case 0:
				iVar1 = -216985588;
				break;
			case 3:
				iVar1 = 1924847018;
				break;
			case 2:
				iVar1 = 1712871347;
				break;
			case 1:
				iVar1 = 1192083856;
				break;
		}
		if (!func_138(*uParam0))
		{
			*uParam0 = func_142(func_206(func_205(iVar0), 109029619), iVar1, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
			func_140(*uParam0, 13, 1, 1);
			func_140(*uParam0, 10, 1, 1);
			func_140(*uParam0, 14, 1, 1);
			func_140(*uParam0, 19, 1, 1);
			func_140(*uParam0, 20, 1, 1);
			func_140(*uParam0, 4, 1, 0);
			func_140(*uParam0, 2, 1, 0);
		}
		else
		{
			func_141(*uParam0, 1, 1, 1);
		}
		if (!func_138(*uParam1))
		{
			*uParam1 = func_142(func_206(func_205(iVar0), 109029619), iVar1, 2, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_140(*uParam1, 13, 1, 1);
			func_140(*uParam1, 10, 1, 1);
			func_140(*uParam1, 14, 1, 1);
			func_140(*uParam1, 4, 1, 0);
			func_140(*uParam1, 2, 1, 0);
		}
		else
		{
			func_141(*uParam1, 1, 1, 1);
		}
		func_144(*uParam1, 0, 1);
	}
}

void func_144(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_138(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	func_201(iVar0, bParam1);
}

void func_145(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	if (bParam4 && !func_138(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(6, sParam1, sParam2));
}

bool func_146()
{
	if (Local_19.f_1)
	{
		func_141(Local_58.f_38, 0, 1, 1);
		return false;
	}
	if (Local_19)
	{
		func_141(Local_58.f_38, 0, 1, 1);
		return false;
	}
	if (!func_154(500))
	{
		func_141(Local_58.f_38, 0, 1, 1);
		return false;
	}
	if (Local_19.f_24 == 1)
	{
		func_141(Local_58.f_38, 0, 1, 1);
		return false;
	}
	if (Local_19.f_6)
	{
		func_141(Local_58.f_38, 0, 1, 1);
		return false;
	}
	if (Global_1051439->f_4653 && Global_1051439->f_4653.f_4 <= 1)
	{
		func_141(Local_58.f_38, 0, 1, 1);
		return false;
	}
	return true;
}

bool func_147(int iParam0, bool bParam1)
{
	if (bParam1 && !func_138(iParam0))
	{
		return false;
	}
	return !func_198(iParam0, 4);
}

bool func_148(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_138(iParam0))
	{
		return false;
	}
	iVar0 = func_196(iParam0);
	return _uiprompt_has_standard_mode_completed((*Global_1951255)[iVar0]->f_3, iParam1);
}

void func_149(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

void func_150()
{
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		if (Local_58.f_252 > Local_58.f_248)
		{
			Local_58.f_252 = 0;
		}
		else if (Local_58.f_252 < 0)
		{
			Local_58.f_252 = Local_58.f_248;
		}
		iVar0 = 0;
		if (Local_58.f_252 != 0)
		{
			iVar0 = &Local_58.f_235[(Local_58.f_252 - 1)];
			Local_58.f_31 = 0;
		}
		if (Local_560[participant_id_to_int()]->f_8 != iVar0)
		{
			Local_58.f_404 = 0;
			Local_560[participant_id_to_int()]->f_8 = iVar0;
		}
		else if (Local_58.f_404 >= Local_58.f_405)
		{
			Local_58.f_404 = 0;
		}
		else if (Local_58.f_404 < 0)
		{
			Local_58.f_404 = (Local_58.f_405 - 1);
		}
		Local_560[participant_id_to_int()]->f_9 = Local_58.f_404;
	}
	Local_58.f_253 = Local_560[participant_id_to_int()]->f_8;
	if (Local_58.f_253 == 0)
	{
		Local_58.f_405 = 0;
	}
	else
	{
		func_80();
	}
	Local_560[participant_id_to_int()]->f_10 = 1;
}

void func_151()
{
	if (func_138(Local_58.f_34))
	{
		func_141(Local_58.f_34, 0, 1, 1);
	}
	if (func_138(Local_58.f_35))
	{
		func_141(Local_58.f_35, 0, 1, 1);
	}
	if (func_138(Local_58.f_32))
	{
		func_141(Local_58.f_32, 0, 1, 1);
	}
	if (func_138(Local_58.f_33))
	{
		func_141(Local_58.f_33, 0, 1, 1);
	}
	if (func_138(Local_58.f_36))
	{
		func_141(Local_58.f_36, 0, 1, 1);
	}
	if (func_138(Local_58.f_50))
	{
		func_141(Local_58.f_50, 0, 1, 1);
	}
	if (func_138(Local_58.f_38))
	{
		func_141(Local_58.f_38, 0, 1, 1);
	}
	func_207(Local_58.f_40);
	func_207(Local_58.f_42);
	func_207(Local_58.f_44);
	func_207(Local_58.f_46);
	if (func_138(Local_58.f_41))
	{
		func_141(Local_58.f_41, 0, 1, 1);
	}
	if (func_138(Local_58.f_43))
	{
		func_141(Local_58.f_43, 0, 1, 1);
	}
	if (func_138(Local_58.f_45))
	{
		func_141(Local_58.f_45, 0, 1, 1);
	}
	if (func_138(Local_58.f_47))
	{
		func_141(Local_58.f_47, 0, 1, 1);
	}
	if (func_138(Local_58.f_49))
	{
		func_141(Local_58.f_49, 0, 1, 1);
	}
	if (func_138(Local_58.f_37))
	{
		func_141(Local_58.f_37, 0, 1, 1);
	}
	if (func_138(Local_58.f_39))
	{
		func_141(Local_58.f_39, 0, 1, 1);
	}
}

bool func_152(int iParam0, bool bParam1)
{
	if (bParam1 && !func_138(iParam0))
	{
		return false;
	}
	iVar0 = func_196(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

int func_153(int iParam0)
{
	iVar0 = func_196(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return (*Global_1951255)[iVar0]->f_4;
}

bool func_154(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_26() == 0)
	{
		return func_208(iParam0);
	}
	return iParam0 <= func_209();
}

var func_155(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

float func_156(int iParam0, bool bParam1)
{
	if (bParam1 && !func_138(iParam0))
	{
		return 0f;
	}
	iVar0 = func_196(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1951255)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
}

bool func_157()
{
	if (!Local_58.f_61)
	{
		return false;
	}
	fVar0 = get_control_normal(2, Local_58.f_60);
	if ((fVar0 > 0.75f && Local_58.f_60 != -1882188328) && Local_58.f_129 < (Local_58.f_231 - 1))
	{
		bVar1 = true;
	}
	else if ((fVar0 < -0.75f || (Local_58.f_60 == -1882188328 && fVar0 > 0.75f)) && Local_58.f_129 > 0)
	{
		bVar2 = true;
	}
	if (bVar1 || bVar2)
	{
		iVar4 = Local_58.f_129;
		while (iVar4 < Local_58.f_231 && iVar4 >= 0)
		{
			if (bVar1)
			{
				iVar4++;
			}
			else
			{
				iVar4 = (iVar4 - 1);
			}
			if (iVar4 >= Local_58.f_231 || iVar4 < 0)
			{
			}
			else
			{
				if (func_38(&(Local_58.f_132[iVar4]), func_37(Local_58.f_130)))
				{
					if (!bVar3)
					{
						Local_58.f_129 = iVar4;
						if (Global_1051439->f_4653)
						{
							Local_560[participant_id_to_int()]->f_5 = &Local_58.f_165[iVar4];
							Local_58.f_233 = Local_560[participant_id_to_int()]->f_7;
							Local_560[participant_id_to_int()]->f_7 = &Local_58.f_198[iVar4];
							if (bVar1)
							{
								Local_560[participant_id_to_int()]->f_6 = 0;
							}
							else
							{
								Local_560[participant_id_to_int()]->f_6 = 1;
							}
						}
						else
						{
							Local_58.f_249 = &Local_58.f_165[iVar4];
							if (bVar1)
							{
								Local_58.f_250 = 0;
							}
							else
							{
								Local_58.f_250 = 1;
							}
						}
						if (Local_58.f_60 != -39308912)
						{
							func_137(&(Local_58.f_34), 1, 1);
							Local_58.f_60 = -39308912;
							Local_58.f_34 = func_142("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_58.f_60, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
							func_140(Local_58.f_34, 4, 1, 0);
						}
						bVar3 = true;
					}
					else
					{
						return true;
					}
				}
			}
		}
		if (bVar3)
		{
			if (bVar1)
			{
				func_137(&(Local_58.f_34), 1, 1);
				Local_58.f_60 = -1882188328;
				Local_58.f_34 = func_142("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_58.f_60, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_140(Local_58.f_34, 4, 1, 0);
			}
			else
			{
				func_137(&(Local_58.f_34), 1, 1);
				Local_58.f_60 = -763919645;
				Local_58.f_34 = func_142("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_58.f_60, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_140(Local_58.f_34, 4, 1, 0);
			}
			return true;
		}
	}
	return false;
}

void func_158()
{
	if (!Global_1051439->f_4653)
	{
		return;
	}
	if (Local_58.f_233 == Local_560[participant_id_to_int()]->f_7)
	{
		return;
	}
	if (Local_58.f_233 != 0)
	{
		set_anim_scene_bool(Local_58.f_232, func_129(Local_58.f_233), true, false);
	}
	Local_58.f_234 = 0;
}

bool func_159()
{
	fVar0 = get_control_normal(2, func_153(Local_58.f_35));
	if (fVar0 > 0.75f || fVar0 < -0.75f)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (fVar0 > 0.75f)
			{
				Local_58.f_130++;
				if (Local_58.f_130 >= 5)
				{
					Local_58.f_130 = 0;
				}
			}
			else
			{
				Local_58.f_130 = (Local_58.f_130 - 1);
				if (Local_58.f_130 < 0)
				{
					Local_58.f_130 = 4;
				}
			}
			iVar2 = 0;
			bVar3 = false;
			Local_58.f_61 = 0;
			iVar2 = 0;
			while (iVar2 < Local_58.f_231)
			{
				if (func_38(&(Local_58.f_132[iVar2]), func_37(Local_58.f_130)))
				{
					if (!bVar3)
					{
						Local_58.f_129 = iVar2;
						if (fVar0 > 0.75f)
						{
							Local_58.f_64 = 0;
						}
						else
						{
							Local_58.f_64 = 1;
						}
						if (Global_1051439->f_4653)
						{
							Local_560[participant_id_to_int()]->f_5 = &Local_58.f_165[iVar2];
							Local_58.f_233 = Local_560[participant_id_to_int()]->f_7;
							Local_560[participant_id_to_int()]->f_7 = &Local_58.f_198[iVar2];
							if (fVar0 > 0.75f)
							{
								Local_560[participant_id_to_int()]->f_6 = 2;
							}
							else
							{
								Local_560[participant_id_to_int()]->f_6 = 3;
							}
						}
						else
						{
							Local_58.f_249 = &Local_58.f_165[iVar2];
							if (fVar0 > 0.75f)
							{
								Local_58.f_250 = 2;
							}
							else
							{
								Local_58.f_250 = 3;
							}
						}
						bVar3 = true;
					}
					else
					{
						Local_58.f_61 = 1;
					}
					else
					{
						iVar2++;
					}
					if (bVar3)
					{
						func_137(&(Local_58.f_34), 1, 1);
						Local_58.f_60 = -763919645;
						Local_58.f_34 = func_142("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_58.f_60, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						func_140(Local_58.f_34, 4, 1, 0);
						func_141(Local_58.f_34, Local_58.f_61, 1, 1);
						return true;
					}
					iVar1++;
					return false;
				}
			}
		}
	}
}

void func_160(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_138(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

void func_161(int iParam0, int iParam1, int iParam2)
{
	bVar0 = false;
	if (func_138(iParam0))
	{
		if (Global_1051439->f_4653.f_7 != 6 && Global_1051439->f_4653.f_7 != 13)
		{
			if (func_210(iParam0, 1))
			{
				bVar0 = true;
				if (func_204(iParam2, &uVar1))
				{
					_task_emote(func_65(), func_211(iParam2), 1, uVar1, 1, 0, 0, 1, 0);
					Local_58.f_48 = iParam0;
					func_42(6);
					func_151();
					func_141(Local_58.f_38, 1, 1, 1);
					func_141(Local_58.f_49, 1, 1, 1);
					func_144(Local_58.f_49, 1, 1);
				}
			}
		}
		else if (!func_210(iParam0, 1) && Local_58.f_48 == iParam0)
		{
			func_141(iParam0, 0, 1, 1);
			func_141(Local_58.f_49, 0, 1, 1);
			func_144(Local_58.f_49, 0, 1);
			_0xbdfeeb7600bcd938(func_65());
			Local_58.f_48 = 0;
		}
	}
	if (func_138(iParam1))
	{
		if (func_162(iParam1, 1))
		{
			bVar0 = true;
			if (func_204(iParam2, &uVar2))
			{
				_task_emote(func_65(), func_212(iParam2), 2, uVar2, 0, 1, 0, 1, 0);
				Local_58.f_48 = iParam0;
				func_151();
				func_141(Local_58.f_38, 1, 1, 1);
				func_42(7);
			}
		}
	}
	if (bVar0)
	{
		Global_1051439->f_4653.f_5 = iParam2;
	}
}

bool func_162(int iParam0, bool bParam1)
{
	if (bParam1 && !func_138(iParam0))
	{
		return false;
	}
	iVar0 = func_196(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_163()
{
	_launch_app_with_entry("social_club_feed", "launch_to_photos");
}

bool func_164(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_165(int iParam0, int iParam1)
{
	iVar0 = _inventory_get_ped_inventory_id(iParam0);
	iVar1 = _inventory_get_ped_inventory_id(iParam1);
	if (!_0x886dfd3e185c8a89(iVar0, &uVar6, 923904168, -740156546, &uVar2))
	{
	}
	_0xc04f47d488ef9eba(iVar0, iVar1, &uVar2, 0);
}

int func_166(var uParam0)
{
	return uParam0;
}

bool func_167(int iParam0)
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

bool func_168(int iParam0)
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

bool func_169(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_170(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = 290941431;
	uParam0->f_3 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), uParam0))
	{
		iVar5 = 0;
		Var0 = &Global_1915715->f_20346[18];
		Var0.f_2 = 110382701;
		Var0.f_3 = -1858290781;
		if (_datafile_get_int(&iVar5, &Var0) && iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iParam2)
			{
				if (&Local_58.f_270[iVar6] == iVar5)
				{
					iVar5 += 7;
				}
				iVar6++;
			}
			Local_58.f_270[iParam2] = iVar5;
			Var0.f_2 = -1793904784;
			Var0.f_3 = -859932058;
			_datafile_get_string(&(Local_58.f_270[iParam2]->f_1), &Var0);
			Var0.f_3 = 325797227;
			_datafile_get_string(&(Local_58.f_270[iParam2]->f_9), &Var0);
			Var0.f_2 = -1407851228;
			Var0.f_3 = -302053561;
			_datafile_get_hash(&uVar7, &Var0);
			Local_58.f_270[iParam2]->f_17 = uVar7;
			Local_58.f_270[iParam2]->f_18 = -1;
			if (Local_58.f_270[iParam2]->f_17 == 1788831303)
			{
				func_213(iParam2);
			}
		}
	}
}

void func_171(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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

bool func_172(int iParam0, int iParam1)
{
	if (!func_84(iParam0, 0))
	{
		return false;
	}
	if (func_173(iParam0))
	{
		return func_217(func_174(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_173(int iParam0)
{
	if (func_38(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_174(int iParam0, bool bParam1)
{
	if (!func_84(iParam0, 0))
	{
		return func_218(func_103(iParam0), bParam1);
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

int func_175(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_219(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

void func_176(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_220(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_177(int iParam0, int iParam1)
{
	if (!func_84(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_38(iParam0, 1399091007))
	{
		func_221(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_178(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_33(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_223(&Var0, func_222(0));
	}
	if (!func_34(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_36(iVar14);
	return uVar15;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_180(int iParam0, bool bParam1)
{
	Var0 = { func_182(iParam0, bParam1, 0) };
	return func_183(iParam0, Var0, Var0.f_4, bParam1);
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_224(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_179(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_90(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_225(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_226(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_93(1702063850, &Var65, 1);
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
			func_94(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_102(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_182(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_227(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_85(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_183(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_222(bParam1) };
			if (bParam2 && func_228(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_229(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_229(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_230(iParam0, &Var6, 1728382685))
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
			Var0 = { func_231(bParam1) };
			switch (func_220(iParam0))
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
			if (func_232(iParam0, -1823706425))
			{
				Var0 = { func_183(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_232(iParam0, -1483207246))
			{
				Var0 = { func_183(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_183(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_232(iParam0, -1653629781))
			{
				Var0 = { func_183(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_233(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_232(iParam0, -1653629781))
			{
				Var0 = { func_183(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_183(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_84(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_102(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_184(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_224(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_233(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_90(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_26() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_93(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_94(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_102(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_185(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_234(uParam1->f_8, iParam0, iVar0, 2048) || func_234(uParam1->f_8, iParam0, iVar0, 32768)) || func_234(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_234(uParam1->f_8, iParam0, iVar0, 4) || func_234(uParam1->f_8, iParam0, iVar0, 256)) || func_234(uParam1->f_8, iParam0, iVar0, 65536)) || func_234(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_234(uParam1->f_8, iParam0, iVar0, 1) || func_234(uParam1->f_8, iParam0, iVar0, 8)) || func_234(uParam1->f_8, iParam0, iVar0, 65536)) || func_234(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_234(uParam1->f_8, iParam0, iVar0, 1) || func_234(uParam1->f_8, iParam0, iVar0, 16)) || func_234(uParam1->f_8, iParam0, iVar0, 2)) || func_234(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_234(uParam1->f_8, iParam0, iVar0, 8) || func_234(uParam1->f_8, iParam0, iVar0, 4096)) || func_234(uParam1->f_8, iParam0, iVar0, 256)) || func_234(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_186(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_187(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_235(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_235(iParam1, 2, 0, 0);
	return -1;
}

int func_188(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_235(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_189(char* sParam0)
{
	_0x9428447ded71fc7e(sParam0);
}

bool func_190(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_191()
{
	StringCopy(&(Local_19.f_11), "-", 32);
	StringConCat(&(Local_19.f_11), " / ", 32);
	StringCopy(&(Local_19.f_15), "-", 32);
	StringConCat(&(Local_19.f_11), &(Local_19.f_15), 32);
	_databinding_write_data_string(Local_19.f_10, &(Local_19.f_11));
}

int func_192(int iParam0)
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

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return 1948709075;
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330;
		case 133:
			return -1079912632;
		case 152:
			return -1624899219;
		case 176:
			return 1712034773;
		case 177:
			return 1084233913;
		case 178:
			return -1628307596;
		case 153:
			return 1109728466;
		case 154:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 179:
			return 1244193358;
		case 155:
			return -268420964;
		case 156:
			return -283845926;
		case 157:
			return 76731659;
		case 158:
			return 2141489518;
		case 67:
			return 1529797091;
		case 159:
			return 1120323763;
		case 160:
			return -1951530479;
		case 161:
			return 2034257465;
		case 162:
			return 278587369;
		case 65:
			return 1388932648;
		case 164:
			return 1467401843;
		case 165:
			return -1049737591;
		case 166:
			return 1175719437;
		case 167:
			return 2115547696;
		case 64:
			return 878376253;
		case 168:
			return -508879537;
		case 169:
			return -654369397;
		case 170:
			return 1573058547;
		case 171:
			return 1753151614;
		case 172:
			return -2113647360;
		case 173:
			return 1337275619;
		case 174:
			return -237650722;
		case 175:
			return 283754781;
		case 66:
			return -2076086367;
		case 163:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

bool func_194(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

void func_195(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_236() - fParam1);
	func_237(uParam0, 1);
	func_238(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_196(int iParam0)
{
	return iParam0;
}

void func_197(int iParam0)
{
	if (!func_239(iParam0))
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

bool func_198(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_199(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_201(iParam0, 1);
	func_202(iParam0, 1);
	func_203(iParam0, 128);
}

void func_200(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_201(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_198(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_202(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_203(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

int func_204(int iParam0, int iParam1)
{
	return func_240(&(Global_17411.f_55.f_2481), iParam0, iParam1);
}

char* func_205(int iParam0)
{
	if (!func_84(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_241(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

char* func_206(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_242(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

void func_207(int iParam0)
{
	if (func_138(iParam0))
	{
		if (Global_1051439->f_4653.f_7 != 6 || iParam0 != Local_58.f_48)
		{
			func_141(iParam0, 0, 1, 1);
		}
	}
}

bool func_208(int iParam0)
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

int func_209()
{
	if (func_26() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

bool func_210(int iParam0, bool bParam1)
{
	if (bParam1 && !func_138(iParam0))
	{
		return false;
	}
	iVar0 = func_196(iParam0);
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

int func_211(int iParam0)
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

int func_212(int iParam0)
{
	return func_211(iParam0);
}

void func_213(int iParam0)
{
	iVar0 = func_243(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
	iVar1 = Local_58.f_404;
	if (iVar0 != 0)
	{
		if (Local_58.f_404 == 0)
		{
			iVar13 = func_244(iVar0);
			iVar2[iVar14] = iVar13;
			iVar14++;
			Local_58.f_270[iParam0]->f_17 = iVar13;
			Local_58.f_270[iParam0]->f_18 = func_245(iVar0);
		}
	}
	else
	{
		iVar1++;
	}
	Var16 = { func_246(-1591664384, -1591664384, 0, -1941499753, 0, 0, -1, 0, 0) };
	if (func_247(Var16, &iVar26, &iVar27, 0))
	{
		if (iVar27 > 0)
		{
			iVar28 = 0;
			while (iVar28 < iVar27)
			{
				if (_0x8750f69a720c2e41(iVar26, iVar28, &iVar0))
				{
					iVar13 = func_244(iVar0);
					iVar15 = 0;
					while (iVar15 < iVar14)
					{
						if (iVar13 == &iVar2[iVar15])
						{
							iVar13 = 0;
						}
						else
						{
							iVar15++;
						}
					}
					if (iVar13 != 0)
					{
						if (iVar14 < iVar2)
						{
							iVar2[iVar14] = iVar13;
							iVar14++;
						}
						if (iVar1 == iVar14)
						{
							Local_58.f_270[iParam0]->f_17 = iVar13;
						}
					}
				}
				iVar28++;
			}
		}
		func_248(iVar26);
	}
	Local_58.f_405 = iVar14;
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

bool func_217(int iParam0, int iParam1, bool bParam2)
{
	if (!func_249(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_250(iParam0, iParam1);
	}
	return true;
}

int func_218(int iParam0, bool bParam1)
{
	if (!func_190(iParam0, 2))
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

bool func_219(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_249(iParam0))
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

int func_220(int iParam0)
{
	if (!func_84(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_221(int iParam0, var uParam1, var uParam2)
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

struct<4> func_222(bool bParam0)
{
	iVar0 = func_102(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_183(923904168, func_227(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_183(923904168, func_227(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_183(923904168, func_227(bParam0), -740156546, 0);
}

void func_223(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_224(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_225(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_179(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_252(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_226(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_183(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_227(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_102(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_183(1328661203, func_253(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_183(1328661203, func_253(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_183(1328661203, func_253(), -1591664384, bParam0);
}

bool func_228(int iParam0, bool bParam1)
{
	if (func_220(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_254();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_229(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_255(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_230(int iParam0, var uParam1, int iParam2)
{
	if (func_256(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_231(bool bParam0)
{
	iVar0 = func_102(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_183(271701509, func_227(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_183(271701509, func_227(bParam0), 12999093, 0);
}

bool func_232(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_220(iParam0);
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
			if (func_257(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_233(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_258(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_234(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_169(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_235(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_259(iParam0, iParam1, iParam2, iParam3);
}

float func_236()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_237(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_238(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_239(int iParam0)
{
	return func_198(iParam0, 2);
}

int func_240(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		*iParam2 = 0;
		return 0;
	}
	if ((*uParam0)[iVar0]->f_1 < 0)
	{
		*iParam2 = 0;
		return 0;
	}
	*iParam2 = &(*uParam0)[iVar0]->f_2[(*uParam0)[iVar0]->f_1];
	return 1;
}

int func_241(int iParam0)
{
	if (!func_84(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_260(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

char* func_242(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_243(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1137457)[iParam0]->f_1;
}

int func_244(int iParam0)
{
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_245(int iParam0)
{
	if (func_38(iParam0, -1372720971))
	{
		iVar0 = 0;
	}
	else if (func_38(iParam0, 1028787971))
	{
		iVar0 = 1;
	}
	else if (func_38(iParam0, 1271835644))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

struct<10> func_246(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_247(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_248(int iParam0)
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

bool func_249(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_250(int iParam0, int iParam1)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_220(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_252(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_261((*uParam0)[iVar0]))
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
				*(*uParam0)[iVar0] = { func_253() };
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

struct<4> func_253()
{
	return Var0;
}

bool func_254()
{
	return (func_262(-1185145312, 0, 0, 0) > 0 && func_263(func_183(889965687, func_227(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_255(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_84(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_179(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_183(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_102(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_102(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_256(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_102(0);
	*uParam1 = { func_183(iParam0, func_222(0), iParam3, 0) };
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

bool func_257(int iParam0, int iParam1, int iParam2)
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

bool func_258(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_102(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

void func_259(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_264(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_260(int iParam0)
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

bool func_261(var uParam0)
{
	if (!func_265(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_262(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_266(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_102(bParam1), iParam0, iParam3);
}

int func_263(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_267(&uParam0, iParam4, bParam5, iParam6);
}

void func_264(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_268(&(uParam0->f_4));
}

bool func_265(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_266(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_267(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_269(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_268(var uParam0)
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

bool func_269(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_102(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_258(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

