void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_148 = 1;
	iLocal_149 = 1;
	uLocal_19 = ScriptParam_0;
	Global_1392235->f_3 = 0;
	if (func_1() == -1)
	{
	}
	else
	{
		func_2(&Local_20, -1);
	}
	if (_get_number_of_references_of_script_with_name_hash(1629771901) > 1)
	{
		func_2(&Local_20, -1);
	}
	if (_does_scenario_point_exist(ScriptParam_0.f_1))
	{
		Local_136.f_4 = { _get_scenario_point_coords(ScriptParam_0.f_1, true) };
	}
	else
	{
		func_2(&Local_20, -1);
	}
	Local_136.f_1 = func_3(Local_136.f_4);
	Local_136.f_2 = func_4(Local_136.f_1);
	Local_136.f_3 = func_5(0, Local_136.f_2, 2, 0);
	if (has_force_cleanup_occurred(523))
	{
		func_2(&Local_20, -1);
	}
	func_6(&Local_136, &Local_20);
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1, 1);
	func_8(Local_20.f_112);
	_0xe7282390542f570d(uLocal_19);
	terminate_this_thread();
}

int func_3(vector3 vParam0)
{
	iVar1 = func_9(vParam0, 0);
	switch (iVar1)
	{
		case 76:
			iVar0 = 1;
			break;
		case 26:
			iVar0 = 2;
			break;
		case 105:
			iVar0 = 3;
			break;
		case 5:
			iVar0 = 4;
			break;
		case 38:
			iVar0 = 5;
			break;
		case 115:
			iVar0 = 6;
			break;
	}
	return iVar0;
}

int func_4(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 76;
			break;
		case 2:
			iVar0 = 26;
			break;
		case 3:
			iVar0 = 105;
			break;
		case 4:
			iVar0 = 5;
			break;
		case 5:
			iVar0 = 38;
			break;
		case 6:
			iVar0 = 115;
			break;
	}
	return iVar0;
}

int func_5(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_10())
	{
		iVar2 = func_10();
	}
	iVar5 = func_11(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_12(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_12(iVar6) == 0)
			{
				return func_13(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_12(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_12(iVar6) == 0)
			{
				return func_13(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_13(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_6(var uParam0, var uParam1)
{
	while (func_14(uParam1, uParam0))
	{
		if (func_15(uParam0))
		{
			func_2(uParam1, uParam0->f_2);
		}
		if (!&Global_1879534)
		{
			func_16(uParam1, uParam0);
			if (func_17())
			{
				if (func_18(1))
				{
					func_19(1, 0, 0);
				}
				func_20(&iLocal_159, 0);
				func_21(&(uParam1->f_6), &iLocal_159, &Local_180, 1, 1);
				if (iLocal_14 < 4)
				{
					func_22(uParam0);
				}
				func_23(5);
			}
			switch (iLocal_14)
			{
				case 0:
					if (!_does_volume_exist(uParam1->f_112))
					{
						func_24(uParam0->f_1, &(uParam1->f_112));
					}
					if (func_25(uParam0, 1, uParam1->f_6))
					{
						if (iLocal_223 >= 3)
						{
							if (func_26(uParam0, uParam1))
							{
								if (!is_screen_faded_out())
								{
									func_27(uParam0);
									func_24(uParam0->f_1, &(uParam1->f_112));
									if (!_does_volume_exist(uParam1->f_115))
									{
										uParam1->f_115 = _create_volume_cylinder_with_custom_name(func_28(uParam0->f_1), 0f, 0f, 0f, 4f, 4f, 4f, "BHPOSTER_CLEAR_AREA");
									}
									if (!_0x91a5f9cbebb9d936(uParam1->f_114))
									{
										uParam1->f_114 = _0x4c39c95ae5db1329(uParam1->f_115, 0, 15);
									}
									if (_does_scenario_point_exist(uParam1->f_4) && !func_29())
									{
										_set_scenario_point_active(uParam1->f_4, true);
									}
									func_30(uParam0);
									func_31(0);
									func_23(1);
								}
							}
							else
							{
								Global_1392235->f_3 = 1;
							}
						}
					}
					break;
				case 1:
					func_30(uParam0);
					if (bLocal_222 || func_25(uParam0, 0, uParam1->f_6))
					{
						if (func_32(uParam0))
						{
							func_33(uParam0, uParam1);
							func_34(uParam1, uParam0);
							func_35(uParam1, uParam0);
							if (func_36(uParam1))
							{
								func_37(uParam0);
								func_38(uParam0);
								Global_1392235->f_3 = 1;
								func_23(2);
							}
						}
					}
					else
					{
						func_23(0);
						func_7(uParam1, uParam0->f_2, 0);
					}
					break;
				case 2:
					if (!_0xec7e480ff8bd0bed(Global_35) || func_39())
					{
						func_40(*uParam0, 1);
						func_41(*uParam0);
						func_42(*uParam0);
						func_43(uParam0);
						func_44(*uParam0);
						func_45(*uParam0);
						func_46(0, -1);
						func_23(3);
					}
					break;
				case 3:
					if (iLocal_144 >= 3)
					{
						func_22(uParam0);
						if (func_47(uParam1->f_6, 0))
						{
							func_23(4);
						}
						else
						{
							func_2(uParam1, uParam0->f_2);
						}
					}
					break;
				case 4:
					if (!func_48(Global_35, uParam1->f_112, 1, 0))
					{
						if (!func_49(uParam0->f_2, 0, 0) && func_50(Global_35, uParam1->f_6, 1, 1) > 15f)
						{
							func_23(5);
						}
					}
					break;
				case 5:
					if ((!_does_scenario_point_exist(uParam1->f_9) || !_0x9c54041bb66bcf9e(uParam1->f_6, uParam1->f_9)) || func_50(Global_35, uParam1->f_6, 1, 1) > 50f)
					{
						func_2(uParam1, uParam0->f_2);
					}
					break;
			}
		}
		if (_does_volume_exist(uParam1->f_112) && (func_48(Global_35, uParam1->f_112, 1, 0) || func_49(uParam0->f_2, 0, 1)))
		{
			wait(0);
		}
		else if (iLocal_14 >= 2)
		{
			wait(0);
		}
		else if (vdist2(Global_36, func_28(uParam0->f_1)) < 1225f)
		{
			wait(100);
		}
		else
		{
			wait(500);
		}
	}
}

void func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iLocal_144 < 4)
	{
		func_31(4);
	}
	func_51(0);
	func_52(0);
	iLocal_147 = 0;
	if (func_18(1))
	{
		func_19(1, 0, 0);
	}
	func_20(&iLocal_159, 0);
	func_21(&(uParam0->f_6), &iLocal_159, &Local_180, 1, 1);
	if (bParam2)
	{
		if (_does_scenario_point_exist(uParam0->f_4))
		{
			_delete_scenario_point(uParam0->f_4);
		}
	}
	else if (_does_scenario_point_exist(uParam0->f_4))
	{
		_set_scenario_point_active(uParam0->f_4, false);
	}
	Global_1392235->f_3 = 1;
	if (bParam2)
	{
		func_53(uParam0, bParam2);
		_0x4eddd9e9ca5af985(-318144249);
		set_model_as_no_longer_needed(-1947027049);
		func_54(iParam1);
	}
	if (uParam0->f_10 != 0)
	{
		_0xd2b9c78537ed5759(uParam0->f_10);
		uParam0->f_10 = 0;
	}
	if (uParam0->f_2)
	{
		unpin_interior(uParam0->f_1);
		uParam0->f_2 = 0;
	}
	iVar0 = _0x62de46f061caa468();
	if (iVar0 > 0)
	{
		_0x7d4e70a67a651c71(iVar0);
	}
	if (_0x91a5f9cbebb9d936(uParam0->f_114))
	{
		remove_scenario_blocking_area(uParam0->f_114, false);
	}
	func_8(uParam0->f_115);
}

void func_8(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_9(vector3 vParam0, int iParam3)
{
	iVar0 = func_55();
	if (func_56(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_57(vParam0, iParam3);
}

int func_10()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_12(int iParam0)
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

int func_13(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_58(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_10())
	{
		return -1;
	}
	iVar0 = func_11(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_59(iVar1, 0);
	func_60(iVar1, 0);
	func_61(iVar1, 0);
	func_62(iVar1, 0);
	func_63(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_64(iVar1, iParam4);
	}
	return iVar1;
}

bool func_14(var uParam0, var uParam1)
{
	if (_0x9e4ef615e307fbbe())
	{
		func_2(uParam0, uParam1->f_2);
		return false;
	}
	return true;
}

bool func_15(var uParam0)
{
	if (&Global_1879534)
	{
		return false;
	}
	if (func_1() != -1)
	{
		return true;
	}
	if (get_distance_between_coords(Global_36, uParam0->f_4, true) > 250f)
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(1922488592) >= 1)
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(-1200580531) >= 1)
	{
		return true;
	}
	return false;
}

void func_16(var uParam0, var uParam1)
{
	if (func_47(uParam0->f_6, 0) && _0xf256a75210c5c0eb(uParam0->f_112, Global_36))
	{
		if (func_18(1))
		{
			func_65(&uLocal_219);
		}
		else if (func_66(&uLocal_219) && func_67(&uLocal_219) > 10f)
		{
			set_ped_reset_flag(uParam0->f_6, 116, true);
		}
	}
	if (iLocal_14 >= 1 && iLocal_144 < 4)
	{
		if (_0xf256a75210c5c0eb(uParam0->f_112, Global_36))
		{
			set_ped_reset_flag(Global_35, 328, true);
		}
		if (func_47(uParam0->f_6, 0))
		{
			set_ped_reset_flag(uParam0->f_6, 49, true);
		}
		func_68(uParam0, uParam1);
		func_69(uParam0, uParam1);
		if (iLocal_14 >= 2)
		{
			if (does_entity_exist(uParam0->f_6))
			{
				if ((((is_ped_dead_or_dying(uParam0->f_6, true) || func_70(uParam0->f_6, Global_35)) || _is_ped_lassoed(uParam0->f_6)) || func_71(player_id(), 0, 0, 1)) || _0x331550b212014b92(uParam0->f_6, Global_35))
				{
					func_31(4);
				}
				if ((uParam1->f_2 == 105 && iLocal_144 == 3) && iLocal_147 != 9)
				{
					if (func_72(Global_35, 1225.51f, -1294.05f, 75.91f, 0) < 2f || func_72(Global_35, 1231.15f, -1299.86f, 75.9f, 0) < 2f)
					{
						func_73(uParam0);
						func_74(&(uParam0->f_6), 1, 0, 1);
						func_31(5);
					}
				}
			}
		}
	}
	switch (iLocal_144)
	{
		case 0:
			if (iLocal_14 >= 1)
			{
				if (func_56(Local_136.f_2) && func_75(Local_136.f_2))
				{
					if (func_76(uParam0, uParam1))
					{
						func_65(&(uParam0->f_109));
						func_31(1);
					}
				}
			}
			break;
		case 1:
			if (iLocal_14 >= 2)
			{
				func_31(2);
			}
			else if (func_77(Local_136.f_2))
			{
				func_78(uParam0, uParam1);
			}
			break;
		case 2:
			func_79(uParam0, uParam1);
			if (iLocal_146 == 5)
			{
				func_65(&(uParam0->f_109));
				func_31(3);
			}
			break;
		case 3:
			break;
		case 4:
			if ((is_ped_dead_or_dying(uParam0->f_6, true) || !_0x9c54041bb66bcf9e(uParam0->f_6, uParam0->f_9)) || _0x0c3cb2e600c8977d(uParam0->f_6, 0))
			{
				func_73(uParam0);
				func_74(&(uParam0->f_6), 1, 0, 1);
				func_31(5);
			}
			break;
		case 5:
			if (func_47(uParam0->f_6, 0))
			{
				if (_does_scenario_point_exist(uParam0->f_9) && !_0x9c54041bb66bcf9e(uParam0->f_6, uParam0->f_9))
				{
					_delete_scenario_point(uParam0->f_9);
				}
			}
			break;
	}
}

bool func_17()
{
	if (iLocal_14 >= 3 && iLocal_14 < 5)
	{
		if (iLocal_144 >= 4)
		{
			return true;
		}
	}
	return false;
}

bool func_18(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_20(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_80(&(iParam0->f_18));
}

void func_21(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_81(uParam0);
		func_82(iParam1, uParam2);
	}
	func_83(*uParam0, 1, bParam4);
}

void func_22(var uParam0)
{
	cVar0 = func_84(*uParam0);
	StringCopy(&cVar1, "PSTR_O_", 16);
	StringConCat(&cVar1, &cVar0, 16);
	func_85(&cVar1, 7500, 0, 0, 0, 1);
	if (*uParam0 == 155)
	{
		if (!func_86(128))
		{
			func_87("PSTR_NGHT", 10000, 0, 0, 0, 1);
		}
	}
}

void func_23(int iParam0)
{
	if (iLocal_14 != iParam0)
	{
		iLocal_14 = iParam0;
	}
}

void func_24(int iParam0, var uParam1)
{
	if (_does_volume_exist(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			func_88(76, uParam1);
			break;
		case 5:
			func_88(38, uParam1);
			break;
		case 3:
			*uParam1 = _create_volume_box_with_custom_name(1230.39f, -1295.224f, 77.42734f, 0f, 0f, -44.02999f, 20.63289f, 8.455379f, 3.559948f, "Rhodes Station");
			break;
		case 4:
			func_88(5, uParam1);
			break;
		case 2:
			func_88(26, uParam1);
			break;
		case 6:
			func_88(115, uParam1);
			break;
		default:
			break;
	}
}

bool func_25(var uParam0, bool bParam1, int iParam2)
{
	if (func_89(&Global_1935630, 2097152))
	{
		return false;
	}
	if (func_71(player_id(), 0, 0, 1))
	{
		return false;
	}
	if (func_47(iParam2, 0) && _0x331550b212014b92(iParam2, Global_35))
	{
		return false;
	}
	if (iLocal_223 >= 3)
	{
		iLocal_223 = 0;
	}
	if (func_90(uParam0->f_2, iLocal_223, 1))
	{
		iLocal_223++;
	}
	else
	{
		iLocal_223 = 0;
	}
	if (bParam1)
	{
		if (iLocal_223 >= 3)
		{
			return true;
		}
	}
	else if (iLocal_223 > 0)
	{
		return true;
	}
	return false;
}

bool func_26(var uParam0, var uParam1)
{
	if (func_29() && Global_1392235->f_1 == 1)
	{
		return true;
	}
	if (func_48(Global_35, uParam1->f_112, 1, 0))
	{
		return false;
	}
	if (func_72(Global_35, uParam0->f_4, 1) < 25f)
	{
		return false;
	}
	return true;
}

void func_27(var uParam0)
{
	*uParam0 = func_91(uParam0->f_2);
	func_92(*uParam0);
	if (!func_29())
	{
		Global_1392235->f_3 = 0;
	}
	_0xed9582b3da8f02b4(1);
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -274.9763f, 805.6725f, 118.3688f;
		case 3:
			return 1233.915f, -1293.723f, 75.902f;
		case 4:
			return 2513.311f, -1304.996f, 47.954f;
		case 2:
			return -1809.173f, -352.972f, 163.661f;
		case 5:
			return -757.932f, -1265.766f, 43.041f;
		case 6:
			return -5532.741f, -2927.213f, -2.361f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_29()
{
	if (_get_number_of_references_of_script_with_name_hash(178511838) > 0)
	{
		return true;
	}
	return false;
}

void func_30(var uParam0)
{
	request_model(-1947027049, false);
	_request_scenario_type(-318144249, 15, 0, 0);
	func_93(uParam0->f_2);
}

void func_31(int iParam0)
{
	iLocal_144 = iParam0;
}

bool func_32(var uParam0)
{
	if (func_94(uParam0->f_2) && has_model_loaded(-1947027049))
	{
		return true;
	}
	return false;
}

void func_33(var uParam0, var uParam1)
{
	if (uParam0->f_2 != 105)
	{
		if (func_48(Global_35, uParam1->f_112, 1, 0) || func_49(uParam0->f_2, 0, 1))
		{
			_0x9f9a829c6751f3c7(player_id(), 31, 1);
		}
	}
}

void func_34(var uParam0, var uParam1)
{
	if (!uParam0->f_2)
	{
		if (!is_valid_interior(uParam0->f_1))
		{
			uParam0->f_1 = get_interior_at_coords_with_type(func_95(uParam1), func_96(uParam1->f_2));
		}
		else
		{
			pin_interior_in_memory(uParam0->f_1);
			uParam0->f_2 = 1;
		}
	}
}

void func_35(var uParam0, var uParam1)
{
	if (uParam0->f_2)
	{
		if (!_does_scenario_point_exist(uParam0->f_4))
		{
			uParam0->f_4 = create_scenario_point(-1969131288, func_28(uParam1->f_1), func_97(uParam1->f_1), 1f, 0, 1);
			if (func_29())
			{
				_set_scenario_point_active(uParam0->f_4, false);
			}
		}
		else
		{
			func_98(uParam0, *uParam1);
		}
	}
	else if (_does_scenario_point_exist(uParam0->f_4))
	{
		if (does_entity_exist(uParam0->f_3))
		{
			delete_object(&(uParam0->f_3));
		}
		_delete_scenario_point(uParam0->f_4);
		if (_0x91a5f9cbebb9d936(uParam0->f_114))
		{
			remove_scenario_blocking_area(uParam0->f_114, false);
		}
		func_8(uParam0->f_115);
	}
}

bool func_36(var uParam0)
{
	if (!_does_scenario_point_exist(uParam0->f_4))
	{
		return false;
	}
	if (!bLocal_222)
	{
		if (_0x9c54041bb66bcf9e(Global_35, uParam0->f_4))
		{
			bLocal_222 = true;
		}
	}
	else if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	else if (!_0x9c54041bb66bcf9e(Global_35, uParam0->f_4))
	{
		bLocal_222 = false;
	}
	return false;
}

void func_37(var uParam0)
{
	switch (*uParam0)
	{
		case 11:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOSHUA_BROWN"));
			break;
		case 12:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LINDSEY_WOFFORD"));
			break;
		case 13:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MARK_JOHNSON"));
			break;
		case 153:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BART_CAVANAUGH"));
			break;
		case 14:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ELLIE_SWAN"));
			break;
		case 154:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CAMILLE_MILLEMONT"));
			break;
		case 15:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ROBBIE_LAIDLAW"));
			break;
		case 16:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANTONY_FOREMAN"));
			break;
		case 17:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_OTIS_SKINNER"));
			break;
		case 18:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ELIAS_GREEN"));
			break;
		case 155:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_HERMAN_ZIZENDORF"));
			break;
		case 19:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOAQUIN_ARROYO"));
			break;
		case 20:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ESTABAN_CORTEZ"));
			break;
	}
}

void func_38(var uParam0)
{
	switch (*uParam0)
	{
		case 11:
		case 153:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_VERNON_FARLEY"));
			break;
		case 12:
		case 16:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BENJAMIN_LAMBERT"));
			break;
		case 14:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CURTIS_MALLOY"));
			break;
		case 13:
		case 15:
		case 154:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_HARMON_THOMAS"));
			break;
		case 17:
		case 18:
		case 155:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_OSWALD_DUNBAR"));
			break;
		case 19:
		case 20:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_SHERIFF_FREEMAN"));
			break;
	}
}

bool func_39()
{
	if ((((((((((func_99(-1442477431, 0, 0) > 0 || func_99(-120239629, 0, 0) > 0) || func_99(-1129500286, 0, 0) > 0) || func_99(-1490222567, 0, 0) > 0) || func_99(1117744418, 0, 0) > 0) || func_99(1900975545, 0, 0) > 0) || func_99(-233617698, 0, 0) > 0) || func_99(1515293085, 0, 0) > 0) || func_99(1129206837, 0, 0) > 0) || func_99(-2012586584, 0, 0) > 0) || func_99(-77412868, 0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_100((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_101((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_100((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_101((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_102(iParam0);
}

void func_41(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar10 = func_103(iParam0, 0);
	iVar11 = iVar10;
	iVar12 = iVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = get_hash_key("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {(*Global_1347702)[iParam0]->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_104(iParam0);
	_uilog_add_entry_hash(iVar13, func_105(iParam0), (*Global_1347702)[iParam0]->f_24, iVar12, get_hash_key(&cVar0), (*Global_1347702)[iParam0]->f_37);
	_uilog_set_entry_icon_texture(iVar13, func_105(iParam0), iVar11, get_hash_key("toast_log_blips"));
	if (!is_string_null_or_empty(sVar8) && !is_string_null_or_empty(sVar9))
	{
		_uilog_set_entry_brief_texture(iVar13, func_105(iParam0), get_hash_key(sVar8), get_hash_key(sVar9));
	}
	if (_uilog_is_entry_registered(iVar13, func_105(iParam0)))
	{
		func_106(iParam0, 4);
	}
}

void func_42(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			StringCopy(&cVar0, "DUL", 8);
			break;
		case 13:
			StringCopy(&cVar0, "RCH", 8);
			break;
		case 12:
			StringCopy(&cVar0, "ECF", 8);
			break;
		case 14:
			StringCopy(&cVar0, "WIL", 8);
			break;
		case 15:
			StringCopy(&cVar0, "SHE", 8);
			break;
		case 16:
			StringCopy(&cVar0, "NBS", 8);
			break;
		case 17:
			StringCopy(&cVar0, "SKN", 8);
			break;
		case 18:
			StringCopy(&cVar0, "RDE", 8);
			break;
		case 19:
			StringCopy(&cVar0, "BDS", 8);
			break;
		case 20:
			StringCopy(&cVar0, "BDM", 8);
			break;
	}
	if (!is_string_null_or_empty(&cVar0))
	{
		StringCopy(&cVar1, "PSTR_O_", 16);
		StringConCat(&cVar1, &cVar0, 16);
		cVar3 = func_107(0, &cVar1, 0, 0, -1, -1);
		func_108(iParam0, &cVar1, cVar3, -1082130432);
	}
}

void func_43(var uParam0)
{
	switch (*uParam0)
	{
		case 17:
		case 18:
			func_109(0, 3, 0, 0, 1);
			break;
	}
}

void func_44(int iParam0)
{
	func_110();
	if (!func_111(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0];
}

void func_45(int iParam0)
{
	func_112((*Global_1347702)[iParam0]->f_15, 0);
}

void func_46(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_113(&Global_0, 8);
	}
	if (!func_114() || func_1() != -1)
	{
		return;
	}
	func_113(&Global_0, 1);
}

bool func_47(int iParam0, int iParam1)
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
	if (func_115(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_115(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_115(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_115(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_115(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_115(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_115(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_115(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_48(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_49(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	if (bParam2)
	{
		fVar0 = 4f;
	}
	switch (iParam0)
	{
		case 76:
			if (func_72(Global_35, -275.43f, 802.52f, 118.41f, 0) < (1f + fVar0) || func_72(Global_35, -276.39f, 812.02f, 118.42f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 78:
			if (func_72(Global_35, 2911.362f, 1310.298f, 43.94069f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 26:
			if (!bParam1 && func_72(Global_35, -1806.44f, -350.96f, 163.65f, 0) < (1f + fVar0))
			{
				return true;
			}
			if (func_72(Global_35, -1812.81f, -345.61f, 163.66f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 105:
			if (func_72(Global_35, 1359.11f, -1305.88f, 76.77f, 0) < (1f + fVar0) || func_72(Global_35, 1358.8f, -1298.06f, 76.78f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 5:
			if ((((((func_72(Global_35, 2511.1f, -1311.37f, 47.95f, 0) < (1.5f + fVar0) || func_72(Global_35, 2507.45f, -1317.49f, 47.62f, 0) < (1.5f + fVar0)) || func_72(Global_35, 2496.77f, -1317.49f, 47.81f, 0) < (1.5f + fVar0)) || func_72(Global_35, 2493.1f, -1311.09f, 47.94f, 0) < (1.5f + fVar0)) || func_72(Global_35, 2493.22f, -1306.48f, 47.95f, 0) < (1.5f + fVar0)) || func_72(Global_35, 2511.18f, -1306.25f, 47.95f, 0) < (1.5f + fVar0)) || func_72(Global_35, 2516.28f, -1308.78f, 47.96f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
		case 38:
			if (func_72(Global_35, -756.9f, -1269.2f, 43.03f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			else if (func_72(Global_35, -769.19f, -1269.29f, 42.98f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 115:
			if (!bParam1 && func_72(Global_35, -5527.72f, -2930.482f, -2.2717f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_50(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_51(int iParam0)
{
	iLocal_145 = iParam0;
}

void func_52(int iParam0)
{
	iLocal_146 = iParam0;
}

void func_53(var uParam0, bool bParam1)
{
	if (does_entity_exist(uParam0->f_6))
	{
		func_73(uParam0);
		func_74(&(uParam0->f_6), 1, 0, 1);
	}
	if (bParam1 && _does_scenario_point_exist(uParam0->f_9))
	{
		_delete_scenario_point(uParam0->f_9);
	}
	if (does_entity_exist(uParam0->f_7))
	{
		set_object_as_no_longer_needed(&(uParam0->f_7));
	}
	if (does_entity_exist(uParam0->f_8))
	{
		set_object_as_no_longer_needed(&(uParam0->f_8));
	}
}

void func_54(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			sVar0 = "BHPVAAU";
			break;
		case 5:
			sVar0 = "BHPNBAU";
			break;
		case 105:
			sVar0 = "BHPROAU";
			break;
		case 38:
			sVar0 = "BHPBWAU";
			break;
		case 26:
			sVar0 = "BHPSTAU";
			break;
		case 115:
			sVar0 = "BHPTWAU";
			break;
	}
	if (!is_string_null_or_empty(sVar0))
	{
		_text_database_delete(sVar0);
	}
}

int func_55()
{
	return Global_1894899->f_2;
}

bool func_56(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_57(vector3 vParam0, bool bParam3)
{
	iVar0 = func_116(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1888801)[iVar4]->f_3))
			{
				if (_0xf256a75210c5c0eb((*Global_1888801)[iVar4]->f_3, vParam0))
				{
					switch ((*Global_1888801)[iVar4]->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

bool func_58(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_59(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_117(iParam0);
	}
	else
	{
		func_118(iParam0, iParam1);
	}
	func_119();
}

void func_60(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_61(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_62(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_63(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_64(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

void func_65(var uParam0)
{
	func_120(uParam0, 0f);
}

bool func_66(var uParam0)
{
	return func_121(*uParam0, 1);
}

float func_67(var uParam0)
{
	if (!func_66(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_122(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_123() - uParam0->f_1);
}

void func_68(var uParam0, var uParam1)
{
	if (bLocal_215)
	{
		if (func_124(uParam1))
		{
			set_ped_can_play_gesture_anims(uParam0->f_6, 0, 1);
		}
		if (func_18(1))
		{
			func_65(&uLocal_216);
		}
		if (func_67(&uLocal_216) > 3f)
		{
			if (is_ped_active_in_scenario(uParam0->f_6, 0) && _0x916b8e075abc8b4e(uParam0->f_6, 1))
			{
				if (!_0x2dc0e8dcbd3546e9(uParam0->f_6))
				{
					_0x541e5b41dca45828(uParam0->f_6, 1, 0);
				}
			}
			task_clear_look_at(uParam0->f_6);
			bLocal_215 = false;
		}
		else if (is_ped_active_in_scenario(uParam0->f_6, 0))
		{
			if (!_0x2dc0e8dcbd3546e9(uParam0->f_6))
			{
				if (!_0x916b8e075abc8b4e(uParam0->f_6, 1))
				{
					_0xe7fa07624574b79a(uParam0->f_6, Global_35, 1, 1, -1f, 1, 0, 0, 0);
				}
			}
		}
	}
}

void func_69(var uParam0, var uParam1)
{
	iVar0 = iLocal_147;
	iVar1 = -1;
	if ((iLocal_147 > 0 && iLocal_147 < 6) && iLocal_146 >= 2)
	{
		func_125(Local_180[0], 0, 0);
		func_125(Local_180[1], 0, 0);
		iLocal_147 = 6;
	}
	if (func_48(Global_35, uParam0->f_112, 1, 0))
	{
		func_65(&uLocal_153);
	}
	if (iLocal_147 >= 8)
	{
		func_126(uParam0, uParam1);
	}
	func_127(uParam0, uParam1);
	switch (iLocal_147)
	{
		case 0:
			if (func_47(uParam0->f_6, 0))
			{
				if (Local_136.f_2 == 105)
				{
					iLocal_147 = 6;
				}
				else if (!bLocal_15)
				{
					func_128(Local_180[0], "INTERACT_GREET", " ", -163964935, 0, 0, 0, 1, 0);
					func_128(Local_180[1], "INTERACT_INSULT", " ", 648122183, 0, 0, 0, 1, 0);
					func_125(Local_180[0], 0, 0);
					func_125(Local_180[1], 0, 0);
					iLocal_147 = 1;
				}
				else if (iLocal_145 >= 3)
				{
					func_128(Local_180[0], "INTERACT_QUESTION", " ", -163964935, 0, 0, 0, 1, 0);
					func_128(Local_180[1], "INTERACT_INSULT", " ", 648122183, 0, 0, 0, 1, 0);
					func_125(Local_180[0], 1, 0);
					func_125(Local_180[1], 0, 0);
					func_20(&iLocal_159, 0);
					iLocal_147 = 4;
				}
			}
			break;
		case 1:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432);
			if (iLocal_145 >= 3)
			{
				func_125(Local_180[0], 1, 0);
				func_125(Local_180[1], 1, 0);
				func_20(&iLocal_159, 0);
				func_65(&uLocal_150);
				iLocal_147 = 2;
			}
			break;
		case 2:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432);
			if (iVar1 != -1)
			{
				func_130(uParam0, uParam1, iVar1);
				iLocal_147 = 6;
			}
			else if (func_67(&uLocal_150) > 20f || (func_67(&uLocal_150) > 10f && !func_48(Global_35, uParam0->f_112, 1, 0)))
			{
				func_125(Local_180[0], 0, 0);
				func_125(Local_180[1], 0, 0);
				func_20(&iLocal_159, 0);
				func_65(&uLocal_150);
				iLocal_147 = 3;
			}
			break;
		case 3:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432);
			if (func_67(&uLocal_150) > 10f)
			{
				func_128(Local_180[0], "INTERACT_QUESTION", " ", -163964935, 0, 0, 0, 1, 0);
				func_125(Local_180[0], 1, 0);
				func_125(Local_180[1], 0, 0);
				func_20(&iLocal_159, 0);
				iLocal_147 = 4;
			}
			break;
		case 4:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432);
			if (iVar1 != -1)
			{
				func_131(uParam0, uParam1);
				iLocal_147 = 5;
			}
			break;
		case 5:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432);
			if (!func_18(1))
			{
				func_132(uParam0, uParam1);
				func_133();
				iLocal_147 = 6;
			}
			break;
		case 6:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432);
			if (iLocal_146 == 4)
			{
				func_128(Local_180[0], "INTERACT_QUESTION", " ", -163964935, 0, 0, 0, 1, 0);
				func_128(Local_180[1], "INTERACT_INSULT", " ", 648122183, 0, 0, 0, 1, 0);
				func_125(Local_180[0], 0, 0);
				func_125(Local_180[1], 0, 0);
				func_20(&iLocal_159, 0);
				iLocal_147 = 7;
			}
			break;
		case 7:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432);
			if (iLocal_146 == 5)
			{
				func_125(Local_180[0], 1, 0);
				func_20(&iLocal_159, 0);
				iLocal_147 = 8;
			}
			break;
		case 8:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 2, uParam0->f_112, 2, -1082130432);
			if (iVar1 == 0)
			{
				func_134(uParam0, uParam1);
				iLocal_149++;
				func_133();
				func_125(Local_180[0], 0, 0);
				func_125(Local_180[1], 0, 0);
				func_20(&iLocal_159, 0);
				iLocal_147 = 9;
			}
			break;
		case 9:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432);
			if (!func_18(1))
			{
				if (iLocal_149 > func_135(*uParam1, iLocal_148))
				{
					iLocal_148++;
					iLocal_149 = 1;
					func_125(Local_180[0], 1, 0);
					func_20(&iLocal_159, 0);
					if (iLocal_148 > 2)
					{
						func_65(&uLocal_150);
						iLocal_147 = 10;
					}
					else
					{
						iLocal_147 = 8;
					}
				}
				else
				{
					func_134(uParam0, uParam1);
					iLocal_149++;
				}
			}
			break;
		case 10:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 2, uParam0->f_112, 2, -1082130432);
			if (iVar1 == 0)
			{
				func_81(&(uParam0->f_6));
				func_136(uParam0, uParam1);
				iLocal_147 = 11;
			}
			else if (func_67(&uLocal_150) > 60f)
			{
				func_125(Local_180[0], 0, 0);
				func_125(Local_180[1], 0, 0);
				func_20(&iLocal_159, 0);
				func_80(&uLocal_150);
				iLocal_147 = 12;
			}
			break;
		case 11:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 2, uParam0->f_112, 2, -1082130432);
			if (!func_18(1))
			{
				if (*uParam1 != 11)
				{
					func_133();
					func_137(uParam0, uParam1);
				}
				func_81(&(uParam0->f_6));
				iLocal_147 = 12;
			}
			break;
		case 12:
			break;
	}
	if (iVar0 != iLocal_147)
	{
	}
}

bool func_70(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_71(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_138(bParam1, bParam2, bParam3);
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

float func_72(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_73(var uParam0)
{
	func_20(&iLocal_159, 0);
	func_21(&(uParam0->f_6), &iLocal_159, &Local_180, 1, 1);
	if (func_47(uParam0->f_6, 0))
	{
		task_clear_look_at(uParam0->f_6);
		if (func_18(1))
		{
			func_19(1, 0, 0);
		}
		iVar0 = func_139(uParam0->f_6, 0);
		if (iVar0 != -1 && func_140(iVar0, 0))
		{
			func_141(iVar0, 0, 0, 0, 0);
		}
	}
}

void func_74(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_75(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return func_142(iParam0, 8);
}

bool func_76(var uParam0, var uParam1)
{
	if (_does_scenario_point_exist(uParam0->f_9) || uParam1->f_2 == 105)
	{
		return true;
	}
	if (func_143(uParam0))
	{
		if (func_144(uParam0, uParam1))
		{
			if (!_does_scenario_point_exist(uParam0->f_9))
			{
				_set_entity_coords_and_heading(uParam0->f_7, func_95(uParam1), func_145(uParam1), true, false, true);
				if (*uParam1 == 12)
				{
					uParam0->f_9 = create_scenario_point(1041923169, 2510.472f, -1308.54f, 47.954f, 275.9725f, 0, 0, 1);
				}
				else if (func_146(uParam1))
				{
					uParam0->f_9 = create_scenario_point_attached_to_entity(uParam0->f_7, -318144249, 0.0086562f, 0.0409636f, 0.5f, 179.9999f, 0, 0, 1);
				}
				else
				{
					uParam0->f_9 = create_scenario_point(-318144249, func_147(), func_148(), 0, 0, 0);
				}
				_0xe69fda40aac3efc0(uParam0->f_9, 0);
				_0xa7479fb665361edb(uParam0->f_9, 0);
				if (func_124(uParam1))
				{
					if (!does_entity_exist(uParam0->f_8))
					{
						if (uParam1->f_2 == 115)
						{
							uParam0->f_8 = create_object(-1947027049, -5530.3f, -2930.37f, -1.575f, true, true, false, false, true);
							set_entity_heading(uParam0->f_8, -59.08f);
						}
						else if (uParam1->f_2 == 76)
						{
							uParam0->f_8 = create_object(-1947027049, -276.93f, 804.75f, 119.18f, true, true, false, false, true);
							set_entity_heading(uParam0->f_8, -55f);
						}
					}
				}
				return true;
			}
		}
	}
	return false;
}

bool func_77(int iParam0)
{
	if (iParam0 == 105)
	{
		return false;
	}
	return true;
}

void func_78(var uParam0, var uParam1)
{
	func_149(uParam0, uParam1);
	vVar0 = { func_150(uParam1) };
	switch (iLocal_145)
	{
		case 0:
			if (*uParam1 == 19 && func_29())
			{
				if (func_151(uParam0, uParam1))
				{
					task_police(uParam0->f_6, true);
					task_start_scenario_at_position(uParam0->f_6, 1904532698, -5531.23f, -2930.05f, -2.36f, -30.53f, -1, true, false, 0, -1f, false);
					func_152(uParam0, uParam1);
					func_51(1);
				}
			}
			else if (func_153(*uParam1))
			{
				if (func_154(uParam1))
				{
					if (func_151(uParam0, uParam1))
					{
						if (!_0x3ab6c7b0bb0df4b1(uParam0->f_6, -1))
						{
							func_152(uParam0, uParam1);
							func_155(uParam0);
							func_51(1);
						}
					}
				}
			}
			else if (func_156(uParam0, uParam1))
			{
				if (func_151(uParam0, uParam1))
				{
					func_152(uParam0, uParam1);
					func_65(&(uParam0->f_109));
					func_51(1);
				}
			}
			break;
		case 1:
			if (func_157(uParam0, uParam1))
			{
				if (func_67(&(uParam0->f_109)) > 1f || !func_49(uParam1->f_2, 0, 0))
				{
					if (!func_158(&uVar3) && !bLocal_15)
					{
						func_159(uParam0, uParam1);
						func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
						func_65(&(uParam0->f_109));
						_0x15f4732c357b1d6d(uParam0->f_6, player_id(), 6);
						bLocal_15 = true;
						func_51(2);
					}
					else
					{
						func_51(2);
					}
				}
			}
			else
			{
				func_65(&(uParam0->f_109));
			}
			break;
		case 2:
			if (!func_18(1))
			{
				func_65(&(uParam0->f_109));
				func_51(3);
			}
			else if (!func_48(Global_35, uParam0->f_112, 1, 0) && !func_49(uParam1->f_2, 0, 0))
			{
				func_161(&vVar0, 1, 0);
				func_65(&(uParam0->f_109));
				func_51(3);
			}
			else if (get_current_scripted_conversation_line(&vVar0) >= 2)
			{
				func_162(uParam0);
			}
			break;
		case 3:
			if (func_67(&(uParam0->f_109)) > 1f)
			{
				func_162(uParam0);
				if (func_163(uParam0->f_6, -875674219))
				{
					clear_ped_tasks(uParam0->f_6, 1, 0);
				}
				func_51(4);
			}
			break;
		case 4:
			break;
	}
}

void func_79(var uParam0, var uParam1)
{
	func_149(uParam0, uParam1);
	if (iLocal_146 == 2 || iLocal_146 == 4)
	{
		if (bLocal_215 == 0)
		{
			set_ped_can_play_gesture_anims(uParam0->f_6, 0, 1);
		}
	}
	switch (iLocal_146)
	{
		case 0:
			if (func_56(uParam1->f_2) && func_75(uParam1->f_2))
			{
				if (func_151(uParam0, uParam1))
				{
					if (func_153(*uParam1) && Local_136.f_2 != 105)
					{
						func_65(&(uParam0->f_109));
						func_52(1);
					}
					else if (!func_164(uParam1->f_2))
					{
						if (Local_136.f_2 == 105)
						{
							if (func_165(uParam0, uParam1))
							{
								func_152(uParam0, uParam1);
								func_65(&(uParam0->f_109));
								func_52(1);
							}
						}
						else
						{
							func_166(uParam0, uParam1);
							func_152(uParam0, uParam1);
							func_65(&(uParam0->f_109));
							func_52(1);
						}
					}
				}
				if (iLocal_14 >= 3 && is_player_control_on(player_id()))
				{
					func_52(5);
				}
			}
			break;
		case 1:
			vVar0 = { func_167(uParam1) };
			if (func_168() || is_string_null_or_empty(&vVar0))
			{
				func_52(2);
			}
			else if (!func_18(1))
			{
				if (func_67(&(uParam0->f_109)) > 1f)
				{
					func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
					func_52(2);
				}
			}
			break;
		case 2:
			func_169(uParam0, uParam1);
			if (func_168())
			{
				if (!func_48(uParam0->f_6, uParam0->f_112, 1, 0))
				{
					func_170(uParam0, uParam1);
				}
				else if (!_0x2dc0e8dcbd3546e9(uParam0->f_6))
				{
					func_171(uParam0);
					func_65(&(uParam0->f_109));
					uParam1->f_7 = 0;
					func_52(4);
				}
				else if (!_0xf256a75210c5c0eb(uParam0->f_112, Global_36))
				{
					func_52(5);
				}
			}
			break;
		case 4:
			if (!_0xf256a75210c5c0eb(uParam0->f_112, Global_36))
			{
				if (func_18(1))
				{
					iVar6 = (uParam1->f_7 - 1);
					if (iVar6 >= 0)
					{
						vVar3 = { func_172(uParam1, iVar6) };
						if (!is_string_null_or_empty(&vVar3))
						{
							func_161(&vVar3, 1, 0);
						}
					}
					func_52(5);
				}
			}
			else if (!func_18(1))
			{
				vVar7 = { func_172(uParam1, uParam1->f_7) };
				if (!is_string_null_or_empty(&vVar7))
				{
					if (func_160(&(uParam0->f_11), vVar7, 0, -1, 0, 0))
					{
						uParam1->f_7++;
					}
				}
				else
				{
					func_52(5);
				}
			}
			break;
		case 5:
			break;
	}
}

void func_80(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_81(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_82(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_173(iParam0, uParam1, 1);
	func_174(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_83(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

char[] func_84(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			StringCopy(&cVar0, "DUL", 8);
			break;
		case 13:
			StringCopy(&cVar0, "RCH", 8);
			break;
		case 12:
			StringCopy(&cVar0, "ECF", 8);
			break;
		case 153:
			StringCopy(&cVar0, "ODS", 8);
			break;
		case 14:
			StringCopy(&cVar0, "WIL", 8);
			break;
		case 154:
			StringCopy(&cVar0, "CPR", 8);
			break;
		case 15:
			StringCopy(&cVar0, "SHE", 8);
			break;
		case 16:
			StringCopy(&cVar0, "NBS", 8);
			break;
		case 17:
			StringCopy(&cVar0, "SKN", 8);
			break;
		case 18:
			StringCopy(&cVar0, "RDE", 8);
			break;
		case 155:
			StringCopy(&cVar0, "BWH", 8);
			break;
		case 19:
			StringCopy(&cVar0, "BDS", 8);
			break;
		case 20:
			StringCopy(&cVar0, "BDM", 8);
			break;
		default:
			StringCopy(&cVar0, "BM1", 8);
			break;
	}
	return cVar0;
}

var func_85(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_86(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_176(func_175());
	if (func_177(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_177(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_177(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_177(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_177(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_177(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_177(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_177(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_177(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_177(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_177(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_177(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_177(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_177(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_177(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_177(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_177(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

var func_87(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_88(int iParam0, var uParam1)
{
	if (_does_volume_exist(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = _create_volume_box_with_custom_name(2504.735f, -1308.831f, 49.06328f, 0f, 0f, 0f, 22.43624f, 17.01578f, 3.468709f, "SD Sheriff Office");
			break;
		case 26:
			*uParam1 = _create_volume_aggregate_with_custom_name("Strawberry Sheriff Office");
			_0x39816f6f94f385ad(*uParam1, -1810.522f, -349.3201f, 163.474f, 0f, 0f, -25.06604f, 7.327408f, 6.633123f, 6.036f);
			_0x39816f6f94f385ad(*uParam1, -1813.445f, -353.8168f, 163.474f, 0f, 0f, -25.06604f, 5.841297f, 4.267593f, 6.036f);
			break;
		case 76:
			*uParam1 = _create_volume_aggregate_with_custom_name("Valentine Sheriff Office");
			_0x39816f6f94f385ad(*uParam1, -272.9176f, 809.1227f, 119.4f, 0f, 0f, -80.06616f, 6.765059f, 4.518183f, 3f);
			_0x39816f6f94f385ad(*uParam1, -277.2155f, 807.0856f, 119.8f, 0f, 0f, -79.7f, 9.130634f, 5.028743f, 2.8f);
			break;
		case 78:
			*uParam1 = _create_volume_box_with_custom_name(2906.428f, 1312.199f, 45.46901f, 0f, 0f, -21.08204f, 10.47463f, 7.642887f, 2.791512f, "Annesburg Sheriff Office");
			break;
		case 105:
			*uParam1 = _create_volume_aggregate_with_custom_name("Rhodes Sheriff Office");
			_0x39816f6f94f385ad(*uParam1, 1355.464f, -1302.104f, 77.52525f, 0f, 0f, -20.36115f, 3.923681f, 4.045318f, 2.635184f);
			_0x39816f6f94f385ad(*uParam1, 1360.674f, -1301.562f, 77.52525f, 0f, 0f, -20.30303f, 5.747039f, 8.956645f, 2.635184f);
			break;
		case 38:
			*uParam1 = _create_volume_aggregate_with_custom_name("Blackwater Sheriff Office");
			_0x39816f6f94f385ad(*uParam1, -763.0246f, -1269.283f, 43.6176f, 0f, 0f, 0f, 12.03637f, 8.528987f, 5.107259f);
			_0x39816f6f94f385ad(*uParam1, -764.7173f, -1263.493f, 43.76242f, 0f, 0f, 0f, 7.664316f, 3.774002f, 5.107259f);
			break;
		case 115:
			*uParam1 = _create_volume_box_with_custom_name(-5529.529f, -2927.852f, -1.033f, 0f, 0f, 25f, 6.7f, 6.3f, 3f, "Tumbleweed Sheriff Office");
			break;
		default:
			break;
	}
}

bool func_89(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_90(int iParam0, int iParam1, bool bParam2)
{
	bVar0 = false;
	if (iParam1 == -1)
	{
		bVar0 = true;
	}
	if (bVar0 || iParam1 == 0)
	{
		if (func_1() != -1)
		{
			return false;
		}
		if (func_178(0, 1, 1))
		{
			return false;
		}
		if (!func_179(0))
		{
			return false;
		}
		if (!func_180())
		{
			return false;
		}
		if (func_142(iParam0, 2097152))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 1)
	{
		if (iParam0 == 38)
		{
			if (!func_181())
			{
				return false;
			}
		}
		else if (iParam0 == 76)
		{
			if (func_182(14) && !func_182(17))
			{
				return false;
			}
			if (Global_1392235->f_2)
			{
				return false;
			}
		}
		else if (iParam0 == 26)
		{
			if (!func_182(11))
			{
				return false;
			}
		}
		else if (iParam0 == 105)
		{
			if (!func_182(27))
			{
				return false;
			}
			else if (func_183(31, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 5)
		{
			if (func_183(130, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 115 && bParam2)
		{
			if (!func_184())
			{
				return false;
			}
		}
		if (func_181() && !func_182(69))
		{
			return false;
		}
		if (func_71(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_142(iParam0, 33554432))
		{
			return false;
		}
		if (func_185(iParam0))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 2)
	{
		if ((((((((((((func_183(11, 0) || func_183(12, 0)) || func_183(13, 0)) || func_183(153, 0)) || func_183(14, 0)) || func_183(154, 0)) || func_183(15, 0)) || func_183(16, 0)) || func_183(17, 0)) || func_183(18, 0)) || func_183(155, 0)) || func_183(19, 0)) || func_183(20, 0))
		{
			return false;
		}
		if (func_91(iParam0) == -1)
		{
			return false;
		}
		if (!func_186(iParam0))
		{
			return false;
		}
		if (Global_1392235->f_4)
		{
			return false;
		}
	}
	return true;
}

int func_91(int iParam0)
{
	iVar1 = func_187(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = func_188(iParam0, iVar0);
		if (!func_189(iVar2))
		{
			if (func_190(iVar2))
			{
				return iVar2;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_92(int iParam0)
{
	iVar0 = func_191(iParam0);
	iVar1 = func_192(iParam0);
	func_193(iParam0);
	func_194(iVar0);
	func_195(iVar1);
}

void func_93(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			sVar0 = "BHPVAAU";
			break;
		case 5:
			sVar0 = "BHPNBAU";
			break;
		case 105:
			sVar0 = "BHPROAU";
			break;
		case 38:
			sVar0 = "BHPBWAU";
			break;
		case 26:
			sVar0 = "BHPSTAU";
			break;
		case 115:
			sVar0 = "BHPTWAU";
			break;
	}
	if (!is_string_null_or_empty(sVar0) && !_text_database_has_loaded(sVar0))
	{
		_text_database_request(sVar0);
	}
}

bool func_94(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			sVar0 = "BHPVAAU";
			break;
		case 5:
			sVar0 = "BHPNBAU";
			break;
		case 105:
			sVar0 = "BHPROAU";
			break;
		case 38:
			sVar0 = "BHPBWAU";
			break;
		case 26:
			sVar0 = "BHPSTAU";
			break;
		case 115:
			sVar0 = "BHPTWAU";
			break;
	}
	if (is_string_null_or_empty(sVar0))
	{
		return true;
	}
	else if (_text_database_has_loaded(sVar0))
	{
		return true;
	}
	return false;
}

Vector3 func_95(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 76:
			return -277.57f, 804.27f, 118.39f;
		case 26:
			return -1806.93f, -347.69f, 163.68f;
		case 5:
			return 2508.8f, -1308.84f, 47.98f;
		case 38:
			return -761.88f, -1266.28f, 43.07f;
		case 115:
			return -5531.12f, -2930.71f, -2.36f;
		case 105:
			return 1230.29f, -1298.66f, 75.9f;
		case 78:
			return 2907.484f, 1314.698f, 44.38533f;
	}
	return 0f, 0f, 0f;
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "val_jail_int";
		case 105:
			return "rho_train_int";
		case 5:
			return "new_police_int";
		case 38:
			return "bla_jail_int";
		case 26:
			return "str_jailpost_int";
		case 115:
			return "tum_jail_int";
		default:
			break;
	}
	return "";
}

float func_97(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -79.834f;
		case 3:
			return -42f;
		case 4:
			return 0f;
		case 2:
			return 154.4f;
		case 5:
			return 0f;
		case 6:
			return 115.25f;
		default:
			break;
	}
	return 0f;
}

void func_98(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_3))
	{
		iVar0 = _get_scenario_point_entity(uParam0->f_4, "PrimaryItem");
		if (does_entity_exist(iVar0) && get_entity_model(iVar0) != func_196(iParam1))
		{
			request_model(func_196(iParam1), false);
			if (has_model_loaded(func_196(iParam1)))
			{
				uParam0->f_3 = create_object(func_196(iParam1), get_entity_coords(iVar0, true, false), true, true, false, false, true);
				set_entity_rotation(uParam0->f_3, get_entity_rotation(iVar0, 2), 2, true);
				_0x6ef4e31b4d5d2da0(uParam0->f_4, "PrimaryItem");
				delete_entity(&iVar0);
				_0x8360c47380b6f351(uParam0->f_4, uParam0->f_3, "PrimaryItem", 1);
				set_model_as_no_longer_needed(func_196(iParam1));
			}
		}
	}
	else if (!decor_exist_on(uParam0->f_3, "letter_item"))
	{
		decor_set_int(uParam0->f_3, "letter_item", func_197(iParam1));
	}
}

int func_99(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_198(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_200(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_201(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_202(bParam2), iParam0, 0);
	return uVar2;
}

bool func_100(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_101(int iParam0, bool bParam1)
{
	switch (func_203(iParam0))
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

int func_102(int iParam0)
{
	if (func_189(iParam0))
	{
		return 0;
	}
	if (func_183(iParam0, 0))
	{
		func_204(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_204(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_103(int iParam0, bool bParam1)
{
	if (iParam0 == 22 || iParam0 == 23)
	{
		return 332378857;
	}
	else if (iParam0 == 26)
	{
		return -1744398657;
	}
	else if ((iParam0 == 30 || iParam0 == 33) || iParam0 == 36)
	{
		return -622951465;
	}
	else if (iParam0 == 53 || iParam0 == 55)
	{
		return 877823184;
	}
	else if (iParam0 == 58)
	{
		return -1739686743;
	}
	else if (iParam0 == 60 || iParam0 == 61)
	{
		return 2145479193;
	}
	else if ((iParam0 == 71 || iParam0 == 74) || iParam0 == 75)
	{
		return -1610853131;
	}
	else if (iParam0 == 77)
	{
		return -434412386;
	}
	else if (iParam0 == 82 || iParam0 == 83)
	{
		return -1489164512;
	}
	else if (iParam0 == 89)
	{
		return 1970061205;
	}
	else if (iParam0 == 101)
	{
		return -1259688762;
	}
	else if (iParam0 == 115)
	{
		return 1079956634;
	}
	else if ((iParam0 == 117 || iParam0 == 118) || iParam0 == 119)
	{
		return -1280269885;
	}
	else if (iParam0 == 121)
	{
		if (bParam1 || func_101((*Global_1347702)[iParam0]->f_15, 1))
		{
			return 415367144;
		}
	}
	else if (iParam0 == 127)
	{
		return -1962480616;
	}
	else if (iParam0 == 136)
	{
		return 194953189;
	}
	else if (iParam0 == 143)
	{
		return 825960713;
	}
	else if (iParam0 == 147)
	{
		if (bParam1 || func_101((*Global_1347702)[iParam0]->f_15, 1))
		{
			return 1770336866;
		}
	}
	if (iParam0 == 151)
	{
		return -1176045274;
	}
	return (*Global_1347702)[iParam0]->f_36;
}

int func_104(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_105(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_106(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

char* func_107(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, sParam1, sParam4);
		case 2:
			return _create_var_string(2, sParam1, sParam4, sParam5);
		case 3:
			return _create_var_string(10, sParam1, sParam2);
		case 4:
			return _create_var_string(42, sParam1, sParam2, sParam3);
	}
	return _create_var_string(2, func_205(sParam1));
}

void func_108(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_104(iParam0);
	if (!_uilog_is_entry_registered(iVar0, func_105(iParam0)))
	{
		return;
	}
	_uilog_add_or_update_objective(iVar0, func_105(iParam0), get_hash_key(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_206(Global_1393447, 1);
	func_207();
	func_208();
	func_209((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_210() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_211();
		if (iParam1 == -1)
		{
			if (func_177(iParam0, 1))
			{
				func_212(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_177(iParam0, 2))
			{
				func_212(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_177(iParam0, 4))
			{
				func_212(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_213(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_214(to_float(iVar0), 1, 0);
	}
	else
	{
		func_214((to_float(200) / 3f), 1, 0);
	}
}

void func_110()
{
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_215(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_111(iVar1) && Global_1347702[iVar1] == iVar0)
			{
				if (does_blip_exist((*Global_1347702)[iVar1]->f_37))
				{
					func_216(iVar1, 0);
					func_218(iVar1, func_217(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

bool func_111(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

void func_112(int iParam0, int iParam1)
{
	if (!func_219(iParam0))
	{
		return;
	}
	func_61(iParam0, iParam1);
}

void func_113(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_114()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_115(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_116(vector3 vParam0)
{
	iVar0 = func_220(vParam0, 0f, 0f, 0, 2);
	return func_220(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

int func_117(int iParam0)
{
	iVar0 = func_221(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_222(iVar0);
}

int func_118(int iParam0, int iParam1)
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
			func_223(iVar2);
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

void func_119()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_120(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_123() - fParam1);
	func_224(uParam0, 1);
	func_225(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_121(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_122(var uParam0)
{
	return func_121(*uParam0, 2);
}

float func_123()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_124(var uParam0)
{
	if (are_strings_equal(func_226(uParam0, 10), "SCRIPT_COMMON_SHERIFF_SIT_WRITING"))
	{
		return true;
	}
	return false;
}

void func_125(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_227(iParam0, 13))
	{
		func_228(iParam0, 0);
	}
	else
	{
		func_229(iParam0, 0);
	}
	if (func_230(iParam0->f_6))
	{
		if (bParam2)
		{
			func_231(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_126(var uParam0, var uParam1)
{
	if (iLocal_16 || iLocal_18)
	{
		return 1;
	}
	else if (!func_48(Global_35, uParam0->f_112, 1, 0))
	{
		if (!func_66(&uLocal_156))
		{
			func_232(&uLocal_156, 0);
		}
		else if (func_67(&uLocal_156) > 10f)
		{
			iLocal_18 = 1;
		}
	}
	if (func_67(&uLocal_153) < 5f)
	{
		if (!func_18(1))
		{
			if (func_49(uParam1->f_2, 0, 0))
			{
				if (!is_ped_heading_towards_position(Global_35, _0xf70f00013a62f866(uParam0->f_112), 135f) && !is_ped_still(Global_35))
				{
					vVar0 = { func_233(uParam1) };
					if (is_string_null_or_empty(&vVar0))
					{
						iLocal_16 = 1;
					}
					else if (func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0))
					{
						iLocal_16 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_127(var uParam0, var uParam1)
{
	if ((uParam1->f_2 == 115 && iLocal_17 == 0) && !func_39())
	{
		if (iLocal_145 >= 2 && !func_18(1))
		{
			if (!func_48(Global_35, uParam0->f_112, 1, 0))
			{
				if (!func_49(uParam1->f_2, 0, 0) || !is_ped_heading_towards_position(Global_35, _0xf70f00013a62f866(uParam0->f_112), 135f))
				{
					StringCopy(&cVar0, "TWD_LVE_ERLY", 24);
					if (func_160(&(uParam0->f_11), cVar0, 0, -1, 0, 0))
					{
						iLocal_17 = 1;
					}
				}
			}
		}
	}
}

void func_128(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_230(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_234(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_235(iParam0->f_6, iParam0->f_5, 0);
			}
			func_236(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_237(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

int func_129(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	return func_239(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, func_238(iParam8, 0, 0), iParam9, 0, iParam10, fParam11);
}

void func_130(var uParam0, var uParam1, int iParam2)
{
	vVar0 = { func_240(uParam1->f_2) };
	if (iParam2 == 0)
	{
		StringConCat(&vVar0, "GREETPOS_", 24);
	}
	else
	{
		StringConCat(&vVar0, "GREETNEG_", 24);
	}
	vVar0 = { func_241(vVar0) };
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_131(var uParam0, var uParam1)
{
	vVar0 = { func_240(uParam1->f_2) };
	if ((uParam1->f_2 == 38 || uParam1->f_2 == 26) || uParam1->f_2 == 115)
	{
		StringConCat(&vVar0, "ASKP_", 24);
	}
	else if (uParam1->f_2 == 5)
	{
		StringConCat(&vVar0, "ASK", 24);
	}
	else if (uParam1->f_2 == 76)
	{
		StringConCat(&vVar0, "POSTER_", 24);
	}
	if (uParam1->f_2 == 26 && func_181())
	{
		StringConCat(&vVar0, "B", 24);
	}
	else
	{
		vVar0 = { func_241(vVar0) };
	}
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_132(var uParam0, var uParam1)
{
	vVar0 = { func_240(uParam1->f_2) };
	if (((uParam1->f_2 == 38 || uParam1->f_2 == 26) || uParam1->f_2 == 5) || uParam1->f_2 == 115)
	{
		StringConCat(&vVar0, "ASK_RPL", 24);
	}
	else if (uParam1->f_2 == 76)
	{
		StringConCat(&vVar0, "POSTER_SH", 24);
	}
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_133()
{
	func_65(&uLocal_216);
	bLocal_215 = true;
}

void func_134(var uParam0, var uParam1)
{
	if (Local_136.f_2 == 105)
	{
		vVar0 = { func_242(uParam1, iLocal_148) };
	}
	else
	{
		vVar0 = { func_243(uParam1, iLocal_148, iLocal_149) };
	}
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

int func_135(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					return 2;
				case 2:
					return 2;
			}
			break;
		case 153:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 13:
		case 15:
		case 154:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					return 2;
				case 2:
					return 1;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 1:
					return 2;
				case 2:
					return 2;
			}
			break;
		case 17:
		case 18:
		case 155:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
					return 3;
				case 2:
					return 2;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					return 3;
				case 2:
					return 2;
			}
			break;
	}
	return 2;
}

void func_136(var uParam0, var uParam1)
{
	vVar0 = { func_244(uParam1) };
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_137(var uParam0, var uParam1)
{
	vVar0 = { func_245(uParam1, Global_40.f_9074.f_4 == 0) };
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

int func_138(bool bParam0, bool bParam1, bool bParam2)
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

int func_139(int iParam0, bool bParam1)
{
	return func_246(iParam0, Global_1894899->f_2, bParam1);
}

bool func_140(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_247(iParam0))
	{
		return false;
	}
	if (!func_248(iParam0) && bParam1)
	{
		return false;
	}
	return func_249(iParam0, 1);
}

void func_141(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_247(iParam0))
	{
		return;
	}
	if (!func_249(iParam0, 1))
	{
		return;
	}
	if (!func_249(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_248(iParam0)) && func_250(iParam0))
	{
		return;
	}
	func_251(iParam0, 1);
	func_252(iParam0);
	if (func_254(func_253(iParam0)))
	{
		iVar0 = func_255(iParam0);
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
		func_251(iParam0, 16);
	}
	if (func_249(iParam0, 128) && !bParam3)
	{
		func_256(iParam0, 0);
	}
}

bool func_142(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_143(var uParam0)
{
	if (uParam0->f_2)
	{
		if (is_valid_interior(uParam0->f_1) && is_interior_ready(uParam0->f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_144(var uParam0, var uParam1)
{
	if (does_entity_exist(uParam0->f_7))
	{
		return true;
	}
	if (uParam0->f_10 == 0)
	{
		uParam0->f_10 = _0x6f3068258a499e52(func_257(uParam1->f_2), func_95(uParam1), 7);
	}
	else if (_0x1ff441d7954f8709(uParam0->f_10))
	{
		uParam0->f_7 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_10));
	}
	return false;
}

float func_145(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 76:
			return 125f;
		case 26:
			return -28f;
		case 5:
			return -65f;
		case 38:
			return -10.33f;
		case 115:
			return 115.51f;
	}
	return 0f;
}

bool func_146(var uParam0)
{
	return true;
}

Vector3 func_147()
{
	return -277.96f, 804.6f, 118.38f;
}

float func_148()
{
	return -30f;
}

void func_149(var uParam0, var uParam1)
{
	if (func_29())
	{
		if (_does_scenario_point_exist(uParam0->f_9) && func_47(uParam0->f_6, 0))
		{
			if (!_0x9c54041bb66bcf9e(uParam0->f_6, uParam0->f_9))
			{
				if (!func_48(Global_35, uParam0->f_112, 1, 0) && !func_49(uParam1->f_2, 0, 0))
				{
					func_155(uParam0);
				}
				else if (func_258() && !is_entity_on_screen(uParam0->f_6))
				{
					func_155(uParam0);
				}
			}
		}
	}
}

Vector3 func_150(var uParam0)
{
	StringCopy(&cVar0, "", 24);
	bVar3 = func_259(uParam0);
	switch (*uParam0)
	{
		case 14:
			if (func_181())
			{
				StringCopy(&cVar0, "VAL_INTR_A", 24);
			}
			else
			{
				StringCopy(&cVar0, "VAL_INTR_B", 24);
			}
			break;
		case 12:
		case 16:
			if (!func_181() && func_189(130))
			{
				if (func_189(133))
				{
					StringCopy(&cVar0, "NBX_RTL_DONE7", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_RTL_DONE4", 24);
				}
			}
			else if (bVar3)
			{
				StringCopy(&cVar0, "STD_INTR_B", 24);
			}
			else
			{
				StringCopy(&cVar0, "STD_INTR_A", 24);
			}
			break;
		case 18:
			StringCopy(&cVar0, "BLW_RB20_IG2_P1", 24);
			break;
		case 155:
			if (!bVar3)
			{
				StringCopy(&cVar0, "BLW_RB21_IG3_P", 24);
			}
			else
			{
				StringCopy(&cVar0, "BLW_INTR_B", 24);
			}
			break;
		case 17:
			if (!bVar3)
			{
				StringCopy(&cVar0, "BLW_RB18_IG1_P", 24);
			}
			else
			{
				StringCopy(&cVar0, "BLW_INTR_B", 24);
			}
			break;
		case 11:
		case 153:
			if (!bVar3)
			{
				StringCopy(&cVar0, "STR_INTR_A", 24);
			}
			else
			{
				StringCopy(&cVar0, "STR_INTR_B", 24);
			}
			break;
		case 13:
		case 15:
		case 154:
			break;
		case 19:
			if (func_29())
			{
				StringCopy(&cVar0, "TWD_TG22_G_BEX", 24);
			}
			else
			{
				StringCopy(&cVar0, "TWD_TG22_G_LTR", 24);
			}
			break;
		case 20:
			StringCopy(&cVar0, "TWD_POST_LOC", 24);
			break;
	}
	return cVar0;
}

bool func_151(var uParam0, var uParam1)
{
	if (uParam1->f_2 == 105 && func_183(87, 1))
	{
		return false;
	}
	iVar0 = func_260(uParam1->f_2);
	if (!does_entity_exist(uParam0->f_6) || !func_140(iVar0, 1))
	{
		uParam0->f_6 = func_261(iVar0, 1, 0, 1, 1, 1);
		if (func_47(uParam0->f_6, 0))
		{
			_0xbd75500141e4725c(uParam0->f_6, 1226687097);
		}
	}
	else if (uParam1->f_1 == 3)
	{
		return true;
	}
	else if (func_76(uParam0, uParam1))
	{
		set_entity_visible(uParam0->f_6, true);
		set_ped_config_flag(uParam0->f_6, 168, true);
		set_current_ped_weapon(uParam0->f_6, -1569615261, true, 0, false, false);
		return true;
	}
	return false;
}

void func_152(var uParam0, var uParam1)
{
	if (!func_181())
	{
		func_262(&(uParam0->f_11), Global_35, "ARTHUR", 1);
	}
	else
	{
		func_262(&(uParam0->f_11), Global_35, "JOHN", 1);
	}
	func_262(&(uParam0->f_11), uParam0->f_6, func_263(uParam1->f_1), 1);
}

bool func_153(int iParam0)
{
	if (iParam0 == 20)
	{
		return false;
	}
	return true;
}

bool func_154(var uParam0)
{
	if (func_29() && Global_1392235->f_1 == 1)
	{
		return true;
	}
	iVar1 = func_260(uParam0->f_2);
	iVar0 = func_264(iVar1);
	if (func_47(iVar0, 0))
	{
		if (func_50(Global_35, iVar0, 1, 1) > 20f)
		{
			if (func_265(get_entity_coords(iVar0, true, false)) && !func_265(Global_36))
			{
				return true;
			}
		}
		if (func_50(Global_35, iVar0, 1, 1) < 80f)
		{
			if (is_sphere_visible(get_entity_coords(iVar0, true, false), 3f) && !is_entity_occluded(iVar0))
			{
				return false;
			}
		}
	}
	return true;
}

void func_155(var uParam0)
{
	if (!_0x9c54041bb66bcf9e(uParam0->f_6, uParam0->f_9))
	{
		clear_ped_tasks_immediately(uParam0->f_6, false, true);
		task_police(uParam0->f_6, true);
		_task_use_scenario_point(uParam0->f_6, uParam0->f_9, func_226(&Local_136, 10), -1, false, true, 0, false, -1f, false);
		_0x2208438012482a1a(uParam0->f_6, false, false);
	}
}

bool func_156(var uParam0, var uParam1)
{
	if (!func_48(Global_35, uParam0->f_112, 1, 0))
	{
		return false;
	}
	iVar0 = func_260(uParam1->f_2);
	vVar1 = { func_266(iVar0) };
	if (func_267(uParam0->f_112, vVar1) && func_72(Global_35, vVar1, 1) < 12f)
	{
		return true;
	}
	return false;
}

bool func_157(var uParam0, var uParam1)
{
	if (func_48(Global_35, uParam0->f_112, 1, 0))
	{
		if (uParam1->f_2 == 5)
		{
			if (func_50(Global_35, uParam0->f_6, 1, 1) < 8f)
			{
				return true;
			}
			else if (*uParam1 == 16 && func_72(Global_35, 2498.72f, -1308.83f, 47.95f, 1) < 2.5f)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_158(var uParam0)
{
	if (-1829635046 == func_268(81053684))
	{
		if (func_269(uParam0))
		{
			return true;
		}
	}
	else if (func_270(-525676072, uParam0))
	{
		if (func_269(uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_159(var uParam0, var uParam1)
{
	if (_does_scenario_point_exist(uParam0->f_9) && _0x9c54041bb66bcf9e(uParam0->f_6, uParam0->f_9))
	{
		func_271(uParam0, &iVar0, &iVar1);
		sVar2 = func_226(uParam1, iVar0);
		sVar3 = func_226(uParam1, iVar1);
		if (!is_string_null_or_empty(sVar2) && !is_string_null_or_empty(sVar3))
		{
			_0x79197f7d2bb5e73a(uParam0->f_6, uParam0->f_9, func_226(uParam1, iVar0), func_226(uParam1, iVar1), func_226(uParam1, 10), 0);
			task_look_at_entity(uParam0->f_6, Global_35, -1, 0, 51, 0);
		}
		else
		{
			func_133();
		}
	}
	else if (*uParam1 == 19 && func_29())
	{
		func_133();
	}
	else
	{
		clear_ped_tasks(uParam0->f_6, 1, 0);
		task_turn_ped_to_face_entity(uParam0->f_6, Global_35, -1, -1082130432, -1082130432, -1082130432);
		func_133();
	}
}

bool func_160(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_272(cParam1, cParam0);
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

void func_161(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

void func_162(var uParam0)
{
	if (_does_scenario_point_exist(uParam0->f_4) && !_is_scenario_point_active(uParam0->f_4))
	{
		_set_scenario_point_active(uParam0->f_4, true);
		Global_1392235->f_3 = 0;
	}
}

bool func_163(int iParam0, int iParam1)
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

bool func_164(int iParam0)
{
	vVar0 = { func_273(iParam0) };
	if (is_sphere_visible(vVar0 + Vector(1f, 0f, 0f), 1f))
	{
		return true;
	}
	return false;
}

bool func_165(var uParam0, var uParam1)
{
	if (!_does_scenario_point_exist(uParam0->f_9))
	{
		iVar0 = _find_closest_active_scenario_point_of_type(func_95(uParam1), 1041923169, 1f, 0, true);
		uParam0->f_9 = create_scenario_point(1041923169, _get_scenario_point_coords(iVar0, true), _get_scenario_point_heading(iVar0, true), 0, -1f, 0);
		clear_ped_tasks_immediately(uParam0->f_6, false, true);
	}
	if (_does_scenario_point_exist(uParam0->f_9))
	{
		if (!_0x9c54041bb66bcf9e(uParam0->f_6, uParam0->f_9))
		{
			_task_use_scenario_point(uParam0->f_6, uParam0->f_9, func_226(uParam1, 10), -1, false, true, 0, false, -1f, false);
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_166(var uParam0, var uParam1)
{
	Var0 = { func_273(uParam1->f_2) };
	if (!func_48(uParam0->f_6, uParam0->f_112, 1, 0))
	{
		func_274(uParam0->f_6, Var0, 2, 1073741824);
	}
	clear_ped_tasks(uParam0->f_6, 1, 0);
	open_sequence_task(&iVar4);
	task_follow_nav_mesh_to_coord(0, -5531.35f, -2929.76f, -2.36f, 1f, -1, 0.25f, 0, 40000f);
	task_start_scenario_at_position(0, 1904532698, -5531.35f, -2929.76f, -2.36f, -12.96f, -1, true, false, 0, -1f, false);
	close_sequence_task(iVar4);
	task_perform_sequence(uParam0->f_6, iVar4);
	clear_sequence_task(&iVar4);
	task_look_at_entity(uParam0->f_6, Global_35, -1, 0, 51, 0);
	force_ped_motion_state(uParam0->f_6, -668482597, false, 0, false);
}

Vector3 func_167(var uParam0)
{
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_1)
	{
		case 1:
			StringCopy(&cVar0, "VAL_INSPECT_", 24);
			cVar0 = { func_241(cVar0) };
			break;
		case 4:
			break;
		case 5:
			break;
		case 2:
			StringCopy(&cVar0, "STR_INSP_", 24);
			cVar0 = { func_241(cVar0) };
			break;
		case 3:
			StringCopy(&cVar0, "RHO_ALD_INSPECT", 24);
			break;
		case 6:
			break;
	}
	return cVar0;
}

bool func_168()
{
	if (iLocal_14 == 3)
	{
		return true;
	}
	return false;
}

int func_169(var uParam0, var uParam1)
{
	if (iLocal_145 >= 2)
	{
		return 1;
	}
	if (func_48(uParam0->f_6, uParam0->f_112, 1, 0) && !func_18(1))
	{
		vVar0 = { func_275(uParam1) };
		if (!is_string_null_or_empty(&vVar0))
		{
			func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
		}
		iLocal_145 = 2;
		return 1;
	}
	return 0;
}

void func_170(var uParam0, var uParam1)
{
	clear_ped_tasks_immediately(uParam0->f_6, false, true);
	if (uParam1->f_2 == 105)
	{
		_task_use_scenario_point(uParam0->f_6, uParam0->f_9, func_226(uParam1, 10), -1, false, true, 0, false, -1f, false);
	}
	else
	{
		fVar0 = func_277(func_276(uParam1->f_2), Global_36, 1);
		task_police(uParam0->f_6, true);
		task_start_scenario_at_position(uParam0->f_6, 1904532698, func_276(uParam1->f_2), fVar0, -1, false, true, 0, -1f, false);
	}
}

void func_171(var uParam0)
{
	if (_does_scenario_point_exist(uParam0->f_9) && _0x9c54041bb66bcf9e(uParam0->f_6, uParam0->f_9))
	{
		sVar0 = func_226(&Local_136, 8);
		sVar1 = func_226(&Local_136, 9);
		if (!is_string_null_or_empty(sVar0) && !is_string_null_or_empty(sVar1))
		{
			_0x79197f7d2bb5e73a(uParam0->f_6, uParam0->f_9, sVar0, sVar1, func_226(&Local_136, 10), 0);
			task_look_at_entity(uParam0->f_6, Global_35, -1, 0, 51, 0);
		}
		else
		{
			func_133();
		}
	}
	else
	{
		task_look_at_entity(uParam0->f_6, Global_35, -1, 0, 51, 0);
		func_133();
	}
}

Vector3 func_172(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "", 24);
	switch (*uParam0)
	{
		case 14:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BHPVA_WIFE_MI", 24);
				cVar0 = { func_241(cVar0) };
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				if (func_181())
				{
					StringCopy(&cVar0, "NBX_CON_DEPTIPJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_CON_DEPTIPA", 24);
				}
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "NBX_CON_DEPWLK", 24);
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "NBX_NBS_IG2_TIP", 24);
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BLW_RB18_IG1_T", 24);
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BLW_RB20_IG2_T", 24);
			}
			break;
		case 155:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BLW_RB21_IG3_T", 24);
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "STR_BHDL_TIPK", 24);
			}
			else if (iParam1 == 1)
			{
				if (func_181())
				{
					StringCopy(&cVar0, "STR_BHDL_TIPB", 24);
				}
				else
				{
					StringCopy(&cVar0, "STR_BHDL_TIPA", 24);
				}
			}
			break;
		case 153:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "STR_BHSL_TIPJ", 24);
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RHO_RNCH", 24);
			}
			break;
		case 154:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT12_OUTRO", 24);
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BHPRO_14_IG2", 24);
			}
			break;
		case 19:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "TWD_TG22_TIP", 24);
			}
			break;
		case 20:
			if (iParam1 == 0)
			{
				if (func_182(70))
				{
					StringCopy(&cVar0, "TWD_BDM_POST_A", 24);
				}
				else
				{
					StringCopy(&cVar0, "TWD_BDM_POST_B", 24);
				}
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "TWD_TG23_TIP", 24);
			}
			else if (iParam1 == 2)
			{
				if (func_182(70))
				{
					StringCopy(&cVar0, "TWD_BDM_YSADJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "TWD_BDM_NSADJ", 24);
				}
			}
			break;
	}
	return cVar0;
}

void func_173(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_231(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_20(iParam0, 0);
		}
	}
}

void func_174(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_230((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_231(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
						(*uParam0)[iVar0]->f_5 = "";
						(*uParam0)[iVar0]->f_14 = 0;
						(*uParam0)[iVar0]->f_13 = "";
						(*uParam0)[iVar0]->f_15 = 0;
						(*uParam0)[iVar0]->f_11 = "";
						(*uParam0)[iVar0]->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

int func_175()
{
	return &Global_1899515;
}

int func_176(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_177(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_178(int iParam0, bool bParam1, bool bParam2)
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
		if (func_278())
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
		iVar0 = func_279(&(Global_1898164->f_1[0]));
		if (func_111(iVar0) && func_100((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_219(&(Global_1898164->f_1[0])))
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

bool func_179(int iParam0)
{
	if (!func_280(iParam0))
	{
		return false;
	}
	if (func_1() == 0)
	{
		return true;
	}
	return (!func_114() || is_bit_set(Global_40.f_7856, iParam0));
}

bool func_180()
{
	if (func_281(1))
	{
		return false;
	}
	return &Global_1934181;
}

bool func_181()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_182(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_101((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_183(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_184()
{
	if (func_29())
	{
		if (Global_1392235->f_1 == 1)
		{
			return true;
		}
	}
	else if (func_282(76) >= 1)
	{
		return true;
	}
	return false;
}

bool func_185(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return func_142(iParam0, 67108864);
}

bool func_186(int iParam0)
{
	iVar0 = func_5(0, iParam0, 2, 0);
	iVar2 = func_283(iVar0);
	if (iVar2 == -15)
	{
		iVar2 = func_175();
		func_284(&iVar2, 0, 10, 0, 0, 0, 0);
	}
	else
	{
		func_285(&iVar2, 0, 0, 20, 0, 0, 0, 0);
	}
	if (func_286(iParam0, &iVar1))
	{
		if (func_287(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (func_288(&iVar1))
	{
		if (func_287(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (func_289(iVar2, 1))
	{
		return true;
	}
	return false;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 1;
		case 26:
			return 2;
		case 105:
			return 3;
		case 5:
			return 2;
		case 38:
			return 3;
		case 115:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_188(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 76:
			if (iParam1 == 0)
			{
				return 14;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 11;
			}
			else if (iParam1 == 1)
			{
				return 153;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return 13;
			}
			else if (iParam1 == 1)
			{
				return 154;
			}
			else if (iParam1 == 2)
			{
				return 15;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 12;
			}
			else if (iParam1 == 1)
			{
				return 16;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return 18;
			}
			else if (iParam1 == 1)
			{
				return 155;
			}
			else if (iParam1 == 2)
			{
				return 17;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				return 19;
			}
			else if (iParam1 == 1)
			{
				return 20;
			}
			break;
	}
	return -1;
}

bool func_189(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_111(iParam0))
	{
		return false;
	}
	return func_101((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_190(int iParam0)
{
	if (func_181())
	{
		if (func_100((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			return false;
		}
	}
	else if (func_100((*Global_1347702)[iParam0]->f_12, 256))
	{
		return false;
	}
	switch (iParam0)
	{
		case 15:
			if (!func_182(20))
			{
				return false;
			}
			else if (!func_290())
			{
				return false;
			}
			break;
		case 16:
			if (func_291((*Global_1347702)[16]->f_15) == 1)
			{
				return false;
			}
			break;
		case 153:
			if (!func_292())
			{
				return false;
			}
			break;
		case 155:
			if (!func_292())
			{
				return false;
			}
			break;
		case 154:
			if (!func_292())
			{
				return false;
			}
			break;
		case -1:
			return false;
	}
	return true;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 10000;
		case 19:
			return 6000;
		case 20:
			return 6500;
		case 17:
			return 7500;
		case 18:
			return 9000;
		case 154:
			return 5500;
		case 153:
			return 6000;
		case 11:
			return 4000;
		case 13:
			return 2500;
		case 14:
			return 2500;
		case 15:
			return 3500;
		case 16:
			return 8500;
		case 155:
			return 3000;
	}
	return func_293(-1531790128, 0, -1);
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 11:
		case 13:
		case 14:
		case 15:
		case 16:
		case 19:
		case 155:
			return 0;
		case 12:
		case 17:
		case 18:
		case 20:
		case 153:
		case 154:
			return func_191(iParam0);
	}
	return 0;
}

void func_193(int iParam0)
{
	Global_40.f_9074.f_2 = iParam0;
}

void func_194(int iParam0)
{
	Global_40.f_9074.f_3 = iParam0;
}

void func_195(int iParam0)
{
	Global_40.f_9074.f_4 = iParam0;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return -142280069;
		case 12:
			return 504243158;
		case 13:
			return -2146214902;
		case 153:
			return -1103963519;
		case 14:
			return -293960214;
		case 154:
			return -286365227;
		case 15:
			return 1987867742;
		case 16:
			return 208509148;
		case 17:
			return 523224906;
		case 18:
			return 325312501;
		case 155:
			return 2031850575;
		case 19:
			return 629103948;
		case 20:
			return 1887256548;
		case 31:
			return -1543267603;
		default:
			break;
	}
	return -238490359;
	return -238490359;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return -1442477431;
		case 13:
			return -120239629;
		case 12:
			return -1129500286;
		case 14:
			return -1490222567;
		case 17:
			return 1117744418;
		case 18:
			return 1900975545;
		case 15:
			return -233617698;
		case 16:
			return 1515293085;
		case 19:
			return 1129206837;
		case 20:
			return -2012586584;
		case 155:
			return 1472661824;
		case 153:
			return -1980065901;
		case 154:
			return 1385735108;
		default:
			break;
	}
	return -77412868;
}

bool func_198(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_199(int iParam0)
{
	if (!func_198(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_200(int iParam0, int iParam1)
{
	if (!func_198(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_294(iParam0, 1399091007))
	{
		func_295(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_201(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_296(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_298(&Var0, func_297(0));
	}
	if (!func_299(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_300(iVar14);
	return uVar15;
}

int func_202(bool bParam0)
{
	if (func_1() == -1)
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

int func_203(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_301(iParam0);
}

void func_204(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_302(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_304(&iVar0, func_303(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_305(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_307(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_306()))
			{
				func_305(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_305(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

char* func_205(char* sParam0)
{
	return sParam0;
}

void func_206(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_207()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_308(iVar0, 128))
		{
			func_309(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_208()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_308(iVar0, 128) && func_308(iVar0, 1))
		{
			func_309(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_209(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

int func_210()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_211()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_310(iVar0, 16777216))
		{
			if (!func_311(iVar0))
			{
				func_312(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_212(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_313(Global_1310750[iVar0], iParam0))
		{
			if (!func_314(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_315(iVar0) < func_316(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_317(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_213(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_318(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_318(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_318(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_318(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_318(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_318(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_214(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_123();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

bool func_215(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

void func_216(int iParam0, bool bParam1)
{
	if (!func_111(iParam0))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		func_319(&((*Global_1347702)[iParam0]->f_14));
		func_320(&((*Global_1347702)[iParam0]->f_13), 16);
		func_321(iParam0);
		if ((!func_322(player_id(), 1, 0, 1) || Global_43891) || bParam1)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_40, 0);
			func_320(&((*Global_1347702)[iParam0]->f_13), 4096);
			func_323(&((*Global_1347702)[iParam0]->f_37));
		}
		else
		{
			func_324(iParam0, 16384);
			func_325(iParam0, 1, func_217(iParam0));
		}
	}
}

Vector3 func_217(int iParam0)
{
	if (!func_111(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_326(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_218(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (!func_111(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 256 != 0 && func_178(0, 0, 1))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 16 != 0)
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_36 == 0)
	{
		return;
	}
	if (func_327(32768))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		return;
	}
	(*Global_1347702)[iParam0]->f_38 = func_328(iParam0);
	if (!bParam5 && func_329(iParam0))
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_radius((*Global_1347702)[iParam0]->f_38, func_330(iParam0), (*Global_1347702)[iParam0]->f_18);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	else
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_coord((*Global_1347702)[iParam0]->f_38, vParam1);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_331(8);
	}
	else if (iParam0 == 62)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 838722941);
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCEXO");
	}
	func_332(iParam0);
	set_blip_flash_timer((*Global_1347702)[iParam0]->f_37, 64, iParam0);
	if (func_1() == -1)
	{
		func_333(iParam0);
		iVar0 = func_334(Global_40.f_4283);
		if (func_56(iVar0) && func_335((*Global_1888801)[iVar0]->f_13))
		{
			bVar1 = true;
			bVar2 = func_336(iVar0);
		}
		if (func_337(iParam0, bVar1, iVar0))
		{
			func_338((*Global_1347702)[iParam0]->f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (_0x66f35dd9d2b58579() || is_screen_faded_out())
		{
			return;
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 1 == 0)
	{
		func_305(&((*Global_1347702)[iParam0]->f_13), 1);
		if (((!func_329(iParam0) || func_100((*Global_1347702)[iParam0]->f_12, 1)) || func_100((*Global_1347702)[iParam0]->f_12, 512)) || func_339((*Global_1347702)[iParam0]->f_13, 2048))
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 580546400);
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32768 == 0)
	{
		if (((*Global_1347702)[iParam0]->f_36 == -1822497728 && (*Global_1347702)[iParam0]->f_12 & 1 == 0) && (*Global_1347702)[iParam0]->f_12 & 2 != 0)
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -211388321);
		}
		else
		{
			func_305(&((*Global_1347702)[iParam0]->f_13), 32768);
		}
	}
	if ((*Global_1347702)[iParam0]->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_340(iParam0))
		{
			if (iParam0 == 97)
			{
				func_341(185, 0);
			}
			else
			{
				func_341(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {(*Global_1347702)[iParam0]->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = (*Global_1347702)[iParam0]->f_37;
			(*Global_1347702)[iParam0]->f_40 = func_87(_create_var_string(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_106(iParam0, 2);
	}
}

bool func_219(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_220(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_221(int iParam0)
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

int func_222(int iParam0)
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

int func_223(int iParam0)
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

void func_224(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_225(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_226(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 6:
			switch (*uParam0)
			{
				case 19:
					switch (iParam1)
					{
						case 0:
							if (func_29())
							{
								return "SCRIPT_RE@BANDITO_SHACK@SHERIFF@WAS_HOPING_SHERIFF";
							}
							else
							{
								return "SCRIPT_RE@BANDITO_SHACK@SHERIFF@HERE_TO_HELP_B_SHERIFF";
							}
							break;
						case 1:
							if (func_29())
							{
								return "WAS_HOPING_SHERIFF";
							}
							else
							{
								return "HERE_TO_HELP_B_SHERIFF";
							}
							break;
						case 2:
							return "";
						case 3:
							return "";
						case 4:
							return "";
						case 5:
							return "";
						case 6:
							return "";
						case 7:
							return "";
						case 8:
							return "SCRIPT_RE@BANDITO_SHACK@SHERIFF@LOCATION_SHERIFF";
						case 9:
							return "LOCATION_SHERIFF";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_WRITING";
					}
					break;
				case 20:
					switch (iParam1)
					{
						case 0:
							return "";
						case 1:
							return "";
						case 2:
							return "";
						case 3:
							return "";
						case 4:
							return "";
						case 5:
							return "";
						case 6:
							return "";
						case 7:
							return "";
						case 8:
							return "";
						case 9:
							return "";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 4:
					return "";
				case 5:
					return "";
				case 6:
					return "";
				case 7:
					return "";
				case 8:
					return "";
				case 9:
					return "";
				case 10:
					return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
				default:
					break;
			}
			break;
		case 1:
			switch (*uParam0)
			{
				case 14:
					switch (iParam1)
					{
						case 4:
							return "";
						case 5:
							return "";
						case 6:
							return "";
						case 7:
							return "";
						case 8:
							return "SCRIPT_PROC@BOUNTY@WIFE_AND_LOVER@TIP_SHERIFF@GRAB_POSTER_sheriff";
						case 9:
							return "GRAB_POSTER_sheriff";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_WRITING";
						default:
							break;
					}
					break;
			}
			if (iParam1 == 10)
			{
				return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
			}
			break;
		case 5:
			switch (*uParam0)
			{
				case 155:
					switch (iParam1)
					{
						case 4:
							return "SCRIPT_PROC@BOUNTY@BLACKWATER_HUNT@SHERIFF_IG3_ACTION_LEFT";
						case 5:
							return "SHERIFF_IG3_ACTION_LEFT";
						case 6:
							return "SCRIPT_PROC@BOUNTY@BLACKWATER_HUNT@SHERIFF_IG3_ACTION_RIGHT";
						case 7:
							return "SHERIFF_IG3_ACTION_RIGHT";
						case 8:
							return "SCRIPT_PROC@BOUNTY@BLACKWATER_HUNT@SHERIFF_IG3_MAIN_ACTION";
						case 9:
							return "SHERIFF_IG3_MAIN_ACTION";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
						default:
							break;
					}
					break;
			}
			if (iParam1 == 10)
			{
				return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
			}
			break;
		case 3:
			switch (*uParam0)
			{
				case 15:
					switch (iParam1)
					{
						case 8:
							return "SCRIPT_PROC@BOUNTY@SHACK_ESCAPE@IG@S1_IG2@Alden_talks_to_player_alden";
						case 9:
							return "Alden_talks_to_player_alden";
						case 10:
							return "WORLD_HUMAN_SHOPKEEPER_MALE_A";
						default:
							break;
					}
					break;
			}
			if (iParam1 == 10)
			{
				return "WORLD_HUMAN_SHOPKEEPER_MALE_A";
			}
			break;
		case 4:
			if (*uParam0 == 12)
			{
				switch (iParam1)
				{
					case 8:
						return "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_BOUNTY@DIALOGUE_DEPUTY";
					case 9:
						return "DIALOGUE_DEPUTY";
					case 10:
						return "WORLD_HUMAN_SHOPKEEPER_MALE_A";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@JAIL@GSM0_GREET_FRONT";
					case 1:
						return "GSM0_GREET_FORWARD";
					case 2:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@JAIL@GSM0_GREET_BACK";
					case 3:
						return "GSM0_GREET_BACK";
					case 4:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@GSM0_GREET_LEFT";
					case 5:
						return "GSM0_GREET_LEFT";
					case 6:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@GSM0_GREET_RIGHT";
					case 7:
						return "GSM0_GREET_RIGHT";
					case 8:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@JAIL@GSM0_ACTION_TIP";
					case 9:
						return "GSM0_ACTION_TIP";
					case 10:
						return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
					default:
						break;
				}
			}
			break;
	}
	return "";
}

bool func_227(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_228(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_229(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_230(int iParam0)
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

void func_231(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_230(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_342(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_343(iVar0);
	*uParam0 = 0;
}

void func_232(var uParam0, bool bParam1)
{
	if (bParam1 || !func_66(uParam0))
	{
		func_65(uParam0);
	}
}

Vector3 func_233(var uParam0)
{
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_2)
	{
		case 76:
			StringCopy(&cVar0, "VAL_TAKEDOWN_SH", 24);
			break;
		case 5:
			StringCopy(&cVar0, "NBX_TAKE_LVE", 24);
			break;
		case 105:
			StringCopy(&cVar0, "", 24);
			break;
		case 38:
			StringCopy(&cVar0, "BLW_TAKE_LVE", 24);
			break;
		case 26:
			StringCopy(&cVar0, "STR_TAKE_LVE", 24);
			break;
		case 115:
			StringCopy(&cVar0, "TWD_TAKE_LVE", 24);
			break;
	}
	return cVar0;
}

void func_234(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_235(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_236(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	if (bParam1)
	{
		func_344(iParam0, 4);
		func_345(iVar0, 1);
		func_346(iVar0, 1);
	}
	else
	{
		func_347(iParam0, 4);
		func_346(iVar0, 0);
	}
}

void func_237(int* iParam0, char* sParam1)
{
	if (func_230(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_235(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_229(iParam0, 1);
}

int func_238(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_239(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_348(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_349(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_65(&(iParam1->f_13));
		}
		if (func_350(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_351(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_239(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_81(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_352(*uParam0, 1, 1);
						}
					}
					else if (func_353(iParam1, 22))
					{
						func_352(*uParam0, 0, 1);
					}
				}
				if (func_354(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_355(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_356(iParam8);
					if (func_357(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_358(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_359(iParam1, uParam3, fVar8);
					if (func_360(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_174(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_361(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_354(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_362(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_357(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_355(uParam0, func_354(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_356(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_174(uParam3, 0, 0, 1, 1);
					}
					func_363(iParam1, 1);
				}
				func_359(iParam1, uParam3, fVar8);
				if (func_361(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_82(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

Vector3 func_240(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			StringCopy(&cVar0, "STR_", 24);
			break;
		case 76:
			StringCopy(&cVar0, "VAL_", 24);
			break;
		case 105:
			StringCopy(&cVar0, "RHO_", 24);
			break;
		case 5:
			StringCopy(&cVar0, "NBX_", 24);
			break;
		case 38:
			StringCopy(&cVar0, "BLW_", 24);
			break;
		case 115:
			StringCopy(&cVar0, "TWD_", 24);
			break;
		case 78:
			StringCopy(&cVar0, "ANS_", 24);
			break;
		default:
			StringCopy(&cVar0, "STR_", 24);
			break;
	}
	return cVar0;
}

Vector3 func_241(char[12] cParam0)
{
	if (func_181())
	{
		StringConCat(&cParam0, "J", 24);
	}
	else
	{
		StringConCat(&cParam0, "A", 24);
	}
	return cParam0;
}

Vector3 func_242(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 13:
			StringCopy(&cVar0, "RHO_RNCH_ILO_", 24);
			StringIntConCat(&cVar0, iParam1, 24);
			if (func_181())
			{
				StringConCat(&cVar0, "J", 24);
			}
			else
			{
				StringConCat(&cVar0, "A", 24);
			}
			break;
		case 154:
			StringCopy(&cVar0, "RBT12_CR_ILO_", 24);
			StringIntConCat(&cVar0, iParam1, 24);
			if (func_181())
			{
				StringConCat(&cVar0, "J", 24);
			}
			else
			{
				StringConCat(&cVar0, "A", 24);
			}
			break;
		case 15:
			if (iParam1 == 1)
			{
				if (func_181())
				{
					StringCopy(&cVar0, "RHO_TG14_OUT_BJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "RHO_TG14_OUT_B", 24);
				}
			}
			else if (func_181())
			{
				StringCopy(&cVar0, "RHO_TG14_OT_B2J", 24);
			}
			else
			{
				StringCopy(&cVar0, "RHO_TG14_OT_B2A", 24);
			}
			break;
	}
	return cVar0;
}

Vector3 func_243(var uParam0, int iParam1, int iParam2)
{
	vVar0 = { func_240(uParam0->f_2) };
	cVar3.x = func_84(*uParam0);
	StringConCat(&vVar0, &cVar3, 24);
	StringConCat(&vVar0, "_Q", 24);
	StringIntConCat(&vVar0, iParam1, 24);
	if (func_364(*uParam0, iParam1, iParam2))
	{
		if (func_181())
		{
			StringConCat(&vVar0, "J", 24);
		}
		else
		{
			StringConCat(&vVar0, "A", 24);
		}
	}
	else
	{
		StringConCat(&vVar0, "S", 24);
	}
	StringIntConCat(&vVar0, iParam2, 24);
	return vVar0;
}

Vector3 func_244(var uParam0)
{
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_2)
	{
		case 76:
			StringCopy(&cVar0, "VAL_TAKEDOWN_", 24);
			break;
		case 5:
			StringCopy(&cVar0, "NBX_TAKEP_", 24);
			break;
		case 105:
			StringCopy(&cVar0, "RHO_TAKEP_", 24);
			break;
		case 38:
			StringCopy(&cVar0, "BLW_TAKEP_", 24);
			break;
		case 26:
			StringCopy(&cVar0, "STR_THANK_", 24);
			break;
		case 115:
			if (*uParam0 == 20)
			{
				if (func_181())
				{
					StringCopy(&cVar0, "TWD_BDM_Q2J2", 24);
					return cVar0;
				}
				else
				{
					StringCopy(&cVar0, "TWD_BDM_Q2A2", 24);
					return cVar0;
				}
			}
			else
			{
				StringCopy(&cVar0, "TWD_TAKEP_", 24);
			}
			break;
	}
	if (func_181())
	{
		StringConCat(&cVar0, "J", 24);
	}
	else
	{
		StringConCat(&cVar0, "A", 24);
	}
	return cVar0;
}

Vector3 func_245(var uParam0, bool bParam1)
{
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_2)
	{
		case 76:
			StringCopy(&cVar0, "VAL_EXT_", 24);
			break;
		case 5:
			StringCopy(&cVar0, "NBX_EXT_", 24);
			break;
		case 105:
			StringCopy(&cVar0, "RHO_ALD_", 24);
			break;
		case 38:
			StringCopy(&cVar0, "BLW_TAKE_", 24);
			break;
		case 26:
			StringCopy(&cVar0, "STR_TAKE_", 24);
			break;
		case 115:
			if (*uParam0 == 20)
			{
				StringCopy(&cVar0, "TWD_BDM_SGL", 24);
				return cVar0;
			}
			else
			{
				StringCopy(&cVar0, "TWD_TAKE_", 24);
			}
			break;
	}
	switch (uParam0->f_2)
	{
		case 5:
		case 76:
			if (bParam1)
			{
				StringConCat(&cVar0, "A", 24);
			}
			else
			{
				StringConCat(&cVar0, "D", 24);
			}
			break;
		case 26:
		case 38:
		case 115:
			if (bParam1)
			{
				StringConCat(&cVar0, "ALVE", 24);
			}
			else
			{
				StringConCat(&cVar0, "DORA", 24);
			}
			break;
		case 105:
			if (bParam1)
			{
				StringConCat(&cVar0, "ALIVE", 24);
			}
			else
			{
				StringConCat(&cVar0, "DORA", 24);
			}
			break;
	}
	return cVar0;
}

int func_246(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_365(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_366(iParam0, uVar0, iVar1, bParam2);
}

bool func_247(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_248(int iParam0)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_249(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_247(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_250(int iParam0)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_251(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_247(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_252(int iParam0)
{
	if (!func_247(iParam0))
	{
		return;
	}
	iVar0 = func_264(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_253(int iParam0)
{
	if (!func_247(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_254(int iParam0)
{
	return iParam0 != 0;
}

int func_255(int iParam0)
{
	if (!func_247(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_256(int iParam0, bool bParam1)
{
	if (!func_247(iParam0))
	{
		return 0;
	}
	if (!func_249(iParam0, 2))
	{
		return 0;
	}
	if (func_253(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_255(iParam0)))
	{
		return 1;
	}
	if (func_249(iParam0, 1) && !bParam1)
	{
		func_367(iParam0, 128);
		return 1;
	}
	func_251(iParam0, 129);
	func_252(iParam0);
	_0xfc77c5b44d5ff7c0(func_255(iParam0));
	func_368(iParam0, 0);
	return 1;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1576627533;
		case 105:
			return -1321878957;
		case 26:
			return -1510839859;
		case 76:
			return -93693274;
		case 38:
			return -93693274;
		case 115:
			return 325252933;
		case 78:
			return -1321878957;
	}
	return -1510839859;
}

bool func_258()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	return false;
}

int func_259(var uParam0)
{
	iVar0 = func_5(0, uParam0->f_2, 2, 0);
	if (func_181())
	{
		iVar1 = func_369(iVar0);
	}
	else
	{
		iVar1 = func_291(iVar0);
		if (uParam0->f_2 == 76)
		{
			iVar1++;
		}
	}
	if (iVar1 >= 1)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			iVar0 = 3;
			break;
		case 78:
			iVar0 = 382;
			break;
		case 105:
			iVar0 = 72;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 115:
			iVar0 = 348;
			break;
		case 5:
			iVar0 = 256;
			break;
	}
	return iVar0;
}

int func_261(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_370(iParam0, 1))
	{
		return 0;
	}
	if (func_254(func_253(iParam0)))
	{
		iVar1 = func_255(iParam0);
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
	if ((bParam4 && !func_248(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_367(iParam0, 1);
	func_371(iParam0);
	if (bParam3)
	{
		func_367(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_262(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_372(uParam0, iParam1, sParam2))
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

char* func_263(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			sVar0 = "VAL_Sheriff";
			break;
		case 3:
			sVar0 = "RHO_STATWRK";
			break;
		case 4:
			sVar0 = "SD_PoliceChief";
			break;
		case 2:
			sVar0 = "STR_Sheriff";
			break;
		case 5:
			sVar0 = "BLW_Police_Chief";
			break;
		case 6:
			sVar0 = "TWD_Sheriff";
			break;
	}
	return sVar0;
}

int func_264(int iParam0)
{
	iVar0 = func_255(iParam0);
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

bool func_265(vector3 vParam0)
{
	if (!is_collision_marked_outside(vParam0))
	{
		iVar0 = get_interior_from_collision(vParam0);
		if (is_valid_interior(iVar0))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_266(int iParam0)
{
	if (!func_247(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_0x800df3fc913355f3(func_255(iParam0)))
	{
		return 0f, 0f, 0f;
	}
	return _0x5ee6fccc9c832ca2(func_255(iParam0));
}

bool func_267(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

int func_268(int iParam0)
{
	iVar0 = func_374(func_373(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_269(var uParam0)
{
	if (func_270(81053684, uParam0))
	{
		return true;
	}
	if (func_270(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_270(int iParam0, var uParam1)
{
	iVar1 = func_374(func_373(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_375(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

void func_271(var uParam0, int iParam1, int iParam2)
{
	fVar0 = 0.7f;
	if (Local_136.f_2 == 38 || Local_136.f_2 == 76)
	{
		fVar0 = 1f;
	}
	iVar1 = func_376(uParam0->f_6, Global_35, fVar0);
	if (iVar1 == 0)
	{
		*iParam1 = 0;
		*iParam2 = 1;
	}
	else if (iVar1 == 3)
	{
		*iParam1 = 4;
		*iParam2 = 5;
	}
	else if (iVar1 == 1)
	{
		*iParam1 = 2;
		*iParam2 = 3;
	}
	else
	{
		*iParam1 = 6;
		*iParam2 = 7;
	}
}

void func_272(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

struct<4> func_273(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			Var0 = { -275.23f, 801.13f, 118.39f };
			Var0.f_3 = 22.69f;
			break;
		case 26:
			Var0 = { -1805.57f, -351.47f, 163.13f };
			Var0.f_3 = 55.93f;
			break;
		case 5:
			Var0 = { 2507.44f, -1315.83f, 47.95f };
			Var0.f_3 = -13.52f;
			break;
		case 38:
			Var0 = { -756.04f, -1269.03f, 43.03f };
			Var0.f_3 = 89.32f;
			break;
		case 115:
			Var0 = { -5527.88f, -2931.45f, -2.37f };
			Var0.f_3 = 21.53f;
			break;
	}
	return Var0;
}

void func_274(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_377(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

Vector3 func_275(var uParam0)
{
	StringCopy(&cVar0, "", 24);
	switch (*uParam0)
	{
		case 20:
			StringCopy(&cVar0, "TWD_TG23_GREET", 24);
			break;
	}
	return cVar0;
}

Vector3 func_276(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return -276.86f, 805.53f, 118.38f;
		case 26:
			return -1809.47f, -349.04f, 163.65f;
		case 5:
			return 2510.14f, -1308.79f, 47.95f;
		case 38:
			return -759.9f, -1268.74f, 43.04f;
		case 115:
			return -5531.46f, -2925.73f, -2.36f;
	}
	return 0f, 0f, 0f;
}

float func_277(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_278()
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

int func_279(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_378(func_12(iParam0));
}

bool func_280(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 54)
	{
		return false;
	}
	return true;
}

bool func_281(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return (Global_1147326->f_1 && iParam0) != 0;
}

int func_282(int iParam0)
{
	if (!func_379(iParam0))
	{
		return 0;
	}
	return &(Global_17504.f_42[iParam0]);
}

int func_283(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -15;
	}
	return func_380(iParam0);
}

void func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_381(*iParam0);
	iVar1 = func_382(*iParam0);
	iVar2 = func_383(*iParam0);
	iVar3 = func_176(*iParam0);
	iVar4 = func_384(*iParam0);
	iVar5 = func_385(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_386(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_387(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_285(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_381(*iParam0);
	iVar1 = func_382(*iParam0);
	iVar2 = func_383(*iParam0);
	iVar3 = func_176(*iParam0);
	iVar4 = func_384(*iParam0);
	iVar5 = func_385(*iParam0);
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
	iVar6 = func_386(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_386(iVar1, iVar0);
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
	func_387(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_286(int iParam0, var uParam1)
{
	iVar0 = -15;
	iVar1 = 0;
	if (iParam0 == 105)
	{
		iVar2 = func_260(iParam0);
		if (!func_388(iVar2, 0))
		{
			iVar0 = func_389(iVar2);
			if (iVar0 != -15)
			{
				func_285(&iVar0, 0, 0, 0, 7, 0, 0, 0);
				*uParam1 = iVar0;
				iVar1 = 1;
			}
		}
		else
		{
			iVar0 = func_389(iVar2);
			if (iVar0 != -15)
			{
				func_285(&iVar0, 0, 0, 0, 7, 0, 0, 0);
				*uParam1 = iVar0;
				iVar1 = 1;
			}
		}
	}
	iVar3 = func_390(iParam0);
	if (!func_388(iVar3, 0))
	{
		iVar0 = func_389(iVar3);
		if (iVar0 != -15)
		{
			func_285(&iVar0, 0, 0, 0, 7, 0, 0, 0);
			*uParam1 = iVar0;
		}
	}
	else
	{
		iVar0 = func_389(iVar3);
		if (iVar0 != -15)
		{
			func_285(&iVar0, 0, 0, 0, 7, 0, 0, 0);
			if (func_287(iVar0, *uParam1, 1))
			{
				*uParam1 = iVar0;
				iVar1 = 1;
			}
		}
	}
	return iVar1;
}

bool func_287(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_391(iParam1) || !func_391(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_288(int iParam0)
{
	iVar0 = Global_40.f_11182.f_1;
	if (iVar0 == -15)
	{
		return false;
	}
	func_285(&iVar0, 0, 0, 0, 5, 0, 0, 0);
	*iParam0 = iVar0;
	return true;
}

bool func_289(int iParam0, bool bParam1)
{
	return func_287(func_175(), iParam0, bParam1);
}

bool func_290()
{
	iVar1 = func_5(func_392(65536), 0, 3, func_393(65536));
	if (func_219(iVar1))
	{
		iVar0 = func_291(iVar1);
		if (!func_115(iVar0, 4))
		{
			return false;
		}
	}
	return true;
}

int func_291(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_394(iParam0);
}

bool func_292()
{
	return _unlock_is_unlocked(99890643);
}

int func_293(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_395(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
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
			if (func_198(iVar25, 0) && func_294(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_294(int iParam0, int iParam1)
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

void func_295(int iParam0, var uParam1, var uParam2)
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

struct<14> func_296(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_297(bool bParam0)
{
	iVar0 = func_202(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_397(923904168, func_396(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_397(923904168, func_396(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_397(923904168, func_396(bParam0), -740156546, 0);
}

void func_298(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_299(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_202(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_300(int iParam0)
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

int func_301(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_221(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_302(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_303(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_304(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_305(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_306()
{
	return Global_40.f_4283.f_1;
}

bool func_307(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_1() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_178(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_398(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_399(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_400(iVar0, 512, 1);
			}
			else
			{
				func_401(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

bool func_308(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_309(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_310(int iParam0, int iParam1)
{
	if (!func_379(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_311(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_312(int iParam0, int iParam1)
{
	if (!func_379(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_313(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_314(int iParam0)
{
	if (!func_379(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_315(int iParam0)
{
	if (func_379(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_316(int iParam0)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = round((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

void func_317(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_318(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_318(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_402(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0]->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_1() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_319(var uParam0)
{
	*uParam0 = 0;
}

void func_320(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_321(int iParam0)
{
	if (func_403(179) || func_403(180))
	{
		if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			if ((*Global_1347702)[iParam0]->f_37 == Global_1905944->f_5698)
			{
				func_404(1);
			}
		}
	}
	if (func_405(179))
	{
		func_406(179);
	}
	if (func_405(180))
	{
		func_406(180);
	}
}

bool func_322(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_71(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x0bb6de7d23c60626(player_id()))
		{
			return true;
		}
	}
	return false;
}

void func_323(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_324(int iParam0, int iParam1)
{
	if (!func_111(iParam0))
	{
		return;
	}
	func_407(&((*Global_1347702)[iParam0]->f_14), iParam1);
	func_407(&((*Global_1347702)[iParam0]->f_14), 2);
	func_408(&((*Global_1347702)[iParam0]->f_12), 16384);
	func_320(&((*Global_1347702)[iParam0]->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_111(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_325(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_111(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32 != 0)
	{
		return;
	}
	else if ((*Global_1347702)[iParam0]->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_321(iParam0);
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_218(iParam0, func_330(iParam0), 0, 1);
	}
	else if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_218(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_218(iParam0, vParam2, 0, 0);
	}
	_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 724623647);
	func_305(&((*Global_1347702)[iParam0]->f_13), 4096);
}

bool func_326(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_291((*Global_1347702)[iParam0]->f_15) != 0)
		{
			(*Global_1347702)[iParam0]->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

bool func_327(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_328(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_111(iParam0))
	{
		return iVar0;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if ((*Global_1347702)[iParam0]->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

bool func_329(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_111(iParam0))
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 != 0)
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		return true;
	}
	return false;
}

Vector3 func_330(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_331(int iParam0)
{
	switch (func_1())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_332(int iParam0)
{
	if (!func_329(iParam0))
	{
		if ((*Global_1347702)[iParam0]->f_13 & 16 != 0)
		{
			if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
			{
				if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
				{
					_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1446646876);
				}
				func_305(&((*Global_1347702)[iParam0]->f_13), 32);
			}
		}
		else
		{
			if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
			{
				_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, -1446646876);
			}
			func_320(&((*Global_1347702)[iParam0]->f_13), 32);
		}
	}
}

void func_333(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 495758964);
				break;
		}
	}
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

bool func_335(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

bool func_336(int iParam0)
{
	if (!func_409(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_410(iParam0))
		{
			if (vdist(Global_36, func_411(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_411(iParam0), false) <= func_412();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_412();
	}
	return func_413();
}

bool func_337(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

void func_338(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_219(iParam0))
	{
		return;
	}
	switch (func_414(iParam0))
	{
		case 1:
			iVar0 = func_279(iParam0);
			if (func_415(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_416(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_416(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if ((*Global_1835011)[iVar0]->f_28 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1835011)[iVar0]->f_27, iVar2);
				if (!func_417(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_418((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_279(iParam0);
			if (func_419(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_328(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_328(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_333(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

bool func_339(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_340(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

void func_341(int iParam0, bool bParam1)
{
	func_420(iParam0, &iVar0, &iVar1);
	if (!func_421(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_422(iVar0, iVar1);
}

int func_342(int iParam0)
{
	return iParam0;
}

void func_343(int iParam0)
{
	if (!func_423(iParam0))
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

void func_344(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_345(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_424(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_346(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_347(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_348(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

float func_349(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_350(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_425(iParam0, uParam1))
		{
			if (!func_177(uParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_174(uParam2, 0, 0, 1, 0);
				func_426(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (func_177(uParam1->f_10, 1))
		{
			func_427(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_428(&(uParam1->f_10), 1);
		}
	}
	return false;
}

bool func_351(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_177(iParam4, 32);
		func_173(iParam1, uParam2, 0);
		iVar5 = func_429(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_174(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_177(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_177(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_177(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_177(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_177(iParam4, 8388608) || func_177(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_177(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_177(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_353(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_353(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_177(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_430(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!is_string_null_or_empty(&cVar0))
						{
							iParam6 = get_hash_key(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
			}
			set_ped_config_flag(*uParam0, 130, true);
			set_ped_config_flag(*uParam0, 178, false);
			set_ped_config_flag(*uParam0, 297, true);
			set_ped_config_flag(*uParam0, 301, false);
			if (func_177(iParam4, 268435456))
			{
				iVar8 = func_431(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_432(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_353(iParam1, 23))
			{
				set_ped_config_flag(*uParam0, 315, false);
				set_ped_config_flag(*uParam0, 331, false);
				set_ped_config_flag(*uParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*uParam0, 315, true);
				set_ped_config_flag(*uParam0, 493, false);
			}
			if (func_177(iParam4, 2) || func_177(iParam4, 16))
			{
				func_352(*uParam0, 1, 1);
			}
			else
			{
				func_352(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_352(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_353(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_354(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_433(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_355(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (bParam1)
	{
		if (!is_bit_set(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					set_bit((*uParam4)[iVar0], 14);
					iVar0++;
				}
			}
			func_434(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_177(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_356(int iParam0)
{
	if (func_177(iParam0, 4))
	{
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
		disable_control_action(0, 42190210, true);
		disable_control_action(0, 1632043089, true);
		disable_control_action(0, 1623727326, true);
		disable_control_action(0, -922478227, true);
		disable_control_action(0, -674562833, true);
		disable_control_action(0, -197984200, true);
		disable_control_action(0, -238861894, true);
	}
	if (func_177(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_177(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_357(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_435(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_436(Global_35)) || func_437(Global_35)) || func_438(Global_35));
	fVar12 = -1f;
	if (func_66(&(iParam1->f_13)))
	{
		fVar12 = func_67(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_230((*uParam4)[iVar0]->f_6);
		func_439(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_440(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_441(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_174(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_442(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_173(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!is_string_null_or_empty((*uParam4)[iVar0]->f_11))
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_12))
							{
								task_play_anim(Global_35, (*uParam4)[iVar0]->f_11, (*uParam4)[iVar0]->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_443(iParam1, fParam6, iParam1->f_9))
					{
						func_65(&(iParam1->f_18));
						if (bVar6)
						{
							func_442(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_444(iParam1, fParam2);
	}
	return bVar5;
}

void func_358(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(uParam0[iVar0], 20))
		{
			if (!is_bit_set(uParam0[iVar0], 21))
			{
				clear_bit((*uParam0)[iVar0], 20);
				clear_bit((*uParam0)[iVar0], 21);
			}
		}
		iVar0++;
	}
}

void func_359(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_445((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_444(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_360(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_446(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_447(iParam1, 0);
				func_173(iParam1, uParam2, func_353(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_361(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_65(&(iParam1->f_18));
			return false;
		}
		else if (func_66(&(iParam1->f_18)))
		{
			func_80(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_66(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return false;
		}
	}
	return func_448(&(iParam1->f_18), fParam2);
	return true;
}

void func_362(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_439(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_363(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_364(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				return true;
			}
			break;
		case 11:
		case 153:
			if (iParam2 == 1 || iParam2 == 3)
			{
				return true;
			}
			break;
		case 13:
		case 15:
		case 154:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 1)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 2:
					if (iParam2 == 1 || iParam2 == 3)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			break;
		case 12:
		case 16:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 1)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 2:
					return true;
			}
			break;
		case 17:
		case 18:
		case 155:
			return true;
		case 19:
			if (iParam2 == 1 || iParam2 == 3)
			{
				return true;
			}
			break;
		case 20:
			if (iParam2 == 1 || iParam2 == 3)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_365(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_1() != -1;
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

int func_366(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_253(iVar2) != 0 && _0x800df3fc913355f3(func_255(iVar2)))
		{
			if (func_255(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_367(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_247(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_368(int iParam0, int iParam1)
{
	if (!func_247(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

int func_369(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_449(iParam0);
}

bool func_370(int iParam0, bool bParam1)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	if ((func_249(iParam0, 1) && !func_248(iParam0)) && func_250(iParam0))
	{
		return false;
	}
	if (!func_249(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_388(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_371(int iParam0)
{
	if (!func_247(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_372(var uParam0, int iParam1, char* sParam2)
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

int func_373(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_450(iVar0);
}

int func_374(int iParam0, int iParam1)
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

int func_375(int iParam0)
{
	if (!func_198(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_376(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_451(iParam0, vVar0, fParam2);
}

void func_377(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
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
	if (iParam0 == func_452(Global_35) && is_player_teleport_active())
	{
	}
	if (func_453(iParam0))
	{
		if (func_454(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_115(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_377(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_377(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!func_115(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_115(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_115(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_115(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_115(iParam5, 129))
	{
		if (func_115(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_115(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_115(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_115(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_453(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_115(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_115(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

int func_378(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_379(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

int func_380(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_381(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_455(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_382(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_383(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_384(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_385(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_386(int iParam0, int iParam1)
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

void func_387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_456(iParam0, iParam6);
	func_457(iParam0, iParam5);
	func_458(iParam0, iParam4);
	func_459(iParam0, iParam3);
	func_460(iParam0, iParam2);
	func_461(iParam0, iParam1);
}

bool func_388(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_247(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_255(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_264(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_255(iParam0));
}

int func_389(int iParam0)
{
	if (func_1() != -1)
	{
		return func_175();
	}
	if (!func_247(iParam0))
	{
		return func_175();
	}
	return Global_24887[iParam0]->f_1;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			iVar0 = 382;
			break;
		case 5:
			iVar0 = 256;
			break;
		case 105:
			iVar0 = 70;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 76:
			iVar0 = 3;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 115:
			iVar0 = 348;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_391(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_385(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_384(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_176(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_381(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_382(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_383(iParam0);
	if (iVar5 < 1 || iVar5 > func_386(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_392(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		case 4:
			return 105;
		case 8:
			return 78;
		case 16:
			return 51;
		case 32:
			return 41;
		case 64:
			return 108;
		case 128:
			return 44;
		case 256:
			return 53;
		case 512:
			return 84;
		case 1024:
			return 22;
		case 2048:
			return 73;
		case 4096:
			return 103;
		case 8192:
			return 18;
		case 16384:
			return 46;
		case 32768:
			return 0;
		case 65536:
			return 106;
		case 131072:
			return 47;
		case 262144:
			return 101;
		default:
			break;
	}
	return -1;
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		case 4:
			return -520696743;
		case 8:
			return -295901403;
		case 16:
			return -1445837674;
		case 32:
			return -75278298;
		case 64:
			return -675249331;
		case 128:
			return -1822243680;
		case 256:
			return -1307199059;
		case 512:
			return -17701163;
		case 1024:
			return -172170798;
		case 2048:
			return 1836682179;
		case 4096:
			return -67934460;
		case 8192:
			return 410776537;
		case 16384:
			return -240986174;
		case 32768:
			return 1505721140;
		case 65536:
			return 2023114891;
		case 131072:
			return -30217677;
		case 262144:
			return 653209800;
		default:
			break;
	}
	return 0;
}

int func_394(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_395(int iParam0, int iParam1, bool bParam2)
{
	if (!func_198(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_199(iParam0);
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
		if (!func_462(iParam0, 1))
		{
			return false;
		}
	}
	return func_99(iParam0, 0, bParam2) >= iParam1;
}

struct<4> func_396(bool bParam0)
{
	return func_397(1328661203, func_463(), -1591664384, bParam0);
}

struct<4> func_397(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_198(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_202(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_398(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_399(iVar0, &iParam0))
		{
			if (Global_40.f_4942[iVar0]->f_59 != 0 && Global_40.f_4942[iVar0]->f_59 != iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_399(int iParam0, int iParam1)
{
	if (!func_302(iParam0))
	{
		return false;
	}
	iVar0 = func_303(iParam0);
	return (*iParam1 && iVar0) != 0;
}

void func_400(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_302(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

void func_401(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_302(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_402(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_403(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944->f_22[iParam0]->f_1;
	}
	return false;
}

void func_404(int iParam0)
{
	func_464(1);
}

bool func_405(int iParam0)
{
	func_420(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_406(int iParam0)
{
	func_420(iParam0, &iVar0, &iVar1);
	func_465(iVar0, iVar1);
}

void func_407(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_408(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_409(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_410(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_411(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_412()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_413()
{
	return Global_1894899 & 2 != 0;
}

int func_414(int iParam0)
{
	if (!func_219(iParam0))
	{
		return 0;
	}
	return func_466(func_12(iParam0));
}

bool func_415(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_467(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_416(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_468(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

bool func_417(int iParam0)
{
	return func_469(iParam0);
}

bool func_418(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

bool func_419(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_337(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

void func_420(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_421(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_470(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_471(iParam0))
	{
		return false;
	}
	if (func_472(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_473(iParam0, 1)) || func_327(32768))
	{
		if (!func_473(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_474())
	{
		return false;
	}
	return true;
}

void func_422(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_423(int iParam0)
{
	return func_424(iParam0, 2);
}

bool func_424(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_425(int iParam0, var uParam1)
{
	if (uParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_475((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_426(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_427(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_445((*uParam0)[iVar0]))
		{
			func_228((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_428(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_429(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_476(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_230((*uParam2)[iVar0]->f_6))
		{
			func_228((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_430(var uParam0)
{
	iVar0 = func_477(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_431(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_432(int* iParam0, int* iParam1)
{
	if (!func_353(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_228(iParam1, 19);
			func_447(iParam0, 23);
			func_478(iParam1, 2);
		}
	}
}

bool func_433(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_479(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_480(16);
					Global_1935630->f_58 = get_ped_index_from_entity_index(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_434(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_476(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_435(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_436(int iParam0)
{
	return (func_481(iParam0, 4) || func_481(iParam0, 5));
}

int func_437(int iParam0)
{
	return func_481(iParam0, 7);
}

int func_438(int iParam0)
{
	return func_481(iParam0, 6);
}

void func_439(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_445(iParam1))
		{
			clear_bit(iParam1, 14);
			func_476(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_440(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_482(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_483(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_236(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_236(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_484(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_441(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_485(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_486(iParam1, 1))
	{
		func_487(iParam1, 1);
		return true;
	}
	return false;
}

void func_442(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_125((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_443(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_444(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_445(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_446(int iParam0)
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (get_event_at_index(0, iVar0))
			{
				case 1387172233:
					if (get_event_data(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (is_entity_a_ped(vVar3.z))
								{
									if (iParam0 == get_ped_index_from_entity_index(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_447(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_448(var uParam0, float fParam1)
{
	if (func_488(uParam0, fParam1))
	{
		func_80(uParam0);
		return 1;
	}
	return 0;
}

int func_449(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

int func_450(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_489(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_451(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_490(vVar3, vVar6);
	if (absf(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_491(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_452(var uParam0)
{
	return uParam0;
}

bool func_453(int iParam0)
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

bool func_454(int iParam0)
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

int func_455(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_456(int iParam0, int iParam1)
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

void func_457(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_458(int iParam0, int iParam1)
{
	iVar0 = func_382(*iParam0);
	iVar1 = func_381(*iParam0);
	if (iParam1 < 1 || iParam1 > func_386(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_459(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_460(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_461(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_462(int iParam0, int iParam1)
{
	if (!func_198(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_200(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_492("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_493(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_494(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_300(iVar1);
				return true;
			}
			iVar3++;
		}
		func_300(iVar1);
	}
	return false;
}

struct<4> func_463()
{
	return Var0;
}

void func_464(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_465(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_466(int iParam0)
{
	return iParam0 & 31;
}

bool func_467(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && does_blip_exist((*Global_1835011)[iParam0]->f_27)) && (*Global_1835011)[iParam0]->f_21 == iParam2)
	{
		return true;
	}
	return false;
}

bool func_468(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_495((*Global_1835011)[iParam0]);
	}
	return false;
}

int func_469(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

bool func_470(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_471(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_473(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_473(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_472(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_473(iParam0, 65536) && !func_473(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_473(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_473(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_473(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_474()
{
	return Global_1905944->f_5694;
}

int func_475(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_476(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_230(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_231(&(iParam1->f_6), 0, 1);
	}
	if (!func_230(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_445(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_496(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_230(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_484(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_497(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_498(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_234(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_497(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_236(iParam1->f_6, 0, 1);
				}
				else
				{
					func_236(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_477(int iParam0)
{
	iVar0 = get_ped_relationship_group_default_hash(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_478(int* iParam0, int iParam1)
{
	if (!func_227(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_228(iParam0, 14);
		}
	}
}

bool func_479(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_480(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_481(int iParam0, int iParam1)
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

bool func_482(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bVar0 = (is_bit_set(*iParam1, 0) && !is_bit_set(*iParam1, 4));
	if (is_bit_set(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (is_bit_set(*iParam1, 20))
		{
			if (!is_bit_set(*iParam0, 25))
			{
				set_bit(iParam0, 24);
			}
			return true;
		}
	}
	if (is_bit_set(*iParam1, 9))
	{
		clear_bit(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (is_bit_set(*iParam1, 6))
		{
			return true;
		}
	}
	else if (is_bit_set(*iParam1, 5))
	{
		return true;
	}
	if (is_bit_set(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!is_bit_set(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(*iParam1, 18))
	{
		if (is_bit_set(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!is_bit_set(*iParam1, 2))
	{
		if (is_bit_set(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_483(int iParam0, bool bParam1)
{
	if (bParam1 && !func_230(iParam0))
	{
		return false;
	}
	return !func_424(iParam0, 4);
}

void func_484(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_230(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	func_497(iParam0, 18, 0, 1);
	func_497(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_485(int iParam0, bool bParam1)
{
	if (bParam1 && !func_230(iParam0))
	{
		return false;
	}
	iVar0 = func_342(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_486(int iParam0, bool bParam1)
{
	if (bParam1 && !func_230(iParam0))
	{
		return false;
	}
	iVar0 = func_342(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_487(int iParam0, bool bParam1)
{
	if (bParam1 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_488(var uParam0, float fParam1)
{
	if (!func_66(uParam0))
	{
		return false;
	}
	if (func_67(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_489(int iParam0, int iParam1)
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

float func_490(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = vmag(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_491(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_492(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_202(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_493(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_494(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_495(var uParam0)
{
	if (func_499(&(uParam0->f_29), 62))
	{
		switch (func_500())
		{
			case 1:
				if (!func_499(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_499(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_499(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_499(&(uParam0->f_29), 32))
				{
					if (func_499(&(uParam0->f_29), 2))
					{
						if (func_176(func_175()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

int func_496(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 48)
	{
		if (func_424(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
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
				func_501(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_497(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_498(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_499(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_500()
{
	return &Global_1899516;
}

void func_501(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, uParam15);
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
	func_345(iParam0, 1);
	func_346(iParam0, 1);
	func_347(iParam0, 128);
}

