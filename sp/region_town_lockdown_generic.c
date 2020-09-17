void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_41 = ScriptParam_0;
	bLocal_148 = ScriptParam_0.f_3;
	if (!bLocal_148)
	{
	}
	_0x5e6f375ca101c108(player_id(), 1);
	if (has_force_cleanup_occurred(546))
	{
		_0x29cd4896ecb66c12();
		func_1(1);
		terminate_this_thread();
	}
	func_2();
	while (func_3(iLocal_41))
	{
		func_4();
		func_5();
		wait(0);
	}
	if (!func_7(func_6()))
	{
		_0x5e6f375ca101c108(player_id(), 0);
	}
	_0x29cd4896ecb66c12();
	func_1(1);
}

void func_1(bool bParam0)
{
	remove_shocking_event(iLocal_147);
	_0xcbf2bebb468a34f3(0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_44)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (func_8(Local_44[iVar0][iVar1], 0))
			{
				set_entity_load_collision_flag(Local_44[iVar0][iVar1], 0);
				_0x3088634cf8c819cf(Local_44[iVar0][iVar1]);
				if (bParam0)
				{
					func_9((*Local_44[iVar0])[iVar1], 1, 0, 1);
				}
			}
			iVar1++;
		}
		if (does_group_exist(Local_44[iVar0]->f_4))
		{
			remove_group(Local_44[iVar0]->f_4);
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 13)
	{
		if (func_8(Local_65[iVar2]->f_5, 0))
		{
			set_entity_load_collision_flag(Local_65[iVar2]->f_5, 0);
			_0x3088634cf8c819cf(Local_65[iVar2]->f_5);
			if (bParam0)
			{
				func_9(&(Local_65[iVar2]->f_5), 1, 0, 1);
			}
		}
		iVar2++;
	}
}

void func_2()
{
	iLocal_42 = 1;
	iLocal_146 = 4;
	if (iLocal_41 == 76)
	{
		*Local_65[0] = { -315.9697f, 730.205f, 119.6211f };
		Local_65[0]->f_3 = 112.8886f;
		*Local_65[1] = { -280.0835f, 650.7783f, 112.3533f };
		Local_65[1]->f_3 = 106.2955f;
		*Local_65[2] = { -179.4088f, 618.418f, 113.0321f };
		Local_65[2]->f_3 = 238.633f;
		*Local_65[3] = { -188.5282f, 633.502f, 113.0321f };
		Local_65[3]->f_3 = 32.4418f;
		*Local_65[4] = { -247.1752f, 732.9976f, 115.5597f };
		Local_65[4]->f_3 = 247.7911f;
		*Local_65[5] = { -290.4395f, 854.7539f, 119.1824f };
		Local_65[5]->f_3 = 248.8751f;
	}
	else if (iLocal_41 == 105)
	{
		*Local_65[0] = { 1233.016f, -1257.087f, 73.0134f };
		Local_65[0]->f_3 = 45.548f;
		*Local_65[1] = { 1241.922f, -1289.397f, 75.9255f };
		Local_65[1]->f_3 = 302.9735f;
		*Local_65[2] = { 1299.177f, -1298.264f, 76.0373f };
		Local_65[2]->f_3 = 311.7982f;
		*Local_65[3] = { 1366.771f, -1384.501f, 78.0832f };
		Local_65[3]->f_3 = 241.6411f;
		if (!func_10())
		{
			*Local_65[4] = { 1237.376f, -1253.622f, 72.8261f };
			Local_65[4]->f_3 = 40.1294f;
			*Local_65[5] = { 1397.672f, -1309.186f, 76.6507f };
			Local_65[5]->f_3 = 233.5066f;
			*Local_65[6] = { 1315.306f, -1227.236f, 78.2259f };
			Local_65[6]->f_3 = 290.243f;
		}
		if (!func_10())
		{
			iLocal_146 = 2;
		}
		else
		{
			iLocal_146 = 1;
		}
	}
	else if (iLocal_41 == 26)
	{
		*Local_65[0] = { -1733.893f, -409.9799f, 154.4572f };
		Local_65[0]->f_3 = 219.0199f;
		*Local_65[1] = { -1791.323f, -399.5062f, 159.2381f };
		Local_65[1]->f_3 = 212.9633f;
		*Local_65[2] = { -1777.439f, -422.8475f, 154.1486f };
		Local_65[2]->f_3 = 62.4417f;
		*Local_65[3] = { -1836.929f, -420.9853f, 159.9767f };
		Local_65[3]->f_3 = 175.3828f;
		*Local_65[4] = { -1816.793f, -400.6095f, 160.5686f };
		Local_65[4]->f_3 = 260.9312f;
		*Local_65[5] = { -1816.323f, -270.1976f, 176.8509f };
		Local_65[5]->f_3 = 1.7588f;
		iLocal_146 = 1;
	}
	else if (iLocal_41 == 38)
	{
		*Local_65[0] = { -740.3712f, -1221.114f, 43.6817f };
		Local_65[0]->f_3 = 53.1936f;
		*Local_65[1] = { -851f, -1191.6f, 42.5509f };
		Local_65[1]->f_3 = 190f;
		*Local_65[2] = { -861.8897f, -1227.788f, 42.2753f };
		Local_65[2]->f_3 = 65.2773f;
		*Local_65[3] = { -841.9166f, -1234.872f, 42.5675f };
		Local_65[3]->f_3 = 256.8999f;
		*Local_65[4] = { -915.2818f, -1361.665f, 44.0777f };
		Local_65[4]->f_3 = 79.3949f;
		*Local_65[5] = { -865.3668f, -1397.431f, 42.5964f };
		Local_65[5]->f_3 = 183.7478f;
		*Local_65[6] = { -774.5f, -1379.2f, 43.4207f };
		Local_65[6]->f_3 = 210.8791f;
		*Local_65[7] = { -823.8338f, -1331.073f, 42.6664f };
		Local_65[7]->f_3 = 122.9285f;
		*Local_65[8] = { -806.4053f, -1261.322f, 42.6713f };
		Local_65[8]->f_3 = 328.6115f;
		*Local_65[9] = { -806.9378f, -1343.487f, 42.6736f };
		Local_65[9]->f_3 = 265.7803f;
		*Local_65[10] = { -682.9378f, -1243.5f, 42.6736f };
		Local_65[10]->f_3 = 270f;
		*Local_65[11] = { -723.1f, -1273.4f, 42.6736f };
		Local_65[11]->f_3 = 265.7803f;
		*Local_65[12] = { -735.5f, -1373.1f, 44.3f };
		Local_65[12]->f_3 = 300f;
	}
	else if (iLocal_41 == 57)
	{
		*Local_65[0] = { 1437.581f, -7118.745f, 73.8276f };
		Local_65[0]->f_3 = 304.4214f;
		*Local_65[1] = { 1501.077f, -7096.875f, 75.3257f };
		Local_65[1]->f_3 = 132.8023f;
		*Local_65[2] = { 1455.17f, -7087.646f, 74.8994f };
		Local_65[2]->f_3 = 17.1023f;
		*Local_65[3] = { 1482.781f, -7074.065f, 73.0206f };
		Local_65[3]->f_3 = 87.7416f;
		*Local_65[4] = { 1455.889f, -7126.713f, 76.3761f };
		Local_65[4]->f_3 = 171.7569f;
		*Local_65[5] = { 1445.943f, -7104.507f, 76.3761f };
		Local_65[5]->f_3 = 115.4127f;
		*Local_65[6] = { 1429.604f, -7090.44f, 71.6729f };
		Local_65[6]->f_3 = 347.8958f;
		iLocal_146 = 2;
	}
	else if (iLocal_41 == 78)
	{
		*Local_65[0] = { 2836.395f, 1440.633f, 68.6899f };
		Local_65[0]->f_3 = 93.6271f;
		*Local_65[1] = { 2878.97f, 1387.042f, 83.0191f };
		Local_65[1]->f_3 = 75.0041f;
		*Local_65[2] = { 3022.347f, 1439.903f, 45.9552f };
		Local_65[2]->f_3 = 80.5108f;
		*Local_65[3] = { 2870.179f, 1422.417f, 67.6698f };
		Local_65[3]->f_3 = 270.6312f;
		*Local_65[4] = { 2877.519f, 1368.874f, 61.9214f };
		Local_65[4]->f_3 = 91.5501f;
		*Local_65[5] = { 2937.786f, 1317.984f, 43.1809f };
		Local_65[5]->f_3 = 44.1809f;
		*Local_65[6] = { 2945.338f, 1374.376f, 50.3227f };
		Local_65[6]->f_3 = 178.441f;
		iLocal_146 = 1;
	}
	_0xed9582b3da8f02b4((3 * iLocal_146) + 13);
}

bool func_3(int iParam0)
{
	if (((((!(func_11(iParam0, 8) || func_11(iParam0, 2)) || !func_13(Global_35, func_12(iParam0), 1, 0)) || !func_14(iParam0)) || func_15()) || Global_1934266->f_56) || ((iParam0 != 38 || func_16(45)) && (func_17(1, 0) || func_17(8, 0))))
	{
		return false;
	}
	return true;
}

void func_4()
{
	if (!func_18(player_id(), 0, 0, 1))
	{
		_0xc310239acccf5579();
	}
	switch (iLocal_42)
	{
		case 1:
			iLocal_43 = func_19(2, 2, -156825994, 1, 0, 0f, 0f, 0f);
			if (!is_model_valid(iLocal_43))
			{
				iVar0 = func_20(iLocal_41);
				if (iVar0 == 8)
				{
					iLocal_43 = -384354290;
				}
			}
			if (func_8(Global_35, 0))
			{
			}
			iLocal_152 = func_21(iLocal_41);
			if (iLocal_41 == 38)
			{
				iLocal_153 = _create_volume_box(-810.7571f, -1288.25f, 63.56367f, 0f, 0f, 0f, 137.4041f, 198.2413f, 58.96445f);
			}
			iLocal_42 = 2;
			break;
		case 2:
			request_model(iLocal_43, false);
			if (has_model_loaded(iLocal_43) && _0x5e420ff293ee5472())
			{
				iLocal_42 = 3;
			}
			break;
		case 3:
			if (!func_18(player_id(), 0, 0, 0) || !bLocal_148)
			{
				iVar1 = create_itemset(true);
				_0x0c392db374655176(Global_36, 200f, iVar1);
				iVar2 = get_itemset_size(iVar1);
				destroy_itemset(iVar1);
				if (iVar2 > 14)
				{
					iLocal_42 = 6;
				}
				else if (iVar2 > 7)
				{
					iLocal_42 = 5;
				}
				else
				{
					iLocal_42 = 4;
				}
			}
			break;
		case 4:
			if (!bLocal_148)
			{
				if (func_22())
				{
					iLocal_42 = 5;
				}
			}
			else
			{
				iLocal_42 = 5;
			}
			break;
		case 5:
			if (func_23())
			{
				func_24();
				iLocal_145 = 0;
				iLocal_42 = 6;
			}
			break;
		case 6:
			if (iLocal_41 == 38 && !func_16(45))
			{
				if (!func_25(&uLocal_154))
				{
					if (func_13(Global_35, iLocal_153, 1, 0))
					{
						func_26(&uLocal_154);
					}
				}
				else if (func_27(&uLocal_154) > 3f)
				{
					_report_crime(player_id(), 481893872, 0, 0, true);
				}
			}
			if (Global_1935630->f_18)
			{
				func_1(0);
				iLocal_42 = 7;
			}
			break;
		case 7:
			if (iLocal_41 == 38 && !func_16(45))
			{
				if (Global_1935630->f_18)
				{
					report_police_spotted_player(player_id());
				}
			}
			break;
		case 8:
			func_1(1);
			iLocal_42 = 9;
			break;
	}
}

void func_5()
{
	if (func_28(1) == func_29())
	{
		_0xcbf2bebb468a34f3(1);
	}
	else
	{
		_0xcbf2bebb468a34f3(0);
	}
}

int func_6()
{
	return Global_1897952->f_41;
}

bool func_7(int iParam0)
{
	if (!func_30(iParam0))
	{
		return false;
	}
	return func_31(iParam0, 2);
}

bool func_8(int iParam0, int iParam1)
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

void func_9(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

bool func_10()
{
	return (func_33(21) && !func_33(27));
}

bool func_11(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

int func_12(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

bool func_13(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_14(int iParam0)
{
	if (!func_34(iParam0))
	{
		return false;
	}
	return func_11(iParam0, 33554432);
}

bool func_15()
{
	if (func_35() == -1)
	{
		if (func_36() || func_37())
		{
			return true;
		}
	}
	else if (func_38(1, 255))
	{
		return true;
	}
	return false;
}

bool func_16(int iParam0)
{
	if (!func_39(iParam0))
	{
		return false;
	}
	return func_40(iParam0);
}

int func_17(int iParam0, bool bParam1)
{
	if (func_41(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_42(5000))
		{
			return 1;
		}
	}
	switch (func_43(0))
	{
		case 0:
			return 0;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_18(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_44(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return false;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return false;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return false;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

int func_19(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, vector3 vParam5)
{
	if (!func_45(iParam0))
	{
		return 0;
	}
	if (func_46(iParam0) == -1)
	{
		return 0;
	}
	return get_random_model_from_population_set(func_46(iParam0), iParam1, iParam2, bParam3, bParam4, vParam5);
}

int func_20(int iParam0)
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
	else if (iParam0 <= 116)
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

int func_21(int iParam0)
{
	sVar0 = "Law ped patrol zone";
	switch (iParam0)
	{
		case 76:
			return _create_volume_box_with_custom_name(-289.5586f, 710.8658f, 108.6164f, 0f, 0f, 21.78f, 150.319f, 248.9677f, 48.46068f, sVar0);
		case 105:
			return _create_volume_box_with_custom_name(1355.895f, -1305.364f, 76.3101f, 0f, 0f, 46.10207f, 156.1024f, 183.122f, 48.46068f, sVar0);
		case 38:
			return _create_volume_box_with_custom_name(-848.7946f, -1305.756f, 42.269f, 0f, 0f, 0f, 170.4325f, 189.3558f, 48.46068f, sVar0);
		case 78:
			return _create_volume_box_with_custom_name(2896.522f, 1390.781f, 59.3423f, 0f, 0f, -18.52123f, 170.4325f, 189.3558f, 48.46068f, sVar0);
		default:
			break;
	}
	return func_12(iParam0);
}

bool func_22()
{
	if (iLocal_145 < 13)
	{
		if (!func_47(*Local_65[iLocal_145]))
		{
			Local_65[iLocal_145]->f_5 = func_48(iLocal_43, *Local_65[iLocal_145], Local_65[iLocal_145]->f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (func_8(Local_65[iLocal_145]->f_5, 0))
			{
				func_49(Local_65[iLocal_145]->f_5);
				_give_weapon_to_ped_2(Local_65[iLocal_145]->f_5, -183018591, 100, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				Local_65[iLocal_145]->f_4 = create_scenario_point(func_50(), *Local_65[iLocal_145], Local_65[iLocal_145]->f_3, 0, 0, 0);
				bVar0 = true;
				task_police(Local_65[iLocal_145]->f_5, bVar0);
				if (_does_scenario_point_exist(Local_65[iLocal_145]->f_4))
				{
					_task_use_scenario_point(Local_65[iLocal_145]->f_5, Local_65[iLocal_145]->f_4, 0, 0, false, true, 0, false, -1f, false);
				}
				else
				{
					task_stand_guard(Local_65[iLocal_145]->f_5, *Local_65[iLocal_145], Local_65[iLocal_145]->f_3, "DEFEND");
				}
			}
		}
		iLocal_145++;
	}
	else
	{
		iLocal_145 = 0;
		return true;
	}
	return false;
}

bool func_23()
{
	if (iLocal_144 >= iLocal_146)
	{
		return true;
	}
	else if (iLocal_145 == 0)
	{
	}
	if (iLocal_41 == 38)
	{
		iVar3 = create_itemset(true);
		_0x0c392db374655176(Global_36, 200f, iVar3);
		iVar4 = get_itemset_size(iVar3);
		destroy_itemset(iVar3);
		if (iVar4 > 16)
		{
			iLocal_144++;
			return false;
		}
	}
	if (!does_group_exist(Local_44[iLocal_144]->f_4))
	{
		Local_44[iLocal_144]->f_4 = create_group(1);
	}
	if (iLocal_145 < 3)
	{
		if (!func_51(iLocal_41, &vLocal_149, iLocal_43, iLocal_144))
		{
			vLocal_149 = { func_52(iLocal_41, 1) };
		}
		func_53(&vLocal_149, 50, 10, 0);
		vVar0 = { func_54(vLocal_149, 3f, 1f) };
		(*Local_44[iLocal_144])[iLocal_145] = func_48(iLocal_43, vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		func_49(Local_44[iLocal_144][iLocal_145]);
		set_ped_config_flag(Local_44[iLocal_144][iLocal_145], 279, true);
		if (iLocal_145 == 0)
		{
			set_ped_as_group_leader(Local_44[iLocal_144][iLocal_145], Local_44[iLocal_144]->f_4, false);
		}
		else
		{
			set_ped_as_group_member(Local_44[iLocal_144][iLocal_145], Local_44[iLocal_144]->f_4);
		}
		if (iLocal_145 == 0)
		{
		}
		else if ((iLocal_145 % 3) == 0)
		{
			if (func_56(func_55()) >= 20 || func_56(func_55()) <= 5)
			{
				_give_weapon_to_ped_2(Local_44[iLocal_144][iLocal_145], 1742487518, 100, true, false, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
		else
		{
			_give_weapon_to_ped_2(Local_44[iLocal_144][iLocal_145], -183018591, 100, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		}
		iLocal_145++;
	}
	else
	{
		iLocal_145 = 0;
		iLocal_144++;
	}
	return false;
}

void func_24()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!does_group_exist(Local_44[iVar0]->f_4))
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (func_8(Local_44[iVar0][iVar1], 0))
				{
					if (iVar1 == 0)
					{
						if (_does_volume_exist(iLocal_152))
						{
							iVar2 = iLocal_152;
						}
						else if (_does_volume_exist((*Global_1888801)[iLocal_41]->f_5))
						{
							iVar2 = (*Global_1888801)[iLocal_41]->f_5;
						}
						else
						{
							iVar2 = func_12(iLocal_41);
						}
						bVar3 = true;
						task_police(Local_44[iVar0][iVar1], bVar3);
						if (_does_volume_exist(iVar2))
						{
							task_wander_in_volume(Local_44[iVar0][iVar1], iVar2, 1077936128, 1086324736, 0);
						}
						else
						{
							task_wander_in_area(Local_44[iVar0][iVar1], get_entity_coords(Local_44[iVar0][iVar1], true, false), 100f, 1077936128, 1086324736, 0);
						}
					}
					else
					{
						bVar4 = true;
						task_police(Local_44[iVar0][iVar1], bVar4);
						if (func_8(Local_44[iVar0][0], 0))
						{
							task_follow_and_converse_with_ped(Local_44[iVar0][iVar1], Local_44[iVar0][0], 0, 0, -1082130432, -1082130432, 8, 0, 0, 1069547520, 1073741824);
						}
						else
						{
							task_wander_in_area(Local_44[iVar0][iVar1], get_entity_coords(Local_44[iVar0][iVar1], true, false), 100f, 1077936128, 1086324736, 0);
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_25(var uParam0)
{
	return func_57(*uParam0, 1);
}

void func_26(var uParam0)
{
	func_58(uParam0, 0f);
}

float func_27(var uParam0)
{
	if (!func_25(uParam0))
	{
		return 0f;
	}
	if (func_59(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_60() - uParam0->f_1);
}

int func_28(int iParam0)
{
	return _get_map_zone_at_coords(Global_36, iParam0);
}

int func_29()
{
	switch (iLocal_41)
	{
		case 76:
			return 459833523;
		case 26:
			return 427683330;
		case 105:
			return 2046780049;
		case 38:
			return 1053078005;
		case 78:
			return 7359335;
		default:
			break;
	}
	return -1;
}

bool func_30(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_31(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_32(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_33(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_61((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_34(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_35()
{
	return Global_1572887->f_12;
}

bool func_36()
{
	return func_62(&Global_1935630, 4096);
}

bool func_37()
{
	if ((!is_player_playing(player_id()) || is_ped_dead_or_dying(Global_35, true)) || _0xc5c395c60b542a3c(1))
	{
		return true;
	}
	return false;
}

bool func_38(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_63(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_64())
	{
		return func_63(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_63(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_40(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_41(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_42(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1898438;
}

int func_43(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

int func_44(bool bParam0, bool bParam1, bool bParam2)
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

bool func_45(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_46(int iParam0)
{
	if (!func_45(iParam0))
	{
		return -1;
	}
	iVar0 = func_66(func_65());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1898147[iParam0];
	}
	return Global_1898130[iParam0];
}

bool func_47(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_48(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_67(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_49(int iParam0)
{
	func_68(iParam0);
	remove_all_ped_weapons(iParam0, true, true);
	func_69(iParam0);
	set_entity_load_collision_flag(iParam0, 1);
	request_ped_visibility_tracking(iParam0);
	_0x819add5ef1742f47(iParam0, 32768);
	set_ped_config_flag(iParam0, 168, true);
}

var func_50()
{
	iVar0[0] = 830847823;
	iVar0[1] = -22664287;
	iVar0[2] = 2087366558;
	iVar0[3] = -1124614608;
	iVar0[4] = -258459266;
	iVar0[5] = 871322766;
	iVar0[6] = 871322766;
	iVar0[7] = 1978275899;
	iVar0[8] = 1978275899;
	iVar0[9] = 1978275899;
	return &(iVar0[get_random_int_in_range(0, 10)]);
}

bool func_51(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	iVar1 = iParam3;
	while (iVar1 != iParam3 || !bVar0)
	{
		*uParam1 = { func_70(iParam0, iVar1) };
		if (func_47(*uParam1))
		{
			return false;
		}
		if (would_entity_be_occluded(iParam2, *uParam1, true))
		{
			return true;
		}
		bVar0 = true;
		iVar1++;
		if (iVar1 >= 4)
		{
			iVar1 = 0;
		}
	}
	return false;
}

Vector3 func_52(int iParam0, bool bParam1)
{
	vVar0 = { 0f, 0f, 0f };
	if (!func_34(iParam0))
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

int func_53(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_71(*uParam0, 0f, 0f, 0f))
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

Vector3 func_54(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_72(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_55()
{
	return &Global_1899515;
}

int func_56(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_57(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_58(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_60() - fParam1);
	func_73(uParam0, 1);
	func_74(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_59(var uParam0)
{
	return func_57(*uParam0, 2);
}

float func_60()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_61(int iParam0, bool bParam1)
{
	switch (func_75(iParam0))
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

bool func_62(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_63(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_64()
{
	return Global_1109400->f_245;
}

int func_65()
{
	return Global_1894899->f_2;
}

int func_66(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

void func_67(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_76(iParam1))
		{
			func_77(iParam0, 41788943);
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
			func_78(iParam0, 0, 1);
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
			func_79(iParam0, 0);
			bVar0 = true;
		}
		func_80(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_68(int iParam0)
{
	if (!func_8(iParam0, 0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		set_entity_as_mission_entity(iParam0, true, false);
	}
	func_69(iParam0);
}

void func_69(int iParam0)
{
	_0x819add5ef1742f47(iParam0, 2);
	_0x819add5ef1742f47(iParam0, 1);
	set_ped_config_flag(iParam0, 188, true);
	_0xbd75500141e4725c(iParam0, 298468673);
	set_ped_combat_attributes(iParam0, 39, true);
	_0x9de63896b176ea94(iParam0, 0);
	set_ped_drops_weapons_when_dead(iParam0, false);
	_give_weapon_to_ped_2(iParam0, -1101297303, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	_give_weapon_to_ped_2(iParam0, -1212426201, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

Vector3 func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					return -344.5539f, 730.0873f, 116.3921f;
				case 1:
					return -281.1094f, 847.3516f, 118.6537f;
				case 2:
					return -361.3619f, 809.3384f, 114.9999f;
				case 3:
					return -236.5398f, 702.7105f, 112.5291f;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return -1761.082f, -398.9954f, 154.8396f;
				case 1:
					return -1795.016f, -366.7957f, 160.3465f;
				case 2:
					return -1834.661f, -433.5942f, 158.4428f;
				case 3:
					return -1796.619f, -448.2619f, 156.146f;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					return 1308.71f, -1258.847f, 76.3559f;
				case 1:
					return 1317.515f, -1303.441f, 75.2424f;
				case 2:
					return 1346.54f, -1354.946f, 77.4856f;
				case 3:
					return 1398.272f, -1314.57f, 76.6552f;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return -798.7501f, -1213.198f, 42.2567f;
				case 1:
					return -768.3777f, -1338.455f, 42.4399f;
				case 2:
					return -822.5508f, -1393.462f, 42.6506f;
				case 3:
					return -885.0519f, -1336.306f, 42.1916f;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					return 2945.202f, 1362.138f, 43.0637f;
				case 1:
					return 2870.698f, 1465.912f, 67.2534f;
				case 2:
					return 2969.26f, 1400.698f, 42.9448f;
				case 3:
					return 2948.088f, 1281.233f, 43.626f;
				default:
					break;
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 0:
					return 1484.599f, -7136.449f, 72.4505f;
				case 1:
					return 1493.948f, -7104.739f, 74.0429f;
				case 2:
					return 1440.728f, -7117.095f, 73.7227f;
				default:
					break;
			}
			break;
		default:
			return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

bool func_71(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_72(vector3 vParam0, float fParam3)
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

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_75(int iParam0)
{
	if (!func_81(iParam0))
	{
		return -1;
	}
	return func_82(iParam0);
}

bool func_76(int iParam0)
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

void func_77(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_83(iParam0, iParam1))
		{
			if (func_84(iParam0, iParam1))
			{
				if (func_85(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_86(iParam0);
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

void func_78(int iParam0, int iParam1, bool bParam2)
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

void func_79(int iParam0, bool bParam1)
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

void func_80(int iParam0, int iParam1)
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

bool func_81(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_82(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_87(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_83(int iParam0, int iParam1)
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

bool func_84(int iParam0, int iParam1)
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

bool func_85(int iParam0, int iParam1)
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
	if (!func_83(iParam0, iVar0))
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

void func_86(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_87(int iParam0)
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

