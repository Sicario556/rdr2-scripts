void __EntryFunction__()
{
	fLocal_3642 = 1f;
	fLocal_3643 = 1f;
	iVar0 = iVar3643;
	func_1(iVar0);
	func_2(&ScriptParam_0);
	while (!func_3(ScriptParam_0.f_7))
	{
		func_4();
		wait(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	network_register_host_broadcast_variables(&Local_1950, 50, 52);
	func_9(_0xba24095ea96dfe17(&Local_1950), 50, "m_baseHostData");
	network_register_player_broadcast_variables(&Local_2000, 193, 53);
	func_10(_0x690806bc83bc8ca2(Local_2000[0]), 193, "m_baseClientData");
	func_11();
	func_12(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
}

void func_2(var uParam0)
{
	func_13(uParam0);
	if (network_is_host_of_this_script())
	{
		func_14();
	}
}

bool func_3(struct<2> Param0)
{
	if (func_15(0, 0))
	{
		return true;
	}
	else if (func_16(Param0, 0, 128))
	{
		return true;
	}
	else if (!func_17())
	{
		return true;
	}
	else if (func_18(iVar2189, 64))
	{
		return true;
	}
	else if (Local_2193.f_10 == 9)
	{
		return true;
	}
	return false;
}

void func_4()
{
	if (network_is_host_of_this_script())
	{
		func_19();
	}
	func_20();
}

void func_5()
{
	_0x236905c700fdb54d();
	if (network_is_host_of_this_script() && network_get_num_participants() <= 1)
	{
		func_21();
	}
	func_22();
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
		if (func_23() == 0)
		{
			if (func_24())
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

void func_11()
{
	network_register_host_broadcast_variables(&Local_16, 563, 41);
	func_9(_0xba24095ea96dfe17(&Local_16), 563, "m_hostData");
	network_register_player_broadcast_variables(&Local_579, 865, 42);
	func_10(_0x690806bc83bc8ca2(Local_579[0]), 865, "m_clientData");
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

void func_13(var uParam0)
{
	Local_2193 = { *uParam0 };
	Local_2193.f_1333 = participant_id_to_int();
	Local_2193.f_1337 = get_game_timer();
	Local_2193.f_1269 = func_25(uParam0->f_1) + 1000;
	Local_2193.f_1270 = func_26(uParam0->f_1, uParam0->f_2, uParam0->f_3) + 1000;
	Local_2193.f_1339 = { func_27(uParam0->f_1, uParam0->f_3) };
	Local_2193.f_1347 = { func_28(uParam0->f_1, uParam0->f_3) };
	Local_2193.f_1294 = func_29(uParam0->f_1, uParam0->f_2);
	Local_2193.f_1295 = func_30(uParam0->f_1, uParam0->f_2);
	Local_2193.f_1296 = func_31(uParam0->f_1, uParam0->f_2);
	Local_2193.f_1400 = { func_32(uParam0->f_1, uParam0->f_2) };
	func_34(func_33(uParam0->f_1, uParam0->f_2));
	func_35(1619021308);
	if (func_36(&Var0, uParam0->f_1))
	{
		Var5 = { Var0 };
		if (func_37(&Var5) && func_38(&Var5, uParam0->f_3))
		{
			Local_2193.f_1274 = 1;
			func_39(Var5, 1189568052, &(Local_2193.f_1274), 0);
			Local_2193.f_1276 = 2;
			func_39(Var5, -1755025897, &(Local_2193.f_1276), 0);
			Local_2193.f_1275 = 2;
			func_39(Var5, 948567928, &(Local_2193.f_1275), 0);
			Local_2193.f_1277 = 28;
			func_39(Var5, -823479386, &(Local_2193.f_1277), 1);
			Local_2193.f_1388 = -1125105727;
			func_40(Var5, -467067774, &iVar10, 1);
			func_41(iVar10);
			func_42(Var5, -13272314, &bVar11, 0);
			if (bVar11)
			{
				func_43(134217728);
			}
		}
		Var5 = { Var0 };
		if (((func_44(&Var5) && func_45(&Var5, Local_2193.f_2)) && func_37(&Var5)) && func_38(&Var5, uParam0->f_3))
		{
			if (Local_2193.f_9 != -785841056)
			{
				func_40(Var5, 511429636, &iVar12, 0);
				iVar13 = iVar12;
				if (iVar13 != 0)
				{
					_0xbe83cae8ed77a94f(iVar12);
				}
				iVar14 = -1;
				func_39(Var5, -1102158142, &iVar14, 0);
				if (iVar14 >= 0 && iVar14 < 24)
				{
					_network_clock_time_override(iVar14, 0, 0, 0, false);
				}
			}
		}
	}
	if (func_46(uParam0->f_1, uParam0->f_3, &iVar15))
	{
		iVar16 = func_48(func_47(-1892463704, iVar15));
		iVar17 = func_48(func_47(1374282888, iVar15));
		Local_2193.f_1278 = (iVar16 + iVar17);
	}
	iVar18 = func_49(uParam0->f_1);
	if (iVar18 != 0)
	{
		if (func_50(iVar18, &(Local_2193.f_1392), 600, -1, 0, 0))
		{
			func_51();
		}
	}
	func_52();
	func_53();
	func_54();
	if (Local_2193.f_9 != -785841056)
	{
		func_55(999.9f);
		_0x5199405eabfbd7f0(func_56());
		_0x5199405eabfbd7f0(func_57());
		_0x5199405eabfbd7f0(func_58());
		Local_2193.f_1418 = _0x842ccc9491ffcd9b(func_59());
		_0xf3e039322bfbd4d8(Local_2193.f_1418);
		func_60(&(Local_2193.f_1421), 1, 0);
		Local_2193.f_1421.f_2 = -1812916243;
		func_61(&(Local_2193.f_1421), 0);
		if (func_62(255))
		{
			do_screen_fade_out(0);
			func_63(1);
		}
		set_audio_flag("MusicIgnoreDeathArrest", true);
		start_audio_scene("rdro_ambient_ped_intensity_zero_scene");
	}
	else if (_0x9be7dcb22d32ccbe(uParam0->f_6, player_id()))
	{
		func_43(131072);
	}
	func_64();
	if (func_65(131072))
	{
		vVar19 = { func_66(uParam0->f_1, uParam0->f_2) };
		vVar22 = { func_67(uParam0->f_1, uParam0->f_2) };
		if (func_68(vVar19))
		{
		}
		else
		{
			func_69(vVar19, vVar22);
		}
		func_70(1);
	}
	if (Local_2193.f_9 != -785841056)
	{
		func_71();
	}
}

void func_14()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_1950.f_17[iVar0] = int_to_playerindex(iVar0);
		iVar0++;
	}
	func_72();
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

bool func_16(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_73(*Global_1051213) && !func_74(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_75(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_76(iParam3, 255))
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
	if (func_77())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_73(*Global_1051213))
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

bool func_17()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_18(int iParam0, int iParam1)
{
	return func_78(Global_1196898->f_78[iParam0]->f_6, iParam1);
}

void func_19()
{
	switch (iVar1948)
	{
		case 0:
			func_79();
			break;
		case 1:
			func_80();
			break;
		case 3:
			func_81();
			break;
		case 4:
			func_82();
			break;
		case 5:
			func_83();
			break;
		case 6:
			func_84();
			break;
		case 7:
			func_85();
			break;
		case 8:
			func_86();
			break;
	}
}

void func_20()
{
	func_87();
	func_53();
	func_88();
	func_89();
	func_90();
	func_54();
	func_91();
	func_92();
	func_93();
	func_94();
	switch (Local_2193.f_10)
	{
		case 0:
			func_95();
			break;
		case 1:
			func_96();
			break;
		case 2:
			func_97();
			break;
		case 3:
			func_98();
			break;
		case 4:
			func_99();
			break;
		case 5:
			func_100();
			break;
		case 6:
			func_101();
			break;
		case 7:
			func_102();
			break;
		case 8:
			func_103();
			break;
	}
}

void func_21()
{
	if (iVar1948 > 5)
	{
		_0x78335e12db0bf961(664);
	}
	func_104();
}

void func_22()
{
	func_105();
	func_106(1);
	func_107();
	func_108();
	func_109();
	func_110();
	func_111();
	func_113(func_112(Local_2193.f_1));
	func_114(1);
	func_61(&(Local_2193.f_1421), 0);
	if (_0x7907969497ea92f5(Local_2193.f_1392))
	{
		_datafile_unload(Local_2193.f_1392);
	}
	if (_does_volume_exist(Local_2193.f_1393))
	{
		_delete_volume(Local_2193.f_1393);
	}
	if (_does_volume_exist(Local_2193.f_1394))
	{
		_delete_volume(Local_2193.f_1394);
	}
	if (func_115())
	{
		remove_ptfx_asset();
	}
	_0x37d7bdba89f13959(func_56());
	_0x37d7bdba89f13959(func_57());
	_0x37d7bdba89f13959(func_58());
	if (Local_2193.f_9 != -785841056)
	{
		func_116(Local_2193.f_1338);
		clear_override_weather();
		_0x65f040d91001ed4b(0);
		func_117();
		_display_hud_component(690901814);
		func_118(&(Local_2193.f_1421));
		if (_0xeef83a759ae06a27(Local_2193.f_1418) && !func_119())
		{
			_0x71845905bccde781(Local_2193.f_1418);
			_0xeda5cbecf56e1386(Local_2193.f_1418);
			_0x38d9d50f2085e9b3(Local_2193.f_1418);
		}
		if (does_cam_exist(Local_2193.f_1416))
		{
			destroy_cam(Local_2193.f_1416, false);
		}
		if (does_entity_exist(Local_2193.f_1417))
		{
			delete_ped(&(Local_2193.f_1417));
		}
		_0x2e399eafbeea74d5();
	}
	_0x531a78d6bf27014b(func_120());
	_0x9d746964e0cf2c5f(func_121(), func_122());
	_0x9d746964e0cf2c5f(func_123(), func_124());
	_0x9d746964e0cf2c5f(func_125(), func_126());
	func_127();
	func_128();
	func_129(1, 1);
	func_130(0);
	if (func_65(131072))
	{
		func_70(0);
		func_131();
	}
	if (Local_2193.f_9 == -785841056)
	{
		if (func_133(func_132(Local_2193.f_1)))
		{
			func_134(Local_2193.f_1, Local_2193.f_2);
			func_135(func_132(Local_2193.f_1));
			func_136();
		}
	}
	else
	{
		set_audio_flag("MusicIgnoreDeathArrest", false);
		stop_audio_scene("rdro_ambient_ped_intensity_zero_scene");
	}
	if (func_137(4096) || func_137(8192))
	{
		bVar0 = func_137(8192);
		func_138(iVar2191, Local_2193.f_1, Local_2193.f_7, bVar0);
	}
	else if (func_137(16384))
	{
		func_139(iVar2191, Local_2193.f_1, Local_2193.f_7);
	}
	else
	{
		func_140(iVar2191, Local_2193.f_7, 0);
	}
	func_141();
	func_142(Local_2193.f_9, Local_2193.f_4);
}

int func_23()
{
	return Global_1572887->f_13;
}

bool func_24()
{
	return Global_1051252->f_8;
}

int func_25(int iParam0)
{
	iVar0 = 120000;
	if (func_36(&Var1, iParam0))
	{
		func_39(Var1, -463492762, &iVar0, 0);
	}
	return iVar0;
}

int func_26(int iParam0, var uParam1, var uParam2)
{
	iVar0 = 300000;
	if ((((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_37(&Var1)) && func_38(&Var1, uParam2))
	{
		func_39(Var1, 1576411076, &iVar0, 0);
	}
	return iVar0;
}

struct<8> func_27(int iParam0, var uParam1)
{
	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

struct<8> func_28(int iParam0, var uParam1)
{
	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, -1771940760, &Var0, 0);
	}
	return Var0;
}

float func_29(int iParam0, var uParam1)
{
	fVar0 = 200f;
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_145(Var1, 1168414437, &fVar0, 0);
	}
	return fVar0;
}

float func_30(int iParam0, var uParam1)
{
	fVar0 = func_29(iParam0, uParam1);
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_145(Var1, -1393462640, &fVar0, 0);
	}
	return fVar0;
}

float func_31(int iParam0, var uParam1)
{
	fVar0 = -1f;
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_145(Var1, 2005647695, &fVar0, 0);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (func_30(iParam0, uParam1) + 200f);
	}
	return fVar0;
}

Vector3 func_32(int iParam0, var uParam1)
{
	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, 221135615, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_33(int iParam0, var uParam1)
{
	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, 2060397848, &vVar0, 0);
	}
	return vVar0;
}

void func_34(vector3 vParam0)
{
	if (!func_147(Local_2193.f_1397, vParam0))
	{
		Local_2193.f_1397 = { vParam0 };
	}
}

int func_35(int iParam0)
{
	if (Local_2193.f_1385 != iParam0)
	{
		Local_2193.f_1385 = iParam0;
		return 1;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(Global_1196898->f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_148(iParam1);
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_37(var uParam0)
{
	uParam0->f_2 = -310067910;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_38(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_39(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_40(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

void func_41(int iParam0)
{
	if (Local_2193.f_1388 != iParam0)
	{
		Local_2193.f_1388 = iParam0;
	}
}

int func_42(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_bool(bParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_43(int iParam0)
{
	func_149(&(Local_2193.f_1335), iParam0);
}

bool func_44(var uParam0)
{
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1782115362;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_45(var uParam0, var uParam1)
{
	uParam0->f_2 = 454625570;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_46(int iParam0, var uParam1, int iParam2)
{
	if ((func_36(&Var0, iParam0) && func_37(&Var0)) && func_38(&Var0, uParam1))
	{
		if (func_40(Var0, 915697271, &uVar5, 1))
		{
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

struct<2> func_47(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_48(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

int func_49(int iParam0)
{
	if (func_36(&Var1, iParam0))
	{
		func_40(Var1, 733859289, &uVar0, 0);
	}
	return uVar0;
}

bool func_50(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = _0xd97d8d905f1562f2(iParam0);
	while ((!_0x603ac35fd4602c76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_15(bParam4, bParam5);
		}
		iVar0++;
		wait(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_15(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_6();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_51()
{
	Local_1444 = Local_2193.f_1392;
	if (_0x603ac35fd4602c76(uVar1442))
	{
	}
	func_150(&Local_1444);
	if (!func_151(&Local_16, &Local_1444))
	{
	}
	func_152(&Local_1444);
}

void func_52()
{
	if (func_18(iVar2191, 256))
	{
		func_153(0, Local_2193.f_1333);
		return;
	}
	else if (func_18(iVar2191, 512) && !func_154())
	{
		func_153(0, Local_2193.f_1333);
		func_155(&(Local_2193.f_1384), 8);
	}
	else if (func_156(&Local_2193))
	{
		func_153(0, Local_2193.f_1333);
		func_155(&(Local_2193.f_1384), 3);
	}
	else
	{
		Var0 = { func_157() };
		if (func_73(Var0))
		{
			if (!func_74(Var0, Local_2193.f_7) && !(func_158() || func_18(iVar2191, 262144)))
			{
				func_153(0, Local_2193.f_1333);
				if (func_155(&(Local_2193.f_1384), 1))
				{
				}
			}
			else
			{
				func_153(2, Local_2193.f_1333);
				func_155(&(Local_2193.f_1384), 0);
			}
		}
		else
		{
			func_153(1, Local_2193.f_1333);
			func_155(&(Local_2193.f_1384), 0);
		}
	}
}

void func_53()
{
	if (func_159(Local_2193.f_1333))
	{
		if (!func_137(256))
		{
			if (Local_2193.f_9 != -785841056)
			{
				func_160(-2121539959, 0);
			}
			else
			{
				func_160(-1256206172, 0);
			}
			func_43(256);
		}
	}
	else
	{
		func_105();
	}
}

void func_54()
{
	if (!func_159(Local_2193.f_1333))
	{
		return;
	}
	if (func_161())
	{
		return;
	}
	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	Var0.f_16.f_3 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_22.f_1 = -1082130432;
	Var0.f_22.f_2 = 1;
	Var0.f_25 = -1;
	Var0.f_25.f_1 = -1;
	Var0.f_25.f_2 = -1;
	Var0.f_25.f_3 = -1;
	Var0.f_25.f_4 = -1;
	Var0.f_25.f_5 = -1;
	Var0.f_25.f_6 = -1;
	Var0.f_25.f_7 = -1;
	Var0.f_25.f_8 = -1;
	Var0.f_34 = 4;
	Var0.f_34.f_1.f_1 = -1;
	Var0.f_34.f_1.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	if (Local_2193.f_9 == -785841056)
	{
		func_43(512);
	}
	else if (!func_137(512))
	{
		Var58.f_1 = -1;
		Var58.f_3 = -1082130432;
		Var58.f_4 = 2;
		Var58.f_5 = -1082130432;
		Var58.f_7 = -1082130432;
		Var58.f_9 = -1082130432;
		Var58.f_11 = -1082130432;
		if (!func_162(&(Local_2193.f_1311)))
		{
			Var58.f_6 = 0;
			Var58.f_4 = 2;
			Var58.f_2 = 2;
			Var58 = 0;
			Var58.f_10 = 2;
			Var58.f_8 = 0;
			func_163(&Var0, Var58, 3);
		}
		func_164(&Var0, -2121539959, 0, 0);
		func_165(&Var0, 1);
		func_166(&Var0, 1);
		func_167(&Var0, 1);
		func_168(&Var0, Local_2193.f_7, 1, 1);
		func_169();
	}
}

void func_55(float fParam0)
{
	if (Global_1071686->f_22961 != fParam0)
	{
		if (fParam0 >= 0f)
		{
			Global_1071686->f_22961 = fParam0;
		}
	}
}

char* func_56()
{
	return "MP_FreeRoamCountdown";
}

char* func_57()
{
	return "MP_MatchEndPulseWinner";
}

char* func_58()
{
	return "MP_MatchEndPulseLoser";
}

char* func_59()
{
	return "MP_Trans_SceneToPhoto";
}

void func_60(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = _uiflowblock_request(-434015292);
	}
	else if (bParam2)
	{
		*uParam0 = _uiflowblock_request(1781462046);
	}
	else
	{
		*uParam0 = _uiflowblock_request(-242590942);
	}
	uParam0->f_3 = _databinding_add_data_container_from_path("", "transitionData");
}

void func_61(var uParam0, bool bParam1)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3))
	{
		uParam0->f_3 = _databinding_add_data_container_from_path("", "transitionData");
	}
	if (_databinding_is_data_id_valid(uParam0->f_11))
	{
		_databinding_write_data_bool(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = _databinding_add_data_bool(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

bool func_62(int iParam0)
{
	return func_170(1, iParam0);
}

void func_63(bool bParam0)
{
	if (!bParam0)
	{
		func_171(18);
	}
	else
	{
		func_172(18);
	}
}

void func_64()
{
	pause_clock(true, 1);
	func_41(1229355466);
	func_173(131072);
	func_174();
	func_173(2097152);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_1444.f_331[iVar0] = -1;
		iVar0++;
	}
	Local_1444.f_50 = Local_2193.f_2;
	Local_1444.f_266 = { 0f, 0f, 0f };
	_0x780a13f780a13f1b(0);
}

bool func_65(int iParam0)
{
	return func_78(Local_2193.f_1336, iParam0);
}

Vector3 func_66(int iParam0, var uParam1)
{
	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, -135059083, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_67(int iParam0, var uParam1)
{
	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, -1922656805, &vVar0, 0);
	}
	return vVar0;
}

bool func_68(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_69(vector3 vParam0, vector3 vParam3)
{
	bVar0 = false;
	if (!does_entity_exist(Global_1102219->f_26.f_3344))
	{
		bVar0 = true;
	}
	else if (!func_147(get_entity_coords(Global_1102219->f_26.f_3344, false, false), vParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Global_1102219->f_26.f_3348 = { vParam0 };
		Global_1102219->f_26.f_3354 = { vParam3 };
		Global_1102219->f_26.f_3345 = 1;
		request_model(-861544272, false);
	}
}

void func_70(bool bParam0)
{
	if (bParam0)
	{
		func_175(4096);
	}
	else
	{
		func_176(4096);
	}
}

void func_71()
{
	if (Local_2193.f_1296 <= 0f)
	{
		return;
	}
	Local_2193.f_1395 = _create_volume_sphere(Local_2193.f_1397, 0f, 0f, 0f, Local_2193.f_1296, Local_2193.f_1296, Local_2193.f_1296);
	if (_does_volume_exist(Local_2193.f_1395))
	{
		iVar0 = func_177();
		_0x2161278c6322f740(iVar0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(Local_2193.f_1395, iVar0, 0, 0, -1, -1, 0);
		_0x18262cafebb5fbe1(Local_2193.f_1395, iVar0, 0, 0, -1, -1, 0);
		_0xb03944057fd735ba(Local_2193.f_1395, 4, 0);
	}
}

void func_72()
{
}

bool func_73(struct<2> Param0)
{
	if (!func_178(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_179(Param0))
	{
		return false;
	}
	return true;
}

bool func_74(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_75(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_76(int iParam0, int iParam1)
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

bool func_77()
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
	if (!func_73(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_78(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_79()
{
	if (func_180(2, Local_2193.f_1333))
	{
		if (!func_181(2))
		{
			if (func_182())
			{
				func_183(2);
			}
		}
		else
		{
			func_184();
			func_185(1);
		}
	}
}

void func_80()
{
	if (!func_181(4))
	{
		if (func_186())
		{
			func_183(4);
		}
	}
	else if (func_187(4))
	{
		func_188(&(Local_1950.f_1), 0);
		func_185(3);
	}
}

void func_81()
{
	func_189();
	if (func_162(&(Local_1950.f_1)))
	{
		iVar0 = func_190(&(Local_1950.f_1));
		iVar1 = (Local_2193.f_1269 - iVar0);
		if (func_68(Local_2193.f_1400))
		{
			iVar2 = func_191();
		}
		else
		{
			iVar2 = ceil((IntToFloat(func_191()) * 0.5f));
		}
		if (iVar1 <= iVar2)
		{
			func_185(4);
		}
		else if (Local_2193.f_9 != -785841056 && iVar1 >= 16000)
		{
			iVar3 = func_192(2);
			if (iVar3 >= Local_2193.f_1277 && func_187(8))
			{
				func_193(&(Local_1950.f_1), (Local_2193.f_1269 - 16000));
			}
		}
	}
}

void func_82()
{
	iVar0 = func_190(&(Local_1950.f_1));
	iVar1 = (Local_2193.f_1269 - iVar0);
	if (!func_181(16))
	{
		if (iVar1 <= func_194())
		{
			if (func_195())
			{
				func_183(16);
			}
		}
	}
	else if (iVar1 <= 1000)
	{
		func_196();
		func_197(1, Local_2193.f_1276);
		func_198(1);
		func_199();
		if (Local_1950.f_12 != 0)
		{
			func_200();
			func_185(6);
		}
		else
		{
			Local_1950.f_16 = func_192(2);
			func_201(0);
			func_183(2048);
			func_185(5);
		}
	}
}

void func_83()
{
	func_202();
	func_201(1);
	func_197(0, -1);
	func_198(0);
	if ((func_203() || func_204() > Local_2193.f_1270) || Local_1950.f_12 != 0)
	{
		func_200();
	}
}

void func_84()
{
	if (func_187(32))
	{
		if (!func_162(&(Local_1950.f_7)))
		{
			func_205(&(Local_1950.f_7));
		}
		else if (func_190(&(Local_1950.f_7)) > 500)
		{
			func_206();
			func_185(7);
		}
	}
}

void func_85()
{
	func_185(8);
}

void func_86()
{
	if (func_207())
	{
		func_185(9);
	}
}

void func_87()
{
	if (!func_65(262144))
	{
		if (is_entity_dead(Global_34))
		{
			if (func_208())
			{
				clear_all_help_messages();
			}
			func_173(262144);
		}
	}
	else if (!is_entity_dead(Global_34))
	{
		func_209(262144);
	}
}

void func_88()
{
	Global_1196898->f_78[iVar2191]->f_2 = Local_2193.f_10 >= 3;
	Global_1196898->f_78[iVar2191]->f_1 = &Local_2000[Local_2193.f_1333];
	if (&Local_2000[Local_2193.f_1333] != 2)
	{
		return;
	}
	if (func_210())
	{
		func_211();
	}
	else if (func_212())
	{
		func_213(1);
	}
}

void func_89()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_214(iVar0))
		{
			func_215(iVar0);
		}
		iVar0++;
	}
}

void func_90()
{
	if (iVar2191 == -1)
	{
		return;
	}
	if (Local_2193.f_1333 == -1)
	{
		return;
	}
	Global_1196898->f_78[iVar2191]->f_2 = Local_2193.f_10 >= 3;
	Global_1196898->f_78[iVar2191]->f_1 = &Local_2000[Local_2193.f_1333];
	if (&Local_2000[Local_2193.f_1333] != 2)
	{
		return;
	}
	iVar1 = func_216();
	switch (Local_2193.f_1)
	{
		case 18:
			if (!network_is_player_active(iVar1))
			{
				return;
			}
			if (!network_is_player_a_participant(iVar1))
			{
				return;
			}
			iVar0 = network_get_participant_index(iVar1);
			if (&Local_2000[iVar0] != 2)
			{
				return;
			}
			func_217(func_216(), Local_2193.f_7, 1, 0);
			break;
	}
}

void func_91()
{
	if (func_159(Local_2193.f_1333) && func_137(134217728))
	{
		func_218(0);
	}
}

void func_92()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_219(iVar0);
				break;
			case 1741908893:
				func_220(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_93()
{
	if (Local_2193.f_1420 == -1)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (&Local_1950.f_17[iVar0] == player_id())
			{
				Local_2193.f_1420 = iVar0;
			}
			iVar0++;
		}
	}
}

void func_94()
{
}

void func_95()
{
	if (iVar1948 >= 6)
	{
		func_221();
		func_222(6);
		return;
	}
	func_223();
	if (!func_180(2, Local_2193.f_1333))
	{
		bVar0 = true;
		if (!func_224(func_112(Local_2193.f_1)))
		{
			bVar0 = false;
		}
		if (func_115())
		{
			request_ptfx_asset();
			if (!has_ptfx_asset_loaded())
			{
				bVar0 = false;
			}
		}
		if (!_0xd9130842d7226045(func_120(), 0) || !_0xe368e8422c860ba7(func_121(), func_122(), -2))
		{
			bVar0 = false;
		}
		if (Local_2193.f_9 != -785841056)
		{
			if (!func_227(&(Local_2193.f_1338), func_225(is_ped_male(Global_34)), func_226()))
			{
				bVar0 = false;
			}
			if (!func_228(&(Local_2193.f_1421)))
			{
				bVar0 = false;
			}
		}
		if (!func_229())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_230(2, Local_2193.f_1333);
		}
		else if (Local_2193.f_1337 == -1 || (get_game_timer() - Local_2193.f_1337) > Global_1901947->f_308.f_178)
		{
			if (Local_2193.f_1337 == -1)
			{
			}
			func_230(2, Local_2193.f_1333);
		}
	}
	else if (iVar1948 > 0)
	{
		if (Local_2193.f_9 != -785841056)
		{
			func_114(0);
		}
		StringCopy(&(Local_2193.f_13.f_951), _create_var_string(2, &(Local_2193.f_1339)), 64);
		func_52();
		func_222(1);
	}
}

void func_96()
{
	if (iVar1948 >= 6)
	{
		func_221();
		func_222(6);
		return;
	}
	func_223();
	if (!func_180(4, Local_2193.f_1333))
	{
		if (func_231())
		{
			func_230(4, Local_2193.f_1333);
		}
	}
	else if (iVar1948 > 1)
	{
		func_232();
		if (Local_2193.f_9 == -785841056)
		{
			func_222(3);
		}
		else
		{
			func_222(2);
		}
	}
}

void func_97()
{
	if (iVar1948 >= 6)
	{
		func_221();
		func_222(6);
		return;
	}
	func_233();
	func_234();
	if (!func_137(2097152))
	{
		if (func_137(1))
		{
			if (func_235() || func_236())
			{
				if (func_62(255))
				{
					return;
				}
				func_237();
			}
			else if (func_62(255) || is_screen_faded_out())
			{
				if (!func_162(&(Local_2193.f_1320)))
				{
					func_205(&(Local_2193.f_1320));
				}
				else if (func_190(&(Local_2193.f_1320)) > 30000)
				{
					func_237();
				}
			}
		}
	}
	else if (!func_62(255))
	{
		if (!func_238(67108864))
		{
			func_239(67108864);
		}
		func_240(1);
		_0x2e399eafbeea74d5();
		func_241(0, 1, 0, 0, 0, 0, 0, 0, 0);
		func_230(8, Local_2193.f_1333);
		func_222(3);
	}
}

void func_98()
{
	if (iVar1948 >= 6)
	{
		func_221();
		func_222(6);
		return;
	}
	func_233();
	func_242();
	func_234();
	func_243();
	func_244();
	func_245();
	if (iVar1948 > 3)
	{
		func_246();
		func_247();
		func_222(4);
	}
}

void func_99()
{
	if (iVar1948 >= 6)
	{
		func_221();
		func_248(iVar2191, 2);
		func_222(6);
		return;
	}
	func_233();
	func_242();
	func_234();
	func_245();
	if (!func_180(16, Local_2193.f_1333))
	{
		iVar0 = func_190(&(Local_1950.f_1));
		iVar1 = (Local_2193.f_1269 - iVar0);
		if (iVar1 <= func_194())
		{
			if (func_249())
			{
				func_230(16, Local_2193.f_1333);
			}
		}
	}
	else if (iVar1948 > 4)
	{
		func_250();
		func_251();
		func_252();
		func_52();
		func_253();
		func_254(&(Local_2193.f_1006), 1);
		func_255(1);
		func_256();
		func_257();
		func_248(iVar2191, 2);
		func_222(5);
	}
}

void func_100()
{
	if (iVar1948 >= 8)
	{
		func_222(8);
		return;
	}
	func_258();
	if (iVar1948 > 5)
	{
		func_221();
		return;
	}
	else if (func_137(8192))
	{
		func_221();
		func_222(6);
		return;
	}
	func_233();
	func_242();
	func_259();
	func_260();
	func_252();
	func_261();
	func_262();
	if (!func_263())
	{
		func_264();
	}
	func_265();
	func_266();
	func_267();
}

void func_101()
{
	_0x236905c700fdb54d();
	if (!func_268())
	{
		func_269();
	}
	func_270();
	func_271();
	func_272();
	if (func_273())
	{
		func_274();
	}
	if (!func_159(Local_2193.f_1333))
	{
		func_222(8);
		return;
	}
	if (!func_180(32, Local_2193.f_1333))
	{
		func_230(32, Local_2193.f_1333);
	}
	else if (iVar1948 > 6 || func_137(8192))
	{
		if (!func_137(268435456))
		{
			func_275(Local_1950.f_10);
			if (func_159(Local_2193.f_1333))
			{
				if (!is_bit_set(Local_2193.f_13.f_11.f_158, 0))
				{
					func_276(&(Local_2193.f_13));
					func_277(&(Local_2193.f_13));
					func_280(func_278(), func_279(), Local_2193.f_11, Local_2193.f_12, 30000);
				}
				func_281();
				func_282();
			}
		}
		else if (!func_137(536870912))
		{
			if (Local_2193.f_1283 >= Local_2193.f_1282)
			{
				func_43(536870912);
			}
			else if (!func_162(&(Local_2193.f_1314)))
			{
				func_188(&(Local_2193.f_1314), 0);
			}
			else if (func_190(&(Local_2193.f_1314)) > 1000)
			{
				func_43(536870912);
			}
		}
		else
		{
			func_283();
			func_222(7);
		}
	}
}

void func_102()
{
	_0x236905c700fdb54d();
	func_272();
	func_284();
	if (!func_159(Local_2193.f_1333))
	{
		func_129(1, 1);
		func_222(8);
		return;
	}
	func_270();
	func_285();
	if (func_286())
	{
		if (func_287())
		{
			if (!func_288())
			{
				Local_2193.f_1385 = 1310067901;
			}
		}
		else if (func_65(8192))
		{
			Local_2193.f_1385 = 1022890889;
		}
		else
		{
			Local_2193.f_1385 = 0;
		}
		func_280(func_278(), func_279(), Local_2193.f_11, Local_2193.f_12, 30000);
	}
	else if (func_287())
	{
		Local_2193.f_1385 = 1310067901;
		func_280(0, func_279(), 0, 0, 30000);
	}
	else
	{
		func_289();
	}
	if (!func_65(32))
	{
		if (func_290())
		{
			func_291(&(Local_2193.f_1006));
			iVar0 = func_292();
			if (func_137(4096))
			{
				_0x3a9a281ff71249e9(func_57(), iVar0);
			}
			else
			{
				_0x3a9a281ff71249e9(func_58(), iVar0);
			}
			if (!func_287() || Local_2193.f_9 == -785841056)
			{
				func_254(&(Local_2193.f_1006), 1);
			}
			func_173(32);
		}
	}
	else if (!func_65(64))
	{
		func_293();
		if (Local_2193.f_9 == -785841056)
		{
			if (!func_294(Local_2193.f_1288))
			{
				func_295();
				iVar1 = 6000;
				if (Local_1950.f_12 != 0 || !func_296(Local_2193.f_1385))
				{
					iVar1 = 1000;
				}
				if (!func_162(&(Local_2193.f_1317)))
				{
					func_205(&(Local_2193.f_1317));
				}
				else if (func_190(&(Local_2193.f_1317)) > iVar1)
				{
					if (func_297())
					{
						return;
					}
					func_289();
					func_173(64);
					func_222(8);
				}
			}
		}
		else if (((!func_294(Local_2193.f_1288) && !func_298()) && !func_299()) && !func_300())
		{
			if (_is_any_app_running())
			{
				if (!func_162(&(Local_2193.f_1323)))
				{
					func_205(&(Local_2193.f_1323));
				}
				else if (func_190(&(Local_2193.f_1323)) > 10000)
				{
					func_301();
					func_302(&(Local_2193.f_1323));
				}
			}
			else
			{
				func_295();
				if (!func_162(&(Local_2193.f_1317)))
				{
					func_205(&(Local_2193.f_1317));
				}
				else if (func_190(&(Local_2193.f_1317)) > 1000 && !func_294(Local_2193.f_1290))
				{
					func_130(0);
					func_173(64);
				}
			}
		}
		else
		{
			if (func_162(&(Local_2193.f_1317)))
			{
				func_302(&(Local_2193.f_1317));
			}
			if (func_162(&(Local_2193.f_1323)))
			{
				func_302(&(Local_2193.f_1323));
			}
		}
	}
	else if (!func_65(128))
	{
		func_293();
		if (!is_screen_faded_out())
		{
			if (!is_screen_fading_out() && !func_62(255))
			{
				do_screen_fade_out(250);
				_0x9b1fc259187c97c0("winners_pose");
			}
		}
		else if (func_293() && func_303())
		{
			animpostfx_stop(func_57());
			animpostfx_stop(func_58());
			if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
			{
				if (_is_ped_hogtied(Global_34))
				{
					_0x79559bad83ccd038(Global_34, 3, 0, 0, 0, 1090519040);
				}
				if (_0x0e99e3bf11bb6367(Global_34))
				{
					iVar2 = _0xd0b7aeb56229d317(Global_34);
					if ((does_entity_exist(iVar2) && !is_entity_dead(iVar2)) && is_ped_a_player(iVar2))
					{
						set_player_control(player_id(), false, 256, false);
						_0x789dabd18e9024db(Global_34, 32768, 1);
						clear_ped_tasks(Global_34, 1, 0);
					}
				}
				if (_0x3bdfcf25b58b0415(Global_34))
				{
					_0x789dabd18e9024db(Global_34, 4096, 1);
				}
				if (Local_1950.f_10 == player_id() && !func_68(Local_2193.f_1403))
				{
					func_304(Local_2193.f_1403, get_entity_heading(Global_34));
				}
			}
			if (Local_1950.f_12 != 0 || !does_entity_exist(Local_2193.f_1417))
			{
				func_222(8);
				return;
			}
			func_305();
			func_306();
			func_173(128);
		}
	}
	else if (!func_65(512))
	{
		func_306();
		if (!is_screen_faded_in())
		{
			if (!is_screen_fading_in())
			{
				if (does_cam_exist(Local_2193.f_1416) && !is_cam_active(Local_2193.f_1416))
				{
					set_cam_active(Local_2193.f_1416, true);
					render_script_cams(true, false, 3000, true, false, 0);
				}
				if (does_entity_exist(Local_2193.f_1417) && !is_entity_dead(Local_2193.f_1417))
				{
					set_entity_visible(Local_2193.f_1417, true);
				}
				func_307();
				_hide_hud_component(690901814);
				do_screen_fade_in(250);
			}
		}
		else
		{
			func_302(&(Local_2193.f_1317));
			Local_2193.f_1419 = 1500;
			if (!func_308())
			{
				if (Local_1950.f_10 != 255)
				{
					iVar3 = func_309();
					Local_2193.f_1419 = func_310(iVar3);
					iVar4 = func_311(iVar3);
					func_312(Local_2193.f_1417, iVar3, 2, 0, 0, iVar4, 0);
				}
			}
			func_173(512);
		}
	}
	else if (!func_65(1024))
	{
		func_306();
		if (!func_162(&(Local_2193.f_1317)))
		{
			StringCopy(&cVar5, func_313(), 64);
			if (is_string_null_or_empty(&cVar5))
			{
				StringCopy(&cVar5, _create_var_string(2, "FME_SHARD_OUTRO_TITLE_WINNER"), 64);
			}
			StringCopy(&cVar13, func_314(), 64);
			if (is_string_null_or_empty(&cVar13))
			{
				cVar13 = { Local_2193.f_1407 };
			}
			if (func_137(8192) || func_65(524288))
			{
				func_319(&(Local_2193.f_1421), &cVar13, func_315(), func_316(), func_318(func_317(&(Local_2193.f_13), 0)), "", "", Local_2193.f_1415);
			}
			else if (Local_1950.f_10 == 255)
			{
				if (is_string_null_or_empty(func_320()))
				{
					func_319(&(Local_2193.f_1421), "", "", _create_var_string(2, "FME_SHARD_OUTRO_PRIMARY_EXPIRED"), "", "", "", 109029619);
				}
				else
				{
					func_319(&(Local_2193.f_1421), "", "", func_320(), "", "", "", 109029619);
				}
			}
			else if (Local_1950.f_10 == player_id())
			{
				func_319(&(Local_2193.f_1421), &cVar5, &cVar13, func_318(func_317(&(Local_2193.f_13), 0)), "", "", "", Local_2193.f_1415);
			}
			else
			{
				func_319(&(Local_2193.f_1421), &cVar5, &cVar13, func_321(Local_2193.f_1407, Local_2193.f_1415, func_317(&(Local_2193.f_13), 0)), "", "", "", Local_2193.f_1415);
			}
			func_205(&(Local_2193.f_1317));
		}
		else
		{
			iVar21 = Local_2193.f_1419;
			func_322(&iVar21);
			if (func_323() || (iVar21 > 0 && func_190(&(Local_2193.f_1317)) > iVar21))
			{
				_0x9b1fc259187c97c0("photograph");
				_0x9b8d5d4cb8af58b3(Local_2193.f_1418);
				_0xe75cddebf618c8ff(Local_2193.f_1418);
				func_173(1024);
			}
		}
	}
	else if (!func_65(2048))
	{
		func_306();
		if (_0x9ab192a9ef980eed(Local_2193.f_1418, 2, 0, &uVar22))
		{
			bVar23 = true;
		}
		if (bVar23 || func_190(&(Local_2193.f_1317)) > 4000)
		{
			toggle_paused_renderphases(false);
			play_sound_frontend(func_123(), func_124(), true, 0);
			func_61(&(Local_2193.f_1421), 1);
			func_205(&(Local_2193.f_1317));
			func_173(2048);
		}
	}
	else if (!func_65(4096))
	{
		func_306();
		if (func_324(&(Local_2193.f_1421)) || func_190(&(Local_2193.f_1317)) > 8000)
		{
			func_205(&(Local_2193.f_1317));
			func_173(4096);
		}
	}
	else if (!func_65(8192))
	{
		func_306();
		if (func_190(&(Local_2193.f_1317)) > 5000)
		{
			if (!func_325())
			{
				func_118(&(Local_2193.f_1421));
			}
			func_35(func_326());
			func_302(&(Local_2193.f_1317));
			func_173(8192);
		}
	}
	else if (!func_65(16384))
	{
		func_306();
		if (_databinding_is_data_id_valid(Local_2193.f_13.f_11))
		{
			if (Local_2193.f_1284 > 0)
			{
				_databinding_write_data_string_from_parent(Local_2193.f_13.f_11, "info_value_07", func_327(Local_2193.f_1284));
				_databinding_write_data_bool_from_parent(Local_2193.f_13.f_11, "info_value_07", true);
				Local_2193.f_1284 = 0;
			}
			if (Local_2193.f_1286 > 0)
			{
				_databinding_write_data_string_from_parent(Local_2193.f_13.f_11, "info_visible_08", func_327(Local_2193.f_1286));
				_databinding_write_data_bool_from_parent(Local_2193.f_13.f_11, "info_visible_08", true);
				Local_2193.f_1286 = 0;
			}
			if (Local_2193.f_1285 > 0)
			{
				_databinding_write_data_string_from_parent(Local_2193.f_13.f_11, "info_visible_06", func_327(Local_2193.f_1285));
				_databinding_write_data_bool_from_parent(Local_2193.f_13.f_11, "info_visible_06", true);
				Local_2193.f_1285 = 0;
			}
			if (Local_2193.f_1287 > 0)
			{
				Local_2193.f_1287 = 0;
			}
		}
		if (!func_162(&(Local_2193.f_1317)))
		{
			func_205(&(Local_2193.f_1317));
		}
		else if (func_190(&(Local_2193.f_1317)) > 2000)
		{
			iVar24 = 0;
			iVar25 = 0;
			iVar26 = 0;
			iVar27 = _0x901e0dc25080c8b9(player_id());
			if ((!_0xd6f6acf4392187fb(iVar27) || _0x149a2751ab66ac02(iVar27) <= 1) || !_0x93a91a351a07360e(iVar27))
			{
				iVar24 = 1;
				if (func_180(512, Local_2193.f_1333))
				{
					iVar25++;
				}
				if (func_180(1024, Local_2193.f_1333))
				{
					iVar26++;
				}
			}
			else
			{
				iVar30 = 0;
				iVar30 = 0;
				while (iVar30 <= 31)
				{
					iVar28 = int_to_playerindex(iVar30);
					if ((network_is_player_active(iVar28) && _0x9be7dcb22d32ccbe(iVar27, iVar28)) && network_is_player_a_participant(iVar28))
					{
						iVar29 = network_get_participant_index(iVar28);
						if (network_is_participant_active(iVar29))
						{
							iVar24++;
							if (func_180(512, iVar29))
							{
								iVar25++;
							}
							if (func_180(1024, iVar29))
							{
								iVar26++;
							}
							if ((_0x424b17a7dc5c90bc(iVar28) && iVar28 != player_id()) && func_180(1024, iVar29))
							{
								iVar25 = 7;
							}
						}
					}
					iVar30++;
				}
			}
			if (iVar25 > iVar24)
			{
				iVar25 = iVar24;
			}
			if (iVar26 > iVar24)
			{
				iVar26 = iVar24;
			}
			if (!func_328(Local_2193.f_1298))
			{
				if (iVar24 > 1)
				{
					Local_2193.f_1298 = func_329(_create_var_string(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar25, iVar24), 1138488863, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				}
				else
				{
					Local_2193.f_1298 = func_329("FME_PROMPT_RETURN_TO_FREE_ROAM", 1138488863, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				}
			}
			if (func_328(Local_2193.f_1298))
			{
				if (iVar24 > 1)
				{
					func_330(Local_2193.f_1298, _create_var_string(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar25, iVar24), 1);
				}
				else
				{
					func_330(Local_2193.f_1298, "FME_PROMPT_RETURN_TO_FREE_ROAM", 1);
				}
				if (!func_180(512, Local_2193.f_1333))
				{
					if (func_331(Local_2193.f_1298, 1))
					{
						play_sound_frontend(func_125(), func_126(), true, 0);
						func_230(512, Local_2193.f_1333);
						func_332(Local_2193.f_1298, 0, 1, 1);
					}
				}
			}
			if (!func_180(1024, Local_2193.f_1333))
			{
				if (iVar25 >= iVar24 || func_190(&(Local_2193.f_1317)) > 62000)
				{
					func_230(1024, Local_2193.f_1333);
				}
			}
			else if (iVar26 >= iVar24)
			{
				func_333(&(Local_2193.f_1298), 1, 1);
				func_302(&(Local_2193.f_1317));
				func_173(16384);
			}
		}
	}
	else if (!func_65(32768))
	{
		if (func_325())
		{
			func_118(&(Local_2193.f_1421));
		}
		func_306();
		if (!is_screen_faded_out())
		{
			if (!is_screen_fading_out())
			{
				_0x9b1fc259187c97c0("fade_to_black");
				do_screen_fade_out(250);
			}
		}
		else
		{
			func_173(32768);
			func_222(8);
		}
	}
}

void func_103()
{
	_0x236905c700fdb54d();
	if (func_334())
	{
		func_222(9);
	}
}

void func_104()
{
}

void func_105()
{
	if (func_137(256))
	{
		func_335(0);
		func_336(256);
	}
}

void func_106(bool bParam0)
{
	if (func_137(512))
	{
		if (Local_2193.f_9 == -785841056)
		{
		}
		func_337(1, bParam0);
		func_336(512);
	}
}

void func_107()
{
	func_338(4);
	func_338(16);
}

void func_108()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_339(iVar0);
		iVar0++;
	}
	if (func_180(16384, Local_2193.f_1333))
	{
		if (func_340())
		{
			func_341();
			func_342(16384, Local_2193.f_1333);
		}
	}
	if (func_180(8192, Local_2193.f_1333))
	{
		if (!func_343(Global_1296859->f_15))
		{
			func_344(1, 0, 0);
			func_342(8192, Local_2193.f_1333);
		}
	}
}

void func_109()
{
	if (func_137(1))
	{
		func_345();
		func_346(0);
		func_336(1);
	}
}

void func_110()
{
	if (func_137(1024))
	{
		func_347(1);
		func_336(1024);
	}
}

void func_111()
{
	if (func_137(2048))
	{
		if (Local_2193.f_9 == -785841056)
		{
			func_348(0);
		}
		else
		{
			func_349(1);
			_0x710448d44a64c213(1);
			_0xc805eb785824f712(1);
		}
		func_336(2048);
	}
}

struct<8> func_112(int iParam0)
{
	if (func_36(&Var8, iParam0) && func_143(&Var8))
	{
		func_144(Var8, -874721119, &Var0, 1);
	}
	return Var0;
}

void func_113(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (_text_database_has_loaded(func_350()))
	{
		_text_database_delete(func_350());
	}
	if (!is_string_null_or_empty(&uParam0) && _text_database_has_loaded(&uParam0))
	{
		_text_database_delete(&uParam0);
	}
}

void func_114(bool bParam0)
{
	Global_1940144->f_15 = !bParam0;
}

bool func_115()
{
	return false;
}

void func_116(int iParam0)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	if (!_is_anim_scene_loaded(iParam0, true, false))
	{
		return;
	}
	_delete_anim_scene(iParam0);
}

void func_117()
{
	if (Global_1071686->f_22961 >= 0f)
	{
		Global_1071686->f_22961 = -1f;
	}
}

void func_118(var uParam0)
{
	if (_uistatemachine_exists(*uParam0))
	{
		uVar0 = *uParam0;
		_uistatemachine_destroy_and_clear(&uVar0);
		_uiflowblock_release(uParam0);
	}
	if (_databinding_is_data_id_valid(uParam0->f_3))
	{
		_databinding_remove_data_entry(uParam0->f_3);
	}
}

bool func_119()
{
	return Global_1071686->f_28662.f_65.f_42 != 0;
}

char* func_120()
{
	return "RDRO_Out_Of_Bounds_Sounds";
}

char* func_121()
{
	return "Toast_On";
}

char* func_122()
{
	return "HUD_Toast_Soundset";
}

char* func_123()
{
	return "photograph";
}

char* func_124()
{
	return "rdro_gamemode_transition_sounds";
}

char* func_125()
{
	return "continue";
}

char* func_126()
{
	return "MP_Leaderboard_Sounds";
}

void func_127()
{
	func_351();
}

void func_128()
{
	pause_clock(false, 1);
	clear_ped_tasks(Global_34, 1, 0);
	if (is_ped_on_mount(Global_34))
	{
		task_dismount_animal(Global_34, 0, 0, 0, 0, 0);
	}
	_0x780a13f780a13f1b(1);
}

void func_129(bool bParam0, bool bParam1)
{
	func_255(1);
	if (bParam0)
	{
		func_289();
	}
	if (bParam1)
	{
		func_352();
		func_353();
	}
	func_354();
	func_355();
	func_356();
	func_357();
	func_358();
	func_256();
	func_359();
}

void func_130(bool bParam0)
{
	iVar0 = func_360();
	if (bParam0)
	{
		if (func_65(131072) && iVar0 != 9)
		{
			func_361(9);
		}
	}
	else if (func_65(131072) && ((iVar0 == 4 || iVar0 == 9) || iVar0 == 10))
	{
		if (!func_360() == 0)
		{
			func_362(0, 0, 0, 1);
		}
	}
}

void func_131()
{
	Global_1102219->f_26.f_3348 = { 0f, 0f, 0f };
	Global_1102219->f_26.f_3354 = { 0f, 0f, 0f };
	Global_1102219->f_26.f_3347 = 1;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 7;
		case 15:
			return 10;
		case 16:
			return 8;
		case 17:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_133(int iParam0)
{
	return Global_1108365->f_935.f_28 == iParam0;
}

void func_134(int iParam0, int iParam1)
{
	if (iParam0 != -1 && Global_1196898->f_1[iParam0]->f_2 != iParam1)
	{
		Global_1196898->f_1[iParam0]->f_2 = iParam1;
	}
}

void func_135(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 11)
	{
		Global_1108365->f_935.f_5[iParam0] = Global_1296859->f_21;
	}
}

void func_136()
{
	if (Global_1108365->f_935.f_28 != -1)
	{
		Global_1108365->f_935.f_28 = -1;
	}
}

bool func_137(int iParam0)
{
	return func_78(Local_2193.f_1335, iParam0);
}

int func_138(int iParam0, var uParam1, struct<2> Param2, bool bParam4)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_363(Param2) && !func_364(Param2))
	{
		return 0;
	}
	if (bParam4)
	{
		func_365(Param2, 0, 4, 0, 0);
	}
	else
	{
		func_365(Param2, 0, 0, 0, 0);
	}
	func_366(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 1;
	}
	func_248(iParam0, 128);
	func_248(iParam0, 64);
	return 1;
}

int func_139(int iParam0, var uParam1, struct<2> Param2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_363(Param2) && !func_364(Param2))
	{
		return 0;
	}
	func_365(Param2, 0, 1, 0, 0);
	func_366(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_248(iParam0, 256);
	func_248(iParam0, 64);
	return 1;
}

int func_140(int iParam0, struct<2> Param1, bool bParam3)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	if (!func_363(Param1) && !func_364(Param1))
	{
		return 0;
	}
	if (bParam3 && network_is_player_active(player_id()))
	{
		iVar0 = _0x901e0dc25080c8b9(player_id());
		if (_0x0f99f6436528a089(iVar0) && _0x149a2751ab66ac02(iVar0) > 1)
		{
			func_367(1);
		}
	}
	if (func_18(iParam0, 32))
	{
		func_365(Param1, 0, 2, 0, 0);
	}
	else
	{
		func_365(Param1, 0, -1, 0, 0);
	}
	func_366(iParam0, Param1);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_248(iParam0, 64);
	return 1;
}

void func_141()
{
	func_368(2048);
}

int func_142(int iParam0, int iParam1)
{
	if (iParam0 == -785841056)
	{
		return 0;
	}
	if (!does_entity_exist(Global_34))
	{
		return 0;
	}
	decor_set_int(Global_34, "iFmeLastEventPlayed", iParam1);
	return 1;
}

bool func_143(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_144(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(cParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_145(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_float(fParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_146(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_vector(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_147(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 15:
			return -596286663;
		case 16:
			return 923956646;
		case 17:
			return 1459450644;
		case 18:
			return -2071675432;
		case 8:
			return -552339597;
		case 10:
			return 2144670272;
		case 9:
			return 996459079;
		case 11:
			return 1996177174;
		case 12:
			return -1702168032;
		case 13:
			return -27117790;
		case 14:
			return 1653867545;
		case 7:
			return -142235487;
		default:
			break;
	}
	return 0;
}

void func_149(int iParam0, int iParam1)
{
	func_369(iParam0, iParam1);
}

void func_150(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_371(uParam0, func_370(iVar0, 1));
		iVar0++;
	}
}

bool func_151(int iParam0, var uParam1)
{
	if (!_0x603ac35fd4602c76(*uParam1))
	{
		return false;
	}
	Var0 = *uParam1;
	Var0.f_2 = -1770809161;
	Var0.f_3 = Local_1444.f_50;
	Var0.f_4 = -1125105727;
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
	}
	if (!func_39(Var0, -1530280304, &(uParam1->f_48), 0))
	{
		uParam1->f_48 = 600000000;
	}
	return true;
}

void func_152(var uParam0)
{
	if (func_372(&Var0))
	{
		uVar5 = Var0.f_1;
		Var0 = *uParam0;
		Var0.f_2 = 1488517152;
		_datafile_get_data_node_index(&(Var0.f_1), &Var0);
		iVar6 = _datafile_get_num_children(Var0, Var0.f_1);
		iVar7 = 0;
		while (iVar7 <= (iVar6 - 1))
		{
			Var0.f_1 = uVar5;
			Var0.f_3 = iVar7;
			Var0.f_2 = -1396689762;
			if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
			{
			}
			vVar8 = { 0f, 0f, 0f };
			vVar11 = { 0f, 0f, 0f };
			Var0.f_2 = 125211217;
			if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
			{
				if (!func_146(Var0, -1982623011, &vVar8, 1))
				{
				}
				if (!func_146(Var0, -1128990743, &vVar11, 1))
				{
				}
			}
			*uParam0->f_4[iVar7] = { vVar8 };
			*uParam0->f_20[iVar7] = { vVar11 };
			iVar7++;
		}
	}
}

void func_153(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (&Local_2000[iParam1] != iParam0)
	{
		if (iParam0 == 0 && &Local_2000[iParam1] == 2)
		{
			func_140(iVar2189, Local_2193.f_7, 1);
		}
		Local_2000[iParam1] = iParam0;
	}
}

bool func_154()
{
	return Global_1572887->f_106.f_75 != 1;
}

bool func_155(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return true;
	}
	return false;
}

bool func_156(var uParam0)
{
	return false;
}

struct<2> func_157()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_373(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_373(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_158()
{
	return (func_374() != 0 || func_375(1));
}

bool func_159(int iParam0)
{
	return &Local_2000[iParam0] == 2;
}

bool func_160(int iParam0, bool bParam1)
{
	iVar4 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (Global_1139381->f_3876.f_711 == iParam0)
	{
		return true;
	}
	Global_1139381->f_3876.f_706.f_1 = 0;
	Global_1139381->f_3876.f_706.f_2 = 1613014828;
	Global_1139381->f_3876.f_706.f_3 = iParam0;
	Global_1139381->f_3876.f_706.f_4 = 0;
	if (!_0x603ac35fd4602c76(Global_1139381->f_3876.f_706))
	{
		Global_1139381->f_3876.f_706 = Global_1139381->f_2;
	}
	if (!_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
	{
		return false;
	}
	Global_1139381->f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_376(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1139381->f_3876.f_706.f_4 = iVar1;
				Global_1139381->f_3876.f_706.f_2 = -239316549;
				if (_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_377(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1139381->f_3876.f_706.f_2 = 1242520881;
					if (_datafile_get_bool(&bVar3, &(Global_1139381->f_3876.f_706)))
					{
					}
					else
					{
						bVar3 = true;
					}
					(Global_1139381->f_3876.f_2[func_378(iVar2, 1)])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

bool func_161()
{
	if (func_137(512))
	{
		return false;
	}
	if (((Local_2193.f_9 == -785841056 && Local_2193.f_1 == 16) && func_300()) && !func_137(512))
	{
		func_379();
		return true;
	}
	if (Local_2193.f_9 == -785841056 && func_380(Global_34))
	{
		func_381(&(Local_2193.f_1271), 1);
		return true;
	}
	if ((Local_2193.f_9 == -785841056 && func_382(&(Local_2193.f_1271))) && func_383(&(Local_2193.f_1271)) < 2f)
	{
		return true;
	}
	return false;
}

bool func_162(var uParam0)
{
	return func_384(*uParam0, 1);
}

void func_163(var uParam0, struct<12> Param1, int iParam13)
{
	Global_1956200->f_1565.f_117.f_12 = iParam13;
	func_385(&(Global_1956200->f_1565.f_117), Param1, Param1.f_1);
	func_386(&(Global_1956200->f_1565.f_117), Param1.f_2, Param1.f_3);
	func_387(&(Global_1956200->f_1565.f_117), Param1.f_4, Param1.f_5);
	func_388(&(Global_1956200->f_1565.f_117), Param1.f_6, Param1.f_7);
	func_389(&(Global_1956200->f_1565.f_117), Param1.f_8, Param1.f_9);
	func_390(&(Global_1956200->f_1565.f_117), Param1.f_10, Param1.f_11);
	uParam0->f_8 = 1;
	func_391(uParam0);
}

void func_164(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_10 = 1;
	uParam0->f_54 = iParam1;
	uParam0->f_54.f_1 = iParam2;
	uParam0->f_54.f_2 = iParam3;
}

void func_165(var uParam0, bool bParam1)
{
	if (!bParam1 && (uParam0->f_5 || func_392(2)))
	{
		return;
	}
	uParam0->f_7 = bParam1;
	if (!bParam1)
	{
		return;
	}
	func_391(uParam0);
}

void func_166(var uParam0, int iParam1)
{
	uParam0->f_11 = 1;
	uParam0->f_57 = iParam1;
}

void func_167(var uParam0, int iParam1)
{
	uParam0->f_2 = 1;
	uParam0->f_21 = iParam1;
}

void func_168(var uParam0, struct<2> Param1, bool bParam3, int iParam4)
{
	if (bParam3)
	{
		func_393(uParam0, Param1, iParam4);
		func_171(115);
	}
	else
	{
		Global_1139381->f_4854 = { *uParam0 };
		Global_1139381->f_4854.f_13 = { Param1 };
		func_172(115);
	}
}

void func_169()
{
	bVar0 = false;
	if (func_394(-1185145312, 1, 0, 0) > 0)
	{
		bVar0 = true;
	}
	_0x644ccb76a76cfbd6(1, 1, 1, 1, 1, 1);
	func_395(1);
	func_396(1);
	if (bVar0)
	{
		func_397(-1185145312, 1, 752097756);
		_0x83b8d50eb9446bba(Global_34, 1);
	}
	if (Local_2193.f_1 == 15)
	{
		if (!func_397(201475512, 1, 752097756))
		{
		}
	}
	func_43(512);
	func_398();
}

bool func_170(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_399(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_400())
	{
		return func_399(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_399(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_171(int iParam0)
{
	if (func_401(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	if (func_402(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_173(int iParam0)
{
	func_149(&(Local_2193.f_1336), iParam0);
}

void func_174()
{
	func_35(227643027);
	func_403(&(Local_2193.f_1021), 1, 0);
	func_404(&(Local_2193.f_1021), -1646261997, 0);
	func_406(&(Local_2193.f_1021), func_405(-1646261997), 0);
	func_407(&(Local_2193.f_1021), 0f, 0);
	func_403(&(Local_2193.f_1021), 1, 1);
	func_404(&(Local_2193.f_1021), 1904459580, 1);
	func_406(&(Local_2193.f_1021), func_405(1904459580), 1);
	func_407(&(Local_2193.f_1021), 0f, 1);
}

void func_175(int iParam0)
{
	if (func_408(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

void func_176(int iParam0)
{
	if (!func_409(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 - (Global_1102219->f_26.f_9 && iParam0));
}

int func_177()
{
	return 10208;
}

bool func_178(int iParam0)
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

int func_179(int iParam0)
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

bool func_180(int iParam0, int iParam1)
{
	return func_78(Local_2000[iParam1]->f_1, iParam0);
}

bool func_181(int iParam0)
{
	return func_78(Local_1950.f_13, iParam0);
}

bool func_182()
{
	iVar0 = 1;
	if (!func_411(func_410()))
	{
		iVar0 = 0;
	}
	if (!func_411(func_412()))
	{
		iVar0 = 0;
	}
	if (!func_411(func_413(Local_1444.f_50)))
	{
		iVar0 = 0;
	}
	if (!func_411(func_414(Local_1444.f_50)))
	{
		iVar0 = 0;
	}
	if (!func_411(func_415(Local_1444.f_50)))
	{
		iVar0 = 0;
	}
	if (Local_1444.f_50 == -920598405)
	{
		if (!func_411(1468884243))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_183(int iParam0)
{
	func_149(&(Local_1950.f_13), iParam0);
}

void func_184()
{
}

void func_185(int iParam0)
{
	Local_1950 = iParam0;
}

bool func_186()
{
	iVar0 = 1;
	Local_1444.f_265 = 0;
	if (Local_1444.f_50 == -920598405)
	{
		func_416();
	}
	if (!func_417())
	{
		iVar0 = 0;
	}
	if (!func_418())
	{
		iVar0 = 0;
	}
	if (!func_419())
	{
		iVar0 = 0;
	}
	if (!func_420())
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_187(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && !func_78(Local_2000[iVar0]->f_1, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_188(var uParam0, bool bParam1)
{
	if (bParam1 || !func_162(uParam0))
	{
		func_205(uParam0);
	}
}

void func_189()
{
	Local_1444.f_265 = 0;
}

int func_190(var uParam0)
{
	if (!func_162(uParam0))
	{
		return 0;
	}
	if (func_421(uParam0))
	{
		return uParam0->f_2;
	}
	return func_422(uParam0->f_1);
}

int func_191()
{
	return 5000;
}

int func_192(int iParam0)
{
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = int_to_participantindex(iVar2);
		if (network_is_participant_active(iVar0) && &Local_2000[iVar2] >= iParam0)
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

void func_193(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_423(uParam0, 1);
	func_424(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_194()
{
	return 3000;
}

bool func_195()
{
	return true;
}

void func_196()
{
	if (!func_162(&(Local_1950.f_4)))
	{
		func_188(&(Local_1950.f_4), 0);
	}
}

void func_197(bool bParam0, int iParam1)
{
	if (!bParam0 && !func_425(2, 30))
	{
		return;
	}
	func_427(func_426(iParam1));
}

void func_198(bool bParam0)
{
	if (!bParam0 && !func_425(2, 60))
	{
		return;
	}
	Local_1950.f_14++;
	iVar0 = func_192(2);
	Local_1950.f_15 = (Local_1950.f_15 + iVar0);
}

void func_199()
{
}

void func_200()
{
	func_198(1);
	func_428();
	func_185(6);
}

void func_201(bool bParam0)
{
	if (!func_181(64))
	{
		if (Local_2193.f_1388 == -1125105727 && (Local_2193.f_9 == -1125105727 || Local_2193.f_9 == 1232677007))
		{
			iVar0 = func_429(2);
			if (iVar0 <= 1)
			{
				func_183(64);
				if (bParam0)
				{
					func_183(128);
				}
			}
		}
		else if ((Local_2193.f_1388 == 1839318411 && Local_2193.f_9 == -1125105727) && Local_2193.f_3 == 1455184052)
		{
			func_183(64);
			if (bParam0)
			{
				func_183(128);
			}
		}
	}
}

void func_202()
{
	if (Local_2193.f_9 == 1038512660 || Local_2193.f_9 == -785841056)
	{
		return;
	}
	if (Local_2193.f_13.f_11.f_2 == 0)
	{
		return;
	}
	if (func_317(&(Local_2193.f_13), 0) > 0f && network_is_player_active(Local_2193.f_13.f_211[0]->f_14))
	{
		func_430(Local_2193.f_13.f_211[0]->f_14);
	}
}

bool func_203()
{
	Local_1444.f_265 = 0;
	func_431();
	func_432();
	func_433();
	func_434();
	func_435();
	func_436();
	func_437();
	if (network_does_network_id_exist(Local_16.f_11) && func_438(Local_16.f_11))
	{
		func_439(8);
		return true;
	}
	if (Local_16.f_10 == 5)
	{
		func_439(32);
		return true;
	}
	if (func_440() == 0)
	{
		bVar0 = true;
		func_439(16);
	}
	if (bVar0)
	{
		if (!func_441(16))
		{
			trigger_music_event("MP_OWC_END");
			func_442(16);
		}
		return true;
	}
	return false;
}

int func_204()
{
	if (!func_162(&(Local_1950.f_4)))
	{
		return 0;
	}
	return func_190(&(Local_1950.f_4));
}

void func_205(var uParam0)
{
	func_193(uParam0, 0);
}

void func_206()
{
	if (Local_2193.f_9 == 1038512660)
	{
		func_443(&bVar0);
		if (bVar0)
		{
			func_183(256);
		}
	}
	else if (Local_2193.f_9 == -785841056)
	{
		if (Local_1950.f_12 != 1 && Local_1950.f_12 != 4)
		{
			func_444();
			func_427(0);
		}
	}
	else
	{
		func_444();
		if (func_181(2048))
		{
			func_427(0);
		}
	}
}

bool func_207()
{
	return true;
}

bool func_208()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

void func_209(int iParam0)
{
	func_445(&(Local_2193.f_1336), iParam0);
}

bool func_210()
{
	switch (Local_2193.f_1)
	{
		case 15:
			return true;
		case 16:
			return true;
		case 17:
			return true;
		case 1:
			return func_446();
		default:
			break;
	}
	return false;
}

void func_211()
{
	Global_1139381->f_5560.f_22 = get_frame_count();
}

bool func_212()
{
	switch (Local_2193.f_1)
	{
		case 12:
			return true;
		case 8:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 11:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 7:
			return true;
		default:
			break;
	}
	return false;
}

void func_213(int iParam0)
{
	if (!func_447(Global_1139381->f_5560.f_97, iParam0))
	{
		func_149(&(Global_1139381->f_5560.f_97), iParam0);
	}
}

bool func_214(int iParam0)
{
	switch (Local_2193.f_1)
	{
		case 16:
		case 17:
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case 1:
			return func_448(iParam0);
	}
	return false;
}

void func_215(int iParam0)
{
	if (!func_449(iParam0))
	{
		return;
	}
	Global_1139381->f_5693.f_10[iParam0] = get_frame_count();
}

int func_216()
{
	return Global_1108365->f_34.f_772;
}

void func_217(int iParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		if (!func_73(Param1))
		{
			return;
		}
		if (func_450(Param1, 1))
		{
			return;
		}
		if (func_451(Param1))
		{
			return;
		}
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return;
	}
	if (!network_is_player_active(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	func_452(iVar0);
	if (Global_1108365->f_34.f_353[iVar0] && Global_1108365->f_34.f_353[iVar0]->f_5 == -1)
	{
		return;
	}
	if (!func_364(Param1) || !bParam3)
	{
		Global_1108365->f_34.f_353[iVar0] = 1;
		Global_1108365->f_34.f_353[iVar0]->f_1 = iParam0;
		Global_1108365->f_34.f_353[iVar0]->f_5 = 5;
		Global_1108365->f_34.f_353[iVar0]->f_4 = Global_1296859->f_21;
		if (bParam4)
		{
			(*Global_1288736)[network_player_id_to_int()]->f_66 = 1;
		}
		if (bParam3)
		{
			Global_1108365->f_34.f_353[iVar0]->f_2 = { Param1 };
		}
		*Global_1108365->f_34.f_546[iVar0] = { func_453(iParam0) };
	}
	else
	{
		Global_1108365->f_34.f_353[iVar0] = 1;
		Global_1108365->f_34.f_353[iVar0]->f_1 = iParam0;
		Global_1108365->f_34.f_353[iVar0]->f_2 = { Param1 };
		Global_1108365->f_34.f_353[iVar0]->f_5 = -1;
		Global_1108365->f_34.f_353[iVar0]->f_4 = Global_1296859->f_21;
		*Global_1108365->f_34.f_546[iVar0] = { func_453(iParam0) };
		if (bParam4)
		{
			(*Global_1288736)[network_player_id_to_int()]->f_66 = 1;
		}
	}
	if (Global_1108365->f_34[iVar0]->f_6)
	{
		func_454(iVar0);
	}
}

void func_218(bool bParam0)
{
	if (bParam0)
	{
		func_455(1);
	}
	func_455(0);
	set_bit(&(Global_1957959->f_1), 0);
}

void func_219(int iParam0)
{
	if (!get_event_data(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 58:
			func_456(iParam0);
			break;
		case 3:
			func_457(iParam0);
			break;
	}
}

void func_220(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 12))
	{
		return;
	}
	iVar12 = Var0.f_5;
	if (Var0.f_4 == -1)
	{
		return;
	}
	if ((iVar12 == -116590068 && func_458(&(Local_2193.f_1363))) && func_459(&(Local_2193.f_1363), &Var0))
	{
		func_460(&(Local_2193.f_1363));
		Local_2193.f_1283++;
		Local_2193.f_1284 = (Local_2193.f_1284 + Var0.f_8);
		Local_2193.f_1286 = (Local_2193.f_1286 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_2193.f_1, Local_2193.f_3, &iVar13))
			{
				func_461(func_47(-1901704681, iVar13), Var0.f_8);
			}
		}
	}
	if ((iVar12 == -2069558689 && func_458(&(Local_2193.f_1367))) && func_459(&(Local_2193.f_1367), &Var0))
	{
		func_460(&(Local_2193.f_1367));
		Local_2193.f_1283++;
		Local_2193.f_1284 = (Local_2193.f_1284 + Var0.f_8);
		Local_2193.f_1286 = (Local_2193.f_1286 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_2193.f_1, Local_2193.f_3, &iVar14))
			{
				func_461(func_47(-1901704681, iVar14), Var0.f_8);
			}
		}
	}
	if ((iVar12 == 1172622856 && func_458(&(Local_2193.f_1371))) && func_459(&(Local_2193.f_1371), &Var0))
	{
		func_460(&(Local_2193.f_1371));
		Local_2193.f_1283++;
		Local_2193.f_1284 = (Local_2193.f_1284 + Var0.f_8);
		Local_2193.f_1286 = (Local_2193.f_1286 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_2193.f_1, Local_2193.f_3, &iVar15))
			{
				func_461(func_47(-1901704681, iVar15), Var0.f_8);
			}
		}
	}
	if ((((((((iVar12 == -309190573 || iVar12 == 1440367028) || iVar12 == -697003817) || iVar12 == -252981337) || iVar12 == -926779719) || iVar12 == 1387750829) || iVar12 == 1519614621) || iVar12 == -1207291076) || ((iVar12 == -245502319 && func_458(&(Local_2193.f_1375))) && func_459(&(Local_2193.f_1375), &Var0)))
	{
		func_460(&(Local_2193.f_1375));
		Local_2193.f_1283++;
	}
	if (((iVar12 != 0 && iVar12 == Local_2193.f_1383) && func_458(&(Local_2193.f_1379))) && func_459(&(Local_2193.f_1379), &Var0))
	{
		func_460(&(Local_2193.f_1379));
		Local_2193.f_1283++;
		Local_2193.f_1285 = (Local_2193.f_1285 + Var0.f_9);
		if (Var0.f_9 > 0)
		{
			if (func_46(Local_2193.f_1, Local_2193.f_3, &iVar16))
			{
				func_461(func_47(1532301684, iVar16), Var0.f_9);
			}
		}
	}
}

void func_221()
{
	func_462();
	func_463();
	func_222(iVar1948);
}

void func_222(int iParam0)
{
	Local_2193.f_10 = iParam0;
}

void func_223()
{
	if (!func_425(1, 30))
	{
		return;
	}
	func_52();
}

bool func_224(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	iVar0 = 1;
	_text_database_request(func_350());
	if (!_text_database_has_loaded(func_350()))
	{
		iVar0 = 0;
	}
	if (!is_string_null_or_empty(&uParam0))
	{
		_text_database_request(&uParam0);
		if (!_text_database_has_loaded(&uParam0))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

char[] func_225(bool bParam0)
{
	if (!bParam0)
	{
		return "script@mp@endflow@endcelebration@FME@Female";
	}
	return "script@mp@endflow@endcelebration@FME@Male";
}

char* func_226()
{
	return "LIVE";
}

bool func_227(var uParam0, char* sParam1, char* sParam2)
{
	if (_does_anim_scene_exist(*uParam0))
	{
		if (_is_anim_scene_loaded(*uParam0, true, false))
		{
			return true;
		}
	}
	else
	{
		*uParam0 = _create_anim_scene(sParam1, 0, sParam2, false, true);
		return false;
	}
	if (!_is_anim_scene_loading(*uParam0, true) && !_is_anim_scene_loaded(*uParam0, true, false))
	{
		load_anim_scene(*uParam0);
	}
	return false;
}

bool func_228(var uParam0)
{
	if (!_uiflowblock_is_loaded(*uParam0))
	{
		return false;
	}
	_uiflowblock_enter(*uParam0, uParam0->f_1);
	if (!_uistatemachine_exists(*uParam0))
	{
		_uistatemachine_create(*uParam0, *uParam0);
	}
	return true;
}

bool func_229()
{
	iVar1 = 1;
	sVar10 = "NASPRAU";
	sVar11 = "LEGANM";
	if (_does_text_database_exist(sVar10))
	{
		_text_database_request(sVar10);
		if (!_text_database_has_loaded(sVar10))
		{
			iVar1 = 0;
		}
	}
	if (_does_text_database_exist(sVar11))
	{
		_text_database_request(sVar11);
		if (!_text_database_has_loaded(sVar11))
		{
			iVar1 = 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_464(iVar0, &Local_1444, &Var2))
		{
			if (Var2.f_4 == 1702035859)
			{
				request_model(Var2.f_5, false);
				if (!has_model_loaded(Var2.f_5))
				{
					iVar1 = 0;
				}
			}
			else if (Var2.f_4 == 81235508)
			{
				_request_propset_2(Var2.f_6);
				if (!_has_propset_loaded_2(Var2.f_6))
				{
					iVar1 = 0;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		sVar9 = func_465(iVar0);
		if (!is_string_null_or_empty(sVar9))
		{
			request_waypoint_recording(sVar9);
			if (!get_is_waypoint_recording_loaded(sVar9))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	if (!func_467(func_466(Local_1444.f_50), &(Local_1444.f_499), &(Local_16.f_558), 16384, 0))
	{
		iVar1 = 0;
	}
	if (func_468(&Local_1444, &vVar12))
	{
		func_469(&(Local_1444.f_495), _get_object_offset_from_coords(vVar12, 0f, 0f, 0f, 0f), 30f);
	}
	func_152(&Local_1444);
	return iVar1;
}

void func_230(int iParam0, int iParam1)
{
	func_149(&(Local_2000[iParam1]->f_1), iParam0);
}

bool func_231()
{
	iVar0 = 1;
	if (!func_470())
	{
		iVar0 = 0;
	}
	if (network_does_network_id_exist(Local_16.f_11) && !does_entity_exist(func_471()))
	{
		func_472();
	}
	if (!does_entity_exist(func_471()))
	{
		iVar0 = 0;
	}
	if (!func_473())
	{
		iVar0 = 0;
	}
	if (!func_474())
	{
		iVar0 = 0;
	}
	if (Local_1444.f_50 == -920598405)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (network_does_network_id_exist(&(Local_16.f_553[iVar1])) && !does_entity_exist(&(Local_1444.f_490[iVar1])))
			{
				Local_1444.f_490[iVar1] = net_to_veh(&(Local_16.f_553[iVar1]));
				iVar0 = 0;
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_232()
{
}

void func_233()
{
	func_223();
	func_475();
	func_476();
	func_477();
	func_478();
	func_479();
	func_480();
	func_272();
	func_481();
	if (Local_2193.f_9 != -785841056)
	{
		func_482();
		func_483();
	}
	else
	{
		func_484();
	}
	func_485();
}

void func_234()
{
	_0x236905c700fdb54d();
	if (!func_159(Local_2193.f_1333))
	{
		bVar0 = true;
		if (Local_2193.f_9 == -785841056 && &Local_2000[Local_2193.f_1333] == 1)
		{
			bVar0 = false;
		}
		func_129(1, bVar0);
		return;
	}
	if (func_162(&(Local_1950.f_1)))
	{
		iVar1 = func_190(&(Local_1950.f_1));
		iVar2 = (Local_2193.f_1269 - iVar1);
		iVar3 = (iVar2 / 1000);
		if (iVar3 < 21)
		{
			func_247();
		}
		if (func_486())
		{
			func_487(&(Local_2193.f_1006), iVar2, 0, -1, 0);
			if (iVar3 < 4)
			{
				if (!func_65(16))
				{
					func_173(16);
					animpostfx_play(func_56());
					func_488(&(Local_2193.f_1261));
				}
				if (iVar3 < 1)
				{
					iVar3 = 1;
				}
			}
		}
	}
	if (!func_294(Local_2193.f_1289))
	{
		func_489(0, "", -1, 0);
	}
	if (((func_65(16) || !func_490(255)) || !does_entity_exist(Global_34)) || is_entity_dead(Global_34))
	{
		func_489(0, "", -1, 0);
	}
	else if (((func_68(Local_2193.f_1397) || (func_68(Local_2193.f_1400) && func_491(Global_35, Local_2193.f_1397) <= Local_2193.f_1294)) || (!func_68(Local_2193.f_1400) && func_491(Global_35, Local_2193.f_1400) <= Local_2193.f_1294)) || !func_492(Local_2193.f_1))
	{
		if (Local_2193.f_1267 != 4)
		{
			if (Local_2193.f_9 == -785841056)
			{
				sVar4 = func_493();
				if (is_string_null_or_empty(sVar4))
				{
					func_489(4, _create_var_string(10, "FME_OBJECTIVE_WAIT_POSSE_VERSUS", &(Local_2193.f_1339)), -1, 0);
				}
				else
				{
					func_489(4, sVar4, -1, 0);
				}
			}
			else
			{
				Var5 = { Local_2193.f_1347 };
				if (is_string_null_or_empty(&Var5))
				{
					Var5 = { Local_2193.f_1339 };
				}
				if (func_65(1048576))
				{
					func_489(4, _create_var_string(2, "FME_OBJECTIVE_WAIT_ST"), -1, 0);
				}
				else if (Local_2193.f_1 == 1)
				{
					func_489(4, _create_var_string(10, "FME_OBJECTIVE_WAIT_CHALLENGES", &Var5), -1, 0);
				}
				else
				{
					func_489(4, _create_var_string(10, "FME_OBJECTIVE_WAIT", &Var5), -1, 0);
				}
			}
		}
	}
	else if ((func_137(131072) && !func_137(1048576)) && func_328(Local_2193.f_1297))
	{
		if (Local_2193.f_1267 != 2)
		{
			func_489(2, _create_var_string(10, "FME_OBJECTIVE_FAST_TRAVEL_POSSE_VERSUS", &(Local_2193.f_1339)), 7500, 0);
			func_43(1048576);
		}
	}
	else if (Local_2193.f_1267 != 3)
	{
		if (!is_string_null_or_empty(func_494()))
		{
			func_489(3, func_494(), -1, 0);
		}
		else if (Local_2193.f_9 == -785841056)
		{
			func_489(3, "FME_OBJECTIVE_ENTER_AREA_POSSE_VERSUS", -1, 0);
		}
		else
		{
			func_489(3, "FME_OBJECTIVE_ENTER_AREA", -1, 0);
		}
	}
	if (!does_blip_exist(Local_2193.f_1326))
	{
		if (!func_68(Local_2193.f_1397) && func_492(Local_2193.f_1))
		{
			func_495(&(Local_2193.f_1326));
		}
	}
	if (!func_486())
	{
		return;
	}
	if (!func_137(2))
	{
		if (((((func_48(func_496(415667248)) >= func_497() || Local_2193.f_9 != -1125105727) || Local_2193.f_9 != 1232677007) || func_498()) || !_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id()))) || _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) < 2)
		{
			func_43(2);
		}
		else if (func_499(Local_2193.f_1290))
		{
			Var13 = { Local_2193.f_1347 };
			if (is_string_null_or_empty(&Var13))
			{
				Var13 = { Local_2193.f_1339 };
			}
			Local_2193.f_1290 = func_500(_create_var_string(10, "FME_HELP_SCORE", &Var13));
			func_461(func_496(415667248), 1);
			func_43(2);
		}
	}
	else if (!func_137(4))
	{
		if (Local_2193.f_1278 >= func_497())
		{
			func_43(4);
		}
		else if (func_499(Local_2193.f_1290))
		{
			Var21 = { func_501(Local_2193.f_1, Local_2193.f_3) };
			if (!is_string_null_or_empty(&Var21))
			{
				Local_2193.f_1290 = func_500(&Var21);
			}
			func_43(4);
		}
	}
	else if (!func_137(8))
	{
		if (Local_2193.f_1278 >= func_497())
		{
			func_43(8);
		}
		else if (func_499(Local_2193.f_1290))
		{
			Var29 = { func_502(Local_2193.f_1, Local_2193.f_3) };
			if (!is_string_null_or_empty(&Var29))
			{
				Local_2193.f_1290 = func_500(&Var29);
			}
			func_43(8);
		}
	}
	else if (!func_137(16))
	{
		if (func_137(8388608) && func_499(Local_2193.f_1290))
		{
			StringCopy(&cVar37, func_503(), 64);
			if (!is_string_null_or_empty(&cVar37))
			{
				Local_2193.f_1290 = func_500(&cVar37);
			}
			func_43(16);
		}
	}
}

int func_235()
{
	if (Global_1071686->f_28662.f_65.f_42 >= 9)
	{
		return 1;
	}
	return 0;
}

int func_236()
{
	iVar0 = get_game_timer();
	iVar1 = (iVar0 - Global_1071686->f_28662.f_108);
	if (iVar1 < Global_1901947->f_1.f_39)
	{
		return 0;
	}
	return 1;
}

void func_237()
{
	func_504(1, 0, 0);
	func_63(0);
	func_43(2097152);
	func_505(&vVar0, &uVar3, &iVar4);
	if (!func_68(vVar0) && !iVar4 == -1)
	{
		if ((!func_137(134217728) && !func_506(Local_2193.f_1, Local_2193.f_3)) && func_507(Local_2193.f_1, Local_2193.f_3))
		{
			func_508(1, 0);
		}
		func_509(vVar0, uVar3, 1);
	}
	else
	{
		func_510(1, 1);
	}
}

bool func_238(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

void func_239(int iParam0)
{
	func_511(&(Global_1572887->f_106.f_15), iParam0);
}

void func_240(bool bParam0)
{
	if (Global_1071686->f_28773.f_1 != get_id_of_this_thread() && !bParam0)
	{
		return;
	}
	if (Global_1071686->f_28773.f_1 == 0)
	{
		return;
	}
	func_511(&(Global_1071686->f_28773.f_2), 2);
}

void func_241(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1071686->f_28662.f_65.f_28 = 1;
		Global_1071686->f_28662.f_65.f_29 = iParam3;
		Global_1071686->f_28662.f_65.f_26 = iParam6;
		Global_1071686->f_28662.f_65.f_27 = iParam8;
		if (bParam7)
		{
			set_bit(&(Global_1071686->f_28662.f_65.f_8), 18);
		}
	}
	else
	{
		Global_1071686->f_28662.f_65.f_30 = 1;
		Global_1071686->f_28662.f_65.f_33 = !bParam1;
		Global_1071686->f_28662.f_65.f_31 = iParam2;
		Global_1071686->f_28662.f_65.f_32 = iParam4;
		Global_1071686->f_28662.f_65.f_35 = iParam5;
		if (is_bit_set(Global_1071686->f_28662.f_65.f_8, 18))
		{
			clear_bit(&(Global_1071686->f_28662.f_65.f_8), 18);
		}
	}
}

void func_242()
{
	if (Local_2193.f_9 != -785841056 || !func_492(Local_2193.f_1))
	{
		return;
	}
	if ((!func_159(Local_2193.f_1333) || !func_137(131072)) || func_68(Local_2193.f_1397))
	{
		func_512();
		return;
	}
	if ((((!does_entity_exist(Global_34) || is_entity_dead(Global_34)) || _0xb655db7582aec805(Global_34)) || func_513()) || Global_1915715->f_20644)
	{
		func_512();
		return;
	}
	fVar0 = func_491(Global_35, Local_2193.f_1397);
	fVar1 = (Local_2193.f_1295 + 35f);
	if (Local_2193.f_10 > 3)
	{
		if (func_137(262144) || (Local_2193.f_1294 > 0f && fVar0 <= fVar1))
		{
			func_336(131072);
			func_512();
			return;
		}
	}
	if (fVar0 < fVar1)
	{
		func_512();
		return;
	}
	if (!func_328(Local_2193.f_1297) && !_is_ped_carrying(Global_34))
	{
		Local_2193.f_1297 = func_514("FM_FAST_TRAVEL", -719620017, Global_34, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		if (!func_137(524288))
		{
			func_43(524288);
		}
	}
	if (func_328(Local_2193.f_1297))
	{
		if (_is_ped_carrying(Global_34))
		{
			if (func_515(Local_2193.f_1297, 0))
			{
				func_333(&(Local_2193.f_1297), 0, 1);
			}
		}
		else
		{
			if (!func_515(Local_2193.f_1297, 0))
			{
				func_332(Local_2193.f_1297, 1, 1, 1);
			}
			if (func_516(Local_2193.f_1297, 0))
			{
				func_510(1, 1);
				func_43(262144);
			}
		}
		if (Local_2193.f_1267 == 2 && func_517(Local_2193.f_1289))
		{
			func_518(Local_2193.f_1297, 0, 1);
		}
		else
		{
			func_518(Local_2193.f_1297, 1, 1);
		}
	}
}

void func_243()
{
	if (!func_159(Local_2193.f_1333))
	{
		return;
	}
	if (Local_2193.f_9 != -1125105727 && Local_2193.f_9 != 1232677007)
	{
		return;
	}
	if (func_68(Local_2193.f_1400))
	{
		return;
	}
	if (!func_519() > 0f)
	{
		return;
	}
	if (!does_blip_exist(Local_2193.f_1328))
	{
		Local_2193.f_1328 = _blip_add_for_radius(-188007767, Local_2193.f_1400, func_519());
	}
	else
	{
		set_blip_coords(Local_2193.f_1328, Local_2193.f_1400);
	}
	if (func_162(&(Local_2193.f_1308)) && func_190(&(Local_2193.f_1308)) > 1500)
	{
		if ((((!_uiflowblock_is_loaded(Local_2193.f_1261) && !_uistatemachine_exists(190275865)) && !_databinding_is_data_id_valid(Local_2193.f_1261.f_2)) && !_databinding_is_data_id_valid(Local_2193.f_1261.f_1)) && !animpostfx_is_running(func_520()))
		{
			func_302(&(Local_2193.f_1308));
		}
	}
	if ((((!does_entity_exist(Global_34) || is_entity_dead(Global_34)) || func_62(255)) || func_294(Local_2193.f_1288)) || func_162(&(Local_2193.f_1308)))
	{
		func_338(4);
		func_521();
		func_255(1);
		return;
	}
	if (func_522())
	{
		func_523(4);
		if (!func_162(&(Local_2193.f_1305)))
		{
			play_sound_frontend("OOB_start", func_120(), true, 0);
			func_489(5, "FME_OBJECTIVE_ABANDON_LOBBY_WARNING", -1, 0);
			func_205(&(Local_2193.f_1305));
		}
		else
		{
			iVar0 = func_191();
			cVar1 = ceil((to_float((iVar0 - func_190(&(Local_2193.f_1305)))) * 0.001f));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_2193.f_1400 };
			vVar2.f_2 = (vVar2.z + 10f);
			func_524(&(Local_2193.f_1261), cVar1, vVar2, func_519(), 1, 0, 0, 1, 0);
			if (func_190(&(Local_2193.f_1305)) > iVar0)
			{
				func_525();
				func_526(Global_34, 0, 0);
				if (is_entity_dead(Global_34))
				{
					play_sound_frontend("OOB_death", func_120(), true, 0);
					func_338(4);
					func_521();
					func_255(1);
				}
			}
		}
	}
	else
	{
		if (Local_2193.f_1267 == 5)
		{
			func_205(&(Local_2193.f_1308));
			play_sound_frontend("OOB_return", func_120(), true, 0);
			if (func_294(Local_2193.f_1290))
			{
				_0x2f901291ef177b02(Local_2193.f_1290, 0);
			}
			func_489(0, "", -1, 0);
		}
		if (does_blip_exist(Local_2193.f_1327))
		{
			remove_blip(&(Local_2193.f_1327));
		}
		func_338(4);
		func_521();
		if (func_65(16))
		{
			func_255(0);
		}
		else
		{
			func_255(1);
		}
	}
}

void func_244()
{
	if (func_180(65536, Local_2193.f_1333))
	{
		return;
	}
	iVar0 = func_527();
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == -1415022764)
	{
		return;
	}
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (!_0xf29a186ed428b552(Global_34, iVar0))
	{
		return;
	}
	_0x6929e22158e52265(Global_34, 0, &Var1);
	_0x6929e22158e52265(Global_34, 1, &Var5);
	if (func_528(Var1, Var5))
	{
		func_230(65536, Local_2193.f_1333);
	}
}

void func_245()
{
	func_473();
}

void func_246()
{
	if (func_68(Local_2193.f_1400))
	{
		return;
	}
	if (Local_2193.f_1267 == 5)
	{
		if (func_294(Local_2193.f_1290))
		{
			_0x2f901291ef177b02(Local_2193.f_1290, 0);
		}
		func_489(0, "", -1, 0);
	}
	func_338(4);
	func_521();
	func_255(0);
}

void func_247()
{
	if (Local_2193.f_9 == -785841056)
	{
		return;
	}
	if (func_137(8192))
	{
		return;
	}
	if (!func_137(4194304))
	{
		_0xe546bda1b3e288ee(512);
		func_43(4194304);
	}
}

void func_248(int iParam0, int iParam1)
{
	func_149(&(Global_1196898->f_78[iParam0]->f_6), iParam1);
}

bool func_249()
{
	return true;
}

void func_250()
{
	Local_2193.f_1280 = func_48(func_529(-190907223));
}

void func_251()
{
	Local_2193.f_1281 = func_48(func_529(-1048906573));
}

int func_252()
{
	if (Local_2193.f_1388 == -1125105727 && func_181(64))
	{
		func_41(-1477057661);
		func_52();
		func_253();
		return 1;
	}
	return 0;
}

void func_253()
{
	switch (Local_2193.f_1388)
	{
		case -1125105727:
		case -669315698:
			func_530(0);
			break;
		case 142723591:
		case 1229355466:
			func_531();
			break;
		case -1893775542:
		case -1869754940:
			func_532();
			break;
		case -1477057661:
		case -1323241207:
			func_530(1);
			break;
		case -1130541276:
		case 1839318411:
			func_533(1);
			break;
	}
}

void func_254(var uParam0, bool bParam1)
{
	if (uParam0->f_2 > 0)
	{
		_0xdd1232b332cbb9e7(12, 1, 0);
		if (bParam1)
		{
			func_291(uParam0);
			func_534();
		}
		func_535(uParam0);
		_databinding_remove_data_entry(uParam0->f_6);
		_databinding_remove_data_entry(uParam0->f_5);
		_0xf1e6979c0b779985(&(uParam0->f_4));
		uParam0->f_9 = 0;
		func_536(0);
		func_537(0);
		_0xdd1232b332cbb9e7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		_copy_memory(uParam0, &Var0, 15);
	}
}

void func_255(bool bParam0)
{
	func_538(&(Local_2193.f_1261), 1, bParam0);
}

void func_256()
{
	if (does_blip_exist(Local_2193.f_1326))
	{
		remove_blip(&(Local_2193.f_1326));
	}
	if (does_blip_exist(Local_2193.f_1327))
	{
		remove_blip(&(Local_2193.f_1327));
	}
	if (does_blip_exist(Local_2193.f_1328))
	{
		remove_blip(&(Local_2193.f_1328));
	}
}

void func_257()
{
	compendium_animal_set_discovered(_0x1cfa0219d8e1cf25(1979337996, func_471()));
	func_539();
}

void func_258()
{
	iVar0 = Local_2193.f_1270;
	if (func_162(&(Local_1950.f_4)))
	{
		iVar0 = (iVar0 - func_190(&(Local_1950.f_4)));
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 < 15000)
	{
		set_ped_reset_flag(Global_34, 134, true);
	}
	Local_2193.f_1268 = iVar0;
}

void func_259()
{
	func_285();
	if (!func_159(Local_2193.f_1333))
	{
		bVar0 = true;
		if (Local_2193.f_9 == -785841056 && &Local_2000[Local_2193.f_1333] == 1)
		{
			bVar0 = false;
		}
		func_129(1, bVar0);
		return;
	}
	if (!func_65(2))
	{
		if (func_540())
		{
			func_280(func_278(), func_279(), 0, 0, 30000);
		}
		Var1 = { func_541() };
		if (is_string_null_or_empty(&Var1))
		{
			StringCopy(&Var1, func_542(Local_2193.f_1339), 64);
		}
		if (is_string_null_or_empty(func_543()))
		{
			Var10 = { func_544(Local_2193.f_1, Local_2193.f_3) };
		}
		else
		{
			bVar9 = true;
		}
		if (func_181(64))
		{
			iVar27 = _0x901e0dc25080c8b9(player_id());
			if (_0x0f99f6436528a089(iVar27) && _0x149a2751ab66ac02(iVar27) > 1)
			{
				StringCopy(&cVar19, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 64);
				func_173(8);
			}
		}
		else if (!is_string_null_or_empty(func_545()))
		{
			bVar18 = true;
		}
		if (bVar9 || bVar18)
		{
			if (bVar9 && bVar18)
			{
				Local_2193.f_1288 = func_548(&Var1, func_543(), func_545(), func_546(), func_547());
			}
			else if (bVar9)
			{
				if (is_string_null_or_empty(&cVar19))
				{
					Local_2193.f_1288 = func_549(&Var1, func_543(), func_546(), func_547());
				}
				else
				{
					Local_2193.f_1288 = func_548(&Var1, func_543(), &cVar19, func_546(), func_547());
				}
			}
			else if (bVar18)
			{
				Local_2193.f_1288 = func_548(&Var1, &Var10, func_545(), func_546(), func_547());
			}
		}
		else if (is_string_null_or_empty(&cVar19))
		{
			Local_2193.f_1288 = func_549(&Var1, &Var10, func_546(), func_547());
		}
		else
		{
			Local_2193.f_1288 = func_548(&Var1, &Var10, &cVar19, func_546(), func_547());
		}
		func_173(2);
	}
	else if (!func_65(4))
	{
		if (func_540())
		{
			func_280(func_278(), func_279(), 0, 0, 30000);
		}
		if (!func_294(Local_2193.f_1288))
		{
			func_173(4);
		}
	}
	else
	{
		func_280(func_278(), func_279(), 0, 0, 30000);
		if (((Local_2193.f_1006.f_2 != 2 || Local_2193.f_1006.f_1 != 2) || !_uistatemachine_exists(1546991729)) || !_databinding_is_data_id_valid(Local_2193.f_13.f_11.f_2))
		{
			return;
		}
		if (!func_65(8) && func_181(64))
		{
			if (!func_294(Local_2193.f_1288) && func_499(Local_2193.f_1290))
			{
				iVar28 = _0x901e0dc25080c8b9(player_id());
				if (_0x0f99f6436528a089(iVar28) && _0x149a2751ab66ac02(iVar28) > 1)
				{
					Var29 = { func_541() };
					if (is_string_null_or_empty(&Var29))
					{
						Var29 = { Local_2193.f_1339 };
					}
					Local_2193.f_1288 = func_549(&Var29, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 0, 0);
				}
				func_173(8);
			}
		}
		else if (!func_137(32))
		{
			bVar37 = true;
			bVar38 = false;
			func_550(Local_2193.f_1326, &bVar37, &bVar38);
			if (Local_2193.f_1278 >= func_497() && !bVar38)
			{
				func_43(32);
			}
			else if (!func_294(Local_2193.f_1288) && func_499(Local_2193.f_1290))
			{
				if (bVar37)
				{
					if (!is_string_null_or_empty(func_550(Local_2193.f_1326, &bVar37, &bVar38)))
					{
						Local_2193.f_1290 = func_500(func_550(Local_2193.f_1326, &bVar37, &bVar38));
					}
					func_43(32);
				}
			}
		}
		else if (!func_137(128))
		{
			if ((func_48(func_496(-470974965)) >= 5 || !func_296(Local_2193.f_1385)) || !func_551())
			{
				func_43(64);
				func_43(128);
			}
			else if (!func_137(64) && !func_552(Local_2193.f_1))
			{
				func_43(64);
			}
			else if (!func_294(Local_2193.f_1288) && func_499(Local_2193.f_1290))
			{
				if (!func_137(64))
				{
					Local_2193.f_1290 = func_500("FME_HELP_SCOREBOARD_1");
					func_43(64);
				}
				else
				{
					Local_2193.f_1290 = func_500("FME_HELP_SCOREBOARD_2");
					func_461(func_496(-470974965), 1);
					func_43(128);
				}
			}
		}
		else if (!func_137(65536))
		{
			if (func_48(func_496(1769987584)) >= func_497())
			{
				func_43(65536);
			}
			else if (!func_552(Local_2193.f_1))
			{
				func_43(65536);
			}
			else if ((((func_286() && func_551()) && !func_294(Local_2193.f_1288)) && func_499(Local_2193.f_1290)) && Local_2000[Local_2193.f_1333]->f_2 > 0f)
			{
				bVar39 = false;
				if (func_279() & 1024 == 1024)
				{
					bVar39 = true;
				}
				if (func_553(bVar39, 1, &iVar40))
				{
					if (!func_162(&(Local_2193.f_1302)))
					{
						func_205(&(Local_2193.f_1302));
					}
					else if (func_190(&(Local_2193.f_1302)) >= 2000)
					{
						Local_2193.f_1290 = func_500(_create_var_string(10, "FME_HELP_SCORE_DRAW", func_555(get_player_name(iVar40), func_554(iVar40, 1, -1, 0))));
						func_461(func_496(1769987584), 1);
						func_43(65536);
					}
				}
				else if (func_162(&(Local_2193.f_1302)))
				{
					func_302(&(Local_2193.f_1302));
				}
			}
		}
	}
}

void func_260()
{
	if (Local_2193.f_9 == -785841056)
	{
		return;
	}
	if (func_159(Local_2193.f_1333))
	{
		func_523(16);
	}
	else
	{
		func_338(16);
	}
}

void func_261()
{
	if (func_159(Local_2193.f_1333))
	{
		func_556(250);
	}
}

void func_262()
{
	if (!func_159(Local_2193.f_1333))
	{
		return;
	}
	if ((Local_2193.f_9 != -1125105727 && Local_2193.f_9 != 1232677007) && Local_2193.f_9 != 1038512660)
	{
		return;
	}
	if (func_557() == 4 || func_557() == 10)
	{
		return;
	}
	if (func_68(Local_2193.f_1397))
	{
		return;
	}
	if (!func_558())
	{
		return;
	}
	if (!does_blip_exist(Local_2193.f_1328))
	{
		Local_2193.f_1328 = func_559();
	}
	else
	{
		set_blip_coords(Local_2193.f_1328, Local_2193.f_1397);
	}
	if (func_162(&(Local_2193.f_1308)) && func_190(&(Local_2193.f_1308)) > 1500)
	{
		if ((((!_uiflowblock_is_loaded(Local_2193.f_1261) && !_uistatemachine_exists(190275865)) && !_databinding_is_data_id_valid(Local_2193.f_1261.f_2)) && !_databinding_is_data_id_valid(Local_2193.f_1261.f_1)) && !animpostfx_is_running(func_520()))
		{
			func_302(&(Local_2193.f_1308));
		}
	}
	if ((((!does_entity_exist(Global_34) || is_entity_dead(Global_34)) || func_62(255)) || func_294(Local_2193.f_1288)) || func_162(&(Local_2193.f_1308)))
	{
		func_338(4);
		func_521();
		func_255(1);
		return;
	}
	if (func_560())
	{
		func_523(4);
		if (!does_blip_exist(Local_2193.f_1327))
		{
			Local_2193.f_1327 = _blip_add_for_coord(408396114, Local_2193.f_1397);
			set_blip_name_from_text_file(Local_2193.f_1327, "FME_OBJECTIVE_ABANDON_BLIP_NAME");
			_blip_set_modifier(Local_2193.f_1327, 231194138);
		}
		else
		{
			set_blip_coords(Local_2193.f_1327, Local_2193.f_1397);
		}
		if (!func_162(&(Local_2193.f_1305)))
		{
			play_sound_frontend("OOB_start", func_120(), true, 0);
			func_489(5, "FME_OBJECTIVE_ABANDON_WARNING", -1, 0);
			func_205(&(Local_2193.f_1305));
		}
		else
		{
			iVar0 = func_561();
			cVar1 = ceil((to_float((iVar0 - func_190(&(Local_2193.f_1305)))) * 0.001f));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_2193.f_1397 };
			vVar2.f_2 = (vVar2.z + 10f);
			func_524(&(Local_2193.f_1261), cVar1, vVar2, Local_2193.f_1295, 1, 0, 0, 1, 0);
			if (func_190(&(Local_2193.f_1305)) > iVar0)
			{
				func_525();
				func_526(Global_34, 0, 0);
				if (is_entity_dead(Global_34))
				{
					play_sound_frontend("OOB_death", func_120(), true, 0);
					func_338(4);
					func_521();
					func_255(1);
				}
			}
		}
	}
	else
	{
		if (Local_2193.f_1267 == 5)
		{
			func_205(&(Local_2193.f_1308));
			play_sound_frontend("OOB_return", func_120(), true, 0);
			if (func_294(Local_2193.f_1290))
			{
				_0x2f901291ef177b02(Local_2193.f_1290, 0);
			}
			func_489(0, "", -1, 0);
		}
		if (does_blip_exist(Local_2193.f_1327))
		{
			remove_blip(&(Local_2193.f_1327));
		}
		func_338(4);
		func_521();
		func_255(1);
	}
}

bool func_263()
{
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 <= (Local_2193.f_1277 - 1))
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = -1f;
		fVar4 = -1f;
		iVar7 = Local_2193.f_1390;
		iVar5 = int_to_participantindex(iVar7);
		iVar6 = 255;
		if (network_is_participant_active(iVar5))
		{
			fVar0 = Local_2000[iVar7]->f_2;
			fVar1 = to_float(Local_2000[iVar7]->f_3);
			fVar2 = to_float(Local_2000[iVar7]->f_4);
			iVar6 = network_get_player_index(iVar5);
			fVar3 = to_float(Local_2000[iVar7]->f_5);
			fVar4 = to_float(get_unique_int_for_player(iVar6));
		}
		func_562(&(Local_2193.f_13), fVar0, iVar6, Local_2193.f_972[iVar7], !func_159(iVar7), fVar1, fVar2, 0, fVar3, fVar4);
		Local_2193.f_1390++;
		if (Local_2193.f_1390 >= 32)
		{
			Local_2193.f_1390 = 0;
		}
		iVar8++;
	}
	iVar9 = func_48(func_529(-1048906573));
	iVar9 = (iVar9 - Local_2193.f_1281);
	if (iVar9 != Local_2000[Local_2193.f_1333]->f_4)
	{
		Local_2000[Local_2193.f_1333]->f_4 = iVar9;
	}
	func_563(&(Local_2193.f_13));
	return true;
}

void func_264()
{
	iVar0 = func_48(func_529(-190907223));
	iVar0 = (iVar0 - Local_2193.f_1280);
	if (iVar0 != Local_2000[Local_2193.f_1333]->f_3)
	{
		Local_2000[Local_2193.f_1333]->f_3 = iVar0;
	}
	iVar1 = func_48(func_529(-1048906573));
	iVar1 = (iVar1 - Local_2193.f_1281);
	if (iVar1 != Local_2000[Local_2193.f_1333]->f_4)
	{
		Local_2000[Local_2193.f_1333]->f_4 = iVar1;
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		fVar5 = -1f;
		fVar6 = -1f;
		iVar9 = Local_2193.f_1390;
		iVar7 = int_to_participantindex(iVar9);
		iVar8 = 255;
		if (network_is_participant_active(iVar7))
		{
			fVar2 = Local_2000[iVar9]->f_2;
			fVar3 = to_float(Local_2000[iVar9]->f_3);
			fVar4 = to_float(Local_2000[iVar9]->f_4);
			iVar8 = network_get_player_index(iVar7);
			fVar5 = to_float(Local_2000[iVar9]->f_5);
			fVar6 = to_float(get_unique_int_for_player(iVar8));
		}
		func_562(&(Local_2193.f_13), fVar2, iVar8, Local_2193.f_972[iVar9], !func_159(iVar9), fVar3, fVar4, 0, fVar5, fVar6);
		Local_2193.f_1390++;
		if (Local_2193.f_1390 >= 32)
		{
			Local_2193.f_1390 = 0;
		}
		iVar10++;
	}
	func_563(&(Local_2193.f_13));
}

void func_265()
{
	if ((Local_2193.f_9 == 1038512660 || Local_2193.f_9 == -785841056) || !func_564())
	{
		return;
	}
	if (Local_1950.f_11 != 255 && network_is_player_active(Local_1950.f_11))
	{
		if (Local_1950.f_11 != Local_2193.f_1005)
		{
			if (Local_2193.f_1005 != 255 && network_is_player_active(Local_2193.f_1005))
			{
				func_565(Local_2193.f_1005);
			}
			if (Local_2193.f_1005 == 255)
			{
			}
			Local_2193.f_1005 = Local_1950.f_11;
			if ((func_159(Local_2193.f_1333) && !func_294(Local_2193.f_1288)) && !func_65(2097152))
			{
				if (Local_2193.f_1005 == player_id())
				{
					iVar1 = 1105014447;
					sVar0 = "FME_GAME_UPDATE_NEW_LEADER_SELF";
				}
				else
				{
					iVar1 = func_554(Local_2193.f_1005, 1, -1, 0);
					sVar0 = _create_var_string(10, "FME_GAME_UPDATE_NEW_LEADER", func_555(get_player_name(Local_2193.f_1005), iVar1));
				}
				Local_2193.f_1292 = func_566(sVar0, iVar1);
			}
		}
		if (Local_2193.f_1005 != 255 && network_is_player_active(Local_2193.f_1005))
		{
			func_567(Local_2193.f_1005, -736967017);
		}
	}
}

void func_266()
{
	if (func_162(&(Local_2193.f_1311)) && func_190(&(Local_2193.f_1311)) > 120000)
	{
		func_302(&(Local_2193.f_1311));
		func_106(0);
		func_54();
	}
}

void func_267()
{
	if (!is_entity_dead(Global_34) && !func_360() == 4)
	{
		func_361(4);
	}
	func_568();
	func_569();
	func_570();
	func_571();
	func_572();
	func_573();
	func_574();
	func_575();
	func_576();
	func_473();
	func_577();
}

bool func_268()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		fVar5 = 0f;
		iVar6 = int_to_participantindex(iVar0);
		iVar7 = 255;
		if (network_is_participant_active(iVar6))
		{
			fVar1 = Local_2000[iVar0]->f_2;
			fVar2 = to_float(Local_2000[iVar0]->f_3);
			fVar3 = to_float(Local_2000[iVar0]->f_4);
			iVar7 = network_get_player_index(iVar6);
			fVar4 = to_float(Local_2000[iVar0]->f_5);
			fVar5 = to_float(get_unique_int_for_player(iVar7));
		}
		func_562(&(Local_2193.f_13), fVar1, iVar7, Local_2193.f_972[iVar0], !func_159(iVar0), fVar2, fVar3, 0, fVar4, fVar5);
		iVar0++;
	}
	func_563(&(Local_2193.f_13));
	return true;
}

void func_269()
{
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = -1f;
		fVar4 = -1f;
		iVar5 = int_to_participantindex(iVar7);
		iVar6 = 255;
		if (network_is_participant_active(iVar5))
		{
			fVar0 = Local_2000[iVar7]->f_2;
			fVar1 = to_float(Local_2000[iVar7]->f_3);
			fVar2 = to_float(Local_2000[iVar7]->f_4);
			iVar6 = network_get_player_index(iVar5);
			fVar3 = to_float(Local_2000[iVar7]->f_5);
			fVar4 = fVar1;
		}
		func_562(&(Local_2193.f_13), fVar0, iVar6, Local_2193.f_972[iVar7], !func_159(iVar7), fVar1, fVar2, 0, fVar3, fVar4);
		iVar7++;
	}
	func_563(&(Local_2193.f_13));
}

void func_270()
{
	if (Local_2193.f_9 == -785841056)
	{
		return;
	}
	_0x1c38c3577901af1f();
	func_578();
}

void func_271()
{
	if (!func_159(Local_2193.f_1333))
	{
		func_129(1, 1);
		return;
	}
	func_285();
	func_280(func_278(), func_279(), Local_2193.f_11, Local_2193.f_12, 30000);
}

void func_272()
{
	if (!func_579(2, -1))
	{
		return;
	}
	if ((func_360() != 4 && func_360() != 10) && func_360() != 0)
	{
		return;
	}
	func_580();
}

bool func_273()
{
	return func_581(256);
}

void func_274()
{
	func_582(128);
}

int func_275(int iParam0)
{
	if (iParam0 == 255)
	{
		return 0;
	}
	else if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	StringCopy(&(Local_2193.f_1407), func_583(iParam0), 64);
	if (iParam0 == player_id())
	{
		Local_2193.f_1415 = 109029619;
	}
	else
	{
		Local_2193.f_1415 = func_554(iParam0, 1, -1, 0);
	}
	return 1;
}

void func_276(var uParam0)
{
	uParam0->f_948 = 1;
}

void func_277(var uParam0)
{
	uParam0->f_949 = 1;
}

var func_278()
{
	return func_584();
}

int func_279()
{
	return 16809985;
}

void func_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Local_2193.f_11 = iParam2;
	Local_2193.f_12 = iParam3;
	iVar0 = 551037070;
	iVar1 = 109029619;
	iVar2 = 859817522;
	iVar3 = 109029619;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	if (Local_2193.f_1388 == -1125105727)
	{
		iVar0 = 109029619;
		iVar1 = -1886482671;
		iVar2 = 859817522;
		iVar3 = -1886482671;
		if (!is_bit_set(Local_2193.f_13.f_11.f_159, 16))
		{
			set_bit(&(Local_2193.f_13.f_11.f_159), 16);
		}
	}
	else if (func_585())
	{
		iVar2 = 551037070;
		iVar3 = -1886482671;
		iVar0 = 1105014447;
		iVar1 = -1886482671;
		if (!is_bit_set(Local_2193.f_13.f_11.f_159, 16))
		{
			set_bit(&(Local_2193.f_13.f_11.f_159), 16);
		}
	}
	else if (func_586())
	{
		iVar2 = 551037070;
	}
	if (Local_2193.f_1 == 8)
	{
		iVar0 = 109029619;
		iVar1 = -1886482671;
		iVar2 = 859817522;
		iVar3 = -1886482671;
		if (!is_bit_set(Local_2193.f_13.f_11.f_159, 16))
		{
			set_bit(&(Local_2193.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_2193.f_1 == 7)
	{
		iVar0 = -761415550;
		iVar2 = -761415550;
		if (!is_bit_set(Local_2193.f_13.f_11.f_159, 16))
		{
			set_bit(&(Local_2193.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_2193.f_1 == 14)
	{
		iVar4 = -1364375908;
		iVar5 = -1777836132;
		iVar6 = -1364375908;
		iVar7 = -1777836132;
		if (!is_bit_set(Local_2193.f_13.f_11.f_159, 16))
		{
			set_bit(&(Local_2193.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_2193.f_1 == 13)
	{
		iVar4 = 1105014447;
		iVar5 = 1105014447;
		iVar6 = 1105014447;
		iVar7 = 1105014447;
		if (!is_bit_set(Local_2193.f_13.f_11.f_159, 16))
		{
			set_bit(&(Local_2193.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_2193.f_1 == 6 || Local_2193.f_1 == 5)
	{
		if ((func_317(&(Local_2193.f_13), 0) > 0f && Local_2193.f_13.f_211[0]->f_14 != 255) && network_is_player_active(Local_2193.f_13.f_211[0]->f_14))
		{
			if (Local_2193.f_13.f_211[0]->f_14 == player_id())
			{
				if ((((func_317(&(Local_2193.f_13), 1) > 0f && Local_2193.f_13.f_211[1]->f_14 != 255) && network_is_player_active(Local_2193.f_13.f_211[1]->f_14)) && _0x81fb74c83c2ed69f(Local_2193.f_13.f_211[1]->f_14)) && !func_587(Local_2193.f_13.f_211[1]->f_14, 1))
				{
					iVar2 = 551037070;
				}
			}
			else if (_0x81fb74c83c2ed69f(Local_2193.f_13.f_211[0]->f_14) && !func_587(Local_2193.f_13.f_211[0]->f_14, 1))
			{
				iVar2 = 551037070;
			}
		}
	}
	uVar8 = 1;
	switch (Local_2193.f_1385)
	{
		case 2123407045:
			func_487(&(Local_2193.f_1006), iParam0, 0, iParam4, func_588());
			break;
		case 1310067901:
			func_589(&(Local_2193.f_1006), &(Local_2193.f_13), &uVar8, iParam1, 1);
			break;
		case 1022890889:
			func_589(&(Local_2193.f_1006), &(Local_2193.f_13), &uVar8, iParam1 | 256, 1);
			break;
		case -2065086408:
			func_590(&(Local_2193.f_1006), &(Local_2193.f_13), &uVar8, iParam0, 0, iParam4, func_588(), iParam1 | 2048, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 1619021308:
			func_591(&(Local_2193.f_1006), &(Local_2193.f_13), &uVar8, iParam0, 0, iParam4, func_588(), iParam1, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 524681:
			func_592(&(Local_2193.f_1006), &(Local_2193.f_1021), iParam0, 0, iParam4, func_588(), Local_2193.f_1260, 0, 0, 0, 0);
			break;
		case -1828147615:
			func_593(&(Local_2193.f_1006), &(Local_2193.f_1021), &(Local_2193.f_13), &uVar8, iParam0, 0, iParam4, func_588(), 404851220, 0, iParam1, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 227643027:
			func_594(&(Local_2193.f_1006), &(Local_2193.f_1021), &(Local_2193.f_13), iParam0, &uVar8, 0, iParam4, func_588(), 404851220, 0, 0, 1, 0, iParam1, 1, 551037070, 859817522, 109029619, 109029619, iVar4, iVar5, iVar6, iVar7);
			break;
		case 1086838518:
			func_589(&(Local_2193.f_1006), &(Local_2193.f_13), &uVar8, iParam1, 1);
			func_592(&(Local_2193.f_1006), &(Local_2193.f_1021), iParam0, 0, iParam4, func_588(), Local_2193.f_1260, 0, 0, 0, 0);
			break;
	}
}

void func_281()
{
	if (Local_2193.f_9 == -785841056)
	{
		return;
	}
	iVar0 = Local_1950.f_10;
	if (func_181(256))
	{
		iVar1 = _0x901e0dc25080c8b9(player_id());
		if (_0x0f99f6436528a089(iVar1))
		{
			iVar2 = _0x4be6c13a45cca8ec(iVar1);
			if (iVar2 != 255 && network_is_player_active(iVar2))
			{
				iVar0 = iVar2;
			}
		}
		else
		{
			iVar0 = player_id();
		}
	}
	if (iVar0 == 255)
	{
		iVar0 = player_id();
	}
	if (iVar0 != 255 && network_is_player_active(iVar0))
	{
		iVar3 = get_player_ped(iVar0);
		if (does_entity_exist(iVar3))
		{
			if (!func_595())
			{
				vVar4 = { get_entity_coords(iVar3, false, false) };
			}
			else
			{
				vVar4 = { get_entity_coords(Global_34, false, false) };
			}
			fVar7 = 0f;
			bVar8 = true;
			if (!func_596(&vVar4, &fVar7, &bVar8))
			{
				if (((func_36(&Var9, Local_2193.f_1) && func_44(&Var9)) && func_45(&Var9, Local_2193.f_2)) && func_597(&Var9))
				{
					func_146(Var9, 2060397848, &vVar4, 1);
					func_145(Var9, -185561597, &fVar7, 1);
				}
			}
			Local_2193.f_1403 = { vVar4 };
			Local_2193.f_1417 = clone_ped(iVar3, 0f, false, true);
			if (does_entity_exist(Local_2193.f_1417))
			{
				if (is_entity_dead(Local_2193.f_1417))
				{
					resurrect_ped(Local_2193.f_1417);
				}
				else
				{
					_set_entity_health(Local_2193.f_1417, 100, 0);
				}
				set_blocking_of_non_temporary_events(Local_2193.f_1417, true);
				clear_ped_tasks_immediately(Local_2193.f_1417, false, true);
				set_entity_coords(Local_2193.f_1417, vVar4, true, false, true, true);
				set_entity_heading(Local_2193.f_1417, fVar7);
				if (bVar8)
				{
					_0x9587913b9e772d29(Local_2193.f_1417, 1);
				}
				freeze_entity_position(Local_2193.f_1417, true);
				set_entity_collision(Local_2193.f_1417, false, false);
				set_entity_invincible(Local_2193.f_1417, true);
				set_entity_visible(Local_2193.f_1417, false);
				clear_ped_decorations(Local_2193.f_1417);
				_0x2208438012482a1a(Local_2193.f_1417, true, true);
				if (func_598())
				{
					Local_2193.f_1416 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
					if (does_cam_exist(Local_2193.f_1416))
					{
						vVar14 = { _get_object_offset_from_coords(get_entity_coords(Local_2193.f_1417, true, false), get_entity_heading(Local_2193.f_1417), 0.3f, 2f, 0.3f) };
						set_cam_coord(Local_2193.f_1416, vVar14);
						point_cam_at_entity(Local_2193.f_1416, Local_2193.f_1417, 0.3f, 0f, 0.3f, true);
						set_cam_fov(Local_2193.f_1416, 35f);
						set_entity_heading(Local_2193.f_1417, func_599(vVar4, vVar14, 1));
					}
				}
			}
		}
	}
}

void func_282()
{
	if (func_137(268435456))
	{
		return;
	}
	if (Local_1950.f_12 == 0)
	{
		func_600();
		if (Local_2193.f_9 == 1038512660)
		{
			if (func_181(256))
			{
				func_43(4096);
			}
			else
			{
				func_43(16384);
			}
		}
		else if (Local_2193.f_9 == -785841056)
		{
			if (func_137(32768))
			{
				func_43(4096);
			}
			else
			{
				func_43(16384);
			}
		}
		else if (Local_1950.f_10 == player_id() || func_137(8192))
		{
			func_43(4096);
		}
		else
		{
			if (Local_2000[Local_2193.f_1333]->f_2 <= 0f)
			{
				func_601((func_192(2) - 1));
			}
			func_43(16384);
		}
		if (func_137(4096) || func_137(8192))
		{
			func_602(Local_2193.f_1, Local_2193.f_3, Local_2193.f_1334);
		}
		else if (func_137(16384))
		{
			func_603(Local_2193.f_1, Local_2193.f_3, Local_2193.f_1334);
		}
		func_604();
	}
	if (Local_1950.f_12 == 4)
	{
		func_43(16384);
	}
	func_43(268435456);
}

void func_283()
{
	if (func_605(128, 255))
	{
		func_606();
	}
}

void func_284()
{
}

void func_285()
{
	if ((func_159(Local_2193.f_1333) && func_296(Local_2193.f_1385)) && Local_1950.f_12 == 0)
	{
		if (!func_18(iVar2191, 4096))
		{
			func_248(iVar2191, 4096);
		}
		if (!func_607())
		{
			func_248(iVar2191, 16384);
		}
	}
	else
	{
		if (func_18(iVar2191, 4096))
		{
			func_608(iVar2191, 4096);
		}
		if (func_18(iVar2191, 16384))
		{
			func_608(iVar2191, 16384);
		}
	}
}

bool func_286()
{
	return func_18(iVar2191, 4096);
}

bool func_287()
{
	switch (Local_2193.f_1)
	{
		case 8:
		case 15:
		case 16:
		case 17:
			return true;
		default:
			break;
	}
	return false;
}

bool func_288()
{
	return false;
}

void func_289()
{
	func_609(&(Local_2193.f_1021), 1, 0);
	func_610(&(Local_2193.f_13));
	func_254(&(Local_2193.f_1006), 1);
}

bool func_290()
{
	if (func_62(255))
	{
		return false;
	}
	_0xdd1232b332cbb9e7(11, 1, 0);
	if (func_611())
	{
		return true;
	}
	Var0 = { func_541() };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { Local_2193.f_1347 };
		if (is_string_null_or_empty(&Var0))
		{
			Var0 = { Local_2193.f_1339 };
		}
	}
	if (Local_1950.f_12 != 0)
	{
		StringCopy(&cVar8, func_612(), 64);
		if (is_string_null_or_empty(&cVar8))
		{
			if (Local_2193.f_9 == -785841056)
			{
				StringCopy(&cVar8, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
			}
		}
		if (!is_string_null_or_empty(func_320()))
		{
			if (is_string_null_or_empty(&cVar8))
			{
				Local_2193.f_1288 = func_549(_create_var_string(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_320(), func_613(), func_614());
			}
			else
			{
				Local_2193.f_1288 = func_549(&cVar8, func_320(), func_613(), func_614());
			}
		}
		else if (is_string_null_or_empty(&cVar8))
		{
			Local_2193.f_1288 = func_549(_create_var_string(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_615(Local_1950.f_12), func_613(), func_614());
		}
		else
		{
			Local_2193.f_1288 = func_549(&cVar8, func_615(Local_1950.f_12), func_613(), func_614());
		}
	}
	else if (Local_2193.f_9 != -785841056)
	{
		Local_2193.f_1288 = func_616(_create_var_string(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_613(), func_614());
	}
	else if (func_137(4096))
	{
		Var16 = { func_617() };
		if (is_string_null_or_empty(&Var16))
		{
			StringCopy(&Var16, "FME_SHARD_OUTRO_TITLE_WINNER", 64);
		}
		StringCopy(&cVar24, func_618(), 64);
		if (is_string_null_or_empty(&cVar24))
		{
			Local_2193.f_1288 = func_549(&Var16, func_318(func_317(&(Local_2193.f_13), 0)), func_613(), func_614());
		}
		else
		{
			Local_2193.f_1288 = func_548(&Var16, func_318(func_317(&(Local_2193.f_13), 0)), &cVar24, func_613(), func_614());
		}
	}
	else
	{
		bVar32 = false;
		Var33 = { func_619() };
		if (is_string_null_or_empty(&Var33))
		{
			if (!func_180(4096, Local_2193.f_1333) && Local_2193.f_1334 >= 0)
			{
				bVar32 = true;
			}
			else if (Local_2193.f_9 == -785841056)
			{
				StringCopy(&Var33, func_612(), 64);
				if (is_string_null_or_empty(&Var33))
				{
					StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
				}
			}
			else
			{
				StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER", 64);
			}
		}
		if (is_string_null_or_empty(func_321(Local_2193.f_1407, Local_2193.f_1415, func_317(&(Local_2193.f_13), 0))))
		{
			if (bVar32)
			{
				Local_2193.f_1288 = func_616(_create_var_string(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_620(Local_2193.f_1334)), func_613(), func_614());
			}
			else
			{
				Local_2193.f_1288 = func_616(&Var33, func_613(), func_614());
			}
		}
		else
		{
			StringCopy(&cVar41, func_618(), 64);
			if (is_string_null_or_empty(&cVar41))
			{
				if (bVar32)
				{
					Local_2193.f_1288 = func_549(_create_var_string(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_620(Local_2193.f_1334)), func_321(Local_2193.f_1407, Local_2193.f_1415, func_317(&(Local_2193.f_13), 0)), func_613(), func_614());
				}
				else
				{
					Local_2193.f_1288 = func_549(&Var33, func_321(Local_2193.f_1407, Local_2193.f_1415, func_317(&(Local_2193.f_13), 0)), func_613(), func_614());
				}
			}
			else if (bVar32)
			{
				Local_2193.f_1288 = func_548(_create_var_string(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_620(Local_2193.f_1334)), func_321(Local_2193.f_1407, Local_2193.f_1415, func_317(&(Local_2193.f_13), 0)), &cVar41, func_613(), func_614());
			}
			else
			{
				Local_2193.f_1288 = func_548(&Var33, func_321(Local_2193.f_1407, Local_2193.f_1415, func_317(&(Local_2193.f_13), 0)), &cVar41, func_613(), func_614());
			}
		}
	}
	return true;
}

void func_291(var uParam0)
{
	if (uParam0->f_11 >= 0)
	{
		if (!_0x84848e1c0fc67dbb(uParam0->f_11))
		{
			_0x3210bcb36af7621b(uParam0->f_11);
		}
		release_sound_id(uParam0->f_11);
		uParam0->f_11 = -1;
	}
}

int func_292()
{
	return 7000;
}

bool func_293()
{
	if (Local_2193.f_9 == -785841056)
	{
		return true;
	}
	if (!does_entity_exist(Local_2193.f_1417))
	{
		return true;
	}
	vVar0 = { get_entity_coords(Local_2193.f_1417, true, false) };
	if (func_68(vVar0))
	{
		return true;
	}
	if (func_62(255))
	{
		return false;
	}
	if (!_0xcf45df50c7775f2a())
	{
		_0x387ad749e3b69b70(vVar0, func_621(Local_2193.f_1416), 60f, 0);
		return false;
	}
	bVar3 = true;
	if (!_0x0909f71b5c070797())
	{
		bVar3 = false;
	}
	_0xa8432a14d4dc2101(vVar0);
	if (!_0xda8b2eaf29e872e2(vVar0))
	{
		bVar3 = false;
	}
	request_collision_at_coord(vVar0);
	if (!_0x6bfbdc46139c45ab(vVar0))
	{
		bVar3 = false;
	}
	if (!bVar3)
	{
		return false;
	}
	if (!_0xe368e8422c860ba7(func_123(), func_124(), -2))
	{
		bVar3 = false;
	}
	if (!_0xe368e8422c860ba7(func_125(), func_126(), -2))
	{
		bVar3 = false;
	}
	if (!func_622())
	{
		bVar3 = false;
	}
	return bVar3;
}

bool func_294(int iParam0)
{
	iVar0 = 6;
	if (func_623(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

void func_295()
{
	if ((((!func_65(65536) && Local_2193.f_9 == -785841056) && func_286()) && func_551()) && func_499(Local_2193.f_1290))
	{
		bVar0 = false;
		if (func_279() & 1024 == 1024)
		{
			bVar0 = true;
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 <= (Local_2193.f_1334 - 1))
		{
			iVar1 = Local_2193.f_13.f_211[iVar2]->f_14;
			if (func_624(iVar1, bVar0, 0))
			{
				Local_2193.f_1290 = func_500("FME_HELP_SCORE_SURPASS");
				func_173(65536);
			}
			else
			{
				iVar2++;
			}
		}
	}
}

bool func_296(int iParam0)
{
	switch (iParam0)
	{
		case 2123407045:
			return false;
		default:
			break;
	}
	return true;
}

bool func_297()
{
	return false;
}

bool func_298()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_299()
{
	iVar0 = _0xc17f69e1418cd11f(7);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_300()
{
	return (func_625() && func_626());
}

void func_301()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

void func_302(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_303()
{
	iVar0 = 1;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar1 = int_to_playerindex(iVar3);
		if (network_is_player_active(iVar1))
		{
			iVar2 = _0xf49f14462f0ae27c(iVar1);
			if ((does_entity_exist(iVar2) && is_entity_visible(iVar2)) && func_627(iVar2, Local_2193.f_1403, 1) < 10f)
			{
				set_entity_visible(iVar2, false);
				iVar0 = 0;
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_304(vector3 vParam0, float fParam3)
{
	Global_1572887->f_106.f_80 = { vParam0 };
	Global_1572887->f_106.f_83 = fParam3;
}

void func_305()
{
	func_606();
	func_628();
	return;
}

void func_306()
{
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (network_is_player_active(iVar0))
		{
			if (iVar0 == player_id())
			{
				set_local_player_invisible_locally(false);
			}
			else
			{
				set_player_invisible_locally(iVar0, false);
			}
		}
		iVar1++;
	}
}

void func_307()
{
	if (!_does_anim_scene_exist(Local_2193.f_1338))
	{
		return;
	}
	if (!does_entity_exist(Local_2193.f_1417))
	{
		return;
	}
	set_anim_scene_origin(Local_2193.f_1338, get_entity_coords(Local_2193.f_1417, true, false), get_entity_rotation(Local_2193.f_1417, 2), 2);
	start_anim_scene(Local_2193.f_1338);
}

bool func_308()
{
	return false;
}

int func_309()
{
	switch (get_random_int_in_range(0, 8))
	{
		case 0:
			return -1639456476;
		case 1:
			return -2106738342;
		case 2:
			return 425751659;
		case 3:
			return -339257980;
		case 4:
			return -822629770;
		case 5:
			return -653113914;
		case 6:
			return 354512356;
		case 7:
			return -166523388;
		default:
			break;
	}
	return 425751659;
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case -1639456476:
			return 1500;
		case -2106738342:
			return 1800;
		case 425751659:
			return 1500;
		case -339257980:
			return 1500;
		case -822629770:
			return 1800;
		case -653113914:
			return 1800;
		case 354512356:
			return 1400;
		case -166523388:
			return 1800;
		default:
			break;
	}
	return 1500;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case -2106738342:
		case -1639456476:
		case -402959:
		case 486225122:
		case 1927505461:
			return 1;
		case -339257980:
		case 425751659:
			return 3;
		case -822629770:
		case -653113914:
		case -110352861:
		case 445839715:
		case 803206066:
			return 0;
		case -166523388:
		case -23808358:
		case 354512356:
		case 1533402397:
			return 2;
		default:
			break;
	}
	return -1;
}

void func_312(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	if (!func_629(iParam1))
	{
		return;
	}
	_task_emote(iParam0, iParam5, iParam2, iParam1, iParam3, iParam4, 0, 0, iParam6);
}

char* func_313()
{
	return "";
}

char* func_314()
{
	return "";
}

char* func_315()
{
	return "";
}

char* func_316()
{
	return "";
}

float func_317(var uParam0, int iParam1)
{
	return uParam0->f_211[iParam1]->f_5;
}

char[] func_318(float fParam0)
{
	return func_320();
}

void func_319(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3))
	{
		uParam0->f_3 = _databinding_add_data_container_from_path("", "transitionData");
	}
	if (_databinding_is_data_id_valid(uParam0->f_4))
	{
		_databinding_write_data_string(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = _databinding_add_data_string(uParam0->f_3, "gamerTag", sParam1);
	}
	if (_databinding_is_data_id_valid(uParam0->f_5))
	{
		_databinding_write_data_string(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = _databinding_add_data_string(uParam0->f_3, "teamName", sParam2);
	}
	if (_databinding_is_data_id_valid(uParam0->f_12))
	{
		_databinding_write_data_int(uParam0->f_12, iParam7);
	}
	else
	{
		uParam0->f_12 = _databinding_add_data_int(uParam0->f_3, "teamNameColor", iParam7);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[0])))
	{
		_databinding_write_data_string(&(uParam0->f_6[0]), sParam3);
	}
	else
	{
		uParam0->f_6[0] = _databinding_add_data_string(uParam0->f_3, "info0", sParam3);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[1])))
	{
		_databinding_write_data_string(&(uParam0->f_6[1]), sParam4);
	}
	else
	{
		uParam0->f_6[1] = _databinding_add_data_string(uParam0->f_3, "info1", sParam4);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[2])))
	{
		_databinding_write_data_string(&(uParam0->f_6[2]), sParam5);
	}
	else
	{
		uParam0->f_6[2] = _databinding_add_data_string(uParam0->f_3, "info2", sParam5);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[3])))
	{
		_databinding_write_data_string(&(uParam0->f_6[3]), sParam6);
	}
	else
	{
		uParam0->f_6[3] = _databinding_add_data_string(uParam0->f_3, "info3", sParam6);
	}
}

char[] func_320()
{
	if (func_630(8))
	{
		StringCopy(&cVar1, "FME_PLA_FAIL_ANIMAL_DIED", 64);
		StringConCat(&cVar1, func_631(), 64);
		StringConCat(&cVar1, func_632(), 64);
		cVar0 = func_633(cVar1);
		cVar0 = _create_var_string(2, cVar0);
	}
	else if (func_630(16))
	{
		cVar0 = _create_var_string(2, "FME_PLA_FAIL_EVERYONE_DEAD");
	}
	else if (func_630(32))
	{
		StringCopy(&cVar1, "FME_PLA_SUCCESS_ANIMAL_SAVED", 64);
		StringConCat(&cVar1, func_631(), 64);
		StringConCat(&cVar1, func_632(), 64);
		cVar0 = func_633(cVar1);
		cVar0 = _create_var_string(2, cVar0);
	}
	else
	{
		StringCopy(&cVar1, "FME_PLA_FAIL_TIME_OUT", 64);
		StringConCat(&cVar1, func_631(), 64);
		StringConCat(&cVar1, func_632(), 64);
		cVar0 = func_633(cVar1);
		cVar0 = _create_var_string(2, cVar0);
	}
	return cVar0;
}

char* func_321(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	return "";
}

void func_322(int iParam0)
{
}

bool func_323()
{
	return false;
}

bool func_324(var uParam0)
{
	if (!_uiflowblock_is_loaded(*uParam0))
	{
		return false;
	}
	if (is_bit_set(uParam0->f_15, 0))
	{
		return true;
	}
	if (!_0xf7c180f57f85d0b8(*uParam0))
	{
		func_228(uParam0);
		return false;
	}
	_uistatemachine_request_transition(*uParam0, uParam0->f_2);
	set_bit(&(uParam0->f_15), 0);
	return true;
}

bool func_325()
{
	return false;
}

int func_326()
{
	return 1022890889;
}

char* func_327(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

bool func_328(int iParam0)
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

int func_329(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_634(iVar0, 2))
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
		func_635(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_330(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_328(iParam0))
	{
		return;
	}
	iVar0 = func_636(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

bool func_331(int iParam0, bool bParam1)
{
	if (bParam1 && !func_328(iParam0))
	{
		return false;
	}
	iVar0 = func_636(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_332(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_328(iParam0))
	{
		return;
	}
	iVar0 = func_636(iParam0);
	if (bParam1)
	{
		func_637(iParam0, 4);
		if (bParam3)
		{
			func_638(iVar0, 1);
		}
		func_639(iVar0, 1);
	}
	else
	{
		func_640(iParam0, 4);
		func_639(iVar0, 0);
	}
}

void func_333(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_328(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_636(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_641(iVar0);
	*uParam0 = 0;
}

bool func_334()
{
	if (does_entity_exist(Local_1444.f_260.f_1))
	{
		_0x9dae1380cc5c6451(player_id(), Local_1444.f_260.f_1);
	}
	return true;
}

bool func_335(bool bParam0)
{
	if (!func_160(-931834499, bParam0))
	{
		return false;
	}
	return true;
}

void func_336(int iParam0)
{
	func_445(&(Local_2193.f_1335), iParam0);
}

void func_337(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_642(&(Global_1139381->f_4796), bParam1);
		func_171(117);
	}
	else
	{
		func_172(117);
	}
}

void func_338(int iParam0)
{
	if (func_643(&Global_1903131, iParam0))
	{
		func_644(Global_1903131, iParam0);
	}
}

void func_339(int iParam0)
{
	iVar0 = int_to_playerindex(iParam0);
	func_645(iVar0, iParam0);
	func_646(iVar0, iParam0);
}

bool func_340()
{
	return func_647(256);
}

void func_341()
{
	if (func_647(256))
	{
		func_648(256);
	}
}

void func_342(int iParam0, int iParam1)
{
	func_445(&(Local_2000[iParam1]->f_1), iParam0);
}

bool func_343(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	if (func_649(iVar0, 0, 1))
	{
		return false;
	}
	if (func_650(iVar0, 32))
	{
		return true;
	}
	return false;
}

void func_344(int iParam0, int iParam1, int iParam2)
{
	if (func_340())
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (!func_650(player_id(), 32))
		{
			func_651(32);
			if (iParam2 == 0)
			{
				sVar0 = _create_var_string(2, "NG_PP_FF_ON");
				func_652(sVar0, -2, 0, 0, 0, 1);
			}
			if (iParam1 == 1)
			{
				func_653(iParam0, _0x901e0dc25080c8b9(player_id()));
			}
		}
	}
	else if (func_650(player_id(), 32))
	{
		func_654(32);
		if (iParam2 == 0)
		{
			sVar0 = _create_var_string(2, "NG_PP_FF_OFF");
			func_652(sVar0, -2, 0, 0, 0, 1);
		}
		if (iParam1 == 1)
		{
			func_653(iParam0, _0x901e0dc25080c8b9(player_id()));
		}
	}
}

void func_345()
{
	func_171(92);
}

void func_346(bool bParam0)
{
	if (bParam0)
	{
		func_172(49);
	}
	else
	{
		func_171(49);
	}
}

void func_347(bool bParam0)
{
	if (bParam0)
	{
		func_172(109);
		if (!Global_1296859->f_12)
		{
			func_655(16);
		}
	}
	else
	{
		func_171(109);
		if (!Global_1296859->f_12)
		{
			func_655(16);
		}
	}
}

void func_348(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

void func_349(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_656(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_657(Global_1940258, 8388608);
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

char* func_350()
{
	return "FMUI";
}

void func_351()
{
	if (!func_180(65536, Local_2193.f_1333))
	{
		return;
	}
	if (!func_180(32768, Local_2193.f_1333))
	{
		return;
	}
	if (!network_is_player_active(player_id()))
	{
		return;
	}
	if (func_528(Local_2193.f_1441, Local_2193.f_1445))
	{
		func_342(32768, Local_2193.f_1333);
	}
}

void func_352()
{
	if (_databinding_is_data_id_valid(Local_2193.f_1406))
	{
		func_658(Local_2193.f_1406);
	}
}

void func_353()
{
	if (func_294(Local_2193.f_1292))
	{
		_0x2f901291ef177b02(Local_2193.f_1292, 0);
	}
}

void func_354()
{
	func_333(&(Local_2193.f_1297), 1, 1);
	func_333(&(Local_2193.f_1298), 1, 1);
}

void func_355()
{
	if (func_294(Local_2193.f_1290))
	{
		_0x2f901291ef177b02(Local_2193.f_1290, 0);
	}
}

void func_356()
{
	if (func_294(Local_2193.f_1288))
	{
		_0x2f901291ef177b02(Local_2193.f_1288, 0);
	}
}

void func_357()
{
	if (func_294(Local_2193.f_1289))
	{
		_0x2f901291ef177b02(Local_2193.f_1289, 0);
	}
	Local_2193.f_1289 = 0;
	Local_2193.f_1267 = 0;
}

void func_358()
{
	if (func_294(Local_2193.f_1291))
	{
		_0x2f901291ef177b02(Local_2193.f_1291, 0);
	}
}

void func_359()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_565(iVar0);
		iVar0++;
	}
}

int func_360()
{
	return Global_1102219->f_26.f_12;
}

void func_361(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

void func_362(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_361(iParam0);
	if (!func_659(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_660(128) && !func_661(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_662() == 4)
	{
		func_171(18);
	}
	func_175(1024);
}

bool func_363(struct<2> Param0)
{
	iVar0 = func_663(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_364(struct<2> Param0)
{
	iVar0 = func_663(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_365(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_73(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_364(Param0) && !func_363(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_664(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_663(Param0) == 3)
		{
			func_665(1, -1706799532);
		}
		else if (func_663(Param0) == 4)
		{
			func_665(0, -1706799532);
		}
	}
	if ((func_663(Param0) == 3 || func_663(Param0) == 1) || ((bParam5 && func_663(Param0) == 4) && _0x01f4d242765c6b24(func_664(Param0))))
	{
		if (iParam3 != -1)
		{
			func_666(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_666(Param0, 2, iParam4, 255, 0);
		}
	}
	func_667(Param0, 0);
	if (func_74(func_373(0), Param0))
	{
		func_349(1);
		func_668(0);
		func_669(0);
		func_670(1);
	}
	func_671(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_672(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_366(int iParam0, struct<2> Param1)
{
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	func_673(Param1, &Var0);
	func_674(0);
	func_675(1);
	if (func_676(Global_1196898->f_78[iParam0]->f_3) == -785841056)
	{
		_0x50b72a754ee64a71(784116709);
		_0xe5a680a5d8b1f687(0);
	}
	else
	{
		_0x50b72a754ee64a71(1638906956);
	}
}

void func_367(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		func_511(&(Global_1194053->f_3), 32);
		func_511(&(Global_1194053->f_4), 12);
		Global_1194053->f_498 = iVar0;
		if (network_is_player_active(player_id()) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_511(&(Global_1194053->f_4), 2);
		}
		_0xc08bff658b2e51da(0);
		Global_1194053->f_5[5] = 0;
		func_511(Global_1194053->f_5[5], 1);
	}
	Global_1194053->f_5[3] = 0;
	func_511(Global_1194053->f_5[3], 1);
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		func_511(Global_1194053->f_5[3], 6);
		return;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		func_511(Global_1194053->f_5[3], 6);
		return;
	}
	_0x0a04a07bc3074edb(iParam0);
}

void func_368(int iParam0)
{
	func_149(&(Global_1071686->f_28662.f_22.f_1), iParam0);
}

void func_369(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_370(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1410749931;
		case 1:
			return -1770809161;
		case 2:
			return -1530280304;
		case 3:
			return -1982623011;
		case 4:
			return -1128990743;
		case 5:
			return 862016482;
		case 6:
			return 1115117048;
		case 7:
			return -1379582731;
		case 8:
			return -598646238;
		case 9:
			return -2111818647;
		case 10:
			return 279919022;
		case 11:
			return 290924059;
		case 12:
			return -947463643;
		case 13:
			return -332598258;
		case 14:
			return -1149562197;
		case 15:
			return -793756395;
		case 16:
			return 382592596;
		case 17:
			return 82199177;
		case 18:
			return 379905542;
		case 19:
			return 1940565578;
		case 20:
			return 1358162137;
		case 21:
			return -1200000992;
		case 22:
			return 1488517152;
		case 23:
			return -1396689762;
		case 24:
			return 125211217;
		case 25:
			return 1312860593;
		case 26:
			return -1395267836;
		case 27:
			return -1675546834;
		case 28:
			return 455615629;
		case 29:
			return 1338613333;
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

int func_371(var uParam0, int iParam1)
{
	if (_datafile_register_query(*uParam0, iParam1, func_677(iParam1)))
	{
	}
	return 1;
}

bool func_372(var uParam0)
{
	*uParam0 = uVar1441;
	uParam0->f_2 = -1410749931;
	uParam0->f_3 = Local_1444.f_50;
	bVar0 = _0x603ac35fd4602c76(uVar1441);
	bVar1 = _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
	return (bVar0 && bVar1);
}

struct<2> func_373(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_374()
{
	return Global_1301323->f_150;
}

bool func_375(int iParam0)
{
	return (Global_1301323->f_288.f_2 && iParam0) != 0;
}

int func_376(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -1494363065;
		case 2:
			return -514316475;
		case 3:
			return 1257949393;
		case 4:
			return -1967078622;
		case 5:
			return -1854780893;
		case 6:
			return 477974086;
		case 7:
			return 618068466;
		case 8:
			return 499656970;
		case 9:
			return 1791948823;
		case 10:
			return -1634863390;
		case 11:
			return -1296513906;
		case 12:
			return -1030655937;
		case 13:
			return -1783181138;
		case 14:
			return 1250422342;
		case 15:
			return -634665876;
		case 16:
			return -1679013564;
		case 17:
			return -706075066;
		case 18:
			return -1152882498;
		case 19:
			return 2108116481;
		case 20:
			return -86995487;
		case 21:
			return -1315007749;
		case 22:
			return 449057693;
		case 23:
			return 81846499;
		case 24:
			return 385589027;
		case 25:
			return 1951290581;
		case 26:
			return 1316486837;
		case 27:
			return 120448958;
		case 28:
			return 1345888212;
		case 29:
			return 396837320;
		case 30:
			return -1408563730;
		case 31:
			return -757633599;
		case 32:
			return -1034424695;
		case 33:
			return 1841970554;
		case 34:
			return -789758703;
		case 35:
			return -210274020;
		case 36:
			return 633501950;
		case 37:
			return -1215742816;
		case 38:
			return 1971904853;
		case 39:
			return -1935655667;
		case 40:
			return 1898201469;
		case 41:
			return 300196727;
		case 42:
			return 242857368;
		case 43:
			return -1648877470;
		case 44:
			return -545299531;
		case 45:
			return -1598949067;
		case 46:
			return 478308321;
		case 47:
			return 440583097;
		case 48:
			return -1258163578;
		case 49:
			return -1376314322;
		case 50:
			return -1898294040;
		case 51:
			return -114666387;
		case 52:
			return 334700325;
		case 53:
			return -1399051227;
		case 54:
			return 1571096148;
		case 55:
			return 457103096;
		case 56:
			return -1930919582;
		case 57:
			return -985005225;
		case 58:
			return 1723535349;
		case 59:
			return -1393798041;
		case 60:
			return 905156700;
		case 61:
			return 151445061;
		case 62:
			return -1983943039;
		case 63:
			return 2021695109;
		case 64:
			return -2086327823;
		case 65:
			return 1623086000;
		case 66:
			return 796310207;
		case 67:
			return -1575244427;
		case 68:
			return -1930399868;
		case 69:
			return 353568324;
		case 70:
			return -469672732;
		case 71:
			return 1717813521;
		case 72:
			return 941437279;
		case 73:
			return -162385832;
		case 74:
			return -892848695;
		case 75:
			return -355092128;
		case 76:
			return 946732137;
		case 77:
			return -79139194;
		case 78:
			return 1382158532;
		case 79:
			return -379874384;
		case 80:
			return 2018657739;
		case 81:
			return 1427070667;
		case 82:
			return -682435976;
		case 83:
			return 1232224440;
		case 84:
			return 1889309476;
		case 85:
			return 1918774327;
		case 86:
			return -32613857;
		case 87:
			return 5611246;
		case 88:
			return 2078792148;
		case 89:
			return 630308764;
		case 90:
			return 1398164246;
		case 91:
			return 2002140369;
		case 92:
			return -1777144780;
		case 93:
			return -1098645728;
		case 94:
			return 640330073;
		case 95:
			return -1330378740;
		case 96:
			return -71551190;
		case 97:
			return 1248971179;
		case 98:
			return -2076515520;
		case 99:
			return 1872332830;
		case 100:
			return -326224139;
		case 101:
			return -2062348046;
		case 102:
			return -1924130593;
		case 103:
			return -29468993;
		case 104:
			return 669386338;
		case 105:
			return -479797100;
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

void func_377(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1139381->f_3876.f_2[func_378(iParam0, 1)] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_678(iParam0);
	}
	Global_1139381->f_3876.f_2[func_378(iParam0, 1)] = bParam1;
}

int func_378(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case -2076515520:
			return 98;
		case -2062348046:
			return 101;
		case -1983943039:
			return 62;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 68;
		case -1924130593:
			return 102;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 92;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 67;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 59;
		case -1376314322:
			return 49;
		case -1330378740:
			return 95;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 93;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 74;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 82;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 105;
		case -469672732:
			return 70;
		case -379874384:
			return 79;
		case -355092128:
			return 75;
		case -326224139:
			return 100;
		case -210274020:
			return 35;
		case -162385832:
			return 73;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 77;
		case -71551190:
			return 96;
		case -32613857:
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case 5611246:
			return 87;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 61;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 69;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 89;
		case 633501950:
			return 36;
		case 640330073:
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case 905156700:
			return 60;
		case 941437279:
			return 72;
		case 946732137:
			return 76;
		case 1232224440:
			return 83;
		case 1248971179:
			return 97;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 78;
		case 1398164246:
			return 90;
		case 1427070667:
			return 81;
		case 1571096148:
			return 54;
		case 1623086000:
			return 65;
		case 1717813521:
			return 71;
		case 1723535349:
			return 58;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 99;
		case 1889309476:
			return 84;
		case 1898201469:
			return 40;
		case 1918774327:
			return 85;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 91;
		case 2018657739:
			return 80;
		case 2021695109:
			return 63;
		case 2078792148:
			return 88;
		case 2108116481:
			return 19;
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

int func_379()
{
	if (func_300())
	{
		if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
		{
			disable_control_action(0, -128997553, false);
			disable_control_action(0, 130948705, false);
			if (func_679())
			{
				func_680();
				func_681();
				func_682();
			}
			else if (func_683(Global_34, 0, 0, 0) == -1415022764)
			{
				set_player_control(player_id(), true, 0, false);
				_0x94a3c1b804d291ec(Global_34, 0, 0, 0, 0);
			}
			return 0;
		}
	}
	return 1;
}

bool func_380(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

void func_381(var uParam0, bool bParam1)
{
	if (bParam1 || !func_382(uParam0))
	{
		func_684(uParam0);
	}
}

bool func_382(var uParam0)
{
	return func_384(*uParam0, 1);
}

float func_383(var uParam0)
{
	if (!func_382(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_685(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_686() - uParam0->f_1);
}

bool func_384(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_385(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = uParam1;
	uParam0->f_1 = uParam2;
}

void func_386(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
}

void func_387(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_4 = uParam1;
	uParam0->f_5 = uParam2;
}

void func_388(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_6 = uParam1;
	uParam0->f_7 = uParam2;
}

void func_389(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_8 = uParam1;
	uParam0->f_9 = uParam2;
}

void func_390(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_10 = uParam1;
	uParam0->f_11 = uParam2;
}

void func_391(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	uParam0->f_3 = 1;
}

bool func_392(int iParam0)
{
	return func_399(&(Global_1956200->f_1565), iParam0, 1);
}

void func_393(var uParam0, struct<2> Param1, bool bParam3)
{
	func_687(uParam0, 84);
	if (!func_688(uParam0) && !bParam3)
	{
		return;
	}
	if (!func_73(Param1))
	{
		return;
	}
	iVar0 = Param1;
	if ((iVar0 != 7 && iVar0 != 2) && iVar0 != 6)
	{
		return;
	}
	if (((((((((((((((((((_get_number_of_references_of_script_with_name_hash(get_hash_key("FM_Mission_Controller")) <= 0 && _get_number_of_references_of_script_with_name_hash(get_hash_key("FM_Race_Controller")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("FM_Deathmatch_Controller")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("mp_intro")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_archery")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_challenges")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_condor_egg")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_dead_drop")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_escaped_convicts")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_golden_hat")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_hot_property")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_king_of_the_castle")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_king_of_the_rails")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_round_up")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_supply_train")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_treasure_hunt")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_wreckage")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_animal_tagging")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_wildlife_photographer")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_protect_legendary_animal")) <= 0)
	{
		return;
	}
	if (Global_1139381->f_4796)
	{
		func_642(&(Global_1139381->f_4796), 1);
	}
	func_689(&(Global_1139381->f_4796));
	func_690(uParam0);
	func_691();
	func_692(0);
	Global_1139381->f_4796 = { *uParam0 };
	Global_1139381->f_4796.f_13 = { Param1 };
	Global_1139381->f_4796 = 1;
	if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[0]))
	{
		Var1 = { func_693(0, 1, 0, -1) };
	}
	func_697(&(Global_1139381->f_4796), func_694(&Var1, 0), func_695(&Var1, 0), -882137232, func_696(&Var1, 0));
	if (uParam0->f_10)
	{
		if (func_160(uParam0->f_54, uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_698();
		}
	}
	if (bParam3)
	{
		if (func_699(0) != 3)
		{
			func_700(1, uParam0->f_57);
			func_701(16777216);
		}
	}
	if (uParam0->f_1 && !uParam0->f_16.f_2)
	{
		Var5.f_1 = 0;
		if (uParam0->f_9)
		{
			Global_1139381->f_4796.f_51 = { uParam0->f_51 };
			Var5.f_1 = uParam0->f_51.f_1;
		}
		Var5 = uParam0->f_16.f_1;
		func_702(&Var5);
		if (!func_170(115, 255))
		{
			func_703();
		}
	}
	if (uParam0->f_3)
	{
		func_704(uParam0);
		func_705();
		func_706(0);
	}
	if (uParam0->f_6)
	{
		func_706(3);
	}
	if (uParam0->f_4)
	{
		func_706(1);
		func_707(uParam0->f_25, uParam0->f_25.f_1, uParam0->f_25.f_2);
		func_708(uParam0->f_25.f_3, 1);
		func_709(uParam0->f_25.f_4, 1);
		func_710(uParam0->f_25.f_5, 1);
	}
	else if (bParam3)
	{
		func_711();
	}
	if (uParam0->f_5)
	{
		func_706(2);
		func_712(0, uParam0->f_25.f_6, 1);
		func_712(2, uParam0->f_25.f_7, 1);
		func_712(1, uParam0->f_25.f_8, 1);
	}
	if (uParam0->f_7)
	{
		func_706(4);
	}
	if (uParam0->f_12)
	{
		func_706(5);
		func_713(&(uParam0->f_34[0]), uParam0->f_34[0]->f_1, 0);
		func_713(&(uParam0->f_34[1]), uParam0->f_34[1]->f_1, 1);
		func_713(&(uParam0->f_34[2]), uParam0->f_34[2]->f_1, 2);
		func_713(&(uParam0->f_34[3]), uParam0->f_34[3]->f_1, 3);
		func_714();
	}
	if (uParam0->f_8)
	{
		func_706(6);
		func_715(Global_1956200->f_1565.f_117);
	}
	else if (uParam0->f_4)
	{
		func_715(Global_1956200->f_1549);
	}
	else if (bParam3)
	{
		func_715(Global_1956200->f_1549);
	}
}

int func_394(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_716(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_699(bParam1), iParam0, iParam3);
}

void func_395(int iParam0)
{
	Var0 = { func_718(889965687, func_717(1), 1034665895, 1) };
	_0x3112adb9d5f3426b(&Var0, iParam0);
	func_719(27, 0, 2, 0, 0);
}

void func_396(int iParam0)
{
	func_720(1);
	Var0 = { func_718(273608212, func_717(1), 1784584921, 1) };
	if (_0xb881ca836cc4b6d4(&Var0))
	{
		_0x3112adb9d5f3426b(&Var0, iParam0);
	}
}

bool func_397(int iParam0, int iParam1, int iParam2)
{
	if (!func_721(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_722(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_723(iParam0, iParam1, iParam2);
	}
	Var1 = { func_724(iParam0, 0, 1) };
	Var6 = { func_718(iParam0, Var1, Var1.f_4, 0) };
	return func_725(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

void func_398()
{
	func_172(119);
}

bool func_399(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_400()
{
	return Global_1102219->f_3672;
}

bool func_401(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_402(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_403(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((*uParam0)[iParam2]->f_23 != iParam1)
	{
		(*uParam0)[iParam2]->f_23 = iParam1;
	}
}

void func_404(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((*uParam0)[iParam2]->f_26 != iParam1)
	{
		(*uParam0)[iParam2]->f_26 = iParam1;
	}
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case -2121688190:
		case -2106580172:
		case -2048736478:
		case -2034972265:
		case -2030232380:
		case -2024635066:
		case -1998058959:
		case -1988105196:
		case -1906191545:
		case -1816664083:
		case -1747825963:
		case -1747775003:
		case -1741111493:
		case -1693203215:
		case -1688128310:
		case -1662942683:
		case -1633216922:
		case -1595467349:
		case -1567930587:
		case -1566323707:
		case -1559242154:
		case -1513632695:
		case -1478891674:
		case -1462274666:
		case -1456680863:
		case -1396905917:
		case -1395051846:
		case -1392193699:
		case -1389658546:
		case -1371003729:
		case -1357626643:
		case -1321714808:
		case -1263043163:
		case -1237816179:
		case -1210145388:
		case -1199313137:
		case -1134374451:
		case -1117222502:
		case -1103135225:
		case -1085232344:
		case -1081805875:
		case -1031152097:
		case -1025216818:
		case -1018697504:
		case -992598136:
		case -992156975:
		case -985996415:
		case -984192463:
		case -968848760:
		case -963916715:
		case -879802008:
		case -867923254:
		case -822028324:
		case -818533067:
		case -780469251:
		case -755765764:
		case -747104616:
		case -740629317:
		case -737237468:
		case -735182489:
		case -701364869:
		case -592068833:
		case -511566837:
		case -507621590:
		case -426139257:
		case -392465725:
		case -352964861:
		case -272216216:
		case -243818172:
		case -235048253:
		case -222767785:
		case -180188163:
		case -164117130:
		case -158269097:
		case -152950882:
		case -118871741:
		case -104543072:
		case -60720396:
		case -1770032:
		case 60954128:
		case 90287351:
		case 133359852:
		case 214435071:
		case 221316808:
		case 228563269:
		case 233295963:
		case 263099185:
		case 338003170:
		case 553094466:
		case 564457427:
		case 615597833:
		case 639638961:
		case 748106308:
		case 778811758:
		case 820034251:
		case 994636947:
		case 1001245999:
		case 1045919449:
		case 1055774449:
		case 1069847489:
		case 1095891419:
		case 1116438174:
		case 1118985838:
		case 1147888108:
		case 1151744703:
		case 1153710309:
		case 1181380553:
		case 1183081869:
		case 1202244626:
		case 1257411558:
		case 1258184551:
		case 1264416627:
		case 1293773224:
		case 1366733613:
		case 1368078158:
		case 1368652849:
		case 1391579593:
		case 1406173366:
		case 1433472988:
		case 1451797164:
		case 1454572348:
		case 1493420112:
		case 1508919320:
		case 1654787099:
		case 1664261990:
		case 1735233562:
		case 1763355466:
		case 1834871186:
		case 1862205446:
		case 1865251988:
		case 1875669968:
		case 1896900580:
		case 1961764827:
		case 1974270787:
		case 2005921736:
		case 2017085833:
		case 2107754879:
		case 2113496404:
		case 2121165562:
		case 2123729925:
			return 672378911;
	}
	return -437533031;
}

void func_406(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((*uParam0)[iParam2]->f_25 != iParam1)
	{
		(*uParam0)[iParam2]->f_25 = iParam1;
	}
}

void func_407(var uParam0, float fParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((*uParam0)[iParam2]->f_29 != fParam1)
	{
		(*uParam0)[iParam2]->f_29 = fParam1;
	}
}

bool func_408(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

bool func_409(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

int func_410()
{
	return -1160158290;
}

bool func_411(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_412()
{
	return -1038436471;
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case -920598405:
		case -809127215:
		case 1706859953:
			return 2073882048;
		case -53531786:
		case 326175668:
			return -19533252;
	}
	return 2073882048;
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case -809127215:
			return -192486583;
		case 1706859953:
			return -192486583;
		case -53531786:
			return 1739344274;
		case 326175668:
			return 1739344274;
		case -920598405:
			return -192486583;
		default:
			break;
	}
	return -192486583;
}

int func_415(int iParam0)
{
	switch (iParam0)
	{
		case -809127215:
			return -551216071;
		case 1706859953:
			return -781967776;
		case -53531786:
			return -1433814131;
		case 326175668:
			return -1392359921;
		case -920598405:
			return 674287411;
		default:
			break;
	}
	return 0;
}

int func_416()
{
	if (Local_1444.f_50 != -920598405)
	{
		return 1;
	}
	iVar5 = 1;
	iVar4 = 0;
	while (iVar4 < 4)
	{
		vVar0 = { func_726(iVar4) };
		fVar3 = func_727(iVar4);
		if (!network_does_network_id_exist(&(Local_16.f_553[iVar4])))
		{
			if (!func_728(Local_16.f_553[iVar4], 1468884243, vVar0, fVar3, 1, 0, 0, 0))
			{
			}
			iVar5 = 0;
		}
		iVar4++;
	}
	return iVar5;
}

bool func_417()
{
	if (network_does_network_id_exist(Local_16.f_503) && network_does_network_id_exist(Local_16.f_503.f_1))
	{
		return true;
	}
	if (func_468(&Local_1444, &vVar0))
	{
		if (!network_does_network_id_exist(Local_16.f_503))
		{
			if (func_729(&(Local_16.f_503), func_414(Local_1444.f_50), vVar0, 1, 0))
			{
				Local_1444.f_260 = net_to_obj(Local_16.f_503);
				_set_entity_coords_and_heading(Local_1444.f_260, vVar0, (vVar0.f_3 - 180f), true, false, true);
				freeze_entity_position(Local_1444.f_260, true);
				vVar4 = { get_entity_coords(Local_1444.f_260, true, false) };
			}
		}
		else if (!network_does_network_id_exist(Local_16.f_503.f_1))
		{
			if (func_729(&(Local_16.f_503.f_1), func_413(Local_1444.f_50), vVar0, 1, 0))
			{
				Local_1444.f_260.f_1 = net_to_obj(Local_16.f_503.f_1);
			}
		}
	}
	return false;
}

bool func_418()
{
	if (network_does_network_id_exist(Local_16.f_11))
	{
		return true;
	}
	if (Local_1444.f_265)
	{
		return false;
	}
	if (!func_468(&Local_1444, &Var0))
	{
		return false;
	}
	if (!func_730(&(Local_16.f_11), func_415(Local_1444.f_50), Var0, Var0.f_3, 1, 0, 1, 1, 1))
	{
		return false;
	}
	Local_1444.f_265 = 1;
	iVar4 = net_to_ped(Local_16.f_11);
	set_blocking_of_non_temporary_events(iVar4, true);
	func_731(iVar4, 986272521, -1);
	_set_ped_quality(iVar4, 2);
	switch (Local_1444.f_50)
	{
		case -809127215:
			set_animal_tuning_bool_param(iVar4, 20, false);
			set_animal_tuning_float_param(iVar4, 74, 1f);
			break;
		case 1706859953:
			set_animal_tuning_float_param(iVar4, 73, 1f);
			break;
		case -53531786:
			set_animal_tuning_float_param(iVar4, 74, 1f);
			break;
		case 326175668:
			set_animal_tuning_float_param(iVar4, 74, 1f);
			break;
		case -920598405:
			vVar5 = { get_offset_from_entity_in_world_coords(iVar4, 0f, 0.25f, 0f) };
			_set_entity_coords_and_heading(iVar4, vVar5, Var0.f_3, true, false, true);
			set_animal_tuning_float_param(iVar4, 74, 1f);
			break;
	}
	if (!get_animal_tuning_bool_param(iVar4, 34))
	{
		set_animal_tuning_bool_param(iVar4, 34, true);
	}
	set_ped_combat_attributes(iVar4, 5, true);
	set_ped_combat_attributes(iVar4, 17, false);
	set_ped_combat_movement(iVar4, 2);
	set_ped_config_flag(iVar4, 378, false);
	set_ped_config_flag(iVar4, 263, true);
	func_732(iVar4, 4000);
	Local_16.f_11.f_16 = 1f;
	set_ped_can_be_targetted(iVar4, false);
	_0xae6004120c18df97(iVar4, 0, 0);
	_0xae6004120c18df97(iVar4, 2, 0);
	_0xae6004120c18df97(iVar4, 3, 0);
	_0xae6004120c18df97(iVar4, 1, 0);
	_0xae6004120c18df97(iVar4, 10, 0);
	set_ped_config_flag(iVar4, 529, true);
	set_animal_tuning_bool_param(iVar4, 76, true);
	_0xb2d15d3551fe4fae(iVar4);
	set_ped_config_flag(iVar4, 297, false);
	set_ped_config_flag(iVar4, 301, true);
	set_ped_config_flag(iVar4, 583, false);
	if (func_733(Local_1444.f_50) != 0)
	{
		_set_ped_body_component(iVar4, func_733(Local_1444.f_50));
		_update_ped_variation(iVar4, false, true, true, true, false);
	}
	if (_0x5594afe9de0c01b7(iVar4))
	{
		set_animal_tuning_float_param(iVar4, 146, 5f);
	}
	return true;
}

bool func_419()
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_464(iVar0, &Local_1444, &Var2))
		{
			if (Var2.f_4 == 1702035859)
			{
				if (has_model_loaded(Var2.f_5))
				{
					if (!network_does_network_id_exist(&(Local_16.f_497[iVar0])))
					{
						if (Local_1444.f_265)
						{
							return false;
						}
						if (!func_730(Local_16.f_497[iVar0], Var2.f_5, Var2, Var2.f_3, 1, 0, 1, 1, 1))
						{
							return false;
						}
						Local_1444.f_265 = 1;
						func_734(net_to_ped(&(Local_16.f_497[iVar0])), 0);
						_0x18ff3110cf47115d(net_to_ped(&(Local_16.f_497[iVar0])), 0, false);
						_0x18ff3110cf47115d(net_to_ped(&(Local_16.f_497[iVar0])), 1, false);
						_0x18ff3110cf47115d(net_to_ped(&(Local_16.f_497[iVar0])), 2, false);
						_0x18ff3110cf47115d(net_to_ped(&(Local_16.f_497[iVar0])), 3, false);
						_0x18ff3110cf47115d(net_to_ped(&(Local_16.f_497[iVar0])), 7, false);
					}
					else
					{
						iVar1 = 1;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_420()
{
	iVar1 = func_735();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		Var2 = { func_736(iVar0) };
		if (Local_1444.f_265)
		{
			return false;
		}
		if (!func_737(iVar0, Var2.f_1, Var2.f_4, 0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_421(var uParam0)
{
	return func_384(*uParam0, 2);
}

int func_422(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

void func_423(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_424(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_425(int iParam0, int iParam1)
{
	Local_2193.f_1329[iParam0] = &Local_2193.f_1329[iParam0] + 1;
	if (&Local_2193.f_1329[iParam0] >= iParam1)
	{
		Local_2193.f_1329[iParam0] = 0;
		return true;
	}
	return false;
}

int func_426(int iParam0)
{
	if (Local_2193.f_9 == -785841056)
	{
		iVar0 = Local_2193.f_6;
		if (!_0xd6f6acf4392187fb(iVar0))
		{
			return 1;
		}
		iVar1 = _0x4be6c13a45cca8ec(iVar0);
		if (!network_is_player_active(iVar1))
		{
			return 1;
		}
	}
	iVar2 = func_192(2);
	if (iVar2 < Local_2193.f_1275)
	{
		return 3;
	}
	if (iParam0 > 0 && iVar2 < iParam0)
	{
		return 3;
	}
	if (Local_2193.f_1274 > 1 && func_429(2) < Local_2193.f_1274)
	{
		return 2;
	}
	return 0;
}

void func_427(int iParam0)
{
	if (Local_1950.f_12 != iParam0)
	{
		Local_1950.f_12 = iParam0;
	}
}

void func_428()
{
}

int func_429(int iParam0)
{
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		iVar2 = int_to_participantindex(iVar4);
		if (network_is_participant_active(iVar2) && &Local_2000[iVar4] >= iParam0)
		{
			iVar3 = network_get_player_index(iVar2);
			if (network_is_player_active(iVar3))
			{
				iVar1 = _0x901e0dc25080c8b9(iVar3);
				if (((!_0xd6f6acf4392187fb(iVar1) || !_0x0f99f6436528a089(iVar1)) || _0x149a2751ab66ac02(iVar1) <= 1) || _0x424b17a7dc5c90bc(iVar3))
				{
					iVar0++;
				}
			}
		}
		iVar4++;
	}
	return iVar0;
}

void func_430(int iParam0)
{
	if (Local_1950.f_11 != iParam0)
	{
		Local_1950.f_11 = iParam0;
	}
}

void func_431()
{
	switch (Local_16.f_10)
	{
		case 0:
			func_738(1);
			break;
		case 1:
			if (func_739(4))
			{
				func_738(3);
			}
			break;
		case 2:
			if (is_string_null_or_empty(func_465(func_740())))
			{
				vVar1 = { *Local_1444.f_20[Local_16.f_9] };
			}
			else
			{
				sVar0 = func_465(func_740());
				if ((get_is_waypoint_recording_loaded(sVar0) && waypoint_recording_get_num_points(sVar0, &iVar7)) && waypoint_recording_get_coord(sVar0, (iVar7 - 1), &vVar4))
				{
					vVar1 = { vVar4 };
				}
			}
			if (func_741(func_471(), vVar1, 3f, 1, 1))
			{
				func_738(3);
			}
			if (Local_16.f_9 == 4)
			{
				if (!func_162(&(Local_16.f_549)))
				{
					func_205(&(Local_16.f_549));
				}
				else if (func_190(&(Local_16.f_549)) > 6000)
				{
					func_738(4);
				}
			}
			break;
		case 3:
			if (Local_16.f_2 >= func_742(Local_1444.f_50, Local_16.f_9) && Local_16.f_3 <= 0)
			{
				func_743();
				func_738(2);
			}
			break;
		case 4:
			if (((_is_anim_scene_finished(Local_1444.f_499, false) || _0xf94692eb9dc15d74(Local_1444.f_499, 0)) || _0x34a0671be613d3d0(Local_1444.f_499)) || has_anim_event_fired(func_471(), 209118325))
			{
				func_738(5);
			}
			break;
	}
}

void func_432()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (network_does_network_id_exist(&(Local_16.f_505[iVar0])))
		{
			if (func_162(&(Local_16.f_505[iVar0]->f_2)))
			{
				if (func_190(&(Local_16.f_505[iVar0]->f_2)) > 5000)
				{
					Local_16.f_505[iVar0] = 0;
					func_302(&(Local_16.f_505[iVar0]->f_2));
				}
			}
		}
		if (network_is_player_active(Local_16.f_505[iVar0]->f_1) && network_is_player_a_participant(Local_16.f_505[iVar0]->f_1))
		{
			if (func_162(&(Local_16.f_505[iVar0]->f_5)))
			{
				if (func_190(&(Local_16.f_505[iVar0]->f_5)) > 5000)
				{
					Local_16.f_505[iVar0]->f_1 = 255;
					func_302(&(Local_16.f_505[iVar0]->f_5));
				}
			}
		}
		iVar0++;
	}
}

void func_433()
{
	iVar12 = func_744(&(Local_1444.f_51), get_entity_coords(func_471(), true, false), &fVar0, &uVar2, 1, 0, -1, 0, -1082130432);
	iVar13 = func_745(func_471(), &fVar1, 1, 1);
	if (Local_16.f_11.f_1 > 2 && Local_16.f_11.f_1 < 7)
	{
		if (fVar1 < fVar0)
		{
			Local_16.f_11.f_3 = iVar13;
			Local_16.f_11.f_2 = 0;
			bVar3 = false;
		}
		else
		{
			Local_16.f_11.f_2 = ped_to_net(iVar12);
			Local_16.f_11.f_3 = 255;
			bVar3 = true;
		}
	}
	if (func_739(64))
	{
		func_205(&(Local_16.f_11.f_4));
		Local_16.f_11.f_17 = 0f;
		if (_get_entity_health_float(func_471()) < Local_16.f_11.f_16)
		{
			Local_16.f_11.f_16 = _get_entity_health_float(func_471());
		}
		if (!func_630(64))
		{
			func_439(64);
		}
	}
	else if (func_630(64))
	{
		func_746(64);
	}
	if (func_162(&(Local_16.f_11.f_4)))
	{
		if (func_190(&(Local_16.f_11.f_4)) > 8000)
		{
			func_747();
		}
	}
	if (Local_16.f_11.f_1 != 8)
	{
		if (Local_16.f_11.f_1 != 7)
		{
			if ((bVar3 && fVar0 < 7f) || (!bVar3 && fVar1 < 6f))
			{
				if (Local_16.f_11.f_1 > 2 && Local_16.f_11.f_1 < 7)
				{
					func_748(7);
				}
			}
		}
		else if (fVar0 > 8f && fVar1 > 7f)
		{
			func_748(3);
		}
	}
	switch (Local_16.f_11.f_1)
	{
		case 0:
			if (Local_16.f_10 == 1)
			{
				func_748(1);
			}
			break;
		case 1:
			if (has_object_been_broken(Local_1444.f_260.f_1))
			{
				func_748(2);
			}
			break;
		case 2:
			if (func_739(8))
			{
				func_748(3);
			}
			break;
		case 3:
			if (is_string_null_or_empty(func_465(func_740())))
			{
				vVar5 = { *Local_1444.f_20[Local_16.f_9] };
			}
			else
			{
				sVar4 = func_465(func_740());
				if ((get_is_waypoint_recording_loaded(sVar4) && waypoint_recording_get_num_points(sVar4, &iVar11)) && waypoint_recording_get_coord(sVar4, (iVar11 - 1), &vVar8))
				{
					vVar5 = { vVar8 };
				}
			}
			if (func_741(func_471(), vVar5, 3f, 1, 1))
			{
				if (func_749(Local_1444.f_50, Local_16.f_9))
				{
					func_748(5);
				}
				else
				{
					func_748(4);
				}
			}
			break;
		case 4:
			if (Local_16.f_10 == 2)
			{
				func_748(3);
			}
			break;
		case 5:
			if (Local_16.f_10 == 2)
			{
				func_748(3);
				Local_16.f_11.f_8 = 0;
				func_750(32);
			}
			if (func_739(32))
			{
				func_748(6);
				Local_16.f_11.f_8++;
				vVar14 = { func_751(Local_1444.f_50, Local_16.f_9, Local_16.f_11.f_8) };
				if (func_68(vVar14))
				{
					Local_16.f_11.f_8 = 0;
				}
				func_750(32);
			}
			break;
		case 6:
			if (Local_16.f_10 == 2)
			{
				func_748(3);
			}
			else if (func_162(&(Local_16.f_11.f_10)))
			{
				if (func_752(&(Local_16.f_11.f_10)) > IntToFloat(Local_16.f_11.f_9))
				{
					func_748(5);
					func_302(&(Local_16.f_11.f_10));
				}
			}
			else
			{
				func_205(&(Local_16.f_11.f_10));
				Local_16.f_11.f_9 = get_random_int_in_range(4, 6);
			}
			break;
		case 7:
			if (does_entity_exist(func_471()) && func_753(func_471(), 0))
			{
				if (func_754(func_471(), 0) || func_755(func_471(), -1578598439))
				{
					if (func_162(&(Local_16.f_11.f_13)))
					{
						if (func_190(&(Local_16.f_11.f_13)) > 8000)
						{
							bVar17 = true;
							if (Local_16.f_11.f_2 != 0 && network_does_network_id_exist(Local_16.f_11.f_2))
							{
								if (!func_756(Local_16.f_11.f_2))
								{
									bVar17 = false;
								}
							}
							if ((Local_16.f_11.f_3 != 255 && network_is_player_active(Local_16.f_11.f_3)) && network_is_player_a_participant(Local_16.f_11.f_3))
							{
								if (!func_757(Local_16.f_11.f_3))
								{
									bVar17 = false;
								}
							}
							if (bVar17)
							{
								func_302(&(Local_16.f_11.f_13));
								Local_16.f_11.f_2 = 0;
								Local_16.f_11.f_3 = 255;
								func_748(3);
							}
						}
					}
					else
					{
						func_205(&(Local_16.f_11.f_13));
					}
				}
			}
			break;
	}
	if (Local_16.f_10 == 4)
	{
		func_748(8);
	}
}

void func_434()
{
	if (Local_1444.f_342 != Local_16.f_9)
	{
		Local_1444.f_342 = Local_16.f_9;
		Local_1444.f_343 = func_758(Local_1444.f_342);
		func_759();
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if ((network_does_network_id_exist(&(Local_16.f_461[iVar0])) && func_760(iVar0, 1)) && !func_760(iVar0, 2))
		{
			bVar1 = true;
			iVar2 = func_761();
			if (iVar2 == -1)
			{
				return;
			}
			vVar3 = { get_entity_coords(net_to_ped(&(Local_16.f_461[iVar0])), true, false) };
			if (func_737(iVar2, vVar3, 0, 0))
			{
				_set_ped_on_mount(&(Local_1444.f_51[iVar2]), net_to_ped(&(Local_16.f_461[iVar0])), -1, true);
				Local_16.f_29[iVar2]->f_10 = iVar0;
				func_762(iVar0, 2);
				Local_16.f_29[iVar2]->f_2 = -214860659;
			}
		}
		iVar0++;
	}
	iVar6 = 0;
	while (iVar6 < 10)
	{
		if (func_763() && !bVar1)
		{
			if (!func_764(&(Local_1444.f_331[iVar6])))
			{
				if (Local_16.f_10 == 2)
				{
					Var7 = { func_765() };
				}
				else
				{
					iVar12 = get_random_int_in_range(0, Local_1444.f_343);
					Var7 = { func_766(iVar12, Local_1444.f_342) };
				}
				if (Var7 == -1)
				{
				}
				else
				{
					Local_1444.f_331[iVar6] = func_767(Var7.f_1, Var7);
				}
			}
			else
			{
				Var13 = { func_768(Local_1444.f_331[iVar6]) };
				if (Var13 == 2)
				{
					if (!func_769(Var13.f_4))
					{
						func_770(Var13.f_4);
						func_771(Var13.f_1);
					}
				}
			}
		}
		else
		{
			func_768(Local_1444.f_331[iVar6]);
		}
		iVar6++;
	}
}

void func_435()
{
	iVar1 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (func_438(&(Local_16.f_29[iVar0])))
		{
			if (Local_16.f_29[iVar0]->f_1 > 2 && Local_16.f_29[iVar0]->f_1 < 12)
			{
				func_772(iVar0, 12);
			}
		}
		else if (func_753(&(Local_1444.f_51[iVar0]), 67) && !_0x833f0053340ef413(&(Local_1444.f_51[iVar0])))
		{
			iVar1++;
			if (is_ped_on_mount(&(Local_1444.f_51[iVar0])))
			{
				iVar2++;
			}
			if (func_773(iVar0, 4))
			{
				func_774(iVar0, 4);
			}
		}
		else if (!func_773(iVar0, 4))
		{
			func_775(iVar0, 4);
		}
		switch (Local_16.f_29[iVar0]->f_1)
		{
			case 0:
				func_772(iVar0, 1);
				break;
			case 1:
				if (network_does_network_id_exist(&(Local_16.f_29[iVar0])))
				{
					if (Local_1444.f_262 == 1)
					{
						func_775(iVar0, 2);
					}
					func_772(iVar0, 2);
				}
				break;
			case 2:
				if (Local_16.f_29[iVar0]->f_2 == -85613452)
				{
					func_205(&(Local_16.f_29[iVar0]->f_4));
				}
				if (func_773(iVar0, 2))
				{
					func_772(iVar0, 3);
				}
				else if (Local_16.f_29[iVar0]->f_2 == 783016369)
				{
					func_772(iVar0, 4);
				}
				else
				{
					func_772(iVar0, 5);
				}
				break;
			case 3:
				if (func_739(16) || Local_1444.f_262 > 1)
				{
					if (!func_630(128))
					{
						func_439(128);
					}
					func_772(iVar0, 5);
				}
				break;
		}
		iVar0++;
	}
	Local_16.f_3 = iVar1;
	Local_16.f_4 = iVar2;
	if (Local_16.f_1 >= 0 && Local_16.f_1 < 20)
	{
		func_776(&(Local_1444.f_51[Local_16.f_1]), &fVar3, 0, 0);
		fVar4 = func_777(&(Local_1444.f_51[Local_16.f_1]), func_471(), 1, 1);
		if (Local_16.f_29[Local_16.f_1]->f_1 > 3 && Local_16.f_29[Local_16.f_1]->f_1 < 12)
		{
			if (func_773(Local_16.f_1, 8))
			{
				if (fVar3 < 195f || fVar4 < 195f)
				{
					func_774(Local_16.f_1, 8);
				}
			}
			else if (fVar3 > 200f && fVar4 > 200f)
			{
				func_775(Local_16.f_1, 8);
			}
			if (func_773(Local_16.f_1, 4) || func_773(Local_16.f_1, 8))
			{
				if (func_162(&(Local_16.f_29[Local_16.f_1]->f_7)))
				{
					if (func_190(&(Local_16.f_29[Local_16.f_1]->f_7)) > 8000)
					{
						func_302(&(Local_16.f_29[Local_16.f_1]->f_7));
						func_772(Local_16.f_1, 11);
					}
				}
				else
				{
					func_205(&(Local_16.f_29[Local_16.f_1]->f_7));
				}
			}
			else if (func_162(&(Local_16.f_29[Local_16.f_1]->f_7)))
			{
				func_302(&(Local_16.f_29[Local_16.f_1]->f_7));
			}
		}
		else if (func_162(&(Local_16.f_29[Local_16.f_1]->f_7)))
		{
			func_302(&(Local_16.f_29[Local_16.f_1]->f_7));
		}
		switch (Local_16.f_29[Local_16.f_1]->f_1)
		{
			case 4:
				if (Local_16.f_29[Local_16.f_1]->f_2 == 783016369)
				{
					if (fVar3 < (60f - 5f) || fVar4 < (60f - 5f))
					{
						func_772(Local_16.f_1, 5);
					}
				}
				else if (fVar3 < (60f - 5f) || fVar4 < (60f - 5f))
				{
					func_772(Local_16.f_1, 5);
				}
				break;
			case 5:
			case 6:
				if (Local_16.f_10 >= 2)
				{
					if (Local_16.f_29[Local_16.f_1]->f_2 == -85613452)
					{
						if (func_162(&(Local_16.f_29[Local_16.f_1]->f_4)))
						{
							if (func_190(&(Local_16.f_29[Local_16.f_1]->f_4)) > 10000)
							{
								func_772(Local_16.f_1, 8);
								func_205(&(Local_16.f_29[Local_16.f_1]->f_4));
							}
						}
						else
						{
							func_205(&(Local_16.f_29[Local_16.f_1]->f_4));
						}
					}
					if (Local_16.f_2 >= func_742(Local_1444.f_50, Local_16.f_9) && Local_16.f_3 <= 4)
					{
						func_439(4);
						func_772(Local_16.f_1, 7);
					}
					if (fVar3 > 60f && fVar4 > 60f)
					{
						func_772(Local_16.f_1, 4);
					}
					if (Local_16.f_29[Local_16.f_1]->f_1 == 5)
					{
						if (fVar4 > 60f && fVar3 < 15f)
						{
							func_772(Local_16.f_1, 6);
						}
					}
					else if (Local_16.f_29[Local_16.f_1]->f_1 == 6)
					{
						if (fVar3 > 20f)
						{
							func_772(Local_16.f_1, 5);
						}
					}
					if ((Local_16.f_29[Local_16.f_1]->f_2 == -214860659 && Local_16.f_29[Local_16.f_1]->f_10 >= 0) && Local_16.f_29[Local_16.f_1]->f_10 < 7)
					{
						iVar5 = Local_16.f_29[Local_16.f_1]->f_10;
						if (fVar4 < 9f)
						{
							if (func_162(&(Local_16.f_461[iVar5]->f_2)))
							{
								if (func_190(&(Local_16.f_461[iVar5]->f_2)) > 3000)
								{
									func_772(Local_16.f_1, 10);
									func_302(&(Local_16.f_461[iVar5]->f_2));
								}
							}
							else
							{
								func_205(&(Local_16.f_461[iVar5]->f_2));
							}
						}
						else if (fVar4 > 11f)
						{
							if (func_162(&(Local_16.f_461[iVar5]->f_2)))
							{
								func_302(&(Local_16.f_461[iVar5]->f_2));
							}
						}
					}
				}
				break;
			case 9:
				if (Local_16.f_10 >= 2)
				{
					if (fVar3 > 60f && fVar4 > 60f)
					{
						func_772(Local_16.f_1, 4);
					}
				}
				break;
			case 7:
				break;
			case 8:
				break;
			case 10:
				if (network_does_network_id_exist(&(Local_16.f_29[Local_16.f_1])) && !func_438(&(Local_16.f_29[Local_16.f_1])))
				{
					if ((Local_16.f_29[Local_16.f_1]->f_2 == -214860659 && Local_16.f_29[Local_16.f_1]->f_10 >= 0) && Local_16.f_29[Local_16.f_1]->f_10 < 7)
					{
						iVar5 = Local_16.f_29[Local_16.f_1]->f_10;
						if (func_755(&(Local_1444.f_252[iVar5]), 1041577989) && !func_760(iVar5, 4))
						{
							func_762(iVar5, 4);
						}
						if (!func_778(&(Local_1444.f_51[Local_16.f_1])) && func_755(&(Local_1444.f_252[iVar5]), -773337285))
						{
							Local_16.f_29[Local_16.f_1]->f_2 = -1125105727;
							func_772(Local_16.f_1, 5);
						}
					}
					else
					{
						func_772(Local_16.f_1, 5);
					}
				}
				break;
			case 11:
				break;
			case 12:
				if (Local_16.f_29[Local_16.f_1]->f_10 > -1 && Local_16.f_29[Local_16.f_1]->f_10 < 7)
				{
					iVar5 = Local_16.f_29[Local_16.f_1]->f_10;
					bVar6 = true;
				}
				if (func_779(Local_16.f_1, 1) && (!bVar6 || (bVar6 && func_779(Local_16.f_1, 2))))
				{
					Local_16.f_29[Local_16.f_1]->f_3 = 0;
					if (bVar6)
					{
						Local_16.f_461[iVar5]->f_1 = 0;
					}
					Local_16.f_29[Local_16.f_1]->f_2 = -1;
					Local_16.f_29[Local_16.f_1]->f_10 = -1;
					func_772(Local_16.f_1, 13);
				}
				break;
			case 13:
				if (!func_780(Local_16.f_1, 1) && !func_780(Local_16.f_1, 2))
				{
					if (func_162(&(Local_16.f_29[Local_16.f_1]->f_4)))
					{
						if (func_190(&(Local_16.f_29[Local_16.f_1]->f_4)) > 6000)
						{
							func_302(&(Local_16.f_29[Local_16.f_1]->f_4));
							func_772(Local_16.f_1, 0);
						}
					}
					else
					{
						func_205(&(Local_16.f_29[Local_16.f_1]->f_4));
					}
				}
				break;
		}
	}
	func_781();
}

void func_436()
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_782(iVar0))
		{
		}
		else if (func_783(iVar0))
		{
		}
		else
		{
			func_784(iVar0, 0);
		}
		iVar0++;
	}
}

void func_437()
{
	if (!Local_1444.f_273.f_52)
	{
		func_759();
		Local_1444.f_273.f_53 = -1;
		Local_16.f_559 = -1;
		Local_1444.f_273.f_52 = 1;
	}
	if (Local_1444.f_273.f_53 == -1)
	{
		Local_1444.f_273.f_53 = func_785();
		if (Local_1444.f_273.f_53 == -1)
		{
			return;
		}
		else
		{
			Local_16.f_559 = func_786();
			Local_16.f_559.f_1 = { func_787(Local_1444.f_273.f_53) };
			func_205(&(Local_1444.f_273.f_54));
		}
	}
	iVar0 = func_788();
	iVar1 = 0;
	if (iVar0 == 1)
	{
		iVar1 = 4;
	}
	else if (iVar0 == 2)
	{
		iVar1 = 3;
	}
	else if (iVar0 == 0)
	{
		if (func_190(&(Local_1444.f_273.f_54)) > 1000)
		{
			iVar1 = 4;
		}
	}
	if (iVar1 != 0)
	{
		func_789(Local_1444.f_273.f_53, iVar1);
		Local_1444.f_273.f_53 = -1;
	}
}

bool func_438(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return is_ped_injured(net_to_ped(iParam0));
	}
	return true;
}

void func_439(int iParam0)
{
	if (!func_78(Local_16, iParam0))
	{
		func_149(&Local_16, iParam0);
	}
}

int func_440()
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar1)))
		{
		}
		else if (func_790(iVar1))
		{
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_441(int iParam0)
{
	return func_78(Local_1444.f_47, iParam0);
}

void func_442(int iParam0)
{
	if (!func_78(Local_1444.f_47, iParam0))
	{
		func_149(&(Local_1444.f_47), iParam0);
	}
}

void func_443(bool bParam0)
{
	*bParam0 = 0;
}

void func_444()
{
	if (func_630(32))
	{
		func_791(Local_2193.f_13.f_211[0]->f_14);
		func_149(&(Local_1950.f_13), 256);
	}
}

void func_445(int iParam0, int iParam1)
{
	func_792(iParam0, iParam1);
}

int func_446()
{
	return 0;
}

bool func_447(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

int func_448(int iParam0)
{
	return 0;
}

bool func_449(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 1);
}

bool func_450(struct<2> Param0, bool bParam2)
{
	iVar0 = func_663(Param0);
	return (iVar0 == 5 || (iVar0 == 6 && bParam2));
}

bool func_451(struct<2> Param0)
{
	return func_663(Param0) == 7;
}

void func_452(int iParam0)
{
	if (!_network_is_player_index_valid(Global_1108365->f_34.f_353[iParam0]->f_1))
	{
		return;
	}
	if (!&Global_1108365->f_34.f_353[iParam0])
	{
		return;
	}
	if (!network_is_player_active(Global_1108365->f_34.f_353[iParam0]->f_1))
	{
		func_793(iParam0);
		return;
	}
	if (Global_1108365->f_34.f_353[iParam0]->f_5 != -1)
	{
		if ((Global_1296859->f_21 - Global_1108365->f_34.f_353[iParam0]->f_4) > Global_1108365->f_34.f_353[iParam0]->f_5)
		{
			func_793(iParam0);
		}
		return;
	}
	if (func_364(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		return;
	}
	if (!func_73(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		func_793(iParam0);
		return;
	}
	if (!func_364(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		func_793(iParam0);
		return;
	}
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iParam0]) != Global_1108365->f_34.f_353[iParam0]->f_1)
	{
		func_793(iParam0);
		return;
	}
}

struct<7> func_453(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

void func_454(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (&Global_1108365->f_34.f_353[iParam0])
	{
		func_452(iParam0);
	}
	if (!Global_1108365->f_34[iParam0]->f_6)
	{
		return;
	}
	if (!_network_is_player_index_valid(iVar0))
	{
		func_794(iParam0);
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		func_794(iParam0);
		return;
	}
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iParam0]) != iVar0)
	{
		func_794(iParam0);
		return;
	}
	if (_0x81fb74c83c2ed69f(iVar0))
	{
		func_795(iVar0, 0);
		return;
	}
	if ((*Global_1288736)[network_player_id_to_int()]->f_66)
	{
		func_795(iVar0, 0);
		return;
	}
	if ((*Global_1288736)[iParam0]->f_66)
	{
		func_795(iVar0, 0);
		return;
	}
	if (func_796(iParam0))
	{
		func_795(iVar0, 0);
		return;
	}
	if (get_time_difference(Global_1108365->f_34[iParam0]->f_7, get_network_time_accurate()) >= 600000)
	{
		func_795(iVar0, 0);
		return;
	}
}

void func_455(int iParam0)
{
	if (!func_797(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_456(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 10))
	{
		return;
	}
	if (Var0.f_4 != iVar2190)
	{
		return;
	}
	switch (Var0.f_5)
	{
		case 1:
			func_798(Var0.f_6, Var0.f_9);
			break;
	}
}

void func_457(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 6))
	{
		return;
	}
	if (Var0.f_1 == player_id())
	{
		switch (Var0.f_4)
		{
			case 5:
				if (Local_2193.f_9 != -785841056)
				{
					func_799();
				}
				break;
		}
	}
}

bool func_458(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_459(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

void func_460(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_461(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_462()
{
	iVar0 = get_player_index();
	if (_0xb16223cb7da965f0(iVar0))
	{
		_0xae637bb8ef017875(iVar0, 1);
	}
	if (_0x45ab66d02b601fa7(iVar0))
	{
		_0x64ff4bf9af59e139(iVar0, 1);
	}
	if (Local_2193.f_9 != -785841056)
	{
		if (func_513())
		{
			func_800();
		}
		if (func_801())
		{
			func_802();
		}
		if (_is_app_running(-1641598689) || _is_app_active(-1641598689))
		{
			_close_app_by_hash_immediate(-1641598689);
		}
		if (is_pause_menu_active())
		{
			set_frontend_active(false);
		}
		if ((does_entity_exist(Global_34) && !is_entity_dead(Global_34)) && _0xb655db7582aec805(Global_34))
		{
			func_526(Global_34, 0, 0);
		}
	}
	func_247();
	func_107();
	func_109();
	func_129(0, 1);
	func_130(1);
	func_270();
	func_248(iVar2191, 4);
}

void func_463()
{
	func_572();
	if (!func_441(16))
	{
		trigger_music_event("MP_OWC_END");
		func_442(16);
	}
}

bool func_464(int iParam0, var uParam1, var uParam2)
{
	if (func_372(&Var0))
	{
		uVar5 = Var0.f_1;
		Var0 = *uParam1;
		Var0.f_2 = 1488517152;
		_datafile_get_data_node_index(&(Var0.f_1), &Var0);
		Var0.f_1 = uVar5;
		Var0.f_3 = iParam0;
		Var0.f_2 = -1396689762;
		_datafile_get_data_node_index(&(Var0.f_1), &Var0);
		Var0.f_2 = -1395267836;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			if (!func_146(Var0, -332598258, uParam2, 0))
			{
			}
			if (!func_68(*uParam2))
			{
				if (!func_145(Var0, 382592596, &(uParam2->f_3), 0))
				{
				}
				iVar6 = -1;
				if (!func_40(Var0, -1675546834, &iVar6, 1))
				{
				}
				uParam2->f_4 = iVar6;
				if (uParam2->f_4 == 1702035859)
				{
					if (!func_803(Var0, 455615629, &(uParam2->f_5)))
					{
					}
				}
				else if (uParam2->f_4 == 81235508)
				{
					if (!func_804(Var0, 1338613333, &(uParam2->f_6)))
					{
					}
				}
				return true;
			}
		}
	}
	return false;
}

char* func_465(int iParam0)
{
	switch (Local_1444.f_50)
	{
		case -809127215:
			switch (iParam0)
			{
				case 1:
					return "protect_legendary_animal_BearRoute1";
				case 2:
					return "protect_legendary_animal_BearRoute2";
				case 3:
					return "protect_legendary_animal_BearRoute3";
				default:
					break;
			}
			break;
		case 1706859953:
			switch (iParam0)
			{
				case 1:
					return "protect_legendary_animal_ElkRoute1";
				case 2:
					return "protect_legendary_animal_ElkRoute2";
				case 3:
					return "protect_legendary_animal_ElkRoute3";
				default:
					break;
			}
			break;
		case -53531786:
			switch (iParam0)
			{
				case 1:
					return "protect_legendary_animal_CougarRoute1";
				case 2:
					return "protect_legendary_animal_CougarRoute2";
				case 3:
					return "protect_legendary_animal_CougarRoute3";
				default:
					break;
			}
			break;
		case 326175668:
			switch (iParam0)
			{
				case 1:
					return "protect_legendary_animal_WolfRoute1";
				case 2:
					return "protect_legendary_animal_WolfRoute2";
				case 3:
					return "protect_legendary_animal_WolfRoute3";
				default:
					break;
			}
			break;
		case -920598405:
			switch (iParam0)
			{
				case 1:
					return "protect_legendary_animal_AlligatorRoute1";
				case 2:
					return "protect_legendary_animal_AlligatorRoute2";
				case 3:
					return "protect_legendary_animal_AlligatorRoute3";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_466(int iParam0)
{
	switch (iParam0)
	{
		case -809127215:
			return "script@mp@Naturalist@PROTECT@Bear_Scene";
		case 1706859953:
			return "script@mp@Naturalist@PROTECT@Elk_Scene";
		case -53531786:
			return "script@mp@Naturalist@PROTECT@Cougar_Scene";
		case 326175668:
			return "script@mp@Naturalist@PROTECT@Wolf_Scene";
		case -920598405:
			return "script@mp@Naturalist@PROTECT@Alligator_Scene";
	}
	return "";
}

bool func_467(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	if (network_is_host_of_this_script())
	{
		if (!network_does_network_id_exist(*uParam2))
		{
			if (!_does_anim_scene_exist(*uParam1))
			{
				*uParam1 = _create_anim_scene(sParam0, iParam3, sParam4, true, true);
			}
			if (_does_anim_scene_exist(*uParam1))
			{
				if (!_network_has_control_of_anim_scene(*uParam1))
				{
					if (!_network_request_control_of_anim_scene(*uParam1))
					{
						return false;
					}
				}
				if (!_is_anim_scene_loaded(*uParam1, true, false))
				{
					if (!_is_anim_scene_loading(*uParam1, true))
					{
						load_anim_scene(*uParam1);
					}
					return false;
				}
				else
				{
					*uParam2 = _anim_scene_to_net(*uParam1);
				}
			}
			return false;
		}
	}
	if (!network_does_network_id_exist(*uParam2))
	{
		return false;
	}
	*uParam1 = _net_to_anim_scene(*uParam2);
	if (!_does_anim_scene_exist(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_468(var uParam0, var uParam1)
{
	if (func_372(&Var0))
	{
		uVar5 = Var0.f_1;
		Var0 = *uParam0;
		Var0.f_2 = 1488517152;
		_datafile_get_data_node_index(&(Var0.f_1), &Var0);
		Var0.f_1 = uVar5;
		Var0.f_3 = 0;
		Var0.f_2 = -1396689762;
		_datafile_get_data_node_index(&(Var0.f_1), &Var0);
		Var0.f_2 = 1312860593;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			if (!func_146(Var0, -332598258, uParam1, 0))
			{
			}
			if (!func_145(Var0, 382592596, &(uParam1->f_3), 0))
			{
			}
			return true;
		}
	}
	return false;
}

void func_469(var uParam0, vector3 vParam1, var uParam4)
{
	iVar0 = -1;
	func_805(uParam0, vParam1, uParam4, 4, iVar0, 0);
}

bool func_470()
{
	if ((does_entity_exist(Local_1444.f_260) && does_entity_exist(Local_1444.f_260.f_1)) && is_entity_attached_to_entity(Local_1444.f_260.f_1, Local_1444.f_260))
	{
		_0x543dfe14be720027(player_id(), Local_1444.f_260.f_1, 0);
		return true;
	}
	if (!does_entity_exist(Local_1444.f_260) && !does_entity_exist(Local_1444.f_260.f_1))
	{
		if (network_does_network_id_exist(Local_16.f_503))
		{
			Local_1444.f_260 = net_to_obj(Local_16.f_503);
		}
		if (!_0x083d497d57b7400f(Local_1444.f_260))
		{
			freeze_entity_position(Local_1444.f_260, true);
		}
		if (network_does_network_id_exist(Local_16.f_503.f_1))
		{
			Local_1444.f_260.f_1 = net_to_obj(Local_16.f_503.f_1);
		}
	}
	else if (!is_entity_attached_to_entity(Local_1444.f_260.f_1, Local_1444.f_260))
	{
		if (network_has_control_of_entity(Local_1444.f_260.f_1))
		{
			attach_entity_to_entity(Local_1444.f_260.f_1, Local_1444.f_260, 0, func_806(Local_1444.f_50), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			_0x581edbe56e8d62c9(Local_1444.f_260.f_1, 1);
			_0x4b436bac8cbe9b07(Local_1444.f_260.f_1, 1, 1);
		}
	}
	return false;
}

int func_471()
{
	return Local_1444.f_1;
}

void func_472()
{
	Local_1444.f_1 = net_to_ped(Local_16.f_11);
}

bool func_473()
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_464(iVar0, &Local_1444, &Var2))
		{
			if (Var2.f_4 == 1702035859)
			{
				if (has_model_loaded(Var2.f_5))
				{
					if (!does_entity_exist(Local_1444.f_36[iVar0]->f_1))
					{
						if (network_does_network_id_exist(&(Local_16.f_497[iVar0])))
						{
							Local_1444.f_36[iVar0]->f_1 = net_to_ped(&(Local_16.f_497[iVar0]));
						}
					}
					else if (!func_807(Local_1444.f_36[iVar0]->f_1, 1) && network_has_control_of_entity(Local_1444.f_36[iVar0]->f_1))
					{
						func_526(Local_1444.f_36[iVar0]->f_1, 1, 1);
						iVar1 = 0;
					}
					else
					{
						iVar1 = 1;
					}
				}
			}
			else if (Var2.f_4 == 81235508)
			{
				if (_has_propset_loaded_2(Var2.f_6))
				{
					if (!_does_propset_exist(&(Local_1444.f_36[iVar0])))
					{
						Local_1444.f_36[iVar0] = _create_propset_2(Var2.f_6, Var2, 1, Var2.f_3, 1200f, false, true);
					}
					else if (!_0xf42db680a8b2a4d9(&(Local_1444.f_36[iVar0])))
					{
						iVar1 = 0;
					}
					if (_does_propset_exist(&(Local_1444.f_36[iVar0])))
					{
						iVar1 = 1;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_474()
{
	iVar4 = get_ped_relationship_group_hash(player_ped_id());
	StringCopy(&cVar0, "FME_PLA_REL_ENEMIES", 32);
	if (!add_relationship_group(&cVar0, &(Local_1444.f_379)))
	{
		return false;
	}
	StringCopy(&cVar0, "FME_PLA_REL_ANIMAL", 32);
	if (!add_relationship_group(&cVar0, &(Local_1444.f_378)))
	{
		return false;
	}
	func_808(6, Local_1444.f_379, iVar4);
	func_808(6, Local_1444.f_379, Local_1444.f_378);
	set_relationship_between_groups(6, Local_1444.f_378, iVar4);
	set_relationship_between_groups(6, Local_1444.f_378, Local_1444.f_379);
	set_relationship_between_groups(6, Local_1444.f_379, Local_1444.f_378);
	set_relationship_between_groups(6, iVar4, Local_1444.f_378);
	return true;
}

void func_475()
{
	if (Local_2193.f_9 != -785841056)
	{
		return;
	}
	if (&Local_2000[Local_2193.f_1333] != 1)
	{
		func_352();
		return;
	}
	if ((_0xd6f6acf4392187fb(Local_2193.f_6) && _0x9be7dcb22d32ccbe(Local_2193.f_6, player_id())) && !func_809())
	{
		if (func_810(iVar2191, Local_2193.f_7, Local_2193.f_3))
		{
			func_811(1);
			func_352();
		}
		return;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar0) || (_0x149a2751ab66ac02(iVar0) == 1 && !func_812()))
	{
		return;
	}
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		if (((!func_65(1) && func_813(iVar2191)) && !func_814()) && func_499(Local_2193.f_1290))
		{
			Local_2193.f_1406 = func_815(iVar2191, Local_2193.f_1, Local_2193.f_3, Local_2193.f_7);
			if (_databinding_is_data_id_valid(Local_2193.f_1406))
			{
				if (func_816())
				{
					Local_2193.f_1290 = func_500("FME_HELP_RULES_POSSE_VERSUS");
				}
				func_817(iVar2191, Local_2193.f_7);
				func_173(1);
			}
		}
	}
	else
	{
		iVar1 = _0x4be6c13a45cca8ec(iVar0);
		if (((iVar1 != 255 && network_is_player_active(iVar1)) && func_818(iVar2191, 64, iVar1)) && func_810(iVar2191, Local_2193.f_7, Local_2193.f_3))
		{
			if (func_819(0))
			{
				func_821(func_820(), 0);
			}
			func_811(1);
			func_352();
		}
	}
}

void func_476()
{
	if (!func_159(Local_2193.f_1333))
	{
		return;
	}
	if (!func_68(Local_2193.f_1397))
	{
		if (!_0x6bfbdc46139c45ab(Local_2193.f_1397))
		{
			request_collision_at_coord(Local_2193.f_1397);
		}
		fVar0 = Local_2193.f_1295;
		if (fVar0 > 512f)
		{
			fVar0 = (512f - 1f);
		}
		_0xcf213a5fc3abfc08(Local_2193.f_1397, Local_2193.f_1397.f_1, fVar0);
	}
}

void func_477()
{
	if (func_159(Local_2193.f_1333) && (Local_2193.f_1388 == -1477057661 || !func_822()))
	{
		func_823();
	}
	else
	{
		func_110();
	}
}

void func_478()
{
	if (func_159(Local_2193.f_1333))
	{
		func_824();
	}
	else
	{
		func_111();
	}
}

void func_479()
{
	if (!func_159(Local_2193.f_1333) || !func_825(uVar2191))
	{
		func_109();
		return;
	}
	else
	{
		func_826();
	}
	if ((func_137(1) && func_827(255)) && func_828(255))
	{
		vVar39 = { Local_2193.f_1397 };
		if (func_68(vVar39))
		{
			vVar39 = { Global_35 };
		}
		if (Local_2193.f_10 < 4)
		{
			func_505(&vVar45, &uVar48, &iVar49);
			if ((func_137(1073741824) && !func_68(vVar45)) && !iVar49 == -1)
			{
				if ((!func_137(134217728) && !func_506(Local_2193.f_1, Local_2193.f_3)) && func_507(Local_2193.f_1, Local_2193.f_3))
				{
					func_508(1, 0);
				}
				func_829(vVar45, uVar48, 0f, 0f, 0f, 0);
				return;
			}
			else
			{
				fVar42 = Local_2193.f_1294;
				func_830(&uVar43, &uVar44, fVar42);
			}
		}
		else
		{
			fVar42 = Local_2193.f_1295;
			func_831(Local_2193.f_1, Local_2193.f_2, &uVar43, &uVar44, fVar42);
		}
		fVar42 = (fVar42 - 20f);
		func_832(Local_2193.f_1, Local_2193.f_3, vVar39, uVar43, uVar44, fVar42, &uVar0, &uVar30);
		func_833(fVar42, &uVar0, &uVar30);
		func_834(&uVar0, &(Local_2193.f_1393), &(Local_2193.f_1394));
		func_835(&uVar0, &uVar30);
	}
}

void func_480()
{
	switch (Local_2193.f_1388)
	{
		case -1125105727:
		case -669315698:
			func_836(0);
			break;
		case -1477057661:
		case -1323241207:
			func_837();
			func_836(1);
			break;
		case -1130541276:
		case 1839318411:
			func_838(1);
			break;
		case 142723591:
		case 1229355466:
			func_839();
			break;
		case -1893775542:
		case -1869754940:
			func_840();
			break;
	}
}

void func_481()
{
}

void func_482()
{
	iVar0 = func_177();
	_0xf45e46deecf7df6e(iVar0, 0, 0, -1, -1);
	if (iVar0 & 2016 == 2016)
	{
		_0xc0258742b034dfaf(0f);
		_0xdb48e99f8e064e56(0f);
	}
	if (iVar0 & 8192 == 8192)
	{
		_0xba0980b5c0a11924(0f);
		_0x28cb6391acedd9db(0f);
	}
	set_vehicle_density_multiplier_this_frame(0f);
}

void func_483()
{
	if (!func_159(Local_2193.f_1333))
	{
		return;
	}
	if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
	{
		_0x78030c7867d8b9b6(Global_34, 0);
		set_ped_drops_weapons_when_dead(Global_34, false);
	}
}

void func_484()
{
	if (!func_159(Local_2193.f_1333))
	{
		return;
	}
	if (Local_2193.f_1391 < 0)
	{
		Local_2193.f_1391 = 0;
		func_841(20f);
		return;
	}
	func_842(Local_2193.f_1391, 10f);
	Local_2193.f_1391++;
	if (Local_2193.f_1391 >= 32)
	{
		Local_2193.f_1391 = 0;
	}
}

void func_485()
{
}

bool func_486()
{
	return true;
}

void func_487(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	if ((func_843(uParam0, &bVar0) && func_844(uParam0)) && func_845(uParam0, -1700692449, &bVar0))
	{
		func_846(uParam0, iParam1, bParam2, iParam3, sParam4);
	}
	if (bVar0)
	{
		func_254(uParam0, 1);
	}
}

void func_488(var uParam0)
{
	if (uParam0->f_5 < 0)
	{
		uParam0->f_5 = get_sound_id();
		_0xce5d0ffe83939af1(uParam0->f_5, func_847(), func_848(), 1);
	}
}

int func_489(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (Local_2193.f_1289 == 0 || !func_294(Local_2193.f_1289))
	{
		func_357();
	}
	if (iParam0 >= 5 && (func_294(Local_2193.f_1288) && !bParam3))
	{
		func_357();
		return 0;
	}
	if (Local_2193.f_1267 == 5 && iParam0 >= 5)
	{
		return 0;
	}
	if (Local_2193.f_1267 != iParam0 || iParam0 == 1)
	{
		if (is_string_null_or_empty(sParam1))
		{
			func_357();
		}
		else
		{
			Local_2193.f_1289 = func_849(sParam1, iParam2, 0, 0, 1);
		}
		Local_2193.f_1267 = iParam0;
		return 1;
	}
	return 0;
}

bool func_490(int iParam0)
{
	return !func_62(iParam0);
}

float func_491(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_492(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return false;
		default:
			break;
	}
	return true;
}

char* func_493()
{
	return "";
}

char* func_494()
{
	return "";
}

void func_495(var uParam0)
{
	if (Local_2193.f_9 == -785841056)
	{
		if (Local_2193.f_1294 <= 0f)
		{
			*uParam0 = _blip_add_for_coord(408396114, Local_2193.f_1397);
		}
		else
		{
			*uParam0 = _blip_add_for_radius(-1282792512, Local_2193.f_1397, Local_2193.f_1294);
			_blip_set_modifier(*uParam0, 453264060);
		}
	}
	else if (Local_2193.f_1294 <= 0f)
	{
		*uParam0 = _blip_add_for_coord(618936128, Local_2193.f_1397);
	}
	else
	{
		*uParam0 = _blip_add_for_radius(-47499173, Local_2193.f_1397, Local_2193.f_1294);
		_blip_set_modifier(*uParam0, 453264060);
	}
	set_blip_sprite(*uParam0, -570710357, true);
	set_blip_name_from_text_file(*uParam0, &(Local_2193.f_1339));
}

struct<2> func_496(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_497()
{
	return 2147483647;
}

bool func_498()
{
	return true;
}

bool func_499(int iParam0)
{
	if (func_298())
	{
		return false;
	}
	else if (func_294(iParam0))
	{
		return false;
	}
	else if (func_294(Local_2193.f_1288))
	{
		return false;
	}
	else if (func_62(255))
	{
		return false;
	}
	else if (!is_screen_faded_in())
	{
		return false;
	}
	return true;
}

var func_500(char* sParam0)
{
	if (is_entity_dead(Global_34))
	{
		return 0;
	}
	return func_850(sParam0, 10000, 0, 0, 0, 1);
}

struct<8> func_501(int iParam0, var uParam1)
{
	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, 1777884256, &Var0, 0);
	}
	return Var0;
}

struct<8> func_502(int iParam0, var uParam1)
{
	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, -1996633489, &Var0, 0);
	}
	return Var0;
}

char* func_503()
{
	return "";
}

void func_504(bool bParam0, int iParam1, bool bParam2)
{
	if (func_851())
	{
		if (func_852(255))
		{
			if (!func_170(39, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_853(Global_1893587->f_2) && func_854(Global_1893587->f_2))
		{
			func_855(Global_1893587->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1893587->f_7 = iParam1;
				func_856(16);
			}
		}
		else if (func_853(Global_1893587->f_2) && !func_857(Global_1893587->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!is_screen_faded_out())
		{
		}
		Global_1893587->f_7 = 0;
		func_858(16);
		func_859(bParam2);
		if (bVar0)
		{
			func_858(1);
		}
	}
}

void func_505(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = 0f;
	*iParam2 = -1;
	*iParam2 = func_860(Local_2193.f_1, Local_2193.f_2);
	if (*iParam2 == -1)
	{
	}
	else if (*iParam2 > Local_2193.f_1277)
	{
	}
	else if (*iParam2 < (Local_2193.f_1277 - 1))
	{
	}
	if (!*iParam2 == -1)
	{
		*uParam0 = { func_861(Local_2193.f_1, Local_2193.f_2, Local_2193.f_1420) };
		*uParam1 = func_862(Local_2193.f_1, Local_2193.f_2, Local_2193.f_1420);
	}
}

bool func_506(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (((func_36(&Var1, iParam0) && func_37(&Var1)) && func_38(&Var1, uParam1)) && func_863(&Var1))
	{
		func_42(Var1, 1509074216, &iVar0, 0);
	}
	return iVar0;
}

bool func_507(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (((func_36(&Var1, iParam0) && func_37(&Var1)) && func_38(&Var1, uParam1)) && func_863(&Var1))
	{
		func_42(Var1, 2121037717, &iVar0, 0);
	}
	return iVar0;
}

void func_508(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_172(66);
		if (bParam1)
		{
			func_172(69);
		}
	}
	else
	{
		func_171(66);
		func_171(69);
	}
}

void func_509(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_864(vParam0, uParam3))
	{
		func_510(1, bParam4);
	}
}

void func_510(bool bParam0, bool bParam1)
{
	if (func_865(255) == 4)
	{
		return;
	}
	if (func_68(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_171(0);
	}
	else
	{
		if (bParam1)
		{
			func_362(0, 0, 0, 1);
		}
		func_172(0);
		func_866(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_867(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_868(Global_1102219->f_3849, 36);
	func_869(Global_1102219->f_3888, 36);
}

void func_511(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_512()
{
	func_333(&(Local_2193.f_1297), 1, 1);
}

bool func_513()
{
	return Global_1896738->f_382;
}

int func_514(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_634(iVar0, 2))
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
				func_635(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_515(int iParam0, bool bParam1)
{
	if (bParam1 && !func_328(iParam0))
	{
		return false;
	}
	return !func_634(iParam0, 4);
}

bool func_516(int iParam0, bool bParam1)
{
	if (bParam1 && !func_328(iParam0))
	{
		return false;
	}
	iVar0 = func_636(iParam0);
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

bool func_517(int iParam0)
{
	if (func_623(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

void func_518(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_328(iParam0))
	{
		return;
	}
	iVar0 = func_636(iParam0);
	func_638(iVar0, bParam1);
}

float func_519()
{
	return Local_2193.f_1294;
}

char* func_520()
{
	return "MP_OutofAreaDirectional";
}

void func_521()
{
	if (func_162(&(Local_2193.f_1305)))
	{
		func_302(&(Local_2193.f_1305));
	}
}

bool func_522()
{
	fVar0 = func_491(Global_35, Local_2193.f_1400);
	if (fVar0 >= Local_2193.f_1294)
	{
		return true;
	}
	return false;
}

void func_523(int iParam0)
{
	if (!func_643(&Global_1903131, iParam0))
	{
		func_511(Global_1903131, iParam0);
	}
}

int func_524(var uParam0, char* sParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (func_870(uParam0, sParam1, &bVar0, bParam6, vParam2, fParam5, iParam10))
	{
		func_871(uParam0, sParam1, bParam7, bParam8, bParam9);
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (bVar0)
	{
		func_538(uParam0, 1, 1);
	}
	return iVar1;
}

void func_525()
{
	if (!func_872(64))
	{
		func_873(64);
	}
}

void func_526(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_34 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

int func_527()
{
	return 0;
}

bool func_528(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	if (_0xb881ca836cc4b6d4(&uParam0))
	{
		bVar0 = true;
	}
	if (_0xb881ca836cc4b6d4(&uParam4))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		_0xec1f85da51d3d6c4(player_ped_id(), &uParam0, &uParam4);
		return true;
	}
	return false;
}

struct<2> func_529(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_530(bool bParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_874(bParam0, iVar0);
		iVar0++;
	}
}

void func_531()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_875(iVar0);
		iVar0++;
	}
}

void func_532()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_876(iVar0);
		iVar0++;
	}
}

void func_533(bool bParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_877(iVar0, bParam0);
		iVar0++;
	}
}

void func_534()
{
	_0x9d746964e0cf2c5f(func_588(), func_878());
	_0x9d746964e0cf2c5f(func_879(), func_878());
	_0x9d746964e0cf2c5f(func_880(), func_878());
	_0x9d746964e0cf2c5f(func_881(), func_878());
	_0x9d746964e0cf2c5f(func_847(), func_848());
	_0x9d746964e0cf2c5f(func_882(), func_883());
}

void func_535(var uParam0)
{
	if (_uiflowblock_is_loaded(uParam0->f_3))
	{
		_uiflowblock_release(&(uParam0->f_3));
	}
	if (_uistatemachine_exists(1546991729))
	{
		_uistatemachine_destroy(1546991729);
	}
}

void func_536(int iParam0)
{
	if (Global_1903133->f_1 != iParam0)
	{
		Global_1903133->f_1 = iParam0;
	}
}

void func_537(int iParam0)
{
	Global_1903133 = iParam0;
}

void func_538(var uParam0, bool bParam1, bool bParam2)
{
	if (_uiflowblock_is_loaded(*uParam0))
	{
		_uiflowblock_release(uParam0);
	}
	if (_uistatemachine_exists(190275865))
	{
		_uistatemachine_destroy(190275865);
	}
	if (_databinding_is_data_id_valid(uParam0->f_2))
	{
		_databinding_remove_data_entry(uParam0->f_2);
		uParam0->f_2 = 0;
	}
	if (_databinding_is_data_id_valid(uParam0->f_3))
	{
		_databinding_write_data_bool(uParam0->f_3, false);
		_databinding_remove_data_entry(uParam0->f_3);
		uParam0->f_3 = 0;
	}
	if (_databinding_is_data_id_valid(uParam0->f_1))
	{
		_databinding_remove_data_entry(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	if (bParam2)
	{
		if (uParam0->f_4 >= 0)
		{
			if (!_0x84848e1c0fc67dbb(uParam0->f_4))
			{
				_0x3210bcb36af7621b(uParam0->f_4);
			}
			release_sound_id(uParam0->f_4);
			uParam0->f_4 = -1;
		}
		if (uParam0->f_5 >= 0)
		{
			if (!_0x84848e1c0fc67dbb(uParam0->f_5))
			{
				_0x3210bcb36af7621b(uParam0->f_5);
			}
			release_sound_id(uParam0->f_5);
			uParam0->f_5 = -1;
		}
	}
	if (bParam1)
	{
		if (animpostfx_is_running(func_520()))
		{
			_0xc5cb91d65852ed7e(func_520());
			_display_hud_component(-2124237476);
			_0x981c7d863980fa51();
		}
	}
}

void func_539()
{
	switch (Local_1444.f_50)
	{
		case -809127215:
			Local_1444.f_500[1] = _create_volume_box(-2204.27f, 706.45f, 123.35f, 0f, 0f, -33.75f, 18f, 7f, 5.25f);
			Local_1444.f_500[2] = _create_volume_box(-2189.5f, 739.78f, 123.36f, 0f, 0f, -59f, 18f, 10f, 7.5f);
			Local_1444.f_500[3] = _create_volume_box(-2195.5f, 715.18f, 123.355f, 0f, 0f, -113.5f, 4.5f, 7f, 5.5f);
			break;
		case 1706859953:
			break;
		case -53531786:
			break;
		case 326175668:
			break;
		case -920598405:
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (_does_volume_exist(&(Local_1444.f_500[iVar0])))
		{
			if (!_0x19c7567d2f2287d6(&(Local_1444.f_500[iVar0]), 7))
			{
			}
		}
		iVar0++;
	}
}

bool func_540()
{
	switch (Local_2193.f_1)
	{
		case 8:
		case 15:
		case 16:
		case 17:
			return true;
		default:
			break;
	}
	return false;
}

struct<8> func_541()
{
	return Var0;
}

char* func_542(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char[] func_543()
{
	StringCopy(&cVar1, "FME_PLA_SHARD_OBJECTIVE", 64);
	StringConCat(&cVar1, func_631(), 64);
	StringConCat(&cVar1, func_632(), 64);
	cVar0 = func_633(cVar1);
	cVar0 = _create_var_string(2, cVar0);
	return cVar0;
}

struct<8> func_544(int iParam0, var uParam1)
{
	StringCopy(&cVar0, "", 64);
	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, 1220434501, &cVar0, 0);
	}
	return cVar0;
}

char* func_545()
{
	return "";
}

char* func_546()
{
	return func_884();
}

char* func_547()
{
	return func_885();
}

var func_548(char* sParam0, char[4] cParam1, char* sParam2, char* sParam3, char* sParam4)
{
	return func_886(sParam0, cParam1, sParam2, func_292(), sParam4, sParam3, 0, 1, 1, 1);
}

var func_549(char* sParam0, char[4] cParam1, char* sParam2, char* sParam3)
{
	return func_887(sParam0, cParam1, func_292(), sParam3, sParam2, 0, 1, 1);
}

char* func_550(var uParam0, bool bParam1, bool bParam2)
{
	*bParam1 = 1;
	*bParam2 = 0;
	return "";
}

bool func_551()
{
	if (func_279() & 64 == 64)
	{
		return false;
	}
	return true;
}

bool func_552(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			return false;
		default:
			break;
	}
	return true;
}

bool func_553(bool bParam0, bool bParam1, int iParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*iParam2 = int_to_playerindex(iVar0);
		if (func_624(*iParam2, bParam0, bParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_554(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		if (iParam2 == -1)
		{
			return 1475463663;
		}
		else
		{
			return 636925055;
		}
	}
	if (!network_is_game_in_progress())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_364(func_373(0)) && func_672(func_373(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = is_bit_set(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if (Global_1071686->f_21416.f_1[iVar2]->f_5 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_5;
	}
	if (bParam3 && Global_1071686->f_21416.f_1[iVar2]->f_6 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_6;
	}
	if (iParam0 == player_id())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_888(iParam0);
			if (iVar6 == -1031763995 && _network_is_player_in_spectator_mode(iParam0))
			{
				return 1105014447;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_889(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_78(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_890(iParam0, 1);
	if (!bVar0)
	{
		if (func_891(iParam0, bParam1))
		{
			return func_889(iParam0);
		}
		else if (func_892(iParam0, bParam1))
		{
			if (func_587(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_888(iParam0);
	}
	else if (func_891(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_894(func_893(func_373(0)), 1) == 395262693)
		{
			return func_889(iParam0);
		}
		else
		{
			return func_889(iParam0);
		}
	}
	else if (func_892(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_555(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_895(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

void func_556(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

int func_557()
{
	return Global_1102219->f_26.f_11;
}

bool func_558()
{
	return Local_2193.f_1295 > 0f;
}

int func_559()
{
	return _blip_add_for_radius(-188007767, Local_2193.f_1397, Local_2193.f_1295);
}

bool func_560()
{
	fVar0 = func_491(Global_35, Local_2193.f_1397);
	if (fVar0 >= Local_2193.f_1295)
	{
		return true;
	}
	return false;
}

int func_561()
{
	return 10000;
}

int func_562(var uParam0, float fParam1, int iParam2, var uParam3, bool bParam4, float fParam5, float fParam6, int iParam7, float fParam8, float fParam9)
{
	if ((*uParam3 >= 0 && *uParam3 < 32) && uParam0->f_211[*uParam3]->f_14 != 255)
	{
		if (!network_is_player_active(uParam0->f_211[*uParam3]->f_14) || !network_is_player_a_participant(uParam0->f_211[*uParam3]->f_14))
		{
			func_896(uParam0, *uParam3);
		}
	}
	if (iParam2 == 255)
	{
		return 0;
	}
	iVar0 = *uParam3;
	if (((iVar0 < 0 || uParam0->f_211[iVar0]->f_14 != iParam2) || !network_is_player_active(uParam0->f_211[iVar0]->f_14)) || !network_is_player_a_participant(uParam0->f_211[iVar0]->f_14))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (uParam0->f_211[iVar1]->f_14 != 255)
			{
				if (!network_is_player_active(uParam0->f_211[iVar1]->f_14) || !network_is_player_a_participant(uParam0->f_211[iVar1]->f_14))
				{
					func_277(uParam0);
					func_896(uParam0, iVar1);
				}
			}
			if (uParam0->f_211[iVar1]->f_14 == iParam2)
			{
				func_277(uParam0);
				iVar0 = iVar1;
				Jump @336; //curOff = 286
			}
			else if (uParam0->f_211[iVar1]->f_14 == 255 && iVar0 == -1)
			{
				func_277(uParam0);
				iVar0 = iVar1;
			}
			iVar1++;
		}
	}
	if (iVar0 >= 0)
	{
		if (bParam4)
		{
			func_277(uParam0);
			func_896(uParam0, iVar0);
			*uParam3 = 0;
		}
		else
		{
			if ((uParam0->f_211[iVar0]->f_5 != fParam1 || uParam0->f_211[iVar0]->f_1 != fParam5) || uParam0->f_211[iVar0]->f_2 != fParam6)
			{
				func_276(uParam0);
			}
			uParam0->f_211[iVar0]->f_14 = iParam2;
			uParam0->f_211[iVar0]->f_5 = fParam1;
			uParam0->f_211[iVar0]->f_1 = fParam5;
			uParam0->f_211[iVar0]->f_2 = fParam6;
			uParam0->f_211[iVar0]->f_3 = fParam8;
			uParam0->f_211[iVar0]->f_4 = fParam9;
			uParam0->f_211[iVar0] = iParam7;
			*uParam3 = iVar0;
		}
	}
	return 1;
}

void func_563(var uParam0)
{
	_0x7e300b5b86ab1d1a(&(uParam0->f_211), uParam0->f_211, 23, 5, 2, 1, 3, 2, 0, 4, 2, 0, 0, 0, 0);
}

bool func_564()
{
	return true;
}

void func_565(int iParam0)
{
	if (Global_1071686->f_21952[iParam0]->f_5 != 0)
	{
		Global_1071686->f_21952[iParam0]->f_5 = 0;
		func_897(iParam0);
	}
}

var func_566(char* sParam0, int iParam1)
{
	return func_898(sParam0, iParam1, -2, 0, 0, 0, 1);
}

void func_567(int iParam0, int iParam1)
{
	if (Global_1071686->f_21952[iParam0]->f_5 != iParam1)
	{
		Global_1071686->f_21952[iParam0]->f_5 = iParam1;
		func_897(iParam0);
	}
}

void func_568()
{
	func_899(Local_16.f_10);
	switch (Local_1444.f_262)
	{
		case 0:
			break;
		case 1:
			func_900();
			if (get_relationship_between_groups(Local_1444.f_379, Local_1444.f_378) == 6)
			{
				set_relationship_between_groups(2, Local_1444.f_379, Local_1444.f_378);
			}
			if (network_has_control_of_entity(Local_1444.f_260))
			{
				if (has_object_been_broken(Local_1444.f_260.f_1))
				{
					if (_0x083d497d57b7400f(Local_1444.f_260))
					{
						freeze_entity_position(Local_1444.f_260, false);
					}
				}
				else if (!_0x083d497d57b7400f(Local_1444.f_260))
				{
					freeze_entity_position(Local_1444.f_260, true);
					if (func_468(&Local_1444, &Var8))
					{
						_set_entity_coords_and_heading(Local_1444.f_260, Var8, (Var8.f_3 - 180f), true, false, true);
					}
				}
			}
			if (!has_object_been_broken(Local_1444.f_260.f_1))
			{
				if (!func_739(2))
				{
					if (!does_blip_exist(Local_1444.f_264))
					{
						Local_1444.f_264 = _blip_add_for_radius(1247852480, *Local_1444.f_4[Local_16.f_9], 60f);
						set_blip_name_from_text_file(Local_1444.f_264, "FME_PLA_BLIP_OBJ_POACHER_CAMP");
					}
					if (func_741(Global_34, *Local_1444.f_4[Local_16.f_9], 60f, 1, 1))
					{
						if (does_blip_exist(Local_1444.f_264))
						{
							remove_blip(&(Local_1444.f_264));
						}
						func_901(2);
					}
					if (Local_2193.f_1267 != 13)
					{
						func_489(13, "FME_PLA_GO_TO_POACHERS_OBJECTIVE", -1, 0);
					}
					if (!func_441(2))
					{
						trigger_music_event("MC_SUSPENSE_HIGH");
						func_442(2);
					}
				}
				else
				{
					if (does_blip_exist(Local_1444.f_264))
					{
						remove_blip(&(Local_1444.f_264));
					}
					if (!does_blip_exist(Local_1444.f_263))
					{
						Local_1444.f_263 = _blip_add_for_entity(408396114, func_471());
					}
					if (Local_2193.f_1267 != 6)
					{
						StringCopy(&cVar0, "FME_PLA_SHOOT_CAGE_PADLOCK_OBJECTIVE", 64);
						StringConCat(&cVar0, func_631(), 64);
						StringConCat(&cVar0, func_632(), 64);
						func_489(6, func_633(cVar0), -1, 0);
					}
				}
			}
			else
			{
				if (!func_441(4))
				{
					trigger_music_event("MC_ATTACKING");
					func_442(4);
				}
				if (network_has_control_of_entity(Local_1444.f_260.f_1))
				{
					_0x581edbe56e8d62c9(Local_1444.f_260.f_1, 0);
				}
				if (does_entity_exist(Local_1444.f_260.f_1))
				{
					_0x9dae1380cc5c6451(player_id(), Local_1444.f_260.f_1);
				}
				if (!func_441(128))
				{
					func_566(func_902(), 1105014447);
					func_442(128);
				}
				if (does_blip_exist(Local_1444.f_264))
				{
					remove_blip(&(Local_1444.f_264));
				}
				if (does_blip_exist(Local_1444.f_263))
				{
					remove_blip(&(Local_1444.f_263));
				}
			}
			if (func_739(16))
			{
				if (!func_441(4))
				{
					trigger_music_event("MC_ATTACKING");
					func_442(4);
				}
			}
			break;
		case 2:
			func_900();
			if (Local_16.f_9 != 4)
			{
				if (!func_605(1, 255))
				{
					if (!does_blip_exist(Local_1444.f_264))
					{
						Local_1444.f_264 = _blip_add_for_coord(408396114, *Local_1444.f_4[3]);
						set_blip_sprite(Local_1444.f_264, 1904459580, false);
						_blip_set_modifier(Local_1444.f_264, -1886172663);
					}
					if (func_741(Global_34, *Local_1444.f_4[Local_16.f_9], 60f, 1, 1))
					{
						if (does_blip_exist(Local_1444.f_264))
						{
							remove_blip(&(Local_1444.f_264));
						}
						func_901(1);
					}
				}
				if (func_68(Local_1444.f_266) && Local_16.f_9 == 1)
				{
					Local_1444.f_266 = { get_entity_coords(func_471(), true, false) };
				}
				if (Local_2193.f_1267 != 12)
				{
					StringCopy(&cVar0, "FME_PLA_ESCORT_ANIMAL_OBJECTIVE", 64);
					StringConCat(&cVar0, func_631(), 64);
					StringConCat(&cVar0, func_632(), 64);
					func_489(12, &cVar0, -1, 0);
					func_903(3, -1);
				}
				if (!func_441(8))
				{
					trigger_music_event("MC_DEFENDING");
					func_442(8);
				}
			}
			else
			{
				func_489(0, "", -1, 0);
			}
			break;
		case 3:
			func_900();
			if (does_blip_exist(Local_1444.f_264))
			{
				remove_blip(&(Local_1444.f_264));
			}
			if (func_605(1, 255))
			{
				func_904(1);
			}
			if (get_relationship_between_groups(Local_1444.f_379, Local_1444.f_378) == 2)
			{
				set_relationship_between_groups(6, Local_1444.f_379, Local_1444.f_378);
			}
			if (Local_2193.f_1267 != 10)
			{
				StringCopy(&cVar0, "FME_PLA_ATTACKER_DEFENCE_OBJECTIVE", 64);
				StringConCat(&cVar0, func_631(), 64);
				StringConCat(&cVar0, func_632(), 64);
				func_489(10, &cVar0, -1, 0);
			}
			break;
		case 4:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (((_does_anim_scene_exist(Local_1444.f_499) && _network_has_control_of_anim_scene(Local_1444.f_499)) && _0xa2b1c7ef759a63ce() >= 1f) && func_905(128))
			{
				if (!_is_anim_scene_started(Local_1444.f_499, false))
				{
					sVar12 = func_906(Local_1444.f_50);
					if (!is_string_null_or_empty(sVar12))
					{
						set_anim_scene_entity(Local_1444.f_499, sVar12, func_471(), 0);
					}
					start_anim_scene(Local_1444.f_499);
					if (!func_441(16))
					{
						trigger_music_event("MP_OWC_END");
						func_442(16);
					}
				}
			}
			if (_is_anim_scene_started(Local_1444.f_499, false))
			{
				if (is_player_control_on(player_id()))
				{
					func_907(0, 2);
					task_dismount_animal(Global_34, 0, 0, 0, 0, 0);
				}
				hide_hud_and_radar_this_frame();
				func_908();
			}
			else if (!is_player_control_on(player_id()))
			{
				func_907(1, 2);
			}
			if (func_360() != 10)
			{
				func_361(10);
			}
			break;
		case 5:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			break;
	}
}

void func_569()
{
	func_909(Local_16.f_11.f_1);
	iVar5 = func_471();
	if (func_630(64))
	{
		if (func_605(64, 255))
		{
			func_904(64);
		}
	}
	if (func_162(&(Local_16.f_11.f_4)))
	{
		if (func_190(&(Local_16.f_11.f_4)) > 8000)
		{
			if ((does_entity_exist(func_471()) && func_753(func_471(), 0)) && network_has_control_of_entity(func_471()))
			{
				fVar7 = _get_entity_health_float(func_471());
				if (fVar7 < func_910())
				{
					fVar8 = (fVar7 + Local_16.f_11.f_17);
					fVar8 = func_911(fVar8, 0f, func_910());
					func_912(func_471(), fVar8, 0);
				}
			}
		}
	}
	if (!func_441(256) && Local_16.f_11.f_16 <= 0.25f)
	{
		func_566(func_913(), 1105014447);
		func_442(256);
	}
	if (func_914())
	{
		func_915();
	}
	switch (Local_1444.f_1.f_2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			if (does_entity_exist(func_471()) && func_753(func_471(), 0))
			{
				if (does_entity_exist(Local_1444.f_260) && !_0x083d497d57b7400f(Local_1444.f_260))
				{
					func_901(4);
					vVar9 = { get_offset_from_entity_in_world_coords(Local_1444.f_260, 0f, -1.5f, 0f) };
					if (!func_916(func_471(), Local_1444.f_260, 0))
					{
						if (func_917(Local_1444.f_50))
						{
							func_903(4, -1);
						}
						else
						{
							func_903(5, -1);
						}
						func_901(8);
					}
					if (network_has_control_of_entity(func_471()))
					{
						if (!func_755(func_471(), -1824940423))
						{
							task_go_to_coord_any_means(func_471(), vVar9, 1.5f, 0, false, 524419, -1f);
						}
					}
				}
			}
			break;
		case 3:
			if ((func_915() && !func_441(32)) && func_499(Local_2193.f_1290))
			{
				Local_2193.f_1290 = func_500(_create_var_string(2, func_918("FME_PLA_DESC_PREDATOR"), Local_1444.f_1.f_1));
				func_442(32);
			}
			if ((does_entity_exist(func_471()) && network_has_control_of_entity(func_471())) && func_753(func_471(), 0))
			{
				if (is_string_null_or_empty(func_465(func_740())))
				{
					if (!func_741(func_471(), *Local_1444.f_20[Local_16.f_9], 1f, 1, 1) && !func_755(func_471(), 713668775))
					{
						if (is_ped_using_any_scenario(func_471()))
						{
							_0xf1c03a5352243a30(func_471());
						}
						task_follow_nav_mesh_to_coord(func_471(), *Local_1444.f_20[Local_16.f_9], 1.5f, -1, 0.25f, 1179649, 40000f);
					}
				}
				else
				{
					sVar0 = func_465(func_740());
					if (get_is_waypoint_recording_loaded(sVar0))
					{
						if (waypoint_recording_get_num_points(sVar0, &iVar4))
						{
							if (waypoint_recording_get_coord(sVar0, (iVar4 - 1), &vVar1))
							{
								if (!func_741(func_471(), vVar1, 1f, 1, 1) && !func_755(func_471(), 658540077))
								{
									if (is_ped_using_any_scenario(func_471()))
									{
										_0xf1c03a5352243a30(func_471());
									}
									task_follow_waypoint_recording(func_471(), sVar0, 0, 67111948, -1, 0, 0, -1);
									_0x56076667e7c2dcd6(func_471(), Global_34);
								}
								else if (is_waypoint_playback_going_on_for_ped(func_471(), 0))
								{
									fVar6 = func_919(func_740());
									waypoint_playback_override_speed(func_471(), fVar6, 0, -1082130432, 0);
								}
							}
						}
					}
				}
			}
			break;
		case 4:
			if ((does_entity_exist(func_471()) && network_has_control_of_entity(func_471())) && func_753(func_471(), 0))
			{
				if (!is_ped_active_in_scenario(func_471(), 1) && !is_ped_using_any_scenario(func_471()))
				{
					task_start_scenario_at_position(func_471(), func_920(Local_1444.f_50), *Local_1444.f_20[Local_16.f_9], 0f, 0, true, false, 0, -1f, false);
				}
			}
			break;
		case 5:
			if ((does_entity_exist(iVar5) && network_has_control_of_entity(iVar5)) && func_753(iVar5, 0))
			{
				vVar12 = { func_751(Local_1444.f_50, Local_16.f_9, Local_16.f_11.f_8) };
				if (!func_741(iVar5, vVar12, 2f, 1, 1) && !func_755(iVar5, 713668775))
				{
					_0x06d26a96ca1bca75(iVar5, 3, 1f, 0);
					_0x06d26a96ca1bca75(iVar5, 2, 1f, 0);
					task_follow_nav_mesh_to_coord(iVar5, vVar12, 1.5f, -1, 0.25f, 1179648, 40000f);
				}
				if (func_741(iVar5, vVar12, 2f, 1, 1) && !func_754(iVar5, 0))
				{
					func_901(32);
					if (Local_16.f_11.f_2 != 0 && network_does_network_id_exist(Local_16.f_11.f_2))
					{
						iVar15 = net_to_ped(Local_16.f_11.f_2);
					}
					else if ((Local_16.f_11.f_3 != 255 && network_is_player_active(Local_16.f_11.f_3)) && network_is_player_a_participant(Local_16.f_11.f_3))
					{
						iVar15 = get_player_ped(Local_16.f_11.f_3);
					}
					if (does_entity_exist(iVar15))
					{
						if (!func_755(iVar5, 242628503))
						{
							open_sequence_task(&iVar16);
							func_921(0, iVar15, 0);
							task_combat_animal_warn(0, iVar15, 2);
							func_921(0, iVar15, -1);
							close_sequence_task(iVar16);
							task_perform_sequence(iVar5, iVar16);
							clear_sequence_task(&iVar16);
						}
					}
					else if (!func_755(iVar5, 923520851))
					{
						task_wander_in_area(iVar5, vVar12, 4f, 1077936128, 1086324736, 0);
					}
				}
			}
			break;
		case 6:
			break;
		case 7:
			if ((does_entity_exist(func_471()) && network_has_control_of_entity(func_471())) && func_753(func_471(), 0))
			{
				if (func_917(Local_1444.f_50))
				{
					if (!func_754(func_471(), 0))
					{
						if (Local_16.f_11.f_2 != 0 && network_does_network_id_exist(Local_16.f_11.f_2))
						{
							iVar17 = net_to_ped(Local_16.f_11.f_2);
						}
						else if ((Local_16.f_11.f_3 != 255 && network_is_player_active(Local_16.f_11.f_3)) && network_is_player_a_participant(Local_16.f_11.f_3))
						{
							iVar17 = get_player_ped(Local_16.f_11.f_3);
						}
						if (does_entity_exist(iVar17))
						{
							func_922(func_471(), get_entity_coords(iVar17, true, false), 3, 1, 0);
							task_combat_hated_targets_around_ped(func_471(), 6f, 0, 0);
						}
					}
				}
				else if (!func_754(func_471(), 0) && !func_755(func_471(), -1578598439))
				{
					if (Local_16.f_11.f_2 != 0 && network_does_network_id_exist(Local_16.f_11.f_2))
					{
						iVar18 = net_to_ped(Local_16.f_11.f_2);
					}
					else if ((Local_16.f_11.f_3 != 255 && network_is_player_active(Local_16.f_11.f_3)) && network_is_player_a_participant(Local_16.f_11.f_3))
					{
						iVar18 = get_player_ped(Local_16.f_11.f_3);
					}
					if (does_entity_exist(iVar18))
					{
						if (iVar18 == Global_34)
						{
						}
						func_922(func_471(), get_entity_coords(iVar18, true, false), 3, 1, 0);
						task_combat_animal_charge(func_471(), iVar18, 1, 1, 0, 0, 0);
					}
				}
			}
			break;
		case 8:
			if (!func_605(128, 255))
			{
				func_901(128);
			}
			break;
	}
	func_923();
}

void func_570()
{
	if ((Local_1444.f_49 >= 0 && Local_1444.f_49 < 20) && Local_16.f_29[Local_1444.f_49]->f_1 >= 2)
	{
		if (func_924(Local_1444.f_49))
		{
			if (func_773(Local_1444.f_49, 2))
			{
				if (!does_blip_exist(Local_1444.f_51[Local_1444.f_49]->f_1))
				{
					Local_1444.f_51[Local_1444.f_49]->f_1 = _blip_add_for_entity(831283580, &(Local_1444.f_51[Local_1444.f_49]));
					set_blip_name_from_text_file(Local_1444.f_51[Local_1444.f_49]->f_1, "FME_PLA_BLIP_POACHER");
					_blip_set_modifier(Local_1444.f_51[Local_1444.f_49]->f_1, -662251075);
				}
			}
			else if (!does_blip_exist(Local_1444.f_51[Local_1444.f_49]->f_1))
			{
				Local_1444.f_51[Local_1444.f_49]->f_1 = _blip_add_for_entity(831283580, &(Local_1444.f_51[Local_1444.f_49]));
				set_blip_name_from_text_file(Local_1444.f_51[Local_1444.f_49]->f_1, "FME_PLA_BLIP_POACHER");
				_blip_set_modifier(Local_1444.f_51[Local_1444.f_49]->f_1, -1034486097);
				func_925(Local_1444.f_49, 1);
			}
			if (func_630(128))
			{
				if (func_773(Local_1444.f_49, 2))
				{
					_set_blip_flash_style(Local_1444.f_51[Local_1444.f_49]->f_1, -662251075);
				}
				if (func_630(4) || func_926(Local_1444.f_49))
				{
					_set_blip_flash_style(Local_1444.f_51[Local_1444.f_49]->f_1, -1034486097);
					_set_blip_flash_style(Local_1444.f_51[Local_1444.f_49]->f_1, 1475371487);
					func_927(Local_1444.f_49, 1);
				}
				else if (func_928(Local_1444.f_49, 1))
				{
					_blip_set_modifier(Local_1444.f_51[Local_1444.f_49]->f_1, 1475371487);
				}
			}
		}
		else if (does_blip_exist(Local_1444.f_51[Local_1444.f_49]->f_1))
		{
			func_929(&(Local_1444.f_51[Local_1444.f_49]->f_1));
		}
		if (has_collision_loaded_around_entity(&(Local_1444.f_51[Local_1444.f_49])))
		{
			set_entity_load_collision_flag(&(Local_1444.f_51[Local_1444.f_49]), 0);
		}
	}
	func_930();
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (network_does_network_id_exist(&(Local_16.f_29[iVar0])))
		{
			if (!does_entity_exist(&(Local_1444.f_51[iVar0])))
			{
				Local_1444.f_51[iVar0] = net_to_ped(&(Local_16.f_29[iVar0]));
				StringCopy(&cVar4, "NAT007_POACHER", 64);
				sVar12 = func_931(iVar0);
				StringConCat(&cVar4, sVar12, 64);
				func_932(&(Local_1444.f_386), &(Local_1444.f_51[iVar0]), func_633(cVar4), 0);
			}
			else if (get_ped_relationship_group_hash(&(Local_1444.f_51[iVar0])) != Local_1444.f_379)
			{
				set_ped_relationship_group_hash(&(Local_1444.f_51[iVar0]), Local_1444.f_379);
			}
			if ((Local_16.f_29[iVar0]->f_2 == -214860659 && Local_16.f_29[iVar0]->f_10 >= 0) && Local_16.f_29[iVar0]->f_10 < 7)
			{
				iVar2 = Local_16.f_29[iVar0]->f_10;
				if (!does_entity_exist(&(Local_1444.f_252[iVar2])))
				{
					Local_1444.f_252[iVar2] = net_to_ped(&(Local_16.f_461[iVar2]));
				}
			}
		}
		switch (Local_16.f_29[iVar0]->f_1)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				if (func_933(&(Local_1444.f_51[iVar0]), &(Local_1444.f_344), &(Local_1444.f_344.f_33), 0))
				{
					func_903(0, -1);
					func_901(16);
				}
				break;
			case 4:
				if ((network_has_control_of_entity(&(Local_1444.f_51[iVar0])) && !func_438(&(Local_16.f_29[iVar0]))) && !func_755(&(Local_1444.f_51[iVar0]), 713668775))
				{
					if (Local_16.f_29[Local_16.f_1]->f_2 == 783016369)
					{
						vVar13 = { get_entity_coords(func_776(&(Local_1444.f_51[Local_16.f_1]), &uVar3, 0, 0), true, false) };
					}
					else
					{
						vVar13 = { get_ped_defensive_area_position(&(Local_1444.f_51[iVar0]), false) };
						if (func_68(vVar13))
						{
							vVar13 = { get_entity_coords(func_471(), true, false) };
						}
					}
					if (!has_collision_loaded_around_entity(&(Local_1444.f_51[iVar0])))
					{
						set_entity_load_collision_flag(&(Local_1444.f_51[iVar0]), 1);
					}
					if (!_0x268b3aebf032a88d(&(Local_1444.f_51[iVar0])))
					{
						set_blocking_of_non_temporary_events(&(Local_1444.f_51[iVar0]), true);
					}
					task_follow_nav_mesh_to_coord(&(Local_1444.f_51[iVar0]), vVar13, 3f, -1, 0.25f, 5242884, 40000f);
				}
				break;
			case 5:
				if ((network_has_control_of_entity(&(Local_1444.f_51[iVar0])) && !func_438(&(Local_16.f_29[iVar0]))) && !func_755(&(Local_1444.f_51[iVar0]), 1120685857))
				{
					_0x1854217c640b39ec(&(Local_1444.f_51[iVar0]), func_471(), 0f, 0f, 0f, 70f, 0, 0);
					if (Local_16.f_29[iVar0]->f_2 == 783016369)
					{
						remove_all_ped_weapons(&(Local_1444.f_51[iVar0]), true, false);
						_give_weapon_to_ped_2(&(Local_1444.f_51[iVar0]), -577893115, 80, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
						set_current_ped_weapon(&(Local_1444.f_51[iVar0]), -577893115, false, 0, false, false);
					}
					if (_0x268b3aebf032a88d(&(Local_1444.f_51[iVar0])))
					{
						set_blocking_of_non_temporary_events(&(Local_1444.f_51[iVar0]), false);
					}
					task_combat_hated_targets_in_area(&(Local_1444.f_51[iVar0]), get_entity_coords(func_471(), true, false), 60f, 0, 80);
					if (Local_16.f_29[iVar0]->f_2 == -214860659)
					{
						set_ped_config_flag(&(Local_1444.f_51[iVar0]), 167, true);
						set_ped_combat_attributes(&(Local_1444.f_51[iVar0]), 126, true);
						set_combat_float(&(Local_1444.f_51[iVar0]), 13, 20f);
					}
					iVar1 = func_934(iVar0);
					if (iVar1 >= 0)
					{
						Var16 = { func_935(iVar1) };
						set_ped_sphere_defensive_area(&(Local_1444.f_51[iVar0]), Var16.f_1, Var16.f_4, 0, 1, 0);
					}
				}
				break;
			case 6:
				if ((network_has_control_of_entity(&(Local_1444.f_51[iVar0])) && !func_438(&(Local_16.f_29[iVar0]))) && !func_755(&(Local_1444.f_51[iVar0]), -1442466670))
				{
					func_936(&(Local_1444.f_51[iVar0]));
					if (Local_16.f_29[iVar0]->f_2 == 783016369)
					{
						remove_all_ped_weapons(&(Local_1444.f_51[iVar0]), true, false);
						_give_weapon_to_ped_2(&(Local_1444.f_51[iVar0]), -577893115, 80, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
						set_current_ped_weapon(&(Local_1444.f_51[iVar0]), -577893115, false, 0, false, false);
					}
					if (_0x268b3aebf032a88d(&(Local_1444.f_51[iVar0])))
					{
						set_blocking_of_non_temporary_events(&(Local_1444.f_51[iVar0]), false);
					}
					task_combat_hated_targets_around_ped(&(Local_1444.f_51[iVar0]), 60f, 0, 16);
					if (Local_16.f_29[iVar0]->f_2 == -214860659)
					{
						set_ped_config_flag(&(Local_1444.f_51[iVar0]), 167, true);
						set_ped_combat_attributes(&(Local_1444.f_51[iVar0]), 126, true);
						set_combat_float(&(Local_1444.f_51[iVar0]), 13, 20f);
					}
				}
				break;
			case 9:
				if (((network_has_control_of_entity(&(Local_1444.f_51[iVar0])) && !func_438(&(Local_16.f_29[iVar0]))) && !func_755(&(Local_1444.f_51[iVar0]), -1388855549)) && func_753(&(Local_1444.f_51[iVar0]), 202))
				{
					set_blocking_of_non_temporary_events(&(Local_1444.f_51[iVar0]), true);
					if (Local_16.f_29[iVar0]->f_2 == 783016369)
					{
						iVar21 = -577893115;
					}
					iVar22 = func_776(&(Local_1444.f_51[iVar0]), &uVar3, 0, 0);
					_give_weapon_to_ped_2(&(Local_1444.f_51[iVar0]), iVar21, 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
					set_current_ped_weapon(&(Local_1444.f_51[iVar0]), iVar21, false, 0, false, false);
					task_throw_projectile(&(Local_1444.f_51[iVar0]), get_entity_coords(iVar22, true, false));
					set_ped_combat_attributes(&(Local_1444.f_51[iVar0]), 57, true);
					set_ped_combat_attributes(&(Local_1444.f_51[iVar0]), 30, true);
				}
				break;
			case 7:
				if ((network_has_control_of_entity(&(Local_1444.f_51[iVar0])) && !func_438(&(Local_16.f_29[iVar0]))) && get_ped_config_flag(&(Local_1444.f_51[iVar0]), 112, true) == 0)
				{
					set_ped_combat_attributes(&(Local_1444.f_51[iVar0]), 50, true);
					set_ped_config_flag(&(Local_1444.f_51[iVar0]), 112, true);
				}
				break;
			case 8:
				if ((network_has_control_of_entity(&(Local_1444.f_51[iVar0])) && !func_438(&(Local_16.f_29[iVar0]))) && get_ped_config_flag(&(Local_1444.f_51[iVar0]), 112, true) == 0)
				{
					if (_0x268b3aebf032a88d(&(Local_1444.f_51[iVar0])))
					{
						set_blocking_of_non_temporary_events(&(Local_1444.f_51[iVar0]), false);
					}
					task_combat_ped(&(Local_1444.f_51[iVar0]), func_471(), 16777216, 0);
					set_ped_combat_attributes(&(Local_1444.f_51[iVar0]), 50, true);
					set_ped_config_flag(&(Local_1444.f_51[iVar0]), 112, true);
					set_ped_accuracy(&(Local_1444.f_51[iVar0]), 0);
				}
				break;
			case 10:
				if ((Local_16.f_29[iVar0]->f_2 == -214860659 && Local_16.f_29[iVar0]->f_10 >= 0) && Local_16.f_29[iVar0]->f_10 < 7)
				{
					iVar2 = Local_16.f_29[iVar0]->f_10;
					if (network_has_control_of_entity(&(Local_1444.f_252[iVar2])) && !func_438(&(Local_16.f_461[iVar2])))
					{
						if (_is_mount_seat_free(&(Local_1444.f_252[iVar2]), -1))
						{
							if (!func_755(&(Local_1444.f_252[iVar2]), -773337285))
							{
								task_animal_flee(&(Local_1444.f_252[iVar2]), func_471(), -1);
							}
						}
						else if (!func_755(&(Local_1444.f_252[iVar2]), 1041577989) && !func_760(iVar2, 4))
						{
							task_horse_action(&(Local_1444.f_252[iVar2]), 2, func_471(), 0);
						}
					}
				}
				break;
			case 11:
				if (network_has_control_of_entity(&(Local_1444.f_51[iVar0])) && !func_438(&(Local_16.f_29[iVar0])))
				{
					func_526(&(Local_1444.f_51[iVar0]), 1, 0);
				}
				break;
			case 12:
				if (network_has_control_of_network_id(&(Local_16.f_29[iVar0])))
				{
					func_937(Local_16.f_29[iVar0]);
				}
				if (&Local_1444.f_51[iVar0] != 0)
				{
					Local_1444.f_51[iVar0] = 0;
				}
				if ((!network_does_network_id_exist(&(Local_16.f_29[iVar0])) && !does_entity_exist(&(Local_1444.f_51[iVar0]))) && &Local_1444.f_51[iVar0] == 0)
				{
					if (!func_938(iVar0, 1, 255))
					{
						func_939(iVar0, 1);
					}
				}
				if (Local_16.f_29[iVar0]->f_10 > -1 && Local_16.f_29[iVar0]->f_10 < 7)
				{
					iVar2 = Local_16.f_29[iVar0]->f_10;
					if (network_has_control_of_network_id(&(Local_16.f_461[iVar2])))
					{
						func_937(Local_16.f_461[iVar2]);
					}
					if (&Local_1444.f_252[iVar2] != 0)
					{
						Local_1444.f_252[iVar2] = 0;
					}
					if ((!network_does_network_id_exist(&(Local_16.f_461[iVar2])) && !does_entity_exist(&(Local_1444.f_252[iVar2]))) && &Local_1444.f_252[iVar2] == 0)
					{
						if (!func_938(iVar0, 2, 255))
						{
							func_939(iVar0, 2);
						}
					}
				}
				break;
			case 13:
				Local_579[Local_2193.f_1333]->f_3[iVar0] = 0;
				break;
		}
		iVar0++;
	}
}

void func_571()
{
	vVar0 = { get_entity_coords(func_940(), true, false) };
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if (func_782(iVar3))
		{
			func_941(iVar3, 0);
		}
		else
		{
			iVar4 = &Local_16.f_29[iVar3];
			if (!network_does_network_id_exist(iVar4))
			{
				func_941(iVar3, 0);
			}
			else
			{
				iVar5 = net_to_ped(iVar4);
				if (!does_entity_exist(iVar5))
				{
					func_941(iVar3, 0);
				}
				else
				{
					vVar6 = { get_entity_coords(iVar5, true, false) };
					fVar9 = func_491(vVar0, vVar6);
					if (fVar9 >= 10f)
					{
						func_941(iVar3, 0);
					}
					else
					{
						func_941(iVar3, 1);
					}
				}
			}
		}
		iVar3++;
	}
}

void func_572()
{
	fVar0 = to_float(get_entity_max_health(func_471(), false));
	fVar1 = to_float(get_entity_health(func_471()));
	fVar2 = (fVar1 / fVar0);
	func_407(&(Local_2193.f_1021), fVar2, 0);
	if (func_68(Local_1444.f_266))
	{
		func_407(&(Local_2193.f_1021), 0f, 1);
	}
	else if (Local_16.f_9 == 3 && Local_16.f_10 == 3)
	{
		func_407(&(Local_2193.f_1021), 1f, 1);
	}
	else if (Local_16.f_9 == 4)
	{
		func_407(&(Local_2193.f_1021), 1f, 1);
	}
	else
	{
		fVar3 = get_distance_between_coords(Local_1444.f_266, *Local_1444.f_20[3], true);
		fVar4 = get_distance_between_coords(get_entity_coords(func_471(), true, false), *Local_1444.f_20[3], true);
		if (fVar4 < Local_1444.f_269)
		{
			Local_1444.f_269 = fVar4;
		}
		fVar5 = (Local_1444.f_269 / fVar3);
		fVar5 = absf((1f - fVar5));
		func_407(&(Local_2193.f_1021), fVar5, 1);
	}
}

void func_573()
{
	if (Local_1444.f_273.f_52 && !network_is_host_of_this_script())
	{
		Local_1444.f_273.f_52 = 0;
	}
	if (Local_16.f_559 == -1)
	{
		return;
	}
	iVar0 = participant_id_to_int();
	if (Local_16.f_559 != -1 && Local_579[iVar0]->f_1 != Local_16.f_559)
	{
		if (!_is_tracked_point_valid(Local_1444.f_273.f_57))
		{
			destroy_tracked_point(Local_1444.f_273.f_57);
		}
		Local_579[iVar0]->f_1 = Local_16.f_559;
		Local_579[iVar0]->f_1.f_1 = 0;
	}
	if (Local_579[iVar0]->f_1 == -1 || Local_579[iVar0]->f_1.f_1 != 0)
	{
		return;
	}
	if (!_is_tracked_point_valid(Local_1444.f_273.f_57))
	{
		Local_1444.f_273.f_57 = create_tracked_point();
		if (!_is_tracked_point_valid(Local_1444.f_273.f_57))
		{
			return;
		}
		set_tracked_point_info(Local_1444.f_273.f_57, Local_16.f_559.f_1, 1f);
	}
	iVar1 = _0xdfe332a5da6fe7c9(Local_1444.f_273.f_57);
	if (iVar1 == -1)
	{
		return;
	}
	if (iVar1 >= 3)
	{
		Local_579[iVar0]->f_1.f_1 = 2;
	}
	else
	{
		Local_579[iVar0]->f_1.f_1 = 1;
	}
	destroy_tracked_point(Local_1444.f_273.f_57);
}

void func_574()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_942(iVar0);
				break;
			case -1315570756:
				func_943(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_575()
{
	if (Local_1444.f_380 < 4 && Local_16.f_11.f_1 > 2)
	{
		func_944(4);
	}
	if (!network_has_control_of_entity(Local_1444.f_1) && Local_1444.f_380 > 1)
	{
		return;
	}
	switch (Local_1444.f_380)
	{
		case 0:
			if (_0xd9130842d7226045("RDRO_PH_Sounds", 0))
			{
				func_944(1);
			}
			break;
		case 1:
			if (Local_16.f_10 >= 1)
			{
				func_944(2);
			}
			break;
		case 2:
			func_684(&(Local_1444.f_381));
			Local_1444.f_384 = get_random_int_in_range(2000, 5000);
			func_944(3);
			break;
		case 3:
			if (func_945(&(Local_1444.f_381)) > Local_1444.f_384)
			{
				switch (func_414(Local_1444.f_50))
				{
					case 1739344274:
						sVar0 = "Medium_Cage_Rattle";
						break;
					case -192486583:
						sVar0 = "XLarge_Cage_Rattle";
						break;
				}
				Local_1444.f_385 = get_sound_id();
				_0xf1c5310feaa36b48(Local_1444.f_385, sVar0, Local_1444.f_1, "RDRO_PH_Sounds", 1, 0);
				func_944(2);
			}
			break;
		case 4:
			_0x3210bcb36af7621b(Local_1444.f_385);
			release_sound_id(Local_1444.f_385);
			_0x531a78d6bf27014b("RDRO_PH_Sounds");
			func_944(5);
			break;
		case 5:
			break;
	}
}

void func_576()
{
	if (Local_1444.f_485 == -1)
	{
		return;
	}
	if (func_946(Local_1444.f_485))
	{
		Local_1444.f_484 = func_947();
		if (Local_1444.f_484 >= 0)
		{
			if (!func_948(Global_34, &(Local_1444.f_51[Local_1444.f_484]), 100f, 1, 0))
			{
				if (!func_382(&(Local_1444.f_486)))
				{
					func_381(&(Local_1444.f_486), 0);
					Local_1444.f_489 = Local_1444.f_485;
				}
				else if (func_383(&(Local_1444.f_486)) > 5f)
				{
					func_949(&(Local_1444.f_486));
					Local_1444.f_484 = -1;
					Local_1444.f_489 = -1;
					Local_1444.f_485 = -1;
				}
				else if (Local_1444.f_489 != Local_1444.f_485)
				{
					func_949(&(Local_1444.f_486));
					Local_1444.f_489 = -1;
				}
				return;
			}
			else if (Local_1444.f_489 != -1)
			{
				func_949(&(Local_1444.f_486));
				Local_1444.f_489 = -1;
			}
		}
	}
	if (Local_1444.f_484 == -1)
	{
		return;
	}
	StringCopy(&cVar0, func_950(Local_1444.f_484, Local_1444.f_485), 24);
	if (func_951(&(Local_1444.f_386), cVar0, 0, -1, 0, 0))
	{
		Local_1444.f_484 = -1;
		Local_1444.f_485 = -1;
	}
}

void func_577()
{
	if (does_entity_exist(func_471()))
	{
		vVar0 = { get_entity_coords(func_471(), true, false) };
		func_34(vVar0);
	}
}

void func_578()
{
	if (Local_2193.f_9 == -785841056)
	{
		return;
	}
	func_952();
	func_953();
	disable_control_action(0, -668070958, true);
	disable_control_action(0, 1287709438, true);
	disable_control_action(0, -484677055, true);
	_0x9f9a829c6751f3c7(get_player_index(), 28, 1);
	set_player_may_not_enter_any_vehicle(get_player_index());
	if (func_954() && func_955())
	{
		if ((does_entity_exist(Global_34) && !is_entity_dead(Global_34)) && _0x038b1f1674f0e242(Global_34))
		{
			clear_ped_tasks(Global_34, 1, 0);
		}
		set_player_control(player_id(), false, 256, false);
	}
}

bool func_579(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Local_2193.f_1333;
	}
	if ((((func_65(131072) && network_is_participant_active(int_to_participantindex(iParam1))) && &Local_2000[iParam1] >= iParam0) && Local_2000[iParam1]->f_4 >= 1) && (func_557() == 4 || func_557() == 10))
	{
		return true;
	}
	return false;
}

void func_580()
{
}

bool func_581(int iParam0)
{
	return func_78(&Global_1301321, iParam0);
}

void func_582(int iParam0)
{
	func_149(Global_1301321, iParam0);
}

char* func_583(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return "";
	}
	if (!network_is_player_active(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return "";
	}
	return func_956(iVar0);
}

var func_584()
{
	return Local_2193.f_1268;
}

bool func_585()
{
	switch (Local_2193.f_1388)
	{
		case -1893775542:
		case -1323241207:
		case -1130541276:
		case -669315698:
		case 142723591:
			return true;
		default:
			break;
	}
	return false;
}

bool func_586()
{
	switch (Local_2193.f_1388)
	{
		case -1869754940:
		case 1229355466:
		case 1839318411:
			return true;
		default:
			break;
	}
	return false;
}

bool func_587(int iParam0, bool bParam1)
{
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_957(iParam0))
	{
		return false;
	}
	if (func_958(iParam0))
	{
		return false;
	}
	if (func_959(iParam0))
	{
		return true;
	}
	return func_960(iParam0);
}

char* func_588()
{
	return "Match_End_Timer";
}

void func_589(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iParam3 |= 8;
	if (func_843(uParam0, &bVar0) && func_961(uParam0, uParam1, iParam3, 551037070, 859817522, 1105014447, 1105014447, iParam4))
	{
		func_962(uParam1, uParam2, iParam3 | 8, 551037070, 859817522, 109029619, 109029619, iParam4);
	}
	if (bVar0)
	{
		func_610(uParam1);
		func_254(uParam0, 1);
	}
}

void func_590(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (((func_843(uParam0, &bVar0) && func_844(uParam0)) && func_961(uParam0, uParam1, iParam7 | 8, 551037070, 859817522, 109029619, 109029619, iParam12)) && func_845(uParam0, -1700692449, &bVar0))
	{
		func_846(uParam0, iParam3, bParam4, iParam5, sParam6);
		func_962(uParam1, uParam2, iParam7 | 8, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (bVar0)
	{
		func_610(uParam1);
		func_254(uParam0, 1);
	}
}

void func_591(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (((func_843(uParam0, &bVar0) && func_844(uParam0)) && func_961(uParam0, uParam1, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12)) && func_845(uParam0, 1133052843, &bVar0))
	{
		func_846(uParam0, iParam3, bParam4, iParam5, sParam6);
		func_962(uParam1, uParam2, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (bVar0)
	{
		func_610(uParam1);
		func_254(uParam0, 1);
	}
}

void func_592(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	iVar1 = 0;
	if (iParam7 != 0)
	{
		iVar1 = -1;
	}
	if (((func_843(uParam0, &bVar0) && func_844(uParam0)) && func_963(uParam0, uParam1, iParam7, 0, 0, 0, 0)) && func_845(uParam0, -213385216, &bVar0))
	{
		func_846(uParam0, iParam2, bParam3, iParam4, sParam5);
		func_964(uParam1, iParam6, bParam8, bParam9, bParam10, iVar1, 0);
	}
	if (bVar0)
	{
		func_609(uParam1, 0, 0);
		func_254(uParam0, 1);
	}
}

void func_593(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	iVar1 = 0;
	if (iParam9 != 0)
	{
		iVar1 = -1;
	}
	if ((((func_843(uParam0, &bVar0) && func_844(uParam0)) && func_963(uParam0, uParam1, iParam9, 0, 0, 0, 0)) && func_961(uParam0, uParam2, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15)) && func_845(uParam0, 1133052843, &bVar0))
	{
		func_846(uParam0, iParam4, bParam5, iParam6, sParam7);
		func_964(uParam1, iParam8, 0, 0, 0, iVar1, 0);
		func_962(uParam2, uParam3, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15);
	}
	if (bVar0)
	{
		func_610(uParam2);
		func_609(uParam1, 0, 0);
		func_254(uParam0, 1);
	}
}

void func_594(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
{
	iVar1 = 0;
	if (iParam9 != 0)
	{
		iVar1 = -1;
	}
	if (iParam19 != 0)
	{
		iVar1 |= 1;
	}
	if (iParam20 != 0)
	{
		iVar1 |= 2;
	}
	iVar2 = 0;
	if (iParam21 != 0)
	{
		iVar2 |= 1;
	}
	if (iParam22 != 0)
	{
		iVar2 |= 2;
	}
	if ((((func_843(uParam0, &bVar0) && func_844(uParam0)) && func_963(uParam0, uParam1, iParam9, iParam19, iParam20, iParam21, iParam22)) && func_961(uParam0, uParam2, iParam13 | 8, 551037070, 859817522, 109029619, 109029619, iParam14)) && func_845(uParam0, 774310187, &bVar0))
	{
		func_846(uParam0, iParam3, bParam5, iParam6, sParam7);
		func_964(uParam1, iParam8, bParam10, bParam11, bParam12, iVar1, iVar2);
		func_962(uParam2, uParam4, iParam13 | 8, iParam15, iParam16, iParam17, iParam18, iParam14);
	}
	if (bVar0)
	{
		func_609(uParam1, 0, 0);
		func_254(uParam0, 1);
		func_610(uParam2);
	}
}

bool func_595()
{
	return false;
}

bool func_596(var uParam0, float fParam1, bool bParam2)
{
	fVar3 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_965(Local_1444.f_50, iVar0, &vVar5, &uVar4))
		{
			fVar2 = func_627(Global_34, vVar5, 1);
			if (fVar2 < fVar3)
			{
				fVar3 = fVar2;
				*uParam0 = { vVar5 };
				*fParam1 = uVar4;
				bVar1 = true;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (fVar3 > 200f)
		{
			*uParam0 = { get_entity_coords(player_ped_id(), true, false) };
			*fParam1 = get_entity_heading(player_ped_id());
			*bParam2 = 1;
		}
		return true;
	}
	return false;
}

bool func_597(var uParam0)
{
	uParam0->f_2 = -171261332;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_598()
{
	return true;
}

float func_599(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_600()
{
	func_601(&(Local_2193.f_972[Local_2193.f_1333]));
}

void func_601(int iParam0)
{
	if (iParam0 == -1)
	{
		func_230(4096, Local_2193.f_1333);
		iParam0 = (func_192(2) - 1);
	}
	Local_2193.f_1334 = iParam0;
}

void func_602(int iParam0, var uParam1, int iParam2)
{
	iVar0 = func_676(iParam0);
	if (iVar0 == -785841056)
	{
		func_461(func_47(-1892463704, -785841056), 1);
		if (iParam2 == 0)
		{
			func_461(func_529(1114562171), 1);
		}
	}
	else
	{
		func_461(func_47(-1892463704, -1666944573), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_461(func_529(1379845528), 1);
		}
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_461(func_47(-1892463704, iVar1), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_461(func_47(-365215928, iVar1), 1);
		}
	}
}

void func_603(int iParam0, var uParam1, int iParam2)
{
	iVar0 = func_676(iParam0);
	if (iVar0 == -785841056)
	{
		func_461(func_47(1374282888, -785841056), 1);
		if (iParam2 == 0)
		{
			func_461(func_529(1114562171), 1);
		}
	}
	else
	{
		func_461(func_47(1374282888, -1666944573), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_461(func_529(1379845528), 1);
		}
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_461(func_47(1374282888, iVar1), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_461(func_47(-365215928, iVar1), 1);
		}
	}
}

int func_604()
{
	if (!func_966())
	{
		return 1;
	}
	if (Local_2193.f_9 != -785841056 && !func_137(8192))
	{
		if (Local_2193.f_1 != 9)
		{
			Var0.f_1 = 11;
			func_967(&Var0, Local_2193.f_1334);
			func_968(&Var0);
			func_969(&Var0, Local_1950.f_4);
			func_970(&Var0);
			func_971(-116590068, &(Local_2193.f_1363), &Var0, 0, 255, 0, 0);
			Local_2193.f_1282++;
			Var13.f_1 = 11;
			func_973(&Var13, func_972());
			func_967(&Var13, Local_2193.f_1334);
			func_968(&Var13);
			func_969(&Var13, Local_1950.f_4);
			func_970(&Var13);
			func_971(-2069558689, &(Local_2193.f_1367), &Var13, 0, 255, 0, 0);
			Local_2193.f_1282++;
			Var26.f_1 = 11;
			func_968(&Var26);
			func_974(&Var26, Local_1950.f_4);
			func_975(&Var26);
			func_976(&Var26, Local_2193.f_1334);
			func_977(&Var26);
			func_970(&Var26);
			func_971(1172622856, &(Local_2193.f_1371), &Var26, 0, 255, 0, 0);
			Local_2193.f_1282++;
		}
		iVar39 = func_978(Local_1950.f_4);
		Var40.f_1 = 11;
		func_970(&Var40);
		if (iVar39 != 0)
		{
			func_971(iVar39, &(Local_2193.f_1379), &Var40, 0, 255, 0, 0);
			Local_2193.f_1383 = iVar39;
			Local_2193.f_1282++;
		}
	}
	func_979();
	return 1;
}

bool func_605(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = participant_id_to_int();
	}
	if (network_is_participant_active(int_to_participantindex(iParam1)))
	{
		return func_78(&(Local_579[iParam1]), iParam0);
	}
	return false;
}

void func_606()
{
	if (network_does_network_id_exist(Local_16.f_11) && network_has_control_of_network_id(Local_16.f_11))
	{
		func_980(&(Local_1444.f_1), 0);
		func_937(&(Local_16.f_11));
	}
}

bool func_607()
{
	return true;
}

void func_608(int iParam0, int iParam1)
{
	func_445(&(Global_1196898->f_78[iParam0]->f_6), iParam1);
}

void func_609(var uParam0, bool bParam1, bool bParam2)
{
	if ((uParam0[0] != 0 || bParam2) || ((*uParam0)[0]->f_23 != -1 && bParam1))
	{
		Var0.f_27 = -1;
		Var0.f_28 = -1;
		Var0.f_29 = -1082130432;
		iVar40 = 0;
		while (iVar40 <= 6)
		{
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_1);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_2);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_3);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_4);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_5);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_6);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_10);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_11);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_12);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_13);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_14);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_15);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_20);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_21);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_22);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_16);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_17);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_18);
			_databinding_remove_data_entry((*uParam0)[iVar40]->f_19);
			_databinding_remove_data_entry(uParam0[iVar40]);
			if (!bParam1)
			{
				uVar34 = (*uParam0)[iVar40]->f_23;
				uVar35 = (*uParam0)[iVar40]->f_25;
				uVar36 = (*uParam0)[iVar40]->f_26;
				uVar37 = (*uParam0)[iVar40]->f_27;
				uVar38 = (*uParam0)[iVar40]->f_28;
				uVar39 = (*uParam0)[iVar40]->f_29;
			}
			_copy_memory((*uParam0)[iVar40], &Var0, 34);
			if (!bParam1)
			{
				(*uParam0)[iVar40]->f_23 = uVar34;
				(*uParam0)[iVar40]->f_25 = uVar35;
				(*uParam0)[iVar40]->f_26 = uVar36;
				(*uParam0)[iVar40]->f_27 = uVar37;
				(*uParam0)[iVar40]->f_28 = uVar38;
				(*uParam0)[iVar40]->f_29 = uVar39;
			}
			iVar40++;
		}
	}
}

void func_610(var uParam0)
{
	if (uParam0->f_11.f_2 != 0)
	{
		func_981(&(uParam0->f_11));
		func_982(uParam0);
		func_983(&(uParam0->f_11), 1);
		Global_1940144->f_110 = 0;
		Var0.f_3 = 8;
		Var0.f_12 = 32;
		Var0.f_45 = 32;
		Var0.f_45.f_1 = 2;
		Var0.f_45.f_1.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_143 = 5;
		Var0.f_161 = -1;
		Var0.f_162 = 32;
		Var200.f_1 = -1082130432;
		Var200.f_2 = -1082130432;
		Var200.f_3 = -1082130432;
		Var200.f_4 = -1082130432;
		Var200.f_5 = -1082130432;
		Var200.f_14 = 255;
		uParam0->f_11 = { Var0 };
		iVar223 = 0;
		while (iVar223 <= 31)
		{
			_copy_memory(uParam0->f_211[iVar223], &Var200, 23);
			iVar223++;
		}
		uParam0->f_949 = 0;
	}
}

bool func_611()
{
	return false;
}

char* func_612()
{
	return "";
}

char* func_613()
{
	return func_984();
}

char* func_614()
{
	return func_985();
}

char* func_615(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "FME_SHARD_OUTRO_PRIMARY_INVALID_GANG";
		case 2:
			return "FME_SHARD_OUTRO_PRIMARY_EXPIRED_GANGS";
		case 3:
			return "FME_SHARD_OUTRO_PRIMARY_EXPIRED_PLAYERS";
		default:
			break;
	}
	return "FME_SHARD_OUTRO_PRIMARY_EXPIRED";
}

var func_616(char* sParam0, char* sParam1, char* sParam2)
{
	return func_986(sParam0, func_292(), sParam2, sParam1, 0, 1);
}

struct<8> func_617()
{
	return Var0;
}

char* func_618()
{
	return "";
}

struct<8> func_619()
{
	return Var0;
}

char* func_620(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FM_PLACE_1";
		case 1:
			return "FM_PLACE_2";
		case 2:
			return "FM_PLACE_3";
		case 3:
			return "FM_PLACE_4";
		case 4:
			return "FM_PLACE_5";
		case 5:
			return "FM_PLACE_6";
		case 6:
			return "FM_PLACE_7";
		case 7:
			return "FM_PLACE_8";
		case 8:
			return "FM_PLACE_9";
		case 9:
			return "FM_PLACE_10";
		case 10:
			return "FM_PLACE_11";
		case 11:
			return "FM_PLACE_12";
		case 12:
			return "FM_PLACE_13";
		case 13:
			return "FM_PLACE_14";
		case 14:
			return "FM_PLACE_15";
		case 15:
			return "FM_PLACE_16";
		case 16:
			return "FM_PLACE_17";
		case 17:
			return "FM_PLACE_18";
		case 18:
			return "FM_PLACE_19";
		case 19:
			return "FM_PLACE_20";
		case 20:
			return "FM_PLACE_21";
		case 21:
			return "FM_PLACE_22";
		case 22:
			return "FM_PLACE_23";
		case 23:
			return "FM_PLACE_24";
		case 24:
			return "FM_PLACE_25";
		case 25:
			return "FM_PLACE_26";
		case 26:
			return "FM_PLACE_27";
		case 27:
			return "FM_PLACE_28";
		case 28:
			return "FM_PLACE_29";
		case 29:
			return "FM_PLACE_30";
		case 30:
			return "FM_PLACE_31";
		case 31:
			return "FM_PLACE_32";
		default:
			break;
	}
	return "";
}

Vector3 func_621(int iParam0)
{
	if (!does_cam_exist(iParam0))
	{
		vVar0 = { get_gameplay_cam_rot(2) };
	}
	else
	{
		vVar0 = { get_cam_rot(iParam0, 2) };
	}
	fVar3 = sin(vVar0.z);
	fVar4 = cos(vVar0.z);
	fVar5 = sin(vVar0.x);
	fVar6 = cos(vVar0.x);
	return func_987((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

bool func_622()
{
	return true;
}

bool func_623(int iParam0)
{
	return iParam0 != 0;
}

bool func_624(int iParam0, bool bParam1, bool bParam2)
{
	if (((iParam0 != 255 && network_is_player_active(iParam0)) && network_is_player_a_participant(iParam0)) && iParam0 != player_id())
	{
		iVar0 = network_get_participant_index(iParam0);
		if (iVar0 >= 0 && iVar0 < 32)
		{
			if (bParam1)
			{
				if (Local_2000[Local_2193.f_1333]->f_2 == Local_2000[iVar0]->f_2 && (!bParam2 || Local_2000[Local_2193.f_1333]->f_5 > Local_2000[iVar0]->f_5))
				{
					return true;
				}
			}
			else if (floor(Local_2000[Local_2193.f_1333]->f_2) == floor(Local_2000[iVar0]->f_2) && (!bParam2 || Local_2000[Local_2193.f_1333]->f_5 > Local_2000[iVar0]->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_625()
{
	return Global_1940258->f_38 == -1415022764;
}

bool func_626()
{
	if (is_thread_active(&Global_1903071, false))
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(-506425016) > 0)
	{
		return true;
	}
	if (func_23() == 0 && _0x1b89bc43b6e69107(-506425016, -1, 1, 0))
	{
		return true;
	}
	return false;
}

float func_627(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_628()
{
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (network_does_network_id_exist(&(Local_16.f_29[iVar0])) && network_has_control_of_network_id(&(Local_16.f_29[iVar0])))
		{
			func_980(Local_1444.f_51[iVar0], 0);
			func_937(Local_16.f_29[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (network_does_network_id_exist(&(Local_16.f_461[iVar0])) && network_has_control_of_network_id(&(Local_16.f_461[iVar0])))
		{
			func_980(Local_1444.f_252[iVar0], 0);
			func_937(Local_16.f_461[iVar0]);
		}
		iVar0++;
	}
}

bool func_629(int iParam0)
{
	switch (func_988(iParam0))
	{
		case -2101244071:
		case -1070622585:
		case -1057349201:
		case -569548732:
		case 874188557:
			return true;
	}
	return false;
}

bool func_630(int iParam0)
{
	return func_78(Local_16, iParam0);
}

char* func_631()
{
	switch (Local_1444.f_50)
	{
		case -809127215:
			return "_BEAR";
		case 1706859953:
			return "_ELK";
		case -53531786:
			return "_COUGAR";
		case 326175668:
			return "_WOLF";
		case -920598405:
			return "_ALLIGATOR";
		default:
			break;
	}
	return "_BEAR";
}

char* func_632()
{
	if (func_630(1))
	{
		return "_TIER01";
	}
	else if (func_630(2))
	{
		return "_TIER02";
	}
	return "_TIER01";
}

char* func_633(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_634(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_635(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_638(iParam0, 1);
	func_639(iParam0, 1);
	func_640(iParam0, 128);
}

int func_636(int iParam0)
{
	return iParam0;
}

void func_637(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_638(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_634(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_639(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_640(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

void func_641(int iParam0)
{
	if (!func_989(iParam0))
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

void func_642(var uParam0, bool bParam1)
{
	if (!func_688(uParam0))
	{
		return;
	}
	iVar0 = Global_1296859->f_8;
	func_990();
	func_692(0);
	if (uParam0->f_1)
	{
		func_991(iVar0, 1);
	}
	if (uParam0->f_10)
	{
		if (func_335(uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_698();
		}
	}
	if (uParam0->f_12)
	{
		func_992();
	}
	if (uParam0->f_8)
	{
		func_993(_0xdf66a37936d5f3d9(player_id()));
		func_715(func_994());
	}
	else if (uParam0->f_4)
	{
		func_995();
		func_993(_0xdf66a37936d5f3d9(player_id()));
		func_715(Global_1956200->f_1549);
	}
	if (uParam0->f_3)
	{
		func_996();
	}
	if (bParam1)
	{
		func_700(0, 0);
		func_997();
	}
	func_689(&(Global_1139381->f_4796));
}

bool func_643(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_644(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_645(int iParam0, int iParam1)
{
	if (_0x72b2e00c9bac6789(&(Local_2193.f_1387), iParam1))
	{
		func_998(iParam0);
		if (Local_2193.f_9 != -785841056)
		{
			func_999(iParam1, 0);
		}
		_0xd426e2e3288469d6(&(Local_2193.f_1387), iParam1);
	}
}

void func_646(int iParam0, int iParam1)
{
	if (_0x72b2e00c9bac6789(&(Local_2193.f_1386), iParam1))
	{
		func_1000(iParam0);
		func_1001(iParam0);
		func_1002(iParam0);
		if (Local_2193.f_9 != -785841056)
		{
			func_999(iParam1, 0);
		}
		_0xd426e2e3288469d6(&(Local_2193.f_1386), iParam1);
	}
	if (func_137(33554432))
	{
		if (network_is_player_active(iParam0) && iParam0 == player_id())
		{
			func_341();
			func_336(33554432);
			if (func_137(67108864))
			{
				func_344(1, 0, 1);
				func_336(67108864);
			}
		}
	}
}

bool func_647(int iParam0)
{
	return func_643(Global_1194053->f_3, iParam0);
}

void func_648(int iParam0)
{
	func_644(&(Global_1194053->f_3), iParam0);
}

bool func_649(int iParam0, bool bParam1, bool bParam2)
{
	if (!Global_1139381->f_5560)
	{
		return false;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return ((Global_17411.f_2621.f_2 == 2 || (bParam1 && Global_17411.f_2621.f_2 == 1)) || (bParam2 && Global_17411.f_2621.f_2 == 3));
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return (((*Global_1100469)[iVar0]->f_48 == 2 || (bParam1 && (*Global_1100469)[iVar0]->f_48 == 1)) || (bParam2 && (*Global_1100469)[iVar0]->f_48 == 3));
}

bool func_650(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_78(Global_1071686->f_21416.f_1[iParam0]->f_7, iParam1);
}

void func_651(int iParam0)
{
	if (!func_78(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_149(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

var func_652(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _show_simple_right_text(&Var0, &Var13, iParam5);
	return uVar17;
}

void func_653(int iParam0, int iParam1)
{
	iVar50 = _0xd1bf325c8252a982(iParam1, &Var0);
	Var63 = { func_1003() };
	iVar70 = 0;
	while (iVar70 <= (iVar50 - 1))
	{
		if ((func_1004(*Var0[iVar70]) && !network_are_handles_the_same(Var0[iVar70], &Var63)) && network_is_gamer_in_my_session(Var0[iVar70]))
		{
			iVar51 = network_get_player_from_gamer_handle(Var0[iVar70]);
			if (network_is_player_active(iVar51))
			{
				Var52.f_4 = 7;
				Var52.f_5 = iParam1;
				Var52.f_10 = iParam0;
				func_1005(&Var52, iVar51);
			}
		}
		iVar70++;
	}
}

void func_654(int iParam0)
{
	if (func_78(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_445(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

bool func_655(int iParam0)
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

void func_656(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_657(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_658(int iParam0)
{
	if (!_databinding_is_data_id_valid(iParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1940311->f_242.f_5, iParam0);
	func_1006(iParam0);
	_databinding_remove_data_entry(iParam0);
	func_1007((Global_1940311->f_242.f_1186 - 1));
}

bool func_659(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_660(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_661(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_662()
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

int func_663(struct<2> Param0)
{
	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = func_1008(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

int func_664(struct<2> Param0)
{
	return func_1009(Param0);
}

int func_665(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_1010())
	{
		return 0;
	}
	if (!func_17())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_1011(&Global_0, 8);
	}
	func_1011(&Global_0, 1);
	return 1;
}

void func_666(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_1012(func_672(Param0));
	iVar1 = func_664(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_23() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_1013(Param0, &Var2);
	}
	if (network_is_player_active(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	_0xd5910ecf81a2278c(iVar0, iVar1, iParam2, &Var2);
}

void func_667(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1014(Param0);
	}
	else
	{
		func_1015(Param0, iParam2);
	}
	func_1016();
}

void func_668(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1017(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1018(cVar2);
			}
			else
			{
				func_1019();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_669(bool bParam0)
{
	if (!bParam0 && func_1020(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_670(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_671(struct<2> Param0)
{
	return func_1022(func_1021(Param0));
}

int func_672(var uParam0, var uParam1)
{
	return uParam0;
}

int func_673(struct<2> Param0, var uParam2)
{
	iVar0 = func_1023(Param0);
	if (func_1023(Param0) < 0)
	{
		return 0;
	}
	func_1024(iVar0, uParam2);
	return 1;
}

void func_674(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_1025(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_1026();
		Global_1900688->f_9 = func_1027(Global_1893587->f_2);
		Global_1900688->f_11 = func_1028(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_1029(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_1029(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_1029(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

void func_675(int iParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 == 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = 0;
	_0xc684ff658b2e55da(iParam0);
}

int func_676(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1196898->f_1[iParam0]);
}

char* func_677(int iParam0)
{
	switch (iParam0)
	{
		case -1410749931:
			return "EventData/location(id=%x)";
		case -1770809161:
			return "EventData/location(id=%x)/variation(id=%x)/tuningData";
		case -1530280304:
			return ":iEventDuration";
		case -1982623011:
			return ":zoneCentre";
		case -1128990743:
			return ":animalGoto";
		case 862016482:
			return ":pos";
		case 1115117048:
			return ":rotation";
		case -598646238:
			return ":role";
		case -1379582731:
			return ":radius";
		case -2111818647:
			return "SpawnPositions/guard";
		case 279919022:
			return "SpawnPositions/secondaryDefensive";
		case 290924059:
			return "SpawnPositions/wave";
		case -947463643:
			return "spawnposition(%i)";
		case -332598258:
			return ":pos1";
		case -1149562197:
			return ":pos2";
		case -793756395:
			return ":pos3";
		case 382592596:
			return ":head1";
		case 82199177:
			return ":head2";
		case 379905542:
			return ":head3";
		case 1940565578:
			return ":zoneID1";
		case 1358162137:
			return ":zoneID2";
		case -1200000992:
			return "EventData/location(id=%x)/variation(id=%x)";
		case 1488517152:
			return "ZoneData";
		case -1396689762:
			return "ZoneData/ZoneArea(%i)";
		case 125211217:
			return "ZoneLocation";
		case 1312860593:
			return "CageData";
		case -1395267836:
			return "AnimalProps";
		case -1675546834:
			return ":propType";
		case 455615629:
			return ":modelName";
		case 1338613333:
			return ":propSetEnum";
		default:
			break;
	}
	return "";
}

void func_678(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1030(Global_1139381->f_3876.f_2[func_378(iParam0, 1)]);
}

bool func_679()
{
	if ((Global_1903071->f_35 == 1 && Global_1903071->f_5 >= 2) && Global_1903071->f_5 != 9)
	{
		return true;
	}
	return false;
}

void func_680()
{
	if (func_1031())
	{
		func_1032(8);
	}
}

void func_681()
{
	if (func_1033())
	{
		func_1032(16);
	}
}

void func_682()
{
	if (func_1034())
	{
		func_1032(32);
	}
}

int func_683(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_684(var uParam0)
{
	func_1035(uParam0, 0f);
}

bool func_685(var uParam0)
{
	return func_384(*uParam0, 2);
}

float func_686()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_687(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		func_1036(&(uParam0->f_16), 84);
	}
}

bool func_688(var uParam0)
{
	if (uParam0->f_1)
	{
		return true;
	}
	else if (uParam0->f_10)
	{
		return true;
	}
	else if (uParam0->f_9)
	{
		return true;
	}
	else if (uParam0->f_4)
	{
		return true;
	}
	else if (uParam0->f_5)
	{
		return true;
	}
	else if (uParam0->f_3)
	{
		return true;
	}
	else if (uParam0->f_8)
	{
		return true;
	}
	else if (uParam0->f_6)
	{
		return true;
	}
	else if (uParam0->f_7)
	{
		return true;
	}
	else if (uParam0->f_11)
	{
		return true;
	}
	else if (uParam0->f_2)
	{
		return true;
	}
	else if (uParam0->f_12)
	{
		return true;
	}
	return false;
}

void func_689(var uParam0)
{
	func_1037(uParam0);
	func_1038(&(uParam0->f_16));
	func_1039(&(uParam0->f_21));
	func_1040(&(uParam0->f_22));
	func_1041(&(uParam0->f_25));
	func_1042(&(uParam0->f_47));
	func_1043(&(uParam0->f_51));
	func_1044(&(uParam0->f_54));
	func_1045(&(uParam0->f_57));
}

void func_690(var uParam0)
{
	if (uParam0->f_5 && !uParam0->f_7)
	{
		func_165(uParam0, 1);
	}
}

void func_691()
{
	func_1046();
	func_1047();
	func_993(_0xdf66a37936d5f3d9(player_id()));
}

void func_692(bool bParam0)
{
	if (!bParam0 && Global_1956200->f_1431.f_108)
	{
		return;
	}
	iVar0 = get_player_ped(player_id());
	if (_is_attribute_overpowered(iVar0, 0))
	{
		Global_1956200->f_1431.f_108.f_1 = _0x4c9f782180712742(iVar0, 0);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_1 = 0f;
	}
	if (_is_attribute_overpowered(iVar0, 1))
	{
		Global_1956200->f_1431.f_108.f_3 = _0x4c9f782180712742(iVar0, 1);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_3 = 0f;
	}
	if (_is_attribute_overpowered(iVar0, 2))
	{
		Global_1956200->f_1431.f_108.f_2 = _0x4c9f782180712742(iVar0, 2);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_2 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 0))
	{
		Global_1956200->f_1431.f_108.f_4 = _0xb429f58803d285b1(iVar0, 0);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_4 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 1))
	{
		Global_1956200->f_1431.f_108.f_6 = _0xb429f58803d285b1(iVar0, 1);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_6 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 2))
	{
		Global_1956200->f_1431.f_108.f_5 = _0xb429f58803d285b1(iVar0, 2);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_5 = 0f;
	}
	Global_1956200->f_1431.f_108 = 1;
}

struct<4> func_693(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_1048(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_1049() };
		if (func_1050() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_1051(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_1052(player_id());
	}
	bVar33 = func_1053(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_1054(iParam3, 0);
	if (iVar34 != 3)
	{
		if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[iVar34]))
		{
			Var0 = { *Global_17411.f_55.f_61[iVar34] };
		}
	}
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		if (!bParam1)
		{
			return func_1055();
		}
		if (!func_1056(&Var0, 0))
		{
			Var35 = { func_1057(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

var func_694(var uParam0, int iParam1)
{
	func_1058(uParam0, iParam1, 0);
	return Global_1904087->f_11;
}

var func_695(var uParam0, int iParam1)
{
	func_1058(uParam0, iParam1, 0);
	return Global_1904087->f_22;
}

int func_696(var uParam0, int iParam1)
{
	if (!func_1058(uParam0, iParam1, 1))
	{
	}
	if (!func_1059(Global_1904087))
	{
		return 0;
	}
	iVar0 = func_1060(Global_1904087->f_11, Global_1904087->f_23);
	return iVar0;
}

void func_697(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	uParam0->f_47 = uParam1;
	uParam0->f_47.f_1 = uParam2;
	uParam0->f_47.f_2 = iParam3;
	uParam0->f_47.f_3 = iParam4;
}

void func_698()
{
	func_1061(&(Global_1139381->f_3876.f_480));
}

int func_699(bool bParam0)
{
	if (func_23() == -1)
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

void func_700(int iParam0, int iParam1)
{
	_0xa6aa9f56bc6cff58(iParam0, iParam1);
	func_1062(&(Global_1293346->f_12));
	func_1062(&(Global_1293346->f_16));
}

void func_701(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

int func_702(var uParam0)
{
	if (!func_1063(32))
	{
		func_1064(&(Global_1952637->f_2365));
		func_701(32);
	}
	if (uParam0->f_1 == 0)
	{
		if (!func_1065(*uParam0))
		{
			if (func_1063(32))
			{
				func_991(get_player_ped(player_id()), 1);
			}
			return 0;
		}
		func_1066(&(Global_1952637->f_2365));
		if (!func_1067(&(Global_1952637->f_1556), *uParam0, &uVar0, 0, 1, 0, 0, 0, 0, 8))
		{
			if (func_1063(32))
			{
				func_991(get_player_ped(player_id()), 1);
			}
			return 0;
		}
		func_1068(&(Global_1952637->f_1556));
	}
	func_719(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	Global_1139381->f_4779.f_4 = *uParam0;
	Global_1139381->f_4779 = uParam0->f_1;
	func_719(30, 0, 0, 0, 0);
	func_719(27, 0, 0, 0, 0);
	func_719(32, Global_1139381->f_4779.f_4, 0, 0, 0);
	return 1;
}

void func_703()
{
	func_172(121);
}

void func_704(var uParam0)
{
	if (uParam0->f_4)
	{
		if (uParam0->f_25 == -1)
		{
			uParam0->f_25 = func_1069(0, 0);
		}
		else if (uParam0->f_25 < 1)
		{
			uParam0->f_25 = 1;
		}
		else if (uParam0->f_25 > 10)
		{
			uParam0->f_25 = 10;
		}
		if (uParam0->f_25.f_1 == -1)
		{
			uParam0->f_25.f_1 = func_1069(2, 0);
		}
		else if (uParam0->f_25.f_1 < 1)
		{
			uParam0->f_25.f_1 = 1;
		}
		else if (uParam0->f_25.f_1 > 10)
		{
			uParam0->f_25.f_1 = 10;
		}
		if (uParam0->f_25.f_2 == -1)
		{
			uParam0->f_25.f_2 = func_1069(1, 0);
		}
		else if (uParam0->f_25.f_2 < 1)
		{
			uParam0->f_25.f_2 = 1;
		}
		else if (uParam0->f_25.f_2 > 10)
		{
			uParam0->f_25.f_2 = 10;
		}
		if (uParam0->f_25.f_3 == -1)
		{
			uParam0->f_25.f_3 = func_1070(0);
		}
		else if (uParam0->f_25.f_3 < 1)
		{
			uParam0->f_25.f_3 = 1;
		}
		else if (uParam0->f_25.f_3 > 200)
		{
			uParam0->f_25.f_3 = 200;
		}
		if (uParam0->f_25.f_4 == -1)
		{
			uParam0->f_25.f_4 = func_1071(0);
		}
		else if (uParam0->f_25.f_4 < 1)
		{
			uParam0->f_25.f_4 = 1;
		}
		else if (uParam0->f_25.f_4 > 200)
		{
			uParam0->f_25.f_4 = 200;
		}
		if (uParam0->f_25.f_5 == -1)
		{
			uParam0->f_25.f_5 = func_1072(0);
		}
		else if (uParam0->f_25.f_5 < 1)
		{
			uParam0->f_25.f_5 = 1;
		}
		else if (uParam0->f_25.f_5 > 200)
		{
			uParam0->f_25.f_5 = 200;
		}
	}
	if (uParam0->f_5)
	{
		if (uParam0->f_25.f_6 == -1)
		{
		}
		else if (uParam0->f_25.f_6 > 18000)
		{
			uParam0->f_25.f_6 = 18000;
		}
		if (uParam0->f_25.f_7 == -1)
		{
		}
		else if (uParam0->f_25.f_7 > 18000)
		{
			uParam0->f_25.f_7 = 18000;
		}
		if (uParam0->f_25.f_8 == -1)
		{
		}
		else if (uParam0->f_25.f_8 > 18000)
		{
			uParam0->f_25.f_8 = 18000;
		}
	}
}

void func_705()
{
	func_1073();
}

int func_706(int iParam0)
{
	if (func_402(&(Global_1956200->f_1565), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_707(int iParam0, int iParam1, int iParam2)
{
	func_1074(0, iParam0);
	func_1074(2, iParam1);
	func_1074(1, iParam2);
	iVar0 = func_1075(iParam0);
	func_1076(0, iVar0);
	iVar0 = func_1075(iParam1);
	func_1076(2, iVar0);
	iVar0 = func_1075(iParam2);
	func_1076(1, iVar0);
}

void func_708(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1077(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200->f_1546;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200->f_1546;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200->f_1546 = iParam0;
			break;
		case 1:
			Global_1956200->f_1565.f_136 = iParam0;
			break;
	}
}

void func_709(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1077(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200->f_1546.f_1;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200->f_1546.f_1;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200->f_1546.f_1 = iParam0;
			break;
		case 1:
			Global_1956200->f_1565.f_136.f_1 = iParam0;
			break;
	}
}

void func_710(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1077(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200->f_1546.f_2;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200->f_1546.f_2;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200->f_1546.f_2 = iParam0;
			break;
		case 1:
			Global_1956200->f_1565.f_136.f_2 = iParam0;
			break;
	}
}

void func_711()
{
	func_1074(0, func_1069(0, 0));
	func_1074(2, func_1069(2, 0));
	func_1074(1, func_1069(1, 0));
	fVar0 = func_1078(0, 0);
	func_1076(0, floor(fVar0));
	fVar0 = func_1078(2, 0);
	func_1076(2, floor(fVar0));
	fVar0 = func_1078(1, 0);
	func_1076(1, floor(fVar0));
}

void func_712(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1077(2);
	}
	switch (iParam0)
	{
		case 0:
			if (iParam2 == 0)
			{
				Global_1956200->f_1431.f_81 = uParam1;
			}
			else
			{
				Global_1956200->f_1565.f_2.f_81 = uParam1;
			}
			break;
		case 2:
			if (iParam2 == 0)
			{
				Global_1956200->f_1431.f_83 = uParam1;
			}
			else
			{
				Global_1956200->f_1565.f_2.f_83 = uParam1;
			}
			break;
		case 1:
			if (iParam2 == 0)
			{
				Global_1956200->f_1431.f_82 = uParam1;
			}
			else
			{
				Global_1956200->f_1565.f_2.f_82 = uParam1;
			}
			break;
		default:
			break;
	}
}

void func_713(int iParam0, var uParam1, int iParam2)
{
	vVar0.f_1 = -1;
	if (!func_1079(iParam0, iParam2))
	{
		return;
	}
	vVar0.x = iParam0;
	vVar0.f_1 = uParam1;
	*Global_1139381->f_4796.f_34[iParam2] = { vVar0 };
}

void func_714()
{
	func_1080();
	func_1081();
}

void func_715(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	iVar0 = player_ped_id();
	func_1082();
	func_1083();
	func_1084(&uParam0, iVar0);
	func_1085(&uParam0, iVar0);
	func_1086(&uParam0, iVar0);
	func_1087(&uParam0);
	func_1088();
	func_1089(1);
}

bool func_716(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

struct<4> func_717(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_699(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_718(1328661203, func_1055(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_718(1328661203, func_1055(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_718(1328661203, func_1055(), -1591664384, bParam0);
}

struct<4> func_718(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_721(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_699(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_719(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_701(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1090(Var0);
}

void func_720(int iParam0)
{
	Var0 = { func_718(-1295114026, func_717(1), 1784584921, 1) };
	if (_0xb881ca836cc4b6d4(&Var0))
	{
		_0x3112adb9d5f3426b(&Var0, iParam0);
	}
}

bool func_721(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_722(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_723(int iParam0, int iParam1, int iParam2)
{
	if (!func_721(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_722(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_724(iParam0, 0, 0) };
	if (func_1091(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_1092(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_699(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_724(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_717(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_1093(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_718(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_1094(bParam1) };
			if (bParam2 && func_1095(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_1096(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1096(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1097(iParam0, &Var6, 1728382685))
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
			Var0 = { func_1098(bParam1) };
			switch (func_988(iParam0))
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
			if (func_1099(iParam0, -1823706425))
			{
				Var0 = { func_718(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1099(iParam0, -1483207246))
			{
				Var0 = { func_718(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_718(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_1099(iParam0, -1653629781))
			{
				Var0 = { func_718(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_1100(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_1099(iParam0, -1653629781))
			{
				Var0 = { func_718(1384535894, Var0, 1784584921, bParam1) };
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

int func_725(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_721(iParam0, 0))
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_1091(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_1092(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_699(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

Vector3 func_726(int iParam0)
{
	switch (Local_1444.f_50)
	{
		case -920598405:
			switch (iParam0)
			{
				case 0:
					return 2222.123f, -487.3541f, 40.2786f;
				case 1:
					return 2235.562f, -485.459f, 40.2786f;
				case 2:
					return 2231.906f, -516.5745f, 40.2786f;
				case 3:
					return 2242.687f, -498.8543f, 40.2786f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_727(int iParam0)
{
	switch (Local_1444.f_50)
	{
		case -920598405:
			switch (iParam0)
			{
				case 0:
					return -97.06f;
				case 1:
					return -99.01f;
				case 2:
					return -86.02f;
				case 3:
					return -2.91f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

bool func_728(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!func_411(iParam1))
	{
		return false;
	}
	if (!can_register_mission_vehicles(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (func_1101(iParam1))
	{
		*uParam0 = veh_to_net(_create_mission_train(1054492269, vParam2, true, false, true, true));
	}
	else if (func_1102(iParam1))
	{
		*uParam0 = veh_to_net(_create_mission_train(-950361972, vParam2, true, false, true, true));
	}
	else if (iParam8 != 0 && _0xb9d5bdda88e1bb66(iParam1))
	{
		*uParam0 = veh_to_net(_create_draft_vehicle(iParam1, vParam2, fParam5, true, bParam6, bParam7, iParam8, bParam9));
	}
	else
	{
		*uParam0 = veh_to_net(create_vehicle(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam9));
	}
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_729(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_411(iParam1))
	{
		return false;
	}
	*uParam0 = obj_to_net(create_object(iParam1, vParam2, true, bParam5, false, false, true));
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam5)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_730(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_411(iParam1))
	{
		return false;
	}
	iVar0 = func_1103(iParam1, vParam2, iParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam9)
		{
			_0x899a04afcc725d04(iVar0, _0xd42514c182121c23(iParam1));
		}
		if (bParam10)
		{
			set_ped_relationship_group_hash(iVar0, _get_default_relationship_group_hash(iParam1));
		}
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_731(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	_0x8b6f0f59b1b99801(iParam0, 2);
	_0x992187d975635df5(iParam0, 283549708);
	_0x0b787a37eedd226f(iParam0, iParam1);
	_0x6569f31a01b4c097(iParam0, 10, 1);
	_0x18ff3110cf47115d(iParam0, 23, true);
	_0xae6004120c18df97(iParam0, 10, 1);
	_0xae6004120c18df97(iParam0, 1, 1);
	set_ped_config_flag(iParam0, 542, true);
	set_ped_config_flag(iParam0, 15, false);
	set_ped_config_flag(iParam0, 529, true);
	set_ped_config_flag(iParam0, 370, true);
	_0x4b436bac8cbe9b07(iParam0, 1, 1);
	set_ped_config_flag(iParam0, 588, true);
	set_ped_config_flag(iParam0, 568, true);
	set_ped_config_flag(iParam0, 585, true);
	set_ped_config_flag(iParam0, 297, true);
	set_ped_config_flag(iParam0, 583, true);
	set_ped_config_flag(iParam0, 305, true);
	set_ped_config_flag(iParam0, 306, true);
	set_ped_config_flag(iParam0, 186, true);
	set_ped_config_flag(iParam0, 465, true);
	set_ped_config_flag(iParam0, 388, true);
	set_ped_config_flag(iParam0, 587, true);
	set_animal_tuning_bool_param(iParam0, 76, true);
	set_animal_tuning_float_param(iParam0, 81, 0f);
	set_animal_tuning_float_param(iParam0, 82, 0f);
	set_animal_tuning_float_param(iParam0, 85, 0f);
	set_animal_tuning_float_param(iParam0, 83, 10f);
	set_animal_tuning_float_param(iParam0, 84, 0f);
	set_animal_tuning_float_param(iParam0, 89, 10f);
	set_animal_tuning_float_param(iParam0, 90, 0f);
	set_animal_tuning_float_param(iParam0, 105, 10f);
	set_animal_tuning_float_param(iParam0, 106, 0f);
	set_animal_tuning_float_param(iParam0, 78, 20f);
	set_ped_hearing_range(iParam0, 20f);
	if (iParam2 != -1)
	{
		iVar0 = func_1104(get_entity_model(iParam0));
		iVar1 = func_1105(iVar0, iParam2);
		set_entity_max_health(iParam0, iVar1);
		_set_entity_health(iParam0, iVar1, 0);
	}
}

void func_732(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		fVar0 = (((to_float(get_entity_health(iParam0)) - 100f) / (to_float(get_ped_max_health(iParam0)) - 100f)) * 100f);
		set_ped_max_health(iParam0, iParam1);
		_set_entity_health(iParam0, round((((fVar0 / 100f) * (to_float(get_ped_max_health(iParam0)) - 100f)) + 100f)), 0);
	}
}

int func_733(int iParam0)
{
	if (!func_630(1) && !func_630(2))
	{
		fVar0 = get_random_float_in_range(0f, 1f);
		fVar1 = func_1106(iParam0);
		if (fVar0 > fVar1 || fVar1 == 0f)
		{
			func_439(1);
		}
		else
		{
			func_439(2);
		}
	}
	if (func_630(1))
	{
		switch (iParam0)
		{
			case -809127215:
				return -1508185179;
			case 1706859953:
				return -44203702;
			case -53531786:
				return 2096045552;
			case 326175668:
				return 263659570;
			case -920598405:
				return 1659735712;
			default:
				break;
		}
	}
	else if (func_630(2))
	{
		switch (iParam0)
		{
			case -809127215:
				return -1210544352;
			case 1706859953:
				return 319532198;
			case -53531786:
				return -835665806;
			case 326175668:
				return -1657259210;
			case -920598405:
				return -972401444;
			default:
				break;
		}
	}
	return 0;
}

void func_734(int iParam0, int iParam1)
{
	func_1107(iParam0, iParam1);
}

int func_735()
{
	if (!func_372(&vVar0))
	{
		return -1;
	}
	vVar0.f_2 = -2111818647;
	if (!_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return -1;
	}
	iVar5 = _datafile_get_num_children(vVar0.x, vVar0.y);
	return iVar5;
}

struct<5> func_736(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = { func_1108() };
	Var0.f_4 = 0f;
	if (iParam0 <= -1)
	{
		return Var0;
	}
	if (!func_372(&Var5))
	{
		return Var0;
	}
	Var5.f_2 = -2111818647;
	if (!_datafile_get_data_node_index(&(Var5.f_1), &Var5))
	{
		return Var0;
	}
	uVar14 = Var5.f_1;
	Var5.f_1 = uVar14;
	Var5.f_2 = -947463643;
	Var5.f_3 = iParam0;
	if (!_datafile_get_data_node_index(&(Var5.f_1), &Var5))
	{
		return Var0;
	}
	if (!func_146(Var5, -332598258, &vVar10, 0))
	{
		return Var0;
	}
	if (!func_145(Var5, 382592596, &uVar13, 0))
	{
		return Var0;
	}
	Var0 = iParam0;
	Var0.f_1 = { vVar10 };
	Var0.f_4 = uVar13;
	return Var0;
}

bool func_737(int iParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	if (network_does_network_id_exist(&(Local_16.f_29[iParam0])))
	{
		return true;
	}
	Local_1444.f_51[iParam0]->f_4 = func_410();
	if (!func_730(Local_16.f_29[iParam0], Local_1444.f_51[iParam0]->f_4, vParam1, iParam4, 1, 0, 1, 1, 1))
	{
		return false;
	}
	Local_1444.f_51[iParam0]->f_5 = { vParam1 };
	Local_1444.f_51[iParam0]->f_8 = iParam4;
	Local_1444.f_51[iParam0] = net_to_ped(&(Local_16.f_29[iParam0]));
	if (bParam5)
	{
		Local_16.f_29[iParam0]->f_2 = -214860659;
	}
	else
	{
		iVar0 = get_random_int_in_range(0, 10);
		Local_16.f_29[iParam0]->f_2 = -1125105727;
		if (iVar0 >= 0 && iVar0 <= 2)
		{
			Local_16.f_29[iParam0]->f_2 = -85613452;
		}
		else if ((iVar0 >= 3 && iVar0 <= 4) && Local_1444.f_262 >= 2)
		{
			Local_16.f_29[iParam0]->f_2 = 783016369;
		}
	}
	Local_1444.f_265 = 1;
	StringCopy(&cVar1, "NAT007_POACHER", 64);
	sVar9 = func_931(iParam0);
	StringConCat(&cVar1, sVar9, 64);
	func_932(&(Local_1444.f_386), &(Local_1444.f_51[iParam0]), func_633(cVar1), 0);
	set_ped_drops_weapons_when_dead(&(Local_1444.f_51[iParam0]), false);
	_0x431240a58484d5d0(&(Local_1444.f_51[iParam0]), 0);
	_0x45e57fdd531c9477(&(Local_1444.f_51[iParam0]), 0);
	func_1109(iParam0);
	if (Local_16.f_29[iParam0]->f_2 == 783016369)
	{
		set_ped_combat_attributes(&(Local_1444.f_51[iParam0]), 57, true);
		set_ped_combat_attributes(&(Local_1444.f_51[iParam0]), 30, true);
	}
	if (!has_collision_loaded_around_entity(&(Local_1444.f_51[iParam0])))
	{
		set_entity_load_collision_flag(&(Local_1444.f_51[iParam0]), 1);
	}
	func_775(iParam0, 1);
	Local_16.f_2++;
	return true;
}

void func_738(int iParam0)
{
	Local_16.f_10 = iParam0;
	switch (Local_16.f_10)
	{
		case 0:
			break;
		case 2:
			break;
		case 3:
			Local_16.f_2 = 0;
			if (func_630(4))
			{
				func_746(4);
			}
			break;
		case 5:
			break;
	}
}

bool func_739(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_605(iParam0, iVar0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_740()
{
	switch (Local_16.f_9)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_741(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_1110(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_742(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -809127215:
			switch (iParam1)
			{
				case 0:
					return 22;
				case 1:
					return 22;
				case 2:
					return 25;
				case 3:
					return 25;
				case 4:
					return 20;
				default:
					break;
			}
			break;
		case 1706859953:
			switch (iParam1)
			{
				case 0:
					return 22;
				case 1:
					return 22;
				case 2:
					return 25;
				case 3:
					return 25;
				case 4:
					return 20;
				default:
					break;
			}
			break;
		case -53531786:
			switch (iParam1)
			{
				case 0:
					return 22;
				case 1:
					return 22;
				case 2:
					return 25;
				case 3:
					return 25;
				case 4:
					return 20;
				default:
					break;
			}
			break;
		case 326175668:
			switch (iParam1)
			{
				case 0:
					return 22;
				case 1:
					return 22;
				case 2:
					return 25;
				case 3:
					return 25;
				case 4:
					return 20;
				default:
					break;
			}
			break;
		case -920598405:
			switch (iParam1)
			{
				case 0:
					return 22;
				case 1:
					return 22;
				case 2:
					return 25;
				case 3:
					return 25;
				case 4:
					return 20;
				default:
					break;
			}
			break;
	}
	return 25;
}

void func_743()
{
	Local_16.f_2 = 0;
	func_1112(func_1111());
}

int func_744(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10)
{
	if (iParam7 < 0 || iParam7 >= *uParam0)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *uParam0)
	{
		iParam8 = (*uParam0 - 1);
	}
	if (fParam9 < 0f)
	{
		fParam9 = 0f;
	}
	if (fParam10 < 0f)
	{
		fParam10 = 999999.9f;
	}
	if (fParam9 > fParam10)
	{
	}
	iVar1 = 0;
	*iParam4 = 1E+07f;
	*iParam5 = -1;
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (!bParam6 || !is_entity_dead(uParam0[iVar0]))
		{
			if (!func_778(uParam0[iVar0]) && !func_1113(uParam0[iVar0]))
			{
				fVar2 = func_627(uParam0[iVar0], vParam1, 1);
				if (fVar2 < *iParam4)
				{
					if (fVar2 >= fParam9 && fVar2 <= fParam10)
					{
						*iParam4 = fVar2;
						iVar1 = uParam0[iVar0];
						*iParam5 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_745(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	return func_1114(get_entity_coords(iParam0, true, false), fParam1, 1203982208, 0, 0, 0, iParam2, bParam3);
}

void func_746(int iParam0)
{
	if (func_78(Local_16, iParam0))
	{
		func_445(&Local_16, iParam0);
	}
}

void func_747()
{
	fVar0 = func_910();
	fVar1 = ((get_frame_time() / 3000f) * fVar0);
	Local_16.f_11.f_17 = (Local_16.f_11.f_17 + fVar1);
}

void func_748(int iParam0)
{
	Local_16.f_11.f_1 = iParam0;
}

bool func_749(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -809127215:
			if (iParam1 == 0 || iParam1 == 2)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1706859953:
			return true;
		case -53531786:
			if (iParam1 != 2)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -920598405:
			return true;
		case 326175668:
			return true;
	}
	return false;
}

void func_750(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_78(&(Local_579[Local_2193.f_1333]), iParam0))
			{
				func_445(Local_579[Local_2193.f_1333], iParam0);
			}
		}
		iVar0++;
	}
}

Vector3 func_751(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case -809127215:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -2199.066f, 713.4493f, 121.3242f };
							break;
						case 1:
							vVar0 = { -2199.194f, 704.538f, 121.0174f };
							break;
						case 2:
							vVar0 = { -2203.946f, 709.1865f, 121.1899f };
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -2002.005f, 580.968f, 114.8027f };
							break;
						case 1:
							vVar0 = { -1995.11f, 585.6561f, 114.7415f };
							break;
						case 2:
							vVar0 = { -1999.36f, 586.1863f, 114.9016f };
							break;
					}
					break;
			}
			break;
		case 1706859953:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -2031.392f, -1801.253f, 113.2078f };
							break;
						case 1:
							vVar0 = { -2024.847f, -1803.113f, 111.8686f };
							break;
						case 2:
							vVar0 = { -2028.581f, -1809.655f, 111.6626f };
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -2149.056f, -1470.425f, 132.2462f };
							break;
						case 1:
							vVar0 = { -2155.379f, -1468.476f, 132.4825f };
							break;
						case 2:
							vVar0 = { -2146.968f, -1462.818f, 132.5856f };
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -2506.432f, -1441.947f, 144.5051f };
							break;
						case 1:
							vVar0 = { -2499.181f, -1447.976f, 145.0276f };
							break;
						case 2:
							vVar0 = { -2510.023f, -1459.148f, 145.1308f };
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -2410.501f, -1206.406f, 159.5204f };
							break;
						case 1:
							vVar0 = { -2407.273f, -1212.337f, 159.2663f };
							break;
						case 2:
							vVar0 = { -2416.639f, -1209.724f, 161.0041f };
							break;
					}
					break;
			}
			break;
		case -53531786:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -2183.287f, -2241.116f, 66.6246f };
							break;
						case 1:
							vVar0 = { -2181.042f, -2250.325f, 67.4297f };
							break;
						case 2:
							vVar0 = { -2186.854f, -2246.725f, 65.7603f };
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -2398.497f, -2370.448f, 60.1755f };
							break;
						case 1:
							vVar0 = { -2383.876f, -2362.845f, 61.0034f };
							break;
						case 2:
							vVar0 = { -2386.46f, -2378.349f, 60.2237f };
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -3052.628f, -2466.721f, 26.7403f };
							break;
						case 1:
							vVar0 = { -3013.929f, -2436.823f, 29.7111f };
							break;
						case 2:
							vVar0 = { -3031.667f, -2463.311f, 28.0401f };
							break;
						case 3:
							vVar0 = { -2986.731f, -2474.911f, 30.4027f };
							break;
					}
					break;
			}
			break;
		case -920598405:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							vVar0 = { 2221.219f, -507.4472f, 40.882f };
							break;
						case 1:
							vVar0 = { 2214.416f, -507.3682f, 41.2062f };
							break;
						case 2:
							vVar0 = { 2215.046f, -502.6778f, 41.1857f };
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							vVar0 = { 2374.83f, -533.71f, 40.88f };
							break;
						case 1:
							vVar0 = { 2383.06f, -538.51f, 40.55f };
							break;
						case 2:
							vVar0 = { 2381.84f, -522.83f, 40.69f };
							break;
						case 3:
							vVar0 = { 2372.85f, -521.92f, 40.83f };
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							vVar0 = { 2488.292f, -425.8964f, 40.6638f };
							break;
						case 1:
							vVar0 = { 2493.726f, -426.1203f, 40.5515f };
							break;
						case 2:
							vVar0 = { 2486.08f, -429.3391f, 40.6039f };
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							vVar0 = { 2542.624f, -287.4756f, 40.398f };
							break;
						case 1:
							vVar0 = { 2536.549f, -281.8861f, 40.2532f };
							break;
						case 2:
							vVar0 = { 2542.417f, -280.4463f, 39.8966f };
							break;
					}
					break;
			}
			break;
		case 326175668:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -1540.443f, 1719.546f, 238.6848f };
							break;
						case 1:
							vVar0 = { -1533.055f, 1716.79f, 238.3304f };
							break;
						case 2:
							vVar0 = { -1533.769f, 1708.331f, 237.4875f };
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -1761.035f, 1535.933f, 237.8819f };
							break;
						case 1:
							vVar0 = { -1765.307f, 1534.878f, 236.3311f };
							break;
						case 2:
							vVar0 = { -1764.471f, 1539.886f, 236.4936f };
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -1769.438f, 1702.652f, 236.7653f };
							break;
						case 1:
							vVar0 = { -1750.836f, 1685.101f, 236.4706f };
							break;
						case 2:
							vVar0 = { -1768.703f, 1686.94f, 237.2443f };
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							vVar0 = { -1940.26f, 1840.271f, 240.1007f };
							break;
						case 1:
							vVar0 = { -1934.716f, 1831.337f, 237.9552f };
							break;
						case 2:
							vVar0 = { -1943.652f, 1827.09f, 238.457f };
							break;
					}
					break;
			}
			break;
	}
	return vVar0;
}

float func_752(var uParam0)
{
	return (to_float(func_190(uParam0)) * 0.001f);
}

bool func_753(int iParam0, int iParam1)
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
	if (func_78(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_78(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_78(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_754(int iParam0, bool bParam1)
{
	if (((((func_755(iParam0, 780511057) || func_755(iParam0, -219932022)) || func_755(iParam0, 1120685857)) || func_755(iParam0, -2117564886)) || func_755(iParam0, 655999185)) || func_755(iParam0, 1345172471))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_755(iParam0, -653332088) || func_755(iParam0, 167901368))
		{
			return true;
		}
		if (is_ped_shooting(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_755(int iParam0, int iParam1)
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

bool func_756(int iParam0)
{
	iVar1 = net_to_ped(iParam0);
	if (!func_1113(iVar1))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!network_does_network_id_exist(&(Local_16.f_505[iVar0])))
			{
				Local_16.f_505[iVar0] = iParam0;
				func_205(&(Local_16.f_505[iVar0]->f_2));
				return true;
			}
			iVar0++;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_757(int iParam0)
{
	iVar1 = get_player_ped(iParam0);
	if (!func_1113(iVar1))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!network_is_player_active(Local_16.f_505[iVar0]->f_1) && !network_is_player_a_participant(Local_16.f_505[iVar0]->f_1))
			{
				Local_16.f_505[iVar0]->f_1 = iParam0;
				func_205(&(Local_16.f_505[iVar0]->f_5));
				return true;
			}
			iVar0++;
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_758(int iParam0)
{
	if (!func_1115(iParam0))
	{
		return -1;
	}
	if (!func_372(&Var0))
	{
		return -1;
	}
	Var0.f_2 = 290924059;
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return -1;
	}
	iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	uVar10 = Var0.f_1;
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		Var0.f_1 = uVar10;
		Var0.f_2 = -947463643;
		Var0.f_3 = iVar7;
		if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			return -1;
		}
		if (!func_39(Var0, 1940565578, &iVar8, 0))
		{
		}
		else if (iVar8 == iParam0)
		{
			iVar6++;
		}
		else if (!func_39(Var0, 1358162137, &iVar9, 0))
		{
		}
		else if (iVar9 == iParam0)
		{
			iVar6++;
		}
		iVar7++;
	}
	return iVar6;
}

void func_759()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = iVar0;
		func_1116(&iVar1);
		iVar0++;
	}
	Local_1444.f_273.f_51 = 0;
}

bool func_760(int iParam0, int iParam1)
{
	return func_78(Local_16.f_461[iParam0]->f_1, iParam1);
}

int func_761()
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_16.f_29[iVar0]->f_1 == 1 && !func_773(iVar0, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_762(int iParam0, int iParam1)
{
	if (!func_78(Local_16.f_461[iParam0]->f_1, iParam1))
	{
		func_149(&(Local_16.f_461[iParam0]->f_1), iParam1);
	}
}

bool func_763()
{
	if (Local_1444.f_265)
	{
		return false;
	}
	if (Local_16.f_10 < 2 || Local_16.f_10 > 3)
	{
		return false;
	}
	if (Local_16.f_3 >= func_1117(Local_1444.f_50, Local_16.f_9))
	{
		return false;
	}
	if (Local_16.f_10 != 2 && Local_16.f_2 >= func_742(Local_1444.f_50, Local_16.f_9))
	{
		return false;
	}
	return true;
}

bool func_764(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= 10)
	{
		return false;
	}
	return true;
}

struct<5> func_765()
{
	Var0 = -1;
	if (!func_753(func_471(), 0))
	{
		return Var0;
	}
	if (!func_1115(Local_1444.f_342))
	{
		return Var0;
	}
	iVar136 = func_1118(Local_1444.f_342, &Var5);
	if (iVar136 == -1)
	{
		return Var0;
	}
	iVar169 = 0;
	while (iVar169 < iVar136)
	{
		vVar165 = { Var5[iVar169]->f_1 };
		fVar168 = func_627(func_471(), vVar165, 1);
		if (fVar168 > 100f)
		{
		}
		else
		{
			iVar137[iVar164] = iVar169;
			iVar164++;
		}
		iVar169++;
	}
	iVar170 = get_random_int_in_range(0, iVar164);
	iVar171 = &iVar137[iVar170];
	return *Var5[iVar171];
}

struct<5> func_766(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = { func_1108() };
	Var0.f_4 = 0f;
	if (iParam0 <= -1)
	{
		return Var0;
	}
	if (!func_1115(iParam1))
	{
		return Var0;
	}
	if (!func_372(&Var5))
	{
		return Var0;
	}
	Var5.f_2 = 290924059;
	if (!_datafile_get_data_node_index(&(Var5.f_1), &Var5))
	{
		return Var0;
	}
	iVar10 = _datafile_get_num_children(Var5, Var5.f_1);
	if (iParam0 >= iVar10)
	{
		return Var0;
	}
	uVar21 = Var5.f_1;
	iVar12 = 0;
	while (iVar12 < iVar10)
	{
		Var5.f_1 = uVar21;
		Var5.f_2 = -947463643;
		Var5.f_3 = iVar12;
		if (!_datafile_get_data_node_index(&(Var5.f_1), &Var5))
		{
			return Var0;
		}
		bVar15 = func_39(Var5, 1940565578, &iVar13, 0);
		bVar16 = func_39(Var5, 1358162137, &iVar14, 0);
		if ((bVar15 && iVar13 == iParam1) || (bVar16 && iVar14 == iParam1))
		{
			if (iVar11 == iParam0)
			{
				if (!func_146(Var5, -332598258, &vVar17, 0))
				{
					return Var0;
				}
				if (!func_145(Var5, 382592596, &uVar20, 0))
				{
					return Var0;
				}
				Var0 = iVar12;
				Var0.f_1 = { vVar17 };
				Var0.f_4 = uVar20;
				return Var0;
			}
			else
			{
				iVar11++;
			}
		}
		iVar12++;
	}
	return Var0;
}

int func_767(vector3 vParam0, int iParam3)
{
	iVar0 = func_1119();
	if (!func_764(iVar0))
	{
		return -1;
	}
	func_1120(iVar0, vParam0);
	func_1121(iVar0, iParam3);
	return iVar0;
}

struct<5> func_768(int iParam0)
{
	if (!func_764(*iParam0))
	{
		Var0 = 0;
		return Var0;
	}
	if (&Local_1444.f_273[*iParam0] == 0)
	{
		Var0 = 0;
		func_1116(iParam0);
		return Var0;
	}
	Var0.f_1 = { func_787(*iParam0) };
	Var0.f_4 = func_1122(*iParam0);
	if (func_68(Var0.f_1))
	{
		Var0 = 0;
		func_1116(iParam0);
		return Var0;
	}
	switch (&Local_1444.f_273[*iParam0])
	{
		case 1:
			if (!func_1123(Var0.f_1, 120f))
			{
				Var0 = 2;
				func_1116(iParam0);
				return Var0;
			}
			else if (func_1123(Var0.f_1, 20f))
			{
				Var0 = 3;
				func_1116(iParam0);
				return Var0;
			}
			else
			{
				func_789(*iParam0, 2);
			}
			break;
		case 2:
			break;
		case 3:
			Var0 = 2;
			func_1116(iParam0);
			return Var0;
		case 4:
			Var0 = 3;
			func_1116(iParam0);
			return Var0;
	}
	Var0 = 1;
	return Var0;
}

bool func_769(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 70)
	{
		return false;
	}
	if (!func_162(Local_16.f_250[iParam0]))
	{
		return false;
	}
	if (func_190(Local_16.f_250[iParam0]) > 5000)
	{
		return false;
	}
	return true;
}

void func_770(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 70)
	{
		return;
	}
	func_205(Local_16.f_250[iParam0]);
}

void func_771(vector3 vParam0)
{
	if (func_68(vParam0))
	{
		return;
	}
	if (!func_763())
	{
		return;
	}
	iVar0 = func_761();
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (Local_16.f_2 % 3);
	iVar2 = func_1124();
	if ((Local_16.f_4 < func_1125(Local_1444.f_50, Local_16.f_9) && iVar1 == 1) && (iVar2 >= 0 && iVar2 < 7))
	{
		if (func_1126(iVar2, vParam0))
		{
			func_762(iVar2, 1);
		}
	}
	else if (func_737(iVar0, vParam0, 0, 0))
	{
	}
}

void func_772(int iParam0, int iParam1)
{
	Local_16.f_29[iParam0]->f_1 = iParam1;
}

bool func_773(int iParam0, int iParam1)
{
	return func_78(Local_16.f_29[iParam0]->f_3, iParam1);
}

void func_774(int iParam0, int iParam1)
{
	if (func_78(Local_16.f_29[iParam0]->f_3, iParam1))
	{
		func_445(&(Local_16.f_29[iParam0]->f_3), iParam1);
	}
}

void func_775(int iParam0, int iParam1)
{
	if (!func_78(Local_16.f_29[iParam0]->f_3, iParam1))
	{
		func_149(&(Local_16.f_29[iParam0]->f_3), iParam1);
	}
}

int func_776(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	return get_player_ped(func_745(iParam0, fParam1, iParam2, bParam3));
}

float func_777(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_778(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

bool func_779(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (!func_938(iParam0, iParam1, iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_780(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_938(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_781()
{
	Local_16.f_1++;
	if (Local_16.f_1 >= 20)
	{
		Local_16.f_1 = 0;
	}
}

bool func_782(int iParam0)
{
	if (!func_1127(iParam0, 20, &iVar0, &iVar1))
	{
		return false;
	}
	return is_bit_set(&(Local_16.f_6[iVar0]), iVar1);
}

bool func_783(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 20)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar0)))
		{
		}
		else if (func_1128(iVar0, iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_784(int iParam0, bool bParam1)
{
	if (!func_1127(iParam0, 20, &iVar0, &iVar1))
	{
		return;
	}
	if (bParam1)
	{
		set_bit(Local_16.f_6[iVar0], iVar1);
	}
	else
	{
		clear_bit(Local_16.f_6[iVar0], iVar1);
	}
}

int func_785()
{
	iVar0 = Local_1444.f_273.f_53 + 1;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = ((iVar0 + iVar1) % 10);
		iVar3 = iVar2;
		if (&Local_1444.f_273[iVar3] == 2)
		{
			return iVar3;
		}
		iVar1++;
	}
	return -1;
}

var func_786()
{
	return Local_16.f_559 + 1;
}

Vector3 func_787(int iParam0)
{
	if (!func_764(iParam0))
	{
		return func_1108();
	}
	return Local_1444.f_273[iParam0]->f_1;
}

int func_788()
{
	iVar0 = 2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar2))
		{
		}
		else if (!network_is_player_a_participant(iVar2))
		{
		}
		else
		{
			iVar3 = network_get_participant_index(iVar2);
			iVar4 = iVar3;
			if (!func_1129(iVar4, 1, 1))
			{
			}
			else if (func_1130(iVar4))
			{
			}
			else if (Local_579[iVar4]->f_1 != Local_16.f_559)
			{
				iVar0 = 0;
				Jump @171; //curOff = 111
			}
			else if (Local_579[iVar4]->f_1.f_1 == 0)
			{
				iVar0 = 0;
				Jump @171; //curOff = 135
			}
			else if (Local_579[iVar4]->f_1.f_1 == 2)
			{
				iVar0 = 1;
			}
			else
			{
				iVar1++;
			}
			return iVar0;
		}
	}
}

void func_789(int iParam0, int iParam1)
{
	Local_1444.f_273[iParam0] = iParam1;
}

bool func_790(int iParam0)
{
	if (!network_is_participant_active(int_to_participantindex(iParam0)))
	{
		return false;
	}
	if (!func_65(131072))
	{
		return false;
	}
	if (&Local_2000[iParam0] < 2)
	{
		return false;
	}
	if (Local_2000[iParam0]->f_4 < 1)
	{
		return false;
	}
	if (Local_2000[iParam0]->f_4 < 0)
	{
		return false;
	}
	return true;
}

int func_791(int iParam0)
{
	if (iParam0 == 255)
	{
		return 0;
	}
	else if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	Local_1950.f_10 = iParam0;
	return 1;
}

void func_792(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_793(int iParam0)
{
	Var0.f_1 = 255;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_5 = -1;
	*Global_1108365->f_34.f_353[iParam0] = { Var0 };
	(*Global_1288736)[network_player_id_to_int()]->f_66 = 0;
}

void func_794(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
	Global_1108365->f_34[iParam0]->f_6 = 0;
	Var0 = 4;
	*Global_1108365->f_34[iParam0] = { Var0 };
	func_1131(iParam0);
	Var11 = 255;
	*(*(*Global_1288736)[network_player_id_to_int()])[iParam0] = { Var11 };
	if ((!func_1132() || !func_1133()) || Global_1572887->f_6)
	{
		func_652(_create_var_string(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, 1);
	}
	if (!func_1134(&(Global_1108365->f_34[iParam0]->f_8), 256))
	{
		if (func_1135(Global_1108365->f_34.f_774) < 2 || Global_1108365->f_34.f_778 != 255)
		{
			func_1136(&(Global_1108365->f_34.f_773), 64);
		}
		else
		{
			func_1136(&(Global_1108365->f_34.f_773), 32);
		}
		Global_1108365->f_34.f_774 = Global_1296859->f_21;
	}
}

void func_795(int iParam0, bool bParam1)
{
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_connected(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1108365->f_34[iVar0]->f_6)
	{
		return;
	}
	func_1137(iParam0);
	func_1000(iParam0);
	func_1001(iParam0);
	func_1138(&(Global_1108365->f_34[iVar0]->f_8), 2);
	func_1131(iVar0);
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iVar0]) == iParam0 && !func_1134(&(Global_1108365->f_34[iVar0]->f_8), 256))
	{
		if (func_1135(Global_1108365->f_34.f_774) < 2 || Global_1108365->f_34.f_778 != 255)
		{
			func_1136(&(Global_1108365->f_34.f_773), 64);
		}
		else
		{
			func_1136(&(Global_1108365->f_34.f_773), 32);
			Global_1108365->f_34.f_778 = iParam0;
		}
		Global_1108365->f_34.f_774 = Global_1296859->f_21;
		func_652(_create_var_string(10, "PARLEY_TICKER_END", func_555(get_player_name(iParam0), func_554(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	*Global_1108365->f_34[iVar0] = { Var1 };
	Var12 = 255;
	*(*(*Global_1288736)[network_player_id_to_int()])[iVar0] = { Var12 };
	if (!bParam1)
	{
		return;
	}
	_0x31010318ba9897ac(&uVar14, iVar0);
	Var15.f_5 = player_id();
	Var15.f_4 = 5;
	func_1139(&Var15, &uVar14);
}

bool func_796(int iParam0)
{
	if ((*Global_1288736)[iParam0]->f_66)
	{
		return (*Global_1288736)[iParam0]->f_66;
	}
	return &(Global_1108365->f_34.f_353[iParam0]);
}

bool func_797(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

int func_798(vector3 vParam0, float fParam3)
{
	if (!func_159(Local_2193.f_1333))
	{
		return 0;
	}
	if (!func_115())
	{
		return 0;
	}
	func_1140(-276653911, &fVar0, &fVar1, &fVar2);
	set_particle_fx_non_looped_colour(fVar0, fVar1, fVar2);
	if (start_particle_fx_non_looped_at_coord("scr_fme_smoke_puff_tint", vParam0, 0f, 0f, 0f, fParam3, false, false, false))
	{
		return 1;
	}
	return 0;
}

void func_799()
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	func_1141();
	iVar1 = _0x80d78bdc9d88ef07(_inventory_get_ped_inventory_id(Global_34), "ALL WEAPONS", -1591664384, &iVar0);
	if (iVar1 < 0 || iVar0 <= 0)
	{
		_0x42a2f33a1942e865(iVar1);
		return;
	}
	if (func_1142(&iVar2, &iVar3))
	{
		func_1143(iVar2, iVar3, 0);
	}
	bVar4 = false;
	iVar5 = func_527();
	Var6.f_9 = -1591664384;
	Var20.f_9 = -1591664384;
	iVar37 = -1;
	iVar38 = -1;
	iVar39 = -1;
	iVar40 = -1;
	iVar41 = -1;
	iVar42 = -1;
	iVar43 = -1;
	iVar34 = 0;
	while (iVar34 <= (iVar0 - 1))
	{
		Var6 = { Var20 };
		if (_0x82fa24c3d3fcd9b7(iVar1, iVar34, &Var6))
		{
			if (iVar5 != 0 && Var6.f_4 == iVar5)
			{
				bVar4 = true;
			}
			if (_0x705be297eebdb95d(Var6.f_4) && _0xf29a186ed428b552(Global_34, Var6.f_4))
			{
				if (_is_weapon_revolver(Var6.f_4))
				{
					iVar37 = func_1144(1681219929, 0, 0, 0);
					iVar37 = (iVar37 + func_1144(1232099469, 0, 0, 0));
					iVar37 = (iVar37 + func_1144(78180283, 0, 0, 0));
					iVar37 = (iVar37 + func_1144(-2084181920, 0, 0, 0));
					iVar37 = (iVar37 + func_1144(1243983880, 0, 0, 0));
					iVar35 = (iVar35 + iVar37);
				}
				else if (_is_weapon_pistol(Var6.f_4))
				{
					iVar38 = func_1144(1950175060, 0, 0, 0);
					iVar38 = (iVar38 + func_1144(836939099, 0, 0, 0));
					iVar38 = (iVar38 + func_1144(1185302722, 0, 0, 0));
					iVar38 = (iVar38 + func_1144(-1411815376, 0, 0, 0));
					iVar38 = (iVar38 + func_1144(236338048, 0, 0, 0));
					iVar35 = (iVar35 + iVar38);
				}
				else if (_is_weapon_repeater(Var6.f_4))
				{
					iVar39 = func_1144(-1330115686, 0, 0, 0);
					iVar39 = (iVar39 + func_1144(-578347576, 0, 0, 0));
					iVar39 = (iVar39 + func_1144(-1668585578, 0, 0, 0));
					iVar39 = (iVar39 + func_1144(231465488, 0, 0, 0));
					iVar39 = (iVar39 + func_1144(1148521608, 0, 0, 0));
					iVar36 = (iVar36 + iVar39);
				}
				else if (Var6.f_4 == -570967010)
				{
					iVar40 = func_1144(2113196069, 0, 0, 0);
					iVar40 = func_1144(-1903059161, 0, 0, 0);
					iVar36 = (iVar36 + iVar40);
				}
				else if (_is_weapon_rifle(Var6.f_4) || _is_weapon_sniper(Var6.f_4))
				{
					iVar41 = func_1144(218444191, 0, 0, 0);
					iVar41 = (iVar41 + func_1144(-1282254562, 0, 0, 0));
					iVar41 = (iVar41 + func_1144(1654725195, 0, 0, 0));
					iVar41 = (iVar41 + func_1144(1838310467, 0, 0, 0));
					iVar41 = (iVar41 + func_1144(1858824185, 0, 0, 0));
					iVar41 = (iVar41 + func_1144(200254898, 0, 0, 0));
					iVar36 = (iVar36 + iVar41);
				}
				else if (_is_weapon_shotgun(Var6.f_4))
				{
					iVar42 = func_1144(-1878508229, 0, 0, 0);
					iVar42 = (iVar42 + func_1144(-1077205471, 0, 0, 0));
					iVar42 = (iVar42 + func_1144(314966081, 0, 0, 0));
					iVar42 = (iVar42 + func_1144(588559146, 0, 0, 0));
					if (Var6.f_4 == 392538360)
					{
						iVar35 = (iVar35 + iVar42);
					}
					else
					{
						iVar36 = (iVar36 + iVar42);
					}
				}
				else if (func_1145(Var6.f_4))
				{
					iVar43 = func_1144(954660191, 0, 0, 0);
					iVar43 = (iVar43 + func_1144(-1040876935, 0, 0, 0));
					iVar43 = (iVar43 + func_1144(296901449, 0, 0, 0));
					iVar43 = (iVar43 + func_1144(-1841822177, 0, 0, 0));
					iVar43 = (iVar43 + func_1144(126245522, 0, 0, 0));
					iVar43 = (iVar43 + func_1144(1657716792, 0, 0, 0));
					iVar36 = (iVar36 + iVar43);
				}
			}
		}
		iVar34++;
	}
	if (iVar37 >= 0)
	{
		iVar44 = 30;
		if (iVar35 < iVar44)
		{
			func_1143(1681219929, (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar38 >= 0)
	{
		iVar44 = 20;
		if (iVar35 < iVar44)
		{
			func_1143(1950175060, (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar39 >= 0)
	{
		iVar44 = 20;
		if (iVar36 < iVar44)
		{
			func_1143(-1330115686, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar41 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			func_1143(218444191, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar40 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			func_1143(2113196069, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar42 >= 0)
	{
		iVar44 = 6;
		if (!_0xf29a186ed428b552(Global_34, 392538360))
		{
			if (iVar36 < iVar44)
			{
				func_1143(-1878508229, (iVar44 - iVar36), 0);
				iVar36 = iVar44;
			}
		}
		else if (iVar35 < iVar44)
		{
			func_1143(-1878508229, (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar43 >= 0)
	{
		iVar44 = 5;
		if (iVar36 < iVar44)
		{
			func_1143(954660191, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	_0x42a2f33a1942e865(iVar1);
	if (iVar5 != 0)
	{
		if (!bVar4 || !_0xf29a186ed428b552(Global_34, iVar5))
		{
			if (func_1146(iVar5) && !func_137(8388608))
			{
				func_43(8388608);
			}
		}
	}
}

void func_800()
{
	func_1147(0);
}

bool func_801()
{
	return Global_1940311->f_1;
}

void func_802()
{
	if (_get_number_of_references_of_script_with_name_hash(-4058091) > 0)
	{
		Global_1940311->f_12 = 1;
	}
}

bool func_803(struct<5> Param0, int iParam5, var uParam6)
{
	if (func_40(Param0, iParam5, &uVar0, 0))
	{
		*uParam6 = uVar0;
		return true;
	}
	return false;
}

bool func_804(struct<5> Param0, int iParam5, var uParam6)
{
	if (func_40(Param0, iParam5, &uVar0, 0))
	{
		*uParam6 = uVar0;
		return true;
	}
	return false;
}

void func_805(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_1148(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_1148(uParam0))
		{
		}
	}
}

Vector3 func_806(int iParam0)
{
	switch (iParam0)
	{
		case -809127215:
			return 1.02f, -1.85f, 1.11f;
		case 1706859953:
			return 1.02f, -1.85f, 1.11f;
		case -53531786:
			return 0.548f, -1.15f, 0.73f;
		case 326175668:
			return 0.548f, -1.15f, 0.73f;
		case -920598405:
			return 1.02f, -1.85f, 1.11f;
		default:
			break;
	}
	return 1.02f, -1.85f, 1.11f;
}

bool func_807(int iParam0, bool bParam1)
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

void func_808(int iParam0, int iParam1, int iParam2)
{
	set_relationship_between_groups(iParam0, iParam1, iParam2);
	set_relationship_between_groups(iParam0, iParam2, iParam1);
}

bool func_809()
{
	return (Global_1296851->f_2.f_1 == 2 || Global_1296851->f_2.f_1 == 1);
}

bool func_810(int iParam0, struct<2> Param1, var uParam3)
{
	if (func_16(Param1, 0, 128))
	{
		return false;
	}
	func_817(iParam0, Param1);
	if (iParam0 == -1)
	{
		return false;
	}
	if (Global_1196898->f_78[iParam0]->f_3 == -1)
	{
		return false;
	}
	if (func_18(iParam0, 32))
	{
		return true;
	}
	if (!func_73(Param1))
	{
		return false;
	}
	else if (!func_363(Param1))
	{
		return false;
	}
	else if (func_364(Param1))
	{
		return false;
	}
	Var0 = { func_157() };
	if (func_73(Var0) && !func_74(Var0, Param1))
	{
		if (func_158())
		{
			func_248(iParam0, 262144);
			func_1149(1);
		}
		else
		{
			return false;
		}
	}
	func_1150(Param1, 1, 1, 1);
	func_1151(Param1, 1, 0, -1);
	func_1152(2);
	func_1153(Global_1196898->f_78[iParam0]->f_3, uParam3);
	func_248(iParam0, 32);
	func_1154(7);
	if (func_676(Global_1196898->f_78[iParam0]->f_3) != -785841056)
	{
		func_1155();
		_0x7d654266025e921b(1638906956);
	}
	else
	{
		_0x7d654266025e921b(784116709);
		_0xe5a680a5d8b1f687(1);
	}
	return true;
}

void func_811(bool bParam0)
{
	if (Local_2193.f_9 == -785841056 && !func_133(func_132(Local_2193.f_1)))
	{
		func_1156(func_132(Local_2193.f_1));
		if (bParam0)
		{
			func_1157(func_132(Local_2193.f_1), Local_2193.f_7, -1);
		}
	}
}

bool func_812()
{
	switch (Local_2193.f_1)
	{
		case 18:
			return true;
		default:
			break;
	}
	return false;
}

bool func_813(int iParam0)
{
	return true;
}

bool func_814()
{
	return func_517(_0xc17f69e1418cd11f(6));
}

var func_815(int iParam0, int iParam1, var uParam2, struct<2> Param3)
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
	Var0.f_18 = 1105014447;
	Var0.f_19 = 1105014447;
	Var0.f_23 = 300;
	Var0.f_31.f_8 = 1105014447;
	Var0.f_31.f_11 = 1105014447;
	Var0.f_31.f_12 = 8000;
	Var0.f_31.f_13 = 1511356879;
	Var0.f_31.f_15 = 1433015236;
	Var0.f_31.f_21 = 1;
	Var53 = { func_27(iParam1, uParam2) };
	Var0.f_20 = func_1158(iParam1);
	Var0.f_21 = func_1159(iParam1);
	Var0.f_24 = 6;
	Var0.f_25 = func_1009(Param3);
	Var0.f_23 = 180;
	if (func_676(iParam1) != -785841056)
	{
		Var0.f_31.f_2 = _create_var_string(10, "FME_TOAST_OPT_IN_TITLE", &Var53);
		Var0.f_16 = _create_var_string(2, &Var53);
		Var0.f_17 = _create_var_string(2, "FME_PI_MENU_BODY");
		Var0.f_2 = -276653911;
		Var0.f_19 = -276653911;
	}
	else
	{
		iVar61 = Global_1196339->f_1[iParam0]->f_7;
		if (!network_is_player_active(iVar61))
		{
			return 0;
		}
		Var0.f_31.f_2 = _create_var_string(10, "FME_TOAST_OPT_IN_TITLE_POSSE_VERSUS", &Var53);
		Var0.f_16 = _create_var_string(10, "FME_PI_MENU_TITLE_POSSE_VERSUS", get_player_name(iVar61));
		Var0.f_17 = _create_var_string(2, &Var53);
	}
	Var0.f_31.f_3 = _create_var_string(2, "NM_TI_VIEW_INVITE_FREE_MODE_EVENT");
	Var0.f_31.f_6 = func_1158(iParam1);
	Var0.f_31.f_7 = func_1159(iParam1);
	Var0.f_31.f_17 = func_122();
	Var0.f_31.f_18 = func_121();
	Var0.f_22 = 1;
	return func_1160(Var0);
}

bool func_816()
{
	switch (Local_2193.f_1)
	{
		case 18:
			return true;
		default:
			break;
	}
	return false;
}

int func_817(int iParam0, struct<2> Param1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18(iParam0, 16))
	{
		return 1;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	else if (func_363(Param1))
	{
		return 0;
	}
	else if (func_364(Param1))
	{
		return 0;
	}
	func_1161(Param1);
	func_248(iParam0, 16);
	return 1;
}

bool func_818(int iParam0, int iParam1, int iParam2)
{
	return func_78((*Global_1196567)[iParam2][iParam0], iParam1);
}

bool func_819(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

int func_820()
{
	return Global_1915715->f_20241;
}

void func_821(int iParam0, bool bParam1)
{
	if (!func_1162(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1163(iParam0, 512)) || (!bParam1 && !func_1163(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_1164(iParam0, 512);
	}
	else
	{
		func_1165(iParam0, 512);
	}
	if (func_1166(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_822()
{
	return true;
}

void func_823()
{
	if (does_entity_exist(Global_34))
	{
		if (!is_entity_dead(Global_34) && _0x7a4e00364b5d727b(Global_34))
		{
			func_336(1024);
		}
		if (!func_137(1024))
		{
			func_347(0);
			func_43(1024);
		}
	}
}

void func_824()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && func_159(iVar0))
		{
			func_1167(network_get_player_index(int_to_participantindex(iVar0)));
		}
		iVar0++;
	}
	if (!func_137(2048))
	{
		if (Local_2193.f_9 == -785841056)
		{
			func_348(1);
		}
		else
		{
			func_349(0);
			_0x710448d44a64c213(0);
			_0xc805eb785824f712(0);
		}
		func_43(2048);
	}
}

bool func_825(var uParam0)
{
	return true;
}

void func_826()
{
	if (!func_137(1))
	{
		func_43(1);
	}
	if (!func_827(255))
	{
		func_346(1);
	}
}

bool func_827(int iParam0)
{
	return func_170(49, iParam0);
}

bool func_828(int iParam0)
{
	return func_170(48, iParam0);
}

int func_829(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7)
{
	if (func_828(255))
	{
		func_1168(&(Global_1102219->f_3879));
		Global_1102219->f_3879.f_6 = { vParam0 };
		if (does_entity_exist(iParam7))
		{
			Global_1102219->f_3879.f_4 = iParam7;
			Global_1102219->f_3879.f_5 = 3;
		}
		else if (!func_68(vParam4))
		{
			Global_1102219->f_3879.f_1 = { vParam4 };
			Global_1102219->f_3879.f_5 = 2;
		}
		else
		{
			Global_1102219->f_3879 = fParam3;
			Global_1102219->f_3879.f_5 = 1;
		}
		func_1169(Global_1102219->f_3879, 36);
		func_172(4);
		func_171(48);
		return 1;
	}
	return 0;
}

int func_830(var uParam0, var uParam1, float fParam2)
{
	*uParam0 = 1f;
	*uParam1 = fParam2;
	if (*uParam1 <= *uParam0)
	{
		*uParam1 = 200f;
	}
	else if (*uParam1 > 200f)
	{
		*uParam1 = 200f;
	}
	return 1;
}

int func_831(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	*uParam2 = 1f;
	*uParam3 = fParam4;
	if (((func_36(&Var0, iParam0) && func_44(&Var0)) && func_45(&Var0, uParam1)) && func_863(&Var0))
	{
		func_145(Var0, -1963437248, uParam2, 0);
		func_145(Var0, -415053522, uParam3, 0);
	}
	if (*uParam3 <= *uParam2)
	{
		*uParam3 = 200f;
	}
	else if (*uParam3 > 200f)
	{
		*uParam3 = 200f;
	}
	return 1;
}

void func_832(int iParam0, var uParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7, var uParam8, var uParam9)
{
	vVar0 = { vParam2 };
	if (fParam7 > fParam6)
	{
		fVar3 = (fParam7 - fParam6);
		iVar5 = 32;
		iVar13 = 0;
		iVar13 = 0;
		while (iVar13 <= 20)
		{
			vVar6 = { func_1170(vParam2, fVar3, 0f) };
			if (func_1171(&vVar6, 9999.9f))
			{
				uVar12 = func_1172(vParam2, 0f, 0f, 0f, fParam6, fParam6, fParam6, -432403087, 1, 8);
				iVar4 = count_player_bits(&uVar12);
				if (iVar4 < iVar5)
				{
					iVar5 = iVar4;
					vVar9 = { vVar6 };
				}
			}
			iVar13++;
		}
		if (!func_68(vVar9))
		{
			vParam2 = { vVar9 };
		}
	}
	uParam8->f_5 = 2;
	uParam8->f_1 = { vVar0 };
	uParam8->f_17.f_6 = { vParam2 };
	uParam8->f_17 = { fParam6, fParam6, fParam6 };
	if (fParam6 > 15f)
	{
		uParam8->f_17 = { fParam6, fParam6, 15f };
	}
	uParam8->f_17.f_9 = -432403087;
	uParam8->f_6.f_6 = { vParam2 };
	uParam8->f_6 = { fParam5, fParam5, fParam5 };
	if (fParam5 > 15f)
	{
		uParam8->f_6 = { fParam5, fParam5, 15f };
	}
	uParam8->f_6.f_9 = -432403087;
	uParam8->f_16 = 1;
	uParam9->f_5 = 2;
	uParam9->f_1 = { vVar0 };
	uParam9->f_6 = { vParam2 };
	_0xeb6027fd1b4600d5(9, 1, 2f);
	_0xeb6027fd1b4600d5(7, 1, 2f);
	_0xeb6027fd1b4600d5(15, 0, 0.75f);
	_0xeb6027fd1b4600d5(13, 0, 0.75f);
	_0xeb6027fd1b4600d5(19, 1, 0.05f);
	_0x44d59ec597bbf348(1, 0);
	_0x44d59ec597bbf348(2, 1);
	_0x44d59ec597bbf348(3, 0);
	func_1173(1);
	if (((!func_137(134217728) && !func_579(2, -1)) && !func_506(iParam0, uParam1)) && func_507(iParam0, uParam1))
	{
		func_508(1, 0);
	}
}

void func_833(float fParam0, var uParam1, var uParam2)
{
}

void func_834(var uParam0, var uParam1, var uParam2)
{
	if (_does_volume_exist(*uParam2))
	{
		_delete_volume(*uParam2);
	}
	if (!func_68(uParam0->f_17))
	{
		*uParam2 = _create_volume_sphere(uParam0->f_17.f_6, 0f, 0f, 0f, uParam0->f_17);
		_0x405ddefb1f531b18(*uParam2, 1, 0, 0);
	}
	if (_does_volume_exist(*uParam1))
	{
		_delete_volume(*uParam1);
	}
	if (!func_68(uParam0->f_6))
	{
		*uParam1 = _create_volume_sphere(uParam0->f_6.f_6, 0f, 0f, 0f, uParam0->f_6);
		_0x405ddefb1f531b18(*uParam1, 0, 0, 0);
	}
	_0x59577799f6ae2f34(1f);
}

void func_835(var uParam0, var uParam1)
{
	func_1174(*uParam0, *uParam1, 0, 0, 1);
}

void func_836(bool bParam0)
{
	func_874(bParam0, Local_2193.f_1389);
	Local_2193.f_1389++;
	if (Local_2193.f_1389 >= 32)
	{
		Local_2193.f_1389 = 0;
	}
}

void func_837()
{
	func_511(&(Global_1071686->f_22973.f_3), 4);
}

void func_838(bool bParam0)
{
	func_1175();
	func_877(Local_2193.f_1389, bParam0);
	Local_2193.f_1389++;
	if (Local_2193.f_1389 >= 32)
	{
		Local_2193.f_1389 = 0;
	}
}

void func_839()
{
	func_1175();
	func_875(Local_2193.f_1389);
	Local_2193.f_1389++;
	if (Local_2193.f_1389 >= 32)
	{
		Local_2193.f_1389 = 0;
	}
}

void func_840()
{
	func_1175();
	func_876(Local_2193.f_1389);
	Local_2193.f_1389++;
	if (Local_2193.f_1389 >= 32)
	{
		Local_2193.f_1389 = 0;
	}
}

void func_841(float fParam0)
{
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = int_to_playerindex(iVar1);
		if ((network_is_player_active(iVar0) && iVar0 != player_id()) && network_is_player_a_participant(iVar0))
		{
			_0x5a91bcef74944e93(iVar0, fParam0);
		}
		iVar1++;
	}
}

void func_842(int iParam0, float fParam1)
{
	iVar0 = int_to_playerindex(iParam0);
	if ((network_is_player_active(iVar0) && iVar0 != player_id()) && network_is_player_a_participant(iVar0))
	{
		iVar1 = network_get_participant_index(iVar0);
		if (func_159(iVar1))
		{
			_0x5a91bcef74944e93(iVar0, fParam1);
		}
	}
}

int func_843(var uParam0, bool bParam1)
{
	if (!func_1176())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_1177())
			{
				uParam0->f_3 = _uiflowblock_request(-119209833);
				func_537(1);
				func_1178(uParam0, 1);
			}
			return 0;
		case 1:
			if (!func_1179())
			{
				return 0;
			}
			func_1178(uParam0, 2);
			break;
	}
	Global_1940144->f_110 = 1;
	return 1;
}

int func_844(var uParam0)
{
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = _databinding_add_data_container_from_path("", "centralInfoDatastore");
		func_1180(uParam0->f_5, &(uParam0->f_6), 0);
		func_1180(uParam0->f_5, &(uParam0->f_7), 1);
		func_1180(uParam0->f_5, &(uParam0->f_8), 37);
		func_1181(uParam0->f_8, 1);
		return 0;
	}
	return 1;
}

int func_845(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (_uiflowblock_is_loaded(uParam0->f_3))
			{
				func_1182(uParam0, 1);
			}
			break;
		case 1:
			*uParam0 = iParam1;
			if (*uParam0 != 0)
			{
				_uiflowblock_enter(uParam0->f_3, *uParam0);
				_uistatemachine_create(1546991729, uParam0->f_3);
			}
			func_1182(uParam0, 2);
			break;
		case 2:
			if (iParam1 != *uParam0)
			{
				func_1182(uParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (_uistatemachine_exists(1546991729) && _0xf7c180f57f85d0b8(1546991729))
			{
				_0x6b9fe4f0ba521a19(1546991729, 0);
				func_1182(uParam0, 4);
			}
			else
			{
				func_1182(uParam0, 0);
			}
			break;
		case 4:
			if (!_0x11e73195e735b25b(1546991729))
			{
				*bParam2 = 1;
				func_1182(uParam0, 0);
			}
			break;
	}
	return 0;
}

void func_846(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	sVar0 = func_1183(iParam1, bParam2, 3, 0, 0, 0);
	if (uParam0->f_13 != iParam1)
	{
		func_1184(uParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (uParam0->f_14 != bVar1)
	{
		func_1181(uParam0->f_7, bVar1);
		uParam0->f_14 = bVar1;
	}
	func_1185(uParam0, iParam1, sParam4);
	func_1186(uParam0, iParam1);
	uParam0->f_13 = iParam1;
}

char* func_847()
{
	return "321_Countdown";
}

char* func_848()
{
	return "HUD_MP_FREE_MODE";
}

var func_849(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	return func_1187(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

var func_850(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_851()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

bool func_852(int iParam0)
{
	return func_170(27, iParam0);
}

bool func_853(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_854(int iParam0)
{
	if (!func_853(iParam0))
	{
		return false;
	}
	return func_857(iParam0, 8);
}

void func_855(int iParam0, int iParam1)
{
	if (!func_853(iParam0))
	{
		return;
	}
	(*Global_1887339)[iParam0]->f_20 = iParam1;
}

void func_856(int iParam0)
{
	Global_1893587 = (Global_1893587 || iParam0);
}

bool func_857(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

void func_858(int iParam0)
{
	Global_1893587 = (&Global_1893587 - (Global_1893587 && iParam0));
}

bool func_859(bool bParam0)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_857(iVar1, 1))
		{
			if (does_script_exist(&((*Global_1887339)[iVar1]->f_27)))
			{
				set_script_as_no_longer_needed(&((*Global_1887339)[iVar1]->f_27));
			}
		}
		if ((*Global_1887339)[iVar1]->f_10 != 0)
		{
			if (is_thread_active((*Global_1887339)[iVar1]->f_10, false))
			{
				if (func_23() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1887339)[iVar1]->f_10, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1887339)[iVar1]->f_10))
				{
					_0x7de4643157ad646c((*Global_1887339)[iVar1]->f_10);
				}
			}
			else if (func_857(iVar1, 2))
			{
				if (func_23() == -1)
				{
					force_cleanup_for_all_threads_with_this_name(&((*Global_1887339)[iVar1]->f_27), 523);
				}
				else
				{
					_0x7423f7835770f619(get_hash_key(&((*Global_1887339)[iVar1]->f_27)));
				}
			}
			if (!_does_thread_exist((*Global_1887339)[iVar1]->f_10))
			{
				(*Global_1887339)[iVar1]->f_10 = 0;
				func_1188(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		else if (bParam0)
		{
			if (func_857(iVar1, 1))
			{
				func_1188(iVar1, 1);
			}
		}
		iVar1++;
	}
	return !bVar0;
}

int func_860(int iParam0, var uParam1)
{
	iVar0 = -1;
	if (((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_1189(&Var1))
	{
		iVar0 = _datafile_get_num_children(Var1, Var1.f_1);
	}
	return iVar0;
}

Vector3 func_861(int iParam0, var uParam1, var uParam2)
{
	vVar0 = { 0f, 0f, 0f };
	if (((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1)) && func_1189(&Var3))
	{
		if (func_1190(&Var3, uParam2))
		{
			if (func_146(Var3, 2060397848, &vVar0, 1))
			{
			}
		}
	}
	return vVar0;
}

var func_862(int iParam0, var uParam1, var uParam2)
{
	if (((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_1189(&Var1))
	{
		if (func_1190(&Var1, uParam2))
		{
			if (func_145(Var1, -185561597, &uVar0, 1))
			{
			}
		}
	}
	return uVar0;
}

bool func_863(var uParam0)
{
	uParam0->f_2 = 670816652;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_864(vector3 vParam0, var uParam3)
{
	if (func_68(vParam0))
	{
		return false;
	}
	if (func_865(255) == 4)
	{
		return false;
	}
	if (func_170(4, 255))
	{
	}
	func_172(4);
	func_1168(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = uParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_1169(Global_1102219->f_3879, 36);
	return true;
}

int func_865(int iParam0)
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

void func_866(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_867(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_868(struct<29> Param0, var uParam29, int iParam30)
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

void func_869(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_870(var uParam0, char* sParam1, bool bParam2, bool bParam3, vector3 vParam4, float fParam7, int iParam8)
{
	if (!func_1176() || is_pause_menu_active())
	{
		*bParam2 = 1;
		return false;
	}
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = _databinding_add_data_container_from_path("", "MPCountdown");
		uParam0->f_2 = _databinding_add_data_string(uParam0->f_1, "Timer", _create_var_string(2, "FME_COUNTDOWN", sParam1));
		uParam0->f_3 = _databinding_add_data_bool(uParam0->f_1, "showTimer", true);
		if ((bParam3 && !func_68(vParam4)) && fParam7 > 0f)
		{
			animpostfx_play(func_520());
			_hide_hud_component(-2124237476);
			fParam7 = func_911(fParam7, 0f, 1000f);
			if (iParam8 == 0 || !_does_volume_exist(iParam8))
			{
				iVar0 = _create_volume_sphere(vParam4, 0f, 0f, 0f, fParam7, fParam7, fParam7);
				_0x735762e8d7573e42(1, iVar0, 5f);
				_delete_volume(iVar0);
			}
			else
			{
				_0x735762e8d7573e42(1, iParam8, 5f);
			}
		}
	}
	return true;
}

void func_871(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (_databinding_is_data_id_valid(uParam0->f_2))
	{
		if (bParam2 && iParam1 < 1)
		{
			_databinding_write_data_string(uParam0->f_2, _create_var_string(2, "GEIRON_RACE_GO"));
		}
		else
		{
			_databinding_write_data_string(uParam0->f_2, _create_var_string(2, "FME_COUNTDOWN", iParam1));
		}
		if (bParam3)
		{
			if (uParam0->f_5 < 0)
			{
				if (uParam0->f_4 >= 0)
				{
					if (!_0x84848e1c0fc67dbb(uParam0->f_4))
					{
						_0x3210bcb36af7621b(uParam0->f_4);
					}
					release_sound_id(uParam0->f_4);
					uParam0->f_4 = -1;
				}
				func_488(uParam0);
			}
		}
		else if (bParam4)
		{
			if (uParam0->f_4 < 0)
			{
				uParam0->f_4 = get_sound_id();
				_0xce5d0ffe83939af1(uParam0->f_4, func_881(), func_878(), 1);
				_0x503703ec1781b7d6(uParam0->f_4, "Time", to_float(iParam1));
			}
		}
	}
}

bool func_872(int iParam0)
{
	return (Global_1102219->f_3520 && iParam0) != 0;
}

void func_873(int iParam0)
{
	if (!func_872(iParam0))
	{
		Global_1102219->f_3520 = (Global_1102219->f_3520 || iParam0);
	}
}

void func_874(bool bParam0, int iParam1)
{
	if (!func_159(Local_2193.f_1333))
	{
		func_339(iParam1);
		return;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (network_is_player_active(iVar0) && iVar0 != player_id())
	{
		if (Local_2193.f_9 != -785841056 || ((network_is_player_a_participant(iVar0) && network_is_participant_active(network_get_participant_index(iVar0))) && func_159(network_get_participant_index(iVar0))))
		{
			if (!bParam0)
			{
				if (_0x81fb74c83c2ed69f(iVar0))
				{
					func_645(iVar0, iParam1);
				}
				else
				{
					func_1191(iVar0, iParam1);
				}
			}
			else
			{
				func_1191(iVar0, iParam1);
			}
		}
		else
		{
			func_645(iVar0, iParam1);
		}
	}
	else
	{
		func_645(iVar0, iParam1);
	}
}

void func_875(int iParam0)
{
	if (!func_159(Local_2193.f_1333))
	{
		func_339(iParam0);
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (network_is_player_active(iVar0) && iVar0 != player_id())
	{
		if (Local_2193.f_9 != -785841056 || ((network_is_player_a_participant(iVar0) && network_is_participant_active(network_get_participant_index(iVar0))) && func_159(network_get_participant_index(iVar0))))
		{
			if (_0x81fb74c83c2ed69f(iVar0))
			{
				func_646(iVar0, iParam0);
				if (!func_180(8192, Local_2193.f_1333))
				{
					if (func_343(Global_1296859->f_15))
					{
						func_344(0, 0, 0);
						func_230(8192, Local_2193.f_1333);
					}
				}
				if (!func_180(16384, Local_2193.f_1333))
				{
					if (!func_340())
					{
						func_1192();
						func_230(16384, Local_2193.f_1333);
					}
				}
			}
			else
			{
				func_1193(iVar0, iParam0);
			}
		}
		else
		{
			func_646(iVar0, iParam0);
		}
	}
	else
	{
		func_646(iVar0, iParam0);
	}
}

void func_876(int iParam0)
{
	if (!func_159(Local_2193.f_1333))
	{
		func_339(iParam0);
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (network_is_player_active(iVar0) && iVar0 != player_id())
	{
		if (Local_2193.f_9 != -785841056 || ((network_is_player_a_participant(iVar0) && network_is_participant_active(network_get_participant_index(iVar0))) && func_159(network_get_participant_index(iVar0))))
		{
			if (_0x81fb74c83c2ed69f(iVar0))
			{
				func_646(iVar0, iParam0);
				if (!func_180(8192, Local_2193.f_1333))
				{
					if (func_343(Global_1296859->f_15))
					{
						func_344(0, 0, 0);
						func_230(8192, Local_2193.f_1333);
					}
				}
				if (!func_180(16384, Local_2193.f_1333))
				{
					if (!func_340())
					{
						func_1192();
						func_230(16384, Local_2193.f_1333);
					}
				}
			}
			else
			{
				func_1194(iVar0, iParam0);
			}
		}
		else
		{
			func_646(iVar0, iParam0);
		}
	}
	else
	{
		func_646(iVar0, iParam0);
	}
}

void func_877(int iParam0, bool bParam1)
{
	if (!func_159(Local_2193.f_1333))
	{
		func_339(iParam0);
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (network_is_player_active(iVar0) && iVar0 != player_id())
	{
		if (Local_2193.f_9 != -785841056 || ((network_is_player_a_participant(iVar0) && network_is_participant_active(network_get_participant_index(iVar0))) && func_159(network_get_participant_index(iVar0))))
		{
			if (_0x81fb74c83c2ed69f(iVar0))
			{
				func_646(iVar0, iParam0);
				if (!func_180(8192, Local_2193.f_1333))
				{
					if (func_343(Global_1296859->f_15))
					{
						func_344(0, 0, 0);
						func_230(8192, Local_2193.f_1333);
					}
				}
				if (!func_180(16384, Local_2193.f_1333))
				{
					if (!func_340())
					{
						func_1192();
						func_230(16384, Local_2193.f_1333);
					}
				}
			}
			else
			{
				func_1195(iVar0, iParam0, bParam1);
			}
		}
		else
		{
			func_646(iVar0, iParam0);
		}
	}
	else
	{
		func_646(iVar0, iParam0);
	}
}

char* func_878()
{
	return "RDRO_Countdown_Sounds";
}

char* func_879()
{
	return "Round_End_Timer";
}

char* func_880()
{
	return "10S";
}

char* func_881()
{
	return "Out_Of_Bounds";
}

char* func_882()
{
	return "target_spawn";
}

char* func_883()
{
	return "MP005_OBHELT_sounds";
}

char* func_884()
{
	return "match_start";
}

char* func_885()
{
	return "rdro_gamemode_generic_sounds";
}

var func_886(char* sParam0, char[4] cParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = sParam4;
	Var0.f_2 = sParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = cParam1;
	Var13.f_3 = sParam2;
	uVar20 = _0x02bcc0fe9eba3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

var func_887(char* sParam0, char[4] cParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = sParam3;
	Var0.f_2 = sParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = cParam1;
	uVar20 = _0xa6f4216ab10eb08e(&Var0, &vVar13, iParam6, iParam7);
	return uVar20;
}

int func_888(int iParam0)
{
	switch (get_player_team(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_889(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_77())
	{
		return 636925055;
	}
	return -963477619;
}

int func_890(int iParam0, bool bParam1)
{
	iVar0 = floor(func_1196(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = floor((*Global_1100469)[iVar3]->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901947->f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947->f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947->f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947->f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947->f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947->f_716.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_891(int iParam0, bool bParam1)
{
	if (iParam0 == 255)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (iParam0 == Global_1296859->f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!&Global_1296859->f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return true;
		}
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iVar0))
	{
		return true;
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28347), iVar0))
	{
		return false;
	}
	iVar1 = get_player_team(Global_1296859->f_10);
	iVar2 = get_player_team(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (_0x81fb74c83c2ed69f(iParam0))
	{
		return true;
	}
	return false;
}

bool func_892(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_958(iParam0))
	{
		return true;
	}
	return !func_891(iParam0, 0);
}

int func_893(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1197(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_894(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

char* func_895(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_896(var uParam0, int iParam1)
{
	uParam0->f_211[iParam1]->f_14 = 255;
	uParam0->f_211[iParam1]->f_5 = -1f;
	uParam0->f_211[iParam1]->f_1 = -1f;
	uParam0->f_211[iParam1]->f_2 = -1f;
}

void func_897(int iParam0)
{
	if (!func_1198(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

var func_898(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = iParam1;
	uVar16 = _0x8d1249bd28791878(&Var0, &vVar13, iParam6);
	return uVar16;
}

void func_899(int iParam0)
{
	if (iParam0 != Local_1444.f_262)
	{
		Local_1444.f_262 = iParam0;
		switch (Local_1444.f_262)
		{
			case 0:
				break;
			case 2:
				break;
			case 3:
				break;
			case 5:
				break;
		}
	}
}

void func_900()
{
	if (!func_441(64))
	{
		func_916(func_471(), Local_1444.f_260, 1);
	}
	else if ((get_frame_count() % 30) == 0)
	{
		if (network_has_control_of_entity(Local_1444.f_1))
		{
			if (!func_382(&(Local_1444.f_496)))
			{
				if (func_916(func_471(), Local_1444.f_260, 0))
				{
					func_381(&(Local_1444.f_496), 0);
				}
			}
			else if (!func_916(func_471(), Local_1444.f_260, 0))
			{
				func_949(&(Local_1444.f_496));
			}
			else if (func_383(&(Local_1444.f_496)) > 5f)
			{
				if (func_468(&Local_1444, &Var0))
				{
					set_entity_heading(func_471(), Var0.f_3);
					func_949(&(Local_1444.f_496));
				}
			}
		}
	}
}

void func_901(int iParam0)
{
	if (!func_78(&(Local_579[Local_2193.f_1333]), iParam0))
	{
		func_149(Local_579[Local_2193.f_1333], iParam0);
	}
}

char* func_902()
{
	StringCopy(&cVar1, "FME_PLA_SCORETIMER_OBJECTIVE_FREED", 64);
	StringConCat(&cVar1, func_631(), 64);
	StringConCat(&cVar1, func_632(), 64);
	sVar0 = func_633(cVar1);
	sVar0 = _create_var_string(2, sVar0);
	return sVar0;
}

void func_903(int iParam0, int iParam1)
{
	Var0.f_9 = 255;
	Var0.f_5 = func_1199(0, 8);
	Var0.f_6 = iParam1;
	Var0.f_7 = iParam0;
	func_1200(Var0, 4);
}

void func_904(int iParam0)
{
	if (func_78(&(Local_579[Local_2193.f_1333]), iParam0))
	{
		func_445(Local_579[Local_2193.f_1333], iParam0);
	}
}

bool func_905(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (!func_605(iParam0, iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

char* func_906(int iParam0)
{
	switch (iParam0)
	{
		case -809127215:
			return "MP_A_C_BEAR_01";
		case 1706859953:
			return "MP_A_C_ELK_01";
		case -53531786:
			return "MP_A_C_COUGAR_01";
		case 326175668:
			return "MP_A_C_WOLF_01";
		case -920598405:
			return "MP_A_C_ALLIGATOR_01";
		default:
			break;
	}
	return "";
}

void func_907(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_1201(iParam1);
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
	func_1202(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_908()
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

void func_909(int iParam0)
{
	if (iParam0 != Local_1444.f_1.f_2)
	{
		Local_1444.f_1.f_2 = iParam0;
		switch (Local_1444.f_1.f_2)
		{
			case 1:
				if (((does_entity_exist(func_471()) && network_has_control_of_entity(func_471())) && func_753(func_471(), 0)) && network_does_network_id_exist(Local_16.f_11))
				{
					iVar0 = 0;
					while (iVar0 <= 31)
					{
						iVar1 = int_to_playerindex(iVar0);
						if (!network_is_player_active(iVar1))
						{
						}
						else if (!network_is_player_a_participant(iVar1))
						{
						}
						else if (func_790(iVar0))
						{
						}
						else if (!func_1129(network_get_participant_index(iVar1), 1, 1))
						{
						}
						else
						{
							set_ped_can_be_targetted_by_player(func_471(), iVar1, false);
						}
						iVar0++;
					}
					set_ped_relationship_group_hash(func_471(), Local_1444.f_378);
				}
				break;
			case 8:
				if ((does_entity_exist(func_471()) && network_has_control_of_entity(func_471())) && func_753(func_471(), 0))
				{
					clear_ped_tasks(func_471(), 1, 0);
				}
				break;
		}
	}
}

float func_910()
{
	if (Local_16.f_11.f_16 <= 0.25f)
	{
		return 0.25f;
	}
	else if (Local_16.f_11.f_16 <= 0.5f)
	{
		return 0.5f;
	}
	else if (Local_16.f_11.f_16 <= 0.75f)
	{
		return 0.75f;
	}
	else if (Local_16.f_11.f_16 <= 1f)
	{
		return 1f;
	}
	return 1f;
}

float func_911(float fParam0, float fParam1, float fParam2)
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

void func_912(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_911(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

char* func_913()
{
	StringCopy(&cVar1, "FME_PLA_SCORETIMER_OBJECTIVE_ALMOST_DEAD", 64);
	StringConCat(&cVar1, func_631(), 64);
	StringConCat(&cVar1, func_632(), 64);
	sVar0 = func_633(cVar1);
	sVar0 = _create_var_string(2, sVar0);
	return sVar0;
}

bool func_914()
{
	if (Local_1444.f_1.f_2 < 2)
	{
		return false;
	}
	if (does_blip_exist(Local_1444.f_264))
	{
		return false;
	}
	if (!func_739(4))
	{
		return false;
	}
	return true;
}

bool func_915()
{
	if (does_blip_exist(Local_1444.f_1.f_1))
	{
		return true;
	}
	func_1203(func_471(), &(Local_1444.f_1.f_1), 1, 0);
	if (!does_blip_exist(Local_1444.f_1.f_1))
	{
		return false;
	}
	StringCopy(&cVar0, "FME_PLA_BLIP_NAME", 64);
	StringConCat(&cVar0, func_631(), 64);
	StringConCat(&cVar0, func_632(), 64);
	sVar8 = func_633(cVar0);
	set_blip_name_from_text_file(Local_1444.f_1.f_1, sVar8);
	return true;
}

bool func_916(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!_0x9a100f1cf4546629(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam1);
	get_model_dimensions(iVar0, &vVar1, &vVar4);
	fVar7 = 1f;
	vVar1 = { vVar1 * Vector(fVar7, fVar7, fVar7) };
	vVar4 = { vVar4 * Vector(fVar7, fVar7, fVar7) };
	vVar8 = { get_offset_from_entity_in_world_coords(iParam1, 0f, vVar1.y, vVar1.z) };
	vVar11 = { get_offset_from_entity_in_world_coords(iParam1, 0f, vVar4.y, vVar4.z) };
	fVar14 = (vVar4.x - vVar1.x);
	if (is_entity_in_angled_area(iParam0, vVar8, vVar11, fVar14, false, true, 0))
	{
		return true;
	}
	if (bParam2 && !func_441(64))
	{
		if (!_does_volume_exist(&(Local_1444.f_500[0])))
		{
			Local_1444.f_500[0] = func_1204(vVar8, vVar11, fVar14);
		}
		if (_0x19c7567d2f2287d6(&(Local_1444.f_500[0]), 7))
		{
			func_442(64);
		}
	}
	return false;
}

bool func_917(int iParam0)
{
	switch (iParam0)
	{
		case -809127215:
			return true;
		case 1706859953:
			return false;
		case -53531786:
			return true;
		case 326175668:
			return true;
		case -920598405:
			return true;
		default:
			break;
	}
	return true;
}

char[] func_918(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, func_631(), 64);
	StringConCat(&cVar0, func_632(), 64);
	return func_633(cVar0);
}

float func_919(int iParam0)
{
	switch (Local_1444.f_50)
	{
		case -809127215:
			switch (iParam0)
			{
				case 1:
					return 2f;
				case 2:
					return 2f;
				case 3:
					return 2f;
				default:
					break;
			}
			break;
		case 1706859953:
			switch (iParam0)
			{
				case 1:
					return 2f;
				case 2:
					return 2f;
				case 3:
					return 2f;
				default:
					break;
			}
			break;
		case -53531786:
			switch (iParam0)
			{
				case 1:
					return 1.5f;
				case 2:
					return 1.5f;
				case 3:
					return 1.5f;
				default:
					break;
			}
			break;
		case 326175668:
			switch (iParam0)
			{
				case 1:
					return 2f;
				case 2:
					return 2f;
				case 3:
					return 2f;
				default:
					break;
			}
			break;
		case -920598405:
			switch (iParam0)
			{
				case 1:
					return 1.8f;
				case 2:
					return 1.8f;
				case 3:
					return 1.8f;
				default:
					break;
			}
			break;
	}
	return 1f;
}

int func_920(int iParam0)
{
	switch (iParam0)
	{
		case -809127215:
			return 2075717199;
		case 1706859953:
			return -95090138;
		case -53531786:
			return -963073294;
		case 326175668:
			return 973347553;
		default:
			break;
	}
	return 0;
}

int func_921(int iParam0, int iParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

void func_922(int iParam0, vector3 vParam1, int iParam4, var uParam5, var uParam6)
{
	if (!func_753(iParam0, 0))
	{
		return;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return;
	}
	if (uParam5 && _0xf9331b3a314eb49d(iParam0))
	{
		_0xf1c03a5352243a30(iParam0);
		return;
	}
	if (func_68(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			_0x802092b07e3b1eea(iParam0, vParam1, uParam6);
			break;
		case 5:
			_0x463803429297117c(iParam0, vParam1, uParam6, 0);
			break;
		case 6:
			_0x62fdad5e01d2dd47(iParam0, vParam1, uParam6, 0);
			break;
		case 4:
			_0xec6935ebe0847b90(iParam0, vParam1);
			break;
		case 2:
			_0xeeed8fafec331a70(iParam0, vParam1, uParam6);
			break;
		case 1:
			_0xf1c03a5352243a30(iParam0);
			break;
		case 7:
			_0xa3a9299c4f2adb98(iParam0);
			break;
		default:
			_0xa3a9299c4f2adb98(iParam0);
			break;
	}
}

void func_923()
{
	if (does_blip_exist(Local_1444.f_1.f_1))
	{
		if (func_777(Global_34, func_471(), 1, 1) < 9f)
		{
			_blip_set_modifier(Local_1444.f_1.f_1, -750627856);
		}
		else
		{
			_set_blip_flash_style(Local_1444.f_1.f_1, -750627856);
		}
	}
}

bool func_924(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 20)
	{
		return false;
	}
	iVar0 = &Local_16.f_29[iParam0];
	if (!network_does_network_id_exist(iVar0))
	{
		return false;
	}
	if (func_438(iVar0))
	{
		return false;
	}
	return true;
}

void func_925(int iParam0, int iParam1)
{
	if (func_78(Local_1444.f_51[iParam0]->f_3, iParam1))
	{
		func_445(&(Local_1444.f_51[iParam0]->f_3), iParam1);
	}
}

bool func_926(int iParam0)
{
	if (func_782(iParam0))
	{
		return false;
	}
	if (!func_783(iParam0))
	{
		return false;
	}
	return true;
}

void func_927(int iParam0, int iParam1)
{
	if (!func_78(Local_1444.f_51[iParam0]->f_3, iParam1))
	{
		func_149(&(Local_1444.f_51[iParam0]->f_3), iParam1);
	}
}

bool func_928(int iParam0, int iParam1)
{
	return func_78(Local_1444.f_51[iParam0]->f_3, iParam1);
}

void func_929(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_930()
{
	Local_1444.f_49++;
	if (Local_1444.f_49 >= 20)
	{
		Local_1444.f_49 = 0;
	}
}

char* func_931(int iParam0)
{
	iVar0 = (iParam0 % 9) + 1;
	_int_to_string(iVar0, "%i", &Var1);
	return func_1205(Var1);
}

void func_932(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_1206(uParam0, iParam1, sParam2))
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

bool func_933(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam1->f_6)
	{
		func_1207(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_13 = fParam3;
	}
	else
	{
		uParam1->f_13 = vdist(Global_35, get_entity_coords(iParam0, false, false));
	}
	if (!Global_1940258->f_6 && !is_entity_dead(iParam0))
	{
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam1->f_2 & 2 != 0)
			{
				if (func_1208(uParam1, 4000))
				{
					if ((func_1209(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_1210(uParam1, iParam0)) && func_1211(uParam1, iParam0))
					{
						func_1212();
						*uParam2 = 2;
						func_1213(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_1208(uParam1, 4000))
				{
					if ((func_1209(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_1210(uParam1, iParam0)) && func_1211(uParam1, iParam0))
					{
						func_1212();
						*uParam2 = 2;
						func_1213(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258->f_35 != 0)
			{
				if (Global_1940258->f_34 == 0)
				{
					if (func_1214(iParam0, Global_1940258->f_35))
					{
						func_1212();
						*uParam2 = 2;
						func_1213(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_1215())
				{
					if (func_1214(iParam0, Global_1940258->f_36))
					{
						func_1212();
						*uParam2 = 2;
						func_1213(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_1216(uParam1, 1065353216))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_1217(Global_34, iParam0, uParam1))
					{
						func_1212();
						*uParam2 = 4;
						func_1213(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_1218(Global_34, iParam0, uParam1))
					{
						func_1212();
						*uParam2 = 256;
						func_1213(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_1219(iParam0, uParam1))
			{
				func_1212();
				*uParam2 = 131072;
				func_1213(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_1220(iParam0, uParam1))
			{
				func_1212();
				*uParam2 = 262144;
				func_1213(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_934(int iParam0)
{
	if (!does_entity_exist(&(Local_1444.f_51[iParam0])))
	{
		return -1;
	}
	fVar0 = 1000000f;
	fVar1 = 1000000f;
	iVar4 = -1;
	iVar2 = func_1221();
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		Var5 = { func_935(iVar3) };
		fVar1 = vdist(get_entity_coords(&(Local_1444.f_51[iParam0]), false, false), Var5.f_1);
		if (fVar1 > 100f)
		{
		}
		else if (fVar1 < fVar0)
		{
			iVar4 = iVar3;
			fVar0 = fVar1;
		}
		iVar3++;
	}
	return iVar4;
}

struct<5> func_935(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = { func_1108() };
	Var0.f_4 = 0f;
	if (iParam0 <= -1)
	{
		return Var0;
	}
	if (!func_372(&Var5))
	{
		return Var0;
	}
	Var5.f_2 = 279919022;
	if (!_datafile_get_data_node_index(&(Var5.f_1), &Var5))
	{
		return Var0;
	}
	uVar14 = Var5.f_1;
	Var5.f_1 = uVar14;
	Var5.f_2 = -947463643;
	Var5.f_3 = iParam0;
	if (!_datafile_get_data_node_index(&(Var5.f_1), &Var5))
	{
		return Var0;
	}
	if (!func_146(Var5, -332598258, &vVar10, 0))
	{
		return Var0;
	}
	if (!func_145(Var5, -1379582731, &uVar13, 0))
	{
		return Var0;
	}
	Var0 = iParam0;
	Var0.f_1 = { vVar10 };
	Var0.f_4 = uVar13;
	return Var0;
}

void func_936(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

void func_937(var uParam0)
{
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		if (decor_exist_on(iVar0, "MC_EntityID"))
		{
			_decor_remove_all(iVar0);
		}
		set_entity_as_no_longer_needed(&iVar0);
	}
}

bool func_938(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = participant_id_to_int();
	}
	if (network_is_participant_active(int_to_participantindex(iParam2)))
	{
		return func_78(&(Local_579[iParam2]->f_3[iParam0]), iParam1);
	}
	return false;
}

void func_939(int iParam0, int iParam1)
{
	if (!func_78(&(Local_579[Local_2193.f_1333]->f_3[iParam0]), iParam1))
	{
		func_149(Local_579[Local_2193.f_1333]->f_3[iParam0], iParam1);
	}
}

int func_940()
{
	return get_player_ped(255);
}

void func_941(int iParam0, bool bParam1)
{
	if (!func_1127(iParam0, 20, &iVar0, &iVar1))
	{
		return;
	}
	if (bParam1)
	{
		set_bit(Local_579[participant_id_to_int()]->f_24[iVar0], iVar1);
	}
	else
	{
		clear_bit(Local_579[participant_id_to_int()]->f_24[iVar0], iVar1);
	}
}

void func_942(int iParam0)
{
	Var0.f_9 = 255;
	if (!get_event_data(1, iParam0, &Var0, 10))
	{
		return;
	}
	if (Var0 != 57)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 4:
			func_1222(Var0);
			break;
	}
}

void func_943(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!is_entity_a_ped(Var0))
	{
		return;
	}
	iVar32 = get_ped_index_from_entity_index(Var0);
	if (!does_entity_exist(iVar32))
	{
		return;
	}
	if (get_entity_model(iVar32) == func_410())
	{
		if (!Var0.f_3)
		{
			return;
		}
		if (!does_entity_exist(Var0.f_1))
		{
			return;
		}
		if (!is_entity_a_ped(Var0))
		{
			return;
		}
		iVar33 = get_ped_index_from_entity_index(Var0.f_1);
		if (!does_entity_exist(iVar33))
		{
			return;
		}
		iVar34 = func_940();
		if (iVar33 != iVar34 && iVar33 != func_1223(iVar34))
		{
			return;
		}
		Local_2000[participant_id_to_int()]->f_3++;
		func_1224(1f);
	}
	else if (get_entity_model(iVar32) == func_415(Local_1444.f_50))
	{
		if (iVar32 == func_471() && does_entity_exist(Var0.f_1))
		{
			if (!func_605(64, 255))
			{
				func_901(64);
			}
		}
	}
}

void func_944(int iParam0)
{
	if (Local_1444.f_380 == iParam0)
	{
		return;
	}
	Local_1444.f_380 = iParam0;
}

int func_945(var uParam0)
{
	if (!func_382(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_685(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_1225() - round((uParam0->f_1 * 1000f)));
}

bool func_946(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return false;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return true;
		default:
			break;
	}
	return true;
}

int func_947()
{
	iVar1 = -1;
	fVar3 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!does_entity_exist(&(Local_1444.f_51[iVar0])))
		{
		}
		else if (!is_entity_dead(&(Local_1444.f_51[iVar0])))
		{
			fVar2 = func_777(Global_34, &(Local_1444.f_51[iVar0]), 1, 1);
			if (fVar2 < fVar3)
			{
				fVar3 = fVar2;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_948(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	else if (func_1110(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_949(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

char[] func_950(int iParam0, int iParam1)
{
	StringCopy(&cVar1, "NASPR_", 64);
	StringConCat(&cVar1, func_931(iParam0), 64);
	switch (iParam1)
	{
		case 0:
			sVar0 = "_HIDEPLY";
			break;
		case 1:
			sVar0 = "_CMBT";
			break;
		case 2:
			sVar0 = "_TRCKATK";
			break;
		case 3:
			sVar0 = "_TRCKMVE";
			break;
		case 4:
			sVar0 = "_DANGER";
			break;
		case 5:
			sVar0 = "_HARMLSS";
			break;
	}
	StringConCat(&cVar1, sVar0, 64);
	return func_633(cVar1);
}

bool func_951(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&cParam1))
	{
		bVar0 = create_new_scripted_conversation(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1226(cParam1, cParam0);
		if (bParam6)
		{
			preload_script_conversation(&cParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_952()
{
	if (is_bit_set(&Global_1958009, 4))
	{
	}
	else
	{
		set_bit(Global_1958009, 0);
	}
}

void func_953()
{
	if (func_581(2))
	{
	}
	else
	{
		func_582(8);
	}
}

int func_954()
{
	if (func_300())
	{
		if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
		{
			disable_control_action(0, -128997553, false);
			disable_control_action(0, 130948705, false);
			if (func_679())
			{
				func_680();
				func_681();
				func_682();
			}
			else if (func_683(Global_34, 0, 0, 0) == -1415022764)
			{
				set_player_control(player_id(), true, 0, false);
				_0x94a3c1b804d291ec(Global_34, 0, 0, 0, 0);
			}
			return 0;
		}
	}
	return 1;
}

int func_955()
{
	if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
	{
		if (func_683(Global_34, 0, 0, 1) == -1016714371 || func_683(Global_34, 0, 0, 1) == 332793555)
		{
			func_1227(0);
		}
		else if (_is_weapon_binoculars(func_683(Global_34, 0, 0, 1)))
		{
			set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
		}
	}
	return 1;
}

char* func_956(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_170(40, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1102219->f_12), get_length_of_literal_string(&(Global_1102219->f_12)));
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
	if (!&Global_1296859->f_22[iParam0])
	{
		return sVar0;
	}
	if (func_170(40, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1100469)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1100469)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1296859->f_154[iParam0]));
}

bool func_957(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_958(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_959(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_960(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_1228(iParam0);
		return false;
	}
	if (func_959(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_1229(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

int func_961(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (uParam1->f_11.f_2 == 0)
	{
		uParam1->f_950 = _should_use_metric_weight();
		if (!func_643(iParam2, 8))
		{
			bVar0 = func_643(iParam2, 128);
			func_1230(uParam0, uParam1, iParam2, bVar0, iParam3, iParam4, iParam5, iParam6);
		}
		if (!func_643(iParam2, 4))
		{
			func_1231(uParam1, iParam2, iParam7);
		}
	}
	return 1;
}

void func_962(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = func_643(iParam2, 8);
	bVar1 = func_643(iParam2, 128);
	bVar2 = func_643(iParam2, 1024);
	bVar3 = func_643(iParam2, 4096);
	bVar4 = func_643(iParam2, 8192);
	bVar5 = func_643(iParam2, 256);
	bVar6 = iParam7 > 1;
	iVar21 = 0;
	while (iVar21 < 8)
	{
		iVar12[iVar21] = iVar21;
		iVar21++;
	}
	iVar22 = player_id();
	if (bVar3)
	{
		if (uParam0->f_950 != _should_use_metric_weight())
		{
			func_276(uParam0);
			func_277(uParam0);
			uParam0->f_950 = _should_use_metric_weight();
		}
	}
	else if (bVar4)
	{
		if (uParam0->f_950 != _should_use_metric_measurements_2())
		{
			func_276(uParam0);
			func_277(uParam0);
			uParam0->f_950 = _should_use_metric_measurements_2();
		}
	}
	if (uParam0->f_949 || uParam0->f_948)
	{
		iVar11 = 0;
		while (iVar11 <= 31)
		{
			if (uParam0->f_211[iVar11]->f_14 != 255 && network_is_player_active(uParam0->f_211[iVar11]->f_14))
			{
				if (bVar6)
				{
					iVar9 = &uParam0->f_211[iVar11];
					if (iVar9 == get_player_team(iVar22))
					{
						fVar7 = uParam1[iVar9];
					}
					else if (uParam1[iVar9] > fVar8)
					{
						fVar8 = uParam1[iVar9];
					}
				}
				else if (uParam0->f_211[iVar11]->f_14 == player_id())
				{
					fVar7 = uParam0->f_211[iVar11]->f_5;
				}
				else if (!bVar10)
				{
					fVar8 = uParam0->f_211[iVar11]->f_5;
					bVar10 = true;
				}
				StringCopy(&(uParam0->f_211[iVar11]->f_14.f_1), get_player_name(uParam0->f_211[iVar11]->f_14), 64);
			}
			iVar11++;
		}
		if (!bVar0)
		{
			func_1232(uParam0, iParam2, fVar7, fVar8, bVar1, bVar2, bVar3, iParam3, iParam4, iParam5, iParam6, uParam0->f_949);
		}
		if (uParam0->f_948)
		{
			iVar24 = 0;
			while (iVar24 <= 31)
			{
				if (uParam0->f_211[iVar24]->f_14 == player_id())
				{
					iVar23 = iVar24;
				}
				else
				{
					iVar24++;
				}
			}
			func_1233(&(uParam0->f_11), &(uParam0->f_211), get_player_team(iVar22), bVar6, &iVar12, 0, iVar23);
			uParam0->f_948 = 0;
		}
	}
	if (bVar5)
	{
		set_bit(&(uParam0->f_11.f_158), 18);
	}
	if (!func_643(iParam2, 4))
	{
		func_1234(&(uParam0->f_11), &(uParam0->f_211), &iVar22, uParam0->f_949, &iVar12, bVar6, 0, 0);
		uParam0->f_949 = 0;
	}
}

int func_963(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam2 != 0)
	{
		iParam3 = iParam2;
		iParam4 = iParam2;
	}
	if ((*uParam1)[0]->f_21 == 0)
	{
		func_1235(uParam0, uParam1, 0, "meter0", iParam3, iParam5);
		func_1235(uParam0, uParam1, 1, "meter1", iParam4, iParam6);
		func_1235(uParam0, uParam1, 2, "meter2", iParam2, 0);
		func_1235(uParam0, uParam1, 3, "meter3", iParam2, 0);
		func_1235(uParam0, uParam1, 4, "meter4", iParam2, 0);
		func_1235(uParam0, uParam1, 5, "meter5", iParam2, 0);
		func_1235(uParam0, uParam1, 6, "meter6", iParam2, 0);
		return 0;
	}
	return 1;
}

void func_964(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_1236(iParam1, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		bVar8 = is_bit_set(iParam5, iVar0);
		bVar9 = is_bit_set(iParam6, iVar0);
		func_1237(uParam0, iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, iVar7, bVar8, bParam2, bParam3, bParam4, bVar9);
		iVar0++;
	}
}

bool func_965(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case -809127215:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2199.947f, 710.6362f, 121.2148f };
					*uParam3 = 344.6037f;
					return true;
				case 1:
					*uParam2 = { -2043.841f, 652.2862f, 119.1935f };
					*uParam3 = 226.3801f;
					return true;
				case 2:
					*uParam2 = { -2158.968f, 535.4491f, 116.0659f };
					*uParam3 = 10.1883f;
					return true;
				case 3:
					*uParam2 = { -1909.556f, 440.9274f, 114.4551f };
					*uParam3 = 357.3572f;
					return true;
				case 4:
					*uParam2 = { -2033.261f, 815.7381f, 156.3481f };
					*uParam3 = 229.881f;
					return true;
				case 5:
					*uParam2 = { -2373.261f, 527.8604f, 121.9826f };
					*uParam3 = 122.2903f;
					return true;
				case 6:
					*uParam2 = { -1806.624f, 504.1261f, 111.6315f };
					*uParam3 = 340.2291f;
					return true;
				case 7:
					*uParam2 = { -1709.741f, 485.2182f, 109.812f };
					*uParam3 = 314.5327f;
					return true;
			}
			break;
		case 1706859953:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1960.206f, -1614.081f, 114.8855f };
					*uParam3 = 344.6037f;
					return true;
				case 1:
					*uParam2 = { -2041.539f, -1824.57f, 116.4837f };
					*uParam3 = 250.4053f;
					return true;
				case 2:
					*uParam2 = { -2174.39f, -1449.896f, 135.9306f };
					*uParam3 = 233.2182f;
					return true;
				case 3:
					*uParam2 = { -2500.547f, -1454.181f, 145.6283f };
					*uParam3 = 231.0112f;
					return true;
				case 4:
					*uParam2 = { -2382.663f, -1221.3f, 157.3962f };
					*uParam3 = 200.6577f;
					return true;
				case 5:
					*uParam2 = { -2263.921f, -1656.02f, 142.5105f };
					*uParam3 = 159.1967f;
					return true;
				case 6:
					*uParam2 = { -1985.53f, -2012.355f, 86.3551f };
					*uParam3 = 319.2598f;
					return true;
				case 7:
					*uParam2 = { -2227.938f, -1996.353f, 93.0839f };
					*uParam3 = 293.5914f;
					return true;
			}
			break;
		case -53531786:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2196.629f, -2240.439f, 65.956f };
					*uParam3 = 25.6037f;
					return true;
				case 1:
					*uParam2 = { -2398.03f, -2397.886f, 60.3251f };
					*uParam3 = 149.486f;
					return true;
				case 2:
					*uParam2 = { -2717.073f, -2365.646f, 45.1171f };
					*uParam3 = 102.2891f;
					return true;
				case 3:
					*uParam2 = { -2900.137f, -2446.662f, 47.4786f };
					*uParam3 = 185.6875f;
					return true;
				case 4:
					*uParam2 = { -2386.813f, -2129.102f, 79.6569f };
					*uParam3 = 11.0703f;
					return true;
				case 5:
					*uParam2 = { -2851.312f, -2119.138f, 73.1662f };
					*uParam3 = 18.8436f;
					return true;
				case 6:
					*uParam2 = { -3263.398f, -2413.012f, 20.3617f };
					*uParam3 = 20.5021f;
					return true;
			}
			break;
		case 326175668:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1521.683f, 1669.308f, 235.7603f };
					*uParam3 = 264.1036f;
					return true;
				case 1:
					*uParam2 = { -1667.154f, 1609.789f, 234.3836f };
					*uParam3 = 20.3674f;
					return true;
				case 2:
					*uParam2 = { -1851.733f, 1807.501f, 234.5539f };
					*uParam3 = 338.3321f;
					return true;
				case 3:
					*uParam2 = { -1434.208f, 1488.068f, 228.9195f };
					*uParam3 = 5.2686f;
					return true;
				case 4:
					*uParam2 = { -1383.443f, 1855.817f, 317.335f };
					*uParam3 = 250.8025f;
					return true;
				case 5:
					*uParam2 = { -1895.539f, 1315.604f, 197.9647f };
					*uParam3 = 301.971f;
					return true;
				case 6:
					*uParam2 = { -1876.187f, 1429.709f, 252.2222f };
					*uParam3 = 24.4897f;
					return true;
				case 7:
					*uParam2 = { -2086.336f, 1836.041f, 250.0069f };
					*uParam3 = 260.0303f;
					return true;
			}
			break;
		case -920598405:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2234.555f, -504.245f, 40.7944f };
					*uParam3 = 207.6037f;
					return true;
				case 1:
					*uParam2 = { 2340.708f, -579.9207f, 40.7848f };
					*uParam3 = 44.5209f;
					return true;
				case 2:
					*uParam2 = { 2482.526f, -439.9669f, 41.0812f };
					*uParam3 = 154.0994f;
					return true;
				case 3:
					*uParam2 = { 2545.791f, -255.5087f, 41.541f };
					*uParam3 = 325.0574f;
					return true;
				case 4:
					*uParam2 = { 2055.642f, -326.7441f, 40.6647f };
					*uParam3 = 282.5542f;
					return true;
				case 5:
					*uParam2 = { 2238.751f, -258.9458f, 42.8702f };
					*uParam3 = 246.2856f;
					return true;
				case 6:
					*uParam2 = { 2720.68f, -444.2526f, 41.1982f };
					*uParam3 = 345.1404f;
					return true;
				case 7:
					*uParam2 = { 2260.966f, -222.909f, 41.7547f };
					*uParam3 = 34.202f;
					return true;
			}
			break;
	}
	return false;
}

bool func_966()
{
	return true;
}

int func_967(int iParam0, int iParam1)
{
	if (func_498())
	{
		if (iParam1 == 0)
		{
			iVar0 = -1455480431;
		}
		else
		{
			iVar0 = -1109114584;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 655389023;
				break;
			case 1:
				iVar0 = 1019649227;
				break;
			case 2:
				iVar0 = 1260992912;
				break;
			case 3:
				iVar0 = -536255662;
				break;
			case 4:
				iVar0 = -1127015194;
				break;
			case 5:
				iVar0 = 57485849;
				break;
			case 6:
				iVar0 = -774781213;
				break;
			case 7:
				iVar0 = -1840855094;
				break;
			case 8:
				iVar0 = -1619762651;
				break;
			case 9:
				iVar0 = -275856840;
				break;
			case 10:
				iVar0 = 215350470;
				break;
			case 11:
				iVar0 = -620553951;
				break;
			case 12:
				iVar0 = -328156164;
				break;
			case 13:
				iVar0 = -1231466418;
				break;
			case 14:
				iVar0 = -431706200;
				break;
			case 15:
				iVar0 = -1333836770;
				break;
			case 16:
				iVar0 = -1047402941;
				break;
			case 17:
				iVar0 = -1882979672;
				break;
			case 18:
				iVar0 = -1387053626;
				break;
			case 19:
				iVar0 = -126757306;
				break;
			case 20:
				iVar0 = 112423625;
				break;
			case 21:
				iVar0 = -586342531;
				break;
			case 22:
				iVar0 = -318128266;
				break;
			case 23:
				iVar0 = 993582035;
				break;
			case 24:
				iVar0 = 1031725151;
				break;
			case 25:
				iVar0 = 333745451;
				break;
			case 26:
				iVar0 = 1127607177;
				break;
			case 27:
				iVar0 = 293013516;
				break;
			case 28:
				iVar0 = 601533651;
				break;
			case 29:
				iVar0 = 675034810;
				break;
			case 30:
				iVar0 = -75703208;
				break;
			case 31:
				iVar0 = -1516162910;
				break;
			default:
				return 0;
		}
	}
	if (iVar0 != 0)
	{
		func_1238(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_968(int iParam0)
{
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (_0xd6f6acf4392187fb(iVar1) && _0x149a2751ab66ac02(iVar1) >= 2)
	{
		iVar0 = -849580004;
	}
	else
	{
		iVar0 = -1481994377;
	}
	if (iVar0 != 0)
	{
		func_1238(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_969(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_162(&uParam1))
	{
		iVar2 = func_190(&uParam1);
		iVar1 = floor(func_911(((to_float(iVar2) / 1000f) / 60f), 0f, 30f));
	}
	switch (iVar1)
	{
		case 0:
			iVar0 = -1872051906;
			break;
		case 1:
			iVar0 = -1500385908;
			break;
		case 2:
			iVar0 = 1941932008;
			break;
		case 3:
			iVar0 = -2122898601;
			break;
		case 4:
			iVar0 = 1281472813;
			break;
		case 5:
			iVar0 = 1646781625;
			break;
		case 6:
			iVar0 = 714864034;
			break;
		case 7:
			iVar0 = 947753317;
			break;
		case 8:
			iVar0 = 122171131;
			break;
		case 9:
			iVar0 = 351980128;
			break;
		case 10:
			iVar0 = -1855497387;
			break;
		case 11:
			iVar0 = 2006853571;
			break;
		case 12:
			iVar0 = 745345378;
			break;
		case 13:
			iVar0 = -1556611338;
			break;
		case 14:
			iVar0 = 600768562;
			break;
		case 15:
			iVar0 = -1685459034;
			break;
		case 16:
			iVar0 = 1352522191;
			break;
		case 17:
			iVar0 = 911910217;
			break;
		case 18:
			iVar0 = -483131655;
			break;
		case 19:
			iVar0 = -789489036;
			break;
		case 20:
			iVar0 = -748172699;
			break;
		case 21:
			iVar0 = 103067614;
			break;
		case 22:
			iVar0 = -281116142;
			break;
		case 23:
			iVar0 = 562587301;
			break;
		case 24:
			iVar0 = 1303756567;
			break;
		case 25:
			iVar0 = 928027213;
			break;
		case 26:
			iVar0 = 1747874824;
			break;
		case 27:
			iVar0 = 1407470452;
			break;
		case 28:
			iVar0 = 1706094329;
			break;
		case 29:
			iVar0 = 1339147067;
			break;
		case 30:
			iVar0 = -1631493579;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1238(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_970(int iParam0)
{
	if ((func_36(&Var1, Local_2193.f_1) && func_37(&Var1)) && func_38(&Var1, Local_2193.f_3))
	{
		if (func_40(Var1, -75980337, &iVar6, 0))
		{
			iVar0 = iVar6;
		}
	}
	if (iVar0 != 0)
	{
		func_1238(iParam0, iVar0);
		return 1;
	}
	else if (Local_2193.f_9 != -785841056)
	{
	}
	return 0;
}

bool func_971(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	Var0.f_1 = 10;
	return func_1239(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

int func_972()
{
	if (Local_1950.f_14 == 0)
	{
		return func_192(2);
	}
	iVar0 = floor((to_float(Local_1950.f_15) / to_float(Local_1950.f_14)));
	if (iVar0 < 2)
	{
		iVar0 = 2;
	}
	else if (iVar0 > 32)
	{
		iVar0 = 32;
	}
	return iVar0;
}

int func_973(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			iVar0 = -531721699;
			break;
		case 3:
			iVar0 = -205801225;
			break;
		case 4:
			iVar0 = 82926434;
			break;
		case 5:
			iVar0 = -1518330831;
			break;
		case 6:
			iVar0 = -1825441899;
			break;
		case 7:
			iVar0 = -2114300634;
			break;
		case 8:
			iVar0 = 1874374819;
			break;
		case 9:
			iVar0 = -562721249;
			break;
		case 10:
			iVar0 = -393525148;
			break;
		case 11:
			iVar0 = -799991824;
			break;
		case 12:
			iVar0 = -1968206678;
			break;
		case 13:
			iVar0 = -124786579;
			break;
		case 14:
			iVar0 = -1489812047;
			break;
		case 15:
			iVar0 = -1796759270;
			break;
		case 16:
			iVar0 = 1936350748;
			break;
		case 17:
			iVar0 = 1461200248;
			break;
		case 18:
			iVar0 = 267982647;
			break;
		case 19:
			iVar0 = 2106487396;
			break;
		case 20:
			iVar0 = 1385930779;
			break;
		case 21:
			iVar0 = 1364762005;
			break;
		case 22:
			iVar0 = -1236703371;
			break;
		case 23:
			iVar0 = -1526020872;
			break;
		case 24:
			iVar0 = -1713000786;
			break;
		case 25:
			iVar0 = -2019554781;
			break;
		case 26:
			iVar0 = -847604265;
			break;
		case 27:
			iVar0 = -81759966;
			break;
		case 28:
			iVar0 = -790684508;
			break;
		case 29:
			iVar0 = -22677455;
			break;
		case 30:
			iVar0 = 949545730;
			break;
		case 31:
			iVar0 = 720785341;
			break;
		case 32:
			iVar0 = 519387067;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1238(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_974(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_162(&uParam1))
	{
		iVar2 = func_190(&uParam1);
		iVar1 = floor(func_911(((to_float(iVar2) / 1000f) / 60f), 0f, 30f));
	}
	switch (iVar1)
	{
		case 0:
			iVar0 = 358499753;
			break;
		case 1:
			iVar0 = 1552831472;
			break;
		case 2:
			iVar0 = -120419182;
			break;
		case 3:
			iVar0 = 913639430;
			break;
		case 4:
			iVar0 = 1152853130;
			break;
		case 5:
			iVar0 = 191312355;
			break;
		case 6:
			iVar0 = 1765469585;
			break;
		case 7:
			iVar0 = 769947357;
			break;
		case 8:
			iVar0 = -73297320;
			break;
		case 9:
			iVar0 = -765444138;
			break;
		case 10:
			iVar0 = -509454489;
			break;
		case 11:
			iVar0 = -720355773;
			break;
		case 12:
			iVar0 = -1018389828;
			break;
		case 13:
			iVar0 = -146537754;
			break;
		case 14:
			iVar0 = 686548533;
			break;
		case 15:
			iVar0 = 1576456266;
			break;
		case 16:
			iVar0 = 197667822;
			break;
		case 17:
			iVar0 = 1117395345;
			break;
		case 18:
			iVar0 = 1953955146;
			break;
		case 19:
			iVar0 = -1457494368;
			break;
		case 20:
			iVar0 = 864221171;
			break;
		case 21:
			iVar0 = -1985403838;
			break;
		case 22:
			iVar0 = -1746157369;
			break;
		case 23:
			iVar0 = 1846570253;
			break;
		case 24:
			iVar0 = 2086930872;
			break;
		case 25:
			iVar0 = -567915205;
			break;
		case 26:
			iVar0 = -328996426;
			break;
		case 27:
			iVar0 = -1299089902;
			break;
		case 28:
			iVar0 = -1056697609;
			break;
		case 29:
			iVar0 = 658366309;
			break;
		case 30:
			iVar0 = 825941725;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1238(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_975(int iParam0)
{
	if (func_498())
	{
		iVar0 = -1633060422;
	}
	else
	{
		iVar0 = -794388871;
	}
	if (iVar0 != 0)
	{
		func_1238(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_976(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iVar0 = 2035179919;
	}
	else
	{
		iVar0 = 815649725;
	}
	if (iVar0 != 0)
	{
		func_1238(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_977(int iParam0)
{
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		iVar0 = 1549099924;
	}
	else
	{
		iVar2 = _0x149a2751ab66ac02(iVar1);
		switch (iVar2)
		{
			case 1:
				iVar0 = 1549099924;
				break;
			case 2:
				iVar0 = -173468095;
				break;
			case 3:
				iVar0 = 133642973;
				break;
			case 4:
				iVar0 = -1086838432;
				break;
			case 5:
				iVar0 = 290147717;
				break;
			case 6:
				iVar0 = -624566149;
				break;
			case 7:
				iVar0 = -1392573202;
				break;
			default:
				return 0;
		}
	}
	if (iVar0 != 0)
	{
		func_1238(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_978(var uParam0, var uParam1, var uParam2)
{
	if (func_162(&uParam0))
	{
		iVar1 = func_190(&uParam0);
		iVar0 = floor(func_911(((to_float(iVar1) / 1000f) / 60f), 0f, 30f));
	}
	iVar2 = 0;
	if (iVar0 < 3)
	{
		iVar2 = 0;
	}
	else if (iVar0 < 6)
	{
		iVar2 = -2125467258;
	}
	else if (iVar0 < 9)
	{
		iVar2 = -663248944;
	}
	else if (iVar0 < 12)
	{
		iVar2 = -613374526;
	}
	else if (iVar0 < 15)
	{
		iVar2 = 1035797597;
	}
	else if (iVar0 < 20)
	{
		iVar2 = -1335170629;
	}
	else if (iVar0 < 25)
	{
		iVar2 = 1620069667;
	}
	else if (iVar0 < 30)
	{
		iVar2 = -209226873;
	}
	else
	{
		iVar2 = 110270613;
	}
	return iVar2;
}

bool func_979()
{
	Var1.f_1 = 11;
	func_967(&Var1, Local_2193.f_1334);
	func_968(&Var1);
	func_969(&Var1, Local_1950.f_4);
	func_970(&Var1);
	if (func_630(32))
	{
		iVar0 = -1207291076;
		bVar16 = true;
	}
	else
	{
		iVar0 = -245502319;
	}
	bVar17 = true;
	if (!func_971(iVar0, &(Local_2193.f_1375), &Var1, 0, 255, 0, 0))
	{
		bVar17 = false;
	}
	if (bVar16)
	{
		func_1240(&Var14);
		if (Var14 != 0 && Var14.f_1 != 0)
		{
			if (func_1241(Var14, 0, 255, 0, 0))
			{
				func_461(func_47(640598481, Var14.f_1), 1);
			}
			else
			{
				bVar17 = false;
			}
		}
	}
	if (bVar17)
	{
		Local_2193.f_1282++;
	}
	return bVar17;
}

void func_980(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (_0xa7e51b53309eac97(*iParam0))
		{
			return;
		}
		if (!does_entity_belong_to_this_script(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			set_ped_as_no_longer_needed(iParam0);
		}
		else
		{
			if (!is_entity_dead(*iParam0) && is_ped_in_any_vehicle(*iParam0, true))
			{
			}
			delete_ped(iParam0);
		}
	}
}

void func_981(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar0]), "Position", "");
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar0]), "Gamertag", "");
		_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
}

void func_982(var uParam0)
{
	if (uParam0[0] != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			_databinding_remove_data_entry(uParam0[iVar0]);
			_databinding_remove_data_entry((*uParam0)[iVar0]->f_1);
			iVar0++;
		}
		uVar1 = 2;
		_copy_memory(uParam0, &uVar1, 11);
	}
}

void func_983(var uParam0, bool bParam1)
{
	_close_app_by_hash(595204529);
	if (_databinding_is_data_id_valid(*uParam0))
	{
		_databinding_remove_data_entry(*uParam0);
	}
	if (_databinding_is_data_id_valid(uParam0->f_142))
	{
		_databinding_remove_data_entry(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_143[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_143[iVar0]));
		}
		iVar0++;
	}
	_0x531a78d6bf27014b("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_1242(&(uParam0->f_162));
	}
	func_536(0);
}

char* func_984()
{
	return "match_end";
}

char* func_985()
{
	return "RDRO_Adversary_Sounds";
}

var func_986(char* sParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = sParam2;
	Var0.f_2 = sParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar20 = _0x860ddfe97cc94df0(&Var0, &Var13, iParam5);
	return uVar20;
}

Vector3 func_987(vector3 vParam0)
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

int func_988(int iParam0)
{
	if (!func_721(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_989(int iParam0)
{
	return func_634(iParam0, 2);
}

void func_990()
{
	if (!func_170(132, 255))
	{
		return;
	}
}

void func_991(int iParam0, bool bParam1)
{
	if (!func_1063(32))
	{
		return;
	}
	func_719(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	func_1243(32);
	func_1244();
	Global_1139381->f_4779.f_4 = 0;
	Global_1139381->f_4779 = 0;
	func_1068(&(Global_1952637->f_2365));
	func_1066(&(Global_1952637->f_2365));
	func_1245(4);
	if (bParam1)
	{
		func_1246(iParam0, 1, 1, 0);
	}
	func_719(27, 0, 131074, 0, 0);
	func_719(34, 0, 131072, 0, 0);
}

void func_992()
{
	func_1247();
	func_1248();
}

void func_993(float fParam0)
{
	Global_1956200->f_1561.f_3 = fParam0;
}

struct<12> func_994()
{
	Var0.f_1 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = 2;
	Var0.f_5 = -1082130432;
	Var0.f_7 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_11 = -1082130432;
	iVar12 = player_ped_id();
	iVar13 = player_id();
	switch (Global_1956200->f_1565.f_117.f_12)
	{
		case 0:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 0;
			Var0.f_10 = 0;
			Var0.f_6 = 0;
			break;
		case 1:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 1;
			Var0.f_10 = 1;
			Var0.f_6 = 1;
			break;
		case 2:
			Var0 = 3;
			Var0.f_1 = Global_1956200->f_1565.f_117.f_13;
			Var0.f_8 = 3;
			Var0.f_9 = Global_1956200->f_1565.f_117.f_15;
			Var0.f_4 = 3;
			Var0.f_5 = Global_1956200->f_1565.f_117.f_14;
			Var0.f_2 = 3;
			Var0.f_3 = Global_1956200->f_1565.f_117.f_16;
			Var0.f_10 = 3;
			Var0.f_11 = Global_1956200->f_1565.f_117.f_17;
			Var0.f_6 = 3;
			Var0.f_7 = Global_1956200->f_1565.f_117.f_18;
			break;
		case 3:
			Var0 = 3;
			Var0.f_1 = get_entity_health(iVar12);
			Var0.f_8 = 3;
			Var0.f_9 = _get_ped_stamina(iVar12);
			Var0.f_4 = 3;
			Var0.f_5 = _0xa81d24ae0af99a5e(iVar13);
			Var0.f_2 = 3;
			Var0.f_3 = func_1249(0, 2);
			Var0.f_10 = 3;
			Var0.f_11 = func_1249(1, 2);
			Var0.f_6 = 3;
			Var0.f_7 = func_1249(2, 2);
			break;
	}
	return Var0;
}

void func_995()
{
	uVar0 = func_1250(-763706539, -1397419524);
	Global_1956200->f_1431.f_74.f_2 = uVar0;
	uVar1 = func_1250(258444835, 1449106310);
	Global_1956200->f_1431.f_74.f_3 = uVar1;
	fVar2 = func_1250(845057552, -458184788);
	fVar3 = func_1250(845057552, 1468884243);
	Global_1956200->f_1431.f_74.f_1 = (fVar2 + fVar3);
	uVar4 = func_1251(-1645702932);
	Global_1956200->f_1431.f_74.f_5 = uVar4;
}

void func_996()
{
	_0xd2d74f89df844a50(&(Global_1956200->f_1565));
}

void func_997()
{
	if (is_entity_dead(Global_34))
	{
		return;
	}
	_0xc395355843be134b(Global_34);
	if (get_current_ped_weapon(Global_34, &iVar0, false, 0, true))
	{
		if ((((iVar0 == -1415022764 || _is_weapon_binoculars(iVar0)) || iVar0 == -1016714371) || iVar0 == 332793555) || iVar0 == 191707516)
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		}
	}
}

void func_998(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28345), iParam0);
		if (func_960(iParam0))
		{
			func_1228(iParam0);
		}
	}
}

void func_999(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_259), iParam0))
		{
			_0x31010318ba9897ac(&(Global_1071686->f_21689.f_259), iParam0);
		}
	}
	else if (_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_259), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_21689.f_259), iParam0);
		func_897(iParam0);
	}
}

void func_1000(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
		if (func_1252(iParam0))
		{
			func_1228(iParam0);
		}
	}
}

void func_1001(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
}

void func_1002(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28348), iParam0);
}

struct<7> func_1003()
{
	network_get_local_handle(&Var0);
	return Var0;
}

bool func_1004(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return network_is_handle_valid(&uParam0);
}

void func_1005(var uParam0, int iParam1)
{
	*uParam0 = 22;
	uParam0->f_1 = get_player_index();
	uParam0->f_2 = get_network_time_accurate();
	_0x31010318ba9897ac(&uVar0, iParam1);
	trigger_script_event(1, uParam0, 11, 7, &uVar0);
}

void func_1006(int iParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(iParam0, func_1253(91));
	if (func_623(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

void func_1007(int iParam0)
{
	Global_1940311->f_242.f_1186 = iParam0;
	_databinding_write_data_string(Global_1940311->f_242.f_6, _0x2b6846401d68e563(to_float(Global_1940311->f_242.f_1186), 0));
}

int func_1008(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1197(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_1197(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_1009(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1197(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_1010()
{
	return !Global_1572887->f_9;
}

void func_1011(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1012(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

void func_1013(struct<2> Param0, var uParam2)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _0x901e0dc25080c8b9(player_id());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_672(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1254(func_893(Param0));
			iVar5 = func_1255(iVar4);
			if (!func_1256(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1107216->f_33[iVar1] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216->f_33[iVar2]->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0];
}

int func_1014(struct<2> Param0)
{
	iVar0 = func_1008(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1257(iVar0);
}

int func_1015(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1197(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686->f_19550 == 0)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar6 };
		Global_1071686->f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686->f_19550)
	{
		func_1197(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_1258(iVar9);
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686->f_19550 < 31)
	{
		iVar9 = Global_1071686->f_19550;
		*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
		Global_1071686->f_19550++;
		if (Global_1071686->f_19550 > 32)
		{
			Global_1071686->f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_1016()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_1197(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

int func_1017(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559;
		case 1:
			return 195938434;
		case 2:
			return 416962030;
		case 3:
			return 1314857970;
		case 4:
			return -999071359;
		case 5:
			return -683250308;
		case 6:
			return -857617219;
		case 7:
			return 1780145725;
		case 8:
			return -1521715232;
		case 9:
			return -1560342203;
		case 10:
			return 1343354387;
		case 11:
			return 1052408375;
		case 12:
			return -1759599185;
		case 13:
			return 1481148278;
		case 14:
			return -16106300;
		case 15:
			return 105387183;
		case 16:
			return -2095449173;
		case 17:
			return -2097683294;
		case 18:
			return 1805131596;
		case 19:
			return 314693001;
		case 20:
			return -1728509733;
		case 21:
			return -42817558;
		case 22:
			return 1458462042;
		case 23:
			return 481893872;
		case 24:
			return 1714017012;
		case 25:
			return 1437412331;
		case 26:
			return -493957506;
		case 27:
			return 1224055398;
		case 28:
			return -953803399;
		case 29:
			return 2006449383;
		case 30:
			return -1788230330;
		case 31:
			return 1396375613;
		case 32:
			return -547914843;
		case 33:
			return -1547772340;
		case 34:
			return -59535775;
		case 35:
			return -1701536647;
		case 36:
			return 1923998736;
		case 37:
			return -1103472584;
		case 38:
			return -2051405571;
		case 39:
			return 1135209633;
		case 40:
			return -1810065318;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442;
		case 43:
			return 1171995096;
		case 44:
			return -267442581;
		case 45:
			return -1361146315;
		case 46:
			return 1352191066;
		case 47:
			return -2130852007;
		case 48:
			return -102241052;
		case 49:
			return 1420320220;
		case 50:
			return -1715130379;
		case 51:
			return -661550833;
		case 52:
			return -1358475411;
		case 53:
			return -1848598303;
		case 54:
			return -173287735;
		case 55:
			return -715363719;
		case 56:
			return -1117123933;
		case 57:
			return 1972833301;
		case 58:
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

void func_1018(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_1019()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_1020(int iParam0)
{
	iVar0 = func_1259(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1260(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_1261(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_1021(struct<2> Param0)
{
	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_74(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1022(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 1)
	{
		Global_1900736->f_66 = 0;
		func_1262(Global_1900736->f_1[0]);
		return 1;
	}
	func_1262(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_1263(iParam0, Global_1900736->f_66);
	return 1;
}

int func_1023(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_74((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1024(int iParam0, var uParam1)
{
	func_1264(uParam1, iParam0);
	if (Global_1196205->f_129 > 0)
	{
		if (Global_1196205->f_130 == iParam0)
		{
			func_1265(0);
		}
	}
	func_1266();
}

void func_1025(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_1026()
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

int func_1027(int iParam0)
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
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_1028(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_1029(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_1030(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

bool func_1031()
{
	return Global_1903071->f_5 == 6;
}

void func_1032(int iParam0)
{
	if (!func_1267(iParam0))
	{
		func_149(&(Global_1903071->f_2), iParam0);
	}
}

bool func_1033()
{
	return Global_1903071->f_5 == 7;
}

bool func_1034()
{
	return Global_1903071->f_5 == 12;
}

void func_1035(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_686() - fParam1);
	func_423(uParam0, 1);
	func_424(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_1036(var uParam0, int iParam1)
{
}

void func_1037(var uParam0)
{
	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_1038(var uParam0)
{
	Var0.f_3 = 1;
	*uParam0 = { Var0 };
}

void func_1039(var uParam0)
{
	uVar0 = 1;
	*uParam0 = uVar0;
}

void func_1040(var uParam0)
{
	vVar0 = 1;
	vVar0.f_1 = -1082130432;
	vVar0.f_2 = 1;
	*uParam0 = { vVar0 };
}

void func_1041(var uParam0)
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
	Var0.f_2 = -1;
	Var0.f_1 = -1;
	Var0 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	*uParam0 = { Var0 };
}

void func_1042(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1043(var uParam0)
{
	*uParam0 = { vVar0 };
}

void func_1044(var uParam0)
{
	*uParam0 = { vVar0 };
}

void func_1045(var uParam0)
{
	*uParam0 = uVar0;
}

void func_1046()
{
	iVar0 = player_id();
	Global_1956200->f_1565.f_117.f_13 = floor(_get_player_health(iVar0));
	Global_1956200->f_1565.f_117.f_14 = _0xdf66a37936d5f3d9(iVar0);
	Global_1956200->f_1565.f_117.f_15 = _get_player_stamina(iVar0);
}

void func_1047()
{
	Global_1956200->f_1565.f_117.f_16 = func_1249(0, 2);
	Global_1956200->f_1565.f_117.f_17 = func_1249(1, 2);
	Global_1956200->f_1565.f_117.f_18 = func_1249(2, 2);
}

bool func_1048(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_1268(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1269(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1270(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1271(&Var45, &Var0, 0))
				{
					if (func_1272(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_1273(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_1273(iVar43);
	}
	return false;
}

struct<4> func_1049()
{
	return Global_1291734->f_11.f_310;
}

bool func_1050()
{
	return Global_1291734->f_11.f_318 > Global_1296859->f_21;
}

void func_1051(var uParam0, bool bParam1)
{
	Global_1291734->f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734->f_11.f_318 = Global_1296859->f_21 + 10;
	}
}

int func_1052(int iParam0)
{
	iVar0 = func_1274(iParam0);
	bVar1 = func_16(func_1275(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_1053(int iParam0)
{
	return func_1276(&(Global_3145858->f_6), iParam0);
}

int func_1054(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

struct<4> func_1055()
{
	return Var0;
}

bool func_1056(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_1268(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1269(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1270(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1271(&Var45, &Var0, 0))
				{
					if (func_1272(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_1273(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_1273(iVar43);
	}
	return false;
}

struct<4> func_1057(bool bParam0)
{
	Var2.f_9 = -1591664384;
	if (!func_1277("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_1270(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_1273(iVar0);
	return Var2;
}

bool func_1058(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_1278(Global_1904087);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_1279(uParam0, Global_1904087, &(Global_1904087->f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_1280(uParam0, Global_1904087, &(Global_1904087->f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_1059(var uParam0)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (uParam0->f_10 == -1)
	{
		return false;
	}
	return true;
}

int func_1060(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uVar1 = iVar0 + 1;
		iVar2 = func_1281(iParam0, uVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

void func_1061(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1282((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1062(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_1063(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_1064(var uParam0)
{
	*uParam0 = Global_1952637->f_1675;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

bool func_1065(var uParam0)
{
	Var0 = func_1283(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	_0x91ded5dd64bb2691(&Var0);
	return _0xed4413cee1bf142c(&Var0);
}

void func_1066(var uParam0)
{
	Global_1952637->f_1556 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

bool func_1067(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	iVar11 = 0;
	Var4 = func_1283(iParam6);
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
		func_1285(uParam0, func_1284(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_1286(-1);
		}
		if (_0x44b3a36933ac009c(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_1284(iVar0);
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
			iVar1 = func_1287(iVar3, 1);
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
					func_1288(iVar3, 16, 6);
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
							if (func_1289(iVar3) && func_1290(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1292(uParam0, iVar11, func_1291(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_1293() == 24043185 && &uParam0->f_1[iVar1] == &Global_1952637->f_83[iVar1]) && func_1291(&(uParam0->f_1[34])) == 0) && !func_1063(32)) && !func_1063(64))
					{
						uParam0->f_1[iVar1] = func_1294(-1293064293, 0);
						uParam0->f_1[iVar1]->f_1 = 1155669136;
						func_1295(uParam0, &(uParam0->f_1[iVar1]), iVar1, 0, iParam9);
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

void func_1068(var uParam0)
{
	Global_1952637->f_1675 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1675.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

int func_1069(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1077(1);
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = &Global_1956200->f_1431.f_50[iParam0];
			break;
		case 1:
			iVar0 = &Global_1956200->f_1565.f_2.f_50[iParam0];
			break;
	}
	return iVar0 + 4;
}

int func_1070(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1077(1);
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

int func_1071(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1077(1);
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

int func_1072(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1077(1);
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

void func_1073()
{
	_copy_memory(&(Global_1956200->f_1565.f_2), &(Global_1956200->f_1431), 115);
	Global_1956200->f_1565.f_2.f_6[0] = func_1249(0, 0);
	Global_1956200->f_1565.f_2.f_6[0]->f_2 = 0;
	Global_1956200->f_1565.f_2.f_6[0]->f_1 = -15;
	Global_1956200->f_1565.f_2.f_6[1] = func_1249(1, 0);
	Global_1956200->f_1565.f_2.f_6[1]->f_2 = 0;
	Global_1956200->f_1565.f_2.f_6[1]->f_1 = -15;
	Global_1956200->f_1565.f_2.f_6[2] = func_1249(2, 0);
	Global_1956200->f_1565.f_2.f_6[2]->f_2 = 0;
	Global_1956200->f_1565.f_2.f_6[2]->f_1 = -15;
}

void func_1074(int iParam0, int iParam1)
{
	if (_inventory_get_ped_inventory_id(Global_1296859->f_8) != 3)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = func_1296(iParam0);
	iVar1 = func_1297(iVar0, func_717(0), -1311702610, 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = absi(iVar2);
	if (iVar2 > 0)
	{
		func_397(iVar0, iVar3, 752097756);
	}
	else
	{
		func_1298(iVar0, iVar3, -142743235, 0, 0);
	}
}

int func_1075(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 100;
		case 2:
			return 300;
		case 3:
			return 700;
		case 4:
			return 1500;
		case 5:
			return 3100;
		default:
			break;
	}
	return 100;
}

void func_1076(int iParam0, int iParam1)
{
	if (_inventory_get_ped_inventory_id(Global_1296859->f_8) != 3)
	{
		return;
	}
	iVar0 = func_1299(iParam0);
	iVar1 = func_1297(iVar0, func_717(0), -1990194462, 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = absi(iVar2);
	if (iVar2 > 0)
	{
		func_397(iVar0, iVar3, 752097756);
	}
	else
	{
		func_1298(iVar0, iVar3, -142743235, 0, 0);
	}
	func_1300(iParam0, to_float(iParam1), 1);
}

int func_1077(int iParam0)
{
	return func_1301(func_392(iParam0));
}

float func_1078(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1077(1);
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

bool func_1079(int iParam0, int iParam1)
{
	return func_1303(func_1302(iParam0), iParam1);
}

void func_1080()
{
	func_1304(0);
	func_1304(1);
	func_1304(2);
	func_1304(3);
}

void func_1081()
{
	func_1305(0);
	func_1305(1);
	func_1305(2);
	func_1305(3);
}

void func_1082()
{
	if (func_1306(2))
	{
		func_1307(0);
	}
	else
	{
		func_1307(1);
	}
	func_1308(1);
	_0x7146cf430965927c(15, true);
	_0x7146cf430965927c(16, true);
}

void func_1083()
{
	iVar1 = 0;
	while (iVar1 < 23)
	{
		fVar0 = func_1078(iVar1, 2);
		func_1300(iVar1, fVar0, 2);
		iVar1++;
	}
}

void func_1084(var uParam0, int iParam1)
{
	iVar0 = func_1070(2);
	iVar2 = iVar0;
	iVar3 = -1;
	if (func_1309())
	{
		func_1310(iParam1);
		return;
	}
	_0x7ff72de061df55e2(iParam1, 0, to_float(iVar0));
	if (func_23() == 0)
	{
		iVar1 = round(_0x89bfdf6d53145545(iParam1));
		iVar2 = (iVar2 + iVar1);
	}
	set_entity_max_health(iParam1, iVar2);
	iVar4 = *uParam0;
	switch (iVar4)
	{
		case 0:
			iVar3 = get_entity_max_health(iParam1, true);
			func_1311(iVar3, 0);
			break;
		case 3:
			iVar3 = uParam0->f_1;
			if (iVar3 > 0)
			{
				func_1311(iVar3, 0);
			}
			else
			{
				iVar3 = get_entity_max_health(iParam1, true);
				func_1311(iVar3, 0);
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_1085(var uParam0, int iParam1)
{
	if (func_1309())
	{
		return;
	}
	iVar0 = func_1072(2);
	fVar1 = -1f;
	_0x7ff72de061df55e2(iParam1, 1, to_float(iVar0));
	iVar2 = uParam0->f_8;
	switch (iVar2)
	{
		case 2:
			break;
		case 0:
			fVar1 = _get_ped_max_stamina(iParam1);
			func_1312(fVar1, 0);
			break;
		case 1:
			fVar1 = 0f;
			func_1312(fVar1, 0);
			break;
		case 3:
			fVar1 = uParam0->f_9;
			if (fVar1 >= 0f)
			{
				func_1312(fVar1, 0);
			}
			else
			{
				fVar1 = _get_ped_max_stamina(iParam1);
				func_1312(fVar1, 0);
			}
			break;
	}
}

void func_1086(var uParam0, int iParam1)
{
	if (func_1309())
	{
		return;
	}
	iVar0 = player_id();
	iVar1 = func_1071(2);
	fVar2 = -1f;
	_0x7ff72de061df55e2(iParam1, 2, to_float(iVar1));
	iVar3 = uParam0->f_4;
	switch (iVar3)
	{
		case 2:
			func_1314(func_1313());
			break;
		case 0:
			fVar2 = _0x029884fb65821b07(iVar0);
			func_1314(fVar2);
			break;
		case 1:
			fVar2 = 0f;
			func_1314(fVar2);
			break;
		case 3:
			fVar2 = uParam0->f_5;
			if (fVar2 >= 0f)
			{
				func_1314(fVar2);
			}
			else
			{
				fVar2 = _0x029884fb65821b07(iVar0);
				func_1314(fVar2);
			}
			break;
	}
	func_993(0f);
}

void func_1087(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 23)
	{
		if (func_1315(iVar1))
		{
			iVar2 = func_1316(iVar1);
			fVar0 = func_1317(uParam0, iVar2);
			func_1318(iVar2, fVar0);
		}
		iVar1++;
	}
	func_1319();
}

void func_1088()
{
	if (Global_1956200->f_1431.f_108.f_1 != 0f)
	{
		func_1320(0, Global_1956200->f_1431.f_108.f_1, 0, 0);
		Global_1956200->f_1431.f_108.f_1 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_3 != 0f)
	{
		func_1320(1, Global_1956200->f_1431.f_108.f_3, 0, 0);
		Global_1956200->f_1431.f_108.f_3 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_2 != 0f)
	{
		func_1320(2, Global_1956200->f_1431.f_108.f_2, 0, 0);
		Global_1956200->f_1431.f_108.f_2 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_4 != 0f)
	{
		func_1320(19, Global_1956200->f_1431.f_108.f_4, 0, 0);
		Global_1956200->f_1431.f_108.f_4 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_6 != 0f)
	{
		func_1320(18, Global_1956200->f_1431.f_108.f_6, 0, 0);
		Global_1956200->f_1431.f_108.f_6 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_5 != 0f)
	{
		func_1320(20, Global_1956200->f_1431.f_108.f_5, 0, 0);
		Global_1956200->f_1431.f_108.f_5 = 0f;
	}
	func_1321();
}

void func_1089(int iParam0)
{
	Global_1956200->f_1431.f_3 = iParam0;
}

void func_1090(struct<4> Param0)
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
			if (func_1322(Param0))
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
			func_1323(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_701(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_1322(Param0))
			{
				return;
			}
			func_1323(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_701(8);
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
			if (func_1322(Param0))
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
			func_1323(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_701(8);
			break;
			break;
	}
}

bool func_1091(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_1324(&iParam0);
	if (!func_721(iParam0, 0) && !func_1326(func_1325(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_722(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_1327(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_1094(0) };
		Var4.f_9 = -1591664384;
		if (!func_1096(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_1097(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_1095(iParam0, 1))
		{
			if (!func_1096(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_1097(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_1328(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_1297(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_1092(bool bParam0)
{
	if (func_23() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_699(bParam0));
}

int func_1093(int iParam0)
{
	if (!func_721(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1094(bool bParam0)
{
	iVar0 = func_699(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_718(923904168, func_717(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_718(923904168, func_717(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_718(923904168, func_717(bParam0), -740156546, 0);
}

bool func_1095(int iParam0, bool bParam1)
{
	if (func_988(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_1329();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_1096(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_1297(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_1097(int iParam0, var uParam1, int iParam2)
{
	if (func_1330(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1098(bool bParam0)
{
	iVar0 = func_699(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_718(271701509, func_717(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_718(271701509, func_717(bParam0), 12999093, 0);
}

bool func_1099(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_988(iParam0);
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
			if (func_1331(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1100(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1332(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_1101(int iParam0)
{
	if ((iParam0 == 1493442814 || iParam0 == 1054492269) || iParam0 == -1772735705)
	{
		return true;
	}
	return false;
}

bool func_1102(int iParam0)
{
	return iParam0 == -1005911451;
}

int func_1103(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1104(int iParam0)
{
	switch (iParam0)
	{
		case -1892280447:
		case -1598866821:
		case -1295720802:
		case 674287411:
			return 0;
		case -1124266369:
		case -551216071:
			return 1;
		case -1149999295:
		case 759906147:
			return 2;
		case -915290938:
		case 367637652:
		case 1556473961:
			return 3;
		case -560342419:
		case -389300196:
		case 2028722809:
			return 4;
		case -1963605336:
		case -1754211037:
			return 5;
		case -1433814131:
		case 90264823:
			return 6;
		case -1189368951:
		case 1654513481:
			return 7;
		case -1307757043:
		case 480688259:
			return 8;
		case -557149691:
		case 252669332:
			return 9;
		case -1098441944:
		case -117665949:
			return 10;
		case -1568716381:
		case -511163808:
			return 11;
		case -1392359921:
		case -1143398950:
		case -885451903:
		case -829273561:
			return 12;
		case -2021043433:
		case -781967776:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_1105(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = 230f;
			break;
		case 1:
			fVar0 = 270f;
			break;
		case 2:
			fVar0 = 70f;
			break;
		case 3:
			fVar0 = 220f;
			break;
		case 4:
			fVar0 = 200f;
			break;
		case 5:
			fVar0 = 110f;
			break;
		case 6:
			fVar0 = 200f;
			break;
		case 7:
			fVar0 = 200f;
			break;
		case 8:
			fVar0 = 85f;
			break;
		case 13:
			fVar0 = 110f;
			break;
		case 9:
			fVar0 = 85f;
			break;
		case 10:
			fVar0 = 220f;
			break;
		case 11:
			fVar0 = 110f;
			break;
		case 12:
			fVar0 = 130f;
			break;
	}
	fVar1 = 1f;
	switch (iParam1)
	{
		case 0:
			fVar1 = Global_1901947->f_852.f_5;
			break;
		case 1:
			fVar1 = Global_1901947->f_852.f_6;
			break;
		case 2:
			fVar1 = Global_1901947->f_852.f_7;
			break;
	}
	fVar0 = (fVar0 * fVar1);
	return round(fVar0);
}

float func_1106(int iParam0)
{
	switch (iParam0)
	{
		case -809127215:
			return Global_1901947->f_861;
		case 1706859953:
			return Global_1901947->f_861.f_1;
		case -53531786:
			return Global_1901947->f_861.f_2;
		case 326175668:
			return Global_1901947->f_861.f_3;
		case -920598405:
			return Global_1901947->f_861.f_4;
		default:
			break;
	}
	return 0.5f;
}

void func_1107(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	_0x6569f31a01b4c097(iVar0, 0, iParam1);
	_0x6569f31a01b4c097(iVar0, 1, iParam1);
}

Vector3 func_1108()
{
	return 0f, 0f, 0f;
}

void func_1109(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 20)
	{
		return;
	}
	iVar0 = &Local_16.f_29[iParam0];
	if (!network_does_network_id_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_network_id(iVar0))
	{
		return;
	}
	iVar1 = &Local_1444.f_51[iParam0];
	if (!func_753(iVar1, 0))
	{
		return;
	}
	remove_all_ped_weapons(iVar1, false, true);
	iVar2 = (iParam0 % 3);
	bVar3 = true;
	iVar2 = (iParam0 % 6);
	bVar4 = iVar2 == true;
	if (Local_16.f_29[iParam0]->f_2 == 783016369)
	{
		_give_weapon_to_ped_2(iVar1, 2075992054, 80, !bVar3, bVar3, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	else
	{
		remove_all_ped_weapons(iVar1, false, false);
		_give_weapon_to_ped_2(iVar1, -577893115, 80, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_current_ped_weapon(iVar1, -577893115, false, 0, false, false);
	}
	if (Local_16.f_29[iParam0]->f_2 == -85613452)
	{
		_give_weapon_to_ped_2(iVar1, 1845102363, 80, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	if (Local_16.f_29[iParam0]->f_2 == -1125105727 || Local_16.f_29[iParam0]->f_2 == -214860659)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				_give_weapon_to_ped_2(iVar1, 1999408598, 80, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
			else
			{
				_give_weapon_to_ped_2(iVar1, -183018591, 80, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
	}
}

float func_1110(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_1111()
{
	switch (Local_16.f_9)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_1112(int iParam0)
{
	if (Local_16.f_9 != iParam0)
	{
		Local_16.f_9 = iParam0;
	}
}

bool func_1113(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_ped_a_player(iParam0))
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (network_is_player_active(Local_16.f_505[iVar0]->f_1) && network_is_player_a_participant(Local_16.f_505[iVar0]->f_1))
				{
					iVar1 = get_player_ped(Local_16.f_505[iVar0]->f_1);
					if (iVar1 == iParam0)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (network_does_network_id_exist(&(Local_16.f_505[iVar0])))
				{
					iVar1 = net_to_ped(&(Local_16.f_505[iVar0]));
					if (iVar1 == iParam0)
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

int func_1114(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	fVar1 = iParam4;
	iVar3 = 255;
	*iParam3 = iParam4;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar2))
		{
		}
		else if (!network_is_player_a_participant(iVar2))
		{
		}
		else if (func_790(iVar0))
		{
		}
		else if (bParam7 && !func_1129(network_get_participant_index(iVar2), 1, 1))
		{
		}
		else
		{
			iVar4 = get_player_ped(iVar2);
			if (bParam8 && func_1113(iVar4))
			{
			}
			else if (Local_1444.f_50 == -920598405)
			{
				if (is_ped_in_any_vehicle(iVar4, true) && get_entity_model(get_vehicle_ped_is_in(iVar4, true)) == 1468884243)
				{
				}
				else if (bParam9 && func_778(iVar4))
				{
				}
				else if ((iParam5 == 0 || iParam6 == 0) || get_relationship_between_peds(iParam6, iVar4) == iParam5)
				{
					fVar1 = vdist(get_entity_coords(iVar4, false, false), vParam0);
					if (fVar1 < *iParam3)
					{
						iVar3 = iVar2;
						*iParam3 = fVar1;
					}
				}
				iVar0++;
				return iVar3;
			}
		}
	}
}

bool func_1115(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 5)
	{
		return false;
	}
	return true;
}

void func_1116(int iParam0)
{
	if (!func_764(*iParam0))
	{
		return;
	}
	func_789(*iParam0, 0);
	func_1120(*iParam0, func_1108());
	func_1121(*iParam0, -1);
	Local_1444.f_273.f_51 = *iParam0;
	*iParam0 = -1;
}

int func_1117(int iParam0, int iParam1)
{
	if (Local_16.f_10 == 2)
	{
		return 8;
	}
	else
	{
		switch (iParam0)
		{
			case -809127215:
				switch (iParam1)
				{
					case 0:
						return 18;
					case 1:
						return 18;
					case 2:
						return 20;
					case 3:
						return 20;
					case 4:
						return 18;
					default:
						break;
				}
				break;
			case 1706859953:
				switch (iParam1)
				{
					case 0:
						return 18;
					case 1:
						return 18;
					case 2:
						return 20;
					case 3:
						return 20;
					case 4:
						return 18;
					default:
						break;
				}
				break;
			case -53531786:
				switch (iParam1)
				{
					case 0:
						return 18;
					case 1:
						return 18;
					case 2:
						return 20;
					case 3:
						return 20;
					case 4:
						return 18;
					default:
						break;
				}
				break;
			case 326175668:
				switch (iParam1)
				{
					case 0:
						return 18;
					case 1:
						return 18;
					case 2:
						return 20;
					case 3:
						return 20;
					case 4:
						return 18;
					default:
						break;
				}
				break;
			case -920598405:
				switch (iParam1)
				{
					case 0:
						return 18;
					case 1:
						return 18;
					case 2:
						return 20;
					case 3:
						return 20;
					case 4:
						return 18;
					default:
						break;
				}
				break;
		}
	}
	return 10;
}

int func_1118(int iParam0, var uParam1)
{
	if (!func_1115(iParam0))
	{
		return -1;
	}
	if (!func_372(&Var0))
	{
		return -1;
	}
	Var0.f_2 = 290924059;
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return -1;
	}
	iVar5 = _datafile_get_num_children(Var0, Var0.f_1);
	uVar16 = Var0.f_1;
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		Var0.f_1 = uVar16;
		Var0.f_2 = -947463643;
		Var0.f_3 = iVar7;
		if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			return -1;
		}
		bVar10 = func_39(Var0, 1940565578, &iVar8, 0);
		bVar11 = func_39(Var0, 1358162137, &iVar9, 0);
		if ((bVar10 && iVar8 == iParam0) || (bVar11 && iVar9 == iParam0))
		{
			if (!func_146(Var0, -332598258, &vVar12, 0))
			{
				return -1;
			}
			if (!func_145(Var0, 382592596, &uVar15, 0))
			{
				return -1;
			}
			(*uParam1)[iVar6] = iVar7;
			(*uParam1)[iVar6]->f_1 = { vVar12 };
			(*uParam1)[iVar6]->f_4 = uVar15;
			iVar6++;
			if (iVar6 > *uParam1)
			{
				return -1;
			}
		}
		iVar7++;
	}
	return iVar6;
}

int func_1119()
{
	if (!func_764(Local_1444.f_273.f_51))
	{
		return -1;
	}
	iVar0 = Local_1444.f_273.f_51;
	Local_1444.f_273.f_51 = -1;
	func_789(iVar0, 1);
	func_1120(iVar0, func_1108());
	func_1121(iVar0, -1);
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (&Local_1444.f_273[iVar1] == 0)
		{
			Local_1444.f_273.f_51 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

void func_1120(int iParam0, vector3 vParam1)
{
	if (!func_764(iParam0))
	{
		return;
	}
	Local_1444.f_273[iParam0]->f_1 = { vParam1 };
}

void func_1121(int iParam0, int iParam1)
{
	if (!func_764(iParam0))
	{
		return;
	}
	Local_1444.f_273[iParam0]->f_4 = iParam1;
}

int func_1122(int iParam0)
{
	if (!func_764(iParam0))
	{
		return -1;
	}
	return Local_1444.f_273[iParam0]->f_4;
}

bool func_1123(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar2))
		{
		}
		else if (!network_is_player_a_participant(iVar2))
		{
		}
		else
		{
			iVar3 = network_get_participant_index(iVar2);
			iVar4 = iVar3;
			if (!func_1129(iVar4, 1, 1))
			{
			}
			else if (func_1130(iVar4))
			{
			}
			else
			{
				iVar5 = get_player_ped(iVar2);
				fVar1 = func_627(iVar5, vParam0, 1);
				if (fVar1 <= fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_1124()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!network_does_network_id_exist(&(Local_16.f_461[iVar0])))
		{
			if (!does_entity_exist(&(Local_1444.f_252[iVar0])) && !func_753(&(Local_1444.f_252[iVar0]), 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1125(int iParam0, int iParam1)
{
	if (Local_16.f_10 == 2)
	{
		return 8;
	}
	else
	{
		switch (iParam0)
		{
			case -809127215:
				switch (iParam1)
				{
					case 0:
						return 3;
					case 1:
						return 3;
					case 2:
						return 3;
					case 3:
						return 3;
					case 4:
						return 3;
					default:
						break;
				}
				break;
			case 1706859953:
				switch (iParam1)
				{
					case 0:
						return 3;
					case 1:
						return 3;
					case 2:
						return 3;
					case 3:
						return 3;
					case 4:
						return 3;
					default:
						break;
				}
				break;
			case -53531786:
				switch (iParam1)
				{
					case 0:
						return 3;
					case 1:
						return 3;
					case 2:
						return 3;
					case 3:
						return 3;
					case 4:
						return 3;
					default:
						break;
				}
				break;
			case 326175668:
				switch (iParam1)
				{
					case 0:
						return 3;
					case 1:
						return 3;
					case 2:
						return 3;
					case 3:
						return 3;
					case 4:
						return 3;
					default:
						break;
				}
				break;
			case -920598405:
				switch (iParam1)
				{
					case 0:
						return 3;
					case 1:
						return 3;
					case 2:
						return 3;
					case 3:
						return 3;
					case 4:
						return 3;
					default:
						break;
				}
				break;
		}
	}
	return 3;
}

bool func_1126(int iParam0, vector3 vParam1)
{
	if (network_does_network_id_exist(&(Local_16.f_461[iParam0])))
	{
		return true;
	}
	if (Local_1444.f_265)
	{
		return false;
	}
	if (!func_730(Local_16.f_461[iParam0], func_412(), vParam1, 0f, 1, 0, 1, 1, 1))
	{
		return false;
	}
	func_1333(net_to_ped(&(Local_16.f_461[iParam0])), 1);
	set_ped_config_flag(net_to_ped(&(Local_16.f_461[iParam0])), 388, true);
	set_ped_config_flag(net_to_ped(&(Local_16.f_461[iParam0])), 590, true);
	set_ped_config_flag(net_to_ped(&(Local_16.f_461[iParam0])), 277, true);
	Local_1444.f_265 = 1;
	return true;
}

bool func_1127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam2 = -1;
	*iParam3 = -1;
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= iParam1)
	{
		return false;
	}
	*iParam2 = (iParam0 / 32);
	*iParam3 = (iParam0 - *iParam2 * 32);
	return true;
}

bool func_1128(int iParam0, int iParam1)
{
	if (!func_1127(iParam1, 20, &iVar0, &iVar1))
	{
		return false;
	}
	return is_bit_set(&(Local_579[iParam0]->f_24[iVar0]), iVar1);
}

bool func_1129(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = int_to_participantindex(iParam0);
	if (!network_is_participant_active(iVar0))
	{
		return false;
	}
	iVar1 = network_get_player_index(iVar0);
	if (bParam2 && !network_is_player_active(iVar1))
	{
		return false;
	}
	if (bParam1 && is_player_dead(iVar1))
	{
		return false;
	}
	return true;
}

bool func_1130(int iParam0)
{
	if (!network_is_participant_active(int_to_participantindex(iParam0)))
	{
		return false;
	}
	if (!func_65(131072))
	{
		return false;
	}
	if (&Local_2000[iParam0] < 2)
	{
		return false;
	}
	if (Local_2000[iParam0]->f_4 < 1)
	{
		return false;
	}
	if (Local_2000[iParam0]->f_4 < 0)
	{
		return false;
	}
	return true;
}

void func_1131(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_5 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_5);
		}
		Global_1071686->f_21689[iParam0]->f_5 = 0;
		func_897(iParam0);
	}
}

bool func_1132()
{
	return func_643(Global_1572887->f_7, 1);
}

bool func_1133()
{
	return (Global_1572887->f_106.f_75 >= 14 && Global_1572887->f_106.f_75 < 21);
}

bool func_1134(var uParam0, int iParam1)
{
	return func_78(*uParam0, iParam1);
}

int func_1135(int iParam0)
{
	return (Global_1296859->f_21 - iParam0);
}

void func_1136(int iParam0, int iParam1)
{
	if (func_1134(iParam0, iParam1))
	{
		return;
	}
	func_149(iParam0, iParam1);
}

void func_1137(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108365->f_34[iVar0]->f_10 = 0;
}

void func_1138(int iParam0, int iParam1)
{
	func_445(iParam0, iParam1);
}

void func_1139(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 9, 19, uParam1);
}

void func_1140(int iParam0, float fParam1, float fParam2, float fParam3)
{
	_get_color_from_name(iParam0, &iVar0, &iVar1, &iVar2, &uVar3);
	fVar4 = 255f;
	*fParam1 = (to_float(iVar0) / fVar4);
	*fParam2 = (to_float(iVar1) / fVar4);
	*fParam3 = (to_float(iVar2) / fVar4);
}

void func_1141()
{
	func_1334();
	func_1335();
}

bool func_1142(int iParam0, int iParam1)
{
	return false;
}

int func_1143(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar0 = func_1144(iParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		return 0;
	}
	iVar1 = (iParam1 - iVar0);
	return func_1336(iParam0, iVar1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
}

int func_1144(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_721(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_1093(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_1337(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_1338(iParam0, 0);
	}
	if (func_722(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_699(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_1339(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_699(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_1145(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_1146(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = true;
	if (func_1340(iParam0))
	{
		bVar0 = false;
	}
	_give_weapon_to_ped_2(Global_34, iParam0, 0, bVar0, false, 0, true, 0.5f, 1f, 752097756, false, 0f, false);
	func_1341(iParam0);
	return true;
}

void func_1147(bool bParam0)
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

bool func_1148(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_1149(int iParam0)
{
	if (func_1342())
	{
		return 0;
	}
	if (!func_158())
	{
		return 0;
	}
	if (func_1343())
	{
		func_1344(2);
	}
	else
	{
		func_1344(1);
	}
	func_1345(iParam0);
	return 1;
}

void func_1150(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (!func_363(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1346(Param0);
	}
	if (!func_73(func_373(0)))
	{
		func_667(Param0, 3);
		func_349(bParam3);
		func_668(!bParam4);
		func_1347(Param0, -1);
		if (bParam2 && !func_1348(2))
		{
			func_1011(&Global_0, 1024);
		}
		func_670(1);
	}
	else
	{
		func_1347(Param0, -1);
		func_667(Param0, 4);
		func_1349(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_672(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1350(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

int func_1151(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_1023(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_1009(Param0);
	Var0.f_3 = iParam3;
	func_1351(&Var0, bParam2, iParam4);
	return 1;
}

void func_1152(int iParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 != 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = iParam0;
	_0xc584ff658b2e55da(iParam0);
}

void func_1153(int iParam0, var uParam1)
{
	iVar0 = func_676(iParam0);
	if (iVar0 == -785841056)
	{
		func_461(func_47(1511238709, -785841056), 1);
	}
	else
	{
		func_461(func_47(1511238709, -1666944573), 1);
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_461(func_47(1511238709, iVar1), 1);
	}
}

void func_1154(int iParam0)
{
	if ((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_1027(Global_1893587->f_2);
	Global_1900688->f_1 = 3;
	Global_1900688->f_2 = 0;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_8 = iParam0;
	Global_1900688->f_9 = iVar1;
	if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
	{
		func_1029(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
	}
	else if (Global_1900688->f_11 != -1)
	{
		func_1029(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
	}
}

void func_1155()
{
	if (network_is_player_active(player_id()))
	{
		if (func_1352(1048576, player_id()) || Global_1296851->f_2.f_1 == 2)
		{
			func_1353();
		}
	}
	if (_get_wanted_intensity_for_player(Global_1296859->f_10) > 0)
	{
		if (func_1354())
		{
			func_1355();
		}
		func_1356();
	}
}

void func_1156(int iParam0)
{
	if (Global_1108365->f_935.f_28 != iParam0)
	{
		Global_1108365->f_935.f_28 = iParam0;
	}
}

int func_1157(int iParam0, struct<2> Param1, int iParam3)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
			break;
		default:
			return 0;
	}
	func_1357(iParam0, Param1, iParam3);
	return 1;
}

int func_1158(int iParam0)
{
	iVar0 = -50383753;
	if (func_36(&Var1, iParam0) && func_143(&Var1))
	{
		func_40(Var1, -1641329203, &iVar0, 0);
	}
	return iVar0;
}

var func_1159(int iParam0)
{
	if (func_36(&Var1, iParam0) && func_143(&Var1))
	{
		func_40(Var1, -1268019774, &uVar0, 0);
	}
	return uVar0;
}

var func_1160(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	iVar0 = func_1358();
	iVar1 = get_cloud_time_as_int();
	iVar2 = (iVar1 + Param0.f_23);
	_int_to_string(iVar1, "%i", &cVar11);
	Global_1940311->f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940311->f_242.f_1188, 64);
	func_1359(Global_1940311->f_242.f_14[iVar0], Global_1940311->f_242.f_4, cVar3, Param0);
	Global_1940311->f_242.f_14[iVar0]->f_35 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_1253(84), Global_1940311->f_242.f_1188);
	Global_1940311->f_242.f_14[iVar0]->f_37 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_1253(85), true);
	Global_1940311->f_242.f_14[iVar0]->f_38 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_1253(86), false);
	Global_1940311->f_242.f_14[iVar0]->f_33 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_1253(74), Param0.f_30);
	if (Param0.f_30)
	{
		Global_1940311->f_242.f_14[iVar0]->f_32 = _databinding_add_data_string(&(Global_1940311->f_242.f_14[iVar0]), func_1253(72), Param0.f_29);
		Global_1940311->f_242.f_14[iVar0]->f_31 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_1253(75), Param0.f_28);
	}
	Global_1940311->f_242.f_14[iVar0]->f_26 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_1253(87), Param0.f_24);
	iVar15 = 0;
	Global_1940311->f_242.f_14[iVar0]->f_34 = _databinding_add_data_bool_by_hash(&(Global_1940311->f_242.f_14[iVar0]), 707094655, iVar15);
	Global_1940311->f_242.f_14[iVar0]->f_27 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_1253(50), Param0.f_25);
	Global_1940311->f_242.f_14[iVar0]->f_28 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_1253(51), Param0.f_25.f_1);
	Global_1940311->f_242.f_14[iVar0]->f_29 = _databinding_add_data_gang_id(&(Global_1940311->f_242.f_14[iVar0]), func_1253(88), Param0.f_25.f_2);
	Global_1940311->f_242.f_14[iVar0]->f_25 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_1253(89), iVar2);
	Global_1940311->f_242.f_14[iVar0]->f_24 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_1253(90), Param0.f_22);
	func_1007(Global_1940311->f_242.f_1186 + 1);
	if (Global_1940311->f_242.f_1188 == 2147483647)
	{
		Global_1940311->f_242.f_1188 = 0;
	}
	if (func_1360(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = &Global_1940311->f_242.f_14[iVar0];
		iVar16 = func_1361(&(Param0.f_31));
		Global_1940311->f_242.f_14[iVar0]->f_36 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_1253(91), iVar16);
	}
	iVar17 = func_1362();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1940311->f_242.f_1187++;
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_242.f_5, 0, "pm_invite_item", &(Global_1940311->f_242.f_14[iVar0]));
	}
	return &(Global_1940311->f_242.f_14[iVar0]);
}

int func_1161(struct<2> Param0)
{
	if (&Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_1363(Param0))
	{
		return -1;
	}
	iVar1 = func_1364(Param0);
	if (iVar1 >= 0)
	{
		func_1365(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900806;
		*(*Global_1900807)[iVar0] = { Param0 };
		*(*Global_1900838)[iVar0] = { Var2 };
		func_1365(Param0, 1);
		Global_1900806 = &Global_1900806 + 1;
		if (&Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

bool func_1162(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_1163(int iParam0, int iParam1)
{
	if (!func_1162(iParam0))
	{
		return false;
	}
	if (func_23() == -1)
	{
		return (Global_1915715->f_3[iParam0]->f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
	}
	return false;
}

void func_1164(int iParam0, int iParam1)
{
	if (!func_1162(iParam0))
	{
		return;
	}
	if (func_23() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 || iParam1);
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
	}
}

void func_1165(int iParam0, int iParam1)
{
	if (!func_1162(iParam0))
	{
		return;
	}
	if (func_23() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 - (Global_1915715->f_3[iParam0]->f_6 && iParam1));
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
	}
}

bool func_1166(int iParam0)
{
	if (func_1366())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_1167(int iParam0)
{
	set_ped_reset_flag(get_player_ped(iParam0), 354, true);
	Global_1071686->f_21416.f_1[iParam0]->f_4 = get_frame_count();
}

void func_1168(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1169(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

Vector3 func_1170(vector3 vParam0, float fParam3, float fParam4)
{
	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { get_random_float_in_range(-fParam3, fParam3), get_random_float_in_range(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = get_random_float_in_range(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_1367(vParam0, fParam3, fParam4);
}

bool func_1171(var uParam0, float fParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return true;
	}
	return false;
}

var func_1172(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_1368() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_1369());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_1369());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_1369());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1370(get_player_team(iVar5)));
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
			if (func_1371(iVar2))
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
				if (iVar9 & 8192 != 0 && func_865(iVar2) != 1)
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
					if (!func_1252(iVar10))
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

void func_1173(bool bParam0)
{
	if (bParam0)
	{
		func_172(64);
	}
	else
	{
		func_171(64);
	}
}

int func_1174(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_828(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_866(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = { Param0 };
		func_867(&(Global_1102219->f_3888));
		Global_1102219->f_3888 = { Param30 };
		Global_1102219->f_3919 = iParam39;
		Global_1102219->f_3920 = iParam40;
		Global_1102219->f_3921 = iParam41;
		func_868(Global_1102219->f_3849, 36);
		func_869(Global_1102219->f_3888, 36);
		func_171(48);
		return 1;
	}
	return 0;
}

void func_1175()
{
	func_511(&(Global_1071686->f_22973.f_3), 128);
}

bool func_1176()
{
	return true;
}

bool func_1177()
{
	return (!&Global_1903133 && absi((get_frame_count() - Global_1903133->f_2)) >= 5);
}

void func_1178(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

bool func_1179()
{
	iVar0 = 1;
	if ((((((!_0xe368e8422c860ba7(func_588(), func_878(), -2) || !_0xe368e8422c860ba7(func_879(), func_878(), -2)) || !_0xe368e8422c860ba7(func_880(), func_878(), -2)) || !_0xe368e8422c860ba7(func_1372(), func_878(), -2)) || !_0xe368e8422c860ba7(func_881(), func_878(), -2)) || !_0xe368e8422c860ba7(func_847(), func_848(), -2)) || !_0xe368e8422c860ba7(func_882(), func_883(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1180(var uParam0, var uParam1, int iParam2)
{
	switch (func_1373(iParam2))
	{
		case 0:
			func_1374(uParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_1375(uParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_1376(uParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_1377(uParam0, uParam1, iParam2, -1082130432);
			break;
		case 4:
			func_1378(uParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_1181(var uParam0, bool bParam1)
{
	_databinding_write_data_bool(uParam0, bParam1);
}

void func_1182(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

char* func_1183(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = ceil(fVar4);
	}
	else
	{
		iVar5 = floor(fVar4);
	}
	iVar6 = func_1379((iVar5 / 60), 0, 180);
	iVar7 = func_1379((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = get_length_of_literal_string(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, _0xd8402b858f4ddd88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return _0xd8402b858f4ddd88(&cVar0, get_length_of_literal_string(&cVar0));
}

void func_1184(var uParam0, char* sParam1)
{
	_databinding_write_data_string(uParam0, sParam1);
}

void func_1185(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 10000)
	{
		if ((uParam0->f_13 > iParam1 && uParam0->f_13 > 10000) && uParam0->f_11 < 0)
		{
			uParam0->f_11 = get_sound_id();
			if (is_string_null_or_empty(sParam2) || are_strings_equal(sParam2, func_880()))
			{
				_0xce5d0ffe83939af1(uParam0->f_11, func_880(), func_878(), 1);
			}
			else
			{
				_0xce5d0ffe83939af1(uParam0->f_11, sParam2, func_878(), 1);
				_0x9821b68cd3e05f2b("Time", 10f, sParam2, func_878());
			}
		}
	}
	else
	{
		func_291(uParam0);
	}
}

void func_1186(var uParam0, int iParam1)
{
	if (iParam1 <= 0 && uParam0->f_12 < 0)
	{
		uParam0->f_12 = get_sound_id();
		_0xce5d0ffe83939af1(uParam0->f_12, func_1372(), func_878(), 1);
	}
}

var func_1187(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_1188(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

bool func_1189(var uParam0)
{
	uParam0->f_2 = 1648302374;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1190(var uParam0, var uParam1)
{
	uParam0->f_2 = 1950557689;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

void func_1191(int iParam0, int iParam1)
{
	if (!_0x72b2e00c9bac6789(&(Local_2193.f_1387), iParam1))
	{
		if (network_is_player_active(iParam0))
		{
			func_1380(iParam0);
			if (Local_2193.f_9 != -785841056)
			{
				func_999(iParam1, 1);
			}
			_0x31010318ba9897ac(&(Local_2193.f_1387), iParam1);
		}
	}
}

void func_1192()
{
	if (!func_647(256))
	{
		func_1381(256);
	}
}

void func_1193(int iParam0, int iParam1)
{
	if (!_0x72b2e00c9bac6789(&(Local_2193.f_1386), iParam1))
	{
		if (network_is_player_active(iParam0))
		{
			func_1382(iParam0);
			if (Local_2193.f_9 != -785841056)
			{
				func_999(iParam1, 1);
			}
			_0x31010318ba9897ac(&(Local_2193.f_1386), iParam1);
		}
	}
	if (!func_137(33554432))
	{
		if (network_is_player_active(iParam0) && iParam0 == player_id())
		{
			if (func_343(_0x901e0dc25080c8b9(iParam0)))
			{
				func_344(0, 0, 1);
				func_43(67108864);
			}
			func_1192();
			func_43(33554432);
		}
	}
}

void func_1194(int iParam0, int iParam1)
{
	if (!_0x72b2e00c9bac6789(&(Local_2193.f_1386), iParam1))
	{
		if (network_is_player_active(iParam0))
		{
			func_1382(iParam0);
			if (!_0x81fb74c83c2ed69f(iParam0))
			{
				func_1383(iParam0);
			}
			if (Local_2193.f_9 != -785841056)
			{
				func_999(iParam1, 1);
			}
			_0x31010318ba9897ac(&(Local_2193.f_1386), iParam1);
		}
	}
	if (!func_137(33554432))
	{
		if (network_is_player_active(iParam0) && iParam0 == player_id())
		{
			if (func_343(_0x901e0dc25080c8b9(iParam0)))
			{
				func_344(0, 0, 1);
				func_43(67108864);
			}
			func_1192();
			func_43(33554432);
		}
	}
}

void func_1195(int iParam0, int iParam1, bool bParam2)
{
	if (!_0x72b2e00c9bac6789(&(Local_2193.f_1386), iParam1))
	{
		if (network_is_player_active(iParam0))
		{
			func_1382(iParam0);
			if (bParam2)
			{
				if ((func_181(64) || !_0x81fb74c83c2ed69f(iParam0)) || Local_2193.f_1388 == -1477057661)
				{
					func_1384(iParam0);
				}
			}
			else if (!_0x81fb74c83c2ed69f(iParam0))
			{
				func_1383(iParam0);
			}
			if (Local_2193.f_9 != -785841056)
			{
				func_999(iParam1, 1);
			}
			_0x31010318ba9897ac(&(Local_2193.f_1386), iParam1);
		}
	}
	if (!func_137(33554432))
	{
		if (network_is_player_active(iParam0) && iParam0 == player_id())
		{
			if (func_343(_0x901e0dc25080c8b9(iParam0)))
			{
				func_344(0, 0, 1);
				func_43(67108864);
			}
			func_1192();
			func_43(33554432);
		}
	}
}

float func_1196(int iParam0, bool bParam1)
{
	if (!Global_1139381->f_5560)
	{
		return 0f;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_0x149a2751ab66ac02(_0x901e0dc25080c8b9(iParam0)) > 1 && bParam1) && (*Global_1100469)[iVar0]->f_18 >= (*Global_1100469)[iVar0]->f_45)
	{
		return (*Global_1100469)[iVar0]->f_18;
	}
	return (*Global_1100469)[iVar0]->f_45;
}

bool func_1197(struct<2> Param0, var uParam2)
{
	if (!func_73(Param0))
	{
		return false;
	}
	func_1385(uParam2);
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

bool func_1198(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

var func_1199(int iParam0, int iParam1)
{
	return func_1172(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_1200(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	if (!_0x179a6f0ee2e79026(&(Param0.f_5)))
	{
		return;
	}
	Param0 = 57;
	Param0.f_1 = player_id();
	Param0.f_2 = get_network_time_accurate();
	Param0.f_4 = iParam10;
	trigger_script_event(1, &Param0, 10, 6, &(Param0.f_5));
}

void func_1201(int iParam0)
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
		func_1386();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_1202(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

void func_1203(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(func_1387(), iParam0);
		set_blip_sprite(*uParam1, -1646261997, false);
		_blip_set_modifier(*uParam1, -528849255);
		if (bParam2)
		{
			_blip_set_modifier(*uParam1, -1445216292);
		}
		if (bParam3)
		{
			_blip_set_modifier(*uParam1, -1654168258);
		}
		_blip_set_modifier(*uParam1, 847579139);
		set_blip_name_from_text_file(*uParam1, func_1388(func_1104(get_entity_model(iParam0))));
	}
}

int func_1204(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vVar1 = { vParam0 + vParam3 / Vector(2f, 2f, 2f) };
	vVar4 = { vParam3 - vParam0 };
	vVar4.f_2 = 0f;
	vVar7 = { func_1389(vVar4) };
	fVar10 = (vParam3.z - vParam0.z);
	vVar11.x = vmag(vVar4);
	vVar11.f_1 = fParam6;
	vVar11.f_2 = absf(fVar10);
	iVar0 = _create_volume_box(vVar1, vVar7, vVar11);
	return iVar0;
}

char* func_1205(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_1206(var uParam0, int iParam1, char* sParam2)
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

void func_1207(var uParam0, bool bParam1, int iParam2)
{
	func_1390(iParam2);
	if (Global_1572887->f_13 == -1)
	{
		if (!does_entity_exist(Global_34))
		{
			return;
		}
		if (Global_1940258->f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1296859->f_11)
		{
			return;
		}
		if (Global_1296859->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_11 = 0;
	}
	uParam0->f_6 = iParam2;
	if (Global_1572887->f_13 == -1)
	{
		uParam0->f_14 = Global_1940258->f_38;
	}
	else
	{
		uParam0->f_14 = func_1391(0);
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_14 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_34))
						{
							func_511(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_1392(1, 1))
						{
							func_511(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_1392(1, 1) || *uParam0 & 8192 != 0))
				{
					func_644(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_2 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_15))
		{
			if (func_1393(uParam0))
			{
				uParam0->f_16 = get_network_time_accurate();
			}
		}
		else if (uParam0->f_16 != 0)
		{
			if (get_time_difference(uParam0->f_16, get_network_time_accurate()) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_15))
				{
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
				}
			}
		}
	}
	uParam0->f_7++;
	if (uParam0->f_7 >= 4)
	{
		uParam0->f_7 = 0;
		uParam0->f_8++;
		if (uParam0->f_8 > 4)
		{
			uParam0->f_8 = 0;
		}
	}
	func_1394(uParam0);
}

bool func_1208(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_1225();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_1209(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1) || decor_exist_on(iParam0, "DamagedByPlayer"))
			{
				return 1;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_1395(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_1396(iVar0, iParam0))
	{
		return 1;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return 1;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1210(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_6))
		{
		}
	}
	else if (uParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_1211(var uParam0, int iParam1)
{
	if (func_1397(uParam0))
	{
		return true;
	}
	if (_0x29fce825613fefca(iParam1, 400))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if ((is_ped_performing_melee_action(Global_34, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_34, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_34) != 0)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(Global_34, iParam1))
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

void func_1212()
{
}

void func_1213(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_1398(iParam2, 1, 1, 1, 0))
	{
		func_511(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_1399(uParam1, 1);
	func_1400();
}

bool func_1214(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_777(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1215()
{
	if (Global_1940258->f_36 == 0)
	{
		return false;
	}
	if (Global_1940258->f_36 == Global_1940258->f_34)
	{
		return false;
	}
	if (Global_1940258->f_37 <= 0)
	{
		return false;
	}
	if ((func_1225() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_1216(var uParam0, float fParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_1225();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_1217(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_1401(uParam2);
			if (!is_weapon_valid(Global_1940258->f_40) || Global_1940258->f_40 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1940258->f_40) && _0xea522f991e120d45(Global_1940258->f_40))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1940258->f_40) || Global_1940258->f_40 == -1569615261) || (is_weapon_valid(Global_1940258->f_40) && _0x5809dbca0a37c82b(Global_1940258->f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(uParam0) <= fVar2)
		{
			if (func_1211(uParam2, iParam1))
			{
				func_1399(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_1218(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 < IntToFloat(func_1402(uParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_1211(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_1399(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1219(int iParam0, var uParam1)
{
	fVar0 = func_1403(uParam1);
	if (uParam1->f_13 > (fVar0 + 5f))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
	}
	if (uParam1->f_13 < fVar0 || is_tracked_ped_visible(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_1404(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		bVar3 = uParam1->f_1 & 2 != false;
		if (_0x06087579e7aa85a9(iParam0, Global_34, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_34, 1, bVar3) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1940258->f_38))
		{
			if (_is_weapon_lantern(Global_1940258->f_38) || _is_weapon_torch(Global_1940258->f_38))
			{
				if (uParam1->f_13 <= 5f)
				{
					if (func_1405())
					{
						if (is_ped_facing_ped(Global_34, iParam0, 110f))
						{
							if (has_entity_clear_los_to_entity(iParam0, Global_34, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_1220(int iParam0, var uParam1)
{
	if (func_1406(iParam0))
	{
		set_player_noise_multiplier(player_id(), 0.25f);
	}
	if (((_get_ped_crouch_movement(Global_34) || is_ped_in_cover(Global_34, 0, 0)) || is_ped_going_into_cover(Global_34)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (_0x0ea9eacba3b01601(Global_34, iParam0, iVar1) && get_player_current_stealth_noise(player_id()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (is_ped_in_cover(Global_34, 0, 0) || is_ped_going_into_cover(Global_34))
			{
				return false;
			}
			if (_get_ped_crouch_movement(Global_34) || ((_0xa29fd00d45311eb7(Global_34, "stealth") == 1f && get_player_current_stealth_noise(player_id()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (_0xa29fd00d45311eb7(Global_34, "stealth") == 1f && get_player_current_stealth_noise(player_id()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

int func_1221()
{
	if (!func_372(&vVar0))
	{
		return -1;
	}
	vVar0.f_2 = 279919022;
	if (!_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return -1;
	}
	iVar5 = _datafile_get_num_children(vVar0.x, vVar0.y);
	return iVar5;
}

void func_1222(struct<8> Param0, var uParam8, var uParam9)
{
	Local_1444.f_484 = Param0.f_6;
	Local_1444.f_485 = Param0.f_7;
}

int func_1223(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_ped_on_mount(iParam0))
	{
		return 0;
	}
	iVar0 = get_mount(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	return iVar0;
}

void func_1224(float fParam0)
{
	func_1407((Local_2000[Local_2193.f_1333]->f_2 + fParam0));
}

int func_1225()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_1226(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				if (!is_ped_in_current_conversation(&cParam0, cParam3[iVar0], 0))
				{
					add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
				}
			}
		}
		iVar0++;
	}
}

void func_1227(bool bParam0)
{
	if (func_1408())
	{
		Global_1958008 = 1;
	}
	if (func_1409(-92416669))
	{
	}
	if (bParam0 && (Global_1940258->f_38 == -1016714371 || Global_1940258->f_38 == 332793555))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		Global_1940258->f_38 = -1569615261;
	}
}

void func_1228(int iParam0)
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
	func_1410(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_1229(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_1411(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_1228(iParam0);
			return;
		}
		_0x51951de06c0d1c40(iParam0, 2);
		Global_1071686->f_21416.f_1[iVar0] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = int_to_playerindex(iVar2);
			if (iVar2 != &Global_1296859 && network_is_player_active(iVar3))
			{
				if (_0x81fb74c83c2ed69f(iVar3))
				{
					if (bParam3)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_0x3f59fe6f37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_1229(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_1412(&Var6, uVar4);
		}
	}
}

int func_1230(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (uParam1[0] == 0)
	{
		uVar0 = _databinding_add_data_container(uParam0->f_5, "score");
		func_1375(uVar0, (*uParam1)[0], 2, "0");
		func_1375(uVar0, (*uParam1)[1], 8, "0");
		bVar1 = !func_643(iParam2, 16);
		bVar2 = !func_643(iParam2, 32);
		func_1378(uVar0, &((*uParam1)[0]->f_3), 5, bVar1, 0);
		func_1374(uVar0, &((*uParam1)[0]->f_1), 3, iParam4);
		func_1374(uVar0, &((*uParam1)[0]->f_2), 4, iParam6);
		func_1378(uVar0, &((*uParam1)[1]->f_3), 11, bVar2, 0);
		func_1374(uVar0, &((*uParam1)[1]->f_1), 9, iParam5);
		func_1374(uVar0, &((*uParam1)[1]->f_2), 10, iParam7);
	}
	return 1;
}

int func_1231(var uParam0, int iParam1, int iParam2)
{
	if (func_643(iParam1, 262144))
	{
		set_bit(&(uParam0->f_11.f_160), 6);
	}
	else if (func_643(iParam1, 65536))
	{
		set_bit(&(uParam0->f_11.f_160), 3);
	}
	else if (func_643(iParam1, 131072))
	{
		set_bit(&(uParam0->f_11.f_160), 4);
		set_bit(&(uParam0->f_11.f_159), 18);
	}
	else if (func_643(iParam1, 1048576))
	{
		set_bit(&(uParam0->f_11.f_160), 8);
	}
	else
	{
		set_bit(&(uParam0->f_11.f_159), 6);
	}
	if (func_643(iParam1, 64))
	{
		set_bit(&(uParam0->f_11.f_159), 0);
	}
	if (func_643(iParam1, 2048))
	{
		set_bit(&(uParam0->f_11.f_159), 7);
	}
	if (func_643(iParam1, 1024))
	{
		uParam0->f_11.f_151 = 2;
		set_bit(&(uParam0->f_11.f_159), 31);
	}
	if (func_643(iParam1, 4096))
	{
		set_bit(&(uParam0->f_11.f_159), 9);
	}
	if (func_643(iParam1, 16384))
	{
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_159), 18);
	}
	if (func_643(iParam1, 4194304))
	{
		set_bit(&(uParam0->f_11.f_160), 11);
	}
	if (func_643(iParam1, 8388608))
	{
		set_bit(&(uParam0->f_11.f_160), 12);
	}
	if (func_643(iParam1, 8192))
	{
		set_bit(&(uParam0->f_11.f_159), 10);
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_159), 18);
	}
	if (func_643(iParam1, 32768))
	{
		set_bit(&(uParam0->f_11.f_159), 22);
		set_bit(&(uParam0->f_11.f_159), 23);
	}
	if (func_643(iParam1, 524288))
	{
		set_bit(&(uParam0->f_11.f_160), 7);
	}
	if (func_643(iParam1, 2097152))
	{
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_160), 9);
	}
	if (func_643(iParam1, 16777216))
	{
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_159), 0);
		set_bit(&(uParam0->f_11.f_160), 13);
	}
	func_1413(&(uParam0->f_11));
	func_277(uParam0);
	if (iParam2 > 1)
	{
		uParam0->f_11.f_150 = iParam2;
	}
	if (!is_string_null_or_empty(&(uParam0->f_951)))
	{
		func_1414(&(uParam0->f_11), &(uParam0->f_951));
	}
	return 1;
}

void func_1232(var uParam0, int iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	if ((*uParam0)[0]->f_4 != fParam2 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar0, func_1415(fParam2), 32);
			func_1184(uParam0[0], &cVar0);
		}
		else if (bParam4)
		{
			StringCopy(&cVar4, func_1416(fParam2), 32);
			func_1184(uParam0[0], &cVar4);
		}
		else if (bParam5)
		{
			StringCopy(&cVar8, _0x2b6846401d68e563(fParam2, 2), 32);
			func_1184(uParam0[0], &cVar8);
		}
		else
		{
			_int_to_string(floor(fParam2), "%i", &uVar12);
			func_1184(uParam0[0], &uVar12);
		}
		(*uParam0)[0]->f_4 = fParam2;
	}
	if ((*uParam0)[1]->f_4 != fParam3 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar16, func_1415(fParam3), 32);
			func_1184(uParam0[1], &cVar16);
		}
		else if (bParam4)
		{
			StringCopy(&cVar20, func_1416(fParam3), 32);
			func_1184(uParam0[1], &cVar20);
		}
		else if (bParam5)
		{
			StringCopy(&cVar24, _0x2b6846401d68e563(fParam3, 2), 32);
			func_1184(uParam0[1], &cVar24);
		}
		else
		{
			_int_to_string(floor(fParam3), "%i", &uVar28);
			func_1184(uParam0[1], &uVar28);
		}
		(*uParam0)[1]->f_4 = fParam3;
	}
	bVar32 = !func_643(iParam1, 16);
	bVar33 = !func_643(iParam1, 32);
	func_1417((*uParam0)[0]->f_1, iParam7);
	func_1417((*uParam0)[0]->f_2, iParam9);
	func_1181((*uParam0)[0]->f_3, bVar32);
	func_1417((*uParam0)[1]->f_1, iParam8);
	func_1417((*uParam0)[1]->f_2, iParam10);
	func_1181((*uParam0)[1]->f_3, bVar33);
}

void func_1233(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	func_1418(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	func_1419(uParam0, uParam1, bParam3, iParam2, iParam4, is_bit_set(uParam0->f_159, 5), iParam6);
}

void func_1234(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	iVar0 = -1;
	if (!is_bit_set(uParam0->f_159, 1))
	{
		iVar2 = get_player_team(*iParam2);
		iVar3 = func_1420();
		bVar4 = func_1421();
		bVar5 = func_1422();
		bVar6 = is_bit_set(uParam0->f_158, 18);
		if (uParam0->f_152 != Global_1940144->f_111)
		{
			if (uParam0->f_152)
			{
				bVar1 = true;
			}
			uParam0->f_152 = Global_1940144->f_111;
			bParam3 = true;
		}
		func_1423(uParam0, uParam1, iParam2, &iVar0, iVar2);
		if (!is_bit_set(uParam0->f_158, 1))
		{
			if (!bVar5 && !bParam7)
			{
				if ((iVar3 != -1 || bVar4) || bVar6)
				{
					if (!is_bit_set(uParam0->f_158, 0))
					{
						func_1413(uParam0);
						func_1424(uParam0, uParam1, iParam4, 0, 1, bParam5, iVar2, -1, bParam6, 0, iVar0);
						set_bit(&(uParam0->f_158), 0);
					}
					else
					{
						func_1233(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
					}
					clear_bit(&(uParam0->f_158), 13);
					set_bit(&(uParam0->f_158), 1);
				}
			}
		}
		else if ((((iVar3 == -1 && !bVar4) && !bVar6) || bVar5) || bParam7)
		{
			if (!bVar1)
			{
				set_bit(&(uParam0->f_158), 13);
			}
			enable_control_action(0, -1450761377, true);
			enable_control_action(0, -771458680, true);
			enable_control_action(1, -1450761377, true);
			enable_control_action(1, -771458680, true);
			enable_control_action(0, 1033498310, true);
			enable_control_action(0, -1074497799, true);
			enable_control_action(1, 1033498310, true);
			enable_control_action(1, -1074497799, true);
			clear_bit(&(uParam0->f_158), 1);
			if (bVar5)
			{
				Global_1940144->f_5 = 0;
			}
		}
		else
		{
			if (!Global_1940144->f_111)
			{
				disable_control_action(0, -1450761377, false);
				disable_control_action(0, -771458680, false);
				disable_control_action(1, -1450761377, false);
				disable_control_action(1, -771458680, false);
				disable_control_action(0, 1033498310, false);
				disable_control_action(0, -1074497799, false);
				disable_control_action(1, 1033498310, false);
				disable_control_action(1, -1074497799, false);
			}
			if (bParam3)
			{
				func_1233(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
			}
			else if (!Global_1940144->f_111)
			{
				func_1425(uParam0, uParam1);
				func_1426(uParam0, uParam1, 0);
			}
		}
		if (!Global_1940144->f_111)
		{
			if ((is_bit_set(uParam0->f_158, 1) || is_bit_set(uParam0->f_158, 13)) || uParam0->f_199 < 2)
			{
				func_1427(uParam0, 1);
			}
			func_1428(uParam0);
		}
	}
}

void func_1235(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (iParam4 == 0)
	{
		iParam4 = 109029619;
	}
	(*uParam1)[iParam2] = _databinding_add_data_container(uParam0->f_5, sParam3);
	func_1374(uParam1[iParam2], &((*uParam1)[iParam2]->f_4), 21, 0);
	func_1374(uParam1[iParam2], &((*uParam1)[iParam2]->f_5), 20, 0);
	func_1374(uParam1[iParam2], &((*uParam1)[iParam2]->f_7), 23, 0);
	func_1374(uParam1[iParam2], &((*uParam1)[iParam2]->f_8), 22, 0);
	func_1374(uParam1[iParam2], &((*uParam1)[iParam2]->f_9), 24, 0);
	func_1374(uParam1[iParam2], &((*uParam1)[iParam2]->f_2), 18, iParam4);
	if (iParam5 == 0)
	{
		func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_6), 25);
	}
	else
	{
		func_1374(uParam1[iParam2], &((*uParam1)[iParam2]->f_6), 25, iParam5);
	}
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_1), 17);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_3), 19);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_10), 26);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_11), 27);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_20), 16);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_21), 14);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_22), 15);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_12), 29);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_13), 28);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_14), 30);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_15), 31);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_16), 32);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_17), 33);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_18), 34);
	func_1180(uParam1[iParam2], &((*uParam1)[iParam2]->f_19), 35);
}

void func_1236(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case -1029285341:
			*iParam1 = func_1429();
			*uParam2 = func_1429();
			*iParam3 = func_1429();
			*uParam4 = func_1429();
			*uParam5 = func_1430();
			*uParam6 = func_1429();
			*uParam7 = func_1429();
			break;
		case 404851220:
			*iParam1 = func_1431();
			*uParam2 = func_1431();
			*iParam3 = func_1429();
			*uParam4 = func_1430();
			*uParam5 = func_1430();
			*uParam6 = func_1429();
			*uParam7 = func_1429();
			break;
		case 622225714:
			*iParam1 = func_1430();
			*uParam2 = func_1431();
			*iParam3 = func_1429();
			*uParam4 = func_1430();
			*uParam5 = func_1430();
			*uParam6 = func_1429();
			*uParam7 = func_1429();
			break;
		case -104583860:
			*iParam1 = func_1429();
			*uParam2 = func_1429();
			*iParam3 = func_1430();
			*uParam4 = func_1429();
			*uParam5 = func_1430();
			*uParam6 = func_1429();
			*uParam7 = func_1429();
			break;
	}
}

void func_1237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bVar3 = true;
	bVar4 = true;
	iVar5 = (*uParam0)[iParam1]->f_25;
	iVar6 = (*uParam0)[iParam1]->f_26;
	iVar9 = (*uParam0)[iParam1]->f_23;
	if (bParam10)
	{
		iVar9 = 0;
	}
	switch (iVar9)
	{
		case -1:
		case 0:
			bVar3 = false;
			break;
		case 5:
			iVar0 = iParam5;
			iVar2 = iParam5;
			break;
		case 6:
			iVar0 = iParam7;
			iVar2 = iParam7;
			break;
		case 7:
			bVar4 = false;
			iVar0 = func_1431();
			iVar2 = iParam6;
			iVar1 = iParam6;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 8:
			bVar4 = false;
			iVar0 = func_1431();
			iVar2 = iParam8;
			iVar1 = iParam8;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 2:
			bVar4 = false;
			iVar0 = func_1431();
			iVar2 = func_1431();
			iVar1 = iParam3;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_CROSS";
			break;
		case 3:
			bVar4 = false;
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
		case 9:
			iVar0 = func_1429();
			iVar2 = func_1429();
			break;
		case 4:
			iVar0 = iParam4;
			break;
		default:
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
	}
	func_1181((*uParam0)[iParam1]->f_21, bVar3);
	if (bVar3)
	{
		func_1432(uParam0, iParam1);
		func_1181((*uParam0)[iParam1]->f_11, bVar4);
		fVar10 = (*uParam0)[iParam1]->f_29;
		if ((*uParam0)[iParam1]->f_28 > 1)
		{
			fVar10 = (to_float((*uParam0)[iParam1]->f_27) / to_float((*uParam0)[iParam1]->f_28));
			if (bParam11 && !func_1433((*uParam0)[iParam1]->f_23))
			{
				iVar5 = 0;
				iVar6 = 0;
				StringIntConCat(&cVar11, (*uParam0)[iParam1]->f_27, 8);
				if (bParam12)
				{
					StringConCat(&cVar11, "/", 8);
					StringIntConCat(&cVar11, (*uParam0)[iParam1]->f_28, 8);
				}
			}
			func_1184((*uParam0)[iParam1]->f_20, &cVar11);
		}
		else
		{
			func_1184((*uParam0)[iParam1]->f_20, "");
		}
		if (fVar10 >= 0f)
		{
			if (!bParam9)
			{
				func_1417((*uParam0)[iParam1]->f_2, iVar2);
			}
			func_1434((*uParam0)[iParam1]->f_1, fVar10);
			func_1181((*uParam0)[iParam1]->f_10, 0);
			func_1181((*uParam0)[iParam1]->f_3, 1);
		}
		else
		{
			func_1181((*uParam0)[iParam1]->f_10, 1);
			func_1181((*uParam0)[iParam1]->f_3, 0);
		}
		if (iVar6 != 0)
		{
			if (!bParam13)
			{
				func_1417((*uParam0)[iParam1]->f_6, iVar0);
			}
			func_1417((*uParam0)[iParam1]->f_4, iVar5);
			func_1417((*uParam0)[iParam1]->f_5, iVar6);
		}
		if (!is_string_null(sVar8))
		{
			func_1417((*uParam0)[iParam1]->f_14, iVar1);
			func_1184((*uParam0)[iParam1]->f_12, sVar7);
			func_1184((*uParam0)[iParam1]->f_13, sVar8);
			func_1181((*uParam0)[iParam1]->f_15, 1);
		}
		else
		{
			func_1181((*uParam0)[iParam1]->f_15, 0);
		}
		func_1181((*uParam0)[iParam1]->f_16, (*uParam0)[iParam1]->f_30);
	}
}

void func_1238(int iParam0, int iParam1)
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

int func_1239(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1238(iParam2, -372840566);
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
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_1435(uParam1, iParam0, Var3);
	return 1;
}

void func_1240(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	switch (Local_1444.f_50)
	{
		case -809127215:
			if (func_630(1))
			{
				*uParam0 = -1780134929;
				uParam0->f_1 = -896071799;
			}
			else if (func_630(2))
			{
				*uParam0 = -1490620814;
				uParam0->f_1 = 1366705300;
			}
			break;
		case 1706859953:
			if (func_630(1))
			{
				*uParam0 = -1808201391;
				uParam0->f_1 = -1423960469;
			}
			else if (func_630(2))
			{
				*uParam0 = -1524716772;
				uParam0->f_1 = -1852538599;
			}
			break;
		case -53531786:
			if (func_630(1))
			{
				*uParam0 = -1570922557;
				uParam0->f_1 = 1026109104;
			}
			else if (func_630(2))
			{
				*uParam0 = -1339344034;
				uParam0->f_1 = 418949210;
			}
			break;
		case 326175668:
			if (func_630(1))
			{
				*uParam0 = 750001045;
				uParam0->f_1 = 974113662;
			}
			else if (func_630(2))
			{
				*uParam0 = -1449847475;
				uParam0->f_1 = 1495567318;
			}
			break;
		case -920598405:
			if (func_630(1))
			{
				*uParam0 = 443768249;
				uParam0->f_1 = 874124435;
			}
			else if (func_630(2))
			{
				*uParam0 = 777160075;
				uParam0->f_1 = -1538334073;
			}
			break;
	}
}

int func_1241(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1239(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_1242(var uParam0)
{
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

void func_1243(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

void func_1244()
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
	func_1243(32768);
	func_1436(1108822547, 8, 6);
}

void func_1245(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1437(iVar0, iParam0))
		{
			func_1438(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_1246(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1952637->f_2843 != 0)
	{
		func_1439(Global_1952637->f_2843);
		func_1440(0);
		Global_1952637->f_2843 = 0;
	}
	else if (iParam3 != 0 && func_1441(iParam3))
	{
		func_1442(0);
	}
	if (func_1063(32768))
	{
		func_1443(1108822547);
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
		func_1444(&(Global_1952637->f_1675.f_1[1]), -1811760631, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_1444(&(Global_1952637->f_1675.f_1[4]), -2118203104, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_719(2, 0, iVar0, 0, 0);
		func_719(4, 0, 0, 0, 0);
		func_719(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_719(2, 0, iVar0, iParam0, 0);
	}
	func_1445();
}

void func_1247()
{
	func_1446(0);
	func_1446(1);
	func_1446(2);
	func_1446(3);
}

void func_1248()
{
	func_1447(0);
	func_1447(1);
	func_1447(2);
	func_1447(3);
}

float func_1249(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1077(2);
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

float func_1250(int iParam0, int iParam1)
{
	Var1 = { func_47(iParam0, iParam1) };
	stat_id_get_float(&Var1, &uVar0);
	return uVar0;
}

var func_1251(int iParam0)
{
	Var1 = { func_529(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

bool func_1252(int iParam0)
{
	if (func_957(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_1448(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

char* func_1253(int iParam0)
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

int func_1254(int iParam0)
{
	iVar0 = -1;
	if (func_1449(&Var1, iParam0))
	{
		iVar0 = ((func_1450() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1255(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_1256(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return true;
		case 1539023636:
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_1257(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1071686->f_19550.f_1[iVar0] = { *(Global_1071686->f_19550.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686->f_19550 < 32)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar1 };
	}
	Global_1071686->f_19550 = (Global_1071686->f_19550 - 1);
	if (Global_1071686->f_19550 < 0)
	{
		Global_1071686->f_19550 = 0;
	}
	return 1;
}

int func_1258(int iParam0)
{
	iVar0 = (Global_1071686->f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1071686->f_19550.f_1[iVar0 + 1]) = { *Global_1071686->f_19550.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1071686->f_19550.f_1[iParam0] = { vVar1 };
	Global_1071686->f_19550++;
	if (Global_1071686->f_19550 > 32)
	{
		Global_1071686->f_19550 = 32;
	}
	return 1;
}

int func_1259(int iParam0, int iParam1)
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

bool func_1260(int iParam0)
{
	iVar0 = func_1451(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_1261(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_1262(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_1263(int iParam0, int iParam1)
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
			func_1452((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1452(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_73(*Global_1900736->f_1[0]))
	{
		func_667(*Global_1900736->f_1[0], 3);
	}
}

void func_1264(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 <= 0)
	{
		Global_1196205->f_129 = 0;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = 0;
	}
	if (iParam1 >= 32)
	{
		iParam1 = (Global_1196205->f_129 - 1);
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	if (Global_1196205->f_129 == 1)
	{
		*uParam0 = { *(*Global_1196205)[0] };
		*(*Global_1196205)[0] = { Var0 };
		Global_1196205->f_129 = 0;
		return;
	}
	*uParam0 = { *(*Global_1196205)[iParam1] };
	Global_1196205->f_129 = (Global_1196205->f_129 - 1);
	iVar4 = (Global_1196205->f_129 - 1);
	iVar5 = iParam1;
	while (iVar5 <= iVar4)
	{
		*(*Global_1196205)[iVar5] = { *((*Global_1196205)[iVar5 + 1]) };
		*((*Global_1196205)[iVar5 + 1]) = { Var0 };
		iVar5++;
	}
}

void func_1265(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_1266()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_1453(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

bool func_1267(int iParam0)
{
	return func_78(Global_1903071->f_2, iParam0);
}

struct<14> func_1268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_1269(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_699(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1270(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_1271(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_699(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_1272(var uParam0, int iParam1)
{
	return func_78(*uParam0, iParam1);
}

int func_1273(int iParam0)
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

int func_1274(int iParam0)
{
	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = (*Global_263042)[iParam0]->f_1.f_21.f_2;
	iVar1 = func_1454(iVar0);
	iVar2 = func_1455(iVar0, iVar1);
	return iVar2;
}

struct<2> func_1275()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_1276(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_1277(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_699(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_1278(var uParam0)
{
	func_1062(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_1055() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_1279(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1271(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_1456(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_1280(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1457(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_1458(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

int func_1281(int iParam0, var uParam1)
{
	if (!is_model_valid(iParam0))
	{
		iParam0 = 1074477367;
	}
	iVar0 = get_default_attribute_points_needed_for_rank(iParam0, 7, uParam1);
	return iVar0;
}

void func_1282(var uParam0)
{
	*uParam0 = { Var0 };
}

int func_1283(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1293();
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

int func_1284(int iParam0)
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

void func_1285(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1459(uParam0->f_1[iVar0], 2))
		{
			if (func_1460(iVar0, iParam1))
			{
				vVar4 = { func_1461(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1952637->f_83[iVar0]) && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1437(iVar0, 4))
				{
					func_1438(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1462(iVar0, 4, 6);
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

void func_1286(int iParam0)
{
	func_1463(&(Global_1952637->f_2897), iParam0);
}

int func_1287(int iParam0, int iParam1)
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

void func_1288(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_1287(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_1287(iParam0, 1)])->f_11 || iParam1);
}

int func_1289(int iParam0)
{
	Global_1952637->f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_1464(&(Global_1952637->f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_1290(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

int func_1291(int iParam0)
{
	if (!func_721(iParam0, 0))
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

void func_1292(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_1465(&(uParam0->f_1[34]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_1437(iVar0, 16);
		if (bVar1)
		{
			func_1438(iVar0, 16, 9);
		}
		if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_1466(iVar0, iParam3);
			}
			if (!bParam2 && func_1291(&(uParam0->f_1[iVar0])) != 0)
			{
			}
			else if (func_1460(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
				uParam0->f_1[iVar0]->f_1 = 0;
				func_1295(uParam0, &(uParam0->f_1[iVar0]), iVar0, 1, iParam3);
				func_1466(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_1295(uParam0, &(uParam0->f_1[iVar0]), iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_1293()
{
	return Global_1952637->f_1;
}

int func_1294(int iParam0, int iParam1)
{
	iVar2 = 0;
	Var3 = { func_1268(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_1269(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_1467(iVar0, iVar1, iParam1);
		}
		func_1273(iVar0);
	}
	return iVar2;
}

void func_1295(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = iParam1;
	bVar1 = func_1468(iVar0, 1);
	if (bParam3 && func_1465(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_1469(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_1470(iParam2, 1))
	{
		case -1130352927:
			func_1471(uParam0, iVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_1472(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_1473(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_1474(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_1475(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_1476(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_1477(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_1478(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_1479(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_1480(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_1481(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_1482(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_1483(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_1484(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_1485(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_1486(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_1296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1845241476;
		case 1:
			return 1654063339;
		case 2:
			return 1623931083;
		default:
			break;
	}
	return -1845241476;
}

int func_1297(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_721(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_722(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_718(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_699(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_699(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_1298(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_721(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_722(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_1487(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_724(iParam0, bParam4, 0) };
	Var6 = { func_718(iParam0, Var1, Var1.f_4, bParam4) };
	return func_1488(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

int func_1299(int iParam0)
{
	if (!func_1489(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 121671270;
		case 2:
			return 1242891102;
		case 1:
			return -1791399933;
		default:
			break;
	}
	return 0;
}

int func_1300(int iParam0, float fParam1, int iParam2)
{
	if (!func_1490(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_1077(2);
	}
	func_1491(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

int func_1301(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1302(int iParam0)
{
	if (!func_1492(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_1;
}

bool func_1303(int iParam0, int iParam1)
{
	if (iParam0 == 304794100)
	{
		return func_1494(iParam1);
	}
	else
	{
		return !func_1494(iParam1);
	}
	return false;
}

void func_1304(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1496(func_1495(iParam0, 1), &Var0, 2, -1);
	func_1497(&Var0, iParam0, 0);
}

void func_1305(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1498(&(Global_1139381->f_4796.f_34[iParam0]), &Var0, 0, -1);
	func_1499(Var0, iParam0, 0);
}

bool func_1306(int iParam0)
{
	return func_399(&(Global_1956200->f_1753), iParam0, 1);
}

void func_1307(bool bParam0)
{
	iVar0 = player_id();
	if (bParam0)
	{
		if (func_1306(2))
		{
			func_1500(2);
		}
		if (_0x6614f9039bd31931(iVar0, 34, 0))
		{
			_0x0751d461f06e41ce(iVar0, 34, 0, 0);
		}
	}
	else
	{
		if (!func_1306(2))
		{
			func_1501(2);
		}
		if (!_0x6614f9039bd31931(iVar0, 34, 0))
		{
			_0x0751d461f06e41ce(iVar0, 34, 0, 1);
		}
	}
	_0xa63fcad3a6fec6d2(iVar0, bParam0);
	_0x7146cf430965927c(27, bParam0);
}

void func_1308(bool bParam0)
{
	if (bParam0)
	{
		if (func_1306(1))
		{
			func_1500(1);
		}
	}
	else if (!func_1306(1))
	{
		func_1501(1);
	}
}

bool func_1309()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

void func_1310(int iParam0)
{
	iVar0 = 100;
	switch (func_1293())
	{
		case -1940918681:
		case 1973311174:
			iVar0 = 100;
			break;
		case -1009665394:
		case 1237752161:
			iVar0 = 18;
			break;
	}
	_0x7ff72de061df55e2(iParam0, 0, 1f);
	set_entity_max_health(iParam0, iVar0);
}

void func_1311(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
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
	_set_entity_health(iParam1, iParam0, 0);
}

void func_1312(float fParam0, int iParam1)
{
	if (fParam0 < 0f)
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
	fVar0 = (fParam0 - _get_ped_stamina(iParam1));
	_charge_ped_stamina(iParam1, fVar0);
}

float func_1313()
{
	return Global_1956200->f_1561.f_3;
}

void func_1314(float fParam0)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (_0xb16223cb7da965f0(iVar0))
	{
		return;
	}
	if (fParam0 < 0f)
	{
		return;
	}
	fVar2 = (fParam0 - _0xdf66a37936d5f3d9(iVar0));
	func_1502(fVar2, 0, 1);
}

bool func_1315(int iParam0)
{
	return func_1489(iParam0);
}

int func_1316(int iParam0)
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

float func_1317(var uParam0, int iParam1)
{
	iVar1 = func_1503(uParam0, iParam1);
	switch (iVar1)
	{
		case 0:
			fVar0 = func_1249(iParam1, 2);
			if (iParam1 == 0 && fVar0 < 50f)
			{
				fVar0 = 50f;
			}
			else if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 1:
			fVar0 = func_1249(iParam1, 2);
			if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 2:
			return to_float(100);
		case 3:
			return func_1504(uParam0, iParam1);
	}
	return -1f;
}

void func_1318(int iParam0, float fParam1)
{
	func_1505(iParam0, fParam1);
	func_1506(iParam0, fParam1, 0, 0, 1, 2);
}

void func_1319()
{
	func_1507();
	func_1508();
	func_1509();
	func_1510();
}

int func_1320(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(player_ped_id()))
	{
		return 0;
	}
	return func_1511(iParam0, fParam1, bParam2, bParam3);
}

void func_1321()
{
	Global_1956200->f_1431.f_108 = 0;
	Global_1956200->f_1431.f_108.f_1 = 0f;
	Global_1956200->f_1431.f_108.f_3 = 0f;
	Global_1956200->f_1431.f_108.f_2 = 0f;
	Global_1956200->f_1431.f_108.f_4 = 0f;
	Global_1956200->f_1431.f_108.f_6 = 0f;
	Global_1956200->f_1431.f_108.f_5 = 0f;
}

bool func_1322(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_1323(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

int func_1324(int iParam0)
{
	if (!func_721(*iParam0, 0))
	{
		return 0;
	}
	if (!func_1512(*iParam0))
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

int func_1325(int iParam0)
{
	return iParam0;
}

bool func_1326(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_1327(int iParam0)
{
	return func_1093(iParam0) == -427144552;
}

int func_1328(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_721(iParam0, 0) && !func_1326(func_1325(iParam0), 2))
	{
		return 0;
	}
	if (func_1093(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_722(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_699(bParam3), iParam0);
}

bool func_1329()
{
	return (func_394(-1185145312, 0, 0, 0) > 0 && func_1513(func_718(889965687, func_717(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_1330(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_699(0);
	*uParam1 = { func_718(iParam0, func_1094(0), iParam3, 0) };
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

bool func_1331(int iParam0, int iParam1, int iParam2)
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

bool func_1332(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_699(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

void func_1333(int iParam0, bool bParam1)
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

void func_1334()
{
	if (func_180(32768, Local_2193.f_1333))
	{
		return;
	}
	if (!network_is_player_active(player_id()))
	{
		return;
	}
	_0xb7e52a058b07c7e2(player_ped_id(), &(Local_2193.f_1441), &(Local_2193.f_1445));
	if (_0xb881ca836cc4b6d4(&(Local_2193.f_1441)))
	{
	}
	if (_0xb881ca836cc4b6d4(&(Local_2193.f_1445)))
	{
	}
	func_230(32768, Local_2193.f_1333);
}

void func_1335()
{
	if (func_180(131072, Local_2193.f_1333))
	{
		return;
	}
	if (!network_is_player_active(player_id()))
	{
		return;
	}
	if (!_0x6929e22158e52265(player_ped_id(), 10, &(Local_2193.f_1437)))
	{
		return;
	}
	if (_0xb881ca836cc4b6d4(&(Local_2193.f_1437)))
	{
	}
	func_230(131072, Local_2193.f_1333);
}

int func_1336(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_721(iParam0, 0))
	{
		return 0;
	}
	if (!func_1514(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1515(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1516(iParam0, bParam2);
	iVar2 = 0;
	if (func_1093(iParam0) == -1037537535)
	{
		if (!func_1465(iParam0, 866047851) && !func_1465(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_1517(iParam0, 8388608) && !func_1518(27))
	{
		func_1519(27);
	}
	func_1520(iParam0);
	if (!bVar3)
	{
		if (func_1465(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_1522(func_1521(iParam0, 1), 0);
			if (is_weapon_valid(iVar1))
			{
				if (func_23() == -1)
				{
					func_1523(iVar1);
				}
				if (func_1092(0) && func_1524(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_1525(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_397(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_1093(iParam0) == -427144552)
		{
			if (!func_1526(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1093(iParam0) == 307971639 && func_716(iParam0))
		{
			if (!func_1527(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1465(iParam0, -103750053))
		{
			func_461(func_496(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_461(func_47(-717883113, 2091222383), iVar0);
		}
		else if (func_1465(iParam0, -121341956) && !func_1465(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_1528(536, 0);
			}
			if (func_1465(iParam0, -2017733358) || func_1465(iParam0, -1369131378))
			{
			}
		}
		else if (func_1465(iParam0, -136654233))
		{
			if (func_1465(iParam0, -1021472396))
			{
			}
		}
		else if (func_1465(iParam0, -1466706512) && func_1465(iParam0, 1147021565))
		{
			func_1528(519, 0);
		}
		else if (func_1465(iParam0, 1147021565) && func_1465(iParam0, -524514947))
		{
		}
		else if (func_1465(iParam0, 554195525))
		{
		}
		else if (func_1465(iParam0, 589988438))
		{
			if (func_1529())
			{
				func_1530(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_1465(iParam0, 787083290) && func_1465(iParam0, 949916894))
		{
			func_1531(iParam0);
		}
		else if (func_1465(iParam0, -1718133314))
		{
			func_1532(iParam0);
		}
		else if (func_1465(iParam0, -1738650224))
		{
			func_1533(iParam0);
		}
		else if (func_1465(iParam0, -1112814642) && func_1465(iParam0, 949916894))
		{
			func_1534(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1940144->f_21 = 0;
		}
		else if (func_1465(iParam0, 1841149704))
		{
			func_1535();
		}
		else if (func_1465(iParam0, -1979000645))
		{
		}
		else if (func_1465(iParam0, 606799272))
		{
		}
		else if (func_1465(iParam0, -1112814642) && func_1465(iParam0, -1697809989))
		{
		}
		else if (func_1465(iParam0, -2017733358) || func_1465(iParam0, -1369131378))
		{
		}
		else if (func_1465(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_1465(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_1536(215778062, 1))
					{
						func_1336(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_1536(670273567, 1))
					{
						func_1336(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_1536(-967317137, 1))
					{
						func_1336(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_1536(526074061, 1))
					{
						func_1336(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_1536(-1045488665, 1))
					{
						func_1336(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_1536(471514780, 1))
					{
						func_1336(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_1465(iParam0, -839724752) && func_1517(iParam0, 4))
		{
		}
		else if (func_1465(iParam0, 1399091007))
		{
			func_1537(iParam0, &iVar2);
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
				func_1539(272, func_1538(-21093309), 0);
				break;
			case 204375141:
				func_1539(270, func_1538(204375141), 0);
				break;
			case -417963070:
				func_1539(271, func_1538(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_1540(685, 1934060482, 1, 1);
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
					func_1540(685, 1110018439, 1, 1);
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
					func_1540(685, 1408511260, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_1540(685, -1228016946, 1, 1);
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
					func_1540(686, -103579, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_1540(686, -1531530025, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case 80178851:
				func_1528(526, 0);
				break;
			case 1613651027:
				func_1528(529, 0);
				break;
			case -885810591:
				break;
			case -601932535:
				if (func_1518(1))
				{
					func_1528(522, 0);
				}
				break;
			case -898386032:
				func_1528(521, 0);
				break;
			case -2035110427:
				if (func_23() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_1528(534, 0);
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
		func_1541(&iVar5);
		if (!func_397(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_1092(0))
		{
			return 1;
		}
		if (func_1093(iParam0) == -1037537535)
		{
			func_1542(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_1092(0) && !func_1543())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_1336(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_1544(iVar2, 0);
		}
	}
	Var30 = { func_1545(iParam0) };
	if (_stat_id_is_valid(&Var30))
	{
		_0x6a0184e904cdf25e(&Var30, iVar0);
	}
	func_1546(iParam0);
	if (fParam6 > 0f)
	{
		if (func_1465(iParam0, -839724752))
		{
			func_1547(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_1548(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_1337(int iParam0, int iParam1)
{
	if (!func_721(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1093(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_1465(iParam0, 1399091007))
	{
		func_1549(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1338(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1268(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_1550(&Var0, func_1094(0));
	}
	if (!func_1269(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1273(iVar14);
	return uVar15;
}

struct<4> func_1339(int iParam0, bool bParam1)
{
	Var0 = { func_724(iParam0, bParam1, 0) };
	return func_718(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_1340(int iParam0)
{
	switch (iParam0)
	{
		case -1415022764:
		case -1016714371:
		case -351498939:
		case -135813381:
		case 332793555:
		case 1030402560:
		case 1549070292:
			return true;
		default:
			break;
	}
	return false;
}

void func_1341(int iParam0)
{
	Var2 = { func_1268(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (!func_1269(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	Var16.f_9 = -1591664384;
	if (!func_1270(&Var16, 0, iVar0, iVar1))
	{
		func_1273(iVar0);
		return;
	}
	Var30.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_699(0), &Var16, &Var30, 22, 1))
	{
		func_1273(iVar0);
		return;
	}
	if (!Var30.f_21)
	{
		Var30.f_21 = 1;
		if (!_0xd80a8854db5cfba5(func_699(0), &Var16, &Var30, 22))
		{
		}
	}
	func_1273(iVar0);
}

bool func_1342()
{
	return func_1551() != 0;
}

bool func_1343()
{
	iVar0 = func_1552();
	if (!_does_thread_exist(iVar0))
	{
		return false;
	}
	return is_thread_active(iVar0, false);
}

void func_1344(int iParam0)
{
	Global_1301323->f_288 = iParam0;
}

void func_1345(int iParam0)
{
	Global_1301323->f_288.f_1 = iParam0;
}

void func_1346(struct<2> Param0)
{
	if (func_664(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_664(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_664(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_1350(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				_0xf21a5d66874fcedd(Var0.f_2, 0, -1423748980);
			}
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_29, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_30, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_1347(struct<2> Param0, int iParam2)
{
	iVar0 = func_1021(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_1553(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_1263(iVar0, iParam2);
	return iParam2;
}

bool func_1348(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_1349(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return 0;
	}
	iVar0 = func_1021(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1554(Param0, func_373(0), iParam2))
	{
		func_667(func_373(0), 3);
		func_667(func_373(iVar0), 4);
		return 0;
	}
	func_1263(iVar0, 0);
	func_667(func_373(0), 3);
	func_667(func_373(1), 4);
	return 1;
}

bool func_1350(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_1197(Param0, &vVar0);
	if (func_1555(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_1351(var uParam0, bool bParam1, int iParam2)
{
	func_1556(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1265(func_1023(uParam0->f_1));
	}
	else
	{
		func_1266();
	}
}

bool func_1352(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

void func_1353()
{
	if (!_0x424b17a7dc5c90bc(Global_1296859->f_10))
	{
		return;
	}
	iVar0 = func_1557();
	if (iVar0 > 0)
	{
		func_1558(-1228177771, iVar0, 0);
	}
}

bool func_1354()
{
	return (func_1559(Global_1296859->f_10, 1, 0, 1) && func_1560() > 0);
}

void func_1355()
{
	if (!_0x424b17a7dc5c90bc(Global_1296859->f_10))
	{
		return;
	}
	iVar0 = func_1560();
	if (iVar0 > 0)
	{
		func_1561(iVar0, 0, -142743235, 0);
	}
}

void func_1356()
{
	iVar0 = player_id();
	_0x062b4a4a3396351d(iVar0);
	func_1562();
}

void func_1357(int iParam0, struct<2> Param1, int iParam3)
{
	if (func_73(Global_1109340->f_193[&Global_1296859]->f_2.f_1))
	{
		return;
	}
	if (Global_1109340->f_193[&Global_1296859]->f_2 != -1 && Global_1109340->f_193[&Global_1296859]->f_2 != iParam0)
	{
		return;
	}
	Global_1109340->f_193[&Global_1296859]->f_2 = iParam0;
	Global_1109340->f_193[&Global_1296859]->f_2.f_1 = { Param1 };
	if (iParam3 != -1)
	{
		Global_1109340->f_193[&Global_1296859]->f_2.f_3 = iParam3;
	}
	iVar0 = func_1563(Global_1296859->f_10);
	if (iVar0 != 6 && iVar0 != 8)
	{
		func_1564(6);
	}
}

int func_1358()
{
	iVar1 = Global_1296859->f_21;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { *Global_1940311->f_242.f_14[iVar0] };
		iVar41 = _databinding_read_data_int(Var2.f_25);
		if (iVar41 < iVar1)
		{
			if (func_1565(Var2))
			{
				func_658(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_1566();
}

void func_1359(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_1567(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_string(*uParam0, func_1253(15), Param10.f_16);
	uParam0->f_19 = _databinding_add_data_string(*uParam0, func_1253(17), Param10.f_17);
	uParam0->f_20 = _databinding_add_data_hash(*uParam0, func_1253(3), Param10.f_18);
	uParam0->f_21 = _databinding_add_data_hash(*uParam0, func_1253(4), Param10.f_19);
	uParam0->f_22 = _databinding_add_data_hash(*uParam0, func_1253(5), Param10.f_20);
	uParam0->f_23 = _databinding_add_data_hash(*uParam0, func_1253(6), Param10.f_21);
}

bool func_1360(var uParam0)
{
	return true;
}

int func_1361(var uParam0)
{
	if (is_string_null_or_empty(uParam0->f_2))
	{
		return 0;
	}
	else if (is_string_null_or_empty(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 778915895)
	{
		if (Global_1896738->f_384)
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_1569(func_1568(uParam0->f_2, 109029619), func_1568(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_1570(func_1568(uParam0->f_2, 109029619), func_1568(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_1571(func_1568(uParam0->f_2, 109029619), func_1568(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_1572(func_1568(uParam0->f_2, 109029619), func_1568(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_1573(func_1568(uParam0->f_2, 109029619), func_1568(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_1574(func_1568(uParam0->f_2, 109029619), func_1568(uParam0->f_3, 109029619), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_1575(func_1568(uParam0->f_2, 109029619), func_1568(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

int func_1362()
{
	return Global_1940311->f_242.f_1185;
}

bool func_1363(struct<2> Param0)
{
	return func_663(Param0) == 0;
}

int func_1364(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_74(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1365(struct<2> Param0, bool bParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (!func_1363(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1576(Param0);
	}
	func_667(Param0, 1);
	bParam2 = bParam2;
}

bool func_1366()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

Vector3 func_1367(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_1577(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_1368()
{
	return Global_1051252->f_12;
}

char* func_1369()
{
	return "unnamed";
}

int func_1370(int iParam0)
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

bool func_1371(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_170(36, iParam0);
}

char* func_1372()
{
	return "countdown_final_thud";
}

int func_1373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 16:
			return 1;
		case 14:
			return 4;
		case 15:
			return 4;
		case 17:
			return 3;
		case 18:
			return 0;
		case 19:
			return 4;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 4;
		case 27:
			return 4;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 0;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 1;
		case 37:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_1374(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_1578(iParam2);
	}
	*uParam1 = _databinding_add_data_hash(uParam0, func_1579(iParam2), iParam3);
}

void func_1375(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (is_string_null(sParam3))
	{
		sParam3 = func_1580(iParam2);
	}
	*uParam1 = _databinding_add_data_string(uParam0, func_1579(iParam2), sParam3);
}

void func_1376(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_1581(iParam2);
	}
	*uParam1 = _databinding_add_data_int(uParam0, func_1579(iParam2), iParam3);
}

void func_1377(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_1582(iParam2);
	}
	*uParam1 = _databinding_add_data_float(uParam0, func_1579(iParam2), fParam3);
}

void func_1378(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!bParam4)
	{
		bParam3 = func_1583(iParam2);
	}
	*uParam1 = _databinding_add_data_bool(uParam0, func_1579(iParam2), bParam3);
}

int func_1379(int iParam0, int iParam1, int iParam2)
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

void func_1380(int iParam0)
{
	_0x31010318ba9897ac(&(Global_1071686->f_28345), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
	if (!func_960(iParam0))
	{
		func_1229(iParam0, 5, 1, 1, 0, 0);
	}
}

void func_1381(int iParam0)
{
	func_511(&(Global_1194053->f_3), iParam0);
}

void func_1382(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28345), iParam0);
	_0x31010318ba9897ac(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
	if (!func_1252(iParam0))
	{
		func_1448(iParam0);
	}
}

void func_1383(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28349), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28348), iParam0);
	_0x31010318ba9897ac(&(Global_1071686->f_28350), iParam0);
}

void func_1384(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28349), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
	_0x31010318ba9897ac(&(Global_1071686->f_28348), iParam0);
}

void func_1385(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_1386()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

int func_1387()
{
	return -839369609;
}

char* func_1388(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LA_ALLIGATOR";
		case 1:
			return "LA_BEAR";
		case 2:
			return "LA_BEAVER";
		case 3:
			return "LA_BISON";
		case 4:
			return "LA_BOAR";
		case 5:
			return "LA_BUCK";
		case 6:
			return "LA_COUGAR";
		case 7:
			return "LA_PANTHER";
		case 8:
			return "LA_COYOTE";
		case 13:
			return "LA_ELK";
		case 9:
			return "LA_FOX";
		case 10:
			return "LA_MOOSE";
		case 11:
			return "LA_RAM";
		case 12:
			return "LA_WOLF";
		default:
			break;
	}
	return "";
}

Vector3 func_1389(vector3 vParam0)
{
	vVar0 = { func_987(vParam0) };
	fVar3 = atan2(vVar0.y, vVar0.x);
	fVar4 = -atan2(vVar0.z, sqrt(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
	return 0f, fVar4, fVar3;
}

void func_1390(int iParam0)
{
	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258->f_32);
	Global_1940258->f_21 = func_1584();
	if (Global_1940258->f_21)
	{
		Global_1940258->f_22 = get_game_timer();
	}
	bVar1 = false;
	if (is_weapon_valid(Global_1940258->f_38))
	{
		bVar1 = true;
		if (is_ped_shooting(Global_34))
		{
			if (get_current_ped_vehicle_weapon(Global_34, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1940258->f_38;
			}
			Global_1940258->f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_1585(&(Global_1940258->f_28), &(Global_1940258->f_33));
			Global_1940258->f_32 = iParam0;
			break;
		case 1:
			Global_1940258->f_24 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1940258->f_24)
			{
				if (bVar1 && _is_weapon_lasso(Global_1940258->f_38))
				{
					Global_1940258->f_24 = _get_lassoed_entity(Global_34) != 0;
				}
				if (Global_1940258->f_40 == 1151374672)
				{
					Global_1940258->f_24 = _0x46d42883e873c1d7(Global_34) > 0;
				}
			}
			break;
		case 2:
			bVar3 = is_weapon_valid(Global_1940258->f_40);
			if (bVar3 && _is_weapon_lasso(Global_1940258->f_40))
			{
				Global_1940258->f_19 = 0;
			}
			else
			{
				if (bVar3 && _0x5809dbca0a37c82b(Global_1940258->f_40))
				{
					Global_1940258->f_19 = _0x285d36c5c72b0569(Global_34) <= 3f;
				}
				else
				{
					Global_1940258->f_19 = _0x285d36c5c72b0569(Global_34) <= 1f;
				}
				if (Global_1940258->f_19)
				{
					Global_1940258->f_23 = get_frame_count();
				}
			}
			break;
		default:
			Global_1940258->f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_1391(int iParam0)
{
	return &(Global_1102219->f_3705[iParam0]);
}

bool func_1392(bool bParam0, bool bParam1)
{
	if (func_1586(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (does_entity_exist(iVar0) && get_ped_config_flag(iVar0, 6, false))
			{
				return false;
			}
			if (does_entity_exist(iVar1) && get_ped_config_flag(iVar1, 6, false))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_1393(var uParam0)
{
	iVar0 = Global_1940258->f_34;
	if (func_23() == -1)
	{
		if (Global_1940258->f_34 == 0)
		{
			iVar0 = func_1587(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1940258->f_34) || !&Global_1956200->f_1716[4])
	{
		iVar0 = func_1587(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1588(iVar0) == -1)
	{
		return false;
	}
	if (!does_entity_belong_to_this_script(iVar0, false))
	{
		return false;
	}
	uParam0->f_15 = iVar0;
	return true;
}

void func_1394(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_1589(uParam0);
	}
}

bool func_1395(int iParam0, int iParam1)
{
	if (!_0xefc4303ddc6e60d3(iParam0))
	{
		return false;
	}
	*iParam1 = _0xed1f514af4732258(iParam0);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_1396(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(iParam0, iParam1))
	{
		return true;
	}
	if (!_is_weapon_lasso(func_683(iParam0, 1, 0, 0)) && !func_683(iParam0, 1, 0, 0) == 1151374672)
	{
		return false;
	}
	if (is_ped_performing_melee_action(iParam0, 16, 0))
	{
		if (get_melee_target_for_ped(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_1397(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_1398(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_1399(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_511(uParam0, 134217728);
	}
	else
	{
		func_644(uParam0, 134217728);
	}
}

void func_1400()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

float func_1401(var uParam0)
{
	return uParam0->f_25;
}

int func_1402(var uParam0)
{
	return uParam0->f_23;
}

float func_1403(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_1590(uParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_1591(uParam0);
	}
	return func_1590(uParam0);
}

float func_1404(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1405()
{
	iVar0 = func_1593(func_1592());
	iVar1 = func_1594(func_1592());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_1406(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864) || iVar0 == -2016812721)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

void func_1407(float fParam0)
{
	if (Local_2000[Local_2193.f_1333]->f_2 != fParam0)
	{
		if (fParam0 < 0f)
		{
			fParam0 = 0f;
		}
		Local_2000[Local_2193.f_1333]->f_2 = fParam0;
		Local_2000[Local_2193.f_1333]->f_5 = get_network_time_accurate();
	}
}

bool func_1408()
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

bool func_1409(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1939493)[iVar0]->f_10)))
		{
			func_1595(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1410(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_1411(int iParam0, int iParam1, int iParam2)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = iParam2;
		}
		else
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		}
		Global_1071686->f_21416.f_1[iParam0]->f_1 = iParam1;
		return true;
	}
	else if (Global_1071686->f_21416.f_1[iParam0]->f_1 == iParam1)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		return true;
	}
	return false;
}

void func_1412(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_1596(*uParam0);
}

void func_1413(var uParam0)
{
	*uParam0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	uParam0->f_1 = _databinding_add_data_container(*uParam0, "Title");
	uParam0->f_2 = _databinding_add_ui_item_list(*uParam0, "LeaderboardList");
	uParam0->f_142 = _databinding_add_ui_item_list(*uParam0, "LeaderboardList");
}

void func_1414(var uParam0, char* sParam1)
{
	if (!is_bit_set(uParam0->f_158, 7))
	{
		set_bit(&(uParam0->f_158), 7);
		_databinding_add_data_string(uParam0->f_1, "Heading", sParam1);
	}
}

char* func_1415(char* sParam0)
{
	return _create_var_string(6, "FM_WEIGHT", sParam0);
}

char* func_1416(float fParam0)
{
	return _create_var_string(2, "FM_PERCENT", floor((fParam0 * 100f)));
}

void func_1417(var uParam0, int iParam1)
{
	_databinding_write_data_hash_string(uParam0, iParam1);
}

void func_1418(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	if (Global_1940144->f_111)
	{
		func_1597(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_1425(uParam0, uParam1);
		iVar7 = player_id();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_1598(&((*uParam1)[iVar0]->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_1599(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", func_1600(uParam1, iVar0));
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar8 = iVar7 == (*uParam1)[iVar0]->f_14;
				iVar9 = func_1601(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_1602(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Gamertag", &((*uParam1)[iVar0]->f_14.f_1));
				_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "GamertagColor", iVar9);
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "CrewTag", func_1603());
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Rank", func_1604((*uParam1)[iVar0]->f_14));
				if (!bParam4)
				{
					if (func_1605())
					{
						if (func_1606((*uParam1)[iVar0]->f_14))
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", true);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", func_1607((*uParam1)[iVar0]->f_11));
				}
				else if (bParam5)
				{
					if (func_1608(uParam0->f_159))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
					else if (func_1609(uParam0->f_159))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
					else
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
				}
				if (is_bit_set(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar2 = round(func_1610((*uParam1)[iVar0], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = round(func_1611((*uParam1)[iVar0], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_1612(iVar2))
					{
						iVar11 = uParam0->f_159;
						if ((*uParam1)[iVar0]->f_1 == 8.94E+07f)
						{
							clear_bit(&iVar11, 12);
						}
						sVar5 = func_1613(iVar2, iVar11, 0);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar10, sVar5);
				}
				else if (!is_bit_set(uParam0->f_159, 0) && !is_bit_set(uParam0->f_159, 17))
				{
					if (!is_bit_set(uParam0->f_159, 18))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563(func_1611((*uParam1)[iVar0], uParam0->f_159), func_1614(uParam0, 1)));
					}
				}
				if (is_bit_set(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = round(func_1615((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = round(func_1610((*uParam1)[iVar0], uParam0->f_159));
					}
					if (func_1612(iVar3))
					{
						sVar6 = func_1183(iVar3, 1, 2, 0, 0, 0);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar12, sVar6);
				}
				else if (is_bit_set(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_1615((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_1610((*uParam1)[iVar0], uParam0->f_159);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar13, _0x2b6846401d68e563(fVar14, 0));
				}
				else if ((!is_bit_set(uParam0->f_159, 3) && !func_1609(uParam0->f_159)) && !func_1616(uParam0->f_159))
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563(func_1610((*uParam1)[iVar0], uParam0->f_159), func_1614(uParam0, 2)));
				}
				if (!is_bit_set(uParam0->f_159, 3))
				{
					if (is_bit_set(uParam0->f_160, 0))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", "-");
					}
					else if (is_bit_set(uParam0->f_159, 9))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", func_1415(func_1615((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160)));
					}
					else if (is_bit_set(uParam0->f_159, 10))
					{
						fVar4 = func_1615((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", func_1183(floor(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _create_var_string(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (is_bit_set(uParam0->f_159, 21))
					{
						iVar2 = round(func_1615((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_1613(iVar2, uParam0->f_159, 0);
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", sVar5);
					}
					else
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _0x2b6846401d68e563(func_1615((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160), func_1614(uParam0, 3)));
					}
				}
				_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && (*uParam1)[iVar0]->f_13)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", iVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_1419(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	iVar13 = 0;
	iVar14 = 32;
	bVar16 = is_bit_set(uParam0->f_159, 6);
	if (Global_1940144->f_111)
	{
		iVar3 = _databinding_get_array_count(uParam0->f_142);
		if (is_bit_set(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_1617(iParam4, &uVar4, uParam0->f_150, bVar16);
			func_1618(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_1619(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_1620(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_1598(&((*uParam1)[iVar2]->f_14)) && iVar0 < 5)
					{
						func_1619(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (_databinding_get_array_count(uParam0->f_142) - 1);
		if (iVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= iVar0)
			{
				_0x6318fb3be37e11b3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = _databinding_get_array_count(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		func_1617(iParam4, &uVar4, uParam0->f_150, bVar16);
		func_1621(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_1619(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2] && func_1598(&((*uParam1)[iVar2]->f_14)))
						{
							func_1619(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
							iVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_1598(&((*uParam1)[iVar2]->f_14)))
			{
				func_1619(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || iVar0 > 0)
	{
		if (iVar0 < 3)
		{
			iVar20 = iVar0;
			while (iVar20 <= 3)
			{
				func_1619(uParam0->f_2, &(uParam0->f_12[iVar20]), "LeaderboardListItemBlank", iVar3, iVar0);
				iVar0++;
				iVar20++;
			}
		}
	}
	iVar3 = (_databinding_get_array_count(uParam0->f_2) - 1);
	if (iVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= iVar0)
		{
			_0x6318fb3be37e11b3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

int func_1420()
{
	if (Global_1940144->f_20)
	{
		if (Global_1940144->f_5 == 1)
		{
			return 1;
		}
		if (Global_1940144->f_5 == 2)
		{
			return 2;
		}
	}
	return -1;
}

bool func_1421()
{
	if (Global_1102219->f_26.f_3440.f_4 && !func_1605())
	{
		Global_1102219->f_26.f_3440.f_4 = 0;
	}
	return Global_1102219->f_26.f_3440.f_4;
}

bool func_1422()
{
	return (func_872(2) && func_1622());
}

void func_1423(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!is_bit_set(uParam0->f_158, 17))
	{
		if (is_bit_set(uParam0->f_159, 22))
		{
			Global_1940144->f_112 = 1;
		}
		else
		{
			Global_1940144->f_112 = 0;
		}
		set_bit(&(uParam0->f_158), 17);
	}
	if (Global_1940144->f_111)
	{
		if (is_bit_set(uParam0->f_159, 28))
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_150 - 1))
			{
				if (iVar0 == iParam4)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0]->f_14 == *iParam2)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_1424(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_1623(uParam0, uParam1, iParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_1419(uParam0, uParam1, bParam5, iParam6, iParam2, is_bit_set(uParam0->f_159, 5), iParam10);
}

void func_1425(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 == 255)
		{
		}
		else if (func_1598(&((*uParam1)[iVar0]->f_14)))
		{
			func_1624(uParam0, &((*uParam1)[iVar0]->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_1426(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 == 255)
		{
		}
		else
		{
			func_1599(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_1427(var uParam0, bool bParam1)
{
	bVar0 = func_1625(16);
	switch (uParam0->f_199)
	{
		case 0:
			func_536(1);
			func_1626(&(uParam0->f_199), 1);
			break;
		case 1:
			_0xd9130842d7226045("MP_Leaderboard_Sounds", 1);
			func_1626(&(uParam0->f_199), 2);
			break;
		case 2:
			iVar1 = _launch_app_by_hash_with_entry(595204529, func_1627(bParam1));
			if (iVar1 == 0)
			{
				func_1626(&(uParam0->f_199), 3);
			}
			else if (_is_app_running(595204529))
			{
				func_1626(&(uParam0->f_199), 3);
			}
			break;
		case 3:
			if (_is_app_running(595204529))
			{
				if (!bVar0)
				{
					play_sound_frontend("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				_request_uiapp_transition_by_hash(595204529, func_1628());
				func_1626(&(uParam0->f_199), 4);
			}
			else if (func_1629())
			{
				func_1626(&(uParam0->f_199), 2);
			}
			break;
		case 4:
			if (is_bit_set(uParam0->f_158, 13))
			{
				if (_is_app_running(595204529))
				{
					if (!bVar0)
					{
						play_sound_frontend("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					_close_app_by_hash(595204529);
					func_1626(&(uParam0->f_199), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				clear_bit(&(uParam0->f_158), 13);
				func_1626(&(uParam0->f_199), 1);
			}
			else
			{
				func_1626(&(uParam0->f_199), 6);
			}
			break;
		case 6:
			func_983(uParam0, bParam1);
			break;
	}
}

void func_1428(var uParam0)
{
	func_1630(&(uParam0->f_162));
	if ((is_bit_set(uParam0->f_158, 14) || is_bit_set(uParam0->f_158, 15)) || is_bit_set(uParam0->f_158, 16))
	{
		return;
	}
	func_1631(&(uParam0->f_162), 0);
	set_bit(&(uParam0->f_158), 14);
}

int func_1429()
{
	return 1937193856;
}

int func_1430()
{
	return -1640778959;
}

int func_1431()
{
	return -1428663542;
}

void func_1432(var uParam0, int iParam1)
{
	bVar0 = func_162(&((*uParam0)[iParam1]->f_31));
	iVar1 = (*uParam0)[iParam1]->f_24;
	if (iVar1 != 0)
	{
		if (!bVar0)
		{
			func_188(&((*uParam0)[iParam1]->f_31), 0);
		}
	}
	else if (bVar0)
	{
		if (func_190(&((*uParam0)[iParam1]->f_31)) < 1500)
		{
			return;
		}
		func_302(&((*uParam0)[iParam1]->f_31));
	}
	func_1181((*uParam0)[iParam1]->f_17, iVar1 == 1);
	func_1181((*uParam0)[iParam1]->f_18, iVar1 == 2);
	func_1181((*uParam0)[iParam1]->f_19, iVar1 == 3);
}

bool func_1433(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 7:
		case 8:
			return true;
	}
	return false;
}

void func_1434(var uParam0, float fParam1)
{
	_databinding_write_data_float(uParam0, fParam1);
}

void func_1435(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_458(uParam0))
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

void func_1436(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_1287(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_1287(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_1287(iParam0, 1)])->f_11 && iParam1));
}

bool func_1437(int iParam0, int iParam1)
{
	return (Global_1952637->f_83[iParam0]->f_11 && iParam1) != 0;
}

void func_1438(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 - (Global_1952637->f_83[iParam0]->f_11 && iParam1));
}

int func_1439(int iParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1952637->f_2843.f_2 = 0;
		Global_1952637->f_2843.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*Global_1952637->f_2843.f_43[iVar0] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1952637->f_2843.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_1632(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 - (Global_1952637->f_2843.f_2 && Global_1952637->f_2843.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1633(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1))
		{
			func_1634(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1952637->f_2843.f_1 = (Global_1952637->f_2843.f_1 - 1);
	*Global_1952637->f_2843.f_43[iVar0] = { *Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] };
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = 0;
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = 0;
	return 1;
}

bool func_1440(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1470(iVar0, 1);
		if (!func_1635(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_1466(iVar0, 0);
				func_1636(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 1, 6);
			}
			func_1436(iVar2, 3, 6);
			Global_1952637->f_2764[iVar0] = 0;
			Global_1952637->f_2764[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_1441(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = &Global_1952637->f_1675.f_1[34];
	if ((((func_1291(iVar0) != 0 && iParam0 != -859971527) && iParam0 != -1406972469) && iParam0 != -38530791) && iParam0 != 1905845894)
	{
		return 0;
	}
	if (func_1465(iVar0, -166674229))
	{
		return 0;
	}
	return func_1637(iParam0);
}

int func_1442(bool bParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1470(iVar0, 1);
		if (func_1635(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_1638(iVar0) == -1)
			{
				func_1466(iVar0, 0);
				func_1636(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 2, 6);
			}
			func_1288(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return 1;
	}
	return 0;
}

void func_1443(int iParam0)
{
	func_1288(iParam0, 8, 6);
}

int func_1444(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_1639(&(Global_1952637->f_1058), 2))
	{
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_1640(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_1641(iParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_1642(uParam3, iParam1);
	bVar2 = func_1643(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_1644(uParam2, uParam3, iParam1);
		}
		else
		{
			func_1645(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_1646(&Var3, iVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == (*uParam3)[iVar1]->f_3)
		{
			return 0;
		}
		func_1647(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_1648(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_1646(&Var21, iVar0, 0, 1, 6))
		{
			return 0;
		}
		*(*uParam3)[iVar1] = { Var21 };
	}
	return 1;
}

void func_1445()
{
	Global_1952637->f_1057 = 0;
}

void func_1446(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1498(&(Global_1139381->f_4796.f_34[iParam0]), &Var0, 2, -1);
	func_1497(&Var0, iParam0, 0);
}

void func_1447(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1496(func_1495(iParam0, 1), &Var0, 0, -1);
	func_1499(Var0, iParam0, 0);
}

void func_1448(int iParam0)
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
		func_1228(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_1410(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_1449(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_1450()
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

int func_1451(int iParam0)
{
	return func_1649(iParam0) + 30;
}

void func_1452(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

int func_1453(int iParam0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (Global_1196205[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1454(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_40400;
}

int func_1455(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -504335712:
			if (func_1650(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_1456(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_1651(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_23 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_1457(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_699(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_1458(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

bool func_1459(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1460(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

Vector3 func_1461(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return *Global_17411.f_55.f_644.f_33[iParam1]->f_1.f_1[iParam0];
}

void func_1462(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 || iParam1);
}

void func_1463(var uParam0, int iParam1)
{
	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		*Global_1952637->f_2897.f_35[iVar0] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_1652(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1652(uParam0->f_2[iVar0], 1))
				{
					func_1636(uParam0->f_2[iVar0], 2, 6);
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

void func_1464(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_1465(int iParam0, int iParam1)
{
	if (!func_721(iParam0, 0))
	{
		return func_1653(func_1325(iParam0), iParam1);
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

void func_1466(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_1654(&(Global_1952637->f_2897), iParam0, iParam1);
}

int func_1467(int iParam0, int iParam1, int iParam2)
{
	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_1293() == 24043185)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_1270(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (_get_ped_component_category(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != 1733464892 && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_1291(Var1.f_4) != 0)
			{
			}
			else if (func_1465(Var1.f_4, -166674229))
			{
			}
			else if (func_1465(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_988(Var1.f_4);
				if (func_1656(iParam2, func_1655(iVar15)))
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

bool func_1468(int iParam0, bool bParam1)
{
	if (!func_721(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return false;
	}
	if (func_1465(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

void func_1469(var uParam0, var uParam1)
{
	Var0 = func_1283(0);
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
			iVar8 = func_1287(iVar7, 1);
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
				func_1466(iVar8, 0);
			}
		}
	}
}

int func_1470(int iParam0, int iParam1)
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

void func_1471(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_988(&(uParam0->f_1[iVar0]));
	if (iVar1 == 119907797)
	{
		if (func_1465(iParam1, 458991572))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1466(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_1465(iParam1, -93469181))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1466(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_1465(&(uParam0->f_1[iVar0]), -1446529222) && func_1465(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iParam1, -93469181)) && func_1465(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
}

void func_1472(var uParam0, int iParam1, int iParam2)
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

void func_1473(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (!func_1468(iVar1, 0) && func_1465(iVar1, -180472385))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = &uParam0->f_1[iVar0];
	if ((iVar1 != &Global_1952637->f_83[iVar0] && func_988(iVar1) == 2086043523) && func_1465(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
}

void func_1474(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_988(iParam2))
	{
		case -525676072:
			func_1657(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_1658(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1475(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_988(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_1466(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_988(iParam2) == 81053684 || func_1465(iParam2, 160827531))
	{
		func_1659(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_1465(iParam2, -180472385) && !func_1468(&(uParam0->f_1[iVar0]), 0))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	if (func_1465(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0]->f_1 == 1530758430)
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_1466(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_1466(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
	{
		uParam0->f_1[iVar0]->f_1 = -1539589426;
		func_1466(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_1466(iVar0, iParam3);
		}
	}
}

void func_1476(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 12;
	iVar1 = 0;
	if (func_1293() == 24043185)
	{
		iVar1 = 1;
	}
	if (2056714954 == _get_ped_component_category(&(uParam0->f_1[iVar0]), iVar1, true))
	{
		if ((bParam1 || func_1465(iParam2, 1872585553)) || func_988(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1466(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_1468(&(uParam0->f_1[iVar0]), 0) && func_1465(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_1468(&(uParam0->f_1[iVar0]), 0) && func_1465(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = &uParam0->f_1[iVar0];
	if (func_988(iVar2) == 1759215194 && func_988(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0] = func_1660(iParam2);
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam4);
	}
	else if (func_1661(iVar2, bParam1, iVar1))
	{
		iVar2 = &uParam0->f_1[18];
		iVar3 = 0;
		if (func_988(iVar2) == 912453393 && func_1662(32))
		{
			iVar3 |= 1;
		}
		if (func_1465(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_1294(Global_1952637->f_83[iVar0]->f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0] = iVar2;
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1466(iVar0, iParam4);
			func_1484(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_1468(&(uParam0->f_1[iVar0]), 0))
	{
		return;
	}
	func_1466(iVar0, iParam4);
	if (uParam0->f_1[iParam3]->f_1 == -1539589426 || uParam0->f_1[iParam3]->f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3]->f_1 == 0 || uParam0->f_1[iParam3]->f_1 == 1155669136)
	{
		if (func_1663(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3]->f_1 = -1539589426;
			return;
		}
	}
	if (func_1663(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3]->f_1 = 1334603721;
	}
}

void func_1477(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iParam2, 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
}

void func_1478(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_988(iParam2))
	{
		case 698653232:
			func_1664(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_1665(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_1479(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_988(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_1666(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_1667(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_1480(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_988(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_1466(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_1293() == 24043185)
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_1466(iVar0, iParam3);
		if (uParam0->f_1[iVar0]->f_1 == -1539589426 || uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0]->f_1 == 0 || uParam0->f_1[iVar0]->f_1 == 1155669136)
		{
			if (func_1663(&(uParam0->f_1[iVar0]), iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0]->f_1 = -1539589426;
				return;
			}
		}
		if (func_1663(&(uParam0->f_1[iVar0]), iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0]->f_1 = 1334603721;
		}
	}
}

void func_1481(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(&(uParam0->f_1[iVar0]), 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
}

void func_1482(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_1668(99217379) && func_1465(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_1468(&(uParam0->f_1[iVar0]), 0) && func_1465(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
}

void func_1483(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(&(uParam0->f_1[iVar0]), 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
}

void func_1484(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_988(iParam2))
	{
		case 1759215194:
			func_1669(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_1670(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_1671(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_1672(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_1673(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_1674(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1485(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_988(iParam2))
	{
		case 1769055947:
			func_1675(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_1676(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_1486(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		func_1677(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = &uParam0->f_1[iVar0];
	if ((func_1465(iParam2, 813132419) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_988(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	if ((func_1465(iParam2, -1650340550) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_988(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_1465(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
}

int func_1487(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_1678(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_722(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_1092(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_1679(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_1680(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_1681(1702063850, &Var65, 1);
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
			func_1682(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_699(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_1488(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1678(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1100(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_1092(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_23() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1681(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_1682(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_699(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1489(int iParam0)
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

bool func_1490(int iParam0)
{
	if (func_1489(iParam0))
	{
		return true;
	}
	else if (func_1683(iParam0))
	{
		return true;
	}
	return false;
}

void func_1491(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_1077(1);
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

bool func_1492(int iParam0)
{
	iVar0 = func_1493(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 35)
	{
		return false;
	}
	return true;
}

int func_1493(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2094367662:
			return 18;
		case -1799662290:
			return 5;
		case -1756972389:
			return 10;
		case -1721456649:
			return 20;
		case -1505156133:
			return 33;
		case -1443085621:
			return 32;
		case -1415025746:
			return 34;
		case -1296457610:
			return 3;
		case -1214886674:
			return 24;
		case -950892868:
			return 26;
		case -910204339:
			return 14;
		case -806881894:
			return 21;
		case -556609435:
			return 25;
		case -490770640:
			return 30;
		case -36524866:
			return 22;
		case 0:
			return 0;
		case 83146574:
			return 31;
		case 98090593:
			return 11;
		case 115034433:
			return 12;
		case 396773658:
			return 1;
		case 459036629:
			return 16;
		case 610102849:
			return 13;
		case 615198061:
			return 19;
		case 771930716:
			return 4;
		case 915626679:
			return 2;
		case 996070251:
			return 8;
		case 1098820611:
			return 15;
		case 1136837330:
			return 23;
		case 1581755436:
			return 7;
		case 1670807098:
			return 27;
		case 1777305156:
			return 6;
		case 1878949572:
			return 29;
		case 1935456893:
			return 17;
		case 2067900487:
			return 9;
		case 2132497367:
			return 28;
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

bool func_1494(int iParam0)
{
	if (!func_1684(iParam0))
	{
		return false;
	}
	return iParam0 == 0;
}

int func_1495(int iParam0, bool bParam1)
{
	Var0 = { func_717(bParam1) };
	return func_1686(Var0, func_1685(iParam0), 0, bParam1);
}

int func_1496(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1687())
	{
		return 0;
	}
	if (!func_721(iParam0, 0))
	{
		return 0;
	}
	return func_1689(func_1688(iParam0), uParam1, iParam2, iParam3);
}

int func_1497(var uParam0, int iParam1, bool bParam2)
{
	if (!func_1684(iParam1))
	{
		return 0;
	}
	if (func_1690(uParam0))
	{
		func_1691();
	}
	func_1692(iParam1);
	if (bParam2 && func_1693())
	{
		return 0;
	}
	func_1694(iParam1);
	func_1695(uParam0);
	func_1696(iParam1, uParam0, 1);
	return 1;
}

bool func_1498(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1687())
	{
		return false;
	}
	return func_1689(iParam0, uParam1, iParam2, iParam3);
}

int func_1499(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, int iParam34, bool bParam35)
{
	if (!func_1684(iParam34))
	{
		return 0;
	}
	func_1697(&uParam0, iParam34);
	if (bParam35 && func_1693())
	{
		return 0;
	}
	func_1698(&uParam0, iParam34);
	func_1695(&uParam0);
	func_1696(iParam34, &uParam0, 1);
	return 1;
}

int func_1500(int iParam0)
{
	if (func_401(&(Global_1956200->f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1501(int iParam0)
{
	if (func_402(&(Global_1956200->f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_1502(float fParam0, bool bParam1, bool bParam2)
{
	iVar0 = player_id();
	if (fParam0 > 0f && func_1699(iVar0))
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

int func_1503(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_2;
		case 1:
			return uParam0->f_10;
		case 2:
			return uParam0->f_6;
		default:
			break;
	}
	return 1;
}

float func_1504(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_3;
		case 1:
			return uParam0->f_11;
		case 2:
			return uParam0->f_7;
		default:
			break;
	}
	return 0f;
}

void func_1505(int iParam0, float fParam1)
{
	Global_17411.f_55.f_2439.f_24[iParam0] = fParam1;
}

int func_1506(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_1077(2);
	}
	iVar0 = player_ped_id();
	if (func_1700(iVar0, iParam0, fParam1))
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
			func_1701(iParam0, 7000, iParam5);
		}
		func_1702(iVar0, iParam0, fParam1);
		func_1703(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

void func_1507()
{
	if (!Global_1956200->f_1431.f_85)
	{
		return;
	}
	Global_1956200->f_1431.f_85 = 0;
}

void func_1508()
{
	if (!Global_1956200->f_1431.f_92)
	{
		return;
	}
	Global_1956200->f_1431.f_92 = 0;
}

void func_1509()
{
	if (!Global_1956200->f_1431.f_89)
	{
		return;
	}
	Global_1956200->f_1431.f_89 = 0;
}

void func_1510()
{
	sVar0 = func_1704();
	sVar1 = func_1705();
	bVar2 = (((Global_1956200->f_1431.f_89 && Global_1956200->f_1431.f_92) || (Global_1956200->f_1431.f_89 && Global_1956200->f_1431.f_85)) || (Global_1956200->f_1431.f_85 && Global_1956200->f_1431.f_92));
	bVar3 = (Global_1956200->f_1431.f_89 || Global_1956200->f_1431.f_85);
	if (Global_1956200->f_1431.f_92 && !func_1706())
	{
		if (!Global_1956200->f_1431.f_93)
		{
			animpostfx_play(sVar0);
			Global_1956200->f_1431.f_93 = 1;
		}
	}
	else if (Global_1956200->f_1431.f_93)
	{
		_0xc5cb91d65852ed7e(sVar0);
		Global_1956200->f_1431.f_93 = 0;
	}
	if (bVar3)
	{
		fVar4 = ((get_frame_time() * 1000f) / 2000f);
		fVar5 = (1f * fVar4);
		fVar6 = (-1f * fVar4);
		if (bVar2)
		{
			Global_1956200->f_1431.f_95 = (Global_1956200->f_1431.f_95 + fVar5);
			Global_1956200->f_1431.f_91 = (Global_1956200->f_1431.f_91 + fVar6);
			Global_1956200->f_1431.f_87 = (Global_1956200->f_1431.f_87 + fVar6);
		}
		else if (Global_1956200->f_1431.f_89)
		{
			Global_1956200->f_1431.f_95 = (Global_1956200->f_1431.f_95 + fVar6);
			Global_1956200->f_1431.f_91 = (Global_1956200->f_1431.f_91 + fVar5);
			Global_1956200->f_1431.f_87 = (Global_1956200->f_1431.f_87 + fVar6);
		}
		else if (Global_1956200->f_1431.f_85)
		{
			Global_1956200->f_1431.f_95 = (Global_1956200->f_1431.f_95 + fVar6);
			Global_1956200->f_1431.f_91 = (Global_1956200->f_1431.f_91 + fVar6);
			Global_1956200->f_1431.f_87 = (Global_1956200->f_1431.f_87 + fVar5);
		}
		Global_1956200->f_1431.f_95 = func_911(Global_1956200->f_1431.f_95, 0f, 1f);
		Global_1956200->f_1431.f_87 = func_911(Global_1956200->f_1431.f_87, 0f, 1f);
		Global_1956200->f_1431.f_91 = func_911(Global_1956200->f_1431.f_91, 0f, 1f);
		if (!animpostfx_is_running(sVar1) && !func_1309())
		{
			animpostfx_play(sVar1);
		}
		_0xf972f0ab16dc5260(sVar1, 1, Global_1956200->f_1431.f_91);
		_0xf972f0ab16dc5260(sVar1, 2, Global_1956200->f_1431.f_87);
		_0xf972f0ab16dc5260(sVar1, 3, Global_1956200->f_1431.f_95);
	}
	else if (animpostfx_is_running(sVar1))
	{
		Global_1956200->f_1431.f_95 = 0f;
		Global_1956200->f_1431.f_91 = 0f;
		Global_1956200->f_1431.f_87 = 0f;
		_0xc5cb91d65852ed7e(sVar1);
	}
	if (Global_1956200->f_1431.f_88)
	{
		fVar7 = _get_player_health(&(Global_1296859->f_154[&Global_1296859]));
		fVar8 = (IntToFloat(get_ped_max_health(Global_1296859->f_8)) * 0.1f);
		func_1707(fVar7, fVar8);
	}
	else
	{
		func_1708();
	}
}

int func_1511(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_1489(iParam0))
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
				sVar0 = func_1709(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_1710(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_1709(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_1711(1775828486);
			func_1712(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_1709(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_1713(-1, 0);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2] = fParam1;
			break;
		case 19:
			func_1711(350943398);
			func_1714(0, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0]->f_1 = fParam1;
			break;
		case 18:
			func_1714(1, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1]->f_1 = fParam1;
			break;
		case 20:
			func_1714(2, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2]->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_1512(int iParam0)
{
	return func_1465(iParam0, 1279601681);
}

int func_1513(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1715(&uParam0, iParam4, bParam5, iParam6);
}

bool func_1514(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_1327(iParam0) && func_1716(iParam0))
		{
			func_1717(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_1515(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1718(iParam0, iParam1);
	Var0 = { func_724(iParam0, 0, 1) };
	iVar5 = func_1328(iParam0, &Var0, 0, 0);
	iVar6 = func_394(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_1465(iParam0, -2051813666))
		{
			func_1528(674, 1);
		}
		else if (func_23() == -1)
		{
			func_1528(673, 0);
		}
	}
	if (func_1091(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_1516(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_1719())
	{
		return;
	}
	switch (func_1720(iParam0, -949239683))
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

bool func_1517(int iParam0, int iParam1)
{
	if (!func_721(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_1518(int iParam0)
{
	if (!func_1721(iParam0))
	{
		return false;
	}
	return func_1722(iParam0);
}

void func_1519(int iParam0)
{
	if (!func_1721(iParam0))
	{
		return;
	}
	func_1723(iParam0);
	func_1724(iParam0);
}

void func_1520(int iParam0)
{
	if (func_1465(iParam0, -1522723129))
	{
		func_1241(-848633709, 0, 255, 0, 0);
	}
	else if (func_1465(iParam0, -283942357))
	{
		func_1241(-981153234, 0, 255, 0, 0);
	}
	else if (func_1465(iParam0, 683680997))
	{
		func_1241(-756350192, 0, 255, 0, 0);
	}
	else if (func_1465(iParam0, 1307628809))
	{
		func_1241(603094518, 0, 255, 0, 0);
	}
}

int func_1521(int iParam0, bool bParam1)
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
	if (func_721(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1725(iVar0) || func_1726(iVar0))
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

int func_1522(int iParam0, bool bParam1)
{
	if (!func_721(iParam0, 0))
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

void func_1523(int iParam0)
{
	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_1727(iParam0))
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

bool func_1524(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_724(iParam0, 0, 1) };
		if (func_1096(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_1097(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_718(iParam0, Var0, Var0.f_4, 0) };
				func_1488(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_1092(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_1525(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_1728(iParam0, iParam1);
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

bool func_1525(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_716(iParam0))
	{
		return false;
	}
	if (!func_1092(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return true;
}

bool func_1526(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_1522(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_23() == -1)
		{
			func_1523(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1729(iVar0);
			}
		}
		if (!func_1091(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_1717(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1730(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_1524(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || _is_weapon_binoculars(iVar0))
			{
				func_1524(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_lasso(iVar0))
			{
				func_1524(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1731())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1732(iVar0))
				{
					func_1524(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1524(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1733(Global_34, 2, 0, 1);
				if ((((func_1727(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_1536(-1185145312, 1)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_34, iVar7);
				}
				if (func_1727(iVar7) && func_1536(-1185145312, 1))
				{
					if (!func_1524(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_1524(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_1524(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_1528(515, 1);
	}
	return true;
}

bool func_1527(int iParam0, int iParam1, int iParam2)
{
	if (!func_716(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_34, iParam0);
	if (func_1727(iVar4))
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
		func_1539(func_1734(iParam0), func_1538(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1092(0))
	{
		if (func_1525(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_397(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1528(int iParam0, bool bParam1)
{
	func_1735(iParam0, &iVar0, &iVar1);
	if (!func_1736(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1737(iVar0, iVar1);
}

bool func_1529()
{
	return false;
}

int func_1530(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	if (func_23() == 0)
	{
		func_1544(iParam0, 0);
		return 0;
	}
	iVar0 = func_1738(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1739(iVar0, sParam4, iParam5, 0);
	}
	func_1740(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_1531(int iParam0)
{
}

void func_1532(int iParam0)
{
}

void func_1533(int iParam0)
{
}

void func_1534(int iParam0)
{
}

void func_1535()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

bool func_1536(int iParam0, int iParam1)
{
	if (!func_721(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1093(iParam0);
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
			if (!func_1741(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_1742(iParam0))
			{
				return true;
			}
			break;
	}
	return func_1144(iParam0, 0, 0, 0) >= iParam1;
}

void func_1537(int iParam0, int iParam1)
{
	func_1549(iParam0, iParam1, &uVar0);
}

int func_1538(int iParam0)
{
	if (!func_721(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1743(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_1539(int iParam0, int iParam1, bool bParam2)
{
	func_1735(iParam0, &iVar0, &iVar1);
	if (!func_1736(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1744(iParam0, 1024))
	{
		return;
	}
	func_1737(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 2;
}

void func_1540(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_1735(iParam0, &iVar0, &iVar1);
	if (!func_1736(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1744(iParam0, 1024))
	{
		return;
	}
	func_1737(iVar0, iVar1);
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

void func_1541(int iParam0)
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

void func_1542(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
}

bool func_1543()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

int func_1544(int iParam0, int iParam1)
{
	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_1745(&Var4, 1356624740);
	return func_1746(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_1545(int iParam0)
{
	if (!func_721(iParam0, 0))
	{
		return Var0;
	}
	if (func_1465(iParam0, -305066475))
	{
		if (func_23() == -1)
		{
			if (func_1465(iParam0, -537818634))
			{
				return func_529(189951448);
			}
			else
			{
				return func_529(1176172851);
			}
		}
	}
	else if (func_1465(iParam0, -537818634))
	{
		return func_529(-963660207);
	}
	if (func_1465(iParam0, 2084895747))
	{
		return func_529(1694039471);
	}
	return Var2;
}

void func_1546(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			break;
	}
}

void func_1547(int iParam0, char* sParam1)
{
	sVar0 = func_1747(Global_1903071->f_37);
	func_1749(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1748(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1548(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_721(iParam0, 0))
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
	if (!func_1750() || bParam6)
	{
		func_1751(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1752(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_1752(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_1517(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_1093(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_988(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1753(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	if (func_1465(iParam0, 474910316))
	{
		sVar17 = func_1754(iParam0);
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
	if (func_1465(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_1755(iParam0))
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
	iVar18 = func_1538(iParam0);
	if ((func_1756(iVar12) && func_1465(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_1757(iParam0);
	}
	else if (func_1093(iParam0) == -1037537535)
	{
		iVar19 = func_1758(iParam0);
		if (func_721(iVar19, 0))
		{
			iVar18 = func_1538(iVar19);
		}
	}
	if (func_1759(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_1760(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_895(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_1761(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_1762(iParam0, &cVar22))
		{
			sVar21 = func_1568(func_1763(cVar22), 109029619);
		}
	}
	func_1749(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

void func_1549(int iParam0, int iParam1, var uParam2)
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

void func_1550(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1551()
{
	return Global_1301323->f_288;
}

int func_1552()
{
	return Global_1301323->f_150.f_4;
}

void func_1553(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		func_1262(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_1151(Param0, 0, 1, -1);
}

bool func_1554(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_73(Param0))
	{
		return false;
	}
	if (!func_73(Param2))
	{
		return true;
	}
	iVar0 = func_672(Param0);
	iVar1 = func_672(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_1555(int iParam0, var uParam1, var uParam2)
{
	if (!func_1764(iParam0))
	{
		return false;
	}
	if (func_1765(iParam0, uParam1, &uVar0))
	{
		func_1766(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_1556(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 >= 32)
	{
		Global_1196205->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*(*Global_1196205)[Global_1196205->f_129] = { *uParam0 };
		Global_1196205->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *(*Global_1196205)[iVar1] };
		*(*Global_1196205)[iVar1] = { *((*Global_1196205)[iVar1 + 1]) };
		*((*Global_1196205)[iVar1 + 1]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*(*Global_1196205)[iParam1] = { *uParam0 };
	Global_1196205->f_129++;
}

int func_1557()
{
	iVar0 = Global_1296851->f_2.f_4;
	if (!func_1767(iVar0))
	{
		iVar0 = _network_get_cash_balance();
	}
	return iVar0;
}

int func_1558(int iParam0, int iParam1, int iParam2)
{
	return func_1768(iParam0, iParam1, iParam2);
}

int func_1559(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1769(bParam1, bParam2, bParam3);
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

int func_1560()
{
	iVar0 = func_1770(120839576, 59806960, 1, 0, 1, 0);
	if (!func_1767(iVar0))
	{
		iVar0 = _network_get_cash_balance();
	}
	return iVar0;
}

int func_1561(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_724(2084597891, 1, 0) };
	Var6 = { func_1771(2084597891, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_1681(1702063850, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_1682(iVar0, Var22);
	}
	return iVar0;
}

void func_1562()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1772(iVar0))
		{
			func_1773(iVar0);
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

int func_1563(int iParam0)
{
	return &(Global_1109340->f_193[iParam0]);
}

void func_1564(int iParam0)
{
	Global_1109340->f_193[&Global_1296859] = iParam0;
	func_1774(&(Global_1108365->f_935.f_30));
}

bool func_1565(struct<38> Param0, var uParam38)
{
	if (!_databinding_is_data_id_valid(Param0.f_37))
	{
		return _databinding_is_data_id_valid(Param0);
	}
	return _databinding_read_data_bool(Param0.f_37);
}

int func_1566()
{
	iVar4 = _databinding_read_data_int(Global_1940311->f_242.f_14[0]->f_25);
	iVar5 = _databinding_read_data_int(Global_1940311->f_242.f_14[0]->f_35);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_25);
		iVar2 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_35);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_658(&(Global_1940311->f_242.f_14[iVar3]));
	return iVar3;
}

void func_1567(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_1253(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_1253(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_1253(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_1253(54), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_1253(55), Param10.f_4);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_1253(57), Param10.f_5);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_1253(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_1253(58), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_1253(59), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_1253(60), Param10.f_9);
	uParam0->f_11 = _databinding_add_data_hash(*uParam0, func_1253(61), Param10.f_10);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_1253(67), Param10.f_11);
	uParam0->f_12 = _databinding_add_data_hash(*uParam0, func_1253(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -672301300;
	}
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_1253(64), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, func_1253(65), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, func_1253(66), Param10.f_15);
}

char* func_1568(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_895(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_1569(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1570(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = _show_notification(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_1571(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_1572(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = _show_notification(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_1573(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1574(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _0x3f9fddba79117c69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1575(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_1576(struct<2> Param0)
{
	if (func_664(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_664(Param0)))
	{
		_0x99230691875fc218(func_672(Param0), func_664(Param0), Global_35);
	}
}

Vector3 func_1577(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_1578(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_1430();
		case 4:
			return 109029619;
		case 9:
			return func_1429();
		case 10:
			return 109029619;
		case 23:
			return 1672732465;
		case 22:
			return -1019997170;
		case 24:
			return -5208416;
		case 18:
			return 109029619;
		case 25:
			return func_1429();
		case 30:
			return func_1429();
		default:
			break;
	}
	return 0;
}

char* func_1579(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "timerString";
		case 1:
			return "isTimerLow";
		case 2:
			return "leftScore";
		case 5:
			return "leftScoreVisible";
		case 3:
			return "leftScoreColor";
		case 4:
			return "leftScoreTextColor";
		case 8:
			return "rightScore";
		case 11:
			return "rightScoreVisible";
		case 9:
			return "rightScoreColor";
		case 10:
			return "rightScoreTextColor";
		case 14:
			return "visible";
		case 15:
			return "enabled";
		case 16:
			return "text";
		case 17:
			return "meterValue";
		case 18:
			return "meterColor";
		case 19:
			return "meterVisible";
		case 20:
			return "txn";
		case 21:
			return "txd";
		case 22:
			return "secondaryTxn";
		case 23:
			return "secondaryTxd";
		case 24:
			return "secondaryImgColor";
		case 25:
			return "imgColor";
		case 26:
			return "isIconBackgroundVisible";
		case 27:
			return "iconEnabled";
		case 28:
			return "overlayTxn";
		case 29:
			return "overlayTxd";
		case 30:
			return "overlayColor";
		case 31:
			return "overlayVisible";
		case 32:
			return "meterThirdsVisible";
		case 33:
			return "showAlternateIcons";
		case 34:
			return "showBlinkIcon";
		case 35:
			return "showPulse";
		case 36:
			return "countDownTimer";
		case 37:
			return "isVisible";
		default:
			break;
	}
	return "";
}

char* func_1580(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "00:00";
		case 2:
			return "0";
		case 8:
			return "0";
		case 16:
			return "";
		case 21:
			return "";
		case 20:
			return "";
		case 29:
			return "";
		case 28:
			return "";
		default:
			break;
	}
	return "";
}

int func_1581(int iParam0)
{
	return 0;
}

float func_1582(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0f;
		case 13:
			return 0f;
		case 17:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_1583(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 19:
			return 0;
		case 26:
			return 0;
		case 27:
			return 1;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 37:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_1584()
{
	if (func_1775())
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		if (Global_1940258->f_38 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_34, 311);
	}
	else
	{
		return &(Global_1956200->f_1716[3]);
	}
	return false;
}

void func_1585(var uParam0, var uParam1)
{
	iVar2 = player_id();
	if (!_0x72ad59f7b7fb6e24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (_0x1a6e84f13c952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!does_entity_exist(uParam0[iVar1]))
			{
			}
			else if (!is_ped_human(uParam0[iVar1]) && !(decor_exist_on(uParam0[iVar1], "HorseTeamA") || decor_exist_on(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (decor_exist_on(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_1586(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1940258->f_26))
	{
		if (!bParam0 || is_ped_human(Global_1940258->f_26))
		{
			*iParam1 = Global_1940258->f_26;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1940258->f_27))
	{
		if (!bParam0 || is_ped_human(Global_1940258->f_27))
		{
			if (_is_ped_hogtied(Global_1940258->f_27) || is_entity_dead(Global_1940258->f_27))
			{
				*iParam2 = Global_1940258->f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1940258->f_24 && !is_ped_injured(Global_34))
	{
		iVar1 = _get_lassoed_entity(Global_34);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_1587(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621) && !is_player_dead(player_id()))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, 0, 0))
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						if (_is_this_model_a_horse(get_entity_model(iVar1)))
						{
							iVar0 = get_ped_index_from_entity_index(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_7 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1940258->f_6)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_34);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_34);
		}
		if (iVar0 != 0)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_this_model_a_horse(get_entity_model(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

int func_1588(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseTeamA") && decor_get_bool(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseTeamB") && decor_get_bool(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

void func_1589(var uParam0)
{
	if (Global_1940258->f_32 == 0)
	{
		func_644(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258->f_33)
		{
			if (does_entity_exist(&(Global_1940258->f_28[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1940258->f_28[iVar0])))
				{
					func_511(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_1590(var uParam0)
{
	return uParam0->f_26;
}

var func_1591(var uParam0)
{
	return uParam0->f_27;
}

int func_1592()
{
	return &Global_1902818;
}

int func_1593(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_1594(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

void func_1595(int iParam0)
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

void func_1596(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

void func_1597(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	iVar5 = 0;
	iVar6 = 32;
	bVar7 = is_bit_set(uParam0->f_159, 3);
	bVar8 = is_bit_set(uParam0->f_159, 23);
	bVar9 = is_bit_set(uParam0->f_159, 24);
	bVar10 = is_bit_set(uParam0->f_159, 25);
	bVar11 = is_bit_set(uParam0->f_160, 10);
	bVar12 = is_bit_set(uParam0->f_159, 28);
	iVar13 = player_id();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Position", "");
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Gamertag", "");
		_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar23 = is_bit_set(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = is_bit_set(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_1776() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = to_float(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0] != -1 && uParam1[iVar0] < 8)
				{
					if (bVar9)
					{
						if ((*uParam1)[iVar0]->f_1 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_1);
						}
					}
					else if (bVar8)
					{
						if ((*uParam1)[iVar0]->f_5 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_5);
						}
					}
					else if (bVar11)
					{
						if ((*uParam1)[iVar0]->f_8 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_8);
						}
					}
					else if ((*uParam1)[iVar0]->f_1 != -1f)
					{
						fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_1617(iParam2, &uVar34, uParam0->f_150, bVar23);
		func_1618(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = &uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						Var14 = { func_1777(iVar43) };
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &Var14);
						iVar44 = func_1778(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar44);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", _0x2b6846401d68e563(&(fVar25[iVar43]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_1620(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_1598(&((*uParam1)[iVar1]->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &((*uParam1)[iVar1]->f_14.f_1));
						bVar45 = iVar13 == (*uParam1)[iVar1]->f_14;
						iVar46 = func_1601(uParam0, uParam1, iVar1, iVar13, bVar45);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (is_bit_set(uParam0->f_159, 26))
							{
								if (is_bit_set(uParam0->f_159, 0))
								{
									sVar47 = _0x2b6846401d68e563(func_1615((*uParam1)[iVar1], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = _0x2b6846401d68e563(func_1610((*uParam1)[iVar1], uParam0->f_159), 0);
								}
							}
							else if (is_bit_set(uParam0->f_159, 27))
							{
								iVar4 = round(func_1611((*uParam1)[iVar1], uParam0->f_159));
								sVar47 = " ";
								if (func_1612(iVar4))
								{
									iVar48 = uParam0->f_159;
									if ((*uParam1)[iVar1]->f_1 == 8.94E+07f)
									{
										clear_bit(&iVar48, 12);
									}
									sVar47 = func_1613(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = _0x2b6846401d68e563(func_1611((*uParam1)[iVar1], uParam0->f_159), func_1614(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (is_bit_set(uParam0->f_159, 9))
							{
								sVar47 = func_1415((*uParam1)[iVar1]->f_5);
							}
							else
							{
								sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_8, 0);
						}
						else
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_1, 0);
						}
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_1598(var uParam0)
{
	if (*uParam0 != 255)
	{
		return true;
	}
	else if (Global_2883584 && !is_string_null_or_empty(&(uParam0->f_1)))
	{
		return true;
	}
	return false;
}

void func_1599(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	iVar1 = player_id();
	bVar2 = iVar1 == (*uParam1)[iParam2]->f_14;
	iVar0 = func_1601(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (network_is_player_active((*uParam1)[iParam2]->f_14) && _0x919af2d93e9aa89d((*uParam1)[iParam2]->f_14))
	{
		bVar3 = _0xef6f2a35faaf2ed7((*uParam1)[iParam2]->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		_databinding_write_data_hash_string_from_parent(&(uParam0->f_12[iParam2]), "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowBlip", false);
	}
	else
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowBlip", true);
	}
}

int func_1600(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if (uParam0[iParam1] == uParam0[iVar0] && func_1598(&((*uParam0)[iVar0]->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

int func_1601(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (is_bit_set(uParam0->f_159, 11))
	{
		iVar0 = func_1779(uParam1[iParam2], get_player_team(iParam3), uParam0->f_150, is_bit_set(uParam0->f_159, 5), bParam4);
	}
	else if (is_bit_set(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			iVar0 = 109029619;
		}
		else
		{
			iVar0 = func_554((*uParam1)[iParam2]->f_14, 1, -1, 1);
		}
	}
	else
	{
		iVar0 = func_554((*uParam1)[iParam2]->f_14, 1, -1, 1);
	}
	return iVar0;
}

void func_1602(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch ((*uParam1)[iParam2]->f_10)
	{
		case 1:
			_databinding_write_data_int_from_parent(&(uParam0->f_12[iParam2]), "SetOverlayImg", 1);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", true);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", false);
			break;
		case 2:
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", true);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
		default:
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", false);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		_databinding_write_data_hash_string_from_parent(&(uParam0->f_12[iParam2]), "CrossColor", iParam4);
	}
}

char* func_1603()
{
	return "RSN";
}

char* func_1604(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return _create_var_string(2, "NUMBER", Global_1145091[iParam0]);
}

bool func_1605()
{
	if (Global_1102219->f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_660(2048))
	{
		return true;
	}
	if (func_659(1))
	{
		return true;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_1606(int iParam0)
{
	iVar0 = network_get_player_index_from_ped(get_ped_index_from_entity_index(func_1780()));
	return iParam0 == iVar0;
}

char* func_1607(int iParam0)
{
	if (iParam0 != 0)
	{
		return _0xb112b9262ec29c20(1852874750, iParam0);
	}
	return "";
}

bool func_1608(int iParam0)
{
	if ((func_1609(iParam0) || func_1616(iParam0)) || is_bit_set(iParam0, 18))
	{
		return false;
	}
	if (is_bit_set(iParam0, 0) || is_bit_set(iParam0, 17))
	{
		return true;
	}
	return false;
}

bool func_1609(int iParam0)
{
	return (is_bit_set(iParam0, 0) && is_bit_set(iParam0, 17));
}

float func_1610(var uParam0, int iParam1)
{
	if (func_1781())
	{
		func_1782(uParam0, 1);
	}
	else if (is_bit_set(iParam1, 3))
	{
		if (is_bit_set(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (is_bit_set(iParam1, 4) || is_bit_set(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_1608(iParam1) || is_bit_set(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (is_bit_set(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (is_bit_set(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

float func_1611(var uParam0, int iParam1)
{
	if (func_1781())
	{
		return func_1782(uParam0, 0);
	}
	else if (is_bit_set(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (is_bit_set(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

bool func_1612(int iParam0)
{
	if ((iParam0 != 86400000 || iParam0 == 0) || iParam0 == round(-3f))
	{
		return true;
	}
	return false;
}

char* func_1613(int iParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 1000000000 || iParam0 == 88400000) || iParam0 == 72800000) || iParam0 == 87400000) || iParam0 == round(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1183(iParam0, 1, 2, is_bit_set(iParam1, 12), 0, 0);
		}
	}
	else if ((is_bit_set(iParam1, 3) || is_bit_set(iParam1, 4)) || is_bit_set(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return _get_label_text("POS_LEAD");
		}
		else if (iParam0 == 88400000 || iParam0 == 72800000)
		{
			return _get_label_text("POS_DNF");
		}
		else if (iParam0 == 87400000)
		{
			return _get_label_text("POS_ELIM");
		}
		else if (iParam0 == round(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1183(iParam0, 1, 2, is_bit_set(iParam1, 12), 0, 0);
		}
	}
	if (is_bit_set(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 1000000000)
		{
			return "--:--:--";
		}
		else
		{
			return func_1183(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_1783(&cVar0);
}

int func_1614(var uParam0, int iParam1)
{
	if (iParam1 == 1 && is_bit_set(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && is_bit_set(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && is_bit_set(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

char* func_1615(var uParam0, int iParam1, int iParam2)
{
	if (func_1781())
	{
		func_1782(uParam0, 2);
	}
	else if (is_bit_set(iParam1, 0) && !is_bit_set(iParam1, 17))
	{
		if (is_bit_set(iParam1, 3) && (is_bit_set(iParam1, 4) || is_bit_set(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (is_bit_set(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_1609(iParam1))
	{
		return uParam0->f_1;
	}
	else if (is_bit_set(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (is_bit_set(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

bool func_1616(int iParam0)
{
	return (is_bit_set(iParam0, 18) && is_bit_set(iParam0, 17));
}

void func_1617(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = iParam0[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && uParam1[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = uParam1[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_1618(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == uParam2[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
}

void func_1619(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 < iParam3)
	{
		if (iParam1 != _databinding_get_item_context_by_index(uParam0, iParam4))
		{
			_databinding_remove_binding_array_item_by_data_context_id(uParam0, iParam1);
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0, iParam4, sParam2, iParam1);
		}
	}
	else
	{
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0, iParam4, sParam2, iParam1);
	}
}

void func_1620(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_1598(&((*uParam0)[iVar1]->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
				}
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
}

void func_1621(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar5, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, iVar0, 64);
		uParam0->f_3[iVar0] = _databinding_add_data_container(*uParam0, &cVar5);
		cVar5 = { func_1777(iVar0) };
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 == uParam1[iVar1] && func_1598(&((*uParam1)[iVar1]->f_14)))
			{
				if (is_bit_set(uParam0->f_159, 19))
				{
					if ((*uParam1)[iVar1]->f_6 != -1f && fVar2 == 0f)
					{
						fVar2 = (fVar2 + (*uParam1)[iVar1]->f_6);
					}
					if ((*uParam1)[iVar1]->f_1 != -1f)
					{
						fVar3 = (fVar3 + (*uParam1)[iVar1]->f_1);
					}
					if ((*uParam1)[iVar1]->f_5 != -1f)
					{
						fVar4 = (fVar4 + (*uParam1)[iVar1]->f_5);
					}
				}
				else
				{
					if ((*uParam1)[iVar1]->f_1 != -1f)
					{
						fVar2 = (fVar2 + (*uParam1)[iVar1]->f_1);
					}
					if ((*uParam1)[iVar1]->f_2 != -1f)
					{
						fVar3 = (fVar3 + (*uParam1)[iVar1]->f_2);
					}
					if ((*uParam1)[iVar1]->f_5 != -1f)
					{
						fVar4 = (fVar4 + (*uParam1)[iVar1]->f_5);
					}
				}
			}
			iVar1++;
		}
		if (!is_bit_set(uParam0->f_159, 19))
		{
			if (is_bit_set(uParam0->f_159, 25) || is_bit_set(uParam0->f_159, 23))
			{
				if (func_1776() == 0)
				{
					fVar4 = to_float(Global_1050975[iVar0]);
				}
			}
		}
		iVar13 = func_1778(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0);
		_databinding_add_data_int(&(uParam0->f_3[iVar0]), "HeadingColor", iVar13);
		_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Heading", &cVar5);
		if (is_bit_set(uParam0->f_159, 6))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		else if (func_1608(uParam0->f_159))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat2", _0x2b6846401d68e563(fVar2, uParam0->f_151));
			fVar14 = fVar3;
			if (is_bit_set(uParam0->f_159, 17))
			{
				fVar14 = fVar4;
			}
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar14, uParam0->f_151));
		}
		else if (func_1609(uParam0->f_159))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		else
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat1Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat1", _0x2b6846401d68e563(fVar2, uParam0->f_151));
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat2", _0x2b6846401d68e563(fVar3, uParam0->f_151));
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_1622()
{
	return func_872(4);
}

void func_1623(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	if (bParam4)
	{
		if (func_1781())
		{
			func_1784(uParam0);
		}
		else
		{
			func_1785(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	if (is_bit_set(uParam0->f_159, 5))
	{
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = _databinding_add_data_container(*uParam0, &cVar1);
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "Position", "");
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "Gamertag", "");
		_databinding_add_data_int(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = _databinding_add_data_container(*uParam0, &cVar1);
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "Position", 0);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowCross", false);
		_databinding_add_data_hash(&(uParam0->f_12[iVar0]), "CrossColor", 859817522);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Gamertag", "");
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "GamertagColor", 0);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowCrewTag", true);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "CrewTag", "");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowRank", true);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Rank", "0");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "Spectating", false);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat0", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat1", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat2", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat3", "");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowBlip", func_1786());
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "BlipColor", 0);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "isHighlighted", false);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "HeadsetIconVisible", false);
		_databinding_add_data_hash(&(uParam0->f_12[iVar0]), "HeadsetIconColor", 109029619);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowBlip", true);
		_databinding_add_data_bool(*uParam0, "info_visible_06", false);
		_databinding_add_data_bool(*uParam0, "info_visible_07", false);
		_databinding_add_data_bool(*uParam0, "info_visible_08", false);
		_databinding_add_data_string(*uParam0, "info_value_06", "");
		_databinding_add_data_string(*uParam0, "info_value_07", "");
		_databinding_add_data_string(*uParam0, "info_value_08", "");
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "SetOverlayImg", 1);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowOverlay", false);
		func_1624(uParam0, &((*uParam1)[iVar0]->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_1781())
	{
		func_1787(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_1418(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_1624(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_1788() > 0)
	{
		return;
	}
	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_1789(uParam0, *uParam1)}, 8);
	if (!is_string_null_or_empty(&Var16) && !are_strings_equal(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		_databinding_write_data_string(uParam0->f_45[iParam2][0], &cVar0);
		_databinding_write_data_string(uParam0->f_45[iParam2][1], &cVar8);
	}
	else
	{
		(*uParam0->f_45[iParam2])[0] = _databinding_add_data_string(&(uParam0->f_12[iParam2]), "AvatarDictionary", &cVar0);
		(*uParam0->f_45[iParam2])[1] = _databinding_add_data_string(&(uParam0->f_12[iParam2]), "AvatarTexture", &cVar8);
	}
}

bool func_1625(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_1626(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1627(bool bParam0)
{
	if (bParam0)
	{
		return 1022890889;
	}
	return -987928333;
}

int func_1628()
{
	return 205122612;
}

bool func_1629()
{
	if (Global_1940144->f_20 && Global_1940144->f_5 == 1)
	{
		return true;
	}
	return false;
}

void func_1630(var uParam0)
{
	if (uParam0->f_36 == 0 && uParam0->f_33 == uParam0->f_34)
	{
		return;
	}
	iVar0 = uParam0->f_35;
	uParam0->f_35++;
	if (uParam0->f_35 >= 32)
	{
		uParam0->f_35 = 0;
		if (uParam0->f_36 != 0)
		{
			func_1790(uParam0, uParam0->f_36, 0);
			uParam0->f_36 = 0;
		}
	}
	if (!is_bit_set(uParam0->f_33, iVar0))
	{
		return;
	}
	iVar1 = int_to_playerindex(iVar0);
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	StringCopy(&cVar2, "", 128);
	switch (func_1791(&cVar2, iVar0, 1))
	{
		case 4:
			(*uParam0)[iVar0] = iVar1;
			set_bit(&(uParam0->f_34), iVar0);
			break;
		case 3:
			break;
		case 1:
			func_1792(iVar0, 1);
			set_bit(&(uParam0->f_36), iVar0);
			break;
		case 2:
			func_1792(iVar0, 1);
			set_bit(&(uParam0->f_36), iVar0);
			break;
		case 0:
			break;
	}
}

void func_1631(var uParam0, int iParam1)
{
	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_3 = iParam1;
	func_1793(&Var0);
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = int_to_playerindex(iVar4);
		if (!network_is_player_active(iVar5))
		{
		}
		else
		{
			set_bit(&(uParam0->f_33), iVar4);
		}
		iVar4++;
	}
}

int func_1632(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2843.f_1)
	{
		if (&Global_1952637->f_2843.f_43[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1633(int iParam0, var uParam1)
{
	return (Global_1952637->f_2843.f_3[iParam0] && uParam1) != 0;
}

void func_1634(int iParam0, var uParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (&Global_1952637->f_2843.f_3[iParam0] - (Global_1952637->f_2843.f_3[iParam0] && uParam1));
}

bool func_1635(int iParam0, int iParam1)
{
	return ((Global_1952637->f_83[func_1287(iParam0, 1)])->f_11 && iParam1) != 0;
}

void func_1636(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1637(int iParam0)
{
	Var2 = -961687407;
	if (func_23() == -1)
	{
		Var2 = 1444744190;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	_0x91ded5dd64bb2691(&Var2);
	if (!_0xed4413cee1bf142c(&Var2))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
	{
		return 0;
	}
	iVar1 = func_1794(iParam0);
	func_1795(iVar0, iVar1);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
		{
		}
		else
		{
			func_1795(iVar0, iVar1);
		}
	}
	return 1;
}

int func_1638(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2897)
	{
		if (&Global_1952637->f_2897.f_2[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1639(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_1640(int iParam0)
{
	if (iParam0 == 1733464892)
	{
		return -236468550;
	}
	return -28107610;
}

int func_1641(int iParam0)
{
	if (iParam0 == -1713496139)
	{
		return 1687431937;
	}
	else if (func_1465(iParam0, -779797157))
	{
		return 129780002;
	}
	else if (func_1465(iParam0, -1082418872))
	{
		return -25348444;
	}
	else if (func_1465(iParam0, -724253702))
	{
		return -1551826771;
	}
	else
	{
		return 1661173679;
	}
	return 1687431937;
}

int func_1642(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1 || (*uParam0)[iVar0]->f_17 == 0)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1643(int iParam0)
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

int func_1644(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_1642(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	_remove_ped_overlay(*uParam0, (*uParam1)[iVar0]->f_2);
	func_1645(uParam0, uParam1, iVar0);
	return 1;
}

void func_1645(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			*(*uParam1)[iVar0] = { *((*uParam1)[iVar0 + 1]) };
			(*uParam1)[iVar0]->f_2 = ((*uParam1)[iVar0]->f_2 - 1);
			iVar0++;
		}
	}
}

bool func_1646(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = 459292749;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (!func_1796(&Var0, uParam0, 0, iParam4))
	{
		return false;
	}
	*uParam0 = iParam1;
	if (bParam2)
	{
		func_1797(uParam0, bParam3);
	}
	return true;
}

void func_1647(var uParam0, var uParam1, var uParam2)
{
	if ((!func_1639(uParam0, 1) || func_1639(uParam0, 2)) || uParam0->f_6 < 0)
	{
		return;
	}
	if (uParam2->f_17 == -1177453988)
	{
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_1798(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_1642(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*(*uParam1)[uParam0->f_6] = { *uParam2 };
			uParam0->f_6++;
			func_1799(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = (*uParam1)[iVar0]->f_2;
			*(*uParam1)[iVar0] = { *uParam2 };
			func_1800(uParam0, (*uParam1)[iVar0], 1);
		}
	}
}

int func_1648(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_1646(&Var0, iParam2, bParam3, bParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*(*uParam1)[uParam0->f_6] = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if ((*uParam1)[iVar18]->f_1 < ((*uParam1)[(iVar18 - 1)])->f_1)
		{
			Var19 = { *(*uParam1)[iVar18] };
			*(*uParam1)[iVar18] = { *((*uParam1)[(iVar18 - 1)]) };
			*((*uParam1)[(iVar18 - 1)]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	return 1;
}

int func_1649(int iParam0)
{
	return iParam0 * 31;
}

bool func_1650(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_1651(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277;
	}
	switch (iParam0)
	{
		case -450053710:
			return -974145463;
		case -1679658797:
			return 1432602132;
		case 1792770814:
			return 92296905;
		case -1963397600:
			return -842044823;
		case -1250098797:
			return 1371398552;
		case -318278790:
			return -745453539;
		case 55096099:
			return 1583029039;
		case -458397856:
			return -783061276;
		case -444610976:
			return -1322521536;
		case 746627200:
			return 728055838;
		case 705691988:
			return 1100711204;
		case 2130094044:
			return -1782334639;
		case -1554827654:
			return -1181052732;
		case -1029277326:
			return -179102320;
		case -1140650619:
			return -1266863668;
		case -1999198818:
			return -2078767648;
		case -403470324:
			return -852553462;
		case -925223936:
			return -80004868;
		case -1547438906:
			return 1813208211;
		case -635239558:
			return 836323303;
		case -2026265047:
			return 153881023;
		case -586898625:
			return -1256798240;
		case 937246805:
			return 2118089359;
		case 1593035738:
			return -1537586382;
		case 861505058:
			return 1440692746;
		case 687445866:
			return 697143532;
		case 1705182311:
			return 281128160;
		case -78273782:
			return 1854519167;
		case -819697512:
			return -1376299681;
		case -247265944:
			return -1955947684;
		case -1265030920:
			return 1361788230;
		case 2024948086:
			return 1974379573;
		case 1696286663:
			return 545109431;
		case -1342159303:
			return 1275638003;
		case -1154406788:
			return 2083573823;
		case 2030804811:
			return 1235275977;
		case 1230359523:
			return 892601357;
		case -1038436471:
			return 1224695367;
		case 96930969:
			return 648301150;
		case -1180427609:
			return -1597490733;
		case 2119038574:
			return 2000205872;
		case 43825738:
			return -1428527735;
		case 2145697477:
			return 170010697;
		case -1261814606:
			return -742726637;
		case 107013696:
			return -1714171692;
		case 1066034872:
			return -103101636;
		case 36009259:
			return -1999094324;
		case -1599683008:
			return 1724200240;
		case -1693870200:
			return 237935328;
		case 1072019803:
			return 120848852;
		case 1074477367:
			return -868094182;
		case -85890205:
			return -887362763;
		case -727455979:
			return -847714194;
		case -1667789645:
			return 1756765331;
		case -1924405794:
			return -813071670;
		case 1861665605:
			return -1900569233;
		case -526169133:
			return 1688250187;
		case 2120708491:
			return -1262715164;
		case 900144280:
			return 2010625508;
		case 1133837220:
			return -136225010;
		case 1702024301:
			return -225011104;
		case -1604180548:
			return -1882436593;
		case -683592019:
			return -757978903;
		case 337109765:
			return 1909854428;
		case -619132373:
			return 1592694494;
		case 1544366970:
			return 981469777;
		case -1441144351:
			return 1064693514;
		case -1717674545:
			return -1365665739;
		case 1825358734:
			return 1577022605;
		case 1138427579:
			return 381495209;
		case -1720251851:
			return 3032834;
		case 506887890:
			return -1722101672;
		case 766293155:
			return -189605757;
		case 2147082926:
			return 863391233;
		case -390136947:
			return -952011226;
		case 1104566530:
			return -356470463;
		case -1142861801:
			return -1750687713;
		case -417416199:
			return -272192064;
		case -1460773772:
			return 1935859332;
		case 1476007840:
			return -1898310680;
		case -1616287563:
			return 885568364;
		case -127412252:
			return -1540355548;
		case -1881155818:
			return -601560591;
		case -955237712:
			return -370362766;
		case -647020346:
			return -1698261864;
		case -1846319726:
			return -670301166;
		case 1007570567:
			return -302057902;
		case 1029339151:
			return 1257620801;
		case -1424767799:
			return 821735821;
		case -217135948:
			return -769035812;
		case -156439156:
			return -1824684932;
		case 1344011125:
			return 1589592948;
		case 1772321403:
			return -1331210307;
		case -1230516683:
			return 122449722;
		case 594040097:
			return -1784502482;
		case 1883159941:
			return -1943445834;
		case -1028075925:
			return -635244104;
		case 84224102:
			return -1427377767;
		case 1496579364:
			return -2055655009;
		case -1896838685:
			return -1293672675;
		case -420599285:
			return -1179079660;
		case 478986344:
			return 805526368;
		case 917402668:
			return -235714362;
		case -914712122:
			return -1678164;
		case -598917269:
			return -977833913;
		default:
			break;
	}
	return 0;
}

bool func_1652(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_1653(int iParam0, int iParam1)
{
	if (!func_1326(iParam0, 2))
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

void func_1654(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_1801(uParam0, 1))
	{
		func_1802(uParam0, 1);
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

int func_1655(int iParam0)
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

bool func_1656(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1657(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (func_1465(iVar1, 160827531) || func_988(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
}

void func_1658(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(&(uParam0->f_1[iVar0]), -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
}

void func_1659(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_988(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
}

int func_1660(int iParam0)
{
	func_1464(&uVar1, 9044914, iParam0, 0, 0, 0);
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

bool func_1661(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_988(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

bool func_1662(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

int func_1663(int iParam0, int iParam1, int iParam2)
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

void func_1664(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iParam2, -1527414429)) && !func_1465(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0]->f_1 == 1530758430 || uParam0->f_1[iVar0]->f_1 == 1334603721) && func_1465(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0]->f_1 == 1530758430)
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_1466(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			uParam0->f_1[iVar0]->f_1 = -1539589426;
			func_1466(iVar0, iParam3);
		}
	}
}

void func_1665(var uParam0, bool bParam1, int iParam2, int iParam3)
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
		func_1466(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2]->f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = &uParam0->f_1[iVar0];
		if (func_1465(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2]->f_1 = -2081918609;
			func_1466(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = &uParam0->f_1[iVar0];
			if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_988(iVar1))
			{
				uParam0->f_1[iParam2]->f_1 = -2081918609;
				func_1466(iParam2, iParam3);
			}
		}
	}
}

void func_1666(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 16;
	func_1466(iVar0, iParam3);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_1466(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_1466(iVar0, iParam3);
			func_1480(uParam0, 0, &(uParam0->f_1[iVar0]), iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iParam2, -985549034))
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
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iParam2, -1527414429)) && !func_1465(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
}

void func_1667(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_1466(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && !func_1465(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 13;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 25;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iParam2, 675650051))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
}

bool func_1668(int iParam0)
{
	return &Global_1952637->f_1675.f_1[func_1287(iParam0, 1)] != &Global_1952637->f_83[func_1287(iParam0, 1)];
}

void func_1669(var uParam0, int iParam1)
{
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam1);
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_1466(iVar0, iParam1);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_1466(iVar0, iParam1);
	}
}

void func_1670(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_1293() == 24043185)
	{
		iVar3 = 1;
	}
	if (func_1293() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_988(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_1294(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1466(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_1466(iVar0, iParam3);
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iParam2, -1473580422))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_1465(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
		}
		else if (func_1663(&(uParam0->f_1[iVar0]), iVar3, -2081918609) != -1)
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
		if (func_988(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_1465(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0]->f_1 = -2081918609;
				func_1466(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0])
	{
		if (func_988(iVar1) == 1868067663 && func_1465(iParam2, -1016441646))
		{
			func_1803(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_1466(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_988(&(uParam0->f_1[iVar0])))
	{
		func_1466(16, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iParam2, -1650340550))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_988(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1466(iVar0, iParam3);
		}
	}
}

void func_1671(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_1293() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_988(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_1294(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1466(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_1465(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_1677(uParam0, iParam3, 1, 0);
		}
		else if (func_1465(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
	func_1466(iVar0, iParam3);
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iVar1, 1090938458)) && func_1465(iParam2, 475297062))
	{
		func_1803(uParam0, iVar0, iParam3);
	}
}

void func_1672(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	func_1466(36, iParam2);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
	if (func_1293() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0] = func_1294(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1466(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0] && func_1465(iVar1, 353024991))
	{
		func_1803(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_988(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
}

void func_1673(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_988(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_988(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0]->f_1 != 1155669136)
			{
				uParam0->f_1[iVar0]->f_1 = 1155669136;
				func_1466(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1466(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_1465(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_1677(uParam0, iParam3, 1, 0);
		}
		else if (func_1465(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
}

void func_1674(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_1803(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam2);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_1465(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_1677(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_1466(iVar0, iParam2);
		}
	}
}

void func_1675(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = -2081918609;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_1465(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (912453393 == func_988(iVar1) && uParam0->f_1[iVar0]->f_1 != -2081918609)
		{
			uParam0->f_1[iVar0]->f_1 = -2081918609;
			func_1466(iVar0, iParam3);
		}
	}
}

void func_1676(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_1465(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam3);
	}
}

void func_1677(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam1);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam1);
	}
	iVar0 = 38;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_988(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1466(iVar0, iParam1);
	}
}

bool func_1678(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1679(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_722(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_1804(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_1680(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_718(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_1681(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1805(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1807(func_1806(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1808(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_1682(int iParam0, struct<17> Param1)
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

bool func_1683(int iParam0)
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

bool func_1684(int iParam0)
{
	if (iParam0 > 3)
	{
		return false;
	}
	if (iParam0 < 0)
	{
		return false;
	}
	return true;
}

int func_1685(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1317351007;
		case 1:
			return -500478573;
		case 2:
			return -806573802;
		case 3:
			return -1109949204;
		default:
			break;
	}
	return -1060513333;
}

int func_1686(struct<4> Param0, int iParam4, int iParam5, bool bParam6)
{
	Var0.f_9 = -1591664384;
	if (func_1809(Param0, iParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1687()
{
	return _0x603ac35fd4602c76(Global_1139381->f_8);
}

int func_1688(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (iParam0 == Global_1139381->f_11.f_1562[iVar0]->f_2)
		{
			return &(Global_1139381->f_11.f_1562[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

int func_1689(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 2)
	{
		bVar0 = func_1810() == true;
	}
	else if (iParam2 == 1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam3 != -1)
	{
		bVar1 = true;
	}
	if (!func_1492(iParam0))
	{
		func_1811(uParam1);
		return 0;
	}
	*uParam1 = &Global_1139381->f_11.f_1562[func_1493(iParam0, 1)];
	uParam1->f_2 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_2;
	uParam1->f_1 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_1;
	uParam1->f_8 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_3;
	uParam1->f_16 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_4;
	uParam1->f_32 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_7;
	uParam1->f_33 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_8;
	if (!func_721(uParam1->f_2, 0))
	{
		func_1811(uParam1);
		return 0;
	}
	bVar2 = true;
	if (!func_1492(*uParam1))
	{
		func_1811(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_1693())
		{
			uParam1->f_19 = func_1812(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_5;
			uParam1->f_10 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_6;
			if (func_1684(uParam1->f_19))
			{
				uParam1->f_13 = Global_1139381->f_4796.f_34[uParam1->f_19]->f_1;
			}
			else
			{
				uParam1->f_13 = 0;
			}
		}
		else
		{
			uParam1->f_19 = func_1813(*uParam1);
			iVar3 = func_1685(uParam1->f_19);
			uParam1->f_3 = { func_718(uParam1->f_2, func_717(bVar2), iVar3, bVar2) };
			uParam1->f_21 = func_1814(uParam1);
			uParam1->f_13 = func_1815(uParam1);
			uParam1->f_15 = func_1816(uParam1);
			uParam1->f_20 = func_1817(uParam1);
			uParam1->f_22 = func_1818(uParam1);
			uParam1->f_14 = func_1819(uParam1);
			uParam1->f_23 = func_1820(uParam1);
			uParam1->f_24 = func_1821(uParam1);
			uParam1->f_25 = func_1822(uParam1);
			uParam1->f_26 = func_1823(uParam1);
			uParam1->f_27 = func_1824(uParam1);
			uParam1->f_29 = func_1825(uParam1);
			uParam1->f_30 = func_1826(uParam1);
			uParam1->f_31 = func_1827(uParam1);
			iVar4 = -915411861;
			if (uParam1->f_27)
			{
				iVar4 = uParam1->f_28;
			}
			if (!uParam1->f_20)
			{
				uParam1->f_17 = func_1828((Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_2, iVar4);
			}
			else
			{
				uParam1->f_17 = func_1829(uParam1->f_13, iVar4);
			}
			uParam1->f_18 = func_1828((Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_2, -570078785);
			if (bVar1)
			{
				uParam1->f_26 = 0;
				uParam1->f_27 = 0;
				if (uParam1->f_23)
				{
					uParam1->f_23 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_25)
				{
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_20)
				{
					uParam1->f_20 = uParam1->f_13 >= iParam3;
				}
				uParam1->f_13 = iParam3;
			}
			if (uParam1->f_20)
			{
				uParam1->f_9 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_3;
				uParam1->f_10 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_6;
			}
			else
			{
				func_1830(uParam1);
			}
		}
	}
	else
	{
		iVar5 = network_get_player_from_gamer_handle(&(Global_1940311->f_1433.f_8));
		uParam1->f_9 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_3;
		uParam1->f_10 = (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_6;
		if (_network_is_player_index_valid(iVar5))
		{
			uParam1->f_19 = func_1831(*uParam1, iVar5);
			if (func_1684(uParam1->f_19))
			{
				vVar6 = { *(*Global_1145091)[iVar5]->f_10[uParam1->f_19] };
				uParam1->f_13 = vVar6.y;
				uParam1->f_21 = func_1832(&(vVar6.f_2), 1);
			}
		}
	}
	uParam1->f_11 = func_1833(uParam1);
	uParam1->f_12 = func_1834(*(Global_1139381->f_11.f_1562[func_1493(iParam0, 1)]), uParam1);
	return 1;
}

bool func_1690(var uParam0)
{
	return uParam0->f_1 == 304794100;
}

void func_1691()
{
	_0xae4bcc79c587ebbf(&(Global_1296859->f_154[&Global_1296859]), 0f, 0);
	_0x4d1699543b1c023c(&(Global_1296859->f_154[&Global_1296859]), 0f);
	_0xb783f75940b23014(&(Global_1296859->f_154[&Global_1296859]), 0f);
	_0x6b5ddfb967e5073d(&(Global_1296859->f_154[&Global_1296859]), 0);
	if (_0xb16223cb7da965f0(&(Global_1296859->f_154[&Global_1296859])))
	{
		_0xae637bb8ef017875(&(Global_1296859->f_154[&Global_1296859]), 1);
	}
	_0x95ee1dee1dcd9070(&(Global_1296859->f_154[&Global_1296859]), 0);
}

void func_1692(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1697(&Var0, iParam0);
}

bool func_1693()
{
	return (func_392(0) && func_392(5));
}

void func_1694(int iParam0)
{
	iVar0 = func_1835(iParam0);
	func_1836(iVar0);
}

void func_1695(var uParam0)
{
	func_1837(Global_1940311->f_1433.f_4189.f_37[func_1493(*uParam0, 1)], uParam0);
	bVar0 = func_1838(*uParam0);
	iVar1 = _0x96fd694fe5be55dc(-1641598689);
	if (bVar0)
	{
		if (iVar1 == 756463805)
		{
			func_1839(*uParam0);
			return;
		}
		else
		{
			func_1840(&(Global_1940311->f_1433.f_4189.f_1936), *uParam0);
			func_1841(*uParam0);
		}
	}
}

void func_1696(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = func_1842(iParam0, 1);
	if (!func_1498(iVar0, uParam1, 0, -1))
	{
		func_1811(uParam1);
	}
	func_1843(iParam0, Global_1940311->f_1433.f_4189.f_1579[iParam0], *uParam1);
	if (bParam2 && func_1844(iParam0))
	{
		func_1845(&(Global_1940311->f_1433.f_4189.f_1985), uParam1, iParam0);
	}
}

void func_1697(var uParam0, int iParam1)
{
	Global_1139381->f_4621.f_36[iParam1] = *uParam0;
	Global_1139381->f_4621.f_36[iParam1]->f_1 = uParam0->f_13;
}

void func_1698(var uParam0, int iParam1)
{
	if (!func_1492(*uParam0))
	{
		return;
	}
	if (!func_1846(uParam0->f_13))
	{
		return;
	}
	if (func_1690(uParam0))
	{
		func_1847(uParam0);
	}
	iVar0 = func_1835(iParam1);
	iVar1 = ((Global_1139381->f_11.f_1562[func_1493(*uParam0, 1)])->f_9[uParam0->f_13])->f_10;
	func_1848(iVar0, iVar1);
}

bool func_1699(int iParam0)
{
	fVar0 = (func_1849(iParam0) - _0xdf66a37936d5f3d9(iParam0));
	return fVar0 <= 1f;
}

bool func_1700(int iParam0, int iParam1, float fParam2)
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
	_set_attribute_core_value(iParam0, func_1850(iParam1), ceil(fParam2));
	return true;
}

void func_1701(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1077(2);
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

void func_1702(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_1851(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_1852(iParam1), fParam2, -1);
	}
}

void func_1703(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_1077(2);
	}
	uVar0 = Global_1296859->f_21;
	func_1853(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1854(iParam0, uVar0, iParam3);
	}
}

char* func_1704()
{
	return "PlayerRPGCoreDeadEye";
}

char* func_1705()
{
	return "PlayerRPGCore";
}

bool func_1706()
{
	if (is_first_person_aim_cam_active())
	{
		if (get_current_ped_weapon(Global_34, &iVar0, true, 0, false))
		{
			if (_is_weapon_sniper(iVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1707(float fParam0, float fParam1)
{
	fVar0 = (fParam0 / fParam1);
	fVar1 = (-1f * (fVar0 - 1f));
	if (!animpostfx_is_running("PlayerHealthLow"))
	{
		animpostfx_play("PlayerHealthLow");
	}
	_0xcab4dd2d5b2b7246("PlayerHealthLow", fVar1);
}

void func_1708()
{
	if (animpostfx_is_running("PlayerHealthLow"))
	{
		_0xc5cb91d65852ed7e("PlayerHealthLow");
	}
}

char* func_1709(int iParam0)
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

void func_1710(int iParam0)
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
	iVar1 = func_1070(2);
	func_1855(to_float((iParam0 * iVar1)), 0);
}

void func_1711(int iParam0)
{
	iVar1 = Global_1146212->f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1146212->f_47689.f_1[iVar2];
		iVar3 = func_1856(iVar0, 1);
		if (&Global_1146212->f_35859.f_919[iVar3] == iParam0)
		{
			func_1836(iVar0);
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

void func_1712(int iParam0)
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
	iVar1 = func_1072(2);
	func_1857(to_float((iParam0 * iVar1)), 0);
}

void func_1713(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_1071(2);
	func_1502(to_float((iParam0 * iVar0)), 0, bParam1);
}

void func_1714(int iParam0, bool bParam1, bool bParam2)
{
	func_1506(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_1715(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_1858(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1716(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (func_1517(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1091(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_1536(iParam0, 1);
}

void func_1717(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_1093(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_1522(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_1726(iVar0))
	{
		if (bParam2 || (!has_ped_got_weapon(Global_34, iVar0, 0, false) && func_1144(iParam0, 0, 0, 0) == 0))
		{
			if (func_23() == -1)
			{
				func_1523(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_1548(iParam0, iParam1, 0, 0, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1718(int iParam0, int iParam1)
{
	if (func_1465(iParam0, 58855631))
	{
		func_1760(iParam0, -915411861, iParam1, 1);
	}
}

bool func_1719()
{
	if (((((!_0x3ab6c7b0bb0df4b1(Global_34, -1) && !is_ped_using_any_scenario(Global_34)) && !func_1859(Global_34, 1369124074)) && !func_1859(Global_34, 713668775)) && !_0xec7e480ff8bd0bed(Global_34)) && !is_ped_in_any_vehicle(Global_34, false))
	{
		return true;
	}
	return false;
}

int func_1720(int iParam0, int iParam1)
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

bool func_1721(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1722(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

void func_1723(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3643[iVar1];
	set_bit(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_1724(int iParam0)
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
			func_1860(1);
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
			func_1861(1);
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1861(2);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1861(3);
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
			func_1862(1);
			break;
		case 33:
			func_1863(1);
			break;
		case 34:
			func_1864(1);
			break;
		case 35:
			break;
		case 36:
			func_1865(0);
			break;
		case 37:
			func_1866(0);
			break;
		case 38:
			func_1867(0);
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
			if (func_1868() && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_1575("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_1528(677, 0);
			break;
		case 3:
			if (func_1868() && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_1575("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_1528(678, 0);
			break;
		case 4:
			if (func_1868() && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_1575("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_1528(679, 0);
			break;
		case 5:
			if (func_1868() && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_1575("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_1528(680, 0);
			break;
		case 23:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			break;
		case 47:
			if (func_23() == -1)
			{
				if (!func_1536(1013902307, 1))
				{
					func_397(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_1536(1013902307, 1))
				{
					func_397(1013902307, 1, 752097756);
				}
				if (!func_1536(142640135, 1))
				{
					func_397(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_1536(786809402, 1))
				{
					func_397(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_1536(786809402, 1))
				{
					func_397(786809402, 1, 752097756);
				}
				if (!func_1536(-518019409, 1))
				{
					func_397(-518019409, 1, 752097756);
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
			_0xa63fcad3a6fec6d2(get_player_index(), true);
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

bool func_1725(int iParam0)
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

bool func_1726(int iParam0)
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

bool func_1727(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

void func_1728(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_1869(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

void func_1729(int iParam0)
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
	iVar2 = func_1592();
	func_1870(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_34, sVar1, iVar2);
}

int func_1730(int iParam0)
{
	if (func_1145(iParam0))
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

bool func_1731()
{
	return false;
}

bool func_1732(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1733(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1734(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_1518(49))
			{
				if (!func_1518(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_1518(50))
			{
				if (!func_1518(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_1735(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1736(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_1871(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1872(iParam0))
	{
		return false;
	}
	if (func_1873(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_1744(iParam0, 1)) || func_1348(32768))
	{
		if (!func_1744(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_1874())
	{
		return false;
	}
	return true;
}

void func_1737(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_1738(int iParam0, bool bParam1, int iParam2)
{
	if (func_23() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_1536(1811977508, 1))
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
			if (func_721(iVar25, 0) && func_1465(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1739(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		if (bParam3)
		{
			func_1875(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1749(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1740(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1876() || func_1877())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1749(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_1749(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, 752097756);
		func_461(func_529(1644987397), iVar1);
	}
}

bool func_1741(int iParam0, int iParam1)
{
	if (!func_721(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_1337(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1277("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1270(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1727(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1273(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1273(iVar1);
	}
	return false;
}

bool func_1742(int iParam0)
{
	if (!func_721(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_988(iParam0);
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
	iVar1 = func_1643(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_1878(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_1879(iParam0);
	iVar2 = func_1878(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_1743(int iParam0)
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

bool func_1744(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

void func_1745(var uParam0, int iParam1)
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

int func_1746(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1880(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_1881(uParam2, iParam0, Var1);
	return 1;
}

char* func_1747(int iParam0)
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

int func_1748(int iParam0)
{
	if (!func_1882(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_1749(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1883(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_1750()
{
	return !&Global_1913504;
}

void func_1751(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == iParam3) && Global_1913504->f_4[iVar0]->f_4 == bParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
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
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = iParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = bParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

char* func_1752(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1753(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_1754(int iParam0)
{
	if (func_1465(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_1465(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_1465(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_1465(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_1465(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_1465(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_1465(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_1465(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_1465(iParam0, -352095726) || func_1465(iParam0, -2014783736)) || func_1465(iParam0, -545064757)) || func_1465(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_1755(int iParam0)
{
	if (func_1465(iParam0, -189374246))
	{
		if (((func_1884(iParam0, -1305775593) || func_1884(iParam0, 1384151091)) || func_1884(iParam0, 2075388272)) || func_1884(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_1465(iParam0, -753854379) || func_1465(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_1756(int iParam0)
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

int func_1757(int iParam0)
{
	if (!func_721(iParam0, 0))
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

int func_1758(int iParam0)
{
	iVar0 = func_1885(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1886(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_1887(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_1888(iVar14))
			{
				func_1889(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_1889(iVar11);
	}
	return 0;
}

bool func_1759(int iParam0, int iParam1)
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

int func_1760(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_721(iParam0, 0) && !func_1326(func_1325(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1761(int iParam0, int iParam1)
{
	iVar0 = func_1890(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_1762(int iParam0, char* sParam1)
{
	if (!func_721(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_1891(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_1892(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_1893(iParam0), 128);
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

char* func_1763(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_1764(int iParam0)
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

bool func_1765(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1894(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_1766(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1895(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1896(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1897(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1898(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1899(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_1900(iVar0);
	uParam1->f_2 = 1060782978;
	_datafile_get_hash(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	_datafile_get_int(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	_datafile_get_int(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	_datafile_get_int(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	_datafile_get_int(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	_datafile_get_int(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

bool func_1767(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_23() == 0)
	{
		return func_1901(iParam0);
	}
	return iParam0 <= func_1902();
}

int func_1768(int iParam0, int iParam1, int iParam2)
{
	if (Global_1248240->f_8903.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 1393257577)
	{
		iVar0 = Global_1248240->f_8903.f_99;
		iVar1 = Global_1248240->f_8903.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (&Global_1248240->f_8903.f_16[iVar0] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1248240->f_8903.f_99;
	Global_1248240->f_8903.f_16[iVar2] = iParam0;
	Global_1248240->f_8903.f_16[iVar2]->f_5 = iParam2;
	Global_1248240->f_8903.f_16[iVar2]->f_6 = iParam1;
	Global_1248240->f_8903.f_97++;
	Global_1248240->f_8903.f_99 = (Global_1248240->f_8903.f_99 + 1 % 10);
	return iVar2;
}

int func_1769(bool bParam0, bool bParam1, bool bParam2)
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

int func_1770(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_1903(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_1904(iParam0))
	{
		return func_1906(func_1905(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_1907(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

struct<16> func_1771(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_718(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_722(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_1055() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1772(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_1773(int iParam0)
{
	_0x748c5f51a18cb8f0(0);
	if (!func_1772(iParam0))
	{
		return;
	}
	func_1908(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_853(iVar0))
		{
			if (func_1910(func_1909(iVar0, 1, 1)) == iParam0)
			{
				func_1911(iVar0, 0);
				func_1912(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_1913(iVar1))
		{
			if (func_1914(iVar1) == iParam0)
			{
				func_1915(iVar1, 0);
			}
		}
		iVar1++;
	}
	_0x748c5f51a18cb8f0(1);
}

void func_1774(var uParam0)
{
	func_1916(uParam0, 0);
}

bool func_1775()
{
	switch (Global_1940258->f_38)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
		case 1652431022:
			return true;
		default:
			break;
	}
	return false;
}

int func_1776()
{
	if (func_1625(16))
	{
		iVar0 = Global_1050050->f_12;
	}
	else
	{
		iVar0 = func_1917();
	}
	return iVar0;
}

struct<8> func_1777(int iParam0)
{
	if (is_string_null_or_empty((*Global_1050984)[iParam0]))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, _get_label_text(&cVar0), 64);
		return cVar0;
	}
	return *(*Global_1050984)[iParam0];
}

int func_1778(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_1779(iParam0, iParam1, iParam2, bParam3, bParam4);
}

int func_1779(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			switch (iParam0)
			{
				case 0:
					return -275684858;
				case 1:
					return -1561147190;
				case 2:
					return -736318691;
				case 3:
					return 158864851;
				case 4:
					return 923463928;
				case 5:
					return -317694716;
				case 6:
					return 461388259;
				case 7:
					return 1811916478;
				default:
					break;
			}
			return 1105014447;
		}
		if (iParam1 == iParam0)
		{
			return 1765299542;
		}
	}
	else if (bParam4)
	{
		if (iParam2 < 2)
		{
			return 1105014447;
		}
		else
		{
			return 1765299542;
		}
	}
	return -1031763995;
}

var func_1780()
{
	return Global_1102219->f_26.f_3341;
}

bool func_1781()
{
	return &Global_1048583;
}

float func_1782(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

char* func_1783(char* sParam0)
{
	return _0xd8402b858f4ddd88(sParam0, get_length_of_literal_string(sParam0));
}

void func_1784(var uParam0)
{
	sVar0 = func_1918(uParam0->f_159, uParam0->f_160);
	sVar1 = func_1919(uParam0->f_159, uParam0->f_160);
	sVar2 = func_1920(uParam0->f_159, uParam0->f_160);
	sVar3 = func_1921();
	if (!is_string_null_or_empty(sVar0))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat1", sVar0);
		_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar1))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat2", sVar1);
		_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar2))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat3", sVar2);
		_databinding_add_data_int(uParam0->f_1, "Stat3Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar3))
	{
		_databinding_add_data_string(uParam0->f_1, "StatRounds", sVar3);
		_databinding_add_data_int(uParam0->f_1, "StatRoundsColor", 1105014447);
	}
	_databinding_add_data_int(uParam0->f_1, "HeadingColor", 1105014447);
}

void func_1785(var uParam0, bool bParam1, bool bParam2)
{
	if (func_1616(uParam0->f_159) || func_1609(uParam0->f_159))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat1", "");
		_databinding_add_data_string(uParam0->f_1, "Stat2", "");
	}
	if (!is_bit_set(uParam0->f_159, 0) && !is_bit_set(uParam0->f_159, 17))
	{
		if (!is_bit_set(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				_databinding_add_data_string(uParam0->f_1, "Stat0", _get_label_text("UIC_LDR_RNDW"));
				_databinding_add_data_int(uParam0->f_1, "Stat0Color", 1105014447);
			}
		}
		_databinding_add_data_string(uParam0->f_1, "Stat1", func_1918(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
	}
	else if (func_1609(uParam0->f_159))
	{
		if (!is_bit_set(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				_databinding_add_data_string(uParam0->f_1, "Stat2", _get_label_text("UIC_LDR_RNDW"));
				_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
			}
		}
	}
	else if (!is_bit_set(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			_databinding_add_data_string(uParam0->f_1, "Stat1", _get_label_text("UIC_LDR_RNDW"));
			_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
		}
	}
	if (!func_1609(uParam0->f_159))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat2", func_1919(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
	}
	if (!is_bit_set(uParam0->f_159, 3) || is_bit_set(uParam0->f_159, 0))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat3", func_1920(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat3Color", 1105014447);
	}
	_databinding_add_data_int(uParam0->f_1, "HeadingColor", 1105014447);
}

int func_1786()
{
	return 1;
}

void func_1787(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	if (Global_1940144->f_111)
	{
		func_1922(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_1425(uParam0, uParam1);
		iVar2 = player_id();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_1598(&((*uParam1)[iVar0]->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_1599(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", func_1600(uParam1, iVar0));
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar3 = iVar2 == (*uParam1)[iVar0]->f_14;
				iVar4 = func_1601(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_1602(uParam0, uParam1, iVar0, bParam3, iVar4);
					}
				}
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Gamertag", &((*uParam1)[iVar0]->f_14.f_1));
				_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "GamertagColor", iVar4);
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "CrewTag", func_1603());
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Rank", func_1604((*uParam1)[iVar0]->f_14));
				if (!bParam4)
				{
					if (func_1605())
					{
						if (func_1606((*uParam1)[iVar0]->f_14))
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", true);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", func_1607((*uParam1)[iVar0]->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_1611((*uParam1)[iVar0], uParam0->f_159);
				fVar6 = func_1610((*uParam1)[iVar0], uParam0->f_159);
				sVar7 = func_1615((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
				fVar8 = func_1923((*uParam1)[iVar0]);
				if ((*Global_1049283)[0]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563(fVar5, 0));
				}
				if ((*Global_1049283)[1]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563(fVar6, 0));
				}
				if ((*Global_1049283)[2]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _0x2b6846401d68e563(sVar7, 0));
				}
				if ((*Global_1049283)[3]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "StatRounds", _0x2b6846401d68e563(fVar8, 0));
				}
				_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && (*uParam1)[iVar0]->f_13)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", iVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

int func_1788()
{
	return Global_1139381->f_5079.f_325;
}

struct<16> func_1789(var uParam0, int iParam1)
{
	if (!network_is_player_active(iParam1))
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_1791(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_1792(iVar16, 1);
			break;
		case 2:
			func_1792(iVar16, 1);
			func_1924(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

void func_1790(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_1793(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

int func_1791(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (!network_is_player_active(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_1925(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			network_handle_from_player(int_to_playerindex(iParam1), &uVar3);
			if (!network_is_handle_valid(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_1926(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_1927(iParam1, iParam2, 0);
						return 1;
					}
					func_1928(iParam1, iParam2, iVar1);
					func_1927(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_1929(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1927(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_1927(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_1927(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_1929(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1927(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_1927(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_1929(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1927(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_1792(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = func_1925(iParam0, iParam1);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_1928(iParam0, iParam1, 0);
			func_1927(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_1929(iParam0, iParam1);
			if (iVar2 != 0)
			{
				texture_download_release(iVar2);
			}
			func_1927(iParam0, iParam1, 0);
			break;
	}
}

void func_1793(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_1930(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_1930(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
					{
					}
					else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
					{
					}
					else
					{
						_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
					}
					iVar3++;
				}
				func_1931(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_1930(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
						{
						}
						else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
						{
						}
						else
						{
							_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
						}
						iVar3++;
					}
					func_1931(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

int func_1794(int iParam0)
{
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = iParam0;
	iVar0 = Global_1952637->f_2843.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 || iVar0);
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = iVar0;
	Global_1952637->f_2843.f_1++;
	return iVar0;
}

void func_1795(int iParam0, int iParam1)
{
	if (!func_1932(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20 && func_1465(&(Global_1952637->f_1675.f_1[iVar0]), 343781202))
	{
		iVar1 = func_1933(&(Global_1952637->f_1675.f_1[iVar0]), 1108822547);
		if (1388798186 == func_988(iVar1))
		{
			func_1934(10, iParam1);
		}
	}
	func_1934(iVar0, iParam1);
}

bool func_1796(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (_0x44b3a36933ac009c(&uVar2, uParam0, -480981886))
	{
		uParam1->f_17 = uVar2;
	}
	else if (!bParam2)
	{
		return false;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, -925732223))
	{
		uParam1->f_3 = iVar0;
	}
	else
	{
		uParam1->f_3 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 1330140418))
	{
		uParam1->f_4 = iVar0;
	}
	else
	{
		uParam1->f_4 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 2055530431))
	{
		uParam1->f_5 = iVar0;
	}
	else
	{
		uParam1->f_5 = 0;
	}
	if (_0xb2b42607f7867576(&uVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = uVar4;
	}
	else
	{
		uParam1->f_13 = 0f;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_1935(iVar0);
	}
	if (_0xb2b42607f7867576(&uVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = uVar4;
	}
	else
	{
		uParam1->f_15 = 0f;
	}
	if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 939944711))
	{
		uParam1->f_6 = uVar3;
	}
	else
	{
		uParam1->f_6 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 917806888))
	{
		uParam1->f_7 = iVar0;
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = uVar3;
		}
		else
		{
			uParam1->f_8 = 0;
		}
		if (_0xb2b42607f7867576(&uVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = uVar4;
		}
		else
		{
			uParam1->f_14 = 0f;
		}
	}
	else
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_14 = 0f;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 333547134))
	{
		uParam1->f_9 = iVar0;
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 1223307134))
		{
			uParam1->f_10 = uVar3;
		}
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 915180227))
		{
			uParam1->f_11 = uVar3;
		}
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, -1231156504))
		{
			uParam1->f_12 = uVar3;
		}
	}
	else
	{
		uParam1->f_9 = 0;
		uParam1->f_10 = 0;
		uParam1->f_11 = 0;
		uParam1->f_12 = 0;
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = 459292749;
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	_0x91ded5dd64bb2691(uParam0);
	if (_0x52fc26d2d2fc2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
	}
	return true;
}

void func_1797(var uParam0, bool bParam1)
{
	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	iVar0 = func_1936(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	iVar18 = *uParam0;
	Var19 = { func_718(889965687, func_717(1), 1034665895, 1) };
	if (bParam1 && iVar18 != func_1513(Var19, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_1937(func_718(iVar18, Var19, iVar0, 1), 1, 0) };
	if (Var1.f_16 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_1938(Var1.f_16);
}

void func_1798(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	_set_ped_overlay_textures(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_1799(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && ((*uParam1)[(iParam2 - 1)])->f_1 > (*uParam1)[iParam2]->f_1)
	{
		func_1939(uParam0, uParam1);
	}
	else
	{
		func_1940(uParam0, (*uParam1)[iParam2]);
	}
}

void func_1800(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		_set_ped_overlay_textures(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		_set_ped_overlay_palette(*uParam0, uParam1->f_2, uParam1->f_9);
		_set_ped_overlay_colour(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		_0xf2ea041f1146d75b(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		_0x057c4f092e2298be(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	_sep_ped_overlay_variation(*uParam0, uParam1->f_2, uParam1->f_6);
	_set_ped_overlay_opacity(*uParam0, uParam1->f_2, uParam1->f_13);
}

bool func_1801(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1802(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1803(var uParam0, int iParam1, int iParam2)
{
	if (func_1465(&(uParam0->f_1[iParam1]), 343781202))
	{
		func_1469(uParam0, &(uParam0->f_1[iParam1]));
	}
	else
	{
		uParam0->f_1[iParam1] = &Global_1952637->f_83[iParam1];
		uParam0->f_1[iParam1]->f_1 = 0;
		func_1466(iParam1, iParam2);
	}
}

bool func_1804(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_1941((*uParam0)[iVar0]))
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
				*(*uParam0)[iVar0] = { func_1055() };
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

bool func_1805(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_1942(uParam1->f_8, iParam0, iVar0, 2048) || func_1942(uParam1->f_8, iParam0, iVar0, 32768)) || func_1942(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_1942(uParam1->f_8, iParam0, iVar0, 4) || func_1942(uParam1->f_8, iParam0, iVar0, 256)) || func_1942(uParam1->f_8, iParam0, iVar0, 65536)) || func_1942(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_1942(uParam1->f_8, iParam0, iVar0, 1) || func_1942(uParam1->f_8, iParam0, iVar0, 8)) || func_1942(uParam1->f_8, iParam0, iVar0, 65536)) || func_1942(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_1942(uParam1->f_8, iParam0, iVar0, 1) || func_1942(uParam1->f_8, iParam0, iVar0, 16)) || func_1942(uParam1->f_8, iParam0, iVar0, 2)) || func_1942(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_1942(uParam1->f_8, iParam0, iVar0, 8) || func_1942(uParam1->f_8, iParam0, iVar0, 4096)) || func_1942(uParam1->f_8, iParam0, iVar0, 256)) || func_1942(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_1806(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_1807(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_1943(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_1943(iParam1, 2, 0, 0);
	return -1;
}

int func_1808(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_1943(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_1809(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_699(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_1810()
{
	return Global_1940311->f_1433.f_4189.f_2083;
}

void func_1811(var uParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1830(&Var0);
	*uParam0 = { Var0 };
}

int func_1812(int iParam0)
{
	if (!func_1693())
	{
		return -1;
	}
	if (!func_1492(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&Global_1139381->f_4796.f_34[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1813(int iParam0)
{
	if (!func_1492(iParam0))
	{
		return -1;
	}
	iVar2 = func_1944(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_1685(iVar0);
		if (func_1945(iVar2, iVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1814(var uParam0)
{
	if (!func_1946(*uParam0))
	{
		return false;
	}
	if (func_1817(uParam0))
	{
		return true;
	}
	return _unlock_is_unlocked(uParam0->f_2);
}

int func_1815(var uParam0)
{
	if (!func_1492(*uParam0))
	{
		return -1;
	}
	if (!func_721(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!_0xb881ca836cc4b6d4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar6 = func_1947(iVar1);
		Var2 = { func_718(iVar6, uParam0->f_3, 1635590003, 1) };
		if (!_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar0 = iVar1;
			iVar1++;
		}
	}
	return iVar0;
}

int func_1816(var uParam0)
{
	if (uParam0->f_13 >= 2)
	{
		return 0;
	}
	if (!func_1492(*uParam0))
	{
		return -1;
	}
	if (!func_721(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!_0xb881ca836cc4b6d4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar7 = func_1947(iVar2);
		Var3 = { func_718(iVar7, uParam0->f_3, 1635590003, 1) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
		}
		else
		{
			iVar8 = func_1948(iVar2);
			iVar0 = func_1297(1412640604, Var3, iVar8, 1, 0, 0);
			iVar1 = (iVar1 + iVar0);
			iVar2++;
		}
	}
	return iVar1;
}

int func_1817(var uParam0)
{
	return func_1949(uParam0->f_2, 1);
}

int func_1818(var uParam0)
{
	if (!func_1492(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_1495(iVar0, 1) == uParam0->f_2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1819(var uParam0)
{
	return uParam0->f_13 >= 2;
}

bool func_1820(var uParam0)
{
	return ((!uParam0->f_14 && uParam0->f_20) && func_1950(uParam0));
}

int func_1821(var uParam0)
{
	return 0;
}

var func_1822(var uParam0)
{
	return (uParam0->f_24 || uParam0->f_23);
}

bool func_1823(var uParam0)
{
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_1951(uParam0)) && func_1952(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1824(var uParam0)
{
	if (uParam0->f_26)
	{
		return false;
	}
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_1951(uParam0)) && func_1953(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1825(var uParam0)
{
	return (((!uParam0->f_20 && func_1951(uParam0)) && !uParam0->f_26) && !uParam0->f_27);
}

int func_1826(var uParam0)
{
	return 0;
}

var func_1827(var uParam0)
{
	return (((uParam0->f_30 || uParam0->f_29) || uParam0->f_26) || uParam0->f_27);
}

int func_1828(int iParam0, int iParam1)
{
	return func_1770(iParam0, iParam1, 1, 0, 1, 0);
}

int func_1829(int iParam0, int iParam1)
{
	iVar0 = func_1947(iParam0 + 1);
	return func_1828(iVar0, iParam1);
}

void func_1830(var uParam0)
{
	uParam0->f_9 = -902468816;
	uParam0->f_10 = 291057091;
}

int func_1831(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return -1;
	}
	if (!func_1492(iParam0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&(*Global_1145091)[iVar1]->f_10[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1832(var uParam0, int iParam1)
{
	return func_643(*uParam0, iParam1);
}

char* func_1833(var uParam0)
{
	return _create_var_string(42, "MP_ABILITY_CARD_DISPLAY_STRING", _create_var_string(0, uParam0->f_8), _create_var_string(2, func_1954(uParam0->f_13)));
}

char* func_1834(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46)
{
	if (!func_1846(uParam46->f_13))
	{
		return "NULL";
	}
	return _create_var_string(0, Param0.f_9[uParam46->f_13]->f_11);
}

int func_1835(int iParam0)
{
	iVar0 = 2;
	iVar0 = (iVar0 + iParam0 * 32);
	iVar0 = (&Global_1296859 + iVar0);
	iVar1 = func_1955(iVar0, 1);
	if (func_1956(iVar1))
	{
		return iVar1;
	}
	return 0;
}

int func_1836(int iParam0)
{
	if (!func_1956(iParam0))
	{
		return 0;
	}
	iVar0 = func_1856(iParam0, 1);
	if (!func_1957(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_1958(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_1959(iParam0, iVar1))
		{
			case 0:
				func_1960(iVar1, iParam0, iVar4);
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
						func_1960(iVar1, iParam0, iVar4);
						func_1961(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_1961(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1962(iVar1, 1);
				func_1963(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_1964(iVar2, 0);
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
			func_1965(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

void func_1837(var uParam0, var uParam1)
{
	_databinding_write_data_string(uParam0->f_2, uParam1->f_11);
	_databinding_write_data_string(uParam0->f_3, uParam1->f_12);
	_databinding_write_data_hash_string(uParam0->f_4, uParam1->f_9);
	_databinding_write_data_hash_string(uParam0->f_5, uParam1->f_10);
	_databinding_write_data_hash_string(uParam0->f_41, func_1966(uParam1->f_1, uParam1->f_13));
	_databinding_write_data_hash_string(uParam0->f_6, *uParam1);
	_databinding_write_data_bool(uParam0->f_7, func_1690(uParam1));
	_databinding_write_data_bool(uParam0->f_34, uParam1->f_22);
	_databinding_write_data_bool(uParam0->f_12, uParam1->f_20);
	_databinding_write_data_bool(uParam0->f_13, !uParam1->f_20);
	_databinding_write_data_bool(uParam0->f_35, func_1967(uParam1));
	_databinding_write_data_bool(uParam0->f_14, !uParam1->f_21);
	_databinding_write_data_bool(uParam0->f_15, uParam1->f_30);
	_databinding_write_data_bool(uParam0->f_16, uParam1->f_29);
	_databinding_write_data_bool(uParam0->f_17, uParam1->f_31);
	_databinding_write_data_string(uParam0->f_18, func_1968(uParam1));
	_databinding_write_data_bool(uParam0->f_19, uParam1->f_24);
	_databinding_write_data_bool(uParam0->f_20, uParam1->f_23);
	_databinding_write_data_bool(uParam0->f_21, uParam1->f_25);
	_databinding_write_data_bool(uParam0->f_22, (!uParam1->f_14 && uParam1->f_20));
	_databinding_write_data_bool(uParam0->f_23, !uParam1->f_14);
	_databinding_write_data_bool(uParam0->f_24, (!uParam1->f_14 && func_1969(4)));
	_databinding_write_data_string(uParam0->f_25, func_1970(uParam1));
	_databinding_write_data_bool(uParam0->f_26, func_1971(uParam1));
	_databinding_write_data_bool(uParam0->f_27, func_1972(uParam1));
	_databinding_write_data_bool(uParam0->f_28, func_1973(uParam1));
	_databinding_write_data_bool(uParam0->f_29, (uParam1->f_31 && func_1973(uParam1)));
	_databinding_write_data_bool(uParam0->f_30, (uParam1->f_25 && func_1973(uParam1)));
	if (uParam1->f_26)
	{
		_databinding_write_data_string(uParam0->f_31, func_327(0));
		_databinding_write_data_string(uParam0->f_32, func_1974(0));
	}
	else
	{
		_databinding_write_data_string(uParam0->f_31, func_327(func_1975(uParam1->f_17)));
		_databinding_write_data_string(uParam0->f_32, func_1974(func_1976(uParam1->f_17)));
	}
	_databinding_write_data_int(uParam0->f_33, uParam1->f_18);
	if (!uParam1->f_21)
	{
		_databinding_write_data_string(uParam0->f_43, func_1977(uParam1->f_16));
	}
	_databinding_write_data_int(uParam0->f_36, uParam1->f_13);
	_databinding_write_data_int(uParam0->f_38, uParam1->f_15);
	_databinding_write_data_int(uParam0->f_40, func_1978(uParam1->f_13));
	_databinding_write_data_bool(uParam0->f_10, uParam1->f_23);
	_databinding_write_data_bool(uParam0->f_11, !uParam1->f_21);
	_databinding_write_data_bool(uParam0->f_8, false);
	_databinding_write_data_bool(uParam0->f_9, false);
}

bool func_1838(int iParam0)
{
	return func_1979() == iParam0;
}

void func_1839(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	Var34.f_7 = 1;
	Var34.f_13 = -1;
	Var34.f_15 = -1;
	Var34.f_16 = -1;
	Var34.f_17 = -1;
	Var34.f_18 = -1;
	Var34.f_19 = -1;
	Var34.f_32 = -1;
	iVar68 = 0;
	while (iVar68 < 3)
	{
		Var0 = { Var34 };
		func_1498(iParam0, &Var0, 2, iVar68);
		func_1980(Global_1940311->f_1433.f_4189.f_1797[iVar68], Var0);
		if (func_1981(iVar68))
		{
			func_1982(&(Global_1940311->f_1433.f_4189.f_2034), Var0);
		}
		iVar68++;
	}
}

void func_1840(var uParam0, struct<16> Param1, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_1837(uParam0, &Param1);
	iVar0 = func_1978(Param1.f_13);
	_databinding_write_data_string(uParam0->f_44, _create_var_string(2, "NET_PLAYER_ABILITY_FOCUS_XP_INFO", Param1.f_15, iVar0));
	_databinding_write_data_string(uParam0->f_45, func_1983(&Param1));
	_databinding_write_data_string(uParam0->f_47, func_1984(&Param1));
	_databinding_write_data_bool(uParam0->f_46, func_1985(&Param1));
	_databinding_write_data_bool(uParam0->f_48, func_1986(&Param1));
}

void func_1841(struct<34> Param0)
{
	if (!func_1987())
	{
		return;
	}
	iVar0 = func_1810();
	if (func_1693())
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_5, true);
	}
	else if (iVar0 == 1)
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_5, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_5, false);
	}
	_databinding_write_data_string(Global_1940311->f_1433.f_4189.f_4, func_1988(Param0));
}

int func_1842(int iParam0, bool bParam1)
{
	if (func_1693())
	{
		return &(Global_1139381->f_4796.f_34[iParam0]);
	}
	iVar0 = func_1685(iParam0);
	Var1 = { func_717(bParam1) };
	iVar5 = func_1686(Var1, iVar0, 0, bParam1);
	if (!func_1989(iVar5))
	{
		return 0;
	}
	return func_1688(iVar5);
}

void func_1843(int iParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35)
{
	bVar0 = func_1990(iParam0);
	if (func_1693())
	{
		_databinding_write_data_bool(uParam1->f_47, false);
		_databinding_write_data_bool(uParam1->f_46, false);
		_databinding_write_data_bool(uParam1->f_50, true);
		_databinding_write_data_bool(uParam1->f_49, false);
		_databinding_write_data_bool(uParam1->f_48, false);
		func_1837(uParam1, &Param2);
		return;
	}
	func_1837(uParam1, &Param2);
	if (bVar0)
	{
		func_1991(&(Global_1139381->f_4621.f_36[iParam0]->f_2), 1);
	}
	else
	{
		func_1992(&(Global_1139381->f_4621.f_36[iParam0]->f_2), 1);
	}
	_databinding_write_data_bool(uParam1->f_46, (bVar0 && func_1993()));
	_databinding_write_data_bool(uParam1->f_47, ((bVar0 && func_1993()) && func_1969(0)));
	_databinding_write_data_bool(uParam1->f_48, (Param2.f_22 && func_1993()));
	_databinding_write_data_bool(uParam1->f_49, ((Param2.f_22 && func_1993()) && func_1969(3)));
	_databinding_write_data_bool(uParam1->f_50, bVar0);
	_databinding_write_data_string(uParam1->f_51, func_1977(func_1994(iParam0)));
}

bool func_1844(int iParam0)
{
	return Global_1940311->f_1433.f_4189.f_2086 == iParam0;
}

void func_1845(var uParam0, var uParam1, int iParam2)
{
	func_1995(iParam2, uParam1);
	func_1837(uParam0, uParam1);
}

bool func_1846(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 2)
	{
		return true;
	}
	return false;
}

int func_1847(var uParam0)
{
	if (!func_1492(*uParam0))
	{
		return 0;
	}
	iVar0 = func_1493(*uParam0, 1);
	func_1691();
	_0x6b5ddfb967e5073d(&(Global_1296859->f_154[&Global_1296859]), &(Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]));
	if (_0x32348719dced2969(&(Global_1296859->f_154[&Global_1296859])))
	{
		if (func_1306(0))
		{
			_0x83fcd6921fc8fd05(&(Global_1296859->f_154[&Global_1296859]), 6);
		}
		else
		{
			_0x83fcd6921fc8fd05(&(Global_1296859->f_154[&Global_1296859]), 7);
		}
	}
	_0x7146cf430965927c(23, !Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_1);
	_0x7146cf430965927c(22, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_2);
	_0x7146cf430965927c(21, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_2);
	_0x7146cf430965927c(7, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_3);
	_0x7146cf430965927c(12, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_4);
	_0x7146cf430965927c(8, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_5);
	_0x7146cf430965927c(18, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_6);
	_0x7146cf430965927c(9, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_7);
	_0x7146cf430965927c(10, Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_8);
	_0x7146cf430965927c(14, !Global_1139381->f_11.f_1562[iVar0]->f_9[uParam0->f_13]->f_9);
	_0x95ee1dee1dcd9070(&(Global_1296859->f_154[&Global_1296859]), 1);
	return 1;
}

int func_1848(int iParam0, int iParam1)
{
	if (!func_1956(iParam0))
	{
		return 0;
	}
	iVar0 = func_1856(iParam0, 1);
	if (!func_1957(iParam1))
	{
		return 0;
	}
	iVar1 = func_1958(iParam1, 1);
	if (&Global_1146212->f_35859.f_919[iVar0] == iParam1)
	{
		return 1;
	}
	if (func_1957(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		func_1836(iParam0);
	}
	Global_1146212->f_35859.f_919[iVar0] = iParam1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar1]->f_5)
	{
		iVar2 = Global_1146212->f_35859[iVar1][iVar4];
		iVar3 = func_1962(iVar2, 1);
		switch (func_1996(iParam0, iVar2))
		{
			case 0:
				func_1997(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] = iVar2;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_1 = iParam0;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_2 = iVar4;
				Global_1146212->f_35859.f_11700++;
				break;
			case 2:
				Jump @427; //curOff = 338
				if (Global_1146212->f_35859.f_3116[iVar3]->f_29 <= 0)
				{
					Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = iVar2;
					Global_1146212->f_35859.f_9502++;
				}
				func_1963(iVar3, 1);
				iVar4++;
			}
			return 1;
		}

float func_1849(int iParam0)
{
	return (_0x592f58bc4d2a2cf3(iParam0, 0) - IntToFloat(func_1998(2)));
}

int func_1850(int iParam0)
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

char* func_1851(int iParam0)
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

char* func_1852(int iParam0)
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

void func_1853(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1077(2);
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

void func_1854(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1077(2);
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

void func_1855(float fParam0, int iParam1)
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

int func_1856(int iParam0, int iParam1)
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

void func_1857(float fParam0, int iParam1)
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

bool func_1858(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_699(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_1332(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1859(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_1860(bool bParam0)
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

void func_1861(int iParam0)
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

void func_1862(bool bParam0)
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

void func_1863(bool bParam0)
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

void func_1864(bool bParam0)
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

void func_1865(bool bParam0)
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

void func_1866(bool bParam0)
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

void func_1867(bool bParam0)
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

bool func_1868()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

int func_1869(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1870(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1999(*iParam0);
	iVar1 = func_2000(*iParam0);
	iVar2 = func_2001(*iParam0);
	iVar3 = func_1593(*iParam0);
	iVar4 = func_1594(*iParam0);
	iVar5 = func_2002(*iParam0);
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
	iVar6 = func_2003(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_2003(iVar1, iVar0);
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
	func_2004(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1871(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_1872(int iParam0)
{
	if (func_1744(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_1873(int iParam0)
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

bool func_1874()
{
	if (!func_17())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

void func_1875(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_2005())
	{
		Global_1913504->f_125 = get_game_timer();
		Global_1913504->f_126 = iParam1;
	}
	Global_1913504->f_127 = (Global_1913504->f_127 + iParam0);
}

bool func_1876()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_1877()
{
	return is_dlc_present(-2112896652);
}

int func_1878(var uParam0, int iParam1)
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

int func_1879(int iParam0)
{
	iVar0 = func_988(iParam0);
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

void func_1880(var uParam0)
{
	func_1745(uParam0, 143479330);
	if (func_1293() == 2026485318)
	{
		func_1745(uParam0, 617531372);
	}
	else
	{
		func_1745(uParam0, 291123060);
	}
}

void func_1881(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_458(uParam0))
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

bool func_1882(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_1883(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1884(int iParam0, int iParam1)
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

int func_1885(int iParam0)
{
	if (!func_721(iParam0, 0))
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

struct<10> func_1886(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_1887(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_1888(int iParam0)
{
	if (!func_721(iParam0, 0))
	{
	}
	if (func_1465(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_1889(int iParam0)
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

int func_1890(int iParam0, int iParam1)
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

char* func_1891(int iParam0)
{
	if (!func_721(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_1538(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_1892(int iParam0)
{
	if (func_988(iParam0) == -126813555 || func_988(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_1893(int iParam0)
{
	if (!func_721(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_1757(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

int func_1894(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1649591222;
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = 1293082345;
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = -1480791665;
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = 1923799069;
			break;
		case 12:
			iVar0 = -605765767;
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_1895(int iParam0, var uParam1)
{
	if (func_2006(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1896(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_1897(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_1898(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 15;
		case 923956646:
			return 16;
		case 1459450644:
			return 17;
		case -2071675432:
			return 18;
		case -552339597:
			return 8;
		case 2144670272:
			return 10;
		case 996459079:
			return 9;
		case 1996177174:
			return 11;
		case -1702168032:
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_1899(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1900(int iParam0)
{
	switch (iParam0)
	{
		case 987444055:
			return -1;
		case 1330140418:
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case 672178273:
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case -42959138:
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_1901(int iParam0)
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

int func_1902()
{
	if (func_23() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

bool func_1903(int iParam0, int iParam1)
{
	if (!func_721(iParam0, 0))
	{
		return false;
	}
	if (func_1904(iParam0))
	{
		return func_2007(func_1905(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_1904(int iParam0)
{
	if (func_1465(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_1905(int iParam0, bool bParam1)
{
	if (!func_721(iParam0, 0))
	{
		return func_2008(func_1325(iParam0), bParam1);
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

int func_1906(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_2009(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1907(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_721(iParam0, 0))
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
		func_2010(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_1908(int iParam0, bool bParam1)
{
	if (!func_1772(iParam0))
	{
		return;
	}
	if (func_2011(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_2012(iParam0, 1);
	}
	else
	{
		func_2013(iParam0, 1);
	}
	func_2014(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_1914(iVar0) == iParam0)
		{
			func_1915(iVar0, 0);
		}
		iVar0++;
	}
}

int func_1909(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 81:
			if (func_2015(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 111:
			if (func_2015(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			if (func_23() != -1 && func_2016() == 1339372314)
			{
				return 1339372314;
			}
			else
			{
				return 1559741032;
			}
			break;
		case 66:
			return 60667583;
		case 83:
			return 1758133584;
		case 26:
			return -577559008;
		case 40:
			if (!bParam1 || func_23() != -1)
			{
				return 1624541293;
			}
			if (func_1518(44))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 98:
			if (func_23() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 1637569166;
			}
			break;
		case 70:
			return -867798278;
		case 74:
			return 1543937523;
		case 99:
			return 1030875135;
		case 101:
			return -201437056;
		case 62:
			return 794246846;
		case 3:
			return -968357677;
		case 33:
			return 728480338;
		case 87:
			if (func_23() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 725489698;
			}
			break;
		case 37:
			return 183652754;
		case 60:
			if (func_23() != -1)
			{
				return -1147969487;
			}
			else
			{
				return 2056744450;
			}
			break;
		case 135:
			return 963280223;
		case 127:
			return -256309418;
		case 131:
			return 1666986024;
		case 121:
			return 251328732;
		case 136:
			if (func_23() != -1)
			{
				return -877373104;
			}
			if (!bParam1)
			{
				return 1024208566;
			}
			if (func_1518(44))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			return 965626876;
		case 39:
			return -497792649;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -1990305778;
	}
	if (bParam2)
	{
		iVar0 = func_2017(iParam0);
		if (iVar0 != -1)
		{
			return func_2018(iVar0, bParam1);
		}
	}
	return 0;
}

int func_1910(int iParam0)
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

void func_1911(int iParam0, bool bParam1)
{
	if (!func_853(iParam0))
	{
		return;
	}
	bVar0 = func_857(iParam0, 67108864);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_2019(iParam0, func_1592());
			func_2020(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_1188(iParam0, 67108864);
		func_2019(iParam0, -15);
	}
	func_2021(iParam0);
}

void func_1912(int iParam0, bool bParam1, int iParam2)
{
	if (!func_853(iParam0))
	{
		return;
	}
	if (func_2022(iParam0) && !bParam1)
	{
		return;
	}
	if (_does_volume_exist((*Global_1887339)[iParam0]->f_6))
	{
		iVar0 = (*Global_1887339)[iParam0]->f_6;
	}
	else
	{
		iVar0 = func_2023(iParam0);
	}
	bVar1 = func_857(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_2024(iParam0);
		if (iParam2 > iVar2)
		{
			func_2025(iParam0, func_1592());
			func_2026(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_2020(iParam0, 33554432);
			if (_does_volume_exist(iVar0))
			{
				if (iParam0 == 40)
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
		func_1188(iParam0, 33554432);
		func_2025(iParam0, -15);
		if (_does_volume_exist(iVar0))
		{
			_0xf2a2177ac848b3a8(iVar0, 1, 1);
		}
	}
	func_2027(iParam0);
}

bool func_1913(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_1914(int iParam0)
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

void func_1915(int iParam0, bool bParam1)
{
	if (!func_1913(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_2028(iParam0, 1);
	}
	else
	{
		if (func_2029(iParam0))
		{
			return;
		}
		func_2030(iParam0, 1);
	}
	func_2031(iParam0, bParam1);
}

void func_1916(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_1225() - iParam1);
	func_423(uParam0, 1);
	func_424(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_1917()
{
	if (_get_number_of_references_of_script_with_name_hash(1814880805) != 0)
	{
		return 0;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-701235215) != 0)
	{
		return 1;
	}
	return 2;
}

char* func_1918(int iParam0, int iParam1)
{
	if (func_1781())
	{
		return func_2032(0);
	}
	else if ((is_bit_set(iParam0, 0) || is_bit_set(iParam0, 17)) || is_bit_set(iParam0, 18))
	{
		return "";
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_PHOTOS_TAKEN");
	}
	else if (is_bit_set(iParam0, 6))
	{
		return _create_var_string(2, "FM_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam0, 3))
	{
		return _create_var_string(2, "UIC_LB_TIME");
	}
	else if (is_bit_set(iParam0, 19))
	{
		return _create_var_string(2, "UIC_LB_BOUT");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return _create_var_string(2, "UIC_LB_KILLS");
}

char* func_1919(int iParam0, int iParam1)
{
	if (func_1781())
	{
		return func_2032(1);
	}
	else if (func_1609(iParam0) || func_1616(iParam0))
	{
		return "";
	}
	else if (is_bit_set(iParam1, 9))
	{
		return _create_var_string(2, "FM_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam1, 1))
	{
		return _create_var_string(2, "UIC_LB_DEL");
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_BEST_PHOTO");
	}
	else if (is_bit_set(iParam0, 6))
	{
		if (is_bit_set(iParam0, 0))
		{
			return _create_var_string(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return _create_var_string(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (is_bit_set(iParam0, 3))
	{
		if (is_bit_set(iParam0, 0))
		{
			return _get_label_text("UIC_LB_TIME");
		}
		else
		{
			return func_2033(iParam0);
		}
	}
	else if (func_1608(iParam0) || is_bit_set(iParam0, 19))
	{
		return _get_label_text("UIC_LB_KILLS");
	}
	else if (is_bit_set(iParam0, 8))
	{
		return _get_label_text("UIC_LB_VAL");
	}
	else if (is_bit_set(iParam0, 20))
	{
		return _get_label_text("UIC_LB_ACC");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (is_bit_set(iParam1, 4))
	{
		return _create_var_string(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return _get_label_text("UIC_LB_DEATHS");
}

char* func_1920(int iParam0, int iParam1)
{
	if (func_1781())
	{
		return func_2032(2);
	}
	else if (is_bit_set(iParam0, 13))
	{
		return _get_label_text("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 9))
	{
		return _create_var_string(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (is_bit_set(iParam1, 7))
	{
		return _create_var_string(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (is_bit_set(iParam1, 11))
	{
		return _create_var_string(2, "FME_AT_SCORE_TAG");
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_POINTS");
	}
	else if (is_bit_set(iParam0, 6))
	{
		if (is_bit_set(iParam1, 13))
		{
			return _create_var_string(2, "FM_LEADERBOARD_KILLS");
		}
		if (is_bit_set(iParam0, 0))
		{
			return _create_var_string(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return _create_var_string(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (is_bit_set(iParam0, 3) && is_bit_set(iParam0, 0))
	{
		return func_2033(iParam0);
	}
	else if ((is_bit_set(iParam0, 0) && !is_bit_set(iParam0, 17)) && !func_1616(iParam0))
	{
		return _get_label_text("UIC_LB_DEATHS");
	}
	else if (func_1609(iParam0) && !func_1616(iParam0))
	{
		return _get_label_text("UIC_LB_KILLS");
	}
	else if (is_bit_set(iParam0, 2) || is_bit_set(iParam0, 19))
	{
		return _get_label_text("UIC_LB_CAPS");
	}
	else if (is_bit_set(iParam1, 2))
	{
		return _create_var_string(2, "UIC_LB_DEL");
	}
	else if (is_bit_set(iParam0, 14))
	{
		return _get_label_text("UIC_LB_BOUT");
	}
	else if (is_bit_set(iParam0, 21))
	{
		return _get_label_text("UIC_LB_TA");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (is_bit_set(iParam1, 4))
	{
		return _create_var_string(2, "FM_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return _get_label_text("UIC_LB_SCORE");
}

char* func_1921()
{
	if (func_1781())
	{
		return func_2032(3);
	}
	return "";
}

void func_1922(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	iVar4 = 0;
	iVar5 = 32;
	iVar6 = player_id();
	bVar16 = (*Global_1049309)[0]->f_2 == -1128715836;
	bVar17 = (*Global_1049309)[0]->f_2 == 1691389412;
	bVar18 = (*Global_1049309)[0]->f_2 == 2105734739;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Position", "");
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Gamertag", "");
		_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar19 = is_bit_set(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = is_bit_set(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_1776() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = to_float(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0] != -1 && uParam1[iVar0] < 8)
				{
					if (func_2034((*uParam1)[iVar0], 0) != -1f)
					{
						fVar21[uParam1[iVar0]] = (&fVar21[uParam1[iVar0]] + func_2034((*uParam1)[iVar0], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_1617(iParam2, &uVar30, uParam0->f_150, bVar19);
		func_1618(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = &uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						Var7 = { func_1777(iVar39) };
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &Var7);
						iVar40 = func_1778(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar40);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", _0x2b6846401d68e563(&(fVar21[iVar39]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_1620(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_1598(&((*uParam1)[iVar1]->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &((*uParam1)[iVar1]->f_14.f_1));
						bVar41 = iVar6 == (*uParam1)[iVar1]->f_14;
						iVar42 = func_1601(uParam0, uParam1, iVar1, iVar6, bVar41);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar42);
						sVar43 = "";
						sVar43 = _0x2b6846401d68e563(func_2034((*uParam1)[iVar1], 0), 0);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

float func_1923(var uParam0)
{
	if (func_1781())
	{
		func_1782(uParam0, 3);
	}
	return -1f;
}

void func_1924(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam1;
	set_bit(&iVar1, iVar0);
	func_1790(uParam0, iVar1, iParam2);
}

int func_1925(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &(Global_1139381->f_5079[iParam0]->f_5[iParam1]);
}

int func_1926(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_1927(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	Global_1139381->f_5079[iParam0]->f_5[iParam1] = iParam2;
}

void func_1928(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	(*Global_1139381->f_5079[iParam0])[iParam1] = iParam2;
}

int func_1929(int iParam0, int iParam1)
{
	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1139381->f_5079[iParam0][iParam1];
}

void func_1930(vector3 vParam0)
{
	if (Global_1139381->f_5079.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*Global_1139381->f_5079.f_326[Global_1139381->f_5079.f_324] = { vParam0 };
	Global_1139381->f_5079.f_324 = (Global_1139381->f_5079.f_324 + 1 % 50);
	Global_1139381->f_5079.f_325++;
}

void func_1931(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 3, &uParam1);
}

bool func_1932(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1912930450:
			iVar0 = 1742327865;
			if (func_988(func_2035(iVar0)) != 81053684 && !func_1465(func_2035(iVar0), 160827531))
			{
				return false;
			}
			break;
		case -1745589872:
			iVar0 = 1742327865;
			if (!func_1465(func_2035(iVar0), -1303648999))
			{
				return false;
			}
			break;
		case -1549909015:
			iVar0 = 1108822547;
			iVar1 = func_988(func_2035(iVar0));
			if (iVar1 != -525676072 && iVar1 != -2061583405)
			{
				return false;
			}
			break;
		case 357406204:
			iVar0 = -1197751823;
			iVar1 = func_988(func_2035(iVar0));
			if (iVar1 != 294388917)
			{
				return false;
			}
			break;
		case -464635753:
			iVar0 = -450913544;
			iVar1 = func_988(func_2035(iVar0));
			if (iVar1 != 698653232)
			{
				return false;
			}
			break;
		case 1742327865:
			iVar0 = 1742327865;
			if (func_1465(func_2035(iVar0), -1303648999))
			{
				return false;
			}
			break;
		default:
			iVar0 = iParam0;
			break;
	}
	*iParam1 = func_1287(iVar0, 1);
	return true;
}

int func_1933(int iParam0, int iParam1)
{
	iVar0 = func_1283(0);
	func_1464(&(Global_1952637->f_1043), iVar0, iParam0, 1409451727, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0xed4413cee1bf142c(&(Global_1952637->f_1043)))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1373051002))
	{
		return 0;
	}
	return uVar1;
}

void func_1934(int iParam0, int iParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (Global_1952637->f_2843.f_3[iParam0] || iParam1);
}

int func_1935(int iParam0)
{
	switch (iParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1936(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		case 299749022:
			return -101524555;
		case -1180698265:
			return -1915385310;
		case -487028314:
			return 1315162488;
		case 241235545:
			return 727393558;
		case 1827902148:
			return -1228057307;
		case 1301555144:
			return 1712094016;
		case -2056583192:
			return -1248299493;
		case 1015239729:
			return -451359317;
		case -340627321:
			return -2041626192;
		case -875805376:
			return -1371514637;
		case -768760704:
			return 1547608292;
		case 1089431066:
			return -361152079;
		case -2118203104:
			return -1994943603;
		case 1285634184:
			return 1011151573;
		case -559080197:
			return 892816668;
		case -1811760631:
			return -246340825;
		case 1858448324:
			return -1839865333;
		default:
			break;
	}
	return 0;
}

struct<17> func_1937(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_699(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_2036(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

float func_1938(int iParam0)
{
	return (to_float(iParam0) / 10000f);
}

void func_1939(var uParam0, var uParam1)
{
	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1065353216;
	Var2.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		if ((*uParam1)[iVar0]->f_1 < ((*uParam1)[(iVar0 - 1)])->f_1)
		{
			_remove_ped_overlay(*uParam0, ((*uParam1)[(iVar0 - 1)])->f_2);
			Var2 = { *(*uParam1)[iVar0] };
			*(*uParam1)[iVar0] = { *((*uParam1)[(iVar0 - 1)]) };
			*((*uParam1)[(iVar0 - 1)]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_1940(uParam0, (*uParam1)[iVar0]);
		iVar0++;
	}
}

void func_1940(var uParam0, var uParam1)
{
	uParam1->f_2 = _add_ped_overlay(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_1800(uParam0, uParam1, 0);
}

bool func_1941(var uParam0)
{
	if (!func_2037(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_1942(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_78(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_1943(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_2038(iParam0, iParam1, iParam2, iParam3);
}

int func_1944(int iParam0)
{
	if (!func_1492(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_1493(iParam0, 1)])->f_2;
}

bool func_1945(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1989(iParam0))
	{
		return false;
	}
	Var0 = { func_717(bParam2) };
	if (func_1297(iParam0, Var0, iParam1, bParam2, 0, 0) >= 1)
	{
		return true;
	}
	return false;
}

bool func_1946(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	if (func_1465(vParam0.z, 216050813))
	{
		if (!_unlock_is_unlocked(-1387714323))
		{
			return false;
		}
	}
	return true;
}

int func_1947(int iParam0)
{
	iVar0 = iParam0;
	return func_2039(iVar0);
}

int func_1948(int iParam0)
{
	iVar0 = iParam0;
	return func_2040(iVar0);
}

int func_1949(int iParam0, bool bParam1)
{
	if (!func_1989(iParam0))
	{
		return 0;
	}
	Var0 = { func_717(bParam1) };
	if (func_1297(iParam0, Var0, -1060513333, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1297(iParam0, Var0, 1317351007, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1297(iParam0, Var0, -500478573, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1297(iParam0, Var0, -806573802, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1297(iParam0, Var0, -1109949204, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

bool func_1950(var uParam0)
{
	return uParam0->f_15 >= func_1978(uParam0->f_13);
}

bool func_1951(var uParam0)
{
	return _unlock_is_visible(uParam0->f_2);
}

bool func_1952(int iParam0, var uParam1)
{
	*uParam1 = func_2041(iParam0, 1);
	return *uParam1 != 0;
}

bool func_1953(int iParam0, var uParam1)
{
	*uParam1 = func_2042(iParam0, 1, 0);
	return *uParam1 != 0;
}

char* func_1954(int iParam0)
{
	iVar0 = iParam0;
	return func_2043(iVar0);
}

int func_1955(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -126580932;
		case 1:
			return 0;
		case 2:
			return 698214003;
		case 3:
			return 780689752;
		case 4:
			return 1698995037;
		case 5:
			return 408582472;
		case 6:
			return -1100659165;
		case 7:
			return -1248720641;
		case 8:
			return -286632741;
		case 9:
			return 956867472;
		case 10:
			return 1036630721;
		case 11:
			return 1138017610;
		case 12:
			return -33431232;
		case 13:
			return -2101912686;
		case 14:
			return 846387993;
		case 15:
			return -1840995238;
		case 16:
			return 1585362808;
		case 17:
			return -425216802;
		case 18:
			return -1722264360;
		case 19:
			return -1288042557;
		case 20:
			return 1828803907;
		case 21:
			return -343572565;
		case 22:
			return 1095779900;
		case 23:
			return 1444077748;
		case 24:
			return 952755846;
		case 25:
			return 420477860;
		case 26:
			return 2132307595;
		case 27:
			return -1919393558;
		case 28:
			return 1374979106;
		case 29:
			return 114587291;
		case 30:
			return -900877140;
		case 31:
			return -660114191;
		case 32:
			return -1767662471;
		case 33:
			return 878491929;
		case 34:
			return 398279342;
		case 35:
			return 550487527;
		case 36:
			return 713106899;
		case 37:
			return -1719665775;
		case 38:
			return -1170784825;
		case 39:
			return -1010031245;
		case 40:
			return -29822088;
		case 41:
			return 1323028278;
		case 42:
			return 797908556;
		case 43:
			return 1907663129;
		case 44:
			return -60432888;
		case 45:
			return -1209874968;
		case 46:
			return 1078589127;
		case 47:
			return -1525233154;
		case 48:
			return 1278022357;
		case 49:
			return -1729554078;
		case 50:
			return -1480068681;
		case 51:
			return 926420921;
		case 52:
			return 1195903441;
		case 53:
			return -649929946;
		case 54:
			return 1829805500;
		case 55:
			return -1855662261;
		case 56:
			return 111084081;
		case 57:
			return 149216078;
		case 58:
			return -1920464018;
		case 59:
			return 659100749;
		case 60:
			return -1378468884;
		case 61:
			return -1575244501;
		case 62:
			return -1786033368;
		case 63:
			return 1899963938;
		case 64:
			return -1525401254;
		case 65:
			return 666050502;
		case 66:
			return 887717126;
		case 67:
			return -885646667;
		case 68:
			return 946848176;
		case 69:
			return 2110112797;
		case 70:
			return -1543433893;
		case 71:
			return -587737142;
		case 72:
			return -1697567574;
		case 73:
			return 1554410187;
		case 74:
			return -1551628748;
		case 75:
			return 1801131110;
		case 76:
			return -1431848307;
		case 77:
			return -979738281;
		case 78:
			return -837774766;
		case 79:
			return -1223791123;
		case 80:
			return -1181880939;
		case 81:
			return 180714777;
		case 82:
			return -521477124;
		case 83:
			return 1156950836;
		case 84:
			return 1498983922;
		case 85:
			return -1089821002;
		case 86:
			return -1767968552;
		case 87:
			return 1052684812;
		case 88:
			return -1835722213;
		case 89:
			return -1229834518;
		case 90:
			return -392183396;
		case 91:
			return 839199173;
		case 92:
			return -1080696981;
		case 93:
			return 509781427;
		case 94:
			return -1491472827;
		case 95:
			return 1075856357;
		case 96:
			return 1806354060;
		case 97:
			return 268103762;
		case 98:
			return 54499763;
		case 99:
			return -47513954;
		case 100:
			return 173401469;
		case 101:
			return 1830494920;
		case 102:
			return -56802666;
		case 103:
			return -415437740;
		case 104:
			return -1465202595;
		case 105:
			return -233204301;
		case 106:
			return -1790318144;
		case 107:
			return -1716981503;
		case 108:
			return -1729980669;
		case 109:
			return -1727526861;
		case 110:
			return -920221586;
		case 111:
			return -931294997;
		case 112:
			return -1486927560;
		case 113:
			return 852774198;
		case 114:
			return -885737328;
		case 115:
			return 1769731136;
		case 116:
			return -1459368569;
		case 117:
			return -1291022662;
		case 118:
			return 638586808;
		case 119:
			return 2096770678;
		case 120:
			return -1605880447;
		case 121:
			return -1539337723;
		case 122:
			return -117284255;
		case 123:
			return -636552746;
		case 124:
			return -1993903481;
		case 125:
			return 791791441;
		case 126:
			return 1903067887;
		case 127:
			return -1927422497;
		case 128:
			return 2040423027;
		case 129:
			return 1838787462;
		case 130:
			return 2050123975;
		case 131:
			return 1811663962;
		case 132:
			return -711254121;
		case 133:
			return -35033037;
		case 134:
			return 955999834;
		case 135:
			return -481051896;
		case 136:
			return -1935700575;
		case 137:
			return -1125028284;
		case 138:
			return -267135864;
		case 139:
			return -751329575;
		case 140:
			return 1037792287;
		case 141:
			return 798283666;
		case 142:
			return -1970041458;
		case 143:
			return -203268054;
		case 144:
			return -415250715;
		case 145:
			return -799500009;
		case 146:
			return 1405624312;
		case 147:
			return -1123356036;
		case 148:
			return -1478178768;
		case 149:
			return 168336706;
		case 150:
			return 807983049;
		case 151:
			return 1636352616;
		case 152:
			return 1110815339;
		case 153:
			return -1197630873;
		case 154:
			return 1213703;
		case 155:
			return -1418298797;
		case 156:
			return 1900141702;
		case 157:
			return -992423055;
		case 158:
			return 320758674;
		case 159:
			return -546870456;
		case 160:
			return 2119170919;
		case 161:
			return 1547488310;
		case 162:
			return 1449867002;
		case 163:
			return -46116991;
		case 164:
			return 1281707602;
		case 165:
			return 1865781806;
		case 166:
			return -1631930150;
		case 167:
			return -2059285007;
		case 168:
			return 456199285;
		case 169:
			return -340578116;
		case 170:
			return 362862598;
		case 171:
			return -1391865428;
		case 172:
			return -1084890102;
		case 173:
			return -1857550353;
		case 174:
			return -1629969648;
		case 175:
			return 576694808;
		case 176:
			return -2006026692;
		case 177:
			return -161625840;
		case 178:
			return 1662680949;
		case 179:
			return 352539363;
		case 180:
			return -1196069774;
		case 181:
			return -1685270562;
		case 182:
			return -813902658;
		case 183:
			return 282858309;
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

bool func_1956(int iParam0)
{
	iVar0 = func_1856(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_1957(int iParam0)
{
	iVar0 = func_1958(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_1958(int iParam0, int iParam1)
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

int func_1959(int iParam0, int iParam1)
{
	iVar0 = func_2044(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_1962(iParam1, 1);
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

int func_1960(int iParam0, int iParam1, int iParam2)
{
	if (!func_1956(iParam1))
	{
		return 0;
	}
	if (!func_2045(iParam0))
	{
		return 0;
	}
	iVar0 = func_1962(iParam0, 1);
	func_2046(iParam0, iParam1, iParam2);
	if (func_2047(*Global_1146212->f_35859.f_3116[iVar0]) && func_2048(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_2049(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_2050(vVar1))
		{
			if (func_2051(vVar1.x, vVar1.y, vVar1.z))
			{
				func_2052(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_2053(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_2053(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_1961(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1962(int iParam0, int iParam1)
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

void func_1963(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_1964(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_1965(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

int func_1966(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	return func_2054(iParam0, iVar0);
}

bool func_1967(var uParam0)
{
	return (uParam0->f_20 && !uParam0->f_22);
}

char* func_1968(var uParam0)
{
	if (uParam0->f_26 || uParam0->f_27)
	{
		return "IB_REDEEM";
	}
	if (uParam0->f_30)
	{
		return "IB_BUY_NOW";
	}
	return "IB_BUY";
}

bool func_1969(int iParam0)
{
	iVar0 = func_2055();
	switch (iVar0)
	{
		case 0:
			return true;
		case 1:
			return iParam0 == 0;
		case 2:
			return iParam0 == 1;
		case 3:
			return iParam0 == 2;
		case 4:
			return iParam0 == 5;
		default:
			break;
	}
	return false;
}

char* func_1970(var uParam0)
{
	if (uParam0->f_24)
	{
		return "IB_UPGRADE_NOW";
	}
	return "IB_UPGRADE";
}

bool func_1971(var uParam0)
{
	return (uParam0->f_29 || uParam0->f_23);
}

bool func_1972(var uParam0)
{
	return (!func_1971(uParam0) && (uParam0->f_30 || uParam0->f_24));
}

int func_1973(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (func_1971(uParam0))
	{
		if (uParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_1767(uParam0->f_17))
		{
			return 1;
		}
	}
	else if (func_1972(uParam0))
	{
		if (uParam0->f_18 < 0)
		{
			return 0;
		}
		else if (func_2056(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

char* func_1974(int iParam0)
{
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_327(iParam0);
}

int func_1975(int iParam0)
{
	return (iParam0 / 100);
}

int func_1976(int iParam0)
{
	return (iParam0 % 100);
}

var func_1977(int iParam0)
{
	if (iParam0 <= -1)
	{
		return "";
	}
	_int_to_string(iParam0, "%i", &Var0);
	return func_2057(Var0);
}

int func_1978(int iParam0)
{
	iVar0 = iParam0;
	return func_2058(iVar0);
}

int func_1979()
{
	return Global_1940311->f_1433.f_4189.f_2084;
}

void func_1980(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_1837(uParam0, &uParam1);
}

bool func_1981(int iParam0)
{
	return func_2059() == iParam0;
}

void func_1982(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_1837(uParam0, &uParam1);
	_databinding_write_data_string(uParam0->f_45, func_1983(&uParam1));
	_databinding_write_data_string(uParam0->f_47, func_1984(&uParam1));
	_databinding_write_data_bool(uParam0->f_46, func_1985(&uParam1));
	_databinding_write_data_bool(uParam0->f_48, func_1986(&uParam1));
}

char* func_1983(var uParam0)
{
	if (uParam0->f_20)
	{
		return "IB_UPGRADE";
	}
	if (uParam0->f_26)
	{
		return "SHOP_REWARD_PRICE";
	}
	else if (uParam0->f_27)
	{
		return "SHOP_OFFER_PRICE";
	}
	return "IB_PRICE";
}

char* func_1984(var uParam0)
{
	if (uParam0->f_26)
	{
		return "IB_FREE";
	}
	else if (uParam0->f_20 && !uParam0->f_25)
	{
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";
	}
	return "";
}

int func_1985(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (!uParam0->f_25 && uParam0->f_20)
	{
		return 1;
	}
	return 0;
}

bool func_1986(var uParam0)
{
	return (uParam0->f_21 && !uParam0->f_14);
}

bool func_1987()
{
	return _is_app_active(-1641598689);
}

char* func_1988(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	sVar0 = func_555(func_2060(), 109029619);
	if (func_1693())
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_OVERRIDEN");
	}
	else if (func_1810() == 1)
	{
		return _create_var_string(10, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_REMOTE_PLAYER_MODE", sVar0);
	}
	if (!func_1987())
	{
		return "INVALID";
	}
	iVar1 = _0x96fd694fe5be55dc(-1641598689);
	if (iVar1 == 1738917854)
	{
		return func_2062(func_2061());
	}
	else if (iVar1 == -477213344)
	{
		return func_2063(&uParam0);
	}
	else if (iVar1 == 756463805)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_UPGRADE");
	}
	return "INVALID";
}

bool func_1989(int iParam0)
{
	iVar0 = func_1093(iParam0);
	if ((iVar0 == 810656527 || iVar0 == 2088138839) || iVar0 == 129583122)
	{
		return true;
	}
	return false;
}

bool func_1990(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _unlock_is_unlocked(-1815917332);
		case 1:
			return _unlock_is_unlocked(446771306);
		case 2:
			return _unlock_is_unlocked(214930631);
		case 3:
			return _unlock_is_unlocked(1057421621);
		default:
			break;
	}
	return false;
}

void func_1991(var uParam0, int iParam1)
{
	func_511(uParam0, iParam1);
}

void func_1992(var uParam0, int iParam1)
{
	func_644(uParam0, iParam1);
}

bool func_1993()
{
	return func_1810() == 0;
}

int func_1994(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 20;
		case 3:
			return 40;
		default:
			break;
	}
	return -1;
}

void func_1995(int iParam0, var uParam1)
{
	if (!func_1492(*uParam1))
	{
		uParam1->f_11 = func_2064(iParam0);
		uParam1->f_12 = func_2065(iParam0);
	}
}

int func_1996(int iParam0, int iParam1)
{
	iVar0 = func_2044(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_1962(iParam1, 1);
	switch (&Global_1146212->f_35859.f_3116[iVar2])
	{
		case 979390476:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -2139108927:
		case -2129621195:
		case -1503245593:
		case 190804938:
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

int func_1997(int iParam0, int iParam1, int iParam2)
{
	if (!func_1956(iParam1))
	{
		return 0;
	}
	if (!func_2045(iParam0))
	{
		return 0;
	}
	iVar0 = func_1962(iParam0, 1);
	if (!func_2066(iParam2))
	{
		return 0;
	}
	bVar1 = func_2047(*Global_1146212->f_35859.f_3116[iVar0]);
	if (bVar1 && func_2067(Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar2 = { func_2068(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (!func_2046(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_2051(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_2052(Global_1146212->f_35859.f_3116[iVar0]->f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

int func_1998(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1070(2) * 2;
		case 1:
			return func_1072(2) * 2;
		case 2:
			return func_1071(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_1999(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_2069(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_2000(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_2001(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_2002(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_2003(int iParam0, int iParam1)
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

void func_2004(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_2070(iParam0, iParam6);
	func_2071(iParam0, iParam5);
	func_2072(iParam0, iParam4);
	func_2073(iParam0, iParam3);
	func_2074(iParam0, iParam2);
	func_2075(iParam0, iParam1);
}

bool func_2005()
{
	return Global_1913504->f_127 == 0;
}

bool func_2006(int iParam0, var uParam1, var uParam2)
{
	if (func_2076(iParam0, uParam1, &uVar0))
	{
		func_2077(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_2007(int iParam0, int iParam1, bool bParam2)
{
	if (!func_2078(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_2079(iParam0, iParam1);
	}
	return true;
}

int func_2008(int iParam0, bool bParam1)
{
	if (!func_1326(iParam0, 2))
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

bool func_2009(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_2078(iParam0))
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
		func_2080(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_2010(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_988(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_2011(int iParam0, int iParam1)
{
	if (!func_1772(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

void func_2012(int iParam0, int iParam1)
{
	if (!func_1772(iParam0))
	{
		return;
	}
	if (!func_2011(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_190[iParam0]->f_5 = (Global_39.f_190[iParam0]->f_5 || iParam1);
		return;
	}
	Global_1071686->f_21325[iParam0]->f_5 = (Global_1071686->f_21325[iParam0]->f_5 || iParam1);
}

void func_2013(int iParam0, int iParam1)
{
	if (!func_1772(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_190[iParam0]->f_5 = (Global_39.f_190[iParam0]->f_5 - (Global_39.f_190[iParam0]->f_5 && iParam1));
		return;
	}
	Global_1071686->f_21325[iParam0]->f_5 = (Global_1071686->f_21325[iParam0]->f_5 - (Global_1071686->f_21325[iParam0]->f_5 && iParam1));
}

void func_2014(int iParam0, bool bParam1)
{
	if (!func_1772(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_2082(func_2081(iParam0));
	}
	else
	{
		func_2083(func_2081(iParam0));
	}
}

bool func_2015(int iParam0)
{
	if (!func_853(iParam0))
	{
		return false;
	}
	return func_857(iParam0, 33554432);
}

int func_2016()
{
	return Global_1939161->f_26;
}

int func_2017(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 121)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

int func_2018(int iParam0, bool bParam1)
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
			if (!bParam1 || func_23() != -1)
			{
				return -1308265478;
			}
			if (func_1518(44))
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
			if (!bParam1 || func_23() != -1)
			{
				return -650528936;
			}
			if (func_1518(44))
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
			if (!bParam1 || func_23() != -1)
			{
				return -877373104;
			}
			if (func_1518(44))
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

void func_2019(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1071686->f_19674[iParam0]->f_2 = iParam1;
}

void func_2020(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (Global_8123[iParam0] || iParam1);
	}
	else
	{
		Global_1071686->f_19674[iParam0] = (Global_1071686->f_19674[iParam0] || iParam1);
	}
}

void func_2021(int iParam0)
{
	if (!func_853(iParam0))
	{
		return;
	}
	if (func_2084(iParam0))
	{
		func_2085(iParam0);
	}
	else
	{
		func_2086(iParam0);
	}
}

bool func_2022(int iParam0)
{
	if (!func_853(iParam0))
	{
		return false;
	}
	return func_857(iParam0, 16777216);
}

int func_2023(int iParam0)
{
	if (!func_853(iParam0))
	{
		return 0;
	}
	return (*Global_1887339)[iParam0]->f_4;
}

int func_2024(int iParam0)
{
	if (!func_853(iParam0))
	{
		return 0;
	}
	iVar0 = func_2087(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_2089(func_2088(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_2025(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0]->f_1 = iParam1;
		return;
	}
	Global_1071686->f_19674[iParam0]->f_1 = iParam1;
}

void func_2026(int iParam0, int iParam1)
{
	if (!func_853(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_8123[iParam0]->f_3 = iParam1;
}

void func_2027(int iParam0)
{
	if (!func_853(iParam0))
	{
		return;
	}
	if (func_2015(iParam0) && func_2090(iParam0))
	{
		func_2082(func_2091(iParam0, 0));
	}
	else
	{
		func_2083(func_2091(iParam0, 0));
	}
}

void func_2028(int iParam0, int iParam1)
{
	if (!func_1913(iParam0))
	{
		return;
	}
	if (!func_2092(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_263[iParam0] = (Global_39.f_263[iParam0] || iParam1);
		return;
	}
	Global_1071686->f_21398[iParam0] = (Global_1071686->f_21398[iParam0] || iParam1);
}

bool func_2029(int iParam0)
{
	if (!func_1913(iParam0))
	{
		return false;
	}
	return func_2092(iParam0, 2);
}

void func_2030(int iParam0, int iParam1)
{
	if (!func_1913(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_263[iParam0] = (&Global_39.f_263[iParam0] - (Global_39.f_263[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_21398[iParam0] = (&Global_1071686->f_21398[iParam0] - (Global_1071686->f_21398[iParam0] && iParam1));
}

void func_2031(int iParam0, bool bParam1)
{
	if (!func_1913(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_2093(iParam0);
	if (bParam1)
	{
		func_2082(iVar0);
	}
	else
	{
		func_2083(iVar0);
	}
}

char* func_2032(int iParam0)
{
	if (Global_3145858->f_61343[iParam0]->f_1 > -1)
	{
		if (func_2094(Global_3145858->f_61343[iParam0]->f_1))
		{
			return _create_var_string(2, Global_3145858->f_52528[Global_3145858->f_61343[iParam0]->f_1]);
		}
		return func_2095(Global_3145858->f_52528[Global_3145858->f_61343[iParam0]->f_1]);
	}
	return "";
}

char* func_2033(int iParam0)
{
	if (is_bit_set(iParam0, 4))
	{
		return _get_label_text("UIC_LB_BLAP");
	}
	if (is_bit_set(iParam0, 15))
	{
		return _get_label_text("UIC_LB_CPCO");
	}
	return "";
}

float func_2034(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

int func_2035(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_1287(iParam0, 1)]);
}

struct<16> func_2036(var uParam0, bool bParam1)
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
		Var0.f_15 = func_722(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_1055() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_2037(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_2038(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_2096(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_2039(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1814149473;
		case 1:
			return -2038682661;
		case 2:
			return 1942029925;
		default:
			break;
	}
	return 0;
}

int func_2040(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2047978619;
		case 1:
			return -586319254;
		case 2:
			return 249896112;
		default:
			break;
	}
	return 0;
}

int func_2041(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_2097(iVar0, 1, 0);
		if (!func_1907(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_2098(&(Var2[iVar34])))
				{
					if (!bParam1 || func_1144(&(Var2[iVar34]), 0, 1, 1) > 0)
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

int func_2042(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_2097(iVar0, 0, 1);
		if (!func_1907(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_2099(&(Var9[iVar41])))
				{
					if (!bParam1 || func_1144(&(Var9[iVar41]), 0, 1, 1) > 0)
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

char* func_2043(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_CARD_TIER_ONE";
		case 1:
			return "MP_PLAYER_CARD_TIER_TWO";
		case 2:
			return "MP_PLAYER_CARD_TIER_THREE";
		default:
			break;
	}
	return "NP_CARD_TIER_INVALID";
}

int func_2044(int iParam0)
{
	if (func_2100(iParam0))
	{
		return (func_2101(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_2045(int iParam0)
{
	iVar0 = func_1962(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_2046(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1856(iParam1, 1);
	iVar1 = func_1962(iParam0, 1);
	iVar2 = func_1958(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	if (!&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_2102(iVar3, 1);
		if (!func_2103(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_2104(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_2105(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_2106(iVar6))
		{
		}
		else
		{
			iVar8 = func_2107(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_2108(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_2047(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_2048(int iParam0, int iParam1)
{
	if (!func_2045(iParam0))
	{
		return false;
	}
	if (!func_2109(iParam1))
	{
		return false;
	}
	iVar0 = func_2110(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_2049(int iParam0)
{
	iVar0 = func_2111(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_2050(vector3 vParam0)
{
	if (!func_2045(vParam0.x))
	{
		return false;
	}
	if (!func_1956(vParam0.y))
	{
		return false;
	}
	if (!func_2066(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_2051(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1856(iParam1, 1);
	iVar1 = func_1962(iParam0, 1);
	iVar2 = func_1958(&(Global_1146212->f_35859.f_919[iVar0]), 1);
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
		iVar5 = func_2102(iVar3, 1);
		if (!func_2103(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_2104(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_2112(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_2106(iVar6))
		{
		}
		else if (!func_2113(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_2107(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_2114(iVar6);
			}
		}
		iVar7++;
	}
	func_2115(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_2052(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_2109(iParam0))
	{
		return;
	}
	iVar0 = func_2110(iParam0, 1);
	if (!func_2045(iParam1))
	{
		return;
	}
	if (!func_1956(iParam2))
	{
		return;
	}
	if (!func_2066(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_2053(int iParam0)
{
	if (!func_2109(iParam0))
	{
		return;
	}
	iVar0 = func_2110(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

int func_2054(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 304794100:
			switch (iParam1)
			{
				case 0:
					return -880922108;
				case 1:
					return 712437748;
				case 2:
					return -132314303;
				default:
					break;
			}
			break;
		case 1467455271:
			switch (iParam1)
			{
				case 0:
					return 1098244389;
				case 1:
					return 856704090;
				case 2:
					return -1750135398;
				default:
					break;
			}
			break;
		case -1794176813:
			switch (iParam1)
			{
				case 0:
					return -216428280;
				case 1:
					return 283298970;
				case 2:
					return -1044664755;
				default:
					break;
			}
			break;
		case 1272538178:
			switch (iParam1)
			{
				case 0:
					return -75395410;
				case 1:
					return 1111923763;
				case 2:
					return 1350842542;
				default:
					break;
			}
			break;
	}
	return 1105014447;
}

int func_2055()
{
	return Global_1139381->f_4621.f_155;
}

bool func_2056(int iParam0)
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

char* func_2057(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_2058(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return &(Global_1139381->f_11.f_1562.f_1647[0]);
		case 1:
			return &(Global_1139381->f_11.f_1562.f_1647[1]);
		default:
			break;
	}
	return -1;
}

int func_2059()
{
	return Global_1940311->f_1433.f_4189.f_2087;
}

char* func_2060()
{
	return func_1763(Global_1940311->f_1433.f_8.f_7);
}

int func_2061()
{
	return Global_1940311->f_1433.f_4189.f_2086;
}

char* func_2062(int iParam0)
{
	if (!func_1990(iParam0))
	{
		if (func_1494(iParam0))
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_LOCKED");
		}
		else
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_LOCKED", func_1994(iParam0));
		}
	}
	else if (!func_2116(iParam0, 1))
	{
		if (func_1494(iParam0))
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_EQUIPPED");
		}
		else
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_EQUIPPED");
		}
	}
	else if (func_1494(iParam0))
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_OPEN");
	}
	else
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_OPEN");
	}
	return "INVALID";
}

char* func_2063(var uParam0)
{
	if (func_2117(uParam0))
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_LOCKED", func_2118(uParam0->f_2, 1));
	}
	else if (uParam0->f_26 || uParam0->f_27)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_VOUCHER");
	}
	else if (uParam0->f_29)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_CASH");
	}
	else if (uParam0->f_23)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE");
	}
	else if (uParam0->f_22)
	{
		if (uParam0->f_14)
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED_MAX");
		}
		else
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED");
		}
	}
	else
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UNEQUIPPED");
	}
	return "INVALID";
}

char* func_2064(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_TITLE");
		case 1:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_1_FOCUS_TITLE");
		case 2:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_2_FOCUS_TITLE");
		case 3:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_3_FOCUS_TITLE");
		default:
			break;
	}
	return "NULL";
}

char* func_2065(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_DESCRIPTION");
		case 1:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 2:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 3:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		default:
			break;
	}
	return "NULL";
}

bool func_2066(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

bool func_2067(int iParam0)
{
	if (!func_2109(iParam0))
	{
		return false;
	}
	iVar0 = func_2119(iParam0);
	if (!func_2045(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_2068(int iParam0)
{
	if (!func_2109(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_2110(iParam0, 1);
	return *Global_1146212->f_35859.f_9286[iVar3];
}

int func_2069(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_2070(int iParam0, int iParam1)
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

void func_2071(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_2072(int iParam0, int iParam1)
{
	iVar0 = func_2000(*iParam0);
	iVar1 = func_1999(*iParam0);
	if (iParam1 < 1 || iParam1 > func_2003(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_2073(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_2074(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_2075(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_2076(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1894(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_2077(var uParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	_datafile_get_string(&(uParam2->f_3), uParam0);
}

bool func_2078(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_2079(int iParam0, int iParam1)
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

void func_2080(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_988(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_2081(int iParam0)
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

void func_2082(int iParam0)
{
	if (func_2120(iParam0) == 62)
	{
		_0x563fcb6620523917(-1145496915, -1482012664);
		_0x563fcb6620523917(-1043953850, -1482012664);
		_0x563fcb6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_2121(iParam0) == 4 || func_2121(iParam0) == 12) || func_1914(func_2121(iParam0)) == 4) || (func_2092(func_2121(iParam0), 8) && ((func_2121(iParam0) == 2 || func_2121(iParam0) == 0) || func_2121(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		_0x563fcb6620523917(iParam0, iVar0);
	}
}

void func_2083(int iParam0)
{
	if (func_2120(iParam0) == 62)
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

bool func_2084(int iParam0)
{
	if (!func_853(iParam0))
	{
		return false;
	}
	return func_857(iParam0, 67108864);
}

void func_2085(int iParam0)
{
	StringCopy(&cVar0, func_2122(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	cVar8 = func_633(cVar0);
	_0x563fcb6620523917(get_hash_key(cVar8), -1482012664);
}

void func_2086(int iParam0)
{
	StringCopy(&cVar0, func_2122(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	cVar8 = func_633(cVar0);
	iVar9 = get_hash_key(cVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

int func_2087(int iParam0)
{
	if (!func_853(iParam0))
	{
		return 0;
	}
	if (func_2022(iParam0))
	{
		return -1;
	}
	return Global_8123[iParam0]->f_3;
}

int func_2088(int iParam0)
{
	if (!func_853(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_13 == -1)
	{
		return Global_8123[iParam0]->f_1;
	}
	return Global_1071686->f_19674[iParam0]->f_1;
}

int func_2089(int iParam0)
{
	if (!func_2123(iParam0))
	{
		return 0;
	}
	func_2124(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((to_float(iVar0) / 60f) + to_float(iVar1)) + (to_float(iVar2) * 60f)) + ((to_float(iVar3) * 24f) * 60f)) + (((to_float(iVar4) * 30.4375f) * 24f) * 60f)) + (((to_float(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = round(fVar6);
	return iVar7;
}

bool func_2090(int iParam0)
{
	if (!func_853(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return true;
	}
	return false;
}

int func_2091(int iParam0, bool bParam1)
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
			return -1840907462;
			return 756710130;
			return 1634157321;
			return 388370024;
			return 1092296123;
			return 467491346;
			return -1391584612;
			return -152111346;
			return 1447551317;
			return 153136092;
			return 1304405732;
			return 1074984055;
			return 1087476368;
			return -1768057340;
			return 1218874593;
			return -1438443836;
			return -2036340415;
			return -597278150;
			return 803939643;
			return -632496195;
			return -965943619;
			return 283532073;
			return -462827524;
			return -69067491;
			return -1864895118;
			return -1929806571;
			return -698525417;
			return -1149739894;
			return 380507325;
			return -875142075;
			return 407796241;
			return -152267914;
			return -1675443320;
			return 1940341639;
			return 1846596114;
			return 907708501;
			return 1825644981;
			return 2065937607;
			return -211317417;
			return 1801307910;
			return -4118897;
			return 1853610692;
			return -1574644415;
			return 2133055515;
			return -1413401932;
			return 801090761;
			return 2131218644;
			return 1708823660;
			return 7976942;
			return 2111120505;
			return 176893118;
			return 1179148161;
			return 602306665;
			return 547412068;
			return -1539748801;
			return -1605119912;
			return -884464063;
			return -1420970720;
			return 1017024547;
			return -1204497306;
			return -1621069480;
			return -458604261;
			return -923391614;
			return -689247089;
			return 44049568;
			return 1350259552;
			return 620414938;
			return -61661574;
			return -725338054;
			return -770123507;
			return 1322486734;
			return -460939553;
			return -1451863552;
			return 173833068;
			return -1681004136;
			return 713715980;
			return -31204969;
			return -1720064790;
			return -532172775;
			return -739067737;
			return -1203133835;
			return -1947411598;
			return -1298718762;
			return -595083064;
			return 884833917;
			return 2141950651;
			return -1049753365;
			return -1437650729;
			return 672925454;
			return 846062774;
			return 1713550306;
			return -1573562784;
			return 1369756178;
			return -736172423;
			return 1597070291;
			return -159501564;
			return -1438809608;
			return -102682392;
			return 676673543;
			return 1869665995;
			return -81068979;
			return 227618407;
			return 2106043438;
			return -1380256064;
			return -2118469183;
			return -558997834;
			return 1563120499;
			return 658339366;
			if (bParam1)
			{
				return 1757124778;
			}
			return 0;
		}

bool func_2092(int iParam0, int iParam1)
{
	if (!func_1913(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_21398[iParam0] && iParam1) != 0;
}

int func_2093(int iParam0)
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

bool func_2094(int iParam0)
{
	return func_447(Global_3145858->f_52528[iParam0]->f_17, 0);
}

var func_2095(var uParam0)
{
	return uParam0;
}

void func_2096(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_2125(&(uParam0->f_4));
}

int func_2097(int iParam0, bool bParam1, bool bParam2)
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

bool func_2098(int iParam0)
{
	return func_988(iParam0) == 1946043663;
}

bool func_2099(int iParam0)
{
	return func_988(iParam0) == -126813555;
}

bool func_2100(int iParam0)
{
	iVar0 = func_1856(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_2101(int iParam0)
{
	iVar0 = func_1856(iParam0, 1);
	if (func_2100(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_2126(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_2127(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_2128(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_2129(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_2130(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_2131(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_2102(int iParam0, int iParam1)
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

bool func_2103(int iParam0)
{
	iVar0 = func_2102(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_2104(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_2132(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_2105(int iParam0)
{
	if (!func_2103(iParam0))
	{
		return;
	}
	iVar0 = func_2102(iParam0, 1);
	if (!func_655(&(Global_1146212->f_2169[iVar0])))
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
	if (!func_2133(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_2134(Global_1146212->f_2169[iVar0]->f_203, 1);
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

bool func_2106(int iParam0)
{
	iVar0 = func_2107(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_2107(int iParam0, int iParam1)
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

void func_2108(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_2135();
			break;
		case -2103256604:
			func_2136();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_2137(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_2137(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_2137(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_1528(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_2137(iParam0));
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
			func_2139(func_2138(iParam0));
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
			func_2140();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_655(17);
			break;
		case -824728332:
			func_655(16);
			break;
	}
}

bool func_2109(int iParam0)
{
	iVar0 = func_2110(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_2110(int iParam0, int iParam1)
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

int func_2111(int iParam0)
{
	iVar0 = func_2119(iParam0);
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
		iVar64 = func_1962(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_2141(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_2142(&(Global_1146212->f_35859.f_9503[iVar65])) };
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

void func_2112(int iParam0)
{
	if (!func_2103(iParam0))
	{
		return;
	}
	iVar0 = func_2102(iParam0, 1);
	if (!func_655(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_2133(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_2134(Global_1146212->f_2169[iVar0]->f_203, 1);
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

bool func_2113(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_2143(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_2114(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_2135();
			break;
		case -2103256604:
			func_2136();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_2137(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_2137(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_2137(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_1528(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_2137(iParam0));
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
			iVar2 = func_2138(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_2144(iParam0, 0));
			func_2145(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_2144(iParam0, 1));
			func_2145(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_2144(iParam0, 2));
			func_2145(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_2144(iParam0, 3));
			func_2145(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_2138(iParam0);
			func_2145(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_2138(iParam0);
			func_2145(iVar2, 4, 1, -1, 0);
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
			func_2146();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_655(17);
			break;
		case -824728332:
			func_655(16);
			break;
	}
}

void func_2115(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_2147(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_2148(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

bool func_2116(int iParam0, bool bParam1)
{
	iVar0 = func_1685(iParam0);
	Var1 = { func_717(bParam1) };
	iVar5 = func_2149(&Var1, iVar0, bParam1);
	bVar6 = iVar5 == false;
	return bVar6;
}

bool func_2117(var uParam0)
{
	return (!uParam0->f_20 && !func_1951(uParam0));
}

int func_2118(int iParam0, bool bParam1)
{
	if (!func_721(iParam0, 0))
	{
		return -1;
	}
	_0x7c1c2062cfad06fe(iParam0, &Var0);
	if (Var0.f_1 < 1)
	{
		return -1;
	}
	else if (func_1465(iParam0, 81450561) || func_1465(iParam0, 1342455455))
	{
		return -1;
	}
	switch (Var0)
	{
		case -1399517481:
		case -999519443:
		case 128291088:
			if (bParam1)
			{
				return Var0.f_1;
			}
			return -1;
		case -55206167:
			return 1;
		case -697100746:
			return Var0.f_1;
		default:
			break;
	}
	return -1;
}

int func_2119(int iParam0)
{
	if (!func_2109(iParam0))
	{
		return -1;
	}
	iVar0 = func_2110(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

int func_2120(int iParam0)
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
			return 30;
		case 2023240596:
			return 29;
		case 1285083821:
			return 31;
		case -1840907462:
			return 32;
		case 756710130:
			return 33;
		case 1634157321:
			return 34;
		case 388370024:
			return 35;
		case 1092296123:
			return 36;
		case 467491346:
			return 37;
		case -1391584612:
			return 38;
		case -152111346:
			return 39;
		case 1447551317:
			return 40;
		case 153136092:
			return 41;
		case 1304405732:
			return 42;
		case 1074984055:
			return 43;
		case 1087476368:
			return 53;
		case -1768057340:
			return 54;
		case 1218874593:
			return 44;
		case -1438443836:
			return 55;
		case -2036340415:
			return 45;
		case -597278150:
			return 56;
		case 803939643:
			return 46;
		case -632496195:
			return 57;
		case -965943619:
			return 47;
		case 283532073:
			return 48;
		case -462827524:
			return 49;
		case -69067491:
			return 50;
		case -1864895118:
			return 51;
		case -1929806571:
			return 58;
		case 1162337247:
			return 28;
		case -698525417:
			return 59;
		case -1149739894:
			return 60;
		case 380507325:
			return 52;
		case -875142075:
			return 61;
		case 407796241:
			return 62;
		case -152267914:
			return 63;
		case -1675443320:
			return 64;
		case 1940341639:
			return 65;
		case 1846596114:
			return 66;
		case 907708501:
			return 67;
		case 1825644981:
			return 69;
		case 2065937607:
			return 70;
		case -211317417:
			return 71;
		case 1801307910:
			return 72;
		case -4118897:
			return 73;
		case 1853610692:
			return 74;
		case -1574644415:
			return 75;
		case 2133055515:
			return 76;
		case -1413401932:
			return 77;
		case 801090761:
			return 78;
		case 2131218644:
			return 79;
		case 1708823660:
			return 80;
		case 7976942:
			return 81;
		case 2111120505:
			return 82;
		case 176893118:
			return 83;
		case 602306665:
			return 68;
		case 1179148161:
			return 84;
		case 547412068:
			return 85;
		case -1539748801:
			return 86;
		case -1605119912:
			return 87;
		case -884464063:
			return 88;
		case -1420970720:
			return 89;
		case 1017024547:
			return 90;
		case -1204497306:
			return 91;
		case -1621069480:
			return 92;
		case -458604261:
			return 93;
		case -923391614:
			return 94;
		case -689247089:
			return 95;
		case 44049568:
			return 97;
		case 1350259552:
			return 98;
		case 620414938:
			return 96;
		case -61661574:
			return 99;
		case -725338054:
			return 100;
		case -770123507:
			return 101;
		case 1322486734:
			return 102;
		case -460939553:
			return 103;
		case -1451863552:
			return 104;
		case 713715980:
			return 107;
		case -31204969:
			return 108;
		case -1720064790:
			return 109;
		case 173833068:
			return 105;
		case -1681004136:
			return 106;
		case -532172775:
			return 110;
		case -739067737:
			return 111;
		case -1203133835:
			return 112;
		case -1947411598:
			return 113;
		case -1049753365:
			return 114;
		case -1298718762:
			return 115;
		case -595083064:
			return 116;
		case 884833917:
			return 117;
		case 2141950651:
			return 118;
		case -1437650729:
			return 119;
		case 672925454:
			return 135;
		case 846062774:
			return 136;
		case 1713550306:
			return 137;
		case -1573562784:
			return 138;
		case 1369756178:
			return 127;
		case -736172423:
			return 128;
		case 1597070291:
			return 129;
		case -159501564:
			return 131;
		case -1438809608:
			return 130;
		case -102682392:
			return 132;
		case 676673543:
			return 133;
		case 1869665995:
			return 134;
		case -81068979:
			return 120;
		case 227618407:
			return 121;
		case 2106043438:
			return 122;
		case -1380256064:
			return 123;
		case -2118469183:
			return 124;
		case -558997834:
			return 125;
		case 1563120499:
			return 126;
		case 658339366:
			return 139;
		default:
			break;
	}
	return -1;
}

int func_2121(int iParam0)
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

char* func_2122(int iParam0)
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
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

bool func_2123(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_2002(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1594(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1593(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1999(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_2000(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_2001(iParam0);
	if (iVar5 < 1 || iVar5 > func_2003(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_2124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_2150(func_1592(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_2125(var uParam0)
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

bool func_2126(int iParam0)
{
	iVar0 = func_1856(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_2127(int iParam0)
{
	iVar0 = func_1856(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_2128(int iParam0)
{
	iVar0 = func_1856(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_2129(int iParam0)
{
	iVar0 = func_1856(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_2130(int iParam0)
{
	iVar0 = func_1856(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_2131(int iParam0)
{
	iVar0 = func_1856(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_2132(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_2151(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_2133(int iParam0)
{
	iVar0 = func_2134(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_2134(int iParam0, int iParam1)
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

void func_2135()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_78((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_2136()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_2137(int iParam0)
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

int func_2138(int iParam0)
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

void func_2139(int iParam0)
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

void func_2140()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

bool func_2141(int iParam0, int iParam1)
{
	if (!func_2045(iParam0))
	{
		return false;
	}
	iVar0 = func_1962(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_2047(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_2110(iVar2, 1)];
		Var4 = { func_2142(iVar3) };
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
			if (!func_2152() && !func_2153())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_2152())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_2044(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_2044(iParam1);
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
			iVar1 = func_2044(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_1252(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_1352(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_2044(iParam1);
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

struct<31> func_2142(int iParam0)
{
	iVar0 = func_1962(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_2143(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_2151(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_2144(int iParam0, int iParam1)
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

void func_2145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_2146()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_2147(int iParam0)
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

char* func_2148(int iParam0)
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

int func_2149(var uParam0, bool bParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_699(bParam2), uParam0, bParam1);
}

void func_2150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_2154(iParam0, iParam1, 1))
	{
		iVar0 = func_2000(iParam1);
		iVar1 = func_1999(iParam0);
		iVar2 = (func_1999(iParam0) - func_1999(iParam1));
		iVar3 = (func_2000(iParam0) - func_2000(iParam1));
		iVar4 = (func_2001(iParam0) - func_2001(iParam1));
		iVar5 = (func_1593(iParam0) - func_1593(iParam1));
		iVar6 = (func_1594(iParam0) - func_1594(iParam1));
		iVar7 = (func_2002(iParam0) - func_2002(iParam1));
	}
	else
	{
		iVar0 = func_2000(iParam0);
		iVar1 = func_1999(iParam1);
		iVar2 = (func_1999(iParam1) - func_1999(iParam0));
		iVar3 = (func_2000(iParam1) - func_2000(iParam0));
		iVar4 = (func_2001(iParam1) - func_2001(iParam0));
		iVar5 = (func_1593(iParam1) - func_1593(iParam0));
		iVar6 = (func_1594(iParam1) - func_1594(iParam0));
		iVar7 = (func_2002(iParam1) - func_2002(iParam0));
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
		iVar4 = (iVar4 + func_2003(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_2155(to_float(iVar0 + 1), 0f, 12f));
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

bool func_2151(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_2156(iVar7);
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

bool func_2152()
{
	return Global_1572887->f_6;
}

bool func_2153()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_73(func_373(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_1650(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

bool func_2154(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_2123(iParam1) || !func_2123(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_2155(float fParam0, float fParam1, float fParam2)
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

int func_2156(int iParam0)
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

