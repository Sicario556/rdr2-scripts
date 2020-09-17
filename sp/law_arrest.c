void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_20 = 15;
	iLocal_21 = 20;
	iLocal_22 = 6;
	iLocal_23 = 5000;
	iLocal_24 = -1;
	iLocal_25 = -1;
	bLocal_32 = true;
	if (has_force_cleanup_occurred(514))
	{
		func_1(&uScriptParam_0, 1);
		terminate_this_thread();
	}
	while (!func_2(&uScriptParam_0))
	{
		wait(0);
	}
	if (_0xcf45df50c7775f2a())
	{
		clear_focus();
		_0x5a8b01199c3e79c3();
	}
	terminate_this_thread();
}

void func_1(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_3(uParam0, bParam1);
	}
	func_4(&Local_45);
	func_5(1);
	func_6();
	if (func_7(7))
	{
		func_8((*Global_1835011)[7], 8192);
	}
	Global_1934266->f_60 = 0;
}

bool func_2(var uParam0)
{
	switch (iVar1186)
	{
		case 0:
			func_9();
			func_10();
			_0x9851de7aec10b4e1(func_11(player_id()), 500f, 1, 0);
			func_12(func_11(player_id()), 500f, 0);
			func_13(func_11(player_id()), 500f, 0, 0, 0, 0, 0);
			_0x4759cc730f947c81();
			_0x1ff00db43026b12f();
			func_14(uParam0->f_60);
			func_15(1);
			Global_1934266->f_60 = 1;
			iLocal_24 = iLocal_24;
			iLocal_25 = iLocal_25;
			Global_1934266->f_61 = 1;
			func_16(0);
			func_17(1);
			func_18(0);
			func_19(0, 1);
			func_20(0);
			func_21();
			func_22();
			func_23();
			set_player_control(player_id(), false, 0, false);
			set_everyone_ignore_player(player_id(), true);
			iLocal_19 = func_24(uParam0->f_60);
			func_25(&uLocal_1189, 1);
			break;
		case 1:
			if (func_26(uParam0->f_60))
			{
				func_25(&uLocal_1189, 2);
			}
			break;
		case 2:
			if (func_27(uParam0) && func_28(uParam0->f_60, &Local_45))
			{
				bLocal_28 = true;
				func_29(Local_45.f_970);
			}
			_0xe0fa74aa3cce650b(player_id(), func_30(uParam0->f_60, 1, 1));
			iVar0 = 0;
			while (iVar0 < func_31(uParam0->f_60))
			{
				func_32(uParam0->f_60, iVar0);
				iVar0++;
			}
			func_33(uParam0);
			func_34(1);
			func_35(&Local_45);
			func_36();
			if (bLocal_28)
			{
				func_25(&uLocal_1189, 3);
			}
			else
			{
				func_37();
				func_25(&uLocal_1189, 8);
			}
			break;
		case 3:
			bLocal_32 = true;
			bLocal_38 = false;
			_0x55f37f5f3f2475e1();
			func_38(&Local_45);
			func_39(&Local_45);
			if (func_40(Local_45.f_970))
			{
				func_41(&Local_45);
			}
			if (func_42(Local_45.f_970))
			{
				func_37();
				func_43();
			}
			else
			{
				iLocal_29 = 1;
			}
			_0xc6dcc2a3a8825c85(1);
			func_44(uParam0);
			func_45();
			func_25(&uLocal_1189, 4);
			break;
		case 4:
			func_46(Local_45.f_970);
			if (bLocal_32)
			{
				func_47();
				_0xab0d553fe20a6e25(0f);
				set_scenario_ped_density_multiplier_this_frame(0f);
				set_vehicle_density_multiplier_this_frame(0f);
				set_random_vehicle_density_multiplier_this_frame(0f);
				_0xf45e46deecf7df6e(10208, 0, 0, -1, -1);
				iVar1 = func_48(&Local_45);
				if ((iVar1 == 3 && !bLocal_38) && Global_1310720->f_5 < (get_game_timer() - 2000))
				{
					func_49();
					func_50();
					func_5(0);
					_0xac84686c06184b0d("Jail_Cell", "Arrest_Fail_Respawn_Scenes");
					bLocal_38 = true;
				}
				if (iVar1 == 5)
				{
					_0xac84686c06184b0d("Fade_To_Gameplay", "Arrest_Fail_Respawn_Scenes");
					if (Local_45.f_970 == 5 || Local_45.f_970 == 4)
					{
						clear_room_for_entity(Global_35);
					}
					if (Local_45.f_970 == 4)
					{
						if (!func_51(11))
						{
							Local_45.f_1007 = 1;
						}
					}
					func_52(uParam0);
					bLocal_32 = false;
				}
			}
			else
			{
				func_53(&Local_45);
				if (func_40(Local_45.f_970))
				{
					func_54();
					func_25(&uLocal_1189, 5);
				}
				else
				{
					func_54();
					func_25(&uLocal_1189, 6);
				}
			}
			break;
		case 5:
			if (!bLocal_35)
			{
				if (!bLocal_37)
				{
					func_55(&Local_45);
					func_56(1, 1114636288, 1117847552, 1116602368);
					func_57(&Local_45, &uLocal_1090);
					func_58(&Local_45);
					func_59(0);
					if (Local_45.f_1007)
					{
						func_60(&Local_45, &uLocal_1090);
					}
					bLocal_37 = true;
				}
				func_61();
				bLocal_33 = true;
				vLocal_40 = { get_entity_coords(Global_35, true, false) };
				iLocal_1188 = func_62();
				iLocal_25 = add_shocking_event_for_entity(513747494, Global_35, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				if (func_63(&Local_45))
				{
					iLocal_24 = add_shocking_event_at_position(217247011, vLocal_40, -1f, 50f, 50f, -1f, -1f, -1, -1);
				}
				set_blocking_of_non_temporary_events(Global_35, false);
				set_player_control(player_id(), true, 0, false);
				func_5(1);
				_0x07e8b8b20570271c(player_id());
				_0x22741652985c84d0(player_id(), func_30(func_62(), 1, 1));
				_0x9c4352134b2835fb(player_id(), 218126730);
				_0x8de82bc774f3b862(0);
				_0xd6c0a8c7c0b2f82c(player_id(), 0);
				func_64(1);
				if (!bLocal_31)
				{
					_report_crime(player_id(), 314693001, 0, 0, true);
					_0x75cbf20ba47e4f89(vLocal_40, func_65(func_30(iVar1185, 1, 1)));
					bLocal_31 = true;
				}
				func_64(0);
				bLocal_35 = true;
			}
			if (bLocal_33)
			{
				func_66(&Local_45);
			}
			else
			{
				bLocal_35 = false;
				func_67(&Local_45, &uLocal_1090);
				func_25(&uLocal_1189, 10);
			}
			if (is_entity_dead(Global_35))
			{
				func_68(&Local_45);
				func_25(&uLocal_1189, 10);
			}
			break;
		case 6:
			func_69(&Local_45, &uLocal_1090);
			_0xc6dcc2a3a8825c85(1);
			func_25(&uLocal_1189, 7);
			break;
		case 7:
			if (func_70(&Local_45))
			{
				func_25(&uLocal_1189, 10);
			}
			break;
		case 8:
			func_43();
			_0xed9582b3da8f02b4(1);
			while (_0x5c16855277819bbf() < 1)
			{
				wait(0);
			}
			set_player_invincible(player_id(), false);
			func_49();
			func_50();
			_0xac84686c06184b0d("Jail_Cell", "Arrest_Fail_Respawn_Scenes");
			func_44(uParam0);
			func_45();
			func_5(0);
			func_25(&uLocal_1189, 9);
			break;
		case 9:
			if (!func_71(&uLocal_1054, uParam0->f_60))
			{
				func_72();
				set_ped_reset_flag(Global_35, 103, true);
			}
			else if (get_clock_hours() >= iLocal_21 || get_clock_hours() < iLocal_22)
			{
				func_72();
				add_to_clock_time(0, iLocal_20, 0);
				return false;
			}
			else
			{
				func_25(&uLocal_1189, 10);
			}
			break;
		case 10:
			if (func_3(uParam0, 0))
			{
				func_1(uParam0, 0);
				_telemetry_player_spawned(Global_35);
				if (iLocal_29 == 0)
				{
					if (!bLocal_28)
					{
						func_73(1);
					}
					else
					{
						func_74();
						func_73(0);
					}
					Global_40.f_11956 = 0;
					iLocal_29 = 1;
				}
				if (!Local_45.f_1005)
				{
					if (bLocal_36)
					{
						return true;
					}
				}
				else
				{
					func_25(&uLocal_1189, 11);
				}
			}
			break;
		case 11:
			if (Local_45.f_949 == func_62())
			{
			}
			else
			{
				func_68(&Local_45);
			}
			if (is_entity_dead(Global_35))
			{
				func_68(&Local_45);
			}
			if (is_screen_fading_out())
			{
				func_68(&Local_45);
			}
			if (!Local_45.f_1005)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_3(var uParam0, bool bParam1)
{
	switch (iVar1188)
	{
		case 0:
			func_52(uParam0);
			func_75();
			func_16(1);
			if (func_42(Local_45.f_970))
			{
				if (!func_76(275))
				{
					func_77(275, 0);
				}
			}
			func_78(6, 16384);
			func_78(7, 16384);
			if (bLocal_28)
			{
				_0x4759cc730f947c81();
				func_79(&uLocal_1192, 1);
			}
			else
			{
				func_79(&uLocal_1192, 2);
			}
			if (bParam1)
			{
				func_3(uParam0, bParam1);
			}
			break;
		case 1:
			func_80(&Local_45);
			func_81(&(Local_45.f_950));
			func_82();
			func_56(0, 1114636288, 1117847552, 1116602368);
			func_83(iLocal_19);
			func_84();
			func_85(120, 0, 1);
			Global_1934266->f_63 = -1;
			_0xd6c0a8c7c0b2f82c(player_id(), 1);
			set_blocking_of_non_temporary_events(Global_35, false);
			_0xbc90bdf4e5228ea1();
			func_86(uParam0);
			func_82();
			func_56(0, 1114636288, 1117847552, 1116602368);
			func_87();
			func_88();
			func_34(0);
			func_59(1);
			func_15(0);
			func_89(&Local_45);
			if (!bLocal_39)
			{
				func_90(0, -1);
			}
			if (is_entity_dead(Global_35))
			{
				Local_45.f_1005 = 0;
				bLocal_36 = true;
				return true;
			}
			if (_0x0ee3f0d7feccc54f())
			{
				bLocal_36 = true;
				return true;
			}
			break;
		case 2:
			_0x7d4e70a67a651c71(1);
			func_83(iLocal_19);
			func_84();
			func_85(120, 0, 1);
			Global_1934266->f_63 = -1;
			_0xd6c0a8c7c0b2f82c(player_id(), 1);
			set_blocking_of_non_temporary_events(Global_35, false);
			_0xbc90bdf4e5228ea1();
			_0x4759cc730f947c81();
			func_82();
			func_56(0, 1114636288, 1117847552, 1116602368);
			func_87();
			func_88();
			func_91(12, 0, 0, 0, 0, 0, 1065353216, 0);
			func_34(0);
			func_59(1);
			func_15(0);
			func_79(&uLocal_1192, 3);
			if (bParam1)
			{
				func_3(uParam0, bParam1);
			}
			break;
		case 3:
			if (!bLocal_39)
			{
				func_90(0, -1);
			}
			if (_0x0ee3f0d7feccc54f())
			{
				bLocal_36 = true;
				if (func_92(uParam0))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_4(var uParam0)
{
	if (uParam0->f_1001 > 0)
	{
		_0x20faee47427a4497();
		_0x7d4e70a67a651c71(uParam0->f_1001);
	}
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_93(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_94(Global_1935630, 4194304);
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

void func_6()
{
	Global_1347477->f_6 = 0;
}

bool func_7(int iParam0)
{
	if (!func_95(iParam0))
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

void func_8(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

void func_9()
{
	iVar0 = func_96();
	if (func_97(iVar0))
	{
		Global_1934266->f_317[iVar0] = func_98();
	}
}

void func_10()
{
	iVar0 = func_99();
	if (func_100(Global_1934266->f_63) && Global_1934266->f_63 != iVar0)
	{
		Local_45.f_1002 = func_101(Global_1934266->f_63);
	}
	else
	{
		Local_45.f_1002 = _get_bounty_for_player(player_id());
	}
}

Vector3 func_11(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_12(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_13(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			if (!func_102(6, 16384))
			{
				func_103(6, 16384);
				func_104(6);
			}
			if (!func_102(7, 16384))
			{
				func_103(7, 16384);
				func_104(7);
			}
			if (func_102(6, 16384) && func_102(7, 16384))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_15(bool bParam0)
{
	if (!bParam0 && func_105(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_16(int iParam0)
{
	Global_1905944->f_5694 = iParam0;
}

void func_17(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_18(bool bParam0)
{
	if (func_106() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_107();
	if (bParam1)
	{
		func_108(-1);
	}
}

void func_20(bool bParam0)
{
	if (func_106() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_109();
}

void func_21()
{
	if (func_110(282))
	{
		func_111(282);
	}
	if (func_110(281))
	{
		func_111(281);
	}
	if (func_110(263))
	{
		func_111(263);
	}
	if (func_110(264))
	{
		func_111(264);
	}
	if (func_110(272))
	{
		func_111(272);
	}
}

void func_22()
{
	if (!func_112())
	{
		if (func_113(&uVar0))
		{
			func_114();
		}
	}
	if (func_115())
	{
		func_116(2018429721, Global_35, 0, 1);
		iVar1 = 0;
		while (iVar1 < 29)
		{
			_0x67e21acc5c0c970c(Global_35, iVar1, 0);
			iVar1++;
		}
	}
}

void func_23()
{
	_0xe3144b932dfdff65(Global_35, 0f, -1, 1, 1);
	clear_ped_damage_decal_by_zone(Global_35, 10, "ALL");
	clear_ped_blood_damage_by_zone(Global_35, 3);
	clear_ped_blood_damage_by_zone(Global_35, 0);
	clear_ped_blood_damage_by_zone(Global_35, 5);
	clear_ped_blood_damage_by_zone(Global_35, 7);
	clear_ped_blood_damage_by_zone(Global_35, 8);
	clear_ped_blood_damage_by_zone(Global_35, 9);
}

int func_24(int iParam0)
{
	return func_118(iParam0, 0, 3, func_117());
}

void func_25(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_26(int iParam0)
{
	if (!func_119(iLocal_19))
	{
		iLocal_19 = func_24(iParam0);
		return false;
	}
	if (func_120(iLocal_19))
	{
		return true;
	}
	if (!func_121(iLocal_19))
	{
		func_122(iLocal_19, 1);
	}
	else
	{
		func_94(Global_1935630, 128);
		func_123(iLocal_19, 1, 0);
	}
	return false;
}

int func_27(var uParam0)
{
	if (((((uParam0->f_60 == 76 || uParam0->f_60 == 26) || uParam0->f_60 == 105) || uParam0->f_60 == 78) || uParam0->f_60 == 38) || uParam0->f_60 == 5)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, var uParam1)
{
	uParam1->f_970 = -1;
	if (!func_124(iParam0))
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	iVar0 = func_127(func_126(iParam0));
	if (!func_100(iVar0))
	{
		return 0;
	}
	func_128(iParam0, &iVar1, uParam1);
	if (func_129(iVar1))
	{
		uParam1->f_970 = iVar1;
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (!func_129(iParam0))
	{
		return;
	}
	set_bit(&(Global_40.f_11182), iParam0);
}

int func_30(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 76:
			if (func_130(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_130(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			return 1559741032;
		case 61:
			return 60667583;
		case 78:
			return 1758133584;
		case 26:
			return -577559008;
		case 38:
			if (!bParam1 || func_106() != -1)
			{
				return 1624541293;
			}
			if (func_131(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 92:
			return 1637569166;
		case 65:
			return -867798278;
		case 69:
			return 1543937523;
		case 93:
			return 1030875135;
		case 95:
			return -201437056;
		case 57:
			return 794246846;
		case 3:
			return -968357677;
		case 32:
			return 728480338;
		case 82:
			return 725489698;
		case 35:
			return 183652754;
		case 56:
			return 2056744450;
		case 126:
			return 963280223;
		case 120:
			return -256309418;
		case 124:
			return 1666986024;
		case 115:
			return 251328732;
		case 127:
			if (!bParam1 || func_106() != -1)
			{
				return 1024208566;
			}
			if (func_131(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_106() != -1)
			{
				return 965626876;
			}
			if (func_132((*Global_1835011)[59]->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_106() != -1)
			{
				return -497792649;
			}
			if (func_132((*Global_1347702)[9]->f_15, 1))
			{
				return -497792649;
			}
			else if (func_131(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_133())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_106() != -1)
			{
				return -1990305778;
			}
			if (func_131(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_126(iParam0);
		if (iVar0 != -1)
		{
			return func_134(iVar0, bParam1);
		}
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 2;
		case 26:
			return 2;
		case 105:
			return 1;
		case 78:
			return 2;
		case 5:
			return 2;
		case 38:
			return 2;
		case 115:
			return 6;
	}
	return 0;
}

void func_32(int iParam0, int iParam1)
{
	func_136(func_135(iParam0, iParam1));
}

void func_33(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 78:
			func_12(2902.057f, 1311.149f, 44.9349f, 3f, 0);
			break;
		case 76:
			func_12(-272.9033f, 808.8414f, 119.3715f, 4f, 0);
			break;
		case 38:
			func_12(-764.9592f, -1263.492f, 44.1678f, 3.5f, 0);
			break;
		case 105:
			func_12(1355.627f, -1302.07f, 77.7605f, 3f, 0);
			break;
		case 26:
			func_12(-1811.578f, -353.199f, 161.4108f, 4f, 0);
			break;
		case 5:
			func_12(2503.272f, -1306.936f, 48.9537f, 2f, 0);
			break;
	}
}

void func_34(int iParam0)
{
	Global_1396116->f_139 = iParam0;
}

void func_35(var uParam0)
{
	func_137(uParam0);
	func_138(iLocal_16, 0, 114688, 0);
}

void func_36()
{
	Global_1347477->f_6 = 1;
}

void func_37()
{
	iVar0 = func_99();
	if (func_100(Global_1934266->f_63) && Global_1934266->f_63 != iVar0)
	{
		func_139(Global_1934266->f_63);
		func_140(Global_1934266->f_63);
		func_141(Global_1934266->f_63, 0);
		func_140(iVar0);
	}
	else
	{
		func_139(Global_1934266->f_63);
		func_140(Global_1934266->f_63);
	}
	_0x062b4a4a3396351d(player_id());
}

void func_38(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 1:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO3_EXT", 32);
			uParam0->f_973 = _create_volume_box_with_custom_name(-274.9539f, 807.9131f, 121.9488f, 0f, 0f, 9.543586f, 10.13485f, 10.82004f, 7.605244f, "JBO3_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -269.002f, 806.5345f, 118.2811f, 1, -270.53f, 791.97f, 117.58f, 220.6354f, 0);
			func_142(uParam0, 0, "DUTCH", -269.002f, 806.5345f, 118.2811f, 1, -271.82f, 791.26f, 117.59f, 202.4148f, 0);
			func_143(uParam0, Global_35, "arthur", -269.002f, 806.5345f, 118.2811f, 1, -268.18f, 793.36f, 117.53f, 203.3375f, 0);
			break;
		case 2:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO7_EXT", 32);
			uParam0->f_973 = _create_volume_box_with_custom_name(-274.9539f, 807.9131f, 121.9488f, 0f, 0f, 9.543586f, 10.13485f, 10.82004f, 7.605244f, "JBO7_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -262.9f, 819.2f, 119.5f, 1, -266.4f, 818.8f, 119.5f, 154.3179f, "HORSE_01");
			func_142(uParam0, 0, "Dutch", -268.8f, 815.9f, 119.5f, 1, -265.8f, 814.1f, 119.5f, 165.487f, "Horse_01^1");
			func_143(uParam0, Global_35, "ARTHUR", -272.7f, 811.4f, 119.5f, 1, -269.9f, 819.3f, 119.5f, 186.387f, "Horse_01^2");
			break;
		case 3:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO2_EXT", 32);
			uParam0->f_973 = _create_volume_box_with_custom_name(-286.7853f, 805.7806f, 119.0863f, 0f, 0f, 11.78279f, 42.17782f, 34.87466f, 15.87478f, "JBO2_Restrictions");
			func_142(uParam0, 0, "Dutch", -274.8124f, 800.249f, 118.3808f, 1, -294.5992f, 819.6844f, 118.2036f, 272.9581f, 0);
			func_143(uParam0, Global_35, "ARTHUR", -272.7505f, 811.0136f, 118.38f, 1, -303.235f, 793.9093f, 118.1267f, 5.5524f, 0);
			break;
		case 4:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO5_EXT", 32);
			uParam0->f_973 = _create_volume_box_with_custom_name(-1811.271f, -351.171f, 165.12f, 0f, 0f, 65.01599f, 11.6f, 8.2f, 8f, "JBO5_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -1803.529f, -344.7994f, 163.5501f, 1, -1793.58f, -367.07f, 160.21f, 216.8521f, 0);
			func_142(uParam0, 1, "JohnMarston", -1803.529f, -344.7994f, 163.5501f, 1, -1791.94f, -364.9f, 160.64f, 202.8108f, 0);
			func_143(uParam0, Global_35, "arthur", -269.002f, 806.5345f, 118.2811f, 1, -1795.35f, -369.44f, 159.86f, 210.9395f, 0);
			break;
		case 5:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO9_EXT", 32);
			uParam0->f_973 = _create_volume_box_with_custom_name(-1811.271f, -351.171f, 163.953f, 0f, 0f, 65.01599f, 11.6f, 8.2f, 8f, "JBO9_Restrictions");
			func_143(uParam0, Global_35, "JOHN", -1810.377f, -351.2475f, 161.4798f, 0, 0f, 0f, 0f, 0f, 0);
			break;
		case 6:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO1_EXT", 32);
			uParam0->f_973 = _create_volume_box_with_custom_name(1357.724f, -1304.623f, 78.07324f, 0f, 0f, -20f, 15.45211f, 22.1697f, 6.84831f, "JBO1_Restrictions");
			func_142(uParam0, 0, "DUTCH", 1352.871f, -1299.193f, 75.6088f, 1, 1348.682f, -1311.307f, 76.5695f, 85.1549f, "Horse_01^1");
			func_143(uParam0, Global_35, "arthur", 1354.891f, -1301.46f, 77.1865f, 1, 1350.86f, -1309.55f, 76.71f, 85.1549f, "Horse_01");
			break;
		case 7:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO4_EXT", 32);
			uParam0->f_973 = _create_volume_box_with_custom_name(2906.926f, 1312.666f, 45.85957f, 0f, 0f, -18.92808f, 21.62638f, 10.55981f, 7.126882f, "JBO4_Restrictions");
			func_142(uParam0, 5, "HoseaMatthews", 2916.183f, 1308.597f, 44.59514f, 1, 2911.277f, 1303.386f, 43.7005f, 158.1667f, 0);
			func_143(uParam0, Global_35, "ARTHUR", 2916.527f, 1312.022f, 44.4304f, 1, 2916.746f, 1317.201f, 43.34f, 64.3745f, 0);
			break;
		case 8:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO6_EXT", 32);
			uParam0->f_973 = _create_volume_box_with_custom_name(2906.926f, 1312.666f, 45.85957f, 0f, 0f, -18.92808f, 21.62638f, 10.55981f, 7.126882f, "JBO6_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", 2913.348f, 1309.59f, 43.5983f, 1, 2911.918f, 1304.091f, 43.5851f, 163.1755f, "Horse_01");
			func_143(uParam0, Global_35, "ARTHUR", 2902.42f, 1312.024f, 43.9416f, 1, 2916.746f, 1317.201f, 43.34f, 64.3745f, 0);
			func_144(uParam0, 1830978939, "S_M_M_AMBIENTLAWRURAL_01", 2916.527f, 1312.022f, 44.4304f, 617504531);
			func_144(uParam0, 1830978939, "S_M_M_AMBIENTLAWRURAL_01^1", 2913.348f, 1309.59f, 43.5983f, 617504531);
			break;
		case 9:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO11_EXT", 32);
			uParam0->f_973 = _create_volume_box_with_custom_name(-759.3268f, -1267.945f, 44.01426f, 0f, 0f, 0f, 21.59153f, 12.84869f, 6.995106f, "JBO11_Restrictions");
			func_142(uParam0, 13, "AbigailRoberts", -751.2921f, -1269.159f, 42.3344f, 1, -751.6697f, -1266.675f, 42.3642f, 351.0406f, "Horse_01");
			func_143(uParam0, Global_35, "JOHN", -762.8563f, -1263.777f, 42.8484f, 1, -752.6035f, -1276.804f, 42.4938f, 88.8295f, 0);
			break;
		case 10:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO8_EXT", 32);
			uParam0->f_973 = _create_volume_box_with_custom_name(2503.094f, -1308.998f, 48.54811f, 0f, 0f, 0f, 40.58993f, 17.2809f, 9.483007f, "JB10_Restrictions");
			func_142(uParam0, 5, "HoseaMatthews", 2529.161f, -1307.163f, 48.2126f, 1, 2522.156f, -1316.749f, 47.8753f, 77.2207f, 0);
			func_143(uParam0, Global_35, "ARTHUR", 2512.193f, -1308.456f, 47.9537f, 1, 2522.22f, -1302.554f, 48.0213f, 93.0952f, 0);
			break;
		case 11:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO10_EXT", 32);
			uParam0->f_973 = _create_volume_box_with_custom_name(2503.094f, -1308.998f, 48.54811f, 0f, 0f, 0f, 40.58993f, 17.2809f, 9.483007f, "JB10_Restrictions");
			func_143(uParam0, Global_35, "John", 2503.278f, -1306.994f, 47.9537f, 0, 0f, 0f, 0f, 0f, 0);
			break;
	}
}

void func_39(var uParam0)
{
	if ((uParam0->f_998 > 0 || uParam0->f_999 > 0) || uParam0->f_1000 > 0)
	{
		if (uParam0->f_950.f_18)
		{
			iVar0 = 1;
		}
		uParam0->f_1001 = (((uParam0->f_998 + uParam0->f_999) + uParam0->f_1000 * 2) + iVar0);
		_0xed9582b3da8f02b4(uParam0->f_1001);
	}
}

bool func_40(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 4:
		case 6:
			return true;
	}
	return false;
}

void func_41(var uParam0)
{
	func_145(uParam0);
	func_138(iLocal_17, 0, 2048, 0);
}

bool func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
			return false;
	}
	return true;
}

void func_43()
{
	func_139(func_99());
}

void func_44(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 76:
			func_136(32);
			func_146(32, 32);
			iLocal_18 = _create_volume_box_with_custom_name(-270.6571f, 785.237f, 118.2027f, 0f, 0f, 11.43384f, 44.26319f, 53.83985f, 21.44312f, "volClearScriptWagons");
			break;
		case 26:
			func_136(883);
			func_136(884);
			func_146(883, 32);
			func_146(884, 32);
			iLocal_18 = _create_volume_box_with_custom_name(-1795.738f, -362.124f, 163.6816f, 0f, 0f, -23.81512f, 51.10044f, 45.75085f, 22.93521f, "volClearScriptWagons");
			break;
		case 105:
			iLocal_18 = _create_volume_box_with_custom_name(1347.627f, -1309.533f, 76.47682f, 0f, 0f, -19.9999f, 64.97517f, 24.37222f, 16.81363f, "volClearScriptWagons");
			break;
		case 78:
			iLocal_18 = _create_volume_box_with_custom_name(2910.424f, 1294.851f, 43.97159f, 0f, 0f, -20.00017f, 44.69428f, 76.72396f, 18.23014f, "volClearScriptWagons");
			break;
		case 38:
			iLocal_18 = _create_volume_box_with_custom_name(-747.7532f, -1267.985f, 42.28417f, 0f, 0f, 0f, 19.36348f, 27.39255f, 21.49196f, "volClearScriptWagons");
			break;
		case 5:
			iLocal_18 = _create_volume_box_with_custom_name(2521.402f, -1300.223f, 47.53965f, 0f, 0f, 0f, 23.75947f, 61.34023f, 26.76055f, "volClearScriptWagons");
			break;
		case 120:
			break;
	}
}

void func_45()
{
	if (_does_volume_exist(iLocal_18))
	{
		iVar0 = create_itemset(true);
		_0x886171a12f400b89(iLocal_18, iVar0, 2);
		iVar1 = get_itemset_size(iVar0);
		if (iVar1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				iVar3 = get_vehicle_index_from_entity_index(_get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar0)));
				if (does_entity_exist(iVar3))
				{
					set_entity_as_mission_entity(iVar3, true, true);
					delete_vehicle(&iVar3);
				}
				iVar2++;
			}
		}
	}
}

void func_46(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (!func_147(0, 16384))
			{
				func_148(0, 16384, 1);
			}
			if (!func_147(7, 16384))
			{
				func_148(7, 16384, 1);
			}
			break;
		case 6:
			if (!func_147(0, 16384))
			{
				func_148(0, 16384, 1);
			}
			break;
		case 8:
			if (!func_147(7, 16384))
			{
				func_148(7, 16384, 1);
			}
			break;
		case 4:
			if (!func_147(1, 16384))
			{
				func_148(1, 16384, 1);
			}
			if (!func_147(7, 16384))
			{
				func_148(7, 16384, 1);
			}
			break;
	}
}

void func_47()
{
	iVar1 = 0;
	while (iVar1 < 29)
	{
		iVar0 = func_149(Global_35, iVar1, 0, 1);
		if ((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !_is_weapon_one_handed(iVar0))
		{
			func_150(iVar0);
		}
		iVar1++;
	}
}

int func_48(var uParam0)
{
	switch (uParam0->f_969)
	{
		case 0:
			if (func_151(uParam0))
			{
				uParam0->f_969 = 1;
			}
			break;
		case 1:
			func_152(uParam0);
			func_153(uParam0);
			func_154(uParam0);
			func_155(uParam0);
			uParam0->f_969 = 2;
			break;
		case 2:
			set_audio_flag("EnableCutsceneMusic", uParam0->f_1003);
			if (func_156(uParam0))
			{
				uParam0->f_969 = 3;
			}
			break;
		case 3:
			if (func_63(uParam0))
			{
				func_157(uParam0);
			}
			if (uParam0->f_1006 == 0)
			{
				if (func_158(uParam0))
				{
					uParam0->f_969 = 4;
				}
			}
			break;
		case 4:
			func_159(uParam0);
			if (uParam0->f_1003)
			{
				set_audio_flag("EnableCutsceneMusic", false);
			}
			uParam0->f_969 = 5;
			break;
		case 5:
			break;
	}
	return uParam0->f_969;
}

void func_49()
{
	if (Global_1935630->f_3 != 0)
	{
		_0x00a15b94cba4f76f(Global_1935630->f_3);
		Global_1935630->f_3 = 0;
	}
}

void func_50()
{
	func_93(Global_1935630, 4096);
	func_160();
	func_161(0, 0);
	func_162();
	func_163(0f, 0f, 0f);
	Global_40.f_9.f_15 = -1;
	func_164(0);
	Global_1310720->f_1 = { 0f, 0f, 0f };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0f;
	Global_1310720->f_4 = 0;
	Global_1310720->f_6 = 0;
	Global_1310720->f_7 = 0;
	Global_1310720->f_8 = 1;
	Global_1310720->f_13 = 0;
	Global_1310720->f_14 = 0;
	Global_1310720->f_12 = 0;
	Global_1310720->f_27 = 0;
	Global_1310720->f_28 = 0;
	Global_1310720->f_29 = -1;
	Global_1935630->f_4 = 0;
	Global_1897952->f_40 = 0;
	Global_1310720->f_24 = -1569615261;
	Global_1310720->f_22 = -1;
	func_165(0);
	func_166(0);
	display_radar(true);
	display_hud(true);
	func_5(1);
	func_167(0);
	if (is_audio_scene_active("DEATH_SCENE"))
	{
		stop_audio_scene("DEATH_SCENE");
	}
	if (is_audio_scene_active("DYING_SCENE"))
	{
		stop_audio_scene("DYING_SCENE");
	}
}

bool func_51(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_132((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

void func_52(var uParam0)
{
	if (bLocal_30)
	{
		return;
	}
	func_168();
	func_169(&(uParam0->f_43));
	func_169(&(uParam0->f_46));
	func_169(&(uParam0->f_49));
	set_everyone_ignore_player(player_id(), false);
	if (bLocal_28)
	{
		func_16(1);
		func_75();
		func_170(&Local_45);
		freeze_entity_position(Global_35, false);
		if (!func_40(Local_45.f_970))
		{
			set_player_control(player_id(), true, 0, false);
		}
		if (is_screen_faded_out())
		{
			do_screen_fade_in(iLocal_23);
		}
		if (!func_76(288))
		{
			func_77(288, 0);
		}
	}
	else
	{
		iVar0 = player_ped_id();
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_entity_invincible(iVar0, false);
			if (_0x9ff5f9b24e870748(iVar0))
			{
				clear_ped_tasks_immediately(iVar0, false, true);
			}
			iVar1 = _get_scenario_point_ped_is_using(iVar0, true);
			if (_does_scenario_point_exist(iVar1))
			{
				_task_use_scenario_point(iVar0, iVar1, 0, 1, false, false, 0, false, -1f, false);
			}
			if (get_distance_between_coords(get_entity_coords(iVar0, false, false), uParam0->f_30, false) > 2f)
			{
				_set_entity_coords_and_heading(iVar0, uParam0->f_30, uParam0->f_33, false, false, true);
			}
		}
	}
	_0x9428447ded71fc7e("Arrest_Fail_Respawn_Scenes");
	Global_1934266->f_61 = 0;
	bLocal_30 = true;
}

void func_53(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 3:
			func_171(535323366, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(295355979, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(193903155, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 1:
		case 2:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(395506985, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(535323366, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(295355979, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(193903155, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(1988748538, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 4:
		case 5:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(1207903970, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(902070893, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(1821044729, 1, 0f, 1, 0, 1f, 1, 1);
			func_171(1514359658, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 8:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(-2082598623, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(1657401918, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(1502928852, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 6:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(1614494720, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(349074475, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(1878514758, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 9:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(-473782212, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(-884246706, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(-2127191462, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(-1779971138, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(-1484165375, 1, 0f, 0, 0, 1f, 0, 0);
			break;
	}
}

void func_54()
{
	_0x4f806a6cfed89468(Global_35, 1);
}

void func_55(var uParam0)
{
	vVar0 = { get_entity_coords(Global_35, false, false) };
	iVar3 = create_itemset(true);
	_0x0c392db374655176(vVar0, func_172(&(uParam0->f_970)), iVar3);
	iVar4 = get_itemset_size(iVar3);
	if (iVar4 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			iVar7 = get_indexed_item_in_itemset(iVar5, iVar3);
			iVar8 = _0x3ffb15534067dcd4(iVar7);
			if (does_entity_exist(iVar8) && !is_ped_dead_or_dying(iVar8, true))
			{
				if (iVar6 < 4)
				{
					Var9 = { func_173(&(uParam0->f_970), iVar6) };
					if (!func_174(Var9))
					{
						clear_ped_tasks_immediately(iVar8, true, true);
						func_175(iVar8, Var9, 2, 1073741824);
					}
					iVar6++;
				}
			}
			iVar5++;
		}
	}
	destroy_itemset(iVar3);
}

void func_56(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	if (bParam0)
	{
		_0x27a1b170aa8af84c(iParam1);
		_0x89314fb3463e28de(iParam2);
		set_dispatch_ideal_spawn_distance(fParam3);
	}
	else
	{
		_0x96498d922d8d0d0a();
		_0x54ec7b6bc72bad69();
		reset_dispatch_ideal_spawn_distance();
	}
}

void func_57(var uParam0, var uParam1)
{
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
			func_177(uParam1, func_176(uParam0, 0), "DUTCH", 0);
			func_177(uParam1, func_176(uParam0, 7), "CHARLES_SMITH", 0);
			func_177(uParam1, Global_35, "ARTHUR", 0);
			break;
		case 4:
			func_177(uParam1, func_176(uParam0, 1), "JOHN", 0);
			func_177(uParam1, func_176(uParam0, 7), "CHARLES_SMITH", 0);
			func_177(uParam1, Global_35, "ARTHUR", 0);
			break;
		case 6:
			func_177(uParam1, func_176(uParam0, 0), "DUTCH", 0);
			func_177(uParam1, Global_35, "ARTHUR", 0);
			break;
	}
}

void func_58(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
			iLocal_14 = get_player_group(get_player_index());
			set_ped_config_flag(Global_35, 155, true);
			_0xcbd9ec60495c728c(iLocal_14);
			_0x9238a3d970bbb0a9(Global_35, -1972074710);
			set_ped_config_flag(uParam0->f_950.f_2, 113, true);
			force_ped_motion_state(uParam0->f_950.f_2, -1415276238, false, 1, false);
			func_178(func_176(uParam0, 7));
			set_ped_config_flag(func_176(uParam0, 7), 113, true);
			set_ped_config_flag(func_176(uParam0, 7), 156, true);
			set_entity_invincible(func_176(uParam0, 7), true);
			_0xd730281e496621fb(func_176(uParam0, 7), -1370000800);
			_0x9238a3d970bbb0a9(func_176(uParam0, 7), -1972074710);
			set_ped_config_flag(func_179(uParam0, 7), 113, true);
			set_entity_invincible(func_179(uParam0, 7), true);
			force_ped_motion_state(func_179(uParam0, 7), -1415276238, false, 1, false);
			func_178(func_176(uParam0, 0));
			set_ped_config_flag(func_176(uParam0, 0), 113, true);
			set_ped_config_flag(func_176(uParam0, 0), 156, true);
			set_entity_invincible(func_176(uParam0, 0), true);
			_0xd730281e496621fb(func_176(uParam0, 0), -1370000800);
			_0x9238a3d970bbb0a9(func_176(uParam0, 0), -1972074710);
			set_ped_config_flag(func_179(uParam0, 0), 113, true);
			set_entity_invincible(func_179(uParam0, 0), true);
			force_ped_motion_state(func_179(uParam0, 0), -1415276238, false, 1, false);
			break;
		case 4:
			iLocal_14 = get_player_group(get_player_index());
			set_ped_config_flag(Global_35, 155, true);
			_0xcbd9ec60495c728c(iLocal_14);
			_0x9238a3d970bbb0a9(Global_35, -1972074710);
			func_178(func_176(uParam0, 7));
			set_ped_config_flag(func_176(uParam0, 7), 113, true);
			set_ped_config_flag(func_176(uParam0, 7), 156, true);
			set_entity_invincible(func_176(uParam0, 7), true);
			_0xd730281e496621fb(func_176(uParam0, 7), -1370000800);
			_0x9238a3d970bbb0a9(func_176(uParam0, 7), -1972074710);
			set_ped_config_flag(func_179(uParam0, 7), 113, true);
			set_entity_invincible(func_179(uParam0, 7), true);
			func_178(func_176(uParam0, 1));
			set_ped_config_flag(func_176(uParam0, 1), 113, true);
			set_ped_config_flag(func_176(uParam0, 1), 156, true);
			set_entity_invincible(func_176(uParam0, 1), true);
			_0xd730281e496621fb(func_176(uParam0, 1), -1370000800);
			_0x9238a3d970bbb0a9(func_176(uParam0, 1), -1972074710);
			set_ped_config_flag(func_179(uParam0, 1), 113, true);
			set_entity_invincible(func_179(uParam0, 1), true);
			break;
		case 6:
			iLocal_14 = get_player_group(get_player_index());
			set_ped_config_flag(Global_35, 155, true);
			_0xcbd9ec60495c728c(iLocal_14);
			_0x9238a3d970bbb0a9(Global_35, -1972074710);
			set_ped_config_flag(uParam0->f_950.f_2, 113, true);
			force_ped_motion_state(uParam0->f_950.f_2, -1415276238, false, 1, false);
			func_178(func_176(uParam0, 0));
			set_ped_config_flag(func_176(uParam0, 0), 113, true);
			set_ped_config_flag(func_176(uParam0, 0), 156, true);
			_0xd730281e496621fb(func_176(uParam0, 0), -1370000800);
			_0x9238a3d970bbb0a9(func_176(uParam0, 0), -1972074710);
			set_ped_config_flag(func_179(uParam0, 0), 113, true);
			set_entity_invincible(func_179(uParam0, 0), true);
			break;
	}
}

void func_59(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_103(iVar0, 4096);
			if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar0]->f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (_0xc29996a337bdd099((*Global_1425371)[iVar1]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar1]->f_1, 1);
			}
			iVar1++;
		}
		_0x4c05b42a8d937796();
		_0x16b86a49e072aa85();
	}
	if (func_106() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_60(var uParam0, var uParam1)
{
	vVar0 = { func_180(uParam0) };
	sVar3 = func_181(vVar0);
	if (!is_string_null_or_empty(sVar3))
	{
		func_182(uParam1, vVar0, 0, -1, 0, 0);
	}
}

void func_61()
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (is_thread_active((*Global_1396257)[iVar0]->f_635, false))
		{
			force_cleanup_for_thread_with_this_id((*Global_1396257)[iVar0]->f_635, 1);
		}
		iVar0++;
	}
}

int func_62()
{
	return Global_1894899->f_2;
}

bool func_63(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
		case 6:
			return true;
	}
	return false;
}

void func_64(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -1391142299:
			return -272694090;
		case 1608357655:
			return -1627063602;
		case -2137625828:
			return 1017205426;
		case 493546894:
			return 2143950829;
		case 1178102426:
			return 1185210962;
		case -2119728378:
			return 1762776946;
		case -1147969487:
			return 1731139335;
		case 1039226266:
			return 1721292511;
		case -650528936:
			return -1371209550;
		case -1308265478:
			return 803887238;
		case 139139039:
			return -1872796492;
		case -1738342532:
			return -974171272;
		case 537788226:
			return 898872371;
		case -1482428221:
			return 1868990101;
		case 305496830:
			return 180106674;
		case -1994249944:
			return -2046129249;
		case -1323821455:
			return 814727220;
		case 1559741032:
			return 1000443839;
		case 1339372314:
			return -118275979;
		case 60667583:
			return -230205703;
		case 1758133584:
			return -438365419;
		case -577559008:
			return 446476115;
		case 965626876:
			return -1439318812;
		case 1624541293:
			return 1802224400;
		case 1637569166:
			return 570252687;
		case -867798278:
			return -118257754;
		case 1543937523:
			return -692268627;
		case 1030875135:
			return -856325217;
		case -201437056:
			return -411459879;
		case 794246846:
			return -1366309447;
		case -968357677:
			return -569867043;
		case 728480338:
			return -306254848;
		case 725489698:
			return -1354053979;
		case 183652754:
			return 260268737;
		case 2056744450:
			return 1390168855;
		case -497792649:
			return -1247868971;
		case -1990305778:
			return -1996568747;
		case 1716860278:
			return -610541033;
		case 2126166785:
			return 718118376;
		case -877373104:
			return 854108678;
		case -1618764825:
			return -1696696178;
		case 963280223:
			return 1703526340;
		case -256309418:
			return 921278225;
		case 1024208566:
			return -726295943;
		case 1640255731:
			return 2128183465;
		case 1666986024:
			return 1010862842;
		default:
			break;
	}
	return 0;
}

void func_66(var uParam0)
{
	func_183();
	if (!func_130(iVar1185))
	{
		func_184(iVar1185, 1, 350);
	}
	if (func_185(uParam0) && !_0xad401c63158acbaa(get_player_index()))
	{
		bLocal_33 = false;
	}
}

void func_67(var uParam0, var uParam1)
{
	vVar0 = { func_186(uParam0) };
	sVar3 = func_181(vVar0);
	if (!is_string_null_or_empty(sVar3))
	{
		func_182(uParam1, vVar0, 0, -1, 0, 0);
	}
}

void func_68(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
			func_171(395506985, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(1988748538, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 4:
		case 5:
			func_171(1207903970, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(902070893, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(1821044729, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(1514359658, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 8:
			func_171(-2082598623, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(1657401918, 1, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 6:
			func_171(1614494720, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(349074475, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 9:
			func_171(-473782212, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(-884246706, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
	}
}

void func_69(var uParam0, var uParam1)
{
	vVar0 = { func_187(uParam0) };
	sVar3 = func_181(vVar0);
	if (!is_string_null_or_empty(sVar3))
	{
		func_182(uParam1, vVar0, 0, -1, 0, 0);
	}
}

bool func_70(var uParam0)
{
	if (func_188(iVar0) == -1)
	{
		vVar1 = { 224.566f, 171.2736f, 96.9528f };
	}
	else
	{
		vVar1 = { func_189(func_133(), 1) };
	}
	switch (uParam0->f_970)
	{
		case 1:
			if (!uParam0->f_1008)
			{
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1f, 20000);
				func_190(func_176(uParam0, 7), func_179(uParam0, 7), 0, 1f, 20000);
				uParam0->f_1008 = 1;
			}
			if (func_191(uParam0))
			{
				_task_move_in_traffic_4(func_176(uParam0, 0), 1.75f, vVar1, 0);
				_task_move_in_traffic_4(func_176(uParam0, 7), 1.75f, vVar1, 0);
				return true;
			}
			break;
		case 9:
			if (func_191(uParam0))
			{
				_task_move_in_traffic_4(func_176(uParam0, 13), 1.25f, vVar1, 0);
				return true;
			}
			break;
		case 3:
			if (!uParam0->f_1008)
			{
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1f, 20000);
				uParam0->f_1008 = 1;
			}
			if (func_191(uParam0))
			{
				_task_move_in_traffic_4(func_176(uParam0, 0), 1.25f, vVar1, 0);
				return true;
			}
			break;
		case 7:
			if (func_191(uParam0))
			{
				_task_move_in_traffic_4(func_176(uParam0, 5), 1.25f, vVar1, 0);
				return true;
			}
			break;
		case 8:
			if (func_191(uParam0))
			{
				_task_move_in_traffic_4(func_176(uParam0, 7), 1.75f, vVar1, 0);
				return true;
			}
			break;
		case 10:
			if (func_191(uParam0))
			{
				_task_move_in_traffic_4(func_176(uParam0, 5), 1f, vVar1, 0);
				return true;
			}
			break;
		case 5:
		case 11:
			return true;
	}
	return false;
}

bool func_71(var uParam0, int iParam1)
{
	switch (uParam0->f_26)
	{
		case 0:
			func_192(uParam0, iParam1);
			func_193(uParam0, 1);
			break;
		case 1:
			func_193(uParam0, 2);
			break;
		case 2:
			if (func_194(uParam0))
			{
				func_193(uParam0, 4);
			}
			break;
		case 4:
			if (func_195(uParam0))
			{
				func_193(uParam0, 7);
			}
			break;
		case 5:
			if (_does_anim_scene_exist(uParam0->f_25))
			{
				_delete_anim_scene(uParam0->f_25);
			}
			if (_0x81dcfd13cf39920e())
			{
				_0xc64abc0676af262b();
			}
			func_193(uParam0, 7);
			break;
		case 7:
			return true;
	}
	return false;
}

void func_72()
{
	_0xc9caeaeec1256e54(1331687942);
}

void func_73(bool bParam0)
{
	fVar0 = (IntToFloat(Local_45.f_1002) * 0.2f);
	iVar1 = (Local_45.f_1002 - round(fVar0));
	if (bParam0)
	{
		iVar2 = func_196(1);
		if (iVar2 >= iVar1)
		{
			func_197(iVar1, 0, 0, 1, 1);
		}
		else
		{
			func_197(iVar2, 0, 0, 1, 1);
		}
	}
}

void func_74()
{
	Global_40.f_11182.f_1 = func_198();
}

void func_75()
{
	if (func_199(543))
	{
		func_200(543);
	}
}

bool func_76(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_106() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_77(int iParam0, bool bParam1)
{
	func_201(iParam0, &iVar0, &iVar1);
	if (!func_202(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_203(iVar0, iVar1);
}

void func_78(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (&Global_40.f_11029[iParam0] - (Global_40.f_11029[iParam0] && iParam1));
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_80(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		func_205(uParam0->f_868[iVar0]);
		if (uParam0->f_868[iVar0]->f_19)
		{
			func_206(uParam0->f_868[iVar0]);
		}
		iVar0++;
	}
}

void func_81(var uParam0)
{
	if (!uParam0->f_18)
	{
		return;
	}
	if (does_entity_exist(uParam0->f_2))
	{
		task_set_blocking_of_non_temporary_events(uParam0->f_2, false);
		func_207(uParam0->f_2, 0);
	}
}

void func_82()
{
	_0x96498d922d8d0d0a();
	_0x54ec7b6bc72bad69();
	reset_dispatch_ideal_spawn_distance();
}

void func_83(int iParam0)
{
	func_93(Global_1935630, 128);
	if (!func_119(iParam0))
	{
		return;
	}
	if (func_121(iParam0) || func_120(iParam0))
	{
		func_208(iParam0, 0, 2);
	}
}

void func_84()
{
	if (!func_209(&Global_1327479))
	{
		return;
	}
	if (does_script_exist(&((*Global_1310750)[&Global_1327479]->f_40)))
	{
		if (has_script_loaded(&((*Global_1310750)[&Global_1327479]->f_40)))
		{
			set_script_as_no_longer_needed(&((*Global_1310750)[&Global_1327479]->f_40));
		}
	}
	func_210(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_85(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_211(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + get_game_timer()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (get_game_timer() + iVar0);
		}
	}
}

void func_86(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 76:
			func_212(32);
			func_213(32, 32);
			break;
		case 26:
			func_212(883);
			func_213(883, 32);
			func_212(884);
			func_213(884, 32);
			break;
	}
}

void func_87()
{
	func_214(iLocal_16);
	func_215(iLocal_16);
}

void func_88()
{
	func_214(iLocal_17);
}

void func_89(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
			if (!func_216(145))
			{
				func_217(145);
				func_218(146);
				func_219(-276.3671f, 802.3903f, 117.9588f, "val_jail_int_walla", 145, 0, 1, 0, 0);
			}
			break;
		case 6:
			if (!func_216(143))
			{
				func_217(143);
				func_218(144);
				func_219(1353.237f, -1302.472f, 77.547f, "rho_sheriff_int_JBO1_01", 143, 0, 1, 0, 0);
				deactivate_interior_entity_set(uParam0->f_974, uParam0->f_975, true);
			}
			break;
	}
}

void func_90(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_220(&Global_0, 8);
	}
	if (!func_221() || func_106() != -1)
	{
		return;
	}
	func_220(&Global_0, 1);
}

void func_91(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_106() != -1)
	{
		return;
	}
	if ((Global_36616 && func_222(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_223(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_224(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_225(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_224(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_92(var uParam0)
{
	vVar0 = { func_226(uParam0->f_60) };
	vVar4 = { func_227(uParam0->f_60) };
	iVar8 = 60000;
	switch (iVar1188)
	{
		case 0:
			func_228(Global_35, 2018429721, 0);
			func_168();
			uParam0->f_42 = get_game_timer();
			func_229(&uLocal_1191, 1);
			break;
		case 1:
			if (func_230(uParam0) || (uParam0->f_42 + iVar8) < get_game_timer())
			{
				func_229(&uLocal_1191, 3);
			}
			break;
		case 3:
			func_175(iLocal_43, vVar0, 2, 1073741824);
			func_175(iLocal_44, vVar4, 2, 1073741824);
			if (!func_125(uParam0->f_60))
			{
				func_231(iLocal_43, vVar0, 5f, 0);
				func_231(iLocal_44, vVar4, 5f, 0);
			}
			if (func_232(uParam0))
			{
				if (_0x0ee3f0d7feccc54f())
				{
					func_229(&uLocal_1191, 4);
				}
			}
			break;
		case 4:
			if (func_233(uParam0))
			{
				if (func_234(uParam0))
				{
					if (func_235(iLocal_43, 0))
					{
						func_207(iLocal_43, 0);
					}
					if (func_235(iLocal_44, 0))
					{
						func_207(iLocal_44, 0);
					}
					return true;
				}
			}
			break;
	}
	return false;
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_94(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_95(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_96()
{
	return Global_1897952->f_41;
}

bool func_97(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_98()
{
	return &Global_1899515;
}

int func_99()
{
	return Global_1934266->f_4;
}

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_101(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

bool func_102(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0] && iParam1) != 0;
}

void func_103(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

int func_104(int iParam0)
{
	if (_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
	{
		_0xa230a5dde12ed374((*Global_1425371)[iParam0]->f_1);
		(*Global_1425371)[iParam0]->f_1 = 0;
	}
	return 1;
}

bool func_105(int iParam0)
{
	iVar0 = func_236(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_106()
{
	return Global_1572887->f_12;
}

void func_107()
{
}

void func_108(int iParam0)
{
	if (func_106() != -1)
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

void func_109()
{
	_0x95ee1dee1dcd9070(player_id(), 1);
	if (func_131(47))
	{
		_0xa63fcad3a6fec6d2(player_id(), 1);
	}
	else
	{
		_0xa63fcad3a6fec6d2(player_id(), 0);
	}
}

bool func_110(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944->f_22[iParam0]->f_1;
	}
	return false;
}

void func_111(int iParam0)
{
	if (!func_110(iParam0))
	{
		return;
	}
	func_17(1);
}

bool func_112()
{
	return bLocal_26;
}

bool func_113(int iParam0)
{
	if (-1829635046 == func_237(81053684))
	{
		if (func_238(iParam0))
		{
			return true;
		}
	}
	else if (func_239(-525676072, iParam0))
	{
		if (func_238(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_114()
{
	if (!func_240())
	{
		return 0;
	}
	if (!func_238(&iVar0))
	{
		return 0;
	}
	if (!func_241(iVar0))
	{
		return 0;
	}
	return func_242(iVar0, 0);
}

bool func_115()
{
	if (!bLocal_26)
	{
		bLocal_26 = true;
		return true;
	}
	return false;
}

int func_116(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_243(iParam0, iParam1, bParam2, bParam3);
}

int func_117()
{
	return -683745558;
}

int func_118(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_244())
	{
		iVar2 = func_244();
	}
	iVar5 = func_245(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_246(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_246(iVar6) == 0)
			{
				return func_247(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_246(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_246(iVar6) == 0)
			{
				return func_247(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_247(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_119(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_120(int iParam0)
{
	iVar0 = func_248(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_121(int iParam0)
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
		iVar0 = func_249(iParam0);
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

void func_122(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (!func_250(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_251(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_251(iParam0)))
		{
			_0xca41e86545413b5b(func_252(iParam0), func_253(iParam0), func_254(iParam0), func_251(iParam0), Global_36);
		}
	}
	func_255(iParam0, 1);
	bParam1 = bParam1;
}

void func_123(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (!func_121(iParam0))
	{
		return;
	}
	iVar0 = func_252(iParam0);
	if (bParam1)
	{
		if (func_251(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_251(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != (*Global_1835011)[77]->f_1)
			{
				func_256(func_253(iParam0));
			}
			if (func_106() != 0)
			{
				_0xb2a38826e5886e83(func_251(iParam0), 0);
			}
			else
			{
				_0xb2a38826e5886e83(func_251(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_257(iParam0);
	if (!func_119(func_258(0)))
	{
		func_255(iParam0, 3);
		func_5(bParam2);
		if (func_106() == -1)
		{
			if (bParam2 == 0)
			{
				_0x55f37f5f3f2475e1();
			}
			func_15(1);
		}
		func_259(iParam0, -1);
		if (bParam1 && !func_260(2))
		{
			func_220(&Global_0, 1024);
		}
		if (func_106() == -1)
		{
			func_261(&(Global_1347343->f_11), 536870912);
			func_262(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_263(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_264(0);
			}
		}
		if (func_106() == -1)
		{
			iVar1 = func_265(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_266();
				switch (iVar1)
				{
					case 0:
						func_267(0);
						break;
					case 1:
						func_267(1);
						break;
					case 2:
						func_267(2);
						break;
					case 3:
						func_267(3);
						break;
					case 4:
						func_267(4);
						break;
					case 5:
						func_267(5);
						break;
					case 6:
						func_267(5);
						break;
					case 7:
						func_267(7);
						break;
					case 8:
						func_267(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_253(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_267(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_253(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_267(11);
						break;
					default:
						iVar1 = func_266();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_268(0);
									break;
								case 1:
									func_268(1);
									break;
								case 2:
									func_268(2);
									break;
								case 3:
									func_268(3);
									break;
								case 4:
									func_268(4);
									break;
								case 5:
									func_268(5);
									break;
								case 6:
									func_268(5);
									break;
								case 7:
									func_268(7);
									break;
								case 8:
									func_268(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_269(1);
	}
	else
	{
		func_259(iParam0, -1);
		func_255(iParam0, 4);
	}
	func_270(iParam0, 0);
}

bool func_124(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_125(int iParam0)
{
	if (!func_124(iParam0))
	{
		return false;
	}
	return func_271(iParam0, 16777216);
}

int func_126(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_128(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = -1;
	if (!func_272())
	{
		return 0;
	}
	if (!func_273(iParam0, &iVar0, uParam2))
	{
		return 0;
	}
	if (func_274(iVar0))
	{
		return 0;
	}
	if (!func_275(iVar0))
	{
		return 0;
	}
	if (!func_276(iVar0))
	{
		return 0;
	}
	if (!func_277(&iVar0))
	{
		return 0;
	}
	*iParam1 = iVar0;
	return 1;
}

bool func_129(int iParam0)
{
	return iParam0 != -1;
}

bool func_130(int iParam0)
{
	if (!func_124(iParam0))
	{
		return false;
	}
	return func_271(iParam0, 33554432);
}

bool func_131(int iParam0)
{
	if (!func_278(iParam0))
	{
		return false;
	}
	return func_279(iParam0);
}

bool func_132(int iParam0, bool bParam1)
{
	switch (func_248(iParam0))
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

int func_133()
{
	return Global_40.f_4283.f_1;
}

int func_134(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_106() != -1)
			{
				return -1308265478;
			}
			if (func_131(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_106() != -1)
			{
				return -650528936;
			}
			if (func_131(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_106() != -1)
			{
				return -877373104;
			}
			if (func_131(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_136(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_282(func_281(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_283(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_283(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_283(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_283(iParam0));
	return 1;
}

void func_137(var uParam0)
{
	if (_does_volume_exist(iLocal_16))
	{
		return;
	}
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
		case 3:
			iLocal_16 = _create_volume_box(-268.8677f, 792.1881f, 118.7011f, 0f, 0f, 7.124719f, 35.4679f, 40.30593f, 9.127473f);
			break;
		case 4:
			iLocal_16 = _create_volume_box(-1799.767f, -355.932f, 164.8285f, 0f, 0f, 0f, 29.4004f, 39.85352f, 15.19435f);
			break;
		case 6:
			iLocal_16 = _create_volume_box(1354.038f, -1312.003f, 76.54549f, 0f, 0f, -20.45403f, 23.79081f, 16.56885f, 6.591243f);
			break;
	}
}

void func_138(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	func_284(iParam0, bParam1);
	_0x18262cafebb5fbe1(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

void func_139(int iParam0)
{
	_0x748c5f51a18cb8f0(0);
	if (!func_100(iParam0))
	{
		return;
	}
	func_285(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_124(iVar0))
		{
			if (func_286(func_30(iVar0, 1, 1)) == iParam0)
			{
				func_287(iVar0, 0);
				func_184(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_97(iVar1))
		{
			if (func_127(iVar1) == iParam0)
			{
				func_288(iVar1, 0);
			}
		}
		iVar1++;
	}
	_0x748c5f51a18cb8f0(1);
}

void func_140(int iParam0)
{
	if (!func_100(iParam0))
	{
		return;
	}
	func_141(iParam0, 0);
}

void func_141(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	iVar0 = func_289();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	_set_max_wanted_level_2(iVar0);
	if (iParam0 == func_99())
	{
		_set_bounty_for_player(player_id(), iParam1);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (&Global_40.f_358[iParam0] != iParam1)
		{
			func_290(iParam0, iParam1);
			func_291(iParam0);
		}
		Global_40.f_358[iParam0] = iParam1;
		if (!func_292(iParam0, 4))
		{
			if (&Global_40.f_358[iParam0] >= get_wanted_level_threshold(1))
			{
				func_293(iParam0, 1);
			}
		}
		else if (&Global_40.f_358[iParam0] == 0)
		{
			func_293(iParam0, 0);
		}
		return;
	}
	Global_1058888->f_42266[iParam0] = iParam1;
}

void func_142(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, vector3 vParam7, float fParam10, char* sParam11)
{
	if (uParam0->f_1000 < 4)
	{
		uParam0->f_868[uParam0->f_1000]->f_1 = iParam1;
		uParam0->f_868[uParam0->f_1000]->f_4 = { func_294(sParam2) };
		uParam0->f_868[uParam0->f_1000]->f_12 = { vParam3 };
		uParam0->f_868[uParam0->f_1000]->f_19 = iParam6;
		uParam0->f_868[uParam0->f_1000]->f_15 = { vParam7 };
		uParam0->f_868[uParam0->f_1000]->f_18 = fParam10;
		if (!is_string_null(sParam11))
		{
			uParam0->f_868[uParam0->f_1000]->f_8 = { func_294(sParam11) };
		}
		uParam0->f_1000++;
	}
}

void func_143(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, vector3 vParam7, float fParam10, char* sParam11)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	uParam0->f_950 = get_entity_model(iParam1);
	uParam0->f_950.f_1 = iParam1;
	uParam0->f_950.f_3 = { func_294(sParam2) };
	uParam0->f_950.f_11 = { vParam3 };
	uParam0->f_950.f_18 = iParam6;
	uParam0->f_950.f_14 = { vParam7 };
	uParam0->f_950.f_17 = fParam10;
	if (!is_string_null(sParam11))
	{
		uParam0->f_950.f_7 = { func_294(sParam11) };
	}
}

void func_144(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6)
{
	if (uParam0->f_998 < 4)
	{
		uParam0->f_782[uParam0->f_998] = iParam1;
		uParam0->f_782[uParam0->f_998]->f_2 = { func_294(sParam2) };
		uParam0->f_782[uParam0->f_998]->f_6 = { vParam3 };
		uParam0->f_782[uParam0->f_998]->f_9 = iParam6;
		uParam0->f_998++;
	}
}

void func_145(var uParam0)
{
	if (_does_volume_exist(iLocal_17))
	{
		return;
	}
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
		case 3:
			iLocal_17 = func_295(76);
			break;
		case 4:
			iLocal_17 = func_295(26);
			break;
		case 6:
			iLocal_17 = func_295(105);
			break;
	}
}

void func_146(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (!func_280(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

bool func_147(int iParam0, int iParam1)
{
	return (Global_40.f_4942[iParam0]->f_5 && iParam1) > 0;
}

void func_148(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_296(iParam0);
				func_297(iParam0, 0);
				break;
		}
		func_298(iParam0, iParam1);
		if (func_299(iParam1, &iVar0))
		{
			if (does_entity_exist(Global_1360165[iParam0]))
			{
				if (func_300(Global_1360165[iParam0], iVar0))
				{
					_0xa2f8b3b5fedfc100(Global_1360165[iParam0], iVar0);
				}
				_set_ped_body_component(Global_1360165[iParam0], _0x30569f348d126a5a(Global_1360165[iParam0]));
				_update_ped_variation(Global_1360165[iParam0], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_296(iParam0);
				func_297(iParam0, 1);
				break;
		}
		func_301(iParam0, iParam1);
		func_302(iParam0, Global_1360165[iParam0], 1);
	}
}

int func_149(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_150(int iParam0)
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

bool func_151(var uParam0)
{
	uParam0->f_1004 = 0;
	if (!func_303(uParam0))
	{
		return false;
	}
	if (!func_304(uParam0))
	{
		return false;
	}
	if (!func_305(&(uParam0->f_950)))
	{
		return false;
	}
	if (!func_306(uParam0))
	{
		return false;
	}
	if (!func_307(uParam0))
	{
		return false;
	}
	if (!func_308(uParam0))
	{
		return false;
	}
	if (!func_309(uParam0))
	{
		return false;
	}
	return true;
}

void func_152(var uParam0)
{
	func_310(uParam0);
	func_311(uParam0);
	func_312(uParam0);
	func_313(uParam0);
	func_314(uParam0);
	func_315(uParam0);
	func_316(uParam0);
}

void func_153(var uParam0)
{
	Var0 = { func_317(uParam0) };
	func_318(uParam0, &Var0);
}

void func_154(var uParam0)
{
	if (_does_volume_exist(uParam0->f_973))
	{
		uParam0->f_4 = uParam0->f_973;
	}
}

void func_155(var uParam0)
{
	sVar0 = func_319(uParam0);
	if (!is_string_null_or_empty(sVar0))
	{
		func_318(uParam0, sVar0);
		func_320(uParam0, sVar0, 0);
	}
}

bool func_156(var uParam0)
{
	if (func_321(uParam0, &(uParam0->f_984), 1, 1))
	{
		return true;
	}
	return false;
}

void func_157(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 6:
			uParam0->f_975 = "rho_sheriff_int_explosion";
			uParam0->f_974 = get_interior_at_coords(1353.237f, -1302.472f, 77.547f);
			if (_get_anim_scene_progress(uParam0->f_444) > 0.33f)
			{
				if (func_216(143))
				{
					func_217(144);
					func_218(143);
					func_219(1353.237f, -1302.472f, 77.547f, "rho_sheriff_int_JBO1_02", 144, 0, 1, 0, 0);
					activate_interior_entity_set(uParam0->f_974, uParam0->f_975, 0);
				}
			}
			break;
		case 2:
			if (_get_anim_scene_progress(uParam0->f_444) > 0.64f)
			{
				if (func_216(145))
				{
					func_217(146);
					func_218(145);
					func_219(-276.3671f, 802.3903f, 117.9588f, "val_jail_int_wallb", 146, 0, 1, 0, 0);
				}
			}
			break;
	}
}

bool func_158(var uParam0)
{
	switch (uParam0->f_971)
	{
		case 0:
			if (_does_anim_scene_exist(uParam0->f_444) && _is_anim_scene_loaded(uParam0->f_444, true, false))
			{
				if (!_is_anim_scene_started(uParam0->f_444, false))
				{
					start_anim_scene(uParam0->f_444);
					uParam0->f_971 = 1;
				}
			}
			break;
		case 1:
			if (func_322(uParam0->f_970))
			{
				func_323(uParam0);
			}
			func_324(uParam0);
			_0xc6dcc2a3a8825c85(1);
			if (!_0xef324e9550a394d5(uParam0->f_444))
			{
				if (func_325(uParam0))
				{
					func_326(uParam0->f_444);
					uParam0->f_971 = 3;
				}
			}
			else
			{
				uParam0->f_971 = 2;
			}
			break;
		case 2:
			do_screen_fade_out(0);
			if (func_327(uParam0->f_970, uParam0))
			{
				set_gameplay_cam_relative_heading(0f, 1f);
				set_gameplay_cam_relative_pitch(-10f, 1f);
				func_328(1);
				uParam0->f_971 = 3;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_159(var uParam0)
{
	func_329(uParam0);
	func_330(uParam0);
	func_331(uParam0);
	if (!func_40(uParam0->f_970))
	{
		func_80(uParam0);
		func_81(&(uParam0->f_950));
	}
	func_332(uParam0);
	func_333(uParam0);
}

void func_160()
{
	iVar0 = func_334();
	bVar1 = (!func_335(&Global_1935630, 4194304) || Global_1935630->f_17 > 0);
	if (does_entity_exist(Global_35))
	{
		if (bVar1)
		{
			Global_1935630->f_13 = (_0x69e181772886f48b(iVar0) || _0xf0fbfb9ab15f7734(iVar0, 0, 0));
			Global_1935630->f_15 = _0x148e7ac8141c9e64(iVar0);
			Global_1935630->f_14 = _0x9945a3e2528a02e8(iVar0);
			Global_1935630->f_16 = _0xf46108c50a22b029();
			Global_1935630->f_17 = _get_wanted_intensity_for_player(iVar0);
			Global_1935630->f_26 = _0x9d5c9a5a3321b128(iVar0);
			Global_1935630->f_21 = _0xdaefdfdb2aeece37(_get_hud_player_crime_type(iVar0), 0);
			Global_1935630->f_18 = _0xad401c63158acbaa(iVar0);
			if (Global_1935630->f_18)
			{
				_0x9c5bd8c562565ce6(&Var2);
				Global_1935630->f_19 = Var2.f_10;
				Global_1935630->f_23 = Var2.f_11 == 6;
			}
			Global_1935630->f_20 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (_0x532c5fddb986ee5c(iVar0, iVar19, &Var20))
				{
					if (Var20.f_10)
					{
						iVar37 = _0xdaefdfdb2aeece37(Var20, 0);
						if (iVar37 > Global_1935630->f_20)
						{
							Global_1935630->f_20 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_336();
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		Global_1935630->f_41 = Global_1935630->f_40;
	}
	Global_1935630->f_22 = is_player_being_arrested(iVar0, true);
	Global_1935630->f_12 = is_entity_dead(Global_35);
	if (!Global_1935630->f_12)
	{
		get_current_ped_weapon(Global_35, &(Global_1935630->f_44), false, 0, false);
		Global_1935630->f_40 = get_mount(Global_35);
		if (Global_1572887->f_12 == -1 && Global_1935630 & 262144 != 0)
		{
			set_ped_reset_flag(Global_35, 174, true);
		}
		if (Global_1572887->f_12 != -1)
		{
			set_ped_reset_flag(Global_35, 154, true);
		}
		else if (Global_1935630 & 65536 != 0)
		{
			set_ped_reset_flag(Global_35, 154, true);
		}
		if (Global_1572887->f_12 == -1)
		{
			if (!func_131(9))
			{
				set_ped_reset_flag(Global_35, 135, true);
			}
			if (!func_131(14))
			{
				set_ped_reset_flag(Global_35, 144, true);
			}
			if (!func_131(36))
			{
				_uiprompt_disable_prompt_type_this_frame(9);
			}
			if (_0x139efb0a71dd9011())
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, 1287709438, false);
				disable_control_action(0, 1934388793, false);
				disable_control_action(0, -209515122, false);
				disable_control_action(0, -824104112, false);
				disable_control_action(0, 516589524, false);
				disable_control_action(0, 1390807691, false);
				disable_control_action(0, 1663574939, false);
				_uiprompt_enable_prompt_type_this_frame(6);
			}
			else if ((is_screen_faded_out() && func_337()) && !func_338(0, 0, 1))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (is_control_pressed(0, 255439828))
			{
				disable_control_action(0, 130948705, false);
				disable_control_action(0, 42190210, false);
				disable_control_action(0, 1623727326, false);
				disable_control_action(0, -922478227, false);
				disable_control_action(0, 1751579194, false);
				disable_control_action(0, -2023713047, false);
			}
			if (_is_weapon_sniper(Global_1935630->f_44) && is_first_person_aim_cam_active())
			{
				disable_control_action(0, 255439828, false);
			}
		}
	}
	else
	{
		if (func_106() == -1 && _0x139efb0a71dd9011())
		{
			_uiprompt_enable_prompt_type_this_frame(6);
		}
		Global_1935630->f_44 = 0;
		Global_1935630->f_40 = 0;
	}
}

void func_161(int iParam0, bool bParam1)
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

void func_162()
{
	if (func_106() != -1)
	{
		return;
	}
	func_109();
}

void func_163(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_164(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

void func_165(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_166(int iParam0)
{
	Global_1310720->f_10 = iParam0;
}

int func_167(bool bParam0)
{
	if (!bParam0 && func_105(373691918))
	{
		_0xe9ac8466abe484bb(false, 0);
		_0xc61edebf16cd9668(752193127, true, 0);
		return 0;
	}
	_0xe9ac8466abe484bb(bParam0, 0);
	return 1;
}

void func_168()
{
	if (!func_339())
	{
		if (func_112())
		{
			func_340(1);
			func_341();
			_0x4f806a6cfed89468(Global_35, 1);
		}
	}
}

void func_169(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_170(var uParam0)
{
	if (_does_volume_exist(uParam0->f_973))
	{
		_delete_volume(uParam0->f_973);
	}
}

void func_171(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_342(iParam0, 0, 0);
	if (func_343(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_344(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_345(iParam0, 1);
			}
			else
			{
				func_346(iParam0, 1);
			}
		}
		else
		{
			func_347(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_348())
	{
	}
	else if (network_is_in_session())
	{
	}
}

float func_172(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 2:
			return 200f;
		case 4:
			return 200f;
		case 6:
			return 200f;
	}
	return 200f;
}

struct<4> func_173(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { -272.4783f, 809.284f, 118.3711f };
					Var0.f_3 = 103.992f;
					break;
				case 1:
					Var0 = { -274.1379f, 808.532f, 118.3723f };
					Var0.f_3 = 87.475f;
					break;
				case 2:
					Var0 = { -309.8212f, 780.2781f, 117.7613f };
					Var0.f_3 = 7.6015f;
					break;
				case 3:
					Var0 = { -320.2737f, 799.5449f, 116.8817f };
					Var0.f_3 = 279.7465f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -276.9078f, 809.5782f, 118.3781f };
					Var0.f_3 = 287.1772f;
					break;
				case 1:
					Var0 = { -309.8212f, 780.2781f, 117.7613f };
					Var0.f_3 = 7.6015f;
					break;
				case 2:
					Var0 = { -292.2865f, 747.412f, 117.2355f };
					Var0.f_3 = 156.9073f;
					break;
				case 3:
					Var0 = { -313.3065f, 726.3862f, 119.6276f };
					Var0.f_3 = 34.53f;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1812.424f, -352.8654f, 160.4154f };
					Var0.f_3 = 56.8545f;
					break;
				case 1:
					Var0 = { -1815.833f, -353.5223f, 160.4529f };
					Var0.f_3 = 316.3524f;
					break;
				case 2:
					Var0 = { -1805.574f, -426.7131f, 157.7882f };
					Var0.f_3 = 347.183f;
					break;
				case 3:
					Var0 = { -1775.714f, -438.922f, 153.9937f };
					Var0.f_3 = 217.3517f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1358.375f, -1303.417f, 76.7606f };
					Var0.f_3 = 196.0932f;
					break;
				case 1:
					Var0 = { 1330.127f, -1367.839f, 79.504f };
					Var0.f_3 = 72.4056f;
					break;
				case 2:
					Var0 = { 1362.746f, -1268.791f, 76.9478f };
					Var0.f_3 = 162.3188f;
					break;
				case 3:
					Var0 = { 1238.99f, -1309.599f, 75.9094f };
					Var0.f_3 = 113.614f;
					break;
			}
			break;
		default:
			Var0 = { 0f, 0f, 0f };
			Var0.f_3 = 0f;
			break;
	}
	return Var0;
}

bool func_174(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_175(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_349(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

int func_176(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (uParam0->f_868[iVar0]->f_1 == iParam1)
		{
			return uParam0->f_868[iVar0]->f_2;
		}
		iVar0++;
	}
	return 0;
}

void func_177(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_350(uParam0, iParam1, sParam2))
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

void func_178(int iParam0)
{
	if (does_group_exist(iLocal_14) && does_entity_exist(iParam0))
	{
		func_351(&iParam0, &iLocal_14, 0, 1, 1, 1, 0);
	}
}

int func_179(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (uParam0->f_868[iVar0]->f_1 == iParam1)
		{
			return uParam0->f_868[iVar0]->f_3;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_180(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 1:
			StringCopy(&cVar0, "JBO3_COMEON", 24);
			break;
		case 2:
			StringCopy(&cVar0, "JBO7_COMEON", 24);
			break;
		case 4:
			StringCopy(&cVar0, "JBO5_COMEON", 24);
			break;
		case 6:
			StringCopy(&cVar0, "JBO1_COMEON", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			break;
	}
	return cVar0;
}

char* func_181(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_182(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_352(vParam1, uParam0);
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

void func_183()
{
	_0xf45e46deecf7df6e(6144, 0, 0, -1, -1);
	set_vehicle_density_multiplier_this_frame(0f);
	_0xab0d553fe20a6e25(0.25f);
	set_random_vehicle_density_multiplier_this_frame(0f);
	set_parked_vehicle_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0.25f);
}

void func_184(int iParam0, bool bParam1, int iParam2)
{
	if (!func_124(iParam0))
	{
		return;
	}
	if (func_125(iParam0) && !bParam1)
	{
		return;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_5))
	{
		iVar0 = (*Global_1888801)[iParam0]->f_5;
	}
	else
	{
		iVar0 = func_295(iParam0);
	}
	bVar1 = func_271(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_353(iParam0);
		if (iParam2 > iVar2 || !func_355(func_354(iParam0)))
		{
			func_356(iParam0, func_98());
			func_357(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_358(iParam0, 33554432);
			if (_does_volume_exist(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				_0xf2a2177ac848b3a8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_359(iParam0, 33554432);
		func_356(iParam0, -15);
		if (_does_volume_exist(iVar0))
		{
			_0xf2a2177ac848b3a8(iVar0, 1, 1);
		}
	}
	func_360(iParam0);
}

bool func_185(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 4:
			if (func_361(Global_35, func_176(uParam0, 1)) < 10f && func_361(Global_35, func_176(uParam0, 7)) < 10f)
			{
				return true;
			}
			break;
		case 2:
			if (func_361(Global_35, func_176(uParam0, 0)) < 10f && func_361(Global_35, func_176(uParam0, 7)) < 10f)
			{
				return true;
			}
			break;
		case 6:
			if (func_361(Global_35, func_176(uParam0, 0)) < 10f)
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_186(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 1:
			StringCopy(&cVar0, "JBO3_LOSTTHEM", 24);
			break;
		case 2:
			StringCopy(&cVar0, "JBO7_LOSTTHEM", 24);
			break;
		case 4:
			StringCopy(&cVar0, "JBO5_LOSTTHEM", 24);
			break;
		case 6:
			StringCopy(&cVar0, "JBO1_LOSTTHEM", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			break;
	}
	return cVar0;
}

Vector3 func_187(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 7:
			StringCopy(&cVar0, "JBO4_HBANT", 24);
			break;
		case 10:
			StringCopy(&cVar0, "JBO8_HBANT", 24);
			break;
		case 6:
			StringCopy(&cVar0, "JBO1_BANT", 24);
			break;
		case 1:
			StringCopy(&cVar0, "JBO3_BANT", 24);
			break;
		case 2:
			StringCopy(&cVar0, "JBO7_BANT", 24);
			break;
		case 4:
			StringCopy(&cVar0, "JBO5_SPLIT", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			break;
	}
	return cVar0;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

Vector3 func_189(int iParam0, bool bParam1)
{
	vVar0 = { 0f, 0f, 0f };
	if (!func_124(iParam0))
	{
		return vVar0;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_3))
	{
		vVar0 = { _0xf70f00013a62f866((*Global_1888801)[iParam0]->f_3) };
		if (bParam1)
		{
			if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

int func_190(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			if (!is_ped_on_mount(iParam0) && !does_entity_exist(_get_rider_of_mount(iParam1, false)))
			{
				set_entity_invincible(iParam1, bParam2);
				if (get_script_task_status(iParam0, 1868526510, true) != 1)
				{
					task_mount_animal(iParam0, iParam1, iParam4, -1, fParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_191(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (does_entity_exist(uParam0->f_868[iVar0]->f_2))
		{
			if (!_is_ped_getting_into_a_mount_seat(uParam0->f_868[iVar0]->f_2, true))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_192(var uParam0, int iParam1)
{
	func_362(uParam0, iParam1);
	uParam0->f_26 = 0;
	return 0;
}

void func_193(var uParam0, int iParam1)
{
	uParam0->f_26 = iParam1;
}

bool func_194(var uParam0)
{
	if (is_screen_faded_out())
	{
		if (_is_anim_scene_metadata_loaded(uParam0->f_25, false))
		{
			if (!_is_anim_scene_loading(uParam0->f_25, true) && !_is_anim_scene_loaded(uParam0->f_25, true, false))
			{
				load_anim_scene(uParam0->f_25);
			}
			if (_is_anim_scene_loaded(uParam0->f_25, true, false))
			{
				_0xe296208c273bd7f0(0, 0, 0, 17, 1, 0);
				set_anim_scene_entity(uParam0->f_25, "ARTHUR", Global_35, 0);
				do_screen_fade_in(240);
				start_anim_scene(uParam0->f_25);
				return true;
			}
		}
	}
	return false;
}

bool func_195(var uParam0)
{
	_0xe296208c273bd7f0(0, 0, 0, 17, 1, 0);
	if (_get_anim_scene_progress(uParam0->f_25) > 0.85f)
	{
		if (!is_screen_faded_out())
		{
			do_screen_fade_out(500);
			return true;
		}
	}
	return false;
}

int func_196(int iParam0)
{
	return _money_get_cash_balance();
}

void func_197(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_363(iParam0);
	if (bParam3)
	{
		func_364(iParam0, sParam1, iParam2);
	}
}

var func_198()
{
	return &Global_1899515;
}

bool func_199(int iParam0)
{
	func_201(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_200(int iParam0)
{
	func_201(iParam0, &iVar0, &iVar1);
	func_365(iVar0, iVar1);
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_202(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_366(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_367(iParam0))
	{
		return false;
	}
	if (func_368(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_369(iParam0, 1)) || func_260(32768))
	{
		if (!func_369(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_370())
	{
		return false;
	}
	return true;
}

void func_203(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_204(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

void func_205(var uParam0)
{
	if (func_371(uParam0->f_1))
	{
		func_372(uParam0->f_1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
}

void func_206(var uParam0)
{
	if (func_373(uParam0->f_1))
	{
		func_374(uParam0->f_3, uParam0->f_1, 1, 0, 0);
	}
}

void func_207(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_375(iParam0))
	{
		return;
	}
	iVar0 = func_376(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_377(iVar0);
	func_378(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_379(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_380(iVar0))
		{
			return;
		}
	}
	func_381(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_106() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_208(int iParam0, bool bParam1, int iParam2)
{
	if (!func_119(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_120(iParam0) && !func_121(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_251(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_120(iParam0))
	{
		iParam2 = -1;
	}
	if (func_249(iParam0) == 3 || (func_249(iParam0) == 1 && _0x01f4d242765c6b24(func_251(iParam0))))
	{
		func_382(func_252(iParam0), func_251(iParam0), iParam2);
		if ((!func_119(Global_1572864->f_8) && !func_338(0, 1, 0)) && !func_335(&Global_1935630, 32768))
		{
			iVar0 = func_265(iParam0);
			if (iVar0 != -1)
			{
				func_383(0);
			}
			else if (func_252(iParam0) == 8)
			{
				iVar0 = func_266();
				if (iVar0 != -1)
				{
					func_383(0);
				}
			}
		}
	}
	func_255(iParam0, 0);
	if (func_258(0) == iParam0)
	{
		func_5(1);
		func_15(0);
		func_269(1);
	}
	func_270(iParam0, 1);
	func_384(iParam0);
}

bool func_209(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_210(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

void func_211(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_385(iParam0, iParam1, bParam2);
}

int func_212(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_282(func_281(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_283(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_283(iParam0));
	return 1;
}

void func_213(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (!func_280(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_214(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam0);
	_0x74c2b3dc0b294102(iParam0);
}

void func_215(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_216(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_1934765->f_30[iVar1]), iVar2);
}

void func_217(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_1934765->f_21[iVar1], iVar2);
}

void func_218(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_1934765->f_21[iVar1], iVar2);
}

void func_219(vector3 vParam0, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	bVar0 = func_386(iParam4);
	if (!is_valid_interior(iParam8))
	{
		if (iParam5 != 0)
		{
			iParam8 = get_interior_at_coords_with_typehash(vParam0, iParam5);
		}
		else
		{
			iParam8 = get_interior_at_coords(vParam0);
		}
	}
	if (is_valid_interior(iParam8))
	{
		if (func_216(iParam4) != bVar0 || is_interior_entity_set_active(iParam8, sParam3) != bVar0)
		{
			if (func_387(iParam8, iParam6, bParam7))
			{
				if (bVar0)
				{
					activate_interior_entity_set(iParam8, sParam3, 0);
					func_388(iParam4);
					if (bParam7)
					{
						_0x2533f2ab0eb9c6f9(iParam8, 1);
						_0xfe2b3d5500b1b2e4(iParam8, 1);
					}
				}
				else
				{
					deactivate_interior_entity_set(iParam8, sParam3, true);
					func_389(iParam4);
					if (bParam7)
					{
						_0x2533f2ab0eb9c6f9(iParam8, 0);
						_0xfe2b3d5500b1b2e4(iParam8, 0);
					}
				}
			}
		}
	}
}

void func_220(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_221()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_224(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_390();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_391(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_131(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_392())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_393(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_390();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_394(iVar1);
		func_396(func_395(), 0, 4000);
		func_397(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_398(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_400(func_399(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_223(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_401(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_402(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_402(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_400(func_399(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_223(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_401(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_402(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_402(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_399(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_403(10, 1);
	}
}

void func_225(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

struct<4> func_226(int iParam0)
{
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = 0f;
	if (!func_124(iParam0))
	{
		return Var0;
	}
	if (func_125(iParam0))
	{
		bVar4 = true;
	}
	switch (iParam0)
	{
		case 78:
			if (!bVar4)
			{
				Var0 = { 2918.7f, 1321.6f, 44.3f };
				Var0.f_3 = 69.27f;
			}
			else
			{
				Var0 = { 2821.36f, 1121.52f, 48.54f };
				Var0.f_3 = 79.23f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 105:
			if (!bVar4)
			{
				Var0 = { 1344.9f, -1307.3f, 76.6f };
				Var0.f_3 = 343.68f;
			}
			else
			{
				Var0 = { 1155.33f, -1155.41f, 71.29f };
				Var0.f_3 = 156.78f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 26:
			if (!bVar4)
			{
				Var0 = { -1805.89f, -344.45f, 164.65f };
				Var0.f_3 = 99f;
			}
			else
			{
				Var0 = { -1706.68f, -450.12f, 150f };
				Var0.f_3 = 295.67f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 38:
			if (!bVar4)
			{
				Var0 = { -751.16f, -1267.38f, 43.32f };
				Var0.f_3 = 115.96f;
			}
			else
			{
				Var0 = { -1065.66f, -1211.78f, 63.78f };
				Var0.f_3 = 178.78f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 76:
			if (!bVar4)
			{
				Var0 = { -279.45f, 789.98f, 118.63f };
				Var0.f_3 = 165.4f;
			}
			else
			{
				Var0 = { -108f, 586.45f, 114.08f };
				Var0.f_3 = 164.78f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 5:
			if (!bVar4)
			{
				Var0 = { 2525.45f, -1310.37f, 49.07f };
				Var0.f_3 = 266.56f;
			}
			else
			{
				Var0 = { 2147.36f, -1336.09f, 42.96f };
				Var0.f_3 = 352f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 115:
			Var0 = { -5525.004f, -2923.18f, -2.0688f };
			Var0.f_3 = 114.01f;
			func_404(&Var0, 50, 10, 0);
			return Var0;
	}
	return Var0;
}

struct<4> func_227(int iParam0)
{
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = 0f;
	if (!func_124(iParam0))
	{
		return Var0;
	}
	iVar4 = func_405();
	func_406(iVar4, &Var0, &(Var0.f_3));
	return Var0;
}

void func_228(int iParam0, int iParam1, bool bParam2)
{
	func_407(iParam0, iParam1, bParam2, 1);
}

void func_229(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_230(var uParam0)
{
	Var0 = { func_226(uParam0->f_60) };
	Var4 = { func_227(uParam0->f_60) };
	iVar8 = 0;
	iVar9 = 0;
	if (func_408(0))
	{
		Local_1194.f_10 = 0;
		Local_1194 = 1;
		Local_1194.f_5 = 1;
		Local_1194.f_1 = 1;
		Local_1194.f_6 = { Var0 };
		Local_1194.f_9 = Var0.f_3;
		iLocal_43 = func_409(&uLocal_1193, &Local_1194);
		if (iVar1190 == 2)
		{
			iVar8 = 1;
		}
	}
	else
	{
		iVar8 = 1;
	}
	if (func_408(1))
	{
		Local_1206.f_10 = 1;
		Local_1206 = 1;
		Local_1206.f_1 = 1;
		Local_1206.f_5 = 1;
		Local_1206.f_6 = { Var4 };
		Local_1206.f_9 = Var4.f_3;
		iLocal_44 = func_409(&uLocal_1205, &Local_1206);
		if (iVar1202 == 2)
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = 1;
	}
	if (iVar8 && iVar9)
	{
		return true;
	}
	return false;
}

int func_231(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	func_12(vParam1, fParam4, 0);
	clear_ped_tasks(iParam0, 1, 0);
	iVar0 = -1805387726;
	iVar1 = _find_closest_active_scenario_point_of_type(vParam1, iVar0, fParam4, 1, false);
	if (_does_scenario_point_exist(iVar1))
	{
		_task_use_scenario_point(iParam0, iVar1, 0, -1, true, bParam5, iVar0, false, -1f, false);
	}
	else
	{
		task_stand_still(iParam0, -1);
	}
	return 1;
}

bool func_232(var uParam0)
{
	switch (iVar1187)
	{
		case 0:
			switch (uParam0->f_60)
			{
				case 76:
					vVar0 = { -275.5043f, 805f, 118.3801f };
					break;
				case 78:
					vVar0 = { 2910.3f, 1310.8f, 44.4f };
					break;
				case 105:
					vVar0 = { 1359.6f, -1304.5f, 77.3f };
					break;
				case 38:
					vVar0 = { -758.5f, -1269.2f, 43.8f };
					break;
				case 5:
					vVar0 = { 2514.3f, -1308.8f, 48.7f };
					break;
				case 26:
					vVar0 = { -1808.2f, -350.1f, 164.4f };
					break;
				case 115:
					vVar0 = { -5528.724f, -2929.566f, -1.3609f };
					break;
			}
			clear_ped_tasks_immediately(Global_35, true, true);
			if (!is_player_teleport_active())
			{
				start_player_teleport(player_id(), vVar0, uParam0->f_33, false, true, false, false);
			}
			else
			{
				uParam0->f_41 = get_game_timer();
				func_410(&uLocal_1190, 1);
			}
			break;
		case 1:
			if (!_has_player_teleport_finished(player_id()))
			{
				if (uParam0->f_41 + 6000 < get_game_timer())
				{
					stop_player_teleport();
				}
			}
			else
			{
				uParam0->f_41 = get_game_timer();
				func_410(&uLocal_1190, 2);
			}
			break;
		case 2:
			func_411(1, 0);
			func_412();
			switch (func_413(func_62()))
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 8:
					if (!func_414(func_62()) && uParam0->f_41 + 6000 > get_game_timer())
					{
					}
					else
					{
						set_focus_pos_and_vel(uParam0->f_27, 0f, 0f, 0f);
						func_410(&uLocal_1190, 3);
					}
					break;
			}
			break;
		case 3:
			if (!_0xcf45df50c7775f2a())
			{
				_0x387ad749e3b69b70(uParam0->f_27, cos((uParam0->f_33 + 90f)), sin((uParam0->f_33 + 90f)), 0f, 500f, 4);
				uParam0->f_41 = get_game_timer();
			}
			else if (!_0x0909f71b5c070797())
			{
				if (uParam0->f_41 + 6000 < get_game_timer())
				{
					func_410(&uLocal_1190, 4);
				}
			}
			else
			{
				func_410(&uLocal_1190, 4);
			}
			break;
		case 4:
			if (_0xcf45df50c7775f2a())
			{
				clear_focus();
				_0x5a8b01199c3e79c3();
			}
			return true;
	}
	return false;
}

bool func_233(var uParam0)
{
	if (does_cam_exist(*uParam0))
	{
		render_script_cams(true, false, 3000, true, false, 0);
		do_screen_fade_in(240);
		return true;
	}
	else
	{
		switch (uParam0->f_60)
		{
			case 76:
				vVar0 = { -260.7436f, 793.9495f, 121.5746f };
				vVar3 = { -2.9074f, 0f, 80.7498f };
				fVar6 = 37.7527f;
				break;
			case 105:
				vVar0 = { 1365.147f, -1320.555f, 79.1558f };
				vVar3 = { -3.2928f, 0f, 44.6132f };
				fVar6 = 37.7527f;
				break;
			case 78:
				vVar0 = { 2911.884f, 1297.416f, 46.0857f };
				vVar3 = { -0.2822f, 0f, -12.0966f };
				fVar6 = 37.7527f;
				break;
			case 38:
				vVar0 = { -745.5821f, -1255.027f, 46.204f };
				vVar3 = { -3.8931f, 0f, 158.8413f };
				fVar6 = 37.7527f;
				break;
			case 26:
				vVar0 = { -1794.439f, -342.4006f, 166.2039f };
				vVar3 = { -2.2206f, 0f, 146.2695f };
				fVar6 = 37.7527f;
				break;
			case 5:
				vVar0 = { 2526.214f, -1321.603f, 51.8709f };
				vVar3 = { -1.1109f, 0f, 21.3832f };
				fVar6 = 37.7527f;
				break;
			case 115:
				vVar0 = { -5530.495f, -2941.743f, 0.393f };
				vVar3 = { -6.1555f, 0f, -32.786f };
				fVar6 = 51.282f;
				break;
		}
		*uParam0 = create_camera_with_params(26379945, vVar0, vVar3, fVar6, true, 2);
	}
	return false;
}

bool func_234(var uParam0)
{
	if (!func_415(&(uParam0->f_52)))
	{
		func_416(&(uParam0->f_52), 0);
	}
	switch (uParam0->f_60)
	{
		case 76:
			vVar0 = { -274.6761f, 797.9018f, 118.9569f };
			break;
		case 105:
			vVar0 = { 1357.729f, -1311.525f, 76.9169f };
			break;
		case 78:
			vVar0 = { 2914.548f, 1309.378f, 44.3854f };
			break;
		case 38:
			vVar0 = { -752.4509f, -1269.742f, 43.3936f };
			break;
		case 26:
			vVar0 = { -1803.195f, -352.7251f, 164.1432f };
			break;
		case 5:
			vVar0 = { 2519.256f, -1308.59f, 48.9806f };
			break;
		case 115:
			vVar0 = { -5526.707f, -2933.721f, -1.9662f };
			break;
	}
	if (!uParam0->f_57)
	{
		if (is_ped_still(Global_35))
		{
			uParam0->f_57 = 1;
			task_follow_nav_mesh_to_coord(Global_35, vVar0, 1f, 20000, 0.25f, 0, 40000f);
		}
	}
	if (func_417(Global_36, vVar0, 1f, 0) || func_418(&(uParam0->f_52)) >= 10f)
	{
		set_player_control(player_id(), true, 0, false);
		func_419(uParam0);
		return true;
	}
	return false;
}

bool func_235(int iParam0, int iParam1)
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
	if (func_420(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_420(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_420(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_420(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_420(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_420(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_420(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_420(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_236(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
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

int func_237(int iParam0)
{
	iVar0 = func_422(func_421(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_238(int iParam0)
{
	if (func_239(81053684, iParam0))
	{
		return true;
	}
	if (func_239(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_239(int iParam0, int iParam1)
{
	iVar1 = func_422(func_421(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_423(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_240()
{
	return Global_1946804->f_2792;
}

bool func_241(int iParam0)
{
	if (func_424())
	{
		return false;
	}
	if (!func_425(iParam0, 0))
	{
		return false;
	}
	if (!func_426(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_242(int iParam0, int iParam1)
{
	bVar3 = func_427(iParam0);
	if (func_428(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_113(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_429();
			}
			else
			{
				iVar0 = func_430();
			}
		}
		else if (func_420(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_431();
		}
		else
		{
			iVar0 = func_432();
		}
	}
	else if (func_238(&iVar2))
	{
		if (func_428(iVar2, -1303648999))
		{
			iVar0 = func_429();
		}
		else
		{
			iVar0 = func_430();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_431();
	}
	else
	{
		iVar0 = func_432();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_243(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (Global_1946804->f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!func_433(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_434(iParam0);
	return func_435(iParam1, iVar0, bParam2, 1);
}

int func_244()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_245(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_246(int iParam0)
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

int func_247(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_436(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_244())
	{
		return -1;
	}
	iVar0 = func_245(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_437(iVar1, 0);
	func_438(iVar1, 0);
	func_439(iVar1, 0);
	func_440(iVar1, 0);
	func_441(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_442(iVar1, iParam4);
	}
	return iVar1;
}

int func_248(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_249(iParam0);
}

int func_249(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_443(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_250(int iParam0)
{
	return func_248(iParam0) == 0;
}

int func_251(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_252(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	return func_444(func_246(iParam0));
}

int func_253(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_445(func_246(iParam0));
}

int func_254(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_446(func_246(iParam0));
}

void func_255(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	func_437(iParam0, iParam1);
}

void func_256(int iParam0)
{
	if (!func_95(iParam0))
	{
		return;
	}
	uVar0 = (*Global_1835011)[iParam0]->f_8;
	iVar1 = get_hash_key(&uVar0);
	if (_uilog_is_entry_registered(1, iVar1))
	{
		_uilog_remove_entry(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { (*Global_1835011)[iParam0]->f_18 };
	MemCopy(&Var5, {(*Global_1835011)[iParam0]->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	_uilog_add_entry_hash(1, iVar1, vVar2, (*Global_1835011)[iParam0]->f_26, get_hash_key(&Var13), uVar21);
	_uilog_set_entry_icon_texture(1, iVar1, (*Global_1835011)[iParam0]->f_26, 676312963);
}

void func_257(int iParam0)
{
	if (!func_119(iParam0))
	{
		return;
	}
	func_438(iParam0, func_447(iParam0) + 1);
}

int func_258(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_259(int iParam0, int iParam1)
{
	iVar0 = func_448(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_449(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_450(iVar0, iParam1);
	return iParam1;
}

bool func_260(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_261(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_262(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_263(bool bParam0)
{
	func_451(bParam0);
	func_452(bParam0);
	func_453(bParam0);
	func_454(bParam0);
	func_455(bParam0);
	func_456(bParam0);
	func_457(bParam0);
	func_458(bParam0);
}

void func_264(bool bParam0)
{
	if (func_106() != -1)
	{
		return;
	}
	if (bParam0 && _0x200373a8df081f22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_77(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_77(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_459(1, bParam0, 1);
	func_460();
	Global_40.f_11095.f_43 = bParam0;
}

int func_265(int iParam0)
{
	switch (func_252(iParam0))
	{
		case 1:
			iVar0 = func_253(iParam0);
			return func_461(iVar0);
		case 8:
			iVar1 = func_253(iParam0);
			if (func_462((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_463(iVar1);
			}
			break;
	}
	return -1;
}

int func_266()
{
	if (!func_132((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_132((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_132((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_132((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_132((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_132((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_132((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_267(int iParam0)
{
	iVar0 = 0;
	if (func_106() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_464(Global_1898077->f_7, Global_1898077->f_3);
}

void func_268(int iParam0)
{
	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_106() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_465(Global_1898077->f_7, Global_1898077->f_4);
}

void func_269(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_270(int iParam0, bool bParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (func_258(0) != iParam0)
	{
		return;
	}
	if (func_466(iParam0))
	{
		if (bParam1)
		{
			func_467(-525676072);
		}
		else
		{
			func_468(-525676072);
		}
	}
}

bool func_271(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_272()
{
	if (!is_bit_set(Global_40.f_11182, 0))
	{
		set_bit(&(Global_40.f_11182), 0);
		return false;
	}
	return true;
}

bool func_273(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = -1;
	iVar0 = 3000;
	iVar1 = 5000;
	if (!func_124(iParam0))
	{
		return false;
	}
	if (!func_469(iParam0))
	{
		return false;
	}
	if (uParam2->f_1002 < iVar0)
	{
	}
	switch (iParam0)
	{
		case 76:
			if (uParam2->f_1002 >= iVar0 && !is_bit_set(Global_40.f_11182, 3))
			{
				*iParam1 = 3;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0 && !is_bit_set(Global_40.f_11182, 1))
			{
				*iParam1 = 1;
				return true;
			}
			else if (uParam2->f_1002 >= iVar1 && !is_bit_set(Global_40.f_11182, 2))
			{
				*iParam1 = 2;
				return true;
			}
			break;
		case 26:
			if (uParam2->f_1002 >= iVar0 && get_entity_model(Global_35) == 225514697)
			{
				*iParam1 = 4;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0)
			{
				*iParam1 = 5;
				return true;
			}
			break;
		case 105:
			if (uParam2->f_1002 >= iVar1)
			{
				*iParam1 = 6;
				return true;
			}
			break;
		case 78:
			if (uParam2->f_1002 >= iVar0 && !is_bit_set(Global_40.f_11182, 7))
			{
				*iParam1 = 7;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0 && !is_bit_set(Global_40.f_11182, 8))
			{
				*iParam1 = 8;
				return true;
			}
			break;
		case 38:
			if (uParam2->f_1002 >= iVar0)
			{
				*iParam1 = 9;
				return true;
			}
			break;
		case 5:
			if (uParam2->f_1002 >= iVar0 && get_entity_model(Global_35) == 225514697)
			{
				*iParam1 = 10;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0)
			{
				*iParam1 = 11;
				return true;
			}
			break;
	}
	return false;
}

bool func_274(int iParam0)
{
	if (!func_129(iParam0))
	{
		return false;
	}
	return is_bit_set(Global_40.f_11182, iParam0);
}

bool func_275(int iParam0)
{
	if (!func_129(iParam0))
	{
		return false;
	}
	if (!func_470())
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_471(7) && func_471(0))
			{
				return true;
			}
			break;
		case 3:
			if (func_471(0))
			{
				return true;
			}
			break;
		case 4:
			if (func_471(7) && func_471(1))
			{
				return true;
			}
			break;
		case 5:
			return true;
		case 6:
			if (func_471(0))
			{
				return true;
			}
			break;
		case 7:
			if (func_471(5))
			{
				return true;
			}
			break;
		case 8:
			if (func_471(7))
			{
				return true;
			}
			break;
		case 9:
			if (func_471(13))
			{
				return true;
			}
			break;
		case 10:
			if (func_471(5))
			{
				return true;
			}
			break;
		case 11:
			return true;
	}
	return false;
}

bool func_276(int iParam0)
{
	if (!func_129(iParam0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = get_entity_model(Global_35);
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return func_472(iVar0);
		case 4:
			return func_472(iVar0);
		case 5:
			return !func_472(iVar0);
		case 6:
			return func_472(iVar0);
		case 7:
		case 8:
			return func_472(iVar0);
		case 9:
			return !func_472(iVar0);
		case 10:
			return func_472(iVar0);
		case 11:
			return !func_472(iVar0);
	}
	return false;
}

bool func_277(int iParam0)
{
	if (!is_bit_set(Global_40.f_11182, 12) && !is_bit_set(Global_40.f_11182, *iParam0))
	{
		set_bit(&(Global_40.f_11182), 12);
		return true;
	}
	if (is_bit_set(Global_40.f_11182, *iParam0) && !is_bit_set(Global_40.f_11182, 12))
	{
		set_bit(&(Global_40.f_11182), 12);
		return false;
	}
	if ((is_bit_set(Global_40.f_11182, *iParam0) && is_bit_set(Global_40.f_11182, 12)) && !is_bit_set(Global_40.f_11182, 13))
	{
		set_bit(&(Global_40.f_11182), 13);
		return false;
	}
	if (!is_bit_set(Global_40.f_11182, 13) && is_bit_set(Global_40.f_11182, 12))
	{
		set_bit(&(Global_40.f_11182), 13);
		return false;
	}
	if (is_bit_set(Global_40.f_11182, 12) && is_bit_set(Global_40.f_11182, 13))
	{
		clear_bit(&(Global_40.f_11182), 13);
		clear_bit(&(Global_40.f_11182), 12);
		return false;
	}
	return true;
}

bool func_278(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_279(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_280(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_281(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_282(int iParam0)
{
	return iParam0 != 0;
}

int func_283(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_284(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_285(int iParam0, bool bParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (func_292(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_473(iParam0, 1);
	}
	else
	{
		func_474(iParam0, 1);
	}
	func_475(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_127(iVar0) == iParam0)
		{
			func_288(iVar0, 0);
		}
		iVar0++;
	}
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

void func_287(int iParam0, bool bParam1)
{
	if (!func_124(iParam0))
	{
		return;
	}
	bVar0 = func_271(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_413(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_476(iParam0, func_98());
			func_358(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_359(iParam0, 67108864);
		func_476(iParam0, -15);
	}
	func_477(iParam0);
}

void func_288(int iParam0, bool bParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_478(iParam0, 1);
	}
	else
	{
		if (func_479(iParam0))
		{
			return;
		}
		func_480(iParam0, 1);
	}
	func_481(iParam0, bParam1);
}

int func_289()
{
	if (func_106() == 0)
	{
		return -1;
	}
	iVar0 = func_266();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !func_51(24))
	{
		return 50000;
	}
	return 150000;
}

void func_290(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			_0x74bcceb233ad95b2(-1743273232, iParam1);
			break;
		case 1:
			_0x74bcceb233ad95b2(-948016518, iParam1);
			break;
		case 2:
			_0x74bcceb233ad95b2(580522491, iParam1);
			break;
		case 3:
			_0x74bcceb233ad95b2(1176390239, iParam1);
			break;
		case 4:
			_0x74bcceb233ad95b2(1791198853, iParam1);
			break;
		default:
			break;
	}
}

void func_291(int iParam0)
{
	iVar0 = func_482(iParam0);
	switch (iParam0)
	{
		case 0:
			_0x74bcceb233ad95b2(-1047841819, iVar0);
			break;
		case 1:
			_0x74bcceb233ad95b2(-1349566727, iVar0);
			break;
		case 2:
			_0x74bcceb233ad95b2(613491521, iVar0);
			break;
		case 3:
			_0x74bcceb233ad95b2(1452147132, iVar0);
			break;
		case 4:
			_0x74bcceb233ad95b2(-885198919, iVar0);
			break;
		default:
			break;
	}
}

bool func_292(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

void func_293(int iParam0, bool bParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_473(iParam0, 4);
	}
	else
	{
		func_474(iParam0, 4);
	}
	func_483(iParam0, bParam1);
}

struct<4> func_294(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 32);
	return cVar0;
}

int func_295(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

void func_296(int iParam0)
{
	func_298(iParam0, 1);
	func_298(iParam0, 128);
	func_298(iParam0, 256);
	func_298(iParam0, 512);
	func_298(iParam0, 1024);
	func_298(iParam0, 2048);
	func_298(iParam0, 4096);
	func_298(iParam0, 65536);
	func_298(iParam0, 16384);
	func_298(iParam0, 262144);
	func_298(iParam0, 524288);
	func_298(iParam0, 1048576);
	func_298(iParam0, 2097152);
	func_298(iParam0, 32768);
	func_298(iParam0, 131072);
	func_298(iParam0, 134217728);
	func_298(iParam0, 1073741824);
}

void func_297(int iParam0, bool bParam1)
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

void func_298(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_299(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 860729266;
			return true;
		case 128:
			*iParam1 = 1606325429;
			return true;
		case 256:
			*iParam1 = 1743550585;
			return true;
		case 512:
			*iParam1 = 1064646155;
			return true;
		case 1024:
			*iParam1 = -536694793;
			return true;
		case 2048:
			*iParam1 = -1304053509;
			return true;
		case 4096:
			*iParam1 = 879715242;
			return true;
		case 65536:
			*iParam1 = -972364774;
			return true;
		case 16384:
			*iParam1 = -1100875244;
			return true;
		case 262144:
			*iParam1 = 1153596794;
			return true;
		case 524288:
			*iParam1 = 1016389820;
			return true;
		case 1048576:
			*iParam1 = -726966617;
			return true;
		case 2097152:
			*iParam1 = 1365901568;
			return true;
		case 32768:
			*iParam1 = -1658942149;
			return true;
		case 131072:
			*iParam1 = -1980913856;
			return true;
		case 134217728:
			*iParam1 = -1683207356;
			return true;
		case 1073741824:
			*iParam1 = -1712783565;
			return true;
	}
	return false;
}

bool func_300(int iParam0, int iParam1)
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

void func_301(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 || iParam1);
}

void func_302(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_300(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_300(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_300(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_300(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_300(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_300(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_300(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_300(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_300(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_300(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_300(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_300(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_300(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_300(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_300(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_300(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_300(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_300(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_300(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_300(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_300(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_300(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_300(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_300(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_300(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_300(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

bool func_303(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (!func_484(uParam0->f_868[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_304(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (uParam0->f_868[iVar0]->f_19)
		{
			if (!func_485(uParam0->f_868[iVar0]))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_305(var uParam0)
{
	if (!uParam0->f_18)
	{
		return true;
	}
	if (func_235(uParam0->f_2, 0))
	{
		return true;
	}
	else
	{
		Var1.f_10 = 7;
		Var1.f_1 = 1;
		Var1 = 1;
		Var1.f_5 = 1;
		Var1.f_6 = { uParam0->f_14 };
		uParam0->f_2 = func_409(&iVar0, &Var1);
		if (iVar0 == 1)
		{
			return true;
		}
		func_349(uParam0->f_2, uParam0->f_14, uParam0->f_17, 2, 1073741824);
		task_stand_still(uParam0->f_2, -1);
		set_blocking_of_non_temporary_events(uParam0->f_2, true);
	}
	return false;
}

bool func_306(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		if (!func_486(uParam0->f_827[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_307(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if (!func_487(uParam0->f_782[iVar0], &(uParam0->f_1004), uParam0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_308(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (!func_488(uParam0->f_530[iVar0], &(uParam0->f_1004), uParam0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_309(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		if (!func_489(uParam0->f_731[iVar0], &(uParam0->f_1004)))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_310(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		func_490(uParam0, uParam0->f_868[iVar0]->f_2, &(uParam0->f_868[iVar0]->f_4), 0, 0, 0);
		if (uParam0->f_868[iVar0]->f_19 && !is_string_null_or_empty(func_491(uParam0->f_868[iVar0]->f_8)))
		{
			func_490(uParam0, uParam0->f_868[iVar0]->f_3, &(uParam0->f_868[iVar0]->f_8), 0, 0, 0);
		}
		iVar0++;
	}
}

void func_311(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		func_490(uParam0, uParam0->f_827[iVar0]->f_2, &(uParam0->f_827[iVar0]->f_3), 0, 0, 0);
		iVar0++;
	}
}

void func_312(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		func_490(uParam0, uParam0->f_782[iVar0]->f_1, &(uParam0->f_782[iVar0]->f_2), 0, 0, 0);
		iVar0++;
	}
}

void func_313(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		func_492(uParam0, uParam0->f_530[iVar0]->f_1, &(uParam0->f_530[iVar0]->f_2), 0, 0, 0);
		iVar0++;
	}
}

void func_314(var uParam0)
{
	func_490(uParam0, uParam0->f_950.f_1, &(uParam0->f_950.f_3), 0, 0, 0);
}

void func_315(var uParam0)
{
	if (uParam0->f_950.f_18 && !is_string_null_or_empty(func_491(uParam0->f_950.f_7)))
	{
		func_490(uParam0, uParam0->f_950.f_2, &(uParam0->f_950.f_7), 0, 0, 0);
	}
}

void func_316(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		func_492(uParam0, uParam0->f_731[iVar0]->f_1, &(uParam0->f_731[iVar0]->f_2), 0, 0, 0);
		iVar0++;
	}
}

struct<8> func_317(var uParam0)
{
	Var0 = { func_493(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_494() };
	}
	return Var0;
}

void func_318(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_446), sParam1, 64);
}

char* func_319(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 10:
			return "PL1_Hosea_Left";
	}
	return "";
}

void func_320(var uParam0, char* sParam1, bool bParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (func_495(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (is_string_null_or_empty(uParam0->f_462[iVar0]))
		{
			if (!func_496(uParam0, sParam1) || func_497(uParam0, 8388608))
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
						func_498(uParam0, 4194304);
					}
				}
				else
				{
					func_498(uParam0, 4194304);
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

bool func_321(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_511++;
		if (uParam0->f_511 < 10)
		{
			return (func_497(uParam0, 256) && !func_497(uParam0, 4194304));
		}
		uParam0->f_511 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_499(uParam0, sParam1);
	if (!func_497(uParam0, 64))
	{
		if (!func_174(func_500(uParam0)))
		{
			func_498(uParam0, 64);
		}
		else
		{
			vVar0 = { func_501(uParam0) };
			if (!func_174(vVar0))
			{
				func_502(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_503(Global_35, func_500(uParam0), 1);
	if (func_497(uParam0, 128) || func_497(uParam0, 256))
	{
		if ((fVar3 >= func_504(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_505();
				uParam0->f_529 = 0;
			}
			func_506(uParam0);
			if (_does_anim_scene_exist(uParam0->f_444))
			{
				_delete_anim_scene(uParam0->f_444);
			}
			func_507(uParam0);
			func_508(uParam0, 128, 1);
			func_508(uParam0, 256, 1);
			func_508(uParam0, 4096, 1);
			func_508(uParam0, 32768, 1);
			func_508(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_509(uParam0) || bParam2)
	{
		if (!func_497(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_444))
			{
				if (func_509(uParam0) >= func_504(uParam0))
				{
				}
				Var4 = { func_510(uParam0) };
				if (is_string_null_or_empty(&Var4))
				{
					func_511(uParam0);
				}
				Var4 = { func_510(uParam0) };
				iVar12 = 256;
				if (!func_497(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_444 = _create_anim_scene(&(uParam0->f_440), iVar12, &Var4, false, true);
				func_512(uParam0, 0, 0, 0, 0);
				func_498(uParam0, 128);
			}
		}
	}
	if (func_497(uParam0, 128))
	{
		if (func_497(uParam0, 256) && !func_497(uParam0, 4194304))
		{
			return true;
		}
		func_513(uParam0);
		if (!uParam0->f_529)
		{
			if (func_514())
			{
				func_515(4096);
				uParam0->f_529 = 1;
			}
		}
		if (_is_anim_scene_loaded(uParam0->f_444, true, false))
		{
			bVar13 = true;
			Var15 = { func_317(uParam0) };
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
			if (!func_497(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_444, &Var15))
				{
					if (!func_497(uParam0, 16777216))
					{
						if ((!_0x0df57f86fe71dbe5(uParam0->f_444, &Var15) && !_0x23e33cb9f4a3f547(uParam0->f_444, &Var15)) && !_0x1f0e401031e20146(uParam0->f_444, &Var15))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_444, &Var15);
						}
						func_498(uParam0, 16777216);
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
			func_498(uParam0, 256);
			func_508(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_322(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 7:
		case 10:
			return true;
	}
	return false;
}

void func_323(var uParam0)
{
	if (((!_does_anim_scene_exist(uParam0->f_444) || !_is_anim_scene_started(uParam0->f_444, false)) || _0xef324e9550a394d5(uParam0->f_444)) || func_497(uParam0, 512))
	{
		if (!func_516(uParam0->f_501, 128))
		{
			func_517();
		}
		return;
	}
	if ((func_518(uParam0, Global_35, 4) || (_0x6f1f0b17109309da(uParam0->f_444, func_519(Global_35)) && _0xb89fcff19dafff28(uParam0->f_444, func_519(Global_35)))) || !_0x4b85b3cf91972222(uParam0->f_444))
	{
		if (!func_516(uParam0->f_501, 128))
		{
			func_517();
		}
		return;
	}
	bVar0 = true;
	iVar1 = _0xc17f69e1418cd11f(9);
	if (iVar1 != 0)
	{
		if (func_520(iVar1))
		{
			if (func_521(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_516(uParam0->f_501, 512))
	{
		bVar2 = true;
	}
	if (func_522(bVar0, bVar2))
	{
		_delete_anim_scene_2(uParam0->f_444);
		func_517();
	}
}

void func_324(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 1:
			fVar0 = 0.85f;
			break;
		case 2:
			fVar0 = 0.75f;
			break;
		case 3:
			fVar0 = 0.67f;
			break;
		case 4:
			fVar0 = 0.84f;
			break;
		case 5:
			fVar0 = 0.77f;
			break;
		case 6:
			fVar0 = 0.85f;
			break;
		case 7:
			fVar0 = 0.69f;
			break;
		case 8:
			fVar0 = 0.71f;
			break;
		case 9:
			fVar0 = 0.57f;
			break;
		case 10:
			fVar0 = 0.72f;
			break;
		case 11:
			fVar0 = 0.88f;
			break;
	}
	if (_get_anim_scene_progress(uParam0->f_444) > fVar0)
	{
		func_228(Global_35, 2018429721, 0);
		func_54();
	}
}

bool func_325(var uParam0)
{
	iVar0 = 1;
	switch (uParam0->f_970)
	{
		case 9:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 10:
			if (is_screen_faded_out())
			{
				do_screen_fade_in(0);
			}
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 11:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-1415276238, 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 3:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 5:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 1000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 7:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 8:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				return true;
			}
			break;
		case 4:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-530524, 2000, 0, 1, 0, -152.8f, 0, 0);
				return true;
			}
			if (_get_anim_scene_progress(uParam0->f_444) > 0.96f)
			{
				if (iVar0 == 1)
				{
					remove_anim_scene_entity(uParam0->f_444, func_525(1), func_176(uParam0, 1));
					func_190(func_176(uParam0, 1), func_179(uParam0, 1), 0, 2f, 20000);
					remove_anim_scene_entity(uParam0->f_444, func_525(7), func_176(uParam0, 7));
					func_190(func_176(uParam0, 7), func_179(uParam0, 7), 0, 2f, 20000);
					iVar0++;
				}
			}
			if (is_entity_dead(Global_35))
			{
				return true;
			}
			break;
		case 1:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 1000, 0, 1, 0, -96.63f, 0, 0);
				return true;
			}
			if (_get_anim_scene_progress(uParam0->f_444) > 0.96f)
			{
				if (iVar0 == 1)
				{
					remove_anim_scene_entity(uParam0->f_444, func_525(0), func_176(uParam0, 0));
					func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 2f, 20000);
					remove_anim_scene_entity(uParam0->f_444, func_525(7), func_176(uParam0, 7));
					func_190(func_176(uParam0, 7), func_179(uParam0, 7), 0, 2f, 20000);
					iVar0++;
				}
			}
			if (is_entity_dead(Global_35))
			{
				return true;
			}
			break;
		case 2:
			if (is_screen_faded_out())
			{
				do_screen_fade_in(0);
			}
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				return true;
			}
			break;
		case 6:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				return true;
			}
			if (_get_anim_scene_progress(uParam0->f_444) > 0.935f)
			{
				remove_anim_scene_entity(uParam0->f_444, "DUTCH", func_176(uParam0, 0));
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1.5f, 20000);
			}
			break;
	}
	return false;
}

void func_326(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			_delete_anim_scene(iParam0);
		}
	}
}

bool func_327(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 7:
			vVar0 = { 2916.061f, 1311.538f, 44.2142f };
			fVar3 = -54.69f;
			break;
		case 10:
			vVar0 = { 2518.293f, -1305.46f, 48.9726f };
			fVar3 = -8.52f;
			break;
		case 3:
			vVar0 = { -292.2816f, 800.4503f, 119.2814f };
			fVar3 = 96.96f;
			break;
	}
	switch (uParam1->f_972)
	{
		case 0:
			start_player_teleport(player_id(), vVar0, fVar3, false, true, false, false);
			uParam1->f_972 = 1;
			break;
		case 1:
			if (_has_player_teleport_finished(player_id()))
			{
				uParam1->f_972 = 2;
			}
			break;
		case 2:
			if (!is_player_teleport_active())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_328(bool bParam0)
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
		func_517();
	}
	_0xa0cefcea390aab9b(0);
}

void func_329(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if (uParam0->f_782[iVar0]->f_10)
		{
			set_model_as_no_longer_needed(&(uParam0->f_782[iVar0]));
		}
		iVar0++;
	}
}

void func_330(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (uParam0->f_530[iVar0]->f_9)
		{
			set_model_as_no_longer_needed(&(uParam0->f_530[iVar0]));
		}
		iVar0++;
	}
}

void func_331(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		if (uParam0->f_731[iVar0]->f_9)
		{
			set_model_as_no_longer_needed(_get_weapontype_model(&(uParam0->f_731[iVar0])));
		}
		iVar0++;
	}
}

void func_332(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		func_526(uParam0->f_827[iVar0]);
		iVar0++;
	}
}

void func_333(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (does_entity_exist(uParam0->f_530[iVar0]->f_1) && uParam0->f_530[iVar0]->f_9)
		{
			delete_object(&(uParam0->f_530[iVar0]->f_1));
		}
		iVar0++;
	}
}

int func_334()
{
	if (Global_1572887->f_12 != -1)
	{
		Global_35 = Global_1225639->f_8;
		Global_36 = { Global_1225639->f_16 };
		return Global_1225639->f_10;
	}
	Global_35 = get_player_ped(player_id());
	Global_36 = { get_entity_coords(Global_35, false, false) };
	return player_id();
}

bool func_335(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_336()
{
	Global_1935630->f_13 = 0;
	Global_1935630->f_14 = 0;
	Global_1935630->f_26 = 0;
	Global_1935630->f_15 = 0;
	Global_1935630->f_16 = 0;
	Global_1935630->f_17 = 0;
	Global_1935630->f_18 = 0;
	Global_1935630->f_19 = -1;
	Global_1935630->f_20 = -1;
	Global_1935630->f_21 = -1;
	Global_1935630->f_23 = 0;
}

bool func_337()
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_221())
	{
		return false;
	}
	if (!func_132((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_132((*Global_1835011)[2]->f_1, 1) && func_132((*Global_1347702)[120]->f_15, 1)) && !func_132((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_132((*Global_1835011)[37]->f_1, 1) && !func_132((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_132((*Global_1835011)[57]->f_1, 1) && !func_132((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_132((*Global_1835011)[26]->f_1, 1) && !func_132((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_132((*Global_1835011)[62]->f_1, 1) && func_132((*Global_1835011)[63]->f_1, 1)) && !func_132((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_132((*Global_1835011)[75]->f_1, 1) && !func_132((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_132((*Global_1835011)[76]->f_1, 1) && !func_132((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_132((*Global_1835011)[40]->f_1, 1) && func_132((*Global_1835011)[41]->f_1, 1)) && !func_132((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_132((*Global_1835011)[62]->f_1, 1) && func_132((*Global_1835011)[63]->f_1, 1)) && !func_132((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_132((*Global_1835011)[65]->f_1, 1) && func_132((*Global_1835011)[66]->f_1, 1)) && !func_132((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_338(int iParam0, bool bParam1, bool bParam2)
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
		if (func_527())
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
		iVar0 = func_253(&(Global_1898164->f_1[0]));
		if (func_528(iVar0) && func_462((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_119(&(Global_1898164->f_1[0])))
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

bool func_339()
{
	return iLocal_27;
}

void func_340(int iParam0)
{
	iLocal_27 = iParam0;
}

int func_341()
{
	if (bLocal_26)
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_343(int iParam0)
{
	if (func_529(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_344(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_343(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_345(int iParam0, bool bParam1)
{
	if (func_343(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_346(int iParam0, bool bParam1)
{
	if (func_343(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_347(int iParam0, bool bParam1)
{
	if (func_343(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_348()
{
	return true;
}

void func_349(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_530(Global_35) && is_player_teleport_active())
	{
	}
	if (func_531(iParam0))
	{
		if (func_532(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_420(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_349(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_349(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_420(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_420(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_420(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_420(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_420(iParam5, 129))
	{
		if (func_420(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_420(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_420(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_420(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_531(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_420(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_420(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_350(var uParam0, int iParam1, char* sParam2)
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

void func_351(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!does_group_exist(*iParam1) || is_ped_dead_or_dying(*iParam0, true))
	{
		return;
	}
	set_ped_config_flag(*iParam0, 279, bParam3);
	if (bParam2)
	{
		set_ped_as_group_leader(*iParam0, *iParam1, false);
	}
	else
	{
		set_ped_as_group_member(*iParam0, *iParam1);
		set_ped_config_flag(*iParam0, 280, bParam4);
		_0xbad2a311667a50d7(*iParam0, iParam5);
	}
	_0x97c475212b327666(*iParam1, iParam6);
}

void func_352(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_353(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	iVar0 = func_533(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_534(func_354(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

int func_354(int iParam0)
{
	if (!func_124(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0]->f_1;
	}
	return Global_1058888->f_40615[iParam0]->f_1;
}

bool func_355(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_535(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_536(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_537(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_538(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_539(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_540(iParam0);
	if (iVar5 < 1 || iVar5 > func_541(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_356(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_1 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_1 = iParam1;
}

void func_357(int iParam0, int iParam1)
{
	if (!func_124(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_23118[iParam0]->f_3 = iParam1;
}

void func_358(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (Global_23118[iParam0] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0] = (Global_1058888->f_40615[iParam0] || iParam1);
	}
}

void func_359(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_360(int iParam0)
{
	if (!func_124(iParam0))
	{
		return;
	}
	if (func_130(iParam0) && func_542(iParam0))
	{
		func_544(func_543(iParam0));
	}
	else
	{
		func_545(func_543(iParam0));
	}
}

float func_361(int iParam0, int iParam1)
{
	return func_546(iParam0, iParam1, 1, 1);
}

int func_362(var uParam0, int iParam1)
{
	iVar0 = get_entity_model(Global_35);
	switch (iParam1)
	{
		case 76:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(0), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(1), "PBL_1"))
			{
				return 1;
			}
			break;
		case 26:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(9), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(10), "PBL_1"))
			{
				return 1;
			}
			break;
		case 105:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(2), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(3), "PBL_1"))
			{
				return 1;
			}
			break;
		case 78:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(4), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(5), "PBL_1"))
			{
				return 1;
			}
			break;
		case 38:
			if (func_548(&(uParam0->f_25), func_547(6), "PBL_1"))
			{
				return 1;
			}
			break;
		case 5:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(7), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(8), "PBL_1"))
			{
				return 1;
			}
			break;
		case 115:
			if (func_548(&(uParam0->f_25), func_547(11), "PBL_1"))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_363(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_196(1) < iParam0)
	{
		iParam0 = func_196(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_399(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_364(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_402(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_365(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_366(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_367(int iParam0)
{
	if (func_106() != -1)
	{
		if (func_369(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_369(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_368(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_369(iParam0, 65536) && !func_369(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_369(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_369(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_369(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_370()
{
	return Global_1905944->f_5694;
}

bool func_371(int iParam0)
{
	return func_549(iParam0, 16, 1);
}

void func_372(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_550(iParam0))
	{
		return;
	}
	if (func_371(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_551(iParam0, 56, 1);
		func_416(&(Global_1359489->f_40), 1);
	}
	func_552(iParam0, 0);
	func_553(iParam0, 4, 0);
	func_554(iParam0);
	func_555(iParam0);
	func_556(iParam0, 37, 1);
	bVar0 = func_235(Global_1360165[iParam0], 0);
	iVar1 = func_557(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_558(iParam0, 64, 1))
	{
		func_556(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_556(iParam0, 33, 1);
		func_556(iParam0, 34, 1);
		func_559(iParam0, 1056964608, -1, 1061158912);
		func_560(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_551(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_551(iParam0, 35, 1);
			if (bParam8)
			{
				func_551(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_561(iParam0, 0);
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
		func_556(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_551(iParam0, 33, 1);
		func_560(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_416(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_562(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_551(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_563(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_558(iParam0, 45, 1))
	{
		func_556(iParam0, 45, 1);
	}
	func_564(iParam0, 16, 1);
	func_556(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_235(func_565(iParam0), 0))
		{
			func_374(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_373(int iParam0)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

void func_374(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_566(iParam1))
	{
		return;
	}
	iVar0 = func_565(iParam1);
	if (func_373(iParam1))
	{
		if (!func_567(iParam1))
		{
			return;
		}
	}
	func_556(iParam1, 39, 1);
	func_568(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_568(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_568(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_551(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_569(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_375(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_376(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_376(int iParam0)
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

void func_377(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_571(iParam0, 32);
	func_572();
}

void func_378(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_379(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_381(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_381(iParam0);
	}
}

int func_379(int iParam0)
{
	iParam0 = func_570(iParam0);
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

bool func_380(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_381(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_382(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_106() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

void func_383(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_106() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_573(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_574();
		Global_1898077->f_9 = func_575(Global_1894899->f_2);
		func_576(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_384(int iParam0)
{
	return func_577(func_448(iParam0));
}

void func_385(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (get_game_timer() + ((Global_1327479->f_4 - get_game_timer()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (get_game_timer() + iParam1 * 1000);
	}
}

bool func_386(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_1934765->f_21[iVar1]), iVar2);
}

bool func_387(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!is_interior_ready(iParam0))
		{
			return false;
		}
	}
	if (iParam1 || Global_1934765->f_271)
	{
		return true;
	}
	return ((_get_interior_from_game_viewport() != iParam0 && get_interior_from_entity(Global_35) != iParam0) || is_screen_faded_out());
}

void func_388(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_1934765->f_30[iVar1], iVar2);
}

void func_389(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_1934765->f_30[iVar1], iVar2);
}

int func_390()
{
	iVar0 = func_578();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_391(int iParam0)
{
	if (func_106() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_579(absf(fVar1) < 1f, func_579(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_392()
{
	if (func_106() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_395()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_396(int iParam0, bool bParam1, int iParam2)
{
	func_580((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_581(iParam0);
}

void func_397(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_582(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_398(bool bParam0)
{
	bVar3 = false;
	if (func_583(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_584(iVar5, &iVar2, &iVar0))
			{
				if (!func_425(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_585(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_586(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_390() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_390() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_587();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> func_399(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_400(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_401(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_402(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_588(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_403(int iParam0, int iParam1)
{
	if (!func_589(iParam0))
	{
		return 0;
	}
	if (!func_221())
	{
		return 0;
	}
	if (!func_590(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, uVar1, iParam1);
	return 1;
}

int func_404(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_591(*uParam0, 0f, 0f, 0f))
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

int func_405()
{
	return Global_40.f_4283;
}

int func_406(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f };
			*uParam2 = 0f;
			break;
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f };
			*uParam2 = 0f;
			break;
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f };
			*uParam2 = 186f;
			break;
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f };
			*uParam2 = 0f;
			break;
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_407(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_592(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_434(iParam1);
	return func_593(iParam0, iVar0, bParam2, bParam2);
}

bool func_408(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_594(iParam0) == 0)
	{
		return false;
	}
	return true;
}

int func_409(int iParam0, int iParam1)
{
	iParam1->f_10 = func_570(iParam1->f_10);
	if (iParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (iParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*iParam1)
	{
		if (func_174(iParam1->f_6))
		{
		}
	}
	bVar0 = func_221();
	if (*iParam1)
	{
		if (bVar0 && !func_132((*Global_1835011)[4]->f_1, 1))
		{
			if (func_408(5))
			{
				func_595(5);
				func_596(5);
				func_597(0);
				func_598(0);
			}
		}
	}
	if (func_599(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_132((*Global_1835011)[37]->f_1, 1)) && !func_132((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_132((*Global_1835011)[43]->f_1, 1)) && !func_132((*Global_1835011)[44]->f_1, 1))
	{
		if (iParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = iParam1->f_10;
	iVar2 = func_600(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_601(iVar1))
	{
		bVar3 = true;
		if (func_602(iVar1))
		{
			bVar4 = true;
		}
		if (func_603(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*iParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !iParam1->f_5)
			{
				func_604(iParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*iParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (iParam1->f_3)
	{
		if (iParam1->f_10 == 0)
		{
			if (!func_408(0) && func_408(1))
			{
				func_605(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (iParam1->f_4)
	{
		if (iParam1->f_10 == 0)
		{
			if (func_606())
			{
				func_607();
			}
			func_597(0);
			func_598(0);
			func_608(iParam1->f_6);
		}
	}
	if (!func_601(iParam1->f_10))
	{
		if (*iParam1)
		{
			if ((func_609(iParam1->f_10) == 0 || func_610(iParam1->f_10) == 0) || func_594(iParam1->f_10) == 0)
			{
				func_611(iParam1->f_10);
			}
			func_612(iParam1->f_10);
			func_613(iParam1->f_10, iParam1->f_6, iParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = iParam1->f_10;
	iVar2 = func_600(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_601(iVar1))
	{
		bVar3 = true;
		if (func_602(iVar1))
		{
			bVar4 = true;
		}
		if (func_603(iVar1))
		{
			bVar5 = true;
		}
	}
	if (iParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(iVar2))
			{
				freeze_entity_position(iVar2, false);
			}
			if (!func_174(iParam1->f_6))
			{
				set_entity_coords(iVar2, iParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, iParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_614(iParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*iParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !iParam1->f_5)
		{
			if (*iParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (iParam1->f_4)
	{
		if (iParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*iParam0 = 0;
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
			Var8 = { func_615(iParam1->f_10) };
			Var10 = { func_616() };
			func_617(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!iParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_380(iParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_618(iParam1->f_10);
		if (iParam1->f_2 && !func_174(iParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, iParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, iParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_378(iParam1->f_10);
	if (func_380(iParam1->f_10))
	{
		iVar16 = func_379(iParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

void func_410(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_411(bool bParam0, int iParam1)
{
	if (func_619())
	{
		if (func_620(255))
		{
			if (!func_621(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_124(Global_1894899->f_2) && func_414(Global_1894899->f_2))
		{
			func_622(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_623(16);
			}
		}
		else if (func_124(Global_1894899->f_2) && !func_271(Global_1894899->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!is_screen_faded_out())
		{
		}
		Global_1894899->f_7 = 0;
		func_624(16);
		func_625();
		if (bVar0)
		{
			func_624(1);
		}
	}
}

void func_412()
{
	func_624(8);
}

int func_413(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_414(int iParam0)
{
	if (!func_124(iParam0))
	{
		return false;
	}
	return func_271(iParam0, 8);
}

bool func_415(var uParam0)
{
	return func_626(*uParam0, 1);
}

void func_416(var uParam0, bool bParam1)
{
	if (bParam1 || !func_415(uParam0))
	{
		func_627(uParam0);
	}
}

bool func_417(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

float func_418(var uParam0)
{
	if (!func_415(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_628(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_629() - uParam0->f_1);
}

int func_419(var uParam0)
{
	if (does_cam_exist(*uParam0))
	{
		set_gameplay_cam_relative_heading(0f, 1f);
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(*uParam0, false);
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_420(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_421(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_630(iVar0);
}

int func_422(int iParam0, int iParam1)
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

int func_423(int iParam0)
{
	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_424()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_631())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

bool func_425(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_426(int iParam0, int iParam1, bool bParam2)
{
	if (!func_425(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_586(iParam0);
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
		if (!func_632(iParam0, 1))
		{
			return false;
		}
	}
	return func_633(iParam0, 0, bParam2) >= iParam1;
}

int func_427(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_238(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_428(int iParam0, int iParam1)
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

int func_429()
{
	iVar0 = 1549701178;
	switch (func_634())
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

int func_430()
{
	iVar0 = 614608656;
	switch (func_634())
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

int func_431()
{
	iVar0 = -1832677570;
	switch (func_634())
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

int func_432()
{
	iVar0 = 1623252156;
	switch (func_634())
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

bool func_433(int iParam0)
{
	Var3 = -961687407;
	if (func_106() == -1)
	{
		Var3 = 1444744190;
	}
	Var3.f_1 = iParam0;
	Var3.f_3 = 0;
	_0x91ded5dd64bb2691(&Var3);
	if (!_0xed4413cee1bf142c(&Var3))
	{
		return false;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var3, -2008906477))
	{
		return false;
	}
	iVar2 = func_635(iParam0);
	if (func_636(iVar0, &iVar1))
	{
		func_637(iVar1, iVar2);
	}
	while (_0xed4413cee1bf142c(&Var3))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var3, -2008906477))
		{
		}
		else if (!func_636(iVar0, &iVar1))
		{
		}
		else
		{
			func_637(iVar1, iVar2);
		}
	}
	return true;
}

int func_434(int iParam0)
{
	Var1 = -961687407;
	if (func_106() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_638(iVar0);
}

int func_435(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_639(13, iParam1, 0, 0, 0);
		}
		else
		{
			func_639(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_640(0))
	{
	}
	func_641(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

bool func_436(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_437(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_642(iParam0);
	}
	else
	{
		func_643(iParam0, iParam1);
	}
	func_644();
}

void func_438(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_439(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_440(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_441(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_442(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_443(int iParam0)
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

int func_444(int iParam0)
{
	return iParam0 & 31;
}

int func_445(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_446(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_447(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

int func_448(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_449(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 == 0)
	{
		*Global_1898164->f_1[iParam1] = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1] = iParam0;
		Global_1898164->f_1[iParam1]->f_1 = func_246(iParam0);
		func_645(Global_1898164->f_1[iParam1]->f_1, &(Global_1898164->f_1[iParam1]->f_3), &(Global_1898164->f_1[iParam1]->f_4), &(Global_1898164->f_1[iParam1]->f_2));
	}
}

void func_450(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_646((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_646(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_119(&(Global_1898164->f_1[0])))
	{
		func_255(&(Global_1898164->f_1[0]), 3);
	}
}

void func_451(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319->f_15936[iVar0]->f_5)
		{
			Global_1914319->f_15936[iVar0]->f_5 = 0;
		}
		func_647(Global_1914319->f_15936[iVar0], bParam0);
		iVar0++;
	}
}

void func_452(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_647(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_453(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_647(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_454(bool bParam0)
{
	func_647(Global_1956614, bParam0);
}

void func_455(bool bParam0)
{
	func_647(&(Global_1415412->f_3), bParam0);
}

void func_456(bool bParam0)
{
	if (func_648(Global_1934051->f_33))
	{
		func_649(Global_1934051->f_33, 7148155);
	}
	func_647(&(Global_1934051->f_33), bParam0);
}

void func_457(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_651(func_650(iVar0));
		if (iVar1 != 0)
		{
			func_649(Global_1934051[iVar0], iVar1);
		}
		if ((*Global_1934051)[iVar0]->f_1)
		{
			(*Global_1934051)[iVar0]->f_1 = 0;
		}
		func_647((*Global_1934051)[iVar0], bParam0);
		iVar0++;
	}
}

void func_458(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_652(iVar0, -1);
		func_653(iVar0, 0);
		func_654(iVar0, 0);
		if (does_blip_exist(&(Global_36308[iVar0])))
		{
			if (bParam0)
			{
				set_radar_zoom(&(Global_36308[iVar0]));
			}
			remove_blip(Global_36308[iVar0]);
		}
		iVar0++;
	}
}

void func_459(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

void func_460()
{
	func_655();
	func_656();
	func_657();
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

bool func_462(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_464(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

void func_465(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(5, &Var0, 2, 2);
}

bool func_466(int iParam0)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	switch (func_252(iParam0))
	{
		case 1:
			switch (func_253(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_253(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_467(int iParam0)
{
	iVar2 = func_658(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_423(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_660(func_659(iParam0), 6);
}

void func_468(int iParam0)
{
	iVar2 = func_658(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_423(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_661(func_659(iParam0), 6);
}

bool func_469(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 26:
		case 38:
		case 76:
		case 78:
		case 105:
			return true;
	}
	return false;
}

bool func_470()
{
	if (func_408(0) || func_408(1))
	{
		return true;
	}
	return false;
}

bool func_471(int iParam0)
{
	if (!func_662(iParam0, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_472(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return true;
	}
	return false;
}

void func_473(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (!func_292(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_358[iParam0]->f_5 = (Global_40.f_358[iParam0]->f_5 || iParam1);
		return;
	}
	Global_1058888->f_42266[iParam0]->f_5 = (Global_1058888->f_42266[iParam0]->f_5 || iParam1);
}

void func_474(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_358[iParam0]->f_5 = (Global_40.f_358[iParam0]->f_5 - (Global_40.f_358[iParam0]->f_5 && iParam1));
		return;
	}
	Global_1058888->f_42266[iParam0]->f_5 = (Global_1058888->f_42266[iParam0]->f_5 - (Global_1058888->f_42266[iParam0]->f_5 && iParam1));
}

void func_475(int iParam0, bool bParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_544(func_663(iParam0));
	}
	else
	{
		func_545(func_663(iParam0));
	}
}

void func_476(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_477(int iParam0)
{
	if (!func_124(iParam0))
	{
		return;
	}
	if (func_664(iParam0))
	{
		func_665(iParam0);
	}
	else
	{
		func_666(iParam0);
	}
}

void func_478(int iParam0, int iParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (!func_667(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_431[iParam0] = (Global_40.f_431[iParam0] || iParam1);
		return;
	}
	Global_1058888->f_42339[iParam0] = (Global_1058888->f_42339[iParam0] || iParam1);
}

bool func_479(int iParam0)
{
	if (!func_97(iParam0))
	{
		return false;
	}
	return func_667(iParam0, 2);
}

void func_480(int iParam0, int iParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_431[iParam0] = (&Global_40.f_431[iParam0] - (Global_40.f_431[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_42339[iParam0] = (&Global_1058888->f_42339[iParam0] - (Global_1058888->f_42339[iParam0] && iParam1));
}

void func_481(int iParam0, bool bParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_668(iParam0);
	if (bParam1)
	{
		func_544(iVar0);
	}
	else
	{
		func_545(iVar0);
	}
}

int func_482(int iParam0)
{
	if (!func_100(iParam0))
	{
		return 0;
	}
	if (Global_40.f_358[iParam0]->f_5 & 2 != 0)
	{
		return 5;
	}
	if (&Global_40.f_358[iParam0] > 0 && get_wanted_level_threshold(5) > 0)
	{
		return func_669(&(Global_40.f_358[iParam0]));
	}
	return 0;
}

void func_483(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		_0x563fcb6620523917(func_670(iParam0), -1482012664);
	}
	else if (_0xe38450dbcbc70e3d(func_670(iParam0), -1305340593) || _0xe38450dbcbc70e3d(func_670(iParam0), -1482012664))
	{
		_0x6786d7afac3162b3(func_670(iParam0));
	}
}

bool func_484(var uParam0)
{
	if (!func_671(uParam0->f_1))
	{
		uParam0->f_2 = func_672(uParam0->f_1, 1, 0, uParam0->f_12, uParam0->f_12.f_1, uParam0->f_12.f_2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		if (func_235(uParam0->f_2, 0))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_485(var uParam0)
{
	if (func_235(uParam0->f_3, 0))
	{
		return true;
	}
	if (!func_567(uParam0->f_1))
	{
		uParam0->f_3 = func_673(&iVar0, uParam0->f_1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
		if (func_235(uParam0->f_3, 0) && iVar0 == 2)
		{
			if (!func_174(uParam0->f_15))
			{
				func_349(uParam0->f_3, uParam0->f_15, uParam0->f_18, 2, 1073741824);
				task_stand_still(uParam0->f_3, -1);
				set_blocking_of_non_temporary_events(uParam0->f_3, true);
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_486(var uParam0)
{
	if (!func_674(uParam0->f_1, 0))
	{
		func_675(uParam0->f_1, 1, 0, 0, 1, 1);
	}
	if (!is_entity_dead(func_676(uParam0->f_1)))
	{
		set_blocking_of_non_temporary_events(func_676(uParam0->f_1), true);
		set_ped_config_flag(func_676(uParam0->f_1), 168, false);
		_0x6759bee6762e140b(func_283(uParam0->f_1));
	}
	else
	{
		return false;
	}
	uParam0->f_2 = func_676(uParam0->f_1);
	return true;
}

bool func_487(var uParam0, var uParam1, var uParam2)
{
	if (does_entity_exist(uParam0->f_1))
	{
		return true;
	}
	if (*uParam1)
	{
		return false;
	}
	uVar16[0] = Global_35;
	iVar18 = func_677(&uVar0, &uVar16, 15, uParam0->f_6, 1101004800, 0, 1, 1, uParam0->f_9, 1, 0, -1082130432, 0, 0);
	iVar19 = 0;
	while (iVar19 < iVar18)
	{
		if (!func_678(uParam2, &(uVar0[iVar19])))
		{
			if (*uParam0 == get_entity_model(&(uVar0[iVar19])))
			{
				uParam0->f_1 = &uVar0[iVar19];
				_0xbd75500141e4725c(uParam0->f_1, 298468673);
				return true;
			}
		}
		iVar19++;
	}
	request_model(*uParam0, false);
	if (has_model_loaded(*uParam0))
	{
		uParam0->f_1 = func_679(*uParam0, uParam0->f_6, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		_0xbd75500141e4725c(uParam0->f_1, 298468673);
		uParam0->f_10 = 1;
		*uParam1 = 1;
		return true;
	}
	return false;
}

bool func_488(var uParam0, var uParam1, var uParam2)
{
	if (does_entity_exist(uParam0->f_1))
	{
		return true;
	}
	if (*uParam1)
	{
		return false;
	}
	uVar9[0] = *uParam0;
	iVar11 = func_680(&uVar0, &uVar9, 8, uParam0->f_6, 1101004800);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if (!func_681(uParam2, &(uVar0[iVar12])))
		{
			uParam0->f_1 = &uVar0[iVar12];
			return true;
		}
		iVar12++;
	}
	request_model(*uParam0, false);
	if (has_model_loaded(*uParam0))
	{
		uParam0->f_1 = create_object_no_offset(*uParam0, uParam0->f_6, true, true, false, true);
		uParam0->f_9 = 1;
		*uParam1 = 1;
		return true;
	}
	return false;
}

bool func_489(var uParam0, var uParam1)
{
	if (does_entity_exist(uParam0->f_1))
	{
		return true;
	}
	if (*uParam1)
	{
		return false;
	}
	iVar0 = _get_weapontype_model(*uParam0);
	request_model(iVar0, false);
	if (has_model_loaded(iVar0))
	{
		uParam0->f_1 = _create_weapon_object(*uParam0, 100, uParam0->f_6, true, 1f);
		uParam0->f_9 = 1;
		*uParam1 = 1;
		return true;
	}
	return false;
}

void func_490(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_492(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

var func_491(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_492(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_682(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_683(uParam0, iParam1);
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
		iVar1 = func_684(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_685(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_686(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_687(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_688(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<8> func_493(var uParam0)
{
	return uParam0->f_454;
}

struct<8> func_494()
{
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

bool func_495(var uParam0, char* sParam1)
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

bool func_496(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	Var0 = { func_317(uParam0) };
	return are_strings_equal(sParam1, &Var0);
}

bool func_497(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_498(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

void func_499(var uParam0, char* sParam1)
{
	if (func_497(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_440), {func_689("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 4);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_440), {func_689("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_498(uParam0, 8192);
}

Vector3 func_500(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_501(var uParam0)
{
	MemCopy(&uVar0, {func_690(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_445))
	{
		uParam0->f_445 = _create_anim_scene(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_445, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_445, func_519(Global_35), &vVar14, false, 0, 2))
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

void func_502(var uParam0, vector3 vParam1)
{
	if (func_174(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_503(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_504(var uParam0)
{
	return uParam0->f_435;
}

void func_505()
{
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_691(Var0);
	}
}

void func_506(var uParam0)
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

void func_507(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_497(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_692(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_497(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_508(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_508(uParam0, 16, 1);
}

void func_508(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_444)) && _0xef324e9550a394d5(uParam0->f_444))
	{
		_0x8a8208ae92bf87a5(uParam0->f_444);
	}
}

float func_509(var uParam0)
{
	return uParam0->f_434;
}

struct<8> func_510(var uParam0)
{
	return uParam0->f_446;
}

void func_511(var uParam0)
{
	Var0 = { func_693() };
	func_318(uParam0, &Var0);
}

void func_512(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_497(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_591(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_694());
		func_498(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_695(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_498(uParam0, 16);
	}
}

void func_513(var uParam0)
{
	if ((!func_497(uParam0, 32768) && _does_anim_scene_exist(uParam0->f_444)) && _is_anim_scene_metadata_loaded(uParam0->f_444, false))
	{
		func_696(uParam0);
		func_697(uParam0, 0);
		if (!_is_anim_scene_loading(uParam0->f_444, true))
		{
			load_anim_scene(uParam0->f_444);
		}
		func_498(uParam0, 32768);
	}
}

bool func_514()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_515(int iParam0)
{
	if (func_698(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_691(Var0);
}

bool func_516(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_517()
{
	if (func_699(Global_43801))
	{
		func_700(&Global_43801, 0, 0);
	}
}

bool func_518(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1) && func_701(uParam0->f_13[iVar0], iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_519(int iParam0)
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
	return func_702(iVar0);
}

bool func_520(int iParam0)
{
	if (func_703(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_521(int iParam0, bool bParam1)
{
	if (bParam1 && !func_699(iParam0))
	{
		return false;
	}
	return !func_704(iParam0, 4);
}

bool func_522(bool bParam0, bool bParam1)
{
	if (!func_699(Global_43801))
	{
		Global_43801 = func_705("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1945938)[Global_43801]->f_16 = &Global_23[3];
		func_706(Global_43801, 0, 1);
		func_707(Global_43801, 6, 1);
		if (bParam1)
		{
			func_707(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_521(Global_43801, 0))
		{
			func_708(Global_43801, 1, 1);
		}
		if (func_709(Global_43801, 1) != 0f && bParam0)
		{
			func_706(Global_43801, 1, 1);
		}
		else
		{
			func_706(Global_43801, 0, 1);
		}
		return func_710(Global_43801, 1);
	}
	return false;
}

bool func_523(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return func_711(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_524(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	fVar0 = 1f;
	switch (iParam0)
	{
		case -1871534317:
		case 1140525470:
			fVar0 = 0f;
			break;
		case -1415276238:
		case 1823606944:
			fVar0 = 1.5f;
			break;
		case -530524:
		case 898879241:
			fVar0 = 2f;
			break;
		case -1115154469:
			fVar0 = 3f;
			break;
		case -668482597:
		case 147004056:
			break;
	}
	force_ped_motion_state(Global_35, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, get_entity_heading(Global_35), bParam6, bParam7);
	}
	else
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

char* func_525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILLWILLIAMSON";
		case 1:
			return "JOHN";
		case 2:
			return "JavierEscuella";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAHBELL";
		case 7:
			return "CharlesSmith";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "AbigailRoberts";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "MrPearson";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLE_FLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

void func_526(var uParam0)
{
	if (func_674(uParam0->f_1, 0))
	{
		if (!is_entity_dead(func_676(uParam0->f_1)))
		{
			set_blocking_of_non_temporary_events(func_676(uParam0->f_1), false);
			set_ped_config_flag(func_676(uParam0->f_1), 234, true);
			set_ped_config_flag(func_676(uParam0->f_1), 168, true);
		}
		func_712(uParam0->f_1, 0, 1, 0, 0);
		_0x6759bee6762e140b(func_283(uParam0->f_1));
	}
}

bool func_527()
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

bool func_528(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_529(int iParam0)
{
	return iParam0 != 0;
}

int func_530(var uParam0)
{
	return uParam0;
}

bool func_531(int iParam0)
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

bool func_532(int iParam0)
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

int func_533(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return -1;
	}
	return Global_23118[iParam0]->f_3;
}

int func_534(int iParam0)
{
	if (!func_355(iParam0))
	{
		return 0;
	}
	func_713(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((to_float(iVar0) / 60f) + to_float(iVar1)) + (to_float(iVar2) * 60f)) + ((to_float(iVar3) * 24f) * 60f)) + (((to_float(iVar4) * 30.4375f) * 24f) * 60f)) + (((to_float(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = round(fVar6);
	return iVar7;
}

int func_535(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_536(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_537(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_538(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_714(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_539(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_540(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_541(int iParam0, int iParam1)
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

bool func_542(int iParam0)
{
	if (!func_124(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return true;
	}
	return false;
}

int func_543(int iParam0)
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
		case 29:
			return -170458336;
		case 30:
			return 1285083821;
		case 31:
			return -1840907462;
		case 32:
			return 756710130;
		case 33:
			return 388370024;
		case 34:
			return 1092296123;
		case 35:
			return 467491346;
		case 36:
			return -1391584612;
		case 37:
			return -152111346;
		case 38:
			return 1447551317;
		case 39:
			return 153136092;
		case 40:
			return 1304405732;
		case 41:
			return 1074984055;
		case 50:
			return 1087476368;
		case 51:
			return -1768057340;
		case 42:
			return 1218874593;
		case 52:
			return -1438443836;
		case 43:
			return -2036340415;
		case 44:
			return 803939643;
		case 53:
			return -632496195;
		case 45:
			return -965943619;
		case 46:
			return 283532073;
		case 47:
			return -69067491;
		case 48:
			return -1864895118;
		case 54:
			return -1929806571;
		case 55:
			return -698525417;
		case 56:
			return -1149739894;
		case 49:
			return 380507325;
		case 57:
			return 407796241;
		case 58:
			return -152267914;
		case 59:
			return -1675443320;
		case 60:
			return 1940341639;
		case 61:
			return 1846596114;
		case 62:
			return 907708501;
		case 64:
			return 1825644981;
		case 65:
			return 2065937607;
		case 66:
			return -211317417;
		case 67:
			return 1801307910;
		case 68:
			return -4118897;
		case 69:
			return 1853610692;
		case 70:
			return -1574644415;
		case 71:
			return 2133055515;
		case 72:
			return -1413401932;
		case 73:
			return 801090761;
		case 74:
			return 2131218644;
		case 75:
			return 1708823660;
		case 76:
			return 7976942;
		case 77:
			return 2111120505;
		case 78:
			return 176893118;
		case 79:
			return 1179148161;
		case 63:
			return 602306665;
		case 80:
			return 547412068;
		case 81:
			return -1539748801;
		case 82:
			return -1605119912;
		case 83:
			return -884464063;
		case 84:
			return -1420970720;
		case 85:
			return 1017024547;
		case 86:
			return -1204497306;
		case 87:
			return -1621069480;
		case 88:
			return -458604261;
		case 89:
			return -923391614;
		case 90:
			return -689247089;
		case 91:
			return 44049568;
		case 92:
			return 1350259552;
		case 93:
			return -61661574;
		case 94:
			return -725338054;
		case 95:
			return -770123507;
		case 96:
			return 1322486734;
		case 97:
			return -460939553;
		case 98:
			return -1451863552;
		case 99:
			return 173833068;
		case 100:
			return -1681004136;
		case 101:
			return 713715980;
		case 102:
			return -31204969;
		case 103:
			return -1720064790;
		case 104:
			return -532172775;
		case 105:
			return -739067737;
		case 106:
			return -1203133835;
		case 107:
			return -1947411598;
		case 109:
			return -1298718762;
		case 110:
			return -595083064;
		case 111:
			return 884833917;
		case 112:
			return 2141950651;
		case 108:
			return -1049753365;
		case 113:
			return -1437650729;
		case 126:
			return 672925454;
		case 127:
			return 846062774;
		case 120:
			return 1369756178;
		case 121:
			return -736172423;
		case 122:
			return 1597070291;
		case 124:
			return -159501564;
		case 123:
			return -1438809608;
		case 125:
			return -102682392;
		case 114:
			return -81068979;
		case 115:
			return 227618407;
		case 116:
			return 2106043438;
		case 129:
			return -1868356491;
		case 117:
			return -1380256064;
		case 118:
			return -2118469183;
		case 119:
			return -558997834;
		case 128:
			return 658339366;
		default:
			break;
	}
	return 0;
}

void func_544(int iParam0)
{
	if (func_715(iParam0) == 57)
	{
		_0x563fcb6620523917(-1145496915, -1482012664);
		_0x563fcb6620523917(-1043953850, -1482012664);
		_0x563fcb6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_716(iParam0) == 4 || func_716(iParam0) == 12) || func_127(func_716(iParam0)) == 4) || (func_667(func_716(iParam0), 8) && ((func_716(iParam0) == 2 || func_716(iParam0) == 0) || func_716(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		_0x563fcb6620523917(iParam0, iVar0);
	}
}

void func_545(int iParam0)
{
	if (func_715(iParam0) == 57)
	{
		_0x6786d7afac3162b3(-1145496915);
		_0x6786d7afac3162b3(-1043953850);
		_0x6786d7afac3162b3(-1783502982);
	}
	else if (_0xe38450dbcbc70e3d(iParam0, -1305340593) || _0xe38450dbcbc70e3d(iParam0, -1482012664))
	{
		_0x6786d7afac3162b3(iParam0);
	}
}

float func_546(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_547(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "script@proc@jailcells@annesburg";
		case 0:
			return "script@proc@jailcells@valentine";
		case 2:
			return "script@proc@jailcells@rhodes";
		case 7:
			return "script@proc@jailcells@saintdenis";
		case 9:
			return "script@proc@jailcells@strawberry";
		case 5:
			return "script@proc@jailcells@annesburg_john";
		case 1:
			return "script@proc@jailcells@valentine_john";
		case 8:
			return "script@proc@jailcells@saintdenis_john";
		case 3:
			return "script@proc@jailcells@rhodes_john";
		case 10:
			return "script@proc@jailcells@strawberry_john";
		case 6:
			return "script@proc@jailcells@blackwater_john";
		case 11:
			return "script@proc@jailcells@tumbleweed_john";
		default:
			break;
	}
	return "FAIL";
}

bool func_548(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		*uParam0 = _create_anim_scene(sParam1, 0, sParam2, false, true);
		load_anim_scene(*uParam0);
	}
	if (!_is_anim_scene_loaded(*uParam0, true, false))
	{
		return false;
	}
	return true;
}

bool func_549(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_550(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_551(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return;
		}
	}
	func_717(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_552(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_718(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_553(iParam0, 1, 0);
		}
	}
	func_553(iParam0, 16, bParam1);
}

void func_553(int iParam0, int iParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return;
	}
	func_719(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_554(int iParam0)
{
	func_553(iParam0, 8, 0);
}

void func_555(int iParam0)
{
	func_551(iParam0, 36, 1);
}

void func_556(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return;
		}
	}
	func_717(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_557(int iParam0, bool bParam1)
{
	if (!func_550(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_720(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_558(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return false;
		}
	}
	func_717(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_559(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_550(iParam0))
	{
		iVar1 = func_721(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_722(iParam0);
		}
	}
	if (func_558(iParam0, 5, 1))
	{
		set_ped_config_flag(func_721(iParam0), 137, true);
	}
}

void func_560(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_556(iParam0, 50, 1);
		func_556(iParam0, 48, 1);
		func_556(iParam0, 49, 1);
		func_556(iParam0, 51, 1);
		func_556(iParam0, 52, 1);
		func_556(iParam0, 54, 1);
		func_556(iParam0, 55, 1);
	}
	else
	{
		func_551(iParam0, 50, 1);
		func_551(iParam0, 48, 1);
		func_551(iParam0, 49, 1);
		func_551(iParam0, 51, 1);
		if (bParam3)
		{
			func_551(iParam0, 54, 1);
		}
		else
		{
			func_556(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_551(iParam0, 52, 1);
			if (bParam3)
			{
				func_551(iParam0, 55, 1);
			}
		}
		else
		{
			func_556(iParam0, 52, 1);
			if (!bParam3)
			{
				func_556(iParam0, 55, 1);
			}
		}
	}
}

void func_561(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_721(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_721(iParam0), 204, false);
	}
}

void func_562(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_563(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_550(iParam0))
	{
		return;
	}
	if (func_371(iParam0))
	{
		if (!func_671(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_558(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_557(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_721(iParam0);
	if (((does_entity_exist(iVar1) && func_723(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_551(iParam0, 2, 1);
	}
	else
	{
		func_724(iParam0);
		func_551(iParam0, 1, 1);
	}
}

void func_564(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_550(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_565(int iParam0)
{
	if (!func_550(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_566(int iParam0)
{
	return iParam0 > -1;
}

bool func_567(int iParam0)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_568(int iParam0, int iParam1, bool bParam2)
{
	if (!func_566(iParam0))
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

int func_569(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	iVar0 = func_565(iParam0);
	if (func_235(iVar0, 0))
	{
		if (func_235(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_373(iParam0)) || func_567(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_725(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_726(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_727(iParam0);
					_0x7b204f88f6c3d287(func_728(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_728(iParam0, 0));
					func_729(iParam0);
				}
			}
			else
			{
				if (func_549(iParam0, 32768, 1))
				{
					iVar2 = func_728(iParam0, 0);
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
		if (func_235((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_549(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_727(iParam0);
				_0x7b204f88f6c3d287(func_728(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_728(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_727(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_730(iParam0, 0);
	return 1;
}

int func_570(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_571(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

void func_572()
{
	if (func_601(0))
	{
		func_731(0);
	}
	if (func_601(1))
	{
		func_731(1);
	}
	if (func_601(5))
	{
		func_731(5);
	}
	if (func_601(6))
	{
		func_732(6);
	}
}

void func_573(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_574()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_575(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_576(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

int func_577(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*Global_1898164->f_1[0] = { Var0 };
		return 1;
	}
	*Global_1898164->f_1[iParam0] = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_450(iParam0, Global_1898164->f_162);
	return 1;
}

int func_578()
{
	return Global_40.f_11095.f_35;
}

float func_579(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_580(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_733(bParam1);
	}
}

void func_581(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_582(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_583(int iParam0)
{
	if (!func_734(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_584(int iParam0, int iParam1, int iParam2)
{
	if (!func_734(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_585(int iParam0)
{
	return iParam0;
}

int func_586(int iParam0)
{
	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_587()
{
	iVar0 = func_390();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_588(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_589(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_590(int iParam0, int iParam1, var uParam2)
{
	if (!func_589(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

bool func_591(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_592(int iParam0)
{
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1946804->f_2535.f_2 = 0;
		Global_1946804->f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*Global_1946804->f_2535.f_43[iVar0] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946804->f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_735(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 - (Global_1946804->f_2535.f_2 && Global_1946804->f_2535.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_736(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1))
		{
			func_737(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1946804->f_2535.f_1 = (Global_1946804->f_2535.f_1 - 1);
	*Global_1946804->f_2535.f_43[iVar0] = { *Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] };
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = 0;
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = 0;
	return true;
}

int func_593(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_639(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_639(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_738(0))
	{
	}
	func_641(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

int func_594(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_595(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_601(iParam0))
	{
		return;
	}
	iVar0 = func_600(iParam0);
	func_739(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_740(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_741(iParam0, 0);
	func_381(iParam0);
}

void func_596(int iParam0)
{
	iParam0 = func_570(iParam0);
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
	func_742(&Var0);
	func_743(iParam0, Var0);
	func_744(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_745(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_746(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_747(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_748(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_749(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_750(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_751(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_752(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_597(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_598(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_599(vector3 vParam0)
{
	return func_753(_get_map_zone_at_coords(vParam0, 10));
}

int func_600(int iParam0)
{
	iParam0 = func_570(iParam0);
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

bool func_601(int iParam0)
{
	iParam0 = func_570(iParam0);
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

bool func_602(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_601(iParam0))
	{
		return false;
	}
	iVar0 = func_600(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_603(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_601(iParam0))
	{
		return false;
	}
	iVar0 = func_600(iParam0);
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

void func_604(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_601(iParam0))
	{
		return;
	}
	iVar0 = func_600(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_605(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_732(iParam0);
	func_732(iParam0);
	func_754(iParam0, iParam1);
	func_755(iParam0, iParam1);
	func_756(iParam0, iParam1);
	iVar1 = func_600(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_757(iVar1);
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
	iVar3 = func_600(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_757(iVar3);
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
	func_572();
}

bool func_606()
{
	iVar0 = func_758();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_607()
{
	iVar0 = func_758();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_759(0);
}

void func_608(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_609(int iParam0)
{
	iParam0 = func_570(iParam0);
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

int func_610(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_611(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_760(&uVar0, &uVar1, &uVar2);
	func_761(iParam0, uVar0);
	func_762(iParam0, uVar1);
	func_763(iParam0, uVar2);
	func_764(iParam0, 1);
	func_765(iParam0, 1);
}

void func_612(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_766(iParam0, 1);
}

void func_613(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_570(iParam0);
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

bool func_614(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_767(iParam0, 1);
}

struct<2> func_615(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_768(iParam0, &uVar2))
	{
	}
	if (!func_769(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_616()
{
	if (func_770(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_770(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_770(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_770(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_770(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_770(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_617(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_771(iParam0);
	func_772(iParam0, uParam1);
	func_773(iParam0);
	func_774(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_775(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_618(int iParam0)
{
	iParam0 = func_570(iParam0);
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

bool func_619()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_620(int iParam0)
{
	return func_621(23, iParam0);
}

bool func_621(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_776(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_777())
	{
		return func_776(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_776(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_622(int iParam0, int iParam1)
{
	if (!func_124(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_623(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

void func_624(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_625()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_271(iVar1, 1))
		{
			if (does_script_exist(&((*Global_1888801)[iVar1]->f_26)))
			{
				set_script_as_no_longer_needed(&((*Global_1888801)[iVar1]->f_26));
			}
		}
		if ((*Global_1888801)[iVar1]->f_9 != 0)
		{
			if (is_thread_active((*Global_1888801)[iVar1]->f_9, false))
			{
				if (func_106() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1888801)[iVar1]->f_9, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1888801)[iVar1]->f_9))
				{
					_0x7de4643157ad646c((*Global_1888801)[iVar1]->f_9);
				}
			}
			else if (func_271(iVar1, 2))
			{
				if (func_106() == -1)
				{
					force_cleanup_for_all_threads_with_this_name(&((*Global_1888801)[iVar1]->f_26), 523);
				}
				else
				{
					_0x7423f7835770f619(get_hash_key(&((*Global_1888801)[iVar1]->f_26)));
				}
			}
			if (!_does_thread_exist((*Global_1888801)[iVar1]->f_9))
			{
				(*Global_1888801)[iVar1]->f_9 = 0;
				func_359(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_626(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_627(var uParam0)
{
	func_778(uParam0, 0f);
}

bool func_628(var uParam0)
{
	return func_626(*uParam0, 2);
}

float func_629()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_630(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_779(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_631()
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

bool func_632(int iParam0, int iParam1)
{
	if (!func_425(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_780(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_781("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_782(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_783(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_784(iVar1);
				return true;
			}
			iVar3++;
		}
		func_784(iVar1);
	}
	return false;
}

int func_633(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_586(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_780(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_785(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_658(bParam2), iParam0, 0);
	return uVar2;
}

int func_634()
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
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_786(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_786(iVar0)) || iVar0 == 2055893578)
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

int func_635(int iParam0)
{
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = iParam0;
	iVar0 = Global_1946804->f_2535.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 || iVar0);
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = iVar0;
	Global_1946804->f_2535.f_1++;
	return iVar0;
}

bool func_636(int iParam0, int iParam1)
{
	if (iParam0 == -696754231)
	{
		iVar0 = 1742327865;
		if (func_423(func_787(iVar0)) != 81053684)
		{
			return false;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	*iParam1 = func_422(iVar0, 1);
	return true;
}

void func_637(int iParam0, int iParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (Global_1946804->f_2535.f_3[iParam0] || iParam1);
}

int func_638(int iParam0)
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
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_639(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_788(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_789(Var0);
}

bool func_640(bool bParam0)
{
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_779(iVar0, 1);
		if (func_790(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_791(iVar0) == -1)
			{
				func_792(iVar0, 0);
				func_793(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1)], 2, 6);
			}
			func_794(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_641(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_106() != -1;
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
			func_788(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_795(iParam1, 29, bVar4, 1, 0);
			func_795(iParam1, 31, bVar4, 1, 0);
			func_795(iParam1, 30, bVar4, 1, 0);
			func_795(iParam1, 22, bVar4, 1, 0);
			func_795(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_796(32768) && func_790(1108822547, 8)) && func_797(10, iParam3))
	{
		func_798(iParam1, 0, 1);
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
			iVar3 = func_779(iVar1, 1);
			if (func_790(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_797(iVar1, iParam3))
				{
				}
				else if ((func_790(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_790(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_795(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_794(iVar3, 1, 6);
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
								func_795(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_790(iVar3, 1))
							{
								func_799(iVar3, 1, 6);
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

int func_642(int iParam0)
{
	iVar0 = func_443(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_800(iVar0);
}

int func_643(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_801(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_644()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_645(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_444(iParam0);
	*uParam1 = func_445(iParam0);
	*uParam2 = func_446(iParam0);
}

void func_646(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

void func_647(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_652(*uParam0, -1);
		func_653(*uParam0, 0);
		func_654(*uParam0, 0);
		if (does_blip_exist(&(Global_36308[*uParam0])))
		{
			if (bParam1)
			{
				set_radar_zoom(&(Global_36308[*uParam0]));
			}
			remove_blip(Global_36308[*uParam0]);
		}
	}
	*uParam0 = -1;
}

bool func_648(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

void func_649(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_set_blip_flash_style(&(Global_36308[iParam0]), iParam1);
		}
	}
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

void func_652(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0] = iParam1;
		return;
	}
	Global_42606[iParam0] = iParam1;
	return;
}

void func_653(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_1 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_1 = iParam1;
	return;
}

void func_654(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_2 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_2 = iParam1;
	return;
}

float func_655()
{
	if (func_802())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_803(2);
	}
	if (Global_1347477->f_119)
	{
		return func_803(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_804();
	fVar2 = func_805();
	fVar3 = func_806();
	fVar4 = func_807();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_808()));
	fVar7 = (func_803(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_809(3, round((to_float(iVar8) * fVar10)), 0);
	func_810(3, fVar9, fVar9 > 100f);
	return func_811(fVar7, -100f, 100f);
}

float func_656()
{
	if (func_802())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_803(1);
	}
	if (Global_1347477->f_119)
	{
		return func_803(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_804();
	fVar2 = func_805();
	fVar3 = func_806();
	fVar4 = func_807();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_808()));
	fVar7 = (func_803(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_809(2, round((to_float(iVar8) * fVar10)), 0);
	func_810(2, fVar9, fVar9 > 100f);
	return func_811(fVar7, -100f, 100f);
}

float func_657()
{
	if (func_802())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_803(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_812())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_813())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_803(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_804();
	fVar2 = func_805();
	fVar3 = func_806();
	fVar4 = func_807();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_808()));
	fVar7 = (func_803(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_809(1, round((to_float(iVar8) * fVar10)), 0);
	func_810(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_803(0);
	}
	return func_811(fVar7, -100f, 100f);
}

int func_658(bool bParam0)
{
	if (func_106() == -1)
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

int func_659(int iParam0)
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
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_660(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_661(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

bool func_662(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_558(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_235(func_721(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_814(iParam0, 1, 0))
	{
		return false;
	}
	if (func_558(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1806461473;
		case 3:
			return -694461623;
		case 1:
			return 1093870742;
		case 0:
			return 999150106;
		case 4:
			return 1098225713;
		case 5:
			return -1828192959;
		default:
			break;
	}
	return 0;
}

bool func_664(int iParam0)
{
	if (!func_124(iParam0))
	{
		return false;
	}
	return func_271(iParam0, 67108864);
}

void func_665(int iParam0)
{
	StringCopy(&cVar0, func_815(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_816(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_666(int iParam0)
{
	StringCopy(&cVar0, func_815(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_816(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_667(int iParam0, int iParam1)
{
	if (!func_97(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 15:
			return -1716084250;
		case 13:
			return 985737465;
		case 16:
			return 869827975;
		case 14:
			return -735550853;
		default:
			break;
	}
	return 1776960747;
}

int func_669(int iParam0)
{
	iVar0 = 5;
	while (iVar0 >= 1)
	{
		if (iParam0 >= get_wanted_level_threshold(iVar0))
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

int func_670(int iParam0)
{
	StringCopy(&cVar0, func_817(iParam0), 64);
	sVar8 = func_816(cVar0);
	return get_hash_key(sVar8);
}

bool func_671(int iParam0)
{
	if (!func_550(iParam0))
	{
		return false;
	}
	if (!func_371(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

int func_672(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_550(iParam0))
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
			if (func_558(iParam0, 2, 1))
			{
				func_556(iParam0, 2, 1);
			}
			if (func_549(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_551(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_372(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_235(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_235(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_818(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_551(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_819(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_551(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_819(iParam0, 1);
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
			if (!func_558(iParam0, 44, 0))
			{
				func_551(iParam0, 44, 0);
			}
			if (func_820(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_819(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_556(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_560(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_821(iParam0, 0, 0, 1);
			}
			func_556(iParam0, 33, 1);
			func_556(iParam0, 34, 1);
			func_556(iParam0, 29, 1);
			if (!func_174(vVar0) && bParam7)
			{
				func_819(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_819(iParam0, 4);
			}
			else
			{
				func_819(iParam0, 5);
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
						func_818(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_349(Global_1360165[iParam0], vVar0, iParam6, 2, 1073741824);
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
				func_819(iParam0, 4);
			}
			else
			{
				func_819(iParam0, 5);
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
				if (func_822(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_823(iParam0, iParam13, 0);
						func_824(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_558(iParam0, 25, 0))
						{
							func_556(iParam0, 25, 0);
						}
						func_551(iParam0, 66, 0);
						func_819(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_819(iParam0, 5);
				}
				func_551(iParam0, 28, 1);
			}
			else
			{
				func_819(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_819(iParam0, 6);
			}
			break;
		case 6:
			if (func_235(Global_1360165[iParam0], 0))
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
					func_825(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_826(Global_1360165[iParam0], 1);
				}
			}
			func_819(iParam0, 7);
		case 7:
			func_560(iParam0, bParam9, bParam15, 0);
			func_553(iParam0, 4, bParam11);
			func_555(iParam0);
			if (bParam20)
			{
				if (func_827(Global_1360165[iParam0]))
				{
				}
			}
			func_828(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_819(iParam0, 0);
			func_829(iParam0, 16, 1);
			func_556(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

int func_673(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	if (!func_566(iParam1))
	{
		return 0;
	}
	iVar0 = func_565(iParam1);
	if ((!does_entity_exist(iVar0) || !func_235(iVar0, 0)) || (bParam3 && !func_567(iParam1)))
	{
		if (bParam2)
		{
			if (func_726(iParam1, 1) != 0)
			{
				iVar0 = func_830(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*iParam0 = 1;
				return 0;
			}
		}
		else
		{
			*iParam0 = 1;
			return 0;
		}
	}
	if (does_entity_exist(iVar0) && func_235(iVar0, 0))
	{
		*iParam0 = 2;
		(*Global_1360165)[iParam1]->f_70.f_2 = 0;
		func_831(iParam1, iVar0);
		func_832(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*iParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_674(int iParam0, bool bParam1)
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_280(iParam0))
	{
		return false;
	}
	if (!func_833(iParam0) && bParam1)
	{
		return false;
	}
	return func_834(iParam0, 1);
}

int func_675(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_835(iParam0, 1))
	{
		return 0;
	}
	if (func_282(func_281(iParam0)))
	{
		iVar1 = func_283(iParam0);
		if (!_0x800df3fc913355f3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_0xeb98b38ca60742d7(iVar1))
			{
				_0x49a8c2cd97815215(iVar1);
			}
		}
		_0x6759bee6762e140b(iVar1);
		iVar0 = _0x0cadc3a977997472(iVar1, 0);
		if (!does_entity_exist(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_833(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_146(iParam0, 1);
	func_836(iParam0);
	if (bParam3)
	{
		func_146(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_676(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_834(iParam0, 2))
	{
		return 0;
	}
	if (func_282(func_281(iParam0)))
	{
		return func_837(iParam0);
	}
	return _0xe76687023d8c8505(func_838(iParam0), 0);
}

int func_677(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	if (fParam13 <= 0f)
	{
		iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	}
	else
	{
		iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, iParam6, iParam6, fParam13);
	}
	iVar1 = func_839(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_215(iVar0);
	return iVar1;
}

bool func_678(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if (uParam0->f_782[iVar0]->f_1 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_679(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_840(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_680(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6)
{
	iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	iVar1 = func_841(uParam0, uParam1, iVar0, iParam2);
	func_215(iVar0);
	return iVar1;
}

bool func_681(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (uParam0->f_530[iVar0]->f_1 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_682(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_519(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_842(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_843(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_683(var uParam0, int iParam1)
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

int func_684(var uParam0, char* sParam1)
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

void func_685(var uParam0, int iParam1)
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

int func_686(var uParam0)
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

void func_687(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_688(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

struct<8> func_689(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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

struct<4> func_690(var uParam0)
{
	return uParam0->f_440;
}

void func_691(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_844(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_844(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_845(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_788(8);
}

void func_692(var uParam0)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
}

struct<8> func_693()
{
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

char* func_694()
{
	return "unnamed";
}

void func_695(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
	uParam0->f_4 = uParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = _0x4c39c95ae5db1329(uParam1, iParam2, iVar0);
}

void func_696(var uParam0)
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
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_701(uParam0->f_13[iVar0], 2))
		{
			if (_0x6f1f0b17109309da(uParam0->f_444, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_687(uParam0->f_13[iVar0], 1);
			}
		}
		iVar0++;
	}
}

void func_697(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_701(uParam0->f_13[iVar0], 2))
		{
			if (func_701(uParam0->f_13[iVar0], 1) || _0x6f1f0b17109309da(uParam0->f_444, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_846(uParam0, &(uParam0->f_13[iVar0]->f_1), &(uParam0->f_13[iVar0]), uParam0->f_13[iVar0]->f_9);
				if (bParam1 && is_entity_a_ped(&(uParam0->f_13[iVar0])))
				{
					iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
					if (iVar1 != Global_35 && !func_701(uParam0->f_13[iVar0], 16))
					{
						func_847(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_698(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_699(int iParam0)
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

void func_700(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_699(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_848(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_849(iVar0);
	*uParam0 = 0;
}

bool func_701(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

char* func_702(int iParam0)
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

bool func_703(int iParam0)
{
	return iParam0 != 0;
}

bool func_704(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_705(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_704(iVar0, 2))
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
		func_850(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_706(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_699(iParam0))
	{
		return;
	}
	iVar0 = func_848(iParam0);
	func_851(iVar0, bParam1);
}

void func_707(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_699(iParam0))
	{
		return;
	}
	iVar0 = func_848(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_708(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_699(iParam0))
	{
		return;
	}
	iVar0 = func_848(iParam0);
	if (bParam1)
	{
		func_852(iParam0, 4);
		func_851(iVar0, 1);
		func_853(iVar0, 1);
	}
	else
	{
		func_854(iParam0, 4);
		func_853(iVar0, 0);
	}
}

float func_709(int iParam0, bool bParam1)
{
	if (bParam1 && !func_699(iParam0))
	{
		return 0f;
	}
	iVar0 = func_848(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_710(int iParam0, bool bParam1)
{
	if (bParam1 && !func_699(iParam0))
	{
		return false;
	}
	iVar0 = func_848(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

int func_711(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (bParam4 && is_entity_dead(iParam1))
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_682(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = get_entity_model(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
	}
	if (!func_518(uParam0, iParam1, 4))
	{
		if (_0xb89fcff19dafff28(uParam0->f_444, sParam2))
		{
			func_855(uParam0, iParam1, 4);
			return 1;
		}
		else if (iParam5 && _0x005e6f28dd7ed58d(uParam0->f_444, sParam2))
		{
			func_855(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

void func_712(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_280(iParam0))
	{
		return;
	}
	if (!func_834(iParam0, 1))
	{
		return;
	}
	if (!func_834(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_833(iParam0)) && func_856(iParam0))
	{
		return;
	}
	func_213(iParam0, 1);
	func_857(iParam0);
	if (func_282(func_281(iParam0)))
	{
		iVar0 = func_283(iParam0);
		if (!_0x800df3fc913355f3(iVar0))
		{
			return;
		}
		_0xbb68908cd11aebdc(iVar0);
		_0xb65e7f733956cf25(iVar0);
		if (bParam2 && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x631cd2d77fdc0316(iVar0);
		}
		iVar1 = _0x31c70a716cae1fee(iVar0);
		if (!is_ped_injured(iVar1))
		{
			set_ped_config_flag(iVar1, 171, false);
		}
		if (bParam1)
		{
			_0x7b204f88f6c3d287(iVar0);
		}
		func_213(iParam0, 16);
	}
	if (func_834(iParam0, 128) && !bParam3)
	{
		func_858(iParam0, 0);
	}
}

void func_713(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_859(func_98(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

int func_714(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case -4613767:
			return 0;
		case 1567162363:
			return 1;
		case 456471693:
			return 2;
		case -1772963474:
			return 3;
		case 1881496386:
			return 4;
		case 711768994:
			return 5;
		case -440834066:
			return 6;
		case -1363847832:
			return 7;
		case 967769300:
			return 8;
		case -1436873944:
			return 9;
		case -1585669139:
			return 10;
		case 16791368:
			return 11;
		case 1452922822:
			return 12;
		case 549538301:
			return 13;
		case 974698954:
			return 14;
		case 445881012:
			return 15;
		case -2043891857:
			return 16;
		case 419656993:
			return 17;
		case -1732457315:
			return 18;
		case 1794318026:
			return 19;
		case 2035159966:
			return 20;
		case 770832805:
			return 21;
		case -1109814766:
			return 22;
		case -1080317735:
			return 23;
		case -1075550363:
			return 24;
		case 2138576151:
			return 25;
		case 1180954297:
			return 26;
		case 783603394:
			return 27;
		case -170458336:
			return 29;
		case 1285083821:
			return 30;
		case -1840907462:
			return 31;
		case 756710130:
			return 32;
		case 388370024:
			return 33;
		case 1092296123:
			return 34;
		case 467491346:
			return 35;
		case -1391584612:
			return 36;
		case -152111346:
			return 37;
		case 1447551317:
			return 38;
		case 153136092:
			return 39;
		case 1304405732:
			return 40;
		case 1074984055:
			return 41;
		case 1087476368:
			return 50;
		case -1768057340:
			return 51;
		case 1218874593:
			return 42;
		case -1438443836:
			return 52;
		case -2036340415:
			return 43;
		case 803939643:
			return 44;
		case -632496195:
			return 53;
		case -965943619:
			return 45;
		case 283532073:
			return 46;
		case -69067491:
			return 47;
		case -1864895118:
			return 48;
		case -1929806571:
			return 54;
		case 1162337247:
			return 28;
		case -698525417:
			return 55;
		case -1149739894:
			return 56;
		case 380507325:
			return 49;
		case 407796241:
			return 57;
		case -152267914:
			return 58;
		case -1675443320:
			return 59;
		case 1940341639:
			return 60;
		case 1846596114:
			return 61;
		case 907708501:
			return 62;
		case 1825644981:
			return 64;
		case 2065937607:
			return 65;
		case -211317417:
			return 66;
		case 1801307910:
			return 67;
		case -4118897:
			return 68;
		case 1853610692:
			return 69;
		case -1574644415:
			return 70;
		case 2133055515:
			return 71;
		case -1413401932:
			return 72;
		case 801090761:
			return 73;
		case 2131218644:
			return 74;
		case 1708823660:
			return 75;
		case 7976942:
			return 76;
		case 2111120505:
			return 77;
		case 176893118:
			return 78;
		case 602306665:
			return 63;
		case 1179148161:
			return 79;
		case 547412068:
			return 80;
		case -1539748801:
			return 81;
		case -1605119912:
			return 82;
		case -884464063:
			return 83;
		case -1420970720:
			return 84;
		case 1017024547:
			return 85;
		case -1204497306:
			return 86;
		case -1621069480:
			return 87;
		case -458604261:
			return 88;
		case -923391614:
			return 89;
		case -689247089:
			return 90;
		case 44049568:
			return 91;
		case 1350259552:
			return 92;
		case -61661574:
			return 93;
		case -725338054:
			return 94;
		case -770123507:
			return 95;
		case 1322486734:
			return 96;
		case -460939553:
			return 97;
		case -1451863552:
			return 98;
		case 713715980:
			return 101;
		case -31204969:
			return 102;
		case -1720064790:
			return 103;
		case 173833068:
			return 99;
		case -1681004136:
			return 100;
		case -532172775:
			return 104;
		case -739067737:
			return 105;
		case -1203133835:
			return 106;
		case -1947411598:
			return 107;
		case -1049753365:
			return 108;
		case -1298718762:
			return 109;
		case -595083064:
			return 110;
		case 884833917:
			return 111;
		case 2141950651:
			return 112;
		case -1437650729:
			return 113;
		case 672925454:
			return 126;
		case 846062774:
			return 127;
		case 1369756178:
			return 120;
		case -736172423:
			return 121;
		case 1597070291:
			return 122;
		case -159501564:
			return 124;
		case -1438809608:
			return 123;
		case -102682392:
			return 125;
		case -81068979:
			return 114;
		case 227618407:
			return 115;
		case 2106043438:
			return 116;
		case -1868356491:
			return 129;
		case -1380256064:
			return 117;
		case -2118469183:
			return 118;
		case -558997834:
			return 119;
		case 658339366:
			return 128;
		default:
			break;
	}
	return -1;
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 675537701:
			return 0;
		case -1915988145:
			return 1;
		case 38535626:
			return 2;
		case 1904167574:
			return 3;
		case 244711249:
			return 4;
		case -1859792564:
			return 5;
		case -1808688941:
			return 6;
		case -736296038:
			return 7;
		case -909439131:
			return 8;
		case 1917744724:
			return 9;
		case 821748379:
			return 10;
		case 196685551:
			return 11;
		case 1983548039:
			return 12;
		case 985737465:
			return 13;
		case -735550853:
			return 14;
		case -1716084250:
			return 15;
		case 869827975:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_717(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_718(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_719(var uParam0, int iParam1, bool bParam2)
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

void func_720(int iParam0)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_860(iParam0);
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

int func_721(int iParam0)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_722(int iParam0)
{
	if (func_550(iParam0))
	{
		if (does_entity_exist(func_721(iParam0)))
		{
			func_829(iParam0, 67108864, 1);
			func_556(iParam0, 19, 1);
		}
	}
}

float func_723(int iParam0)
{
	if (!func_566(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_724(int iParam0)
{
	iVar0 = func_721(iParam0);
	iVar1 = func_557(iParam0, 0);
	func_861(iParam0, iVar0);
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

float func_725(int iParam0, int iParam1, bool bParam2)
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
	return func_862(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_726(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_863(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_727(int iParam0)
{
	iVar0 = func_565(iParam0);
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

int func_728(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_864(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_729(int iParam0)
{
	if (!func_566(iParam0))
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

void func_730(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

void func_731(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_600(iParam0);
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
	if (func_767(iParam0, 64))
	{
		func_732(iParam0);
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
	bVar3 = func_131(42);
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
				func_865(&((*Global_1900383)[iParam0]->f_27));
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
		func_732(iParam0);
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
		if (func_866(1) < 1)
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
		func_867(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_767(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_868(iParam0);
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
	fVar15 = func_869(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_870(iParam0))
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
		func_871((*Global_1900383)[iParam0]->f_26);
		func_872((*Global_1900383)[iParam0]->f_26);
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
	if (func_532(iVar0) && !bVar9)
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
	iVar21 = func_866(iParam0);
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

void func_732(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_733(bool bParam0)
{
	func_873(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

bool func_734(int iParam0, var uParam1)
{
	if (!func_874(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_735(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2535.f_1)
	{
		if (&Global_1946804->f_2535.f_43[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_736(int iParam0, var uParam1)
{
	return (Global_1946804->f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_737(int iParam0, var uParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (&Global_1946804->f_2535.f_3[iParam0] - (Global_1946804->f_2535.f_3[iParam0] && uParam1));
}

bool func_738(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_779(iVar0, 1);
		if (!func_790(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_791(iVar0) == -1)
			{
				func_792(iVar0, 0);
				func_793(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1)], 2, 6);
			}
			func_799(iVar2, 3, 6);
			Global_1946804->f_2456[iVar0] = 0;
			Global_1946804->f_2456[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

void func_739(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_600(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_875(iVar6);
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

bool func_740(int iParam0)
{
	if (!func_876(iParam0))
	{
		return false;
	}
	if (!func_877())
	{
		return true;
	}
	return false;
}

void func_741(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

void func_742(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_743(int iParam0, struct<2> Param1)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_878(iParam0, Param1))
	{
	}
	if (!func_879(iParam0, Param1.f_1))
	{
	}
}

void func_744(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_880((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_745(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_746(var uParam0)
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

void func_747(var uParam0)
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

void func_748(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_749(int iParam0, var uParam1)
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

void func_750(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_751(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_752(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_753(int iParam0)
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

void func_754(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_755(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_756(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_881(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_881(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_882(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_883(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_884(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_757(int iParam0)
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
	if (func_885(iParam0))
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
	if (func_375(iParam0))
	{
		iVar3 = func_376(iParam0);
		if (func_886(iVar3))
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

int func_758()
{
	return Global_1900383->f_393;
}

void func_759(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_760(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_221())
	{
		if (func_887())
		{
			bVar0 = false;
			if (!func_132((*Global_1835011)[15]->f_1, 1) && !func_131(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_888();
				*iParam1 = func_889();
				*uParam2 = func_890();
				return 1;
			}
			else
			{
				*uParam0 = func_891();
				*iParam1 = func_892();
				*uParam2 = func_893();
				return 1;
			}
		}
		else if (func_392())
		{
			if (!func_132((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_894();
				*iParam1 = func_895();
				*uParam2 = func_896();
				return 1;
			}
			else
			{
				*uParam0 = func_897();
				*iParam1 = func_898();
				*uParam2 = func_899();
				return 1;
			}
		}
	}
	else if (func_887())
	{
		*uParam0 = func_900();
		*iParam1 = func_901();
		*uParam2 = func_902();
		return 1;
	}
	else if (func_392())
	{
		*uParam0 = func_903();
		*iParam1 = func_904();
		*uParam2 = func_905();
		return 1;
	}
	return 0;
}

void func_761(int iParam0, var uParam1)
{
	iParam0 = func_570(iParam0);
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

void func_762(int iParam0, var uParam1)
{
	iParam0 = func_570(iParam0);
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

void func_763(int iParam0, var uParam1)
{
	iParam0 = func_570(iParam0);
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

void func_764(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

void func_765(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_609(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_760(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_906(iParam1);
	iVar5 = func_600(iParam0);
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

void func_766(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

bool func_767(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

bool func_768(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_881(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_907(Var0, 1415981582, 0);
	if (!func_425(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_769(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_881(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_907(Var0, -2119169513, 0);
	if (!func_425(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_770(int iParam0, var uParam1)
{
	if (!func_908(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_909() };
	*uParam1 = func_907(Var0, iParam0, 0);
	if (!func_425(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_771(int iParam0)
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

void func_772(int iParam0, var uParam1)
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
	func_910(iParam0, *uParam1);
	func_910(iParam0, uParam1->f_1);
}

void func_773(int iParam0)
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

void func_774(int iParam0, var uParam1)
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
	func_910(iParam0, *uParam1);
	func_910(iParam0, uParam1->f_1);
	func_910(iParam0, uParam1->f_2);
	func_910(iParam0, uParam1->f_3);
	func_910(iParam0, uParam1->f_4);
	func_910(iParam0, uParam1->f_5);
}

int func_775(int iParam0, int iParam1, bool bParam2)
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

bool func_776(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_777()
{
	return Global_1109400->f_245;
}

void func_778(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_629() - fParam1);
	func_911(uParam0, 1);
	func_912(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_779(int iParam0, int iParam1)
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

int func_780(int iParam0, int iParam1)
{
	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_586(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_428(iParam0, 1399091007))
	{
		func_913(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_781(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_658(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_782(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_783(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_784(int iParam0)
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

int func_785(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_914(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_916(&Var0, func_915(0));
	}
	if (!func_917(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_784(iVar14);
	return uVar15;
}

bool func_786(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_787(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_422(iParam0, 1)]);
}

void func_788(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_789(struct<4> Param0)
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
			if (func_844(Param0))
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
			func_845(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_788(8);
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
			if (func_844(Param0))
			{
				return;
			}
			func_845(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_788(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_918(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_790(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_422(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_791(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2589)
	{
		if (&Global_1946804->f_2589.f_2[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_792(int iParam0, int iParam1)
{
	func_919(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_793(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_794(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_422(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_422(iParam0, 1)])->f_10 || iParam1);
}

void func_795(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_779(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_920(iParam4);
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

bool func_796(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_797(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_798(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_790(1108822547, 6))
	{
		if (bParam2)
		{
			func_795(iParam0, iVar0, func_106() != -1, 0, 0);
			func_794(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_799(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_799(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_422(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_422(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_422(iParam0, 1)])->f_10 && iParam1));
}

int func_800(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_801(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

bool func_802()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_803(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_804()
{
	fVar0 = func_921(13);
	iVar1 = func_922(fVar0);
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

float func_805()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_806()
{
	if (func_923())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_807()
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

float func_808()
{
	return Global_1955565->f_3;
}

void func_809(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_924(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_810(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_924(iParam0, 2, 0, 0);
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

float func_811(float fParam0, float fParam1, float fParam2)
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

bool func_812()
{
	return func_921(12) <= -99f;
}

bool func_813()
{
	return func_921(12) >= 99f;
}

bool func_814(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	if (func_549(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_549(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_549(iParam0, 4, 1))
	{
		return false;
	}
	if (func_558(iParam0, 33, 1))
	{
		return false;
	}
	if (func_371(iParam0))
	{
		return false;
	}
	if (func_925(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549->f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

char* func_815(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_816(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_817(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO_BOUNTY";
		case 1:
			return "LBS_NEW_HANOVER_BOUNTY";
		case 2:
			return "LBS_LEMOYNE_BOUNTY";
		case 3:
			return "LBS_W_ELIZABETH_BOUNTY";
		case 4:
			return "LBS_NEW_AUSTIN_BOUNTY";
		case 5:
			return "LBS_GUARMA_BOUNTY";
		default:
			break;
	}
	return "LBS_INVALID_BOUNTY";
}

void func_818(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_721(iParam0);
	if (!func_550(iParam0) || is_entity_dead(iVar0))
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

void func_819(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_820(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_566(iParam0))
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
					iParam4 = func_926(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_121((*Global_1360165)[iParam0]->f_4.f_2) || func_120((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_926(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_927((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_928(iParam0, 0))
					{
						func_551(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_929(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_556(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_235(func_721(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_235(func_565(iParam0), 0))
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

void func_821(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_550(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_930(iParam0, bParam3);
	}
	else
	{
		func_931(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_932(iParam0, bParam3);
	}
	else
	{
		func_933(iParam0, bParam3);
	}
}

bool func_822(int iParam0, int iParam1)
{
	if (!func_550(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_934(iParam0, iParam1);
	return bVar0;
}

void func_823(int iParam0, int iParam1, bool bParam2)
{
	if (!func_550(iParam0))
	{
		return;
	}
	if (!func_822(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_551(iParam0, 25, 1);
	}
}

void func_824(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_935(iParam2))
		{
			iVar0 = func_936(iParam2, -1);
			if (func_300(iParam1, iVar0))
			{
				if (func_937(iParam1, iVar0))
				{
					if (func_938(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_939(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_302(iParam0, iParam1, 0);
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
			func_551(iParam0, 66, 0);
		}
	}
}

void func_825(int iParam0)
{
	func_296(iParam0);
	func_297(iParam0, 0);
}

void func_826(int iParam0, int iParam1)
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

bool func_827(int iParam0)
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

void func_828(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_940(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_940(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_829(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_550(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

int func_830(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = func_728(iParam0, 1);
	switch ((*Global_1360165)[iParam0]->f_70.f_12)
	{
		case 0:
			(*Global_1360165)[iParam0]->f_124 = _0x31c70a716cae1fee(iVar3);
			(*Global_1360165)[iParam0]->f_125 = 0;
			if (func_235((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_730(iParam0, 3);
			}
			else
			{
				if (!func_941(iParam0) && func_942(iParam0, &uVar4))
				{
					_0x187d65f3aec5d679(func_726(iParam0, 1), &uVar4);
				}
				func_568(iParam0, 256, 0);
				func_730(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!_0xa8120ebeaf290c7a(iVar3))
				{
					return func_943();
				}
				if (bParam2 && !func_174(vVar0))
				{
					_0x59c7ad6fea2ac449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					_0xd4b614179bcd0654(iVar3);
				}
				if (!func_944(iParam0, vVar0, iParam6, iParam10))
				{
					return func_943();
				}
				if (func_235((*Global_1360165)[iParam0]->f_124, 0))
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
					func_730(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_235((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_730(iParam0, 1);
				return func_943();
			}
			if (!bParam9 || _0xa0bc8faed8cfeb3c((*Global_1360165)[iParam0]->f_124))
			{
				func_730(iParam0, 3);
			}
			break;
		case 3:
			if (!func_235((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_730(iParam0, 1);
				return func_943();
			}
			if (bParam7)
			{
				if (!func_945(iParam0, (*Global_1360165)[iParam0]->f_124, 1))
				{
					return func_943();
				}
			}
			if ((bParam2 && !func_174(vVar0)) && !func_417(vVar0, get_entity_coords((*Global_1360165)[iParam0]->f_124, true, false), 1056964608, 1))
			{
				if (is_entity_attached((*Global_1360165)[iParam0]->f_124))
				{
					detach_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_349((*Global_1360165)[iParam0]->f_124, vVar0, iParam6, 2, 1073741824);
			}
			if (bParam1)
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					if (func_558(iParam0, 39, 1))
					{
					}
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_551(iParam0, 39, 1);
				func_568(iParam0, 8, 1);
				func_568(iParam0, 64, 0);
				(*Global_1360165)[iParam0]->f_70.f_11 = get_id_of_this_thread();
			}
			freeze_entity_position((*Global_1360165)[iParam0]->f_124, false);
			set_entity_invincible((*Global_1360165)[iParam0]->f_124, false);
			func_946((*Global_1360165)[iParam0]->f_124, iParam0);
			if (bParam8)
			{
				_0xf74e134f40192884((*Global_1360165)[iParam0]->f_124, 1);
			}
			sVar12 = func_947(iParam0, func_392());
			if (!is_string_null_or_empty(sVar12))
			{
				_0x63aa2b8eb087886a(func_726(iParam0, 1), get_hash_key(sVar12));
			}
			(*Global_1360165)[iParam0]->f_70 = (*Global_1360165)[iParam0]->f_124;
			(*Global_1360165)[iParam0]->f_124 = 0;
			func_556(iParam0, 40, 0);
			func_568(iParam0, 32, 0);
			func_730(iParam0, 0);
			return (*Global_1360165)[iParam0]->f_70;
	}
	return func_943();
}

void func_831(int iParam0, int iParam1)
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

void func_832(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_550(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_948(func_565(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_949(iParam0);
	}
	else
	{
		func_950(iParam0);
	}
	if (bParam2)
	{
		func_951(iParam0);
	}
	else
	{
		func_952(iParam0);
	}
}

bool func_833(int iParam0)
{
	if (!func_280(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_834(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_280(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_835(int iParam0, bool bParam1)
{
	if (!func_280(iParam0))
	{
		return false;
	}
	if ((func_834(iParam0, 1) && !func_833(iParam0)) && func_856(iParam0))
	{
		return false;
	}
	if (!func_834(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_953(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_836(int iParam0)
{
	if (!func_280(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

int func_837(int iParam0)
{
	iVar0 = func_283(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

int func_838(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

int func_839(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = get_indexed_item_in_itemset(iVar5, iVar0);
			iVar2 = iVar1;
			if ((does_entity_exist(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_954(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !decor_exist_on(iVar2, "bIgnoreThisPed"))
				{
					if (!func_955(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < get_num_models_in_population_set(iParam7))
							{
								if (is_ped_model(iVar2, get_ped_model_name_in_population_set(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!is_entity_dead(iVar2))
								{
									set_blocking_of_non_temporary_events(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	destroy_itemset(iVar0);
	return iVar4;
}

void func_840(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_956(iParam1))
		{
			func_957(iParam0, 41788943);
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
			func_958(iParam0, 0, 1);
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
			func_959(iParam0, 0);
			bVar0 = true;
		}
		func_960(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_841(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		iVar2 = iVar1;
		if (is_entity_an_object(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if (uParam1[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (get_entity_model(iVar2) == uParam1[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			destroy_itemset(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	destroy_itemset(iVar0);
	return iVar3;
}

char* func_842(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_961(iVar0);
}

char* func_843(int iParam0)
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

bool func_844(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_845(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_846(var uParam0, char* sParam1, int iParam2, int iParam3)
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

void func_847(int iParam0)
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

int func_848(int iParam0)
{
	return iParam0;
}

void func_849(int iParam0)
{
	if (!func_962(iParam0))
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

void func_850(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_851(iParam0, 1);
	func_853(iParam0, 1);
	func_854(iParam0, 128);
}

void func_851(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_704(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_852(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_853(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_854(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_855(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			func_687(uParam0->f_13[iVar0], iParam2);
		}
		iVar0++;
	}
}

bool func_856(int iParam0)
{
	if (!func_280(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_857(int iParam0)
{
	if (!func_280(iParam0))
	{
		return;
	}
	iVar0 = func_837(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_858(int iParam0, bool bParam1)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_834(iParam0, 2))
	{
		return 0;
	}
	if (func_281(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_283(iParam0)))
	{
		return 1;
	}
	if (func_834(iParam0, 1) && !bParam1)
	{
		func_146(iParam0, 128);
		return 1;
	}
	func_213(iParam0, 129);
	func_857(iParam0);
	_0xfc77c5b44d5ff7c0(func_283(iParam0));
	func_963(iParam0, 0);
	return 1;
}

void func_859(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_964(iParam0, iParam1, 1))
	{
		iVar0 = func_539(iParam1);
		iVar1 = func_538(iParam0);
		iVar2 = (func_538(iParam0) - func_538(iParam1));
		iVar3 = (func_539(iParam0) - func_539(iParam1));
		iVar4 = (func_540(iParam0) - func_540(iParam1));
		iVar5 = (func_537(iParam0) - func_537(iParam1));
		iVar6 = (func_536(iParam0) - func_536(iParam1));
		iVar7 = (func_535(iParam0) - func_535(iParam1));
	}
	else
	{
		iVar0 = func_539(iParam0);
		iVar1 = func_538(iParam1);
		iVar2 = (func_538(iParam1) - func_538(iParam0));
		iVar3 = (func_539(iParam1) - func_539(iParam0));
		iVar4 = (func_540(iParam1) - func_540(iParam0));
		iVar5 = (func_537(iParam1) - func_537(iParam0));
		iVar6 = (func_536(iParam1) - func_536(iParam0));
		iVar7 = (func_535(iParam1) - func_535(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_541(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_965(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

int func_860(int iParam0)
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

void func_861(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_966(iParam1);
	}
}

float func_862(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_863(int iParam0)
{
	iVar0 = 0;
	if (!func_566(iParam0))
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
	if (!func_566(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_864(int iParam0)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_726(iParam0, 1);
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

void func_865(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_968(func_967(255), 109029619));
	}
	else if (func_887())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_392();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_866(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_867(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_968(func_967(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_887())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_392())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_868(int iParam0)
{
	iParam0 = func_570(iParam0);
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

float func_869(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_870(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_609(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_866(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_866(iParam0) + 1;
	fVar6 = func_969(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_970(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_871(int iParam0)
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

void func_872(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

void func_873(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_874(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_875(int iParam0)
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

bool func_876(int iParam0)
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

bool func_877()
{
	return _unlock_is_unlocked(99890643);
}

bool func_878(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_881(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_971(iParam1, Var0, 1415981582, 0) };
	return func_972(Var29, 1);
}

bool func_879(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_881(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_971(iParam1, Var0, -2119169513, 0) };
	return func_972(Var29, 1);
}

void func_880(var uParam0)
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

bool func_881(int iParam0, var uParam1)
{
	if (!func_973(iParam0))
	{
		return false;
	}
	iVar0 = func_882(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_974(0) };
	if (!func_975(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_976(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_882(int iParam0)
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

bool func_883(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_977(bParam10))
	{
		return func_978(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_979(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_980(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_658(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_972(Var14, 1))
		{
		}
	}
	return true;
}

bool func_884(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_977(bParam9))
	{
		return func_981(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_980(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_979(Param0, &Var0, bParam9, 1) || !func_979(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_980(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_658(0);
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

bool func_885(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_982(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_886(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

bool func_887()
{
	if (func_106() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

int func_888()
{
	return 1342496140;
}

int func_889()
{
	return 446670976;
}

int func_890()
{
	return 1;
}

int func_891()
{
	return -868094182;
}

int func_892()
{
	return 1074477367;
}

int func_893()
{
	return 1;
}

int func_894()
{
	return -997197050;
}

int func_895()
{
	return -2063289686;
}

int func_896()
{
	return 2;
}

int func_897()
{
	return -868094182;
}

int func_898()
{
	return 1074477367;
}

int func_899()
{
	return 1;
}

int func_900()
{
	return 1235275977;
}

int func_901()
{
	return 2030804811;
}

int func_902()
{
	return 1;
}

int func_903()
{
	return 1974379573;
}

int func_904()
{
	return 2024948086;
}

int func_905()
{
	return 1;
}

void func_906(int iParam0)
{
	if (func_983() < iParam0)
	{
		func_984(iParam0);
	}
}

int func_907(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_985(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_908(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_423(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_986(iParam0);
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

struct<4> func_909()
{
	Var0 = { func_974(0) };
	return func_971(856287005, Var0, -218846335, 0);
}

void func_910(int iParam0, int iParam1)
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

void func_911(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_912(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_913(int iParam0, var uParam1, var uParam2)
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

struct<14> func_914(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_915(bool bParam0)
{
	iVar0 = func_658(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_971(923904168, func_974(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_971(923904168, func_974(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_971(923904168, func_974(bParam0), -740156546, 0);
}

void func_916(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_917(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_658(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_918(var uParam0, var uParam1, var uParam2)
{
	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_691(Var0);
}

void func_919(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_987(uParam0, 1))
	{
		func_988(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

int func_920(int iParam0)
{
	iVar0 = func_423(iParam0);
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

float func_921(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_922(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

bool func_923()
{
	return _unlock_is_unlocked(-121456797);
}

char* func_924(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_989(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_989(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

bool func_925(int iParam0)
{
	if (Global_40.f_4942[iParam0]->f_59 != 0)
	{
		return true;
	}
	return false;
}

int func_926(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_566(iParam0))
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
					if (func_132((*Global_1835011)[4]->f_1, 1))
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
					if (func_990(iVar0, 9, 11))
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
					if (func_132((*Global_1347702)[63]->f_15, 1) || func_120((*Global_1347702)[63]->f_15))
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
					if (func_990(iVar0, 9, 12))
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
					if (!func_132((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_549(18, 134217728, 1))
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
					if (func_990(iVar0, 9, 11))
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
					if (func_132((*Global_1347702)[134]->f_15, 1) || func_120((*Global_1347702)[134]->f_15))
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
					if (func_132((*Global_1835011)[38]->f_1, 1))
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
					if (func_990(iVar0, 9, 11))
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
					if (func_991(747937920, 1) && !func_132((*Global_1347702)[1]->f_15, 1))
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
	if (bParam3 && does_entity_exist(func_721(iParam0)))
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
	if (!func_822(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0]->f_3;
	}
	return iVar8;
}

bool func_927(int iParam0)
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

bool func_928(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_371(iParam0) || func_558(iParam0, 44, 1))
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

struct<7> func_929(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
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

void func_930(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	func_992(iVar0);
	func_551(iParam0, 60, 1);
	if (bParam1)
	{
		func_949(iParam0);
	}
}

void func_931(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	func_993(iVar0);
	func_556(iParam0, 60, 1);
	if (bParam1)
	{
		func_950(iParam0);
	}
}

void func_932(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	func_994(iVar0);
	if (iParam0 == 14)
	{
		func_995(iVar0);
	}
	func_551(iParam0, 61, 1);
	if (bParam1)
	{
		func_951(iParam0);
	}
}

void func_933(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	func_996(iVar0);
	func_556(iParam0, 61, 1);
	if (bParam1)
	{
		func_952(iParam0);
	}
}

bool func_934(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	func_997(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_935(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_936(int iParam0, int iParam1)
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
			iVar0 = func_998(296923297, iParam1);
			return func_999(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_998(1237718549, iParam1);
			return func_999(iVar0);
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

bool func_937(int iParam0, int iParam1)
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

bool func_938(int iParam0, int iParam1)
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
	if (!func_300(iParam0, iVar0))
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

void func_939(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_940(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_783(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_783(iVar4) && iVar4 != iVar0)
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
	if (func_106() == -1 && !func_1000(iVar0))
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
				if (func_1000(-183018591))
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
		if (iParam0 != Global_35 && func_783(iVar0))
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
		func_1001(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1002(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1003(iVar0))
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

bool func_941(int iParam0)
{
	if (!func_566(iParam0))
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

bool func_942(int iParam0, char* sParam1)
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

int func_943()
{
	return -1;
}

bool func_944(int iParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	if (!func_566(iParam0))
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
			iVar0 = _0xa00df706c60173d1(func_726(iParam0, 1));
			request_model(iVar0, false);
			if (has_model_loaded(iVar0))
			{
				(*Global_1360165)[iParam0]->f_124 = func_679(iVar0, vParam1, iParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				set_model_as_no_longer_needed(iVar0);
				_0x7b204f88f6c3d287((*Global_1360165)[iParam0]->f_126);
			}
		}
		if (!func_235((*Global_1360165)[iParam0]->f_124, 0))
		{
			return false;
		}
		Global_1359489->f_12 = 1;
		func_568(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_945(int iParam0, int iParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	if (func_1004(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_235(iParam1, iVar0))
	{
		return false;
	}
	_set_ped_body_component(iParam1, func_1005(iParam0));
	_update_ped_variation(iParam1, false, true, true, true, false);
	func_568(iParam0, 256, 1);
	return true;
}

void func_946(int iParam0, int iParam1)
{
	decor_set_bool(iParam0, "HorseCompanion", true);
	func_960(iParam0, func_1006(iParam1));
	if (func_1004(iParam1, 8))
	{
		_0xf74e134f40192884(iParam0, 2);
		set_ped_config_flag(iParam0, 412, true);
	}
	else
	{
		set_ped_config_flag(iParam0, 412, false);
	}
	if (does_entity_exist(func_721(iParam1)))
	{
		_0x931b241409216c1f(func_721(iParam1), iParam0, 0);
		_0xed1c764997a86d5a(func_721(iParam1), iParam0);
		set_ped_config_flag(iParam0, 367, true);
	}
	else
	{
		func_551(iParam1, 38, 1);
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
	if (func_1004(iParam1, 4096))
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
	func_832(iParam1, func_1004(iParam1, 8192), func_1004(iParam1, 16384), 1);
}

char* func_947(int iParam0, bool bParam1)
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

void func_948(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_811(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

void func_949(int iParam0)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_565(iParam0);
	func_992(iVar0);
	func_568(iParam0, 8192, 1);
}

void func_950(int iParam0)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_565(iParam0);
	func_993(iVar0);
	func_568(iParam0, 8192, 0);
}

void func_951(int iParam0)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_565(iParam0);
	func_994(iVar0);
	func_568(iParam0, 16384, 1);
}

void func_952(int iParam0)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_565(iParam0);
	func_996(iVar0);
	func_568(iParam0, 16384, 0);
}

bool func_953(int iParam0, bool bParam1)
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_280(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_283(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_837(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_283(iParam0));
}

bool func_954(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!bParam5 && !is_ped_human(iParam0))
	{
		return false;
	}
	if (is_ped_a_player(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (is_entity_a_mission_entity(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_1007(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (is_ped_on_mount(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_1008(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_955(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_956(int iParam0)
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

void func_957(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_300(iParam0, iParam1))
		{
			if (func_937(iParam0, iParam1))
			{
				if (func_938(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_939(iParam0);
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

void func_958(int iParam0, int iParam1, bool bParam2)
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

void func_959(int iParam0, bool bParam1)
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

void func_960(int iParam0, int iParam1)
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

char* func_961(int iParam0)
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

bool func_962(int iParam0)
{
	return func_704(iParam0, 2);
}

void func_963(int iParam0, int iParam1)
{
	if (!func_280(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_964(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_355(iParam1) || !func_355(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_965(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_966(int iParam0)
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

char* func_967(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_621(37, iParam0))
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
	if (func_621(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_968(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1009(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_969(int iParam0)
{
	iParam0 = func_570(iParam0);
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

float func_970(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<4> func_971(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_425(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_658(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_972(struct<4> Param0, int iParam4)
{
	if (!func_977(0))
	{
		return func_1010(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_979(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_658(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_973(int iParam0)
{
	iVar0 = func_882(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_974(0) };
	if (func_1011(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

struct<4> func_974(bool bParam0)
{
	return func_971(1328661203, func_1012(), -1591664384, bParam0);
}

bool func_975(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_658(bParam7);
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

bool func_976(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_658(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_977(bool bParam0)
{
	if (func_106() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_658(bParam0));
}

int func_978(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_979(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_980(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1013(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1014(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1015(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_979(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_658(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_980(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_981(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_980(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_979(Param0, &Var0, 1, 0) || !func_979(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_980(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1014(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1014(&Var14) };
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
					func_1016(iVar60, 1);
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
		iVar60 = func_1015(1168099063, &Var28, 0);
		iVar60 = func_1015(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_982(int iParam0)
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

int func_983()
{
	return Global_40.f_1095.f_3135;
}

void func_984(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_985(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_658(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_979(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_986(int iParam0)
{
	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_423(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_987(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_988(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

char* func_989(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_990(int iParam0, int iParam1, int iParam2)
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

bool func_991(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1017(iParam0);
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

void func_992(int iParam0)
{
	if (func_1018(iParam0, 0))
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

void func_993(int iParam0)
{
	if (func_1018(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_994(int iParam0)
{
	if (func_1018(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_995(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_371(14))
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

void func_996(int iParam0)
{
	if (func_1018(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

int func_997(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1019(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_998(int iParam0, int iParam1)
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
		if (func_822(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_999(int iParam0)
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

bool func_1000(int iParam0)
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

int func_1001(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_1020(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1021((386 + iVar28), 1);
			if (func_1022(iParam0, &Var0, iVar5, 0))
			{
				if (func_1023(iParam0, &Var6, iVar5))
				{
					Var29 = { func_971(iParam0, Var0, iVar5, 0) };
					func_1024(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_977(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_1025(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1026(iParam0, iParam1);
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

void func_1002(int iParam0, int iParam1, float fParam2)
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

bool func_1003(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_1004(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1) != 0;
}

int func_1005(int iParam0)
{
	return 1268180497;
}

int func_1006(int iParam0)
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
			if (func_131(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_131(45))
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

bool func_1007(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_1027(), 1))
	{
		return true;
	}
	return false;
}

int func_1008(int iParam0, bool bParam1)
{
	return func_1028(iParam0, Global_1894899->f_2, bParam1);
}

char* func_1009(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_1010(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_979(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_586(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1029(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1030(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1031(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1032(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1014(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1015(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1011(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_658(bParam2), uParam0, iParam1);
}

struct<4> func_1012()
{
	return Var0;
}

int func_1013(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_971(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_658(bParam6), &Var0, 0);
	return uVar4;
}

struct<16> func_1014(var uParam0)
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

int func_1015(int iParam0, var uParam1, bool bParam2)
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
					func_1016(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1016(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1016(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1016(int iParam0, int iParam1)
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
	func_1033(iParam0, iParam1);
}

bool func_1017(int iParam0)
{
	func_1034(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

bool func_1018(int iParam0, bool bParam1)
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

int func_1019(int iParam0, int iParam1)
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

struct<5> func_1020(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_974(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_586(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_971(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_915(bParam1) };
			if (bParam2 && func_1035(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1022(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1022(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1023(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1036(bParam1) };
			switch (func_423(iParam0))
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
			if (func_1037(iParam0, -1823706425))
			{
				Var0 = { func_971(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1037(iParam0, -1483207246))
			{
				Var0 = { func_971(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_979(Var0, &Var27, bParam1, 0))
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

int func_1021(int iParam0, int iParam1)
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
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
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

bool func_1022(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_1013(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_1023(int iParam0, var uParam1, int iParam2)
{
	if (func_1038(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_1024(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1039(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_979(*uParam1, &Var0, bParam6, 0))
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
	if (!func_977(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_658(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1025(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1040(iParam0))
	{
		return 0;
	}
	if (!func_977(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_1026(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1041(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_1027()
{
	return get_player_group(get_player_index());
}

int func_1028(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_1042(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_1043(iParam0, iVar0, iVar1, bParam2);
}

struct<28> func_1029(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_658(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1014(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1030(int iParam0, var uParam1, bool bParam2)
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
					func_1016(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1016(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1016(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1031(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_658(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1014(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1032(int iParam0, var uParam1, bool bParam2)
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
					func_1016(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1016(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1016(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1033(int iParam0, int iParam1)
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

int func_1034(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1044(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_1035(int iParam0, bool bParam1)
{
	if (func_423(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_131(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1036(bool bParam0)
{
	iVar0 = func_658(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_971(271701509, func_974(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_971(271701509, func_974(bParam0), 12999093, 0);
}

bool func_1037(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_423(iParam0);
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

bool func_1038(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_658(0);
	*uParam1 = { func_971(iParam0, func_915(0), iParam3, 0) };
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

bool func_1039(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1040(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_1041(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1042(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_106() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_1043(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (is_entity_dead(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _0x32a1e3b83d501096(iParam0);
	if (!_0x800df3fc913355f3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_281(iVar2) != 0 && _0x800df3fc913355f3(func_283(iVar2)))
		{
			if (func_283(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_1044(int iParam0, int iParam1)
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

