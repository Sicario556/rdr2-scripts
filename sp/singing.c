void __EntryFunction__()
{
	bLocal_101 = true;
	func_1();
	func_2();
	while (true)
	{
		if (func_3() || !func_4(&uVar0, &bLocal_101, 0))
		{
			func_5();
		}
		wait(0);
	}
}

void func_1()
{
	if (has_force_cleanup_occurred(523))
	{
		func_5();
	}
}

void func_2()
{
	StringCopy(&cLocal_98, func_6(Global_1935630->f_57), 24);
	func_7(&uLocal_0, Global_35, "ARTHUR", 0);
	func_8(&uLocal_0, cLocal_98, 0, -1, 0, 0);
	start_audio_scene("player_idle_singing_scene");
	Global_1935630->f_54 = get_game_timer();
	Global_1935630->f_57++;
	if (Global_1935630->f_57 >= 2)
	{
		Global_1935630->f_57 = 0;
	}
}

bool func_3()
{
	if (!is_string_null_or_empty(&cLocal_98))
	{
		return !func_9(&cLocal_98);
	}
	return true;
}

bool func_4(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 1;
	*uParam0 = 0;
	*bParam1 = 1;
	if (func_10(0))
	{
		iVar0 = 0;
	}
	if (!bParam2)
	{
		if (func_11())
		{
			iVar0 = 0;
		}
	}
	if ((func_12() || func_13()) || func_14(Global_1393447, 16))
	{
		*uParam0 = 1;
		*bParam1 = 0;
		iVar0 = 0;
	}
	if (!is_ped_on_mount(Global_35))
	{
		if (!bParam2)
		{
			if (!is_ped_in_any_boat(Global_35))
			{
				Global_1935630->f_55 = get_game_timer();
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar1 = get_mount(Global_35);
		if (!is_ped_injured(iVar1))
		{
			if (is_ped_sprinting(iVar1) || func_15(iVar1))
			{
				iVar0 = 0;
			}
		}
		if (is_ped_falling(iVar1))
		{
			iVar0 = 0;
			*uParam0 = 1;
			*bParam1 = 0;
		}
	}
	if (is_ped_falling(Global_35))
	{
		iVar0 = 0;
		*uParam0 = 1;
		*bParam1 = 0;
	}
	if (!bParam2)
	{
		if (Global_1935630->f_55 + 30000 > get_game_timer())
		{
			iVar0 = 0;
		}
	}
	if (func_16(1) > 0)
	{
		iVar0 = 0;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &uVar2, 1, 1))
	{
		iVar0 = 0;
		*bParam1 = 0;
	}
	if (!bParam2)
	{
		if (!func_18(func_17()))
		{
			iVar0 = 0;
		}
		if (func_19(128))
		{
			iVar0 = 0;
		}
	}
	if (func_20(player_id(), 1, 0, 1))
	{
		*uParam0 = 1;
		iVar0 = 0;
		*bParam1 = 0;
	}
	if (Global_1935630->f_28 + 30000 > get_game_timer())
	{
		*uParam0 = 1;
		iVar0 = 0;
		*bParam1 = 0;
	}
	if (_0x285d36c5c72b0569(Global_35) + 30000f) > IntToFloat(get_game_timer())
	{
		*uParam0 = 1;
		iVar0 = 0;
		*bParam1 = 0;
	}
	if (bParam2)
	{
		if (is_ped_using_any_scenario(Global_35) || _0x3ab6c7b0bb0df4b1(Global_35, -1))
		{
			*uParam0 = 1;
			iVar0 = 0;
			*bParam1 = 1;
		}
	}
	if (!bParam2)
	{
		if (func_21() != -1)
		{
			if (func_22(func_21()))
			{
				*uParam0 = 1;
			}
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_5()
{
	Global_1935630->f_56 = 0;
	stop_audio_scene("player_idle_singing_scene");
	if (!is_string_null_or_empty(&cLocal_98))
	{
		if (func_9(&cLocal_98))
		{
			func_23(&cLocal_98, bLocal_101, 0);
		}
	}
	terminate_this_thread();
}

char* func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ARTSO_JACKHALL";
		case 1:
			return "ARTSO_KEYHOLE";
		default:
			break;
	}
	return "";
}

void func_7(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_24(uParam0, iParam1, sParam2))
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

bool func_8(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_25(cParam1, cParam0);
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

bool func_9(char[4] cParam0)
{
	if (_0xd89504d9d7d5057d(cParam0) && _0x1ecc76792f661cf5(cParam0))
	{
		return true;
	}
	return false;
}

int func_10(int iParam0)
{
	if (func_26())
	{
		return 0;
	}
	return func_27((*Global_1347702)[58]->f_15, 1);
}

bool func_11()
{
	return (func_28() || func_29());
}

bool func_12()
{
	return Global_1898164->f_163;
}

bool func_13()
{
	return Global_1310750->f_16077 != 0;
}

bool func_14(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_15(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (!_is_this_model_a_horse(iVar0))
	{
		return false;
	}
	if (_0x3b005ff0538ed2a9(iParam0) == 1)
	{
		return true;
	}
	return false;
}

int func_16(bool bParam0)
{
	if (bParam0)
	{
		return func_30(Global_1359489->f_4);
	}
	get_group_size(func_31(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_31(), iVar3);
		if (func_32(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_17()
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

bool func_18(int iParam0)
{
	switch (iParam0)
	{
		case -173507739:
		case 1632247697:
			return true;
		default:
			break;
	}
	return false;
}

bool func_19(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_34(func_33());
	if (func_35(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_35(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_35(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_35(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_35(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_35(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_35(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_35(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_35(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_35(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_35(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_35(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_35(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_35(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_35(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_35(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_35(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

int func_20(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_36(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
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

int func_21()
{
	return Global_1894899->f_2;
}

bool func_22(int iParam0)
{
	if (!func_37(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_38(iParam0));
}

void func_23(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

bool func_24(var uParam0, int iParam1, char* sParam2)
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

void func_25(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

bool func_26()
{
	if (func_39() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_27(int iParam0, bool bParam1)
{
	switch (func_40(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_28()
{
	return &Global_1935436 == 1;
}

bool func_29()
{
	return &Global_1935436 == 2;
}

int func_30(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_41(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_31()
{
	return get_player_group(get_player_index());
}

bool func_32(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_39() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_33()
{
	return &Global_1899515;
}

int func_34(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_35(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_36(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_37(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_38(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_26())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_39()
{
	return Global_1572887->f_12;
}

int func_40(int iParam0)
{
	if (!func_42(iParam0))
	{
		return -1;
	}
	return func_43(iParam0);
}

void func_41(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_42(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_43(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_44(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_44(int iParam0)
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

