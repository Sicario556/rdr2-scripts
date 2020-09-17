void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(ScriptParam_0);
	while (!func_2(0, 0) && !func_3())
	{
		func_4();
		wait(0);
	}
	func_5();
	terminate_this_thread();
}

void func_1(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	network_set_script_is_safe_for_network_game();
	Local_19.f_1 = vParam0.z;
	func_6(64);
}

bool func_2(bool bParam0, bool bParam1)
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

bool func_3()
{
	if (Local_19 == 34)
	{
		return true;
	}
	if (!is_bit_set(Global_1298166->f_201, 0))
	{
		return true;
	}
	iVar0 = func_7(Global_1298166->f_200, 1);
	if (((Local_19.f_1 != iVar0 && iVar0 != -1) && Local_19 < 25) && !func_8())
	{
		return true;
	}
	if (((!func_9(*Local_19.f_13[3]) && Local_19 == 25) && vdist(*Local_19.f_13[3], get_entity_coords(player_ped_id(), false, false)) > Global_1901947->f_789.f_10) && !func_10(6, 255))
	{
		return true;
	}
	return false;
}

void func_4()
{
	func_11();
	func_12();
	func_13(532942402);
	if (func_14(64))
	{
		if (Local_19 < 33)
		{
			func_15(33);
		}
	}
	else if (func_14(128))
	{
		if (Local_19 > 3)
		{
			if (Global_1298166->f_1 == 4)
			{
				if (Local_19 < 21)
				{
					func_15(21);
				}
				else if (func_16(Local_19.f_1) < 80f)
				{
					func_6(128);
				}
			}
			else if (Local_19 < 25)
			{
				func_15(25);
			}
			else if (func_16(Local_19.f_1) < 80f)
			{
				func_6(128);
			}
		}
	}
	func_17(&(Local_19.f_87));
	switch (Local_19)
	{
		case 0:
			func_18();
			func_15(1);
			break;
		case 1:
			if (func_19())
			{
				func_15(2);
			}
			break;
		case 2:
			if (func_20())
			{
				func_15(3);
			}
			break;
		case 3:
			if (func_14(128))
			{
				if (Global_1298166->f_1 == 4)
				{
					func_15(21);
				}
				else
				{
					func_15(25);
				}
				return;
			}
			if (Global_1298166->f_1 == 4)
			{
				func_15(21);
				return;
			}
			if (!func_21(player_id(), 16) && (Global_1298166->f_1 == 3 || Global_1298166->f_1 == 2))
			{
				if (func_22())
				{
					if (func_23(player_id(), 1, 0, 1))
					{
						func_24(8192, 0);
					}
					return;
				}
				func_15(10);
			}
			else
			{
				func_15(8);
			}
			break;
		case 8:
			if (!network_is_player_active(Local_19.f_85) || !_0x81fb74c83c2ed69f(Local_19.f_85))
			{
				func_15(33);
			}
			func_25(0);
			if (Global_1298166->f_1 == 2 && !func_22())
			{
				func_15(10);
				return;
			}
			if (func_26(0))
			{
				if (func_23(player_id(), 1, 0, 1))
				{
					func_24(8192, 0);
				}
				func_27(0);
				return;
			}
			else
			{
				func_27(1);
			}
			func_28();
			func_29();
			if (func_30())
			{
				func_31();
				func_27(0);
				func_32(Local_19.f_1);
				func_33(16384);
				func_15(5);
			}
			break;
		case 5:
			func_31();
			if (!func_21(player_id(), 128))
			{
			}
			else
			{
				if (func_34())
				{
					func_15(4);
				}
				Jump @2130; //curOff = 762
				func_31();
				if (func_35())
				{
					func_36();
					_0x4b05b97ba46f419d(0);
					func_37(1, 1);
					func_15(6);
				}
				Jump @2130; //curOff = 797
				func_31();
				if (func_38())
				{
					func_15(7);
				}
				Jump @2130; //curOff = 816
				func_31();
				if (func_39())
				{
					func_40();
					func_41();
					func_15(9);
				}
				Jump @2130; //curOff = 844
				func_31();
				func_42();
				if (func_43())
				{
					func_44();
					func_15(30);
					return;
				}
				if ((_does_anim_scene_exist(Local_19.f_6) && _is_anim_scene_finished(Local_19.f_6, false)) && Local_19.f_4 == 5)
				{
					func_45(0);
					func_44();
					func_27(1);
					func_46();
					_0x4b05b97ba46f419d(1);
					func_37(1, 0);
					func_47();
					func_15(25);
				}
				Jump @2130; //curOff = 951
				if (func_48())
				{
					func_27(0);
					func_33(16384);
					if (Global_1298166->f_1 == 2)
					{
						func_15(11);
					}
					else
					{
						func_15(12);
					}
				}
				Jump @2130; //curOff = 998
				if (!func_49())
				{
					func_50(1);
					func_15(33);
					return;
				}
				if (func_51())
				{
					func_52();
					func_15(13);
				}
				Jump @2130; //curOff = 1040
				if (!func_49())
				{
					func_50(1);
					func_15(33);
					return;
				}
				func_53();
				func_15(13);
				Jump @2130; //curOff = 1075
				func_31();
				if (!func_49())
				{
					func_15(33);
					func_50(1);
					return;
				}
				if (func_39())
				{
					if (func_54())
					{
						func_36();
						func_32(Local_19.f_1);
						func_15(15);
					}
					else
					{
						func_32(Local_19.f_1);
						func_15(19);
					}
				}
				Jump @2130; //curOff = 1153
				func_31();
				if (!func_21(player_id(), 128) && !func_55())
				{
				}
				else
				{
					if (func_34())
					{
						func_15(14);
					}
					Jump @2130; //curOff = 1200
					func_31();
					if (func_35())
					{
						_0x4b05b97ba46f419d(0);
						func_37(1, 1);
						func_15(16);
					}
					Jump @2130; //curOff = 1232
					func_31();
					if (func_38())
					{
						func_15(17);
					}
					Jump @2130; //curOff = 1252
					func_31();
					func_40();
					func_41();
					func_15(18);
					Jump @2130; //curOff = 1273
					func_31();
					func_42();
					if (func_43())
					{
						func_44();
						func_15(30);
						return;
					}
					if ((_does_anim_scene_exist(Local_19.f_6) && _is_anim_scene_finished(Local_19.f_6, false)) && Local_19.f_4 == 5)
					{
						func_45(0);
						func_44();
						func_27(1);
						func_46();
						_0x4b05b97ba46f419d(1);
						func_37(1, 0);
						func_47();
						func_56();
						func_15(25);
					}
					Jump @2130; //curOff = 1384
					if (!func_49())
					{
						func_15(33);
						func_50(1);
						func_45(0);
						return;
					}
					if (func_57(0))
					{
						func_27(1);
						func_58(0);
						func_47();
						func_15(20);
					}
					Jump @2130; //curOff = 1442
					if (func_59())
					{
						func_37(1, 0);
						func_45(0);
						func_56();
						func_15(25);
					}
					Jump @2130; //curOff = 1474
					if (func_48())
					{
						func_33(16384);
						Local_19.f_2 = 2;
						func_15(23);
					}
					Jump @2130; //curOff = 1502
					if (func_57(1))
					{
						func_37(1, 0);
						func_32(Local_19.f_1);
						func_47();
						func_15(22);
					}
					Jump @2130; //curOff = 1538
					if (func_60())
					{
						func_15(24);
					}
					Jump @2130; //curOff = 1554
					if (func_21(player_id(), 64) && func_61())
					{
						func_62(32768);
						func_15(25);
					}
					Jump @2130; //curOff = 1593
					func_25(0);
					if (func_43())
					{
						func_15(30);
						return;
					}
					if (func_26(1))
					{
						func_27(0);
						return;
					}
					else
					{
						func_27(1);
					}
					if (func_30())
					{
						func_63(2048);
						func_27(0);
						func_15(26);
					}
					Jump @2130; //curOff = 1666
					if (func_34())
					{
						func_15(27);
					}
					Jump @2130; //curOff = 1682
					if (func_35())
					{
						func_15(28);
					}
					Jump @2130; //curOff = 1698
					func_40();
					func_64(2);
					_0x4b05b97ba46f419d(0);
					func_37(1, 1);
					func_15(29);
					Jump @2130; //curOff = 1728
					func_65();
					if (_does_anim_scene_exist(Local_19.f_6) && _is_anim_scene_finished(Local_19.f_6, false))
					{
						func_44();
						func_46();
						func_66();
						_0x442b4347b6ec36e8(player_ped_id(), 1000, true);
						func_33(32768);
						func_15(32);
					}
					Jump @2130; //curOff = 1798
					if (func_67())
					{
						func_33(32768);
						func_58(1);
						func_68(1);
						func_66();
						func_15(31);
					}
					Jump @2130; //curOff = 1836
					if (func_69())
					{
						func_15(32);
					}
					Jump @2130; //curOff = 1852
					_0x4b05b97ba46f419d(1);
					func_37(0, 0);
					func_70(0);
					func_45(0);
					if (Global_1298166->f_1 == 4)
					{
						func_50(1);
						func_71(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
						func_64(32);
						func_64(64);
					}
					else if (Global_1298166->f_1 == 2)
					{
						func_50(1);
					}
					else if (Global_1298166->f_1 == 3)
					{
						func_50(1);
						func_71(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
						func_62(128);
					}
					func_15(33);
					Jump @2130; //curOff = 1984
					func_72();
					func_73();
					if (func_14(64))
					{
						if (Global_1298166->f_1 == 4)
						{
							func_50(1);
							func_71(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
						}
						func_6(64);
					}
					func_64(2048);
					if (!network_is_player_active(Local_19.f_85) || !_0x81fb74c83c2ed69f(Local_19.f_85))
					{
						func_15(34);
					}
					else if (func_74(128))
					{
						func_15(34);
					}
					else if (Local_19.f_3 != 0)
					{
						func_15(34);
					}
					else
					{
						func_15(0);
					}
				}
			}
			default:
				break;
	}
}

void func_5()
{
	func_72();
	func_25(1);
	func_58(1);
	func_68(1);
	if (Global_1298166->f_1 == 4)
	{
		if (func_74(32768))
		{
			func_50(1);
			func_71(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
		}
	}
	else if (Global_1298166->f_1 == 3)
	{
		if (!func_14(8))
		{
			func_50(1);
			func_71(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
		}
		else
		{
			func_6(8);
		}
	}
	func_70(0);
	func_64(2);
	func_64(32);
	func_64(8);
	func_64(64);
	func_64(2048);
	func_33(32768);
	func_45(0);
	if (func_14(128))
	{
		func_6(128);
	}
	if (func_74(1024))
	{
		if (_0xcf45df50c7775f2a())
		{
			_0x5a8b01199c3e79c3();
		}
		func_75(1024);
	}
	if ((Local_19.f_4 == 1 || Local_19.f_4 == 2) || Local_19.f_4 == 4)
	{
		if (!is_screen_faded_in() && !is_screen_fading_in())
		{
			do_screen_fade_in(250);
		}
	}
	func_76(&(Local_19.f_87));
	_text_database_delete("MSMP");
	func_37(0, 0);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (_does_volume_exist(&(Local_19.f_94[iVar0])))
		{
			_delete_volume(&(Local_19.f_94[iVar0]));
		}
		iVar0++;
	}
	if (func_77(2, 8))
	{
		func_78(2, 8, 0);
	}
}

void func_6(int iParam0)
{
	func_79(&(Global_1298378->f_156), iParam0);
}

int func_7(int iParam0, bool bParam1)
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

bool func_8()
{
	if ((Local_19 == 9 || Local_19 == 18) || Local_19 == 20)
	{
		return true;
	}
	return false;
}

bool func_9(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_10(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_80(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_81())
	{
		return func_80(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_80(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_11()
{
	if (func_82(888))
	{
		return;
	}
	if (func_21(player_id(), 1))
	{
		return;
	}
	if (Local_19 != 8)
	{
		return;
	}
	if ((Local_19.f_85 != player_id() || is_screen_faded_out()) || is_screen_fading_out())
	{
		return;
	}
	if (!does_blip_exist(Global_1298378->f_128))
	{
		return;
	}
	if (func_16(Local_19.f_1) < (80f * 0.5f))
	{
		func_83(888, 0);
	}
}

void func_12()
{
	switch (Local_19.f_97)
	{
		case 0:
			if (func_77(2, 8))
			{
				func_84(1);
			}
			else if (func_85())
			{
			}
			else if (&Global_1048584)
			{
			}
			else if (func_87(func_86()))
			{
			}
			else if (!func_88(532942402))
			{
			}
			else
			{
				func_89(2, 8);
				func_84(1);
				Jump @246; //curOff = 113
				if (!func_77(2, 8))
				{
					func_84(0);
				}
				else if (!func_88(1661805647))
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else if (func_87(func_86()))
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else if (&Global_1048584)
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else if (func_85())
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else
				{
					Jump @246; //curOff = 237
				}
			}
			default:
				break;
	}
}

void func_13(int iParam0)
{
	iVar0 = &Local_19.f_94[func_90(iParam0)];
	if (!_does_volume_exist(iVar0))
	{
		return;
	}
	if (func_91(&(Local_19.f_91)))
	{
		if (!func_92(&(Local_19.f_91), 2f))
		{
			return;
		}
	}
	vVar2 = { _0xf70f00013a62f866(iVar0) };
	vVar5 = { _0x3e2a25b2416dd67e(iVar0) };
	fVar1 = func_93(vVar5.x, vVar5.y);
	fVar1 = func_93(fVar1, vVar5.z);
	bVar8 = false;
	if (_is_explosion_in_volume(-1, iVar0))
	{
		bVar8 = true;
	}
	if (!bVar8)
	{
		iVar9 = get_number_of_fires_in_range(vVar2, fVar1);
		if (iVar9 > 0)
		{
			if (get_closest_fire_pos(&vVar10, vVar2))
			{
				if (_0xf256a75210c5c0eb(iVar0, vVar10))
				{
					bVar8 = true;
				}
			}
		}
	}
	if (bVar8)
	{
		_0x2fcd528a397e5c88(iVar0, 589824);
		func_94(&(Local_19.f_91));
	}
}

bool func_14(int iParam0)
{
	return func_95(Global_1298378->f_156, iParam0);
}

void func_15(int iParam0)
{
	Local_19 = iParam0;
}

float func_16(int iParam0)
{
	return &(Global_1298378->f_6.f_17[iParam0]);
}

void func_17(int* iParam0)
{
	switch (iParam0->f_3)
	{
		case 0:
			if (Local_19 <= 9)
			{
				if (func_97(func_96(), 1))
				{
					if (func_98())
					{
						iParam0->f_2 = -630605689;
					}
				}
				if (iParam0->f_2 != 0)
				{
					request_model(iParam0->f_2, false);
					iParam0->f_3 = 1;
				}
			}
			break;
		case 1:
			if (has_model_loaded(iParam0->f_2))
			{
				if (does_entity_exist(iParam0->f_1))
				{
					*iParam0 = create_object(iParam0->f_2, get_entity_coords(iParam0->f_1, true, false) + Vector(10f, 0f, 0f), false, true, false, false, false);
					if (does_entity_exist(*iParam0))
					{
						set_entity_invincible(*iParam0, true);
						set_entity_collision(*iParam0, false, false);
						attach_entity_to_entity(*iParam0, iParam0->f_1, 0, 0.55f, 0f, 2f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
						iParam0->f_3 = 2;
					}
				}
				else if (func_99(Local_19.f_1))
				{
					iParam0->f_1 = func_101(func_100(Local_19.f_1, 0, 1), 0, 0);
				}
			}
			break;
		case 2:
			if ((Local_19 > 9 || !does_entity_exist(iParam0->f_1)) || !does_entity_exist(*iParam0))
			{
				func_76(iParam0);
				iParam0->f_3 = 0;
			}
			break;
	}
}

void func_18()
{
	func_102();
	Local_19.f_85 = func_96();
	Local_19.f_86 = _0x901e0dc25080c8b9(Local_19.f_85);
	if (_0x4be6c13a45cca8ec(Local_19.f_86) == player_id())
	{
		func_62(131072);
	}
	else if (Local_19.f_86 != Global_1296859->f_15)
	{
		func_62(262144);
	}
	func_103();
	func_64(2048);
}

bool func_19()
{
	iVar0 = 1;
	sVar1 = "MSMP";
	_text_database_request(sVar1);
	if (!_text_database_has_loaded(sVar1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_20()
{
	if (!func_104(Local_19.f_1, &vVar0, &vVar13))
	{
		return false;
	}
	bVar26 = (_0x424b17a7dc5c90bc(player_id()) && _0x149a2751ab66ac02(Global_1296859->f_15) > 1);
	iVar27 = 0;
	while (iVar27 < 4)
	{
		if (!_does_volume_exist(Local_19.f_35[iVar27]->f_2))
		{
			Local_19.f_35[iVar27]->f_2 = _create_volume_cylinder(*vVar0[iVar27], 0f, 0f, 0f, *vVar13[iVar27]);
		}
		if (!func_105(&(Local_19.f_35[iVar27])))
		{
			Local_19.f_35[iVar27] = func_107(func_106(iVar27, 0), -719620017, Local_19.f_35[iVar27]->f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		}
		if ((iVar27 == 0 || iVar27 == 1) && !func_105(Local_19.f_35[iVar27]->f_1))
		{
			Local_19.f_35[iVar27]->f_1 = func_107(func_106(iVar27, 1), 992265328, Local_19.f_35[iVar27]->f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
			if (!bVar26)
			{
				func_108(Local_19.f_35[iVar27]->f_1, 0, 0);
				func_109(Local_19.f_35[iVar27]->f_1, 0, 0, 1);
			}
		}
		if (iVar27 == 0)
		{
			Local_19.f_35[iVar27]->f_3 = -2097019783;
		}
		else if (iVar27 == 1)
		{
			Local_19.f_35[iVar27]->f_3 = 302114997;
		}
		iVar27++;
	}
	func_62(256);
	return true;
}

bool func_21(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_95((*Global_1298536)[iVar0]->f_86, iParam1);
	}
	return false;
}

bool func_22()
{
	if (func_110())
	{
		return true;
	}
	if (func_23(player_id(), 1, 0, 1))
	{
		return true;
	}
	if (!func_111())
	{
		return true;
	}
	if (func_87(func_112(0)))
	{
		return true;
	}
	if (func_113(0))
	{
		return true;
	}
	if (network_is_in_mp_cutscene())
	{
		return true;
	}
	iVar0 = func_114(1427578635, player_id(), 0, 1);
	if (func_115(iVar0))
	{
		return true;
	}
	if (func_116())
	{
		return true;
	}
	return false;
}

int func_23(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_117(bParam1, bParam2, bParam3);
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

void func_24(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (func_74(iParam0))
	{
		return;
	}
	if (func_118() || func_119())
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!_does_volume_exist(Local_19.f_35[iVar0]->f_2))
				{
				}
				else if (!func_105(&(Local_19.f_35[iVar0])))
				{
				}
				else if (!func_120(Global_34, Local_19.f_35[iVar0]->f_2, 1, 0))
				{
				}
				else if (func_121(_create_var_string(2, "MS_WARN_WANTED_NO_ENTRY"), 10000, 0, 0, 0, 1) != 0)
				{
					func_62(iParam0);
				}
				iVar0++;
			}
			break;
	}
}

void func_25(bool bParam0)
{
	if (bParam0)
	{
		if (func_74(64))
		{
			_0xf9e951a1e5517c06();
			func_75(64);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_105(&(Local_19.f_35[iVar1])) && func_122(&(Local_19.f_35[iVar1]), 1))
			{
				bVar0 = true;
			}
			else
			{
				iVar1++;
			}
		}
		if (bVar0)
		{
			if (!func_74(64))
			{
				_0x76cbcd9eadc00955();
				func_62(64);
			}
		}
		else if (func_74(64))
		{
			_0xf9e951a1e5517c06();
			func_75(64);
		}
	}
}

bool func_26(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1298000->f_42)
		{
			return true;
		}
		return false;
	}
	if (Global_1298378->f_131.f_4)
	{
		return true;
	}
	if (func_123(512))
	{
		return true;
	}
	if (!does_entity_exist(Global_34) || is_entity_dead(Global_34))
	{
		return true;
	}
	if (_0xb655db7582aec805(Global_34))
	{
		return true;
	}
	if (is_ped_on_mount(Global_34))
	{
		return true;
	}
	if (is_ped_on_vehicle(Global_34, false) || is_ped_in_any_vehicle(Global_34, false))
	{
		return true;
	}
	if (is_ped_ragdoll(Global_34))
	{
		return true;
	}
	if (_is_ped_lassoed(Global_34))
	{
		return true;
	}
	if (_is_ped_hogtied(Global_34) || _0xd453bb601d4a606e(Global_34))
	{
		return true;
	}
	if (_is_ped_hogtying(Global_34))
	{
		return true;
	}
	if (_is_ped_carrying(Global_34))
	{
		return true;
	}
	if (is_entity_on_fire(Global_34))
	{
		return true;
	}
	if (is_ped_climbing(Global_34))
	{
		return true;
	}
	if (_0x038b1f1674f0e242(Global_34))
	{
		return true;
	}
	if (func_124())
	{
		return true;
	}
	if (is_aim_cam_active())
	{
		return true;
	}
	iVar0 = _0x693126b5d0457d0d(Global_34);
	if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
	{
		return true;
	}
	if (func_22())
	{
		return true;
	}
	return false;
}

void func_27(bool bParam0)
{
	if (bParam0)
	{
		if (func_74(256))
		{
			return;
		}
	}
	else if (!func_74(256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_105(&(Local_19.f_35[iVar0])))
		{
			func_108(&(Local_19.f_35[iVar0]), bParam0, 0);
			func_109(&(Local_19.f_35[iVar0]), bParam0, 0, 1);
		}
		if (func_105(Local_19.f_35[iVar0]->f_1))
		{
			func_108(Local_19.f_35[iVar0]->f_1, bParam0, 0);
			func_109(Local_19.f_35[iVar0]->f_1, bParam0, 0, 1);
		}
		iVar0++;
	}
	if (bParam0)
	{
		func_62(256);
	}
	else
	{
		func_75(256);
	}
}

void func_28()
{
	if (!func_74(256))
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		iVar1 = _0xd1bf325c8252a982(Global_1296859->f_15, &Var2);
		if (iVar1 > 1)
		{
			iVar53 = iVar1;
			iVar52 = 0;
			while (iVar52 <= (iVar1 - 1))
			{
				if (func_125(*Var2[iVar52]))
				{
					iVar54 = network_get_player_from_gamer_handle(Var2[iVar52]);
					if (network_is_player_active(iVar54))
					{
						if (func_21(iVar54, 1))
						{
							iVar53 = (iVar53 - 1);
						}
						else if (func_126(1048576, iVar54))
						{
							iVar53 = (iVar53 - 1);
						}
						else
						{
							iVar52++;
						}
						if (iVar53 > 1)
						{
							bVar0 = true;
						}
						iVar55 = 0;
						while (iVar55 <= 1)
						{
							if (func_105(Local_19.f_35[iVar55]->f_1))
							{
								if (bVar0)
								{
									if (!func_127(Local_19.f_35[iVar55]->f_1, 0))
									{
										func_109(Local_19.f_35[iVar55]->f_1, 1, 0, 1);
										func_108(Local_19.f_35[iVar55]->f_1, 1, 1);
									}
								}
								else if (func_127(Local_19.f_35[iVar55]->f_1, 0))
								{
									func_109(Local_19.f_35[iVar55]->f_1, 0, 0, 1);
									func_108(Local_19.f_35[iVar55]->f_1, 0, 1);
								}
							}
							iVar55++;
						}
					}
				}
			}
		}
	}
}

void func_29()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == 0 || iVar0 == 1)
		{
			if (func_127(&(Local_19.f_35[iVar0]), 0))
			{
				iVar1 = func_96();
				if (_network_is_player_index_valid(iVar1))
				{
					_0x8b55b324a9123f6b(Local_19.f_35[iVar0]->f_3, Local_19.f_35[iVar0]->f_2, _create_var_string(10, "MS_ENTER_PROMPT_GROUP", func_129(get_player_name(iVar1), func_128(iVar1, 1, -1, 0))), 3, 1, 0);
					_uiprompt_set_group(func_130(&(Local_19.f_35[iVar0])), Local_19.f_35[iVar0]->f_3, 0);
					if (func_127(Local_19.f_35[iVar0]->f_1, 0))
					{
						_uiprompt_set_group(func_130(Local_19.f_35[iVar0]->f_1), Local_19.f_35[iVar0]->f_3, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_30()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_105(&(Local_19.f_35[iVar0])) && func_131(&(Local_19.f_35[iVar0]), 1))
		{
			Local_19.f_2 = func_132(iVar0);
			func_133(Local_19.f_2);
			if (iVar0 == 0 || iVar0 == 1)
			{
				func_62(8);
			}
			else
			{
				func_62(32);
			}
			return true;
		}
		if (func_105(Local_19.f_35[iVar0]->f_1) && func_131(Local_19.f_35[iVar0]->f_1, 1))
		{
			Local_19.f_2 = func_132(iVar0);
			func_133(Local_19.f_2);
			func_62(16);
			func_63(2);
			func_134();
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_31()
{
	func_135();
	func_136(0);
	if (func_137())
	{
		func_138();
	}
	disable_control_action(0, -209515122, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -824104112, false);
	disable_control_action(0, 1663574939, false);
	disable_control_action(0, -2128655846, false);
	disable_control_action(0, 516589524, false);
	disable_control_action(0, -822242784, false);
	set_ped_reset_flag(Global_34, 168, true);
	set_ped_reset_flag(Global_34, 108, true);
	func_45(1);
}

void func_32(var uParam0)
{
	Global_1298378->f_131 = uParam0;
	func_33(16);
	func_63(1);
}

void func_33(int iParam0)
{
	func_139(&(Global_1298378->f_156), iParam0);
}

bool func_34()
{
	if ((!does_entity_exist(Global_34) || is_entity_dead(Global_34)) || func_140(255))
	{
		return false;
	}
	if (!func_74(1024) && _0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
		return false;
	}
	if (Local_19.f_2 == -1)
	{
		return true;
	}
	if (Local_19.f_2 == 2 || Local_19.f_2 == 3)
	{
		fVar0 = 40f;
	}
	else
	{
		fVar0 = 200f;
	}
	vVar1 = { func_141(&(Local_19.f_29[Local_19.f_2])) };
	if (!func_74(1024))
	{
		if (!_0xcf45df50c7775f2a())
		{
			Local_19.f_11 = _get_system_time();
			_0x387ad749e3b69b70(*Local_19.f_13[Local_19.f_2], vVar1, fVar0, 0);
			func_62(1024);
		}
		else
		{
			_0x5a8b01199c3e79c3();
		}
	}
	else if (!_0xcf45df50c7775f2a())
	{
		iVar4 = 1;
	}
	else if (_0x0909f71b5c070797())
	{
		iVar4 = 1;
	}
	else
	{
		iVar5 = Global_1901947->f_789.f_11;
		if (Local_19.f_11 == 0)
		{
			Local_19.f_11 = _get_system_time();
		}
		else if ((_get_system_time() - Local_19.f_11) > iVar5)
		{
			iVar4 = 1;
		}
	}
	return iVar4;
}

bool func_35()
{
	sVar0 = func_142();
	if (is_string_null_or_empty(sVar0))
	{
		return true;
	}
	sVar1 = func_144(func_143());
	if (is_string_null_or_empty(sVar1))
	{
		return true;
	}
	if (!_does_anim_scene_exist(Local_19.f_6))
	{
		Local_19.f_6 = _create_anim_scene(sVar0, 0, sVar1, false, true);
	}
	bVar2 = true;
	if (!_is_anim_scene_loaded(Local_19.f_6, true, false))
	{
		bVar2 = false;
	}
	if (!bVar2 && !_is_anim_scene_loading(Local_19.f_6, true))
	{
		load_anim_scene(Local_19.f_6);
		return false;
	}
	if (bVar2)
	{
		return true;
	}
	return false;
}

void func_36()
{
	if (Local_19.f_9 <= 0)
	{
		if (func_74(16) || Global_1298166->f_1 == 2)
		{
			Local_19.f_9 = _0x149a2751ab66ac02(Global_1296859->f_15);
			_0xd1bf325c8252a982(Global_1296859->f_15, &Var0);
			iVar53 = -1;
			iVar52 = 0;
			while (iVar52 <= (Local_19.f_9 - 1))
			{
				iVar50 = network_get_player_from_gamer_handle(Var0[iVar52]);
				if (network_is_player_active(iVar50))
				{
					bVar54 = _0x424b17a7dc5c90bc(iVar50);
					if (bVar54 || func_21(iVar50, 1) == 0)
					{
						if (func_21(iVar50, 512))
						{
							Local_19.f_52[iVar52] = iVar50;
							if (bVar54)
							{
								iVar53 = iVar52;
								iVar51 = iVar50;
							}
							Local_19.f_52[iVar52]->f_3 = 1;
						}
						else
						{
							Local_19.f_52[iVar52]->f_3 = 0;
						}
					}
					else
					{
						Local_19.f_52[iVar52]->f_3 = 0;
					}
				}
				iVar52++;
			}
			if (iVar53 != -1)
			{
				Local_19.f_52[iVar53] = &Local_19.f_52[0];
				Local_19.f_52[iVar53]->f_3 = Local_19.f_52[0]->f_3;
				Local_19.f_52[0] = iVar51;
				Local_19.f_52[0]->f_3 = 1;
			}
		}
		else if (func_74(8))
		{
			Local_19.f_9 = 1;
			Local_19.f_52[0] = player_id();
		}
	}
}

int func_37(bool bParam0, bool bParam1)
{
	if (bParam0 || bParam1)
	{
		if (bParam1)
		{
			if (func_14(2))
			{
				func_6(2);
			}
			if (!func_21(player_id(), 256))
			{
				func_63(256);
			}
			if (!func_14(4))
			{
				iVar0 = func_145(Global_1298166->f_200, 1);
				if (iVar0 == -1)
				{
					return 0;
				}
				func_33(4);
			}
		}
		else
		{
			if (func_14(4))
			{
				func_6(4);
			}
			if (func_21(player_id(), 256))
			{
				func_64(256);
			}
			if (!func_14(2))
			{
				iVar0 = func_145(Global_1298166->f_200, 1);
				if (iVar0 == -1)
				{
					return 0;
				}
				func_33(2);
			}
		}
		iVar1 = iVar0;
		(*Global_1298536)[&Global_1296859]->f_3 = iVar0;
		set_local_player_visible_in_cutscene(1, 1, iVar1);
		network_set_in_mp_cutscene(true, false, iVar1, false);
	}
	else if (func_14(2) || func_14(4))
	{
		network_set_in_mp_cutscene(false, false, 32, true);
		(*Global_1298536)[&Global_1296859]->f_3 = -1;
		func_6(2);
		func_6(4);
		if (func_21(player_id(), 256))
		{
			func_64(256);
		}
	}
	return 1;
}

bool func_38()
{
	if (Local_19.f_8 < 7)
	{
		if (does_entity_exist(Local_19.f_52[Local_19.f_8]->f_1))
		{
			Local_19.f_8++;
		}
		else if (Local_19.f_52[Local_19.f_8]->f_3 == 0)
		{
			Local_19.f_8++;
		}
		else if (player_id() == &Local_19.f_52[Local_19.f_8])
		{
			Local_19.f_52[Local_19.f_8]->f_1 = Global_34;
			Local_19.f_52[Local_19.f_8]->f_2 = is_ped_male(Global_34);
			Local_19.f_8++;
			return false;
		}
		else
		{
			iVar0 = get_player_ped(&(Local_19.f_52[Local_19.f_8]));
			if (!does_entity_exist(iVar0))
			{
				Local_19.f_8++;
				return false;
			}
			Local_19.f_52[Local_19.f_8]->f_1 = clone_ped(iVar0, 0f, true, true);
			if (does_entity_exist(Local_19.f_52[Local_19.f_8]->f_1))
			{
				set_entity_visible(Local_19.f_52[Local_19.f_8]->f_1, false);
				set_entity_collision(Local_19.f_52[Local_19.f_8]->f_1, false, false);
				Local_19.f_52[Local_19.f_8]->f_2 = is_ped_male(iVar0);
				Local_19.f_8++;
				return false;
			}
		}
	}
	return Local_19.f_8 >= Local_19.f_9;
}

bool func_39()
{
	if (_is_ped_carrying(Global_34))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_34);
		if (!func_146(Global_34))
		{
			if (func_147(iVar0))
			{
				_0x0d0db2b6af19a987(&iVar0);
			}
			else
			{
				task_place_carried_entity_at_coord(Global_34, iVar0, 0f, 0f, 0f, 2f, 9);
			}
		}
		return false;
	}
	return true;
}

void func_40()
{
	switch (Local_19.f_2)
	{
		case 0:
		case 1:
			Local_19.f_83 = func_101(func_100(Local_19.f_1, 2, 0), 0, 0);
			Local_19.f_84 = func_101(func_100(Local_19.f_1, 3, 0), 0, 0);
			break;
		default:
			Local_19.f_83 = func_101(func_100(Local_19.f_1, 0, 1), 0, 0);
			Local_19.f_84 = func_101(func_100(Local_19.f_1, 1, 1), 0, 0);
			break;
	}
}

void func_41()
{
	if (is_entity_on_fire(Global_34))
	{
		stop_entity_fire(Global_34, 0);
	}
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (does_entity_exist(iVar0))
	{
		func_62(65536);
	}
	iVar0 = _0x693126b5d0457d0d(Global_34);
	if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
	{
		func_62(65536);
		clear_ped_tasks_immediately(Global_34, false, true);
	}
	if (is_ped_on_mount(Global_34))
	{
		func_62(65536);
		clear_ped_tasks_immediately(Global_34, true, true);
	}
	if (_is_ped_hogtied(Global_34) || _0xd453bb601d4a606e(Global_34))
	{
		clear_ped_tasks_immediately(Global_34, false, true);
	}
}

void func_42()
{
	if (!_does_anim_scene_exist(Local_19.f_6))
	{
		func_15(34);
		return;
	}
	if (is_entity_dead(Global_34) || func_140(255))
	{
		return;
	}
	if (!func_39())
	{
		return;
	}
	if (is_ped_in_any_vehicle(Global_34, true))
	{
		_0xe0b61ed8bb37712f(Global_34);
		return;
	}
	if (is_ped_on_mount(player_ped_id()))
	{
		_remove_ped_from_mount(player_ped_id(), true, false);
		return;
	}
	if (!_is_anim_scene_started(Local_19.f_6, false) && !func_74(1))
	{
		set_anim_scene_origin(Local_19.f_6, func_148(), func_149(), 2);
		set_anim_scene_int(Local_19.f_6, "CameraIndex", func_150(), false);
		if (func_74(8) && does_entity_exist(Global_34))
		{
			if (is_ped_male(Global_34))
			{
				set_anim_scene_entity(Local_19.f_6, "MP_MALE_01", Global_34, 0);
			}
			else
			{
				set_anim_scene_entity(Local_19.f_6, "MP_FEMALE_01", Global_34, 0);
			}
		}
		if (Local_19.f_2 == 2)
		{
			if (does_entity_exist(Local_19.f_83))
			{
				set_anim_scene_entity(Local_19.f_6, "p_doorsgl01x_FRONT", Local_19.f_83, 0);
			}
		}
		else if (Local_19.f_2 == 3)
		{
			if (does_entity_exist(Local_19.f_84))
			{
				set_anim_scene_entity(Local_19.f_6, "p_doorsgl01x_SIDE", Local_19.f_84, 0);
			}
		}
		if (!func_74(8))
		{
			iVar0 = 0;
			while (iVar0 <= (Local_19.f_9 - 1))
			{
				if (does_entity_exist(Local_19.f_52[iVar0]->f_1))
				{
					set_entity_visible(Local_19.f_52[iVar0]->f_1, true);
					set_anim_scene_entity(Local_19.f_6, func_151(iVar0, Local_19.f_52[iVar0]->f_2), Local_19.f_52[iVar0]->f_1, 0);
				}
				iVar0++;
			}
		}
		start_anim_scene(Local_19.f_6);
		func_62(1);
		func_75(16);
		func_75(8);
		func_152(1);
		return;
	}
	fVar1 = _get_anim_scene_progress(Local_19.f_6);
	if (fVar1 > 0.9f)
	{
		if (does_entity_exist(Global_34))
		{
			func_153(1);
		}
	}
	else if (fVar1 > 0.85f)
	{
		if (!func_74(4096))
		{
			func_62(4096);
			func_58(0);
		}
	}
	switch (Local_19.f_4)
	{
		case 1:
			if (!is_screen_faded_out())
			{
				do_screen_fade_out(0);
			}
			func_152(2);
			break;
		case 2:
			if (!_does_anim_scene_exist(Local_19.f_6) || !_is_anim_scene_started(Local_19.f_6, false))
			{
			}
			else
			{
				if (!func_14(33554432))
				{
					do_screen_fade_in(250);
				}
				func_152(3);
				Jump @716; //curOff = 623
				if (is_gameplay_cam_rendering())
				{
					do_screen_fade_out(0);
					Local_19.f_11 = _get_system_time();
					func_152(4);
				}
				Jump @716; //curOff = 651
				if (_0x0909f71b5c070797() || (_get_system_time() - Local_19.f_11) > Global_1901947->f_789.f_11)
				{
					if (!func_14(33554432))
					{
						do_screen_fade_in(250);
					}
					func_152(5);
				}
			}
			default:
				break;
	}
}

bool func_43()
{
	if (Global_1298378->f_131.f_3)
	{
		return true;
	}
	if (func_123(512))
	{
		Local_19.f_3 = 1;
		return true;
	}
	iVar0 = Local_19.f_85;
	if (!network_is_player_active(iVar0))
	{
		Local_19.f_3 = 1;
		return true;
	}
	if (Global_1296859->f_15 != Local_19.f_86 && !func_74(262144))
	{
		if (func_74(131072) && _0x4be6c13a45cca8ec(Global_1296859->f_15) == player_id())
		{
			func_154();
		}
		else
		{
			return true;
		}
	}
	if (_0x901e0dc25080c8b9(iVar0) != Global_1296859->f_15)
	{
		if (func_7(iVar0, 1) != Local_19.f_1)
		{
			return true;
		}
		if (func_145(iVar0, 1) != (*Global_1298536)[&Global_1296859]->f_3)
		{
			return true;
		}
	}
	if ((iVar0 != player_id() && _0x901e0dc25080c8b9(iVar0) != Global_1296859->f_15) && (Global_1298166->f_1 == 2 || Global_1298166->f_1 == 1))
	{
		Local_19.f_3 = 3;
		return true;
	}
	iVar1 = func_7(Global_1298166->f_200, 1);
	if (Local_19.f_1 != iVar1)
	{
		Local_19.f_3 = 2;
		return true;
	}
	if (func_155())
	{
		Local_19.f_3 = 4;
		return true;
	}
	return false;
}

void func_44()
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (does_entity_exist(Local_19.f_52[iVar0]->f_1) && Local_19.f_52[iVar0]->f_1 != Global_34)
		{
			remove_anim_scene_entity(Local_19.f_6, func_151(iVar0, 1), Local_19.f_52[iVar0]->f_1);
			delete_ped(&(Local_19.f_52[iVar0]->f_1));
		}
		iVar0++;
	}
	Local_19.f_83 = 0;
	Local_19.f_84 = 0;
	if (_does_anim_scene_exist(Local_19.f_6))
	{
		_delete_anim_scene(Local_19.f_6);
	}
	if (func_74(1024))
	{
		if (_0xcf45df50c7775f2a())
		{
			_0x5a8b01199c3e79c3();
		}
		func_75(1024);
	}
	Local_19.f_11 = 0;
	func_75(1);
	Local_19.f_6 = 0;
}

void func_45(bool bParam0)
{
	if (bParam0)
	{
		if (!func_74(16384))
		{
			set_player_invincible(player_id(), true);
			func_62(16384);
		}
	}
	else if (func_74(16384))
	{
		set_player_invincible(player_id(), false);
		func_75(16384);
	}
}

void func_46()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_156(func_100(Local_19.f_1, iVar0, 0), 0f, 1);
		iVar0++;
	}
}

void func_47()
{
	func_157();
	func_158();
}

bool func_48()
{
	if (Global_1298378->f_29.f_2 != Local_19.f_1)
	{
		return false;
	}
	if (Global_1298378->f_29.f_3 != 2)
	{
		return false;
	}
	return true;
}

bool func_49()
{
	return (Global_1298166->f_1 != 1 && !func_22());
}

void func_50(int iParam0)
{
	Global_1298166->f_1 = iParam0;
}

bool func_51()
{
	if (!does_entity_exist(Global_34) || is_entity_dead(Global_34))
	{
		return false;
	}
	if (Local_19.f_81 == 0)
	{
		if (func_159())
		{
			func_160(1);
			return false;
		}
		else
		{
			iVar0 = _0x901e0dc25080c8b9(player_id());
			if (_0xd6f6acf4392187fb(iVar0))
			{
				if (_0xce88a261dcbba0d9(iVar0, &uVar1))
				{
					iVar8 = network_get_player_from_gamer_handle(&uVar1);
					if (_is_ped_carrying(Global_34))
					{
						Local_19.f_81 = func_121(_create_var_string(10, "MS_WARN_MEMBER_JOIN_CARRY", func_129(get_player_name(iVar8), func_128(iVar8, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
					else
					{
						Local_19.f_81 = func_121(_create_var_string(10, "MS_WARN_MEMBER_JOIN", func_129(get_player_name(iVar8), func_128(iVar8, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
				}
			}
		}
	}
	if (Local_19.f_10 == 0)
	{
		Local_19.f_10 = get_game_timer();
	}
	else if ((get_game_timer() - Local_19.f_10) >= 11000)
	{
		return true;
	}
	return false;
}

void func_52()
{
	iVar0 = Global_1298166->f_200;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		Local_19.f_2 = 2;
		return;
	}
	Local_19.f_2 = (*Global_1298536)[iVar0]->f_5.f_13;
}

void func_53()
{
	if (get_random_int_in_range(0, 100) < 50)
	{
		Local_19.f_2 = 2;
	}
	else
	{
		Local_19.f_2 = 3;
	}
	func_62(8);
}

bool func_54()
{
	if (does_entity_exist(Global_34))
	{
		fVar0 = vdist(Global_35, func_161(Local_19.f_1));
		if (fVar0 < 200f)
		{
			return true;
		}
	}
	return false;
}

bool func_55()
{
	if (Local_19.f_12 == 0)
	{
		Local_19.f_12 = _get_system_time();
	}
	else if ((_get_system_time() - Local_19.f_12) > 10000)
	{
		return true;
	}
	return false;
}

void func_56()
{
	if (_is_ped_carrying(Global_34))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_34);
		if (func_147(iVar0))
		{
			_0x0d0db2b6af19a987(&iVar0);
		}
	}
}

bool func_57(bool bParam0)
{
	if ((func_140(255) || !does_entity_exist(Global_34)) || is_entity_dead(Global_34))
	{
		return false;
	}
	if (!func_39())
	{
		return false;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), true))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			_0xe0b61ed8bb37712f(player_ped_id());
		}
		return false;
	}
	if (is_ped_on_mount(player_ped_id()))
	{
		_remove_ped_from_mount(player_ped_id(), true, false);
		return false;
	}
	if (Local_19.f_2 == -1)
	{
		func_162(*Local_19.f_13[2], &(Local_19.f_29[2]));
	}
	else
	{
		func_162(*Local_19.f_13[Local_19.f_2], &(Local_19.f_29[Local_19.f_2]));
	}
	if (bParam0)
	{
		func_163(1);
		func_164(1);
	}
	func_165(1);
	func_166(141);
	func_167(1, 1);
	return true;
}

void func_58(bool bParam0)
{
	if (does_entity_exist(Global_34))
	{
		if (bParam0)
		{
			_0x67e21acc5c0c970c(Global_34, 7, bParam0);
			_0x67e21acc5c0c970c(Global_34, 8, bParam0);
			_0x67e21acc5c0c970c(Global_34, 9, bParam0);
			_0x67e21acc5c0c970c(Global_34, 10, bParam0);
			_0x67e21acc5c0c970c(Global_34, 16, bParam0);
			_0x67e21acc5c0c970c(Global_34, 17, bParam0);
			_0x67e21acc5c0c970c(Global_34, 18, bParam0);
			_0x67e21acc5c0c970c(Global_34, 19, bParam0);
			_0x67e21acc5c0c970c(Global_34, 20, bParam0);
			_0x67e21acc5c0c970c(Global_34, 21, bParam0);
			_0x67e21acc5c0c970c(Global_34, 22, bParam0);
			_0x67e21acc5c0c970c(Global_34, 23, bParam0);
			_0x67e21acc5c0c970c(Global_34, 25, bParam0);
			_0x67e21acc5c0c970c(Global_34, 27, bParam0);
			_0x67e21acc5c0c970c(Global_34, 1, bParam0);
		}
		else
		{
			_0x94a3c1b804d291ec(Global_34, 0, 0, 0, 1);
			_0x67e21acc5c0c970c(Global_34, 7, bParam0);
			_0x67e21acc5c0c970c(Global_34, 8, bParam0);
			_0x67e21acc5c0c970c(Global_34, 9, bParam0);
			_0x67e21acc5c0c970c(Global_34, 10, bParam0);
			_0x67e21acc5c0c970c(Global_34, 16, bParam0);
			_0x67e21acc5c0c970c(Global_34, 17, bParam0);
			_0x67e21acc5c0c970c(Global_34, 18, bParam0);
			_0x67e21acc5c0c970c(Global_34, 19, bParam0);
			_0x67e21acc5c0c970c(Global_34, 20, bParam0);
			_0x67e21acc5c0c970c(Global_34, 21, bParam0);
			_0x67e21acc5c0c970c(Global_34, 22, bParam0);
			_0x67e21acc5c0c970c(Global_34, 23, bParam0);
			_0x67e21acc5c0c970c(Global_34, 25, bParam0);
			_0x67e21acc5c0c970c(Global_34, 27, bParam0);
			_0x67e21acc5c0c970c(Global_34, 1, bParam0);
		}
	}
}

bool func_59()
{
	if ((func_140(255) || !does_entity_exist(Global_34)) || is_entity_dead(Global_34))
	{
		return false;
	}
	return true;
}

bool func_60()
{
	if (func_140(255))
	{
		return false;
	}
	if (!does_entity_exist(Global_34) || is_entity_dead(Global_34))
	{
		return false;
	}
	if (!func_74(512))
	{
		if (is_entity_visible(Global_34))
		{
			set_entity_visible(Global_34, false);
		}
		func_68(0);
		set_player_control(player_id(), false, 0, false);
		func_37(1, 1);
		func_62(512);
		return true;
	}
	return false;
}

bool func_61()
{
	if (func_140(255))
	{
		return false;
	}
	if (!does_entity_exist(Global_34) || is_entity_dead(Global_34))
	{
		return false;
	}
	if (func_74(512))
	{
		func_58(0);
		func_68(1);
		func_168(1, 2);
		func_37(1, 0);
		func_75(512);
	}
	return true;
}

void func_62(int iParam0)
{
	func_139(&(Local_19.f_5), iParam0);
}

void func_63(int iParam0)
{
	func_139(&((*Global_1298536)[network_player_id_to_int()]->f_86), iParam0);
}

void func_64(int iParam0)
{
	func_79(&((*Global_1298536)[network_player_id_to_int()]->f_86), iParam0);
}

void func_65()
{
	if (!_does_anim_scene_exist(Local_19.f_6))
	{
		func_15(34);
		return;
	}
	if (is_entity_dead(Global_34) || func_140(255))
	{
		return;
	}
	if (!_is_anim_scene_started(Local_19.f_6, false) && !func_74(1))
	{
		set_anim_scene_origin(Local_19.f_6, func_148(), func_149(), 2);
		if (does_entity_exist(Global_34))
		{
			if (is_ped_male(Global_34))
			{
				set_anim_scene_entity(Local_19.f_6, "MP_MALE_01", Global_34, 0);
			}
			else
			{
				set_anim_scene_entity(Local_19.f_6, "MP_FEMALE_01", Global_34, 0);
			}
		}
		if (Local_19.f_2 == 0)
		{
			if (does_entity_exist(Local_19.f_83))
			{
				set_anim_scene_entity(Local_19.f_6, "p_doorsgl01x_FRONT", Local_19.f_83, 0);
			}
		}
		else if (Local_19.f_2 == 1)
		{
			if (does_entity_exist(Local_19.f_84))
			{
				set_anim_scene_entity(Local_19.f_6, "p_doorsgl01x_SIDE", Local_19.f_84, 0);
			}
		}
		if (_0xec7e480ff8bd0bed(Global_34))
		{
			clear_ped_secondary_task(Global_34);
		}
		_0xfdecca06e8b81346(Global_34);
		start_anim_scene(Local_19.f_6);
		func_62(1);
		func_75(32);
		return;
	}
	fVar0 = _get_anim_scene_progress(Local_19.f_6);
	if (fVar0 > 0.9f)
	{
		if (does_entity_exist(Global_34))
		{
			func_153(0);
		}
	}
	else if (fVar0 > 0.85f)
	{
		if (!func_74(2048))
		{
			func_58(1);
			func_68(1);
			func_62(2048);
		}
	}
}

void func_66()
{
	if (func_74(65536))
	{
		func_169(0, 1);
		func_75(65536);
	}
}

bool func_67()
{
	if ((func_140(255) || !does_entity_exist(Global_34)) || is_entity_dead(Global_34))
	{
		return false;
	}
	vVar0 = { func_170(Local_19.f_1, 0) };
	fVar3 = func_171(Local_19.f_1, 0);
	fVar4 = Global_1901947->f_789.f_8;
	uVar5 = Global_1901947->f_789.f_9;
	func_165(1);
	func_166(141);
	func_172(vVar0, fVar3, uVar5, fVar4, 1, 1, 1);
	return true;
}

void func_68(bool bParam0)
{
	if (!bParam0)
	{
		_0x94a3c1b804d291ec(Global_34, 0, 0, 0, 1);
	}
	_0x67e21acc5c0c970c(Global_34, 2, bParam0);
	_0x67e21acc5c0c970c(Global_34, 3, bParam0);
	_0x67e21acc5c0c970c(Global_34, 4, bParam0);
	_0x67e21acc5c0c970c(Global_34, 5, bParam0);
	_0x67e21acc5c0c970c(Global_34, 6, bParam0);
	_0x67e21acc5c0c970c(Global_34, 11, bParam0);
	_0x67e21acc5c0c970c(Global_34, 12, bParam0);
	_0x67e21acc5c0c970c(Global_34, 13, bParam0);
	_0x67e21acc5c0c970c(Global_34, 24, bParam0);
	_0x67e21acc5c0c970c(Global_34, 14, bParam0);
	_0x67e21acc5c0c970c(Global_34, 15, bParam0);
}

bool func_69()
{
	if ((func_140(255) || !does_entity_exist(Global_34)) || is_entity_dead(Global_34))
	{
		return false;
	}
	if (!is_screen_faded_in())
	{
		return false;
	}
	switch (Local_19.f_3)
	{
		case 1:
			sVar0 = "MS_WARN_FORCE_OUT_INVALID";
			break;
		case 2:
			sVar0 = "MS_WARN_FORCE_OUT_MOVED";
			break;
		case 3:
			sVar0 = "MS_WARN_FORCE_OUT_DISBANDED";
			break;
	}
	Local_19.f_82 = func_121(sVar0, 10000, 0, 0, 0, 1);
	return true;
}

void func_70(bool bParam0)
{
	func_6(16);
	func_64(1);
	if (Global_1298378->f_157 > -1)
	{
		func_173(Global_1298378->f_157);
		Global_1298378->f_157 = -1;
	}
	if (bParam0)
	{
		func_33(64);
	}
}

void func_71(int iParam0)
{
	Global_1298166->f_200 = iParam0;
}

void func_72()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (_does_volume_exist(Local_19.f_35[iVar0]->f_2))
		{
			_delete_volume(Local_19.f_35[iVar0]->f_2);
		}
		if (func_105(&(Local_19.f_35[iVar0])))
		{
			func_174(Local_19.f_35[iVar0], 1, 1);
		}
		if (func_105(Local_19.f_35[iVar0]->f_1))
		{
			func_174(&(Local_19.f_35[iVar0]->f_1), 1, 1);
		}
		iVar0++;
	}
}

void func_73()
{
	Local_19.f_2 = -1;
	Local_19.f_5 = 0;
	Local_19.f_11 = 0;
	Local_19.f_12 = 0;
	Local_19.f_6 = 0;
	Local_19.f_8 = 0;
	Local_19.f_9 = 0;
	Local_19.f_10 = 0;
	Local_19.f_81 = 0;
	Local_19.f_4 = 0;
}

bool func_74(int iParam0)
{
	return func_95(Local_19.f_5, iParam0);
}

void func_75(int iParam0)
{
	func_79(&(Local_19.f_5), iParam0);
}

void func_76(int* iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		delete_object(iParam0);
	}
	if (iParam0->f_2 != 0)
	{
		if (has_model_loaded(iParam0->f_2))
		{
			set_model_as_no_longer_needed(iParam0->f_2);
		}
	}
	iParam0->f_1 = 0;
	iParam0->f_3 = 0;
}

bool func_77(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_1071686->f_22538.f_385[iParam0]), iParam1);
}

void func_78(int iParam0, int iParam1, bool bParam2)
{
	if (func_77(iParam0, iParam1) && (!bParam2 || &Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] == get_id_of_this_thread()))
	{
		clear_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = 0;
		func_175();
	}
}

void func_79(var uParam0, int iParam1)
{
	func_176(uParam0, iParam1);
}

bool func_80(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_81()
{
	return Global_1102219->f_3672;
}

bool func_82(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17411.f_2565[iVar1]), iVar2);
}

void func_83(int iParam0, bool bParam1)
{
	func_177(iParam0, &iVar0, &iVar1);
	if (!func_178(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_179(iVar0, iVar1);
}

void func_84(int iParam0)
{
	Local_19.f_97 = iParam0;
}

bool func_85()
{
	iVar0 = get_player_ped(player_id());
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar2 = _get_first_entity_ped_is_carrying(iVar0);
	if (!does_entity_exist(iVar2))
	{
		return false;
	}
	if (!is_entity_a_ped(iVar2))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar2);
	return is_ped_a_player(iVar1);
}

struct<2> func_86()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_112(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_112(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_87(struct<2> Param0)
{
	if (!func_180(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_181(Param0))
	{
		return false;
	}
	return true;
}

bool func_88(int iParam0)
{
	return func_120(get_player_ped(player_id()), &(Local_19.f_94[func_90(iParam0)]), 1, 0);
}

void func_89(int iParam0, int iParam1)
{
	if (!func_77(iParam0, iParam1))
	{
		set_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = get_id_of_this_thread();
		func_175();
	}
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 532942402:
			return 0;
		case 1661805647:
			return 1;
		default:
			break;
	}
	return -1;
}

bool func_91(var uParam0)
{
	return func_182(*uParam0, 1);
}

bool func_92(var uParam0, float fParam1)
{
	if (func_183(uParam0, fParam1))
	{
		func_184(uParam0);
		return true;
	}
	return false;
}

float func_93(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_94(var uParam0)
{
	func_185(uParam0, 0f);
}

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_96()
{
	return Global_1298166->f_200;
}

bool func_97(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0) || !network_is_player_active(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (!func_186(Global_1298536[iVar0]))
	{
		return false;
	}
	if ((*Global_1298536)[iVar0]->f_5.f_12 == -1)
	{
		return false;
	}
	return true;
}

bool func_98()
{
	if (!func_187())
	{
		return false;
	}
	return func_95(Global_1901947->f_44.f_5, 8);
}

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 5);
}

int func_100(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		iVar0 = Global_1298378->f_78[iParam0][iParam1];
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						iVar0 = -873861472;
						break;
					case 1:
						iVar0 = 559525171;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						iVar0 = -1636862794;
						break;
					case 1:
						iVar0 = -368946392;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						iVar0 = 1954418654;
						break;
					case 1:
						iVar0 = -1030789470;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						iVar0 = 423023646;
						break;
					case 1:
						iVar0 = 155563751;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 4:
				switch (iParam1)
				{
					case 0:
						iVar0 = -561680145;
						break;
					case 1:
						iVar0 = -7860519;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
		}
	}
	return iVar0;
}

int func_101(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_188(iParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (!is_entity_an_object(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

void func_102()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		*Local_19.f_13[iVar0] = { func_170(Local_19.f_1, iVar0) };
		Local_19.f_29[iVar0] = func_171(Local_19.f_1, iVar0);
		iVar0++;
	}
}

void func_103()
{
	if (Global_1298000->f_165)
	{
		func_84(2);
	}
	Var0 = Global_1071686->f_28448[50]->f_3;
	Var0.f_2 = -2002424295;
	Var0.f_3 = func_189(Local_19.f_1);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return;
	}
	uVar6 = Var0.f_1;
	iVar8 = 0;
	while (iVar8 <= 1)
	{
		Var0.f_1 = uVar6;
		iVar5 = func_190(iVar8);
		StringCopy(&cVar22, "volume#", 64);
		StringIntConCat(&cVar22, iVar8, 64);
		Var0.f_2 = -1627797674;
		Var0.f_3 = iVar5;
		if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			return;
		}
		uVar7 = Var0.f_1;
		Var0.f_2 = -85904298;
		iVar10 = _datafile_get_num_nodes(&Var0);
		Local_19.f_94[iVar8] = _create_volume_aggregate_with_custom_name(&cVar22);
		iVar9 = 0;
		while (iVar9 <= (iVar10 - 1))
		{
			Var0.f_1 = uVar7;
			Var0.f_2 = -204010186;
			Var0.f_3 = iVar9;
			if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
			{
			}
			else
			{
				Var0.f_2 = 701345319;
				_datafile_get_hash(&uVar11, &Var0);
				uVar21 = uVar11;
				Var0.f_2 = -1084365561;
				_datafile_get_vector(&vVar12, &Var0);
				Var0.f_2 = 2021743591;
				_datafile_get_vector(&vVar15, &Var0);
				Var0.f_2 = -600021699;
				_datafile_get_vector(&vVar18, &Var0);
				_0x12fcaa23f2320422(&(Local_19.f_94[iVar8]), uVar21, vVar12, vVar15, vVar18);
			}
			iVar9++;
		}
		iVar8++;
	}
}

bool func_104(int iParam0, var uParam1, var uParam2)
{
	Var0 = Global_1298378->f_1;
	Var0.f_2 = -709674112;
	Var0.f_3 = func_189(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	iVar15 = 0;
	while (iVar15 < 4)
	{
		Var5 = { Var0 };
		Var5.f_2 = -1480766764;
		Var5.f_3 = iVar15;
		if (!_datafile_get_vector((*uParam1)[Var5.f_3], &Var5))
		{
			return false;
		}
		Var10 = { Var0 };
		Var10.f_2 = 983475634;
		Var10.f_3 = iVar15;
		if (!_datafile_get_vector((*uParam2)[Var10.f_3], &Var10))
		{
			return false;
		}
		iVar15++;
	}
	return true;
}

bool func_105(int iParam0)
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

char* func_106(int iParam0, bool bParam1)
{
	sVar0 = "Null";
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "MOONSHINE_ENTER_POSSE";
			}
			else
			{
				sVar0 = "MOONSHINE_ENTER_SOLO";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar0 = "MOONSHINE_ENTER_POSSE";
			}
			else
			{
				sVar0 = "MOONSHINE_ENTER_SOLO";
			}
			break;
		case 2:
			sVar0 = "MOONSHINE_EXIT_SOLO";
			break;
		case 3:
			sVar0 = "MOONSHINE_EXIT_SOLO";
			break;
	}
	return sVar0;
}

int func_107(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_191(iVar0, 2))
		{
			if (iParam2 == (*Global_1951255)[iVar0]->f_10 && iParam1 == (*Global_1951255)[iVar0]->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_192(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_108(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_105(iParam0))
	{
		return;
	}
	iVar0 = func_193(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_visible((*Global_1951255)[iVar0]->f_3, bParam1);
}

void func_109(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_105(iParam0))
	{
		return;
	}
	iVar0 = func_193(iParam0);
	if (bParam1)
	{
		func_194(iParam0, 4);
		if (bParam3)
		{
			func_195(iVar0, 1);
		}
		func_196(iVar0, 1);
	}
	else
	{
		func_197(iParam0, 4);
		func_196(iVar0, 0);
	}
}

bool func_110()
{
	return (Global_1296851->f_2.f_1 == 2 || Global_1296851->f_2.f_1 == 1);
}

bool func_111()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

struct<2> func_112(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_113(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

int func_114(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((*Global_1248240)[iVar0]->f_559 != iParam0)
		{
		}
		else if (bParam2 && !func_198(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && (*Global_1237665)[iVar0]->f_15 != iParam1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_115(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_116()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

int func_117(bool bParam0, bool bParam1, bool bParam2)
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

bool func_118()
{
	return func_10(1, 255);
}

bool func_119()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_120(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_121(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_122(int iParam0, bool bParam1)
{
	if (bParam1 && !func_105(iParam0))
	{
		return false;
	}
	iVar0 = func_193(iParam0);
	return _uiprompt_is_active((*Global_1951255)[iVar0]->f_3);
}

bool func_123(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_124()
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

bool func_125(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return network_is_handle_valid(&uParam0);
}

bool func_126(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_127(int iParam0, bool bParam1)
{
	if (bParam1 && !func_105(iParam0))
	{
		return false;
	}
	return !func_191(iParam0, 4);
}

int func_128(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_199(func_112(0)) && func_200(func_112(0)) == 7)
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
			iVar6 = func_201(iParam0);
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
			return func_202(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_95(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_203(iParam0, 1);
	if (!bVar0)
	{
		if (func_204(iParam0, bParam1))
		{
			return func_202(iParam0);
		}
		else if (func_205(iParam0, bParam1))
		{
			if (func_206(iParam0, bParam1))
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
		return func_201(iParam0);
	}
	else if (func_204(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_208(func_207(func_112(0)), 1) == 395262693)
		{
			return func_202(iParam0);
		}
		else
		{
			return func_202(iParam0);
		}
	}
	else if (func_205(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_129(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_209(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_130(int iParam0)
{
	iVar0 = func_193(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return (*Global_1951255)[iVar0]->f_3;
}

bool func_131(int iParam0, bool bParam1)
{
	if (bParam1 && !func_105(iParam0))
	{
		return false;
	}
	iVar0 = func_193(iParam0);
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

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 0;
		case 3:
			return 1;
		default:
			break;
	}
	return 4;
}

void func_133(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return;
	}
	(*Global_1298536)[&Global_1296859]->f_5.f_13 = iParam0;
}

void func_134()
{
	Var0.f_5 = 255;
	Var0.f_7 = -1;
	Var0.f_9 = 7;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0.f_4 = 5;
	func_210(&Var0);
}

void func_135()
{
	disable_control_action(0, 1287709438, false);
	func_211(0);
	Global_1940311->f_5 = 1;
}

void func_136(bool bParam0)
{
	if (func_124())
	{
		Global_1958008 = 1;
	}
	if (func_212(-92416669))
	{
	}
	if (bParam0 && (Global_1940258->f_38 == -1016714371 || Global_1940258->f_38 == 332793555))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		Global_1940258->f_38 = -1569615261;
	}
}

bool func_137()
{
	return Global_1896738->f_382;
}

void func_138()
{
	func_213(0);
}

void func_139(var uParam0, int iParam1)
{
	func_214(uParam0, iParam1);
}

bool func_140(int iParam0)
{
	return func_10(1, iParam0);
}

Vector3 func_141(float fParam0)
{
	return -sin(fParam0), cos(fParam0), 0f;
}

char* func_142()
{
	switch (Local_19.f_2)
	{
		case 0:
		case 1:
			sVar0 = "script@mp@Moonshiner@Moonshine_Property@exit";
			break;
		case 2:
		case 3:
			sVar0 = "script@mp@moonshiner@moonshine_property@enter";
			break;
		case 4:
			break;
	}
	return sVar0;
}

int func_143()
{
	switch (Local_19.f_2)
	{
		case 0:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 2;
			break;
		case 4:
			break;
	}
	return iVar0;
}

char* func_144(int iParam0)
{
	sVar0 = "";
	switch (Local_19.f_2)
	{
		case 0:
		case 1:
			bVar1 = func_215();
			bVar2 = func_216();
			switch (iParam0)
			{
				case 3:
					if (bVar1)
					{
						sVar0 = "s_FRONT_VERY_DRUNK";
					}
					else if (bVar2)
					{
						sVar0 = "s_FRONT_MODERATELY_DRUNK";
					}
					else
					{
						sVar0 = "s_FRONT";
					}
					break;
				case 4:
					if (bVar1)
					{
						sVar0 = "s_SIDE_VERY_DRUNK";
					}
					else if (bVar2)
					{
						sVar0 = "s_SIDE_MODERATELY_DRUNK";
					}
					else
					{
						sVar0 = "s_SIDE";
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 1:
					sVar0 = "s_FRONT";
					break;
				case 2:
					sVar0 = "s_SIDE";
					break;
			}
			break;
		case 4:
			break;
	}
	return sVar0;
}

int func_145(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return -1;
		}
	}
	return Global_1298536[iParam0];
}

bool func_146(int iParam0)
{
	return func_217(iParam0, -1);
}

bool func_147(int iParam0)
{
	if (is_entity_a_mission_entity(iParam0))
	{
		return false;
	}
	if (is_entity_a_ped(iParam0))
	{
		return false;
	}
	return true;
}

Vector3 func_148()
{
	bVar3 = (Local_19.f_2 == 2 || Local_19.f_2 == 3);
	bVar4 = Local_19.f_2 == 3;
	switch (Local_19.f_1)
	{
		case 0:
			if (bVar3)
			{
				vVar0 = { 1788.727f, -816.8044f, 45.1f };
			}
			else
			{
				vVar0 = { 1789.577f, -812.6493f, 191.5339f };
			}
			break;
		case 1:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -1090.531f, 711.1215f, 106.522f };
				}
				else
				{
					vVar0 = { -1090.531f, 711.1215f, 106.722f };
				}
			}
			else
			{
				vVar0 = { -1092.746f, 707.5026f, 83.1687f };
			}
			break;
		case 2:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -2774.968f, -3046.855f, 13.6003f };
				}
				else
				{
					vVar0 = { -2774.968f, -3046.855f, 13.8003f };
				}
			}
			else
			{
				vVar0 = { -2779.185f, -3047.399f, -9.7658f };
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { 1629.138f, 828.3974f, 147.2225f };
				}
				else
				{
					vVar0 = { 1629.138f, 828.3974f, 147.4225f };
				}
			}
			else
			{
				vVar0 = { 1628.259f, 832.5888f, 123.8766f };
			}
			break;
		case 4:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -1863.969f, -1727.859f, 111.5559f };
				}
				else
				{
					vVar0 = { -1863.969f, -1727.859f, 111.7559f };
				}
			}
			else
			{
				vVar0 = { -1863.601f, -1732.077f, 88.1898f };
			}
			break;
	}
	return vVar0;
}

Vector3 func_149()
{
	bVar0 = (Local_19.f_2 == 2 || Local_19.f_2 == 3);
	switch (Local_19.f_1)
	{
		case 0:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -136.62f };
			}
			else
			{
				vVar1 = { 0f, 0f, -176.6f };
			}
			break;
		case 1:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, 23.421f };
			}
			else
			{
				vVar1 = { 0f, 0f, -16.5f };
			}
			break;
		case 2:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -27.83f };
			}
			else
			{
				vVar1 = { 0f, 0f, -67.7f };
			}
			break;
		case 3:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -113.27f };
			}
			else
			{
				vVar1 = { 0f, 0f, -153.2f };
			}
			break;
		case 4:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, 60.01f };
			}
			else
			{
				vVar1 = { 0f, 0f, 20f };
			}
			break;
	}
	return vVar1;
}

int func_150()
{
	switch (Local_19.f_1)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 4:
			iVar0 = 5;
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

char* func_151(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "MP_Male_01";
			}
			else
			{
				sVar0 = "MP_Female_01";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar0 = "MP_Male_02";
			}
			else
			{
				sVar0 = "MP_Female_02";
			}
			break;
		case 2:
			if (bParam1)
			{
				sVar0 = "MP_Male_03";
			}
			else
			{
				sVar0 = "MP_Female_03";
			}
			break;
		case 3:
			if (bParam1)
			{
				sVar0 = "MP_Male_04";
			}
			else
			{
				sVar0 = "MP_Female_04";
			}
			break;
		case 4:
			if (bParam1)
			{
				sVar0 = "MP_Male_05";
			}
			else
			{
				sVar0 = "MP_Female_05";
			}
			break;
		case 5:
			if (bParam1)
			{
				sVar0 = "MP_Male_06";
			}
			else
			{
				sVar0 = "MP_Female_06";
			}
			break;
		case 6:
			if (bParam1)
			{
				sVar0 = "MP_Male_07";
			}
			else
			{
				sVar0 = "MP_Female_07";
			}
			break;
	}
	return sVar0;
}

void func_152(int iParam0)
{
	Local_19.f_4 = iParam0;
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		if (!func_74(2))
		{
			set_entity_coords(Global_34, *Local_19.f_13[Local_19.f_2], true, false, true, true);
			set_entity_heading(Global_34, &(Local_19.f_29[Local_19.f_2]));
			func_218(0, 0);
			func_62(2);
		}
	}
	else if (!func_74(4))
	{
		set_entity_coords(Global_34, *Local_19.f_13[Local_19.f_2], true, false, true, true);
		set_entity_heading(Global_34, &(Local_19.f_29[Local_19.f_2]));
		func_218(0, 0);
		func_62(4);
	}
}

void func_154()
{
	Local_19.f_85 = func_96();
	Local_19.f_86 = _0x901e0dc25080c8b9(Local_19.f_85);
	if (_0x4be6c13a45cca8ec(Local_19.f_86) == player_id())
	{
		func_62(131072);
	}
}

bool func_155()
{
	return Global_1108365->f_935.f_28 != -1;
}

void func_156(int iParam0, float fParam1, int iParam2)
{
	func_219(iParam0, 0, 0);
	if (func_220(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam1, iParam2);
	}
}

void func_157()
{
	if (func_221(2, 255))
	{
		return;
	}
	func_222(2);
}

void func_158()
{
	if (func_223(8, 255))
	{
		return;
	}
	func_224(3);
}

bool func_159()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_160(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

Vector3 func_161(int iParam0)
{
	return *Global_1298378->f_6.f_1[iParam0];
}

int func_162(vector3 vParam0, var uParam3)
{
	if (func_9(vParam0))
	{
		return 0;
	}
	if (func_225(255) == 4)
	{
		return 0;
	}
	if (func_10(4, 255))
	{
	}
	func_166(4);
	func_226(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = uParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_227(Global_1102219->f_3879, 36);
	return 1;
}

void func_163(bool bParam0)
{
	if (!bParam0)
	{
		func_228(18);
	}
	else
	{
		func_166(18);
	}
}

void func_164(bool bParam0)
{
	if (!bParam0)
	{
		func_228(19);
	}
	else
	{
		func_166(19);
	}
}

void func_165(bool bParam0)
{
	if (bParam0)
	{
		func_166(129);
	}
	else
	{
		func_228(129);
	}
}

int func_166(int iParam0)
{
	if (func_229(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_167(bool bParam0, bool bParam1)
{
	if (func_225(255) == 4)
	{
		return;
	}
	if (func_9(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_228(0);
	}
	else
	{
		if (bParam1)
		{
			func_230(0, 0, 0, 1);
		}
		func_166(0);
		func_231(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_232(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_233(Global_1102219->f_3849, 36);
	func_234(Global_1102219->f_3888, 36);
}

void func_168(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_235(iParam1);
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
	func_236(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_169(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_237(49);
	}
	if (bParam1)
	{
		func_237(51);
	}
	func_238(48);
	func_237(52);
	func_237(3);
}

Vector3 func_170(int iParam0, int iParam1)
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
	func_240(1268215321, func_189(iParam0), func_239(iParam1), 0);
	if (!_datafile_get_vector(&vVar0, &(Global_1298378->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

float func_171(int iParam0, int iParam1)
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
	func_240(-226869021, func_189(iParam0), func_239(iParam1), 0);
	if (!_datafile_get_float(&fVar0, &(Global_1298378->f_1)))
	{
		return 0f;
	}
	return fVar0;
}

void func_172(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	fVar3 = fParam3;
	if (!func_241(Global_1296859->f_17, &vVar0, &fVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		fVar3 = fParam3;
	}
	func_242(vParam0, fParam3, vVar0, fVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

void func_173(int iParam0)
{
	if (iParam0 == 0)
	{
		_0xe057fea9a22eb3ee(-347798845);
	}
	else if (iParam0 == 1)
	{
		_0xe057fea9a22eb3ee(-1136456260);
	}
	else if (iParam0 == 2)
	{
		_0xe057fea9a22eb3ee(518116088);
	}
	else if (iParam0 == 3)
	{
		_0xe057fea9a22eb3ee(2142311577);
	}
	else if (iParam0 == 4)
	{
		_0xe057fea9a22eb3ee(-1846003417);
	}
}

void func_174(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_105(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_193(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_243(iVar0);
	*uParam0 = 0;
}

void func_175()
{
	_0x20f4cb76689acdbc(&(Global_1071686->f_21416.f_260));
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_178(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_244(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_245(iParam0))
	{
		return false;
	}
	if (func_246(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_247(iParam0, 1)) || func_248(32768))
	{
		if (!func_247(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_249())
	{
		return false;
	}
	return true;
}

void func_179(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_180(int iParam0)
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

int func_181(int iParam0)
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

bool func_182(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_183(var uParam0, float fParam1)
{
	if (!func_91(uParam0))
	{
		return false;
	}
	if (func_250(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_184(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_185(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_251() - fParam1);
	func_252(uParam0, 1);
	func_253(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_186(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 32);
}

bool func_187()
{
	if (Global_1901947->f_44.f_2 == 1788394582)
	{
		iVar0 = Global_1296859->f_21;
		if (iVar0 > Global_1901947->f_44.f_3 && iVar0 < Global_1901947->f_44.f_4)
		{
			return true;
		}
	}
	return false;
}

int func_188(int iParam0, int iParam1)
{
	func_219(iParam0, 0, 0);
	if (func_220(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

int func_189(int iParam0)
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

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 532942402;
		case 1:
			return 1661805647;
		default:
			break;
	}
	return 0;
}

bool func_191(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_192(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_195(iParam0, 1);
	func_196(iParam0, 1);
	func_197(iParam0, 128);
}

int func_193(int iParam0)
{
	return iParam0;
}

void func_194(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_195(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_191(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_196(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_197(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_198(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = network_player_id_to_int();
	}
	return (func_254(iParam0) && func_255((*(*Global_1238240)[iParam2])[iParam0]->f_19, iParam1));
}

bool func_199(struct<2> Param0)
{
	iVar0 = func_256(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_200(var uParam0, var uParam1)
{
	return uParam0;
}

int func_201(int iParam0)
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

int func_202(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_257())
	{
		return 636925055;
	}
	return -963477619;
}

int func_203(int iParam0, bool bParam1)
{
	iVar0 = floor(func_258(iParam0, bParam1));
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

bool func_204(int iParam0, bool bParam1)
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

bool func_205(int iParam0, bool bParam1)
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
	if (func_259(iParam0))
	{
		return true;
	}
	return !func_204(iParam0, 0);
}

bool func_206(int iParam0, bool bParam1)
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
	if (func_260(iParam0))
	{
		return false;
	}
	if (func_259(iParam0))
	{
		return false;
	}
	if (func_261(iParam0))
	{
		return true;
	}
	return func_262(iParam0);
}

int func_207(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_263(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_208(int iParam0, int iParam1)
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

char* func_209(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_210(var uParam0)
{
	*uParam0 = 13;
	uParam0->f_1 = get_player_index();
	uParam0->f_2 = get_network_time_accurate();
	uVar0 = func_264(0, 8);
	trigger_script_event(1, uParam0, 26, 15, &uVar0);
}

void func_211(bool bParam0)
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

bool func_212(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1939493)[iVar0]->f_10)))
		{
			func_265(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_213(bool bParam0)
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

void func_214(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_215()
{
	return &Global_1940085 == 2;
}

bool func_216()
{
	return &Global_1940085 == 1;
}

int func_217(int iParam0, int iParam1)
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

void func_218(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
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
	if (func_266(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_221(int iParam0, int iParam1)
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

void func_222(int iParam0)
{
	func_267(3, iParam0);
}

bool func_223(int iParam0, int iParam1)
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

void func_224(int iParam0)
{
	func_267(2, iParam0);
}

int func_225(int iParam0)
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

void func_226(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_227(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_228(int iParam0)
{
	if (func_268(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_229(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_230(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_269(iParam0);
	if (!func_270(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_271(128) && !func_272(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_273() == 4)
	{
		func_228(18);
	}
	func_274(1024);
}

void func_231(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_232(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_233(struct<29> Param0, var uParam29, int iParam30)
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

void func_234(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_235(int iParam0)
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
		func_275();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_236(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

void func_237(int iParam0)
{
	if (!func_276(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_238(int iParam0)
{
	if (!func_276(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

int func_239(int iParam0)
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

void func_240(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_277();
	Global_1298378->f_1.f_2 = iParam0;
	Global_1298378->f_1.f_3 = iParam1;
	Global_1298378->f_1.f_4 = iParam2;
	Global_1298378->f_1.f_1 = iParam3;
}

bool func_241(vector3 vParam0, var uParam3, float fParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_278(vParam0)];
	iVar1 = func_279(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_280(uVar0, iVar2, uParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_242(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_225(255) == 4)
	{
		return;
	}
	if (func_9(vParam0))
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
		func_230(0, 0, 0, 1);
	}
	func_166(0);
	func_166(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_231(&(Global_1102219->f_3849));
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
	func_232(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = fParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_233(Global_1102219->f_3849, 36);
	func_234(Global_1102219->f_3888, 36);
}

void func_243(int iParam0)
{
	if (!func_281(iParam0))
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

bool func_244(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_245(int iParam0)
{
	if (func_247(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_246(int iParam0)
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

bool func_247(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_248(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_249()
{
	if (!func_111())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

float func_250(var uParam0)
{
	if (!func_91(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_282(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_251() - uParam0->f_1);
}

float func_251()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_254(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_255(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_256(struct<2> Param0)
{
	if (!func_87(Param0))
	{
		return -1;
	}
	iVar0 = func_283(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_257()
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
	if (!func_87(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_258(int iParam0, bool bParam1)
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

bool func_259(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_260(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_261(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_262(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_284(iParam0);
		return false;
	}
	if (func_261(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_285(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

bool func_263(struct<2> Param0, var uParam2)
{
	if (!func_87(Param0))
	{
		return false;
	}
	func_286(uParam2);
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

var func_264(int iParam0, int iParam1)
{
	return func_287(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_265(int iParam0)
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

bool func_266(int iParam0)
{
	return iParam0 != 0;
}

void func_267(int iParam0, int iParam1)
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

bool func_268(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_269(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_270(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_271(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_272(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_273()
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

void func_274(int iParam0)
{
	if (func_288(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

void func_275()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

bool func_276(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_277()
{
	Global_1298378->f_1 = Global_1071686->f_28448[50]->f_3;
	Global_1298378->f_1.f_1 = 0;
	Global_1298378->f_1.f_2 = 0;
	Global_1298378->f_1.f_3 = 0;
	Global_1298378->f_1.f_4 = 0;
}

int func_278(vector3 vParam0)
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

int func_279(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_280(var uParam0, int iParam1, var uParam2, float fParam3)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = uParam0;
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

bool func_281(int iParam0)
{
	return func_191(iParam0, 2);
}

bool func_282(var uParam0)
{
	return func_182(*uParam0, 2);
}

int func_283(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_263(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_263(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

void func_284(int iParam0)
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
	func_289(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_285(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_290(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_284(iParam0);
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
						func_285(iVar3, iParam1, 0, 1, 0, 0);
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
			func_291(&Var6, uVar4);
		}
	}
}

void func_286(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_287(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_292() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_293());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_293());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_293());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_294(get_player_team(iVar5)));
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
			if (func_295(iVar2))
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
				if (iVar9 & 8192 != 0 && func_225(iVar2) != 1)
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
					if (!func_296(iVar10))
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

bool func_288(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

void func_289(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_290(int iParam0, int iParam1, int iParam2)
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

void func_291(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_297(*uParam0);
}

int func_292()
{
	return Global_1051252->f_12;
}

char* func_293()
{
	return "unnamed";
}

int func_294(int iParam0)
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

bool func_295(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_10(36, iParam0);
}

bool func_296(int iParam0)
{
	if (func_260(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_298(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_297(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

void func_298(int iParam0)
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
		func_284(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_289(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

