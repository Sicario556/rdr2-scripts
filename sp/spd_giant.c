void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_15 = -813796418;
	iLocal_122 = -1;
	if (has_force_cleanup_occurred(555))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		func_2();
		func_3();
		func_4(12, iLocal_14, &iLocal_146, &uLocal_150, &uLocal_124, 0, 1097859072, 0);
		func_5(iLocal_146, &iLocal_120, 8, 12, 0);
		if (iLocal_114 != 4)
		{
		}
		else
		{
			func_6();
		}
		switch (iLocal_114)
		{
			case 0:
				func_7();
				func_8(1);
				break;
			case 1:
				if (func_9())
				{
					func_8(2);
				}
				break;
			case 2:
				if (func_10())
				{
					func_8(3);
				}
				break;
			case 3:
				func_11();
				break;
			case 4:
				func_12();
				break;
		}
	}
}

void func_1()
{
	func_13(12);
	if (iLocal_114 >= 4)
	{
		func_14(12, &iLocal_146, &iLocal_120, 16);
		if (iLocal_14 == 3)
		{
			func_15(12, 12);
		}
		else
		{
			func_15(12, iLocal_14 + 1);
		}
	}
	if (does_entity_exist(iLocal_146))
	{
		delete_ped(&iLocal_146);
	}
	func_16(&uLocal_125);
	_0x36559148b78853b3(1, 1, 0);
	terminate_this_thread();
}

void func_2()
{
	if (!func_17(Global_35, 0))
	{
		func_1();
	}
	else if (_does_volume_exist(iLocal_117) && !is_entity_in_volume(Global_35, iLocal_117, true, 0))
	{
		if (!func_18(&uLocal_147))
		{
			func_19(&uLocal_147, 0);
		}
		else if (func_20(&uLocal_147) > 10f)
		{
			func_1();
		}
	}
	else if (func_21(12, iLocal_14, &uLocal_125, iLocal_146))
	{
		func_1();
	}
}

void func_3()
{
	if (iLocal_114 == 4 && get_game_timer() >= iLocal_123 + 1000)
	{
		if (!is_ped_headtracking_entity(Global_35, iLocal_146))
		{
			task_look_at_entity(Global_35, iLocal_146, -1, 2048, 51, 0);
		}
	}
	else if (is_ped_headtracking_entity(Global_35, iLocal_146))
	{
		task_clear_look_at(Global_35);
	}
}

int func_4(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (is_entity_dead(*iParam2) || Global_1935630->f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (is_scripted_speech_playing(*iParam2))
		{
			Global_40.f_11623[iParam0]->f_5++;
			Global_40.f_11623[iParam0]->f_2 = func_22();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_23(Global_35, *iParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_18(uParam3))
	{
		func_24(uParam3, 0f);
	}
	else if (func_20(uParam3) >= 2f)
	{
		if (!func_25(Global_40.f_11623[iParam0]->f_2))
		{
			func_26(iParam0);
			*uParam4 = 1;
			func_27(uParam3);
			return 1;
		}
		else
		{
			func_26(iParam0);
			*uParam4 = 1;
			func_27(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_28(iParam3);
	if (fParam4 == 0f)
	{
		if (func_23(iParam0, Global_35, 15f, 1))
		{
			if (!func_29(*iParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_30(iParam1, iParam2);
				}
			}
		}
		else if (func_29(*iParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_31(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_29(*iParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_30(iParam1, iParam2);
			}
		}
	}
	else if (func_29(*iParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_31(iParam1, iParam2);
	}
}

void func_6()
{
	if (!func_32(iLocal_120, 1))
	{
		if (func_33(&iLocal_146, 1715123483))
		{
			func_34(&iLocal_120, 1);
		}
	}
}

void func_7()
{
	iLocal_14 = func_35(12);
	func_36(&uLocal_125);
	_text_database_request("SPGATAU");
	request_model(iLocal_15, false);
	_0xed9582b3da8f02b4(1);
}

void func_8(int iParam0)
{
	iLocal_114 = iParam0;
	switch (iParam0)
	{
		case 4:
			iLocal_123 = get_game_timer();
			break;
	}
}

bool func_9()
{
	if (!_text_database_has_loaded("SPGATAU"))
	{
		return false;
	}
	if (!has_model_loaded(iLocal_15))
	{
		return false;
	}
	if (_0x5c16855277819bbf() != 1)
	{
		return false;
	}
	return true;
}

bool func_10()
{
	if (func_37(&uVar0, 1706.732f, 2183.457f, 323.2325f, 177f))
	{
		set_ped_relationship_group_hash(iLocal_146, 1862763509);
		set_blocking_of_non_temporary_events(iLocal_146, true);
		set_ped_keep_task(iLocal_146, true);
		set_ped_can_ragdoll(iLocal_146, false);
		freeze_entity_position(iLocal_146, true);
		set_entity_collision(iLocal_146, false, false);
		set_entity_visible(iLocal_146, false);
		stop_ped_speaking(iLocal_146, true);
		func_38(iLocal_146, 0);
		func_39(iLocal_146, 12);
		if (func_40())
		{
			func_41(&uLocal_16, Global_35, "JOHN", 0);
		}
		else
		{
			func_41(&uLocal_16, Global_35, "ARTHUR", 0);
		}
		func_41(&uLocal_16, iLocal_146, "GIANT", 0);
		iLocal_115 = _create_volume_cylinder_with_custom_name(1705f, 2171f, 324f, 0f, 0f, 0f, 15f, 21f, 8f, "giant_speak");
		iLocal_116 = _create_volume_cylinder_with_custom_name(1705f, 2171f, 320f, 0f, 0f, 0f, 35f, 40f, 8f, "giant_stop");
		iLocal_117 = _create_volume_cylinder_with_custom_name(1710f, 2148f, 319f, 0f, 0f, 0f, 160f, 160f, 80f, "giant_end");
		iLocal_119 = _create_volume_cylinder_with_custom_name(1705f, 2171f, 320f, 0f, 0f, 0f, 26f, 32f, 8f, "m_volStayAway");
		_0xb56d41a694e42e86(iLocal_119, 0, 0, 0, -1, -1, 0);
		_0x18262cafebb5fbe1(iLocal_119, 0, 0, 0, -1, -1, 0);
		iLocal_118 = _create_volume_sphere_with_custom_name(1710f, 2148f, 319f, 0f, 0f, 0f, 110f, 110f, 110f, "m_volRandomEventBlock");
		func_42(iLocal_118, "SP_Giant_Block", 1, 0, 0, 0, -1082130432);
		return true;
	}
	return false;
}

void func_11()
{
	if (is_entity_in_volume(Global_35, iLocal_115, true, 0))
	{
		func_8(4);
	}
}

void func_12()
{
	if (iLocal_121 < func_43())
	{
		if (is_entity_in_volume(Global_35, iLocal_116, true, 0))
		{
			sVar0 = "";
			bVar1 = false;
			iVar2 = -1;
			sVar0 = func_44(iLocal_121, &iVar2);
			if (iVar2 < 0)
			{
				if (func_45(sVar0))
				{
					bVar1 = true;
					iLocal_121++;
				}
			}
			else if (func_46(sVar0, iVar2))
			{
				bVar1 = true;
				iLocal_121++;
			}
			if (!func_32(iLocal_120, 4))
			{
				if (bVar1)
				{
					func_48(12, func_47());
					func_34(&iLocal_120, 4);
				}
			}
		}
		else if (!func_32(iLocal_120, 2))
		{
			_0x36559148b78853b3(1, 1, 0);
			iLocal_121 = func_43();
			func_34(&iLocal_120, 2);
		}
	}
	else if (!func_49(1))
	{
		if (iLocal_122 < 0)
		{
			iLocal_122 = get_game_timer() + 1100;
		}
		else if (get_game_timer() >= iLocal_122)
		{
			func_1();
		}
	}
}

void func_13(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_50(0, -1);
	}
	func_51();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

void func_14(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(*iParam1))
	{
		return;
	}
	if (func_29(*iParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_53(func_52(-1342635612)) < 5)
	{
		func_54(func_52(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_22();
	func_30(iParam2, iParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

void func_15(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

void func_16(var uParam0)
{
	if (is_itemset_valid(uParam0->f_18))
	{
		destroy_itemset(uParam0->f_18);
	}
	if (is_itemset_valid(uParam0->f_19))
	{
		destroy_itemset(uParam0->f_19);
	}
	if (_does_volume_exist(uParam0->f_20))
	{
		_delete_volume(uParam0->f_20);
	}
	if (func_18(&(uParam0->f_13)))
	{
		func_27(&(uParam0->f_13));
	}
}

bool func_17(int iParam0, int iParam1)
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
	if (func_32(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_32(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_32(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_18(var uParam0)
{
	return func_55(*uParam0, 1);
}

void func_19(var uParam0, bool bParam1)
{
	if (bParam1 || !func_18(uParam0))
	{
		func_56(uParam0);
	}
}

float func_20(var uParam0)
{
	if (!func_18(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_57(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_58() - uParam0->f_1);
}

bool func_21(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((func_59(0) == 1 || func_59(0) == 2) || func_59(0) == 8) || func_60(&Global_1935630, 2048))
			{
				func_34(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (func_59(0) == 11)
			{
				func_34(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (func_59(0) == 6)
			{
				func_34(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_34(iParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(func_61((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_61((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_22();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_61(iVar2) > func_61(iVar1))
				{
					if (func_61(iVar0) > func_61(iVar2) + 1 || func_61(iVar0) < func_61(iVar1))
					{
						func_34(iParam2, 32);
					}
				}
				else if (func_61(iVar0) > func_61(iVar2) + 1 && func_61(iVar0) < func_61(iVar1))
				{
					func_34(iParam2, 32);
				}
			}
		}
		if (iParam2->f_7)
		{
			bVar3 = false;
			if ((*(*Global_1396257)[iParam0])[iParam1]->f_40 != 4)
			{
				if (&(*(*Global_1396257)[iParam0])[iParam1]->f_5[0] != -1 || &(*(*Global_1396257)[iParam0])[iParam1]->f_5[1] != -1)
				{
					if (((func_62(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_62(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_63(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_63(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_64((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_34(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (get_game_timer() > iParam2->f_17)
			{
				if (func_65(&iParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || func_66(&iParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!func_18(&(iParam2->f_13)))
					{
						func_24(&(iParam2->f_13), 0f);
					}
					else if (func_67(&(iParam2->f_13)) >= iParam2->f_16)
					{
						func_27(&(iParam2->f_13));
						func_34(iParam2, 512);
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_18(&(iParam2->f_13)))
					{
						func_27(&(iParam2->f_13));
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (func_68())
			{
				func_34(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (func_69())
			{
				func_34(iParam2, 2048);
			}
		}
		if (func_60(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_34(iParam2, 128);
		}
		if (func_70(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_34(iParam2, 256);
		}
	}
	if ((((((((((func_32(*iParam2, 2) || func_32(*iParam2, 4)) || func_32(*iParam2, 8)) || func_32(*iParam2, 16)) || func_32(*iParam2, 32)) || func_32(*iParam2, 64)) || func_32(*iParam2, 128)) || func_32(*iParam2, 256)) || func_32(*iParam2, 512)) || func_32(*iParam2, 1024)) || func_32(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

int func_22()
{
	return &Global_1899515;
}

bool func_23(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_24(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_58() - fParam1);
	func_71(uParam0, 1);
	func_72(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_25(int iParam0)
{
	return iParam0 != -15;
}

void func_26(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_22();
}

void func_27(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

char* func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

bool func_29(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_30(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_31(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_32(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_33(int iParam0, int iParam1)
{
	if (is_scripted_speech_playing(*iParam0))
	{
		force_sonar_blips_this_frame();
		allow_sonar_blips(true);
		_trigger_sonar_blip_2(iParam1, *iParam0);
		return true;
	}
	return false;
}

void func_34(int iParam0, int iParam1)
{
	func_30(iParam0, iParam1);
}

int func_35(int iParam0)
{
	return &(Global_40.f_11623[iParam0]);
}

void func_36(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

bool func_37(var uParam0, vector3 vParam1, float fParam4)
{
	if (*uParam0)
	{
		return false;
	}
	if (does_entity_exist(iLocal_146))
	{
		return true;
	}
	iLocal_146 = func_73(iLocal_15, vParam1, fParam4, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (does_entity_exist(iLocal_146))
	{
		*uParam0 = 1;
		return true;
	}
	return false;
}

void func_38(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_74(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

void func_39(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_set_bool(iParam0, "bIsSpecialPed", true);
	decor_set_int(iParam0, "iSpecialPedID", iParam1);
	(*Global_1396257)[iParam1]->f_636 = iParam0;
}

bool func_40()
{
	if (func_75() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_41(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_76(uParam0, iParam1, sParam2))
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

int func_42(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_77(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_43()
{
	switch (iLocal_14)
	{
		case 0:
			return 6;
		case 1:
			return 15;
		case 2:
			return 2;
		case 3:
			return 5;
	}
	return 1;
}

char* func_44(int iParam0, int iParam1)
{
	sVar0 = "";
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV1_ART";
					*iParam1 = -1;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV2_ART";
					*iParam1 = -1;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV3_JHN";
					*iParam1 = -1;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV4_JHN";
					*iParam1 = -1;
					break;
			}
			break;
	}
	return sVar0;
}

bool func_45(char* sParam0)
{
	if (!func_49(1))
	{
		StringCopy(&cVar0, sParam0, 24);
		return func_78(&uLocal_16, cVar0, 0, -1, 0, 0);
	}
	return false;
}

bool func_46(char* sParam0, int iParam1)
{
	if (!func_49(1))
	{
		StringCopy(&cVar0, sParam0, 24);
		return func_78(&uLocal_16, cVar0, 1, iParam1, 0, 0);
	}
	return false;
}

bool func_47()
{
	if (func_75() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_48(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_79(1786474035, 0);
			}
			else
			{
				func_79(-783887552, 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_79(1417967521, 0);
			}
			else
			{
				func_79(498763362, 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_79(-755110140, 0);
			}
			else if (func_80(55))
			{
				func_79(-1437550882, 0);
			}
			else
			{
				func_79(-1121098923, 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				func_79(2063812437, 0);
			}
			else
			{
				func_79(-2140480896, 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				func_79(-1558441298, 0);
			}
			else
			{
				func_79(250250385, 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				func_79(1071640065, 0);
			}
			else
			{
				func_79(1387512056, 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				func_79(928184916, 0);
			}
			else
			{
				func_79(-516630543, 0);
			}
			break;
		default:
			break;
	}
}

bool func_49(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_50(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_81(&Global_0, 8);
	}
	if (!func_82() || func_75() != -1)
	{
		return;
	}
	func_81(&Global_0, 1);
}

void func_51()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

struct<2> func_52(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_53(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_54(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_55(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_56(var uParam0)
{
	func_24(uParam0, 0f);
}

bool func_57(var uParam0)
{
	return func_55(*uParam0, 2);
}

float func_58()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_59(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_60(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_61(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_62(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_83((*Global_1835011)[iParam0]->f_1);
}

int func_63(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_84((*Global_1835011)[iParam0]->f_1);
}

bool func_64(int iParam0)
{
	iVar0 = func_85();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case -173507739:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case -1148613331:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case -1721991356:
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 603685163:
				case 821931868:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case -1721991356:
				case -1233681761:
				case -1148613331:
				case -702816767:
				case -416908843:
				case -273223690:
				case -173507739:
				case 212278652:
				case 433385945:
				case 821931868:
				case 1420204096:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case -702816767:
				case 1500834021:
					return true;
			}
			break;
	}
	return false;
}

int func_65(int iParam0, var uParam1, float fParam2, var uParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	vVar0 = { get_entity_forward_vector(*iParam0) };
	vVar3 = { get_entity_coords(*iParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_86(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	if (!does_entity_exist(*iParam0))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
	}
	vVar2 = { get_entity_forward_vector(*iParam0) };
	vVar5 = { get_entity_coords(*iParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_87(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!_does_volume_exist(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = _create_volume_cylinder_with_custom_name(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			_0xb56d41a694e42e86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			_0x18262cafebb5fbe1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { get_entity_coords(*iParam0, true, false) };
		if (!func_88(iVar1, 0))
		{
			func_89(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_67(var uParam0)
{
	if (!func_18(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_57(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_90() - round((uParam0->f_1 * 1000f)));
}

bool func_68()
{
	return Global_1392040->f_6;
}

bool func_69()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_70(var uParam0, int iParam1)
{
	return func_91(*uParam0, iParam1);
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_72(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_73(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_92(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_74(int iParam0)
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

int func_75()
{
	return Global_1572887->f_12;
}

bool func_76(var uParam0, int iParam1, char* sParam2)
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

int func_77(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_93(vParam0))
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
		if (func_94(vParam0))
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
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_95(iVar0, bParam8);
	return iVar0;
}

bool func_78(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_96(cParam1, cParam0);
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

void func_79(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_97(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_98(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_80(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_82()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_83(int iParam0)
{
	iVar0 = func_99(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_84(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_100(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_86(var uParam0, vector3 vParam1, float fParam4)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	if (_0x59b57c4b06531e1e(vParam1, fParam4, *uParam0, 2) > 0)
	{
		_0x20a4bf0e09bee146(*uParam0);
		return true;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_87(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	iVar2 = _0x59b57c4b06531e1e(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		uVar0 = get_indexed_item_in_itemset(iVar1, *uParam0);
		*iParam1 = uVar0;
		if (does_entity_exist(*iParam1))
		{
			if (!is_entity_dead(*iParam1))
			{
				if (_is_this_model_a_horse(get_entity_model(*iParam1)))
				{
					if (func_101(Global_35, *iParam1, 0))
					{
					}
					else
					{
						_0x20a4bf0e09bee146(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_88(int iParam0, bool bParam1)
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

void func_89(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_102(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

int func_90()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_91(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_92(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_103(iParam1))
		{
			func_104(iParam0, 41788943);
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
			func_105(iParam0, 0, 1);
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
			func_106(iParam0, 0);
			bVar0 = true;
		}
		func_107(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_93(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_94(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_95(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_96(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

void func_97(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_108(1);
	}
}

void func_98(int iParam0)
{
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_97(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_108(1);
	}
}

int func_99(int iParam0)
{
	if (!func_109(iParam0))
	{
		return -1;
	}
	return func_100(iParam0);
}

int func_100(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_110(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_101(int iParam0, int iParam1, bool bParam2)
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

bool func_102(int iParam0, int iParam1)
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

bool func_103(int iParam0)
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

void func_104(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_111(iParam0, iParam1))
		{
			if (func_112(iParam0, iParam1))
			{
				if (func_113(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_114(iParam0);
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

void func_105(int iParam0, int iParam1, bool bParam2)
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

void func_106(int iParam0, bool bParam1)
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

void func_107(int iParam0, int iParam1)
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

void func_108(bool bParam0)
{
	if (bParam0)
	{
		func_115(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_116(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_109(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_110(int iParam0)
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

bool func_111(int iParam0, int iParam1)
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

bool func_112(int iParam0, int iParam1)
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

bool func_113(int iParam0, int iParam1)
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
	if (!func_111(iParam0, iVar0))
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

void func_114(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_115(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_116(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

