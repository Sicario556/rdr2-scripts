void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_2 = vScriptParam_0.x;
	uLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
	func_1();
	if (has_force_cleanup_occurred(523))
	{
		func_2();
	}
	while (!_0x9e4ef615e307fbbe() && func_3())
	{
		func_4();
		func_5();
		func_6();
		wait(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	_0xe7282390542f570d(iLocal_2);
	if (network_is_game_in_progress())
	{
		func_8();
	}
	else
	{
		terminate_this_thread();
	}
}

bool func_3()
{
	if (iLocal_1 != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return true;
		}
	}
	return iLocal_0;
}

void func_4()
{
}

void func_5()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(2))
	{
		switch (get_event_at_index(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	if (is_ped_injured(Global_35))
	{
		iLocal_0 = 0;
		return;
	}
	if (has_anim_event_fired(Global_35, -1898385492) && !bLocal_5)
	{
		fVar0 = 1f;
		fVar1 = 1f;
		bVar2 = false;
		bLocal_5 = true;
		func_13(floor((fVar0 * to_float(func_12(1871635045)))), bVar2, fVar1, 1, 0, 0, 1, 752097756);
	}
	if (!is_ped_using_any_scenario(Global_35))
	{
		clear_ped_tasks(Global_35, 1, 0);
		iLocal_0 = 0;
	}
}

void func_7()
{
}

void func_8()
{
	terminate_this_thread();
}

void func_9(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_14(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_15(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_16(&iVar0);
	}
}

int func_12(int iParam0)
{
	if (func_17())
	{
		return 0;
	}
	if (!func_18(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (_datafile_get_int(&uVar5, &Var0))
	{
	}
	return uVar5;
}

void func_13(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_19(iParam0, sParam4, iParam5);
	}
	func_20(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_14(int iParam0)
{
}

void func_15(int iParam0)
{
}

void func_16(int iParam0)
{
}

bool func_17()
{
	return false;
}

bool func_18(int iParam0, var uParam1)
{
	if (!func_21(iParam0))
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

void func_19(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_22(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_20(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_23())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_22(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_24(iVar0);
			func_25(iVar0, 0, 0);
		}
		func_22(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_27(func_26(1644987397), iVar1);
	}
}

bool func_21(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

var func_22(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_28(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_23()
{
	if (func_29())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_24(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_30((Global_40.f_4283.f_325 + iParam0));
}

void func_25(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_23())
	{
		func_22(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_22(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

struct<2> func_26(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_27(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_28(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_29()
{
	return _unlock_is_unlocked(-121456797);
}

void func_30(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_26(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

