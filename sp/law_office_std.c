void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_15.f_389 = ScriptParam_0.f_1;
	bVar0 = false;
	if (has_force_cleanup_occurred(523))
	{
		Local_15 = 3;
		bVar0 = true;
	}
	while (true)
	{
		func_1(bVar0);
		if (bVar0)
		{
			wait(0);
		}
		else
		{
			switch (Local_15)
			{
				case 0:
					set_this_script_can_remove_blips_created_by_any_script(true);
					func_2(&Local_15);
					func_3(&Local_15);
					func_4(&Local_15, 1);
					break;
				case 1:
					if (func_5(&Local_15))
					{
						if (func_6(&Local_15))
						{
							func_7();
							func_4(&Local_15, 2);
						}
					}
					break;
				case 2:
					if (func_8())
					{
						func_4(&Local_15, 3);
					}
					break;
				case 3:
					if (func_9(&(Local_15.f_3)))
					{
						if (!bVar0)
						{
							func_10(&Local_15, 0);
						}
					}
					else
					{
						func_11();
					}
					break;
			}
			if (!bVar0)
			{
				if (Local_15 > 0)
				{
					if (!func_12(Local_15.f_388, 64))
					{
						if (func_13(Local_15.f_387, Global_35))
						{
							if (!is_string_null_or_empty(&(Local_15.f_460)))
							{
								func_14(Global_35, Local_15.f_387, &(Local_15.f_460), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_15(&(Local_15.f_388), 64);
						}
					}
					if (func_16(&Local_15))
					{
						func_10(&Local_15, 0);
					}
				}
			}
			wait(0);
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		if (!func_17(0) || is_screen_faded_out())
		{
			func_10(&Local_15, 1);
		}
	}
}

void func_2(int iParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_18(iParam0);
	func_19(iParam0->f_2, &iVar0);
	iParam0->f_390 = { _0xf70f00013a62f866(iVar0) };
	if (!does_entity_exist(iParam0->f_387))
	{
		iParam0->f_387 = func_20(Global_35);
		if (!does_entity_exist(iParam0->f_387))
		{
			iVar1 = _get_last_mount(Global_35);
			if (!is_entity_dead(iVar1))
			{
				iParam0->f_387 = func_20(iVar1);
			}
		}
		_0xed9582b3da8f02b4(1);
	}
	if (!does_entity_exist(iParam0->f_387))
	{
		return;
	}
	else if (decor_exist_on(iParam0->f_387, "bDeadOrAlive") && decor_get_bool(iParam0->f_387, "bDeadOrAlive"))
	{
		func_15(&(iParam0->f_388), 8);
	}
	else
	{
		func_21(&(iParam0->f_388), 8);
	}
	if (!func_12(iParam0->f_388, 1))
	{
		if (func_22(iParam0->f_387, func_12(iParam0->f_388, 8)))
		{
			func_15(&(iParam0->f_388), 1);
		}
		else
		{
			func_21(&(iParam0->f_388), 1);
		}
	}
	if (!func_12(iParam0->f_388, 1))
	{
		return;
	}
	func_23(iParam0);
	if (!func_24(iParam0->f_389, 8))
	{
		set_blocking_of_non_temporary_events(iParam0->f_387, false);
	}
	func_25(iParam0);
}

void func_3(int iParam0)
{
	func_26(iParam0);
	_text_database_request("BHCR");
	if (!is_string_null_or_empty(&(iParam0->f_401)))
	{
		_text_database_request(&(iParam0->f_401));
	}
}

void func_4(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_5(int iParam0)
{
	if (!func_27(iParam0))
	{
		return false;
	}
	if (!_text_database_has_loaded("BHCR"))
	{
		return false;
	}
	if (!is_string_null_or_empty(&(iParam0->f_401)) && !_text_database_has_loaded(&(iParam0->f_401)))
	{
		return false;
	}
	return true;
}

bool func_6(int iParam0)
{
	return true;
}

void func_7()
{
	if (does_entity_exist(Local_15.f_387))
	{
		set_ped_relationship_group_hash(Local_15.f_387, 1222652248);
		set_ped_relationship_group_default_hash(Local_15.f_387, 1222652248);
		set_ped_config_flag(Local_15.f_387, 6, true);
	}
}

bool func_8()
{
	func_28(&Local_15);
	func_29(&Local_15);
	switch (Local_15.f_1)
	{
		case 0:
			if (func_30(Local_15.f_387, 0, 0))
			{
				set_ped_can_be_targetted(Local_15.f_387, true);
				set_blocking_of_non_temporary_events(Local_15.f_387, true);
			}
			func_31(&Local_15, 1);
			break;
		case 1:
			func_32();
			func_34(func_33() == Local_15.f_2);
			if (func_35(&(Local_15.f_3), 1))
			{
				func_36(&(Local_15.f_3.f_329), 67108864);
				disable_ped_pain_audio(Local_15.f_387, true);
				func_31(&Local_15, 2);
			}
			else if (func_24(Local_15.f_389, 256))
			{
				func_37();
				func_31(&Local_15, 3);
			}
			break;
		case 2:
			func_32();
			func_38();
			if (!func_24(Local_15.f_389, 32))
			{
				if (func_39(Local_15.f_3.f_329, 2048))
				{
					if (_0x5c16855277819bbf() >= 1)
					{
						func_40(Local_15.f_389, 32);
						if (!is_entity_a_mission_entity(Local_15.f_387) || !_0x88ad6cc10d8d35b2(Local_15.f_387))
						{
							set_entity_as_mission_entity(Local_15.f_387, true, true);
						}
						set_ped_keep_task(Local_15.f_387, true);
						func_41(Local_15.f_387);
					}
				}
			}
			if (func_42(&(Local_15.f_3)))
			{
				if (!Local_15.f_501)
				{
					disable_ped_pain_audio(Local_15.f_387, false);
					Local_15.f_501 = 1;
				}
				func_11();
				if (!func_43(Global_35, Local_15.f_390, 35f, 1, 1))
				{
					return true;
				}
			}
			else if (func_24(Local_15.f_389, 256))
			{
				func_37();
				func_31(&Local_15, 3);
			}
			break;
		case 3:
			if (!func_24(Local_15.f_389, 256))
			{
				Global_1395482->f_115 = func_12(Local_15.f_388, 4);
				Global_1395482->f_114 = Local_15.f_498;
				func_4(&Local_15, 0);
				func_31(&Local_15, 0);
			}
			break;
	}
	return false;
}

bool func_9(var uParam0)
{
	fVar0 = get_distance_between_coords(func_44(uParam0->f_300, uParam0->f_65), Global_36, true);
	if (func_45(uParam0->f_69, 0))
	{
		set_ped_reset_flag(uParam0->f_69, 49, true);
	}
	if (func_46(uParam0->f_306, Global_36))
	{
		set_ped_reset_flag(Global_35, 328, true);
	}
	if (!func_39(uParam0->f_329, 8388608))
	{
		func_47(uParam0);
		func_48(uParam0);
		if (!func_39(uParam0->f_329, 256))
		{
			if (!func_49(Global_35, -76381094) && !func_43(Global_35, func_44(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
			{
				func_50(uParam0);
			}
		}
		else if (func_39(uParam0->f_329, 512) && !func_39(uParam0->f_328, 32))
		{
			func_51(uParam0);
		}
		if (!func_39(uParam0->f_328, 2097152))
		{
			func_52(uParam0);
		}
	}
	if (is_entity_dead(uParam0->f_67))
	{
		func_53(uParam0->f_67, 0);
	}
	if (fVar0 > 50f)
	{
		return true;
	}
	if (func_54(uParam0))
	{
	}
	if (_does_volume_exist(uParam0->f_308))
	{
		if (!func_46(uParam0->f_306, Global_36))
		{
			func_55(uParam0->f_308);
			func_56(uParam0->f_308);
		}
	}
	return false;
}

void func_10(int iParam0, bool bParam1)
{
	func_57(iParam0);
	if (!func_24(iParam0->f_389, 4))
	{
		if (!is_entity_dead(iParam0->f_387))
		{
			func_41(iParam0->f_387);
			if (func_24(iParam0->f_389, 32))
			{
				task_carriable(iParam0->f_387, -2146271366, 0, 0, 0);
				set_ped_keep_task(iParam0->f_387, true);
			}
			else if (bParam1)
			{
				_0xed00d72f81cf7278(iParam0->f_387, 0, 0);
				_0x39a2fc5af55a52b1(iParam0->f_387, -1);
			}
			set_ped_as_no_longer_needed(&(iParam0->f_387));
			func_58(4);
		}
	}
	func_59(&(iParam0->f_3), 0);
	func_60(0);
	_text_database_delete("BHCR");
	if (!is_string_null_or_empty(&(iParam0->f_401)))
	{
		_text_database_delete(&(iParam0->f_401));
	}
	if (func_24(iParam0->f_389, 128))
	{
		func_41(iParam0->f_387);
		func_58(4);
	}
	if (func_61(iParam0))
	{
		func_62();
	}
	else
	{
		Global_1395482->f_115 = func_12(iParam0->f_388, 4);
		Global_1395482->f_116 = func_12(iParam0->f_388, 2);
		Global_1395482->f_114 = iParam0->f_498;
		Global_1395482->f_94 = iParam0->f_478;
		Global_1395482->f_72 = iParam0->f_456;
		Global_1395482->f_73 = iParam0->f_457;
		Global_1395482->f_74 = iParam0->f_458;
		Global_1395482->f_75 = iParam0->f_459;
		Global_1395482->f_117 = iParam0->f_500;
		Global_1395482->f_93 = iParam0->f_477;
	}
	func_63(iParam0);
	func_37();
	func_64(iParam0->f_389, 4);
	func_64(iParam0->f_389, 32);
	func_64(iParam0->f_389, 128);
	Global_1395482->f_1 = -1;
	if (!is_player_control_on(get_player_index()))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	if (_0x5c16855277819bbf() >= 1)
	{
		_0x7d4e70a67a651c71(1);
	}
	display_radar(true);
	display_hud(true);
	terminate_this_thread();
}

void func_11()
{
	if (!is_entity_dead(Local_15.f_387))
	{
		if (func_24(Local_15.f_389, 32))
		{
			if (_does_volume_exist(Local_15.f_3.f_306))
			{
				if (func_65(Global_35, Local_15.f_3.f_306, 1, 0))
				{
					if (!func_66(Local_15.f_387, 0))
					{
						if ((Local_15.f_397 > 1 && !is_entity_dead(Local_15.f_3.f_69)) && !_0x3ab6c7b0bb0df4b1(Local_15.f_3.f_69, -1))
						{
							if (func_67(&(Local_15.f_393), 1f))
							{
								func_14(Local_15.f_3.f_69, Local_15.f_3.f_69, "CUT_THAT_OUT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_68(&(Local_15.f_393));
								Local_15.f_397 = 0;
								Local_15.f_396 = get_random_float_in_range(8f, 13f);
							}
						}
						else if (!func_69(&(Local_15.f_393)) || func_67(&(Local_15.f_393), Local_15.f_396))
						{
							switch (get_random_int_in_range(0, 3))
							{
								case 0:
									func_14(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
								case 1:
									func_14(Local_15.f_387, Local_15.f_387, "GENERIC_CURSE_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
								case 2:
									func_14(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
							}
							func_68(&(Local_15.f_393));
							Local_15.f_397++;
							Local_15.f_396 = get_random_float_in_range(8f, 13f);
						}
					}
				}
			}
		}
	}
}

bool func_12(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_13(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			if (is_entity_dead(iParam0))
			{
				if (get_ped_source_of_death(get_ped_index_from_entity_index(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_14(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_70(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_15(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_16(int iParam0)
{
	if (Global_1935630->f_12)
	{
		func_58(4);
		return true;
	}
	if (!does_entity_exist(iParam0->f_387))
	{
		return true;
	}
	if (!decor_exist_on(iParam0->f_387, "bIsCriminal") || decor_get_bool(iParam0->f_387, "bIsCriminal") == 0)
	{
		return true;
	}
	if (func_71(get_player_index(), 1, 0, 1))
	{
		func_40(iParam0->f_389, 128);
		return true;
	}
	if (func_72(&(iParam0->f_3), 1120403456, 1125515264))
	{
		if (iParam0->f_3.f_64 == 5 || iParam0->f_3.f_64 == 6)
		{
			func_40(iParam0->f_389, 128);
		}
		return true;
	}
	if (!func_12(iParam0->f_388, 1))
	{
		return true;
	}
	if (!func_12(iParam0->f_388, 8) && is_entity_dead(iParam0->f_387))
	{
		func_58(4);
		return true;
	}
	if (func_73(iParam0))
	{
		func_58(4);
		return true;
	}
	iVar0 = func_74();
	if (func_75(iVar0) != iParam0->f_389)
	{
		func_40(iParam0->f_389, 4);
		return true;
	}
	if (func_76(iParam0))
	{
		return true;
	}
	return false;
}

bool func_17(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_77(iVar0))
	{
		return false;
	}
	if (func_78(iVar0, 1) || func_78(iVar0, 2))
	{
		return true;
	}
	return false;
}

void func_18(int iParam0)
{
	iParam0->f_2 = 5;
	StringCopy(&(iParam0->f_398), "NBX", 24);
	StringCopy(&(iParam0->f_401), "BHJSDAU", 24);
	Global_1395482->f_1 = 6;
}

void func_19(int iParam0, int iParam1)
{
	if (_does_volume_exist(*iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*iParam1 = _create_volume_box_with_custom_name(2504.735f, -1308.831f, 49.06328f, 0f, 0f, 0f, 22.43624f, 17.01578f, 3.468709f, "SD Sheriff Office");
			break;
		case 26:
			*iParam1 = _create_volume_aggregate_with_custom_name("Strawberry Sheriff Office");
			_0x39816f6f94f385ad(*iParam1, -1810.522f, -349.3201f, 163.474f, 0f, 0f, -25.06604f, 7.327408f, 6.633123f, 6.036f);
			_0x39816f6f94f385ad(*iParam1, -1813.445f, -353.8168f, 163.474f, 0f, 0f, -25.06604f, 5.841297f, 4.267593f, 6.036f);
			break;
		case 76:
			*iParam1 = _create_volume_aggregate_with_custom_name("Valentine Sheriff Office");
			_0x39816f6f94f385ad(*iParam1, -272.9176f, 809.1227f, 119.4f, 0f, 0f, -80.06616f, 6.765059f, 4.518183f, 3f);
			_0x39816f6f94f385ad(*iParam1, -277.2155f, 807.0856f, 119.8f, 0f, 0f, -79.7f, 9.130634f, 5.028743f, 2.8f);
			break;
		case 78:
			*iParam1 = _create_volume_box_with_custom_name(2906.428f, 1312.199f, 45.46901f, 0f, 0f, -21.08204f, 10.47463f, 7.642887f, 2.791512f, "Annesburg Sheriff Office");
			break;
		case 105:
			*iParam1 = _create_volume_aggregate_with_custom_name("Rhodes Sheriff Office");
			_0x39816f6f94f385ad(*iParam1, 1355.464f, -1302.104f, 77.52525f, 0f, 0f, -20.36115f, 3.923681f, 4.045318f, 2.635184f);
			_0x39816f6f94f385ad(*iParam1, 1360.674f, -1301.562f, 77.52525f, 0f, 0f, -20.30303f, 5.747039f, 8.956645f, 2.635184f);
			break;
		case 38:
			*iParam1 = _create_volume_aggregate_with_custom_name("Blackwater Sheriff Office");
			_0x39816f6f94f385ad(*iParam1, -763.0246f, -1269.283f, 43.6176f, 0f, 0f, 0f, 12.03637f, 8.528987f, 5.107259f);
			_0x39816f6f94f385ad(*iParam1, -764.7173f, -1263.493f, 43.76242f, 0f, 0f, 0f, 7.664316f, 3.774002f, 5.107259f);
			break;
		case 115:
			*iParam1 = _create_volume_box_with_custom_name(-5529.529f, -2927.852f, -1.033f, 0f, 0f, 25f, 6.7f, 6.3f, 3f, "Tumbleweed Sheriff Office");
			break;
		default:
			break;
	}
}

int func_20(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = _get_first_entity_ped_is_carrying(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			return iVar1;
		}
	}
	return 0;
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_22(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!bParam1 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!bParam1 && !_is_ped_hogtied(iParam0))
	{
		return false;
	}
	if (decor_exist_on(iParam0, "bIsCriminal") && decor_get_bool(iParam0, "bIsCriminal"))
	{
		return true;
	}
	return false;
}

void func_23(int iParam0)
{
	bVar1 = false;
	bVar2 = false;
	bVar3 = func_12(iParam0->f_388, -2147483648);
	bVar4 = func_79(8);
	bVar5 = func_79(16);
	iParam0->f_3.f_358 = 0;
	iParam0->f_3.f_359 = func_80(iParam0->f_389);
	if (!is_string_null_or_empty(&(Global_1395482->f_17)))
	{
		iParam0->f_3.f_325 = { Global_1395482->f_17 };
	}
	else
	{
		StringCopy(&(iParam0->f_3.f_325), "BNTY_NME_CRIM", 24);
	}
	if (!iParam0->f_3.f_359)
	{
		if (bVar3 || is_string_null_or_empty(&(Global_1395482->f_11)))
		{
			func_36(&(iParam0->f_3.f_328), 16777216);
			func_36(&(iParam0->f_3.f_328), 1073741824);
		}
		else if (!is_string_null_or_empty(&(Global_1395482->f_11)))
		{
			MemCopy(&(iParam0->f_3.f_332), {func_81(iParam0, &(Global_1395482->f_11))}, 4);
			func_82(&(iParam0->f_3.f_328), 16777216);
			func_82(&(iParam0->f_3.f_328), 1073741824);
		}
		if (bVar3 || is_string_null_or_empty(&(Global_1395482->f_14)))
		{
			func_36(&(iParam0->f_3.f_328), 33554432);
			func_36(&(iParam0->f_3.f_328), -2147483648);
		}
		else if (!is_string_null_or_empty(&(Global_1395482->f_14)))
		{
			MemCopy(&(iParam0->f_3.f_336), {func_81(iParam0, &(Global_1395482->f_14))}, 4);
			func_82(&(iParam0->f_3.f_328), 33554432);
			func_82(&(iParam0->f_3.f_328), -2147483648);
		}
	}
	else
	{
		func_36(&(iParam0->f_3.f_328), -2147483648);
		func_36(&(iParam0->f_3.f_328), 1073741824);
	}
	iParam0->f_3.f_360 = ((bVar4 || bVar3) || iParam0->f_3.f_359);
	if (bVar5)
	{
		func_36(&(iParam0->f_3.f_328), -2147483648);
		func_36(&(iParam0->f_3.f_328), 1073741824);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!is_string_null_or_empty(Global_1395482->f_20[iVar0]))
		{
			bVar1 = true;
			*iParam0->f_404[iVar0] = { *Global_1395482->f_20[iVar0] };
			if (!is_string_null_or_empty(Global_1395482->f_36[iVar0]))
			{
				*iParam0->f_420[iVar0] = { *Global_1395482->f_36[iVar0] };
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_string_null_or_empty(Global_1395482->f_52[iVar0]))
		{
			bVar1 = true;
			bVar2 = true;
			*iParam0->f_436[iVar0] = { *Global_1395482->f_52[iVar0] };
			if (!is_string_null_or_empty(Global_1395482->f_62[iVar0]))
			{
				*iParam0->f_446[iVar0] = { *Global_1395482->f_62[iVar0] };
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar1)
	{
		func_40(iParam0->f_389, 8);
	}
	if (bVar2)
	{
		func_40(iParam0->f_389, 16);
	}
	if (Global_1395482->f_115)
	{
		func_15(&(iParam0->f_388), 4);
	}
	else
	{
		func_21(&(iParam0->f_388), 4);
	}
	if (Global_1395482->f_116)
	{
		func_15(&(iParam0->f_388), 2);
	}
	else
	{
		func_21(&(iParam0->f_388), 2);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_string_null_or_empty(Global_1395482->f_95[iVar0]))
		{
			_copy_memory(iParam0->f_479[iVar0], Global_1395482->f_95[iVar0], 6);
			if (!func_24(iParam0->f_389, 512))
			{
				func_40(iParam0->f_389, 512);
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	if (!is_string_null_or_empty(&(Global_1395482->f_76)))
	{
		iParam0->f_460 = { Global_1395482->f_76 };
	}
	else
	{
		StringCopy(&(iParam0->f_460), "", 32);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_string_null_or_empty(Global_1395482->f_80[iVar0]))
		{
			*iParam0->f_464[iVar0] = { *Global_1395482->f_80[iVar0] };
		}
		else
		{
			StringCopy(iParam0->f_464[iVar0], "", 32);
		}
		iVar0++;
	}
	iParam0->f_498 = Global_1395482->f_114;
	iParam0->f_478 = Global_1395482->f_94;
	iParam0->f_456 = Global_1395482->f_72;
	iParam0->f_457 = Global_1395482->f_73;
	iParam0->f_458 = Global_1395482->f_74;
	iParam0->f_459 = Global_1395482->f_75;
	iParam0->f_500 = Global_1395482->f_117;
	iParam0->f_477 = Global_1395482->f_93;
	func_36(&(iParam0->f_3.f_328), 67108864);
	func_36(&(iParam0->f_3.f_328), 268435456);
	func_36(&(iParam0->f_3.f_328), 536870912);
	func_36(&(iParam0->f_3.f_328), 134217728);
	func_36(&(iParam0->f_3.f_329), 262144);
	func_21(&(iParam0->f_388), -2147483648);
}

bool func_24(int iParam0, int iParam1)
{
	if (!func_83(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

void func_25(int iParam0)
{
	if (get_ped_config_flag(iParam0->f_387, 4, true))
	{
		iVar0 = func_84(-1531790128, 0, -1);
		iVar1 = func_84(-702897958, 0, -1);
	}
	else
	{
		iVar0 = func_84(-702897958, 0, -1);
		iVar1 = func_84(-1888020242, 0, -1);
	}
	iParam0->f_3.f_67 = iParam0->f_387;
	func_85(&(iParam0->f_3.f_67));
	func_86(&(iParam0->f_3), &(iParam0->f_3.f_325), iParam0->f_2, iVar0, iVar1, 0);
	func_36(&(iParam0->f_3.f_329), 262144);
	func_36(&(iParam0->f_3.f_329), 524288);
	func_36(&(iParam0->f_3.f_329), 1048576);
	set_ped_config_flag(iParam0->f_387, 4, true);
	iParam0->f_3.f_299 = 1;
}

void func_26(int iParam0)
{
}

bool func_27(int iParam0)
{
	return true;
}

void func_28(int iParam0)
{
	if (!does_entity_exist(iParam0->f_387))
	{
		return;
	}
	if (!_does_volume_exist(iParam0->f_3.f_306))
	{
		return;
	}
	if (is_entity_in_volume(iParam0->f_387, iParam0->f_3.f_306, false, 0))
	{
		if (!func_24(Global_1395482->f_1, 64))
		{
			func_40(Global_1395482->f_1, 64);
		}
	}
	else if (func_24(Global_1395482->f_1, 64))
	{
		func_64(Global_1395482->f_1, 64);
	}
}

void func_29(int iParam0)
{
	if (!func_24(iParam0->f_389, 256))
	{
		if ((!is_entity_dead(iParam0->f_387) && !_is_ped_hogtied(iParam0->f_387)) && !func_65(iParam0->f_387, iParam0->f_3.f_306, 1, 0))
		{
			func_59(&(iParam0->f_3), 1);
			func_40(iParam0->f_389, 256);
		}
	}
	else if (_is_ped_hogtied(iParam0->f_387))
	{
		func_64(iParam0->f_389, 256);
	}
}

bool func_30(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_45(iParam0, iParam1);
}

void func_31(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

void func_32()
{
	if (_does_volume_exist(Local_15.f_3.f_306))
	{
		if (func_65(Global_35, Local_15.f_3.f_306, 1, 0))
		{
			if (!is_entity_dead(Local_15.f_3.f_69))
			{
				set_ped_can_play_gesture_anims(Local_15.f_3.f_69, 0, 1);
			}
			if (!is_entity_dead(Local_15.f_387))
			{
				if (_0x3ab6c7b0bb0df4b1(Local_15.f_387, -1))
				{
					set_ped_can_play_gesture_anims(Local_15.f_387, 0, 1);
				}
			}
			if (!is_entity_dead(Global_35))
			{
				if (_0x3ab6c7b0bb0df4b1(Global_35, -1))
				{
					set_ped_can_play_gesture_anims(Global_35, 0, 1);
				}
			}
		}
	}
}

int func_33()
{
	return Global_1894899->f_2;
}

void func_34(bool bParam0)
{
	bVar0 = false;
	bVar1 = func_24(Local_15.f_389, 8);
	if (bParam0)
	{
		if (!func_12(Local_15.f_388, 4))
		{
			if (func_24(Local_15.f_389, 16))
			{
				func_15(&(Local_15.f_388), 4);
				func_21(&(Local_15.f_388), 16);
				Local_15.f_498 = 0;
				bVar0 = true;
			}
		}
	}
	if (!bVar0)
	{
		bVar0 = func_12(Local_15.f_388, 4);
	}
	if (!func_12(Local_15.f_388, 16))
	{
		if (!bVar1 || func_87(bVar0))
		{
			if (bVar0 || !bVar1)
			{
				if (!is_entity_dead(Local_15.f_387))
				{
					stop_ped_speaking(Local_15.f_387, false);
					set_blocking_of_non_temporary_events(Local_15.f_387, false);
					set_ped_config_flag(Local_15.f_387, 178, true);
				}
				func_88();
			}
			func_15(&(Local_15.f_388), 16);
			Local_15.f_502 = 0;
			return;
		}
		else
		{
			set_ped_reset_flag(Local_15.f_387, 147, true);
		}
		func_89(bVar0);
	}
	else
	{
		switch (Local_15.f_502)
		{
			case 0:
				stop_ped_speaking(Local_15.f_387, false);
				if (func_12(Local_15.f_388, 32))
				{
					Local_15.f_502 = 4;
				}
				else if (func_90(0, 1, 0, 0))
				{
					if (is_ambient_speech_playing(Local_15.f_387) || is_scripted_speech_playing(Local_15.f_387))
					{
						Local_15.f_502 = 1;
					}
				}
				break;
			case 1:
				if (!is_ambient_speech_playing(Local_15.f_387))
				{
					if (!is_scripted_speech_playing(Local_15.f_387))
					{
						if (func_91(0) == Local_15.f_387)
						{
							if (!func_92())
							{
								if (func_12(Local_15.f_388, 32))
								{
									Local_15.f_502 = 4;
								}
							}
							else
							{
								Local_15.f_502 = 2;
							}
						}
						else
						{
							Local_15.f_502 = 0;
						}
					}
				}
				break;
			case 2:
				set_ped_reset_flag(Local_15.f_387, 147, true);
				if (!is_ambient_speech_playing(Global_35))
				{
					if (!is_scripted_speech_playing(Global_35))
					{
						func_68(&(Local_15.f_393));
						Local_15.f_499 = get_random_float_in_range(20f, 30f);
						Local_15.f_502 = 3;
					}
				}
				break;
			case 3:
				set_ped_reset_flag(Local_15.f_387, 147, true);
				if (func_67(&(Local_15.f_393), Local_15.f_499))
				{
					Local_15.f_502 = 0;
				}
				break;
			case 4:
				break;
		}
	}
}

bool func_35(var uParam0, bool bParam1)
{
	func_93(uParam0);
	func_94(uParam0);
	if (func_95(uParam0))
	{
		set_all_random_peds_flee_this_frame(player_id());
	}
	switch (uParam0->f_59)
	{
		case 0:
			Global_1392235->f_4 = 1;
			func_96(uParam0, 1);
			break;
		case 1:
			if (func_95(uParam0))
			{
				uParam0->f_308 = _create_volume_sphere_with_custom_name(func_97(uParam0->f_300), 0f, 0f, 0f, 20f, 20f, 20f, func_98());
				func_99(uParam0->f_308, "BountyHuntingRewardVolume", 1, 0, 0, 0, -1082130432);
				if (uParam0->f_300 == 26)
				{
					uParam0->f_72 = add_scenario_blocking_area(-1813.668f, -353.7011f, 160.4116f, -1811.668f, -351.7011f, 162.4116f, 0, 15);
				}
				uParam0->f_309 = _create_volume_sphere_with_custom_name(func_100(uParam0->f_300), 0f, 0f, 0f, 4f, 4f, 4f, "Scenario Blocking");
				uParam0->f_73 = _0x4c39c95ae5db1329(uParam0->f_309, 0, 15);
				_0x18ff3110cf47115d(uParam0->f_67, 1, 0);
				if (!Global_1935630->f_12)
				{
					if (func_101())
					{
						func_102(uParam0, Global_35, "John");
					}
					else
					{
						func_102(uParam0, Global_35, "Arthur");
					}
				}
				func_103(uParam0, 1);
				func_104(uParam0);
				func_105(uParam0->f_300);
				func_106(uParam0->f_300);
				func_96(uParam0, 2);
			}
			break;
		case 2:
			if (func_107(uParam0))
			{
				func_108(uParam0);
				func_109(uParam0);
				func_96(uParam0, 3);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_110(uParam0);
			}
			func_111(uParam0);
			func_112(uParam0);
			if (func_113(Global_36, func_97(uParam0->f_300), 20f, 1))
			{
				func_109(uParam0);
			}
			if (func_114(uParam0))
			{
				func_108(uParam0);
				func_96(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_36(int iParam0, int iParam1)
{
	func_115(iParam0, iParam1);
}

void func_37()
{
	_uilog_clear_cached_objective();
}

void func_38()
{
	if (!func_24(Local_15.f_389, 512))
	{
		if (!is_entity_dead(Local_15.f_387))
		{
			if (has_anim_event_fired(Local_15.f_387, -1260924842))
			{
				if (!func_14(Local_15.f_387, Local_15.f_387, "PLEAD", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
							}
						}
					}
				}
			}
			if (has_anim_event_fired(Local_15.f_387, -369774137))
			{
				if (!func_14(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					if (!func_14(Local_15.f_387, Local_15.f_387, "WHOA_ESCALATED", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_ANGRY_SHOUT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
							}
						}
					}
				}
			}
			if (has_anim_event_fired(Global_35, 381748758))
			{
				func_14(Global_35, Global_35, "TELLS_PED_TO_SHUT_UP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!is_bit_set(Local_15.f_478, iVar0))
			{
				if (Local_15.f_479[iVar0]->f_4 != 2)
				{
					if (!is_string_null_or_empty(Local_15.f_479[iVar0]))
					{
						iVar1 = func_116(Local_15.f_479[iVar0]);
						if (!is_entity_dead(iVar1))
						{
							if (has_anim_event_fired(iVar1, Local_15.f_479[iVar0]->f_4))
							{
								func_14(iVar1, iVar1, Local_15.f_479[iVar0], 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								set_bit(&(Local_15.f_478), iVar0);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_39(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_40(int iParam0, int iParam1)
{
	if (!func_83(iParam0))
	{
		return;
	}
	if (!func_24(iParam0, iParam1))
	{
		Global_1395482->f_2[iParam0] = (Global_1395482->f_2[iParam0] || iParam1);
	}
}

void func_41(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_117(&iVar0);
}

bool func_42(var uParam0)
{
	if (!is_entity_dead(uParam0->f_69))
	{
		func_110(uParam0);
	}
	if (func_46(uParam0->f_306, Global_36))
	{
		set_ped_reset_flag(Global_35, 328, true);
	}
	func_93(uParam0);
	func_111(uParam0);
	func_48(uParam0);
	func_94(uParam0);
	func_112(uParam0);
	if (func_95(uParam0))
	{
		set_all_random_peds_flee_this_frame(player_id());
	}
	if (uParam0->f_60 >= 4)
	{
		func_118(uParam0);
	}
	switch (uParam0->f_60)
	{
		case 0:
			break;
		case 1:
			if (func_119(uParam0))
			{
				set_ped_can_be_targetted(uParam0->f_67, false);
				set_ped_config_flag(uParam0->f_67, 253, true);
				func_120(uParam0, 2);
			}
			break;
		case 2:
			func_121(uParam0);
			remove_all_shocking_events(false);
			func_122(uParam0, 10);
			func_68(&(uParam0->f_364));
			uParam0->f_367 = 0;
			func_55(uParam0->f_306);
			if (_0x916b8e075abc8b4e(uParam0->f_69, 1))
			{
				_0x541e5b41dca45828(uParam0->f_69, 1, 0);
			}
			if (!_0x9c54041bb66bcf9e(uParam0->f_69, uParam0->f_371))
			{
				func_123(uParam0);
			}
			if (func_124(uParam0->f_65) != 0)
			{
				compendium_gang_bounty_captured(func_124(uParam0->f_65));
			}
			func_120(uParam0, 3);
			break;
		case 3:
			if (!is_entity_dead(uParam0->f_69))
			{
				if (func_125(uParam0))
				{
					if (func_126(uParam0))
					{
						task_look_at_entity(uParam0->f_69, Global_35, -1, 0, 51, 0);
						func_68(&(uParam0->f_312));
						func_127(&(uParam0->f_318));
						uParam0->f_361 = 1;
						func_120(uParam0, 4);
					}
				}
				else if (!uParam0->f_367)
				{
					if (func_128(&(uParam0->f_364)) > 10f || !func_43(Global_35, func_44(uParam0->f_300, uParam0->f_65), 30f, 1, 1))
					{
						func_129(uParam0, 2048, 1);
						uParam0->f_367 = 1;
						func_127(&(uParam0->f_364));
					}
				}
			}
			break;
		case 4:
			if (func_130(&(uParam0->f_312)) > 2f || func_131(uParam0))
			{
				if (!func_39(uParam0->f_328, 128))
				{
					if (func_132(uParam0))
					{
						func_133(100, 1);
						func_68(&(uParam0->f_318));
						func_36(&(uParam0->f_328), 128);
					}
				}
				else if (!func_39(uParam0->f_329, 256))
				{
					if (!func_49(Global_35, -76381094) && !func_43(Global_35, func_44(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
					{
						func_50(uParam0);
					}
				}
			}
			if (uParam0->f_63 != 11)
			{
				func_134(uParam0);
			}
			else
			{
				if (func_54(uParam0))
				{
					func_120(uParam0, 5);
				}
				if (!is_entity_in_volume(Global_35, uParam0->f_306, true, 0))
				{
					func_120(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!_does_scenario_point_exist(_0xd04241bbf6d03a5e(Global_35)))
			{
				func_68(&(uParam0->f_318));
				func_120(uParam0, 6);
			}
			break;
		case 6:
			if (_is_anim_scene_finished(uParam0->f_30[0]->f_1, false))
			{
				if (!is_entity_dead(uParam0->f_69))
				{
					if (!func_49(uParam0->f_69, 150319005))
					{
						task_look_at_entity(uParam0->f_69, Global_35, -1, 0, 51, 0);
					}
				}
				func_122(uParam0, 12);
				func_135(uParam0);
				return true;
			}
			break;
	}
	return false;
}

bool func_43(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_136(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

Vector3 func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 78:
			return 2907.757f, 1312.703f, 43.94054f;
		case 5:
			return 2508.101f, -1307.674f, 47.954f;
		case 105:
			return 1361.196f, -1304.287f, 76.761f;
		case 26:
			return -1808.399f, -348.088f, 163.655f;
		case 76:
			return -276.91f, 804.93f, 119.24f;
		case 38:
			if (iParam1 == 18)
			{
				return -762.74f, -1271.27f, 43.84f;
			}
			else
			{
				return -762.751f, -1266.627f, 43.051f;
			}
			break;
		case 115:
			return -5530.877f, -2930.6f, -2.2877f;
	}
	return 0f, 0f, 0f;
}

bool func_45(int iParam0, int iParam1)
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
	if (func_39(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_39(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_39(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_46(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

void func_47(var uParam0)
{
	fVar3 = 15f;
	if (does_entity_exist(uParam0->f_69))
	{
		if (func_45(uParam0->f_69, 0))
		{
			vVar0 = { get_entity_coords(uParam0->f_69, true, false) };
			if ((((((func_137(uParam0) || is_bullet_in_area(get_entity_coords(uParam0->f_69, true, false), 20f, true)) || is_explosion_in_sphere(-1, get_entity_coords(uParam0->f_69, true, false), 20f)) || is_projectile_in_area(vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3), true)) || _0x09d7afd3716da8e1(uParam0->f_69, 5000)) || _0x09d7afd3716da8e1(uParam0->f_67, 5000)) || func_71(player_id(), 1, 0, 1))
			{
				if (is_ped_using_any_scenario(uParam0->f_69))
				{
					_0x802092b07e3b1eea(uParam0->f_69, Global_36, 3);
				}
				clear_ped_tasks(uParam0->f_69, 1, 0);
				task_combat_ped(uParam0->f_69, Global_35, 0, 0);
				set_blocking_of_non_temporary_events(uParam0->f_69, false);
				if (func_139(func_138(uParam0->f_300), 0) && (func_140(func_138(uParam0->f_300)) || !func_141(func_138(uParam0->f_300))))
				{
					func_142(func_138(uParam0->f_300), 0, 1, 0, 0);
				}
				if (!func_71(player_id(), 1, 0, 1))
				{
					if ((uParam0->f_102 == 4 || uParam0->f_102 == 256) || uParam0->f_102 == 8192)
					{
						_0xedfc6c1fd1c964f5(get_player_index(), 2140177766, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						_0xedfc6c1fd1c964f5(get_player_index(), -683250308, 0, 0, 0, 0, 0, 0, 0);
					}
				}
				func_143(0, 0);
				func_36(&(uParam0->f_329), 8388608);
			}
		}
		else
		{
			func_36(&(uParam0->f_329), 8388608);
			_0xedfc6c1fd1c964f5(get_player_index(), 2006449383, 0, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_48(var uParam0)
{
	if (!func_144(1))
	{
		if (func_45(uParam0->f_67, 0))
		{
			if (!func_39(uParam0->f_328, 1) && !is_string_null_or_empty(&(uParam0->f_340)))
			{
				if (_does_anim_scene_exist(uParam0->f_30[1]->f_1))
				{
					if (uParam0->f_300 == 105)
					{
						iVar0 = 5;
					}
					else
					{
						iVar0 = 4;
					}
					if ((_is_anim_scene_started(uParam0->f_30[1]->f_1, false) && _get_anim_scene_time(uParam0->f_30[1]->f_1) > IntToFloat(iVar0)) && _0x3ab6c7b0bb0df4b1(Global_35, uParam0->f_30[1]->f_1))
					{
						if (func_145(&(uParam0->f_103), uParam0->f_340, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 1);
						}
					}
				}
			}
			if (!func_39(uParam0->f_328, 2) && !is_string_null_or_empty(&(uParam0->f_343)))
			{
				if (_does_anim_scene_exist(uParam0->f_30[1]->f_1))
				{
					if (uParam0->f_300 == 105)
					{
						iVar0 = 11;
					}
					else
					{
						iVar0 = 8;
					}
					if (_is_anim_scene_finished(uParam0->f_30[1]->f_1, false) || (_is_anim_scene_started(uParam0->f_30[1]->f_1, false) && _get_anim_scene_time(uParam0->f_30[1]->f_1) > IntToFloat(iVar0)))
					{
						if (func_145(&(uParam0->f_103), uParam0->f_343, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 2);
						}
					}
				}
			}
			if ((!func_39(uParam0->f_328, 64) && !is_string_null_or_empty(&(uParam0->f_349))) && uParam0->f_60 > 1)
			{
				if (is_entity_in_volume(Global_35, uParam0->f_305, true, 0) && !func_146(uParam0->f_67))
				{
					if (func_130(&(uParam0->f_315)) > 3f)
					{
						if (func_145(&(uParam0->f_103), uParam0->f_349, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 64);
						}
					}
				}
			}
			if ((!func_39(uParam0->f_328, 8) && !is_string_null_or_empty(&(uParam0->f_352))) && uParam0->f_60 > 1)
			{
				if (uParam0->f_300 == 26)
				{
					vVar1 = { get_entity_coords(uParam0->f_67, true, false) };
					if (Global_36.f_2 > (vVar1.z + 1f))
					{
						if (func_145(&(uParam0->f_103), uParam0->f_352, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 8);
						}
					}
				}
				else if (!is_entity_in_volume(Global_35, uParam0->f_306, true, 0) || func_147(uParam0->f_300, 0, 0))
				{
					if (func_145(&(uParam0->f_103), uParam0->f_352, 0, -1, 0, 0))
					{
						func_36(&(uParam0->f_328), 8);
					}
				}
			}
		}
		if (!func_39(uParam0->f_328, 4) && func_39(uParam0->f_329, 256))
		{
			if (func_45(uParam0->f_67, 0) && !is_string_null_or_empty(&(uParam0->f_346)))
			{
				if (func_145(&(uParam0->f_103), uParam0->f_346, 0, -1, 0, 0))
				{
					func_36(&(uParam0->f_328), 4);
				}
			}
			else
			{
				if (is_string_null_or_empty(&(uParam0->f_355)))
				{
					MemCopy(&(uParam0->f_355), {func_148(uParam0->f_300)}, 3);
				}
				if (func_145(&(uParam0->f_103), uParam0->f_355, 0, -1, 0, 0))
				{
					func_36(&(uParam0->f_328), 4);
				}
			}
		}
	}
	else
	{
		func_68(&(uParam0->f_315));
	}
}

bool func_49(int iParam0, int iParam1)
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

void func_50(var uParam0)
{
	if (!func_39(uParam0->f_329, 4) && !is_entity_in_volume(Global_35, uParam0->f_306, true, 0))
	{
		func_36(&(uParam0->f_329), 4);
	}
	if (func_45(uParam0->f_69, 0))
	{
		if (!uParam0->f_358)
		{
			if (!func_39(uParam0->f_328, 16) && !func_144(1))
			{
				if (!is_entity_in_volume(Global_35, uParam0->f_306, true, 0) || func_147(uParam0->f_300, 1, 0))
				{
					vVar0 = { func_149(uParam0->f_300) };
					if (is_string_null_or_empty(&vVar0))
					{
						func_36(&(uParam0->f_328), 16);
					}
					else if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
					{
						func_36(&(uParam0->f_328), 16);
					}
				}
			}
		}
		if (func_65(Global_35, uParam0->f_306, 1, 0) && func_150(uParam0->f_69, Global_35, 0, 15f, 0))
		{
			if (func_39(uParam0->f_329, 4) && !func_39(uParam0->f_328, 512))
			{
				if (func_130(&(uParam0->f_318)) >= 2f)
				{
					if (uParam0->f_358 || func_39(uParam0->f_328, 134217728))
					{
						StringCopy(&cVar3, "JAIL_LEFT_MONEY_BEHIND_POST", 32);
						if (func_151(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 512);
						}
					}
					else if (!func_144(1))
					{
						StringCopy(&cVar7, "JFRT", 24);
						MemCopy(&cVar10, {func_152(uParam0->f_300)}, 1);
						StringConCat(&cVar7, &cVar10, 24);
						if (func_145(&(uParam0->f_201), cVar7, 0, -1, 0, 0))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 512);
						}
					}
				}
			}
			else if (!func_39(uParam0->f_328, 256))
			{
				if (func_130(&(uParam0->f_318)) >= 15f)
				{
					if (uParam0->f_358 || func_39(uParam0->f_328, 536870912))
					{
						StringCopy(&cVar11, "JAIL_LEAVE_MONEY_BEHIND", 32);
						if (func_151(uParam0->f_69, &cVar11, 291934926, Global_35, 1, 0, 0, 1))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 256);
						}
					}
					else if (!func_144(1))
					{
						StringCopy(&cVar15, "JRPY", 24);
						MemCopy(&cVar18, {func_152(uParam0->f_300)}, 1);
						StringConCat(&cVar15, &cVar18, 24);
						if (uParam0->f_300 == 38)
						{
							func_36(&(uParam0->f_328), 256);
						}
						else if (func_145(&(uParam0->f_201), cVar15, 0, -1, 0, 0))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 256);
						}
					}
				}
			}
		}
	}
}

void func_51(var uParam0)
{
	if ((!func_69(&(uParam0->f_318)) || func_144(1)) || _does_scenario_point_exist(_0xd04241bbf6d03a5e(Global_35)))
	{
		func_68(&(uParam0->f_318));
	}
	if ((func_45(uParam0->f_69, 0) && func_65(Global_35, uParam0->f_306, 1, 0)) && func_150(uParam0->f_69, Global_35, 0, 15f, 0))
	{
		if (func_130(&(uParam0->f_318)) >= 0.75f)
		{
			iVar1 = func_153(uParam0->f_300);
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				iVar5 = func_154(uParam0->f_300, iVar0);
				if (!func_155(iVar5))
				{
					if (!func_156((*Global_1347702)[iVar5]->f_12, 256) || func_101())
					{
						iVar2++;
					}
					else
					{
						bVar4 = true;
					}
				}
				else
				{
					iVar3++;
				}
				iVar0++;
			}
			if ((iVar2 == 0 && bVar4) || (iVar2 > 0 && iVar3 >= 2))
			{
				func_68(&(uParam0->f_318));
				func_36(&(uParam0->f_328), 32);
				return;
			}
			StringCopy(&cVar6, "JMRE", 24);
			if (iVar2 > 0)
			{
				StringCopy(&cVar6, "JMRE", 24);
			}
			else
			{
				StringCopy(&cVar6, "JFIN", 24);
			}
			MemCopy(&cVar9, {func_152(uParam0->f_300)}, 1);
			StringConCat(&cVar6, &cVar9, 24);
			if (func_145(&(uParam0->f_201), cVar6, 0, -1, 0, 0))
			{
				func_68(&(uParam0->f_318));
				func_36(&(uParam0->f_328), 32);
				if (is_ped_active_in_scenario(uParam0->f_69, 0))
				{
					_0xe7fa07624574b79a(uParam0->f_69, Global_35, 2, 1, 5000f, 1, 0, 0, 0);
				}
				else
				{
					task_look_at_entity(uParam0->f_69, Global_35, 5000, 0, 51, 0);
				}
			}
		}
	}
}

void func_52(var uParam0)
{
	if (uParam0->f_301 != 0)
	{
		func_36(&(uParam0->f_328), 2097152);
		return;
	}
	if (uParam0->f_300 == 38)
	{
		if ((func_130(&(uParam0->f_318)) > 5f && func_39(uParam0->f_328, 32)) && func_157(Global_35, -762.929f, -1265.749f, 43.051f, 0) > 1f)
		{
			open_sequence_task(&iVar0);
			task_follow_nav_mesh_to_coord(0, -762.929f, -1265.749f, 43.051f, 1f, 20000, 0.25f, 0, 16.36f);
			task_look_at_entity(0, uParam0->f_67, -1, 0, 51, 0);
			_task_start_scenario_in_place(0, 830847823, -1, true, 0, -1f, false);
			close_sequence_task(iVar0);
			task_perform_sequence(uParam0->f_69, iVar0);
			clear_sequence_task(&iVar0);
			func_36(&(uParam0->f_328), 2097152);
		}
	}
	else if (uParam0->f_300 == 76)
	{
		if (func_39(uParam0->f_328, 32) && func_157(Global_35, -276.282f, 807.353f, 118.379f, 0) > 1f)
		{
			open_sequence_task(&iVar1);
			task_look_at_entity(0, uParam0->f_67, -1, 0, 51, 0);
			task_start_scenario_at_position(0, 79218445, -276.282f, 807.353f, 118.379f, -60.915f, -1, true, false, 0, -1f, false);
			close_sequence_task(iVar1);
			task_perform_sequence(uParam0->f_69, iVar1);
			clear_sequence_task(&iVar1);
			func_36(&(uParam0->f_328), 2097152);
		}
	}
	else
	{
		func_36(&(uParam0->f_328), 2097152);
	}
}

void func_53(int iParam0, int iParam1)
{
	func_158(iParam0, iParam1);
}

bool func_54(var uParam0)
{
	if (!func_39(uParam0->f_329, 256))
	{
		if (func_159(1) > uParam0->f_304)
		{
			func_117(&(uParam0->f_66));
			func_36(&(uParam0->f_329), 256);
			if (_does_volume_exist(uParam0->f_308))
			{
				func_55(uParam0->f_308);
				func_56(uParam0->f_308);
			}
			if (func_45(uParam0->f_69, 0))
			{
				set_blocking_of_non_temporary_events(uParam0->f_69, false);
			}
			if (func_160())
			{
				func_161(1, 0, 0);
			}
			return true;
		}
	}
	return false;
}

void func_55(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_162(vVar0, 0);
}

void func_56(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_57(int iParam0)
{
}

void func_58(int iParam0)
{
	Global_1395482->f_10 = (Global_1395482->f_10 - (Global_1395482->f_10 && iParam0));
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_109(uParam0);
	}
	Global_1392235->f_4 = 0;
	func_117(&(uParam0->f_66));
	func_117(&(uParam0->f_68));
	func_53(uParam0->f_67, 0);
	func_163();
	func_103(uParam0, 0);
	if ((does_entity_exist(uParam0->f_67) && func_164(uParam0->f_67)) && _0x808077647856de62(uParam0->f_67, 4) == 0)
	{
		_0x18ff3110cf47115d(uParam0->f_67, 4, 1);
	}
	if (uParam0->f_27 != 0)
	{
		_0xd2b9c78537ed5759(uParam0->f_27);
	}
	if (uParam0->f_28 != 0)
	{
		_0xd2b9c78537ed5759(uParam0->f_28);
	}
	if (uParam0->f_29 != 0)
	{
		_0xd2b9c78537ed5759(uParam0->f_29);
	}
	if (does_entity_exist(uParam0->f_4))
	{
		set_object_as_no_longer_needed(&(uParam0->f_4));
	}
	if (does_entity_exist(uParam0->f_6))
	{
		set_object_as_no_longer_needed(&(uParam0->f_6));
	}
	if (does_entity_exist(uParam0->f_10))
	{
		set_object_as_no_longer_needed(&(uParam0->f_10));
	}
	if (does_entity_exist(uParam0->f_12))
	{
		set_object_as_no_longer_needed(&(uParam0->f_12));
	}
	if (does_entity_exist(uParam0->f_8))
	{
		set_object_as_no_longer_needed(&(uParam0->f_8));
	}
	if (is_scenario_group_enabled("RANSACK_BH_REWARD"))
	{
		set_scenario_group_enabled("RANSACK_BH_REWARD", false);
	}
	func_165(uParam0);
	func_166(&(uParam0->f_67), 1, 0, 1);
	func_167(uParam0, 1, 0);
	func_166(&(uParam0->f_69), 1, 1, 1);
	if (func_139(func_138(uParam0->f_300), 0) && (func_140(func_138(uParam0->f_300)) || !func_141(func_138(uParam0->f_300))))
	{
		func_142(func_138(uParam0->f_300), 0, 1, 0, 0);
	}
	func_168(0);
	func_55(uParam0->f_306);
	func_56(uParam0->f_306);
	func_56(uParam0->f_307);
	if (_does_volume_exist(uParam0->f_308))
	{
		func_55(uParam0->f_308);
		func_56(uParam0->f_308);
	}
	func_56(uParam0->f_305);
	func_56(uParam0->f_310);
	func_56(uParam0->f_311);
	if (_does_scenario_point_exist(uParam0->f_371))
	{
		_0x4eddd9e9ca5af985(-318144249);
		_delete_scenario_point(uParam0->f_371);
	}
	if (is_valid_interior(uParam0->f_71))
	{
		unpin_interior(uParam0->f_71);
	}
	if (_0x91a5f9cbebb9d936(uParam0->f_72))
	{
		remove_scenario_blocking_area(uParam0->f_72, false);
	}
	if (_0x91a5f9cbebb9d936(uParam0->f_73))
	{
		remove_scenario_blocking_area(uParam0->f_73, false);
	}
}

void func_60(int iParam0)
{
	func_161(1, iParam0, 0);
}

bool func_61(int iParam0)
{
	if (!func_79(4))
	{
		if (!func_24(iParam0->f_389, 4))
		{
			return true;
		}
	}
	return false;
}

void func_62()
{
	StringCopy(&(Global_1395482->f_11), "", 24);
	StringCopy(&(Global_1395482->f_14), "", 24);
	StringCopy(&(Global_1395482->f_17), "", 24);
	StringCopy(&(Global_1395482->f_76), "", 32);
	func_88();
	func_169();
	func_170();
	Global_1395482->f_115 = 0;
	Global_1395482->f_116 = 0;
	Global_1395482->f_114 = 0;
	Global_1395482->f_94 = 0;
	Global_1395482->f_72 = 0;
	Global_1395482->f_73 = 0;
	Global_1395482->f_74 = 0;
	Global_1395482->f_75 = 0;
	Global_1395482->f_117 = 0;
	Global_1395482->f_93 = 0;
	func_37();
	func_58(4);
}

void func_63(int iParam0)
{
	if (does_entity_exist(iParam0->f_387))
	{
		_0x18ff3110cf47115d(iParam0->f_387, 7, 1);
		_0x18ff3110cf47115d(iParam0->f_387, 4, 1);
		_0x18ff3110cf47115d(iParam0->f_387, 14, 1);
		_0x18ff3110cf47115d(iParam0->f_387, 4, 1);
		_0x18ff3110cf47115d(iParam0->f_387, 1, 1);
		_0x18ff3110cf47115d(iParam0->f_387, 2, 1);
		_0x18ff3110cf47115d(iParam0->f_387, 3, 1);
		_0x18ff3110cf47115d(iParam0->f_387, 16, 1);
	}
}

void func_64(int iParam0, int iParam1)
{
	if (!func_83(iParam0))
	{
		return;
	}
	if (func_24(iParam0, iParam1))
	{
		Global_1395482->f_2[iParam0] = (&Global_1395482->f_2[iParam0] - (Global_1395482->f_2[iParam0] && iParam1));
	}
}

bool func_65(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_66(int iParam0, bool bParam1)
{
	if (func_30(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_67(var uParam0, float fParam1)
{
	if (!func_69(uParam0))
	{
		return false;
	}
	if (func_130(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_68(var uParam0)
{
	func_171(uParam0, 0f);
}

bool func_69(var uParam0)
{
	return func_172(*uParam0, 1);
}

int func_70(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (is_string_null_or_empty(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
		{
			if (!has_entity_clear_los_to_entity_in_front(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_173())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!is_entity_dead(iParam0))
			{
				if (func_174(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!is_entity_dead(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_175(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_68(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_176(iParam0, iParam1, fVar1, bParam13))
				{
					task_look_at_entity(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = network_is_game_in_progress();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					set_bit(&(Var3.f_7), 3);
					set_bit(&(Var3.f_7), 2);
				}
				iVar2 = _0x72e4d1c4639bc465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					_0xb18fec133c7c6c69(iVar2);
				}
			}
			else
			{
				iVar2 = func_177(func_151(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_71(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_178(bParam1, bParam2, bParam3);
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

bool func_72(var uParam0, float fParam1, float fParam2)
{
	if (!does_entity_exist(uParam0->f_67))
	{
		if (func_39(uParam0->f_329, 4194304))
		{
			uParam0->f_64 = 4;
			func_117(&(uParam0->f_68));
			return true;
		}
		return false;
	}
	if (uParam0->f_61 <= 0)
	{
		if (func_146(uParam0->f_67))
		{
			if (Global_40.f_9074.f_4 <= 0)
			{
				uParam0->f_64 = 0;
				func_117(&(uParam0->f_68));
				return true;
			}
			if (!func_69(&(uParam0->f_321)))
			{
				if (func_179(uParam0->f_67))
				{
					func_68(&(uParam0->f_321));
				}
			}
			else if ((!func_179(uParam0->f_67) || _0x61914209c36efddb(uParam0->f_67) == 4) || _0x61914209c36efddb(uParam0->f_67) == 5)
			{
				func_127(&(uParam0->f_321));
			}
			else if (func_130(&(uParam0->f_321)) > 5f)
			{
				uParam0->f_64 = 4;
				func_117(&(uParam0->f_68));
				return true;
			}
		}
		else if (!func_69(&(uParam0->f_321)))
		{
			if (func_179(uParam0->f_67))
			{
				func_68(&(uParam0->f_321));
			}
		}
		else if ((!func_179(uParam0->f_67) || _0x61914209c36efddb(uParam0->f_67) == 4) || _0x61914209c36efddb(uParam0->f_67) == 5)
		{
			func_127(&(uParam0->f_321));
		}
		else if (func_130(&(uParam0->f_321)) > 5f)
		{
			uParam0->f_64 = 4;
			func_117(&(uParam0->f_68));
			return true;
		}
	}
	fVar0 = func_175(Global_35, uParam0->f_67, 1, 1);
	if (uParam0->f_63 != 10)
	{
		if (fVar0 > fParam2)
		{
			if (func_146(uParam0->f_67))
			{
				uParam0->f_64 = 2;
			}
			else if (!_is_ped_hogtied(uParam0->f_67))
			{
				uParam0->f_64 = 3;
			}
			else
			{
				uParam0->f_64 = 1;
			}
			return true;
		}
		else if (fVar0 > fParam1)
		{
			if (!func_39(uParam0->f_329, 16))
			{
				func_129(uParam0, 256, 1);
				func_36(&(uParam0->f_329), 16);
			}
		}
		else if (fVar0 < (fParam1 - 25f))
		{
			if (func_39(uParam0->f_329, 16))
			{
				func_82(&(uParam0->f_329), 16);
				if (func_146(uParam0->f_67) || _is_ped_hogtied(uParam0->f_67))
				{
					func_129(uParam0, 16, 0);
				}
				else
				{
					func_129(uParam0, 4, 0);
				}
			}
		}
	}
	if (func_180(player_id(), 1, 1, 1))
	{
		uParam0->f_64 = 5;
		return true;
	}
	if (does_entity_exist(uParam0->f_69))
	{
		if (func_45(uParam0->f_69, 0))
		{
			if (func_137(uParam0))
			{
				if ((uParam0->f_102 == 4 || uParam0->f_102 == 256) || uParam0->f_102 == 8192)
				{
					_0xedfc6c1fd1c964f5(get_player_index(), 2140177766, 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 5;
				}
				else
				{
					_0xedfc6c1fd1c964f5(get_player_index(), -683250308, 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 6;
				}
				return true;
			}
		}
		else
		{
			_0xedfc6c1fd1c964f5(get_player_index(), 2006449383, 0, 0, 0, 0, 0, 0, 0);
			uParam0->f_64 = 6;
			return true;
		}
	}
	if (uParam0->f_63 == 7 || uParam0->f_63 == 8)
	{
		fVar1 = func_157(Global_35, func_97(uParam0->f_300), 1);
		if (fVar1 > 50f)
		{
			uParam0->f_64 = 7;
			return true;
		}
		else if (fVar1 > 35f)
		{
			if (!func_39(uParam0->f_329, 131072))
			{
				func_36(&(uParam0->f_329), 131072);
				func_129(uParam0, 512, 1);
			}
		}
		else if (fVar1 < 30f)
		{
			if (func_39(uParam0->f_329, 131072))
			{
				func_82(&(uParam0->f_329), 131072);
				func_129(uParam0, 1024, 0);
			}
		}
	}
	if (uParam0->f_63 == 10)
	{
		fVar2 = func_157(Global_35, func_97(uParam0->f_300), 1);
		if (fVar2 > 75f)
		{
			uParam0->f_64 = 7;
			return true;
		}
		else if (fVar2 > 55f)
		{
			if (!func_39(uParam0->f_329, 33554432))
			{
				func_36(&(uParam0->f_329), 33554432);
				func_129(uParam0, 4096, 1);
			}
		}
		else if (fVar2 < 50f)
		{
			if (func_39(uParam0->f_329, 33554432))
			{
				func_82(&(uParam0->f_329), 33554432);
				func_129(uParam0, 2048, 0);
			}
		}
	}
	return false;
}

bool func_73(int iParam0)
{
	if (!does_entity_exist(iParam0->f_387))
	{
		return true;
	}
	iVar0 = func_20(Global_35);
	if (iVar0 == iParam0->f_387)
	{
		return false;
	}
	iVar1 = _get_last_mount(Global_35);
	if (!is_entity_dead(iVar1))
	{
		iVar0 = func_20(iVar1);
		if (iVar0 == iParam0->f_387)
		{
			return false;
		}
	}
	if (func_174(iParam0->f_387, 1, 1) < 50f)
	{
		return false;
	}
	return true;
}

int func_74()
{
	return Global_1897952->f_41;
}

int func_75(int iParam0)
{
	if (!func_181(iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	switch (iParam0)
	{
		case 8:
			return -1;
		case 3:
		case 5:
		case 9:
			iVar0 = 3;
			break;
		case 6:
		case 10:
			iVar0 = 4;
			break;
		case 1:
		case 7:
			iVar0 = 2;
			break;
		case 0:
		case 2:
			iVar0 = 6;
			break;
		case 4:
		case 12:
			iVar0 = 1;
			break;
		case 11:
			iVar0 = 5;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iVar0 = 0;
			break;
	}
	if (func_182(iVar0))
	{
		iVar0 = func_183(iVar0);
	}
	return iVar0;
}

bool func_76(int iParam0)
{
	return false;
}

bool func_77(int iParam0)
{
	if (((func_78(iParam0, 1) && func_78(iParam0, 2)) && func_78(iParam0, 8)) && func_78(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_78(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_79(int iParam0)
{
	return (Global_1395482->f_10 && iParam0) != 0;
}

bool func_80(int iParam0)
{
	if (func_83(iParam0))
	{
		return is_bit_set(Global_1395482->f_117, iParam0);
	}
	return false;
}

Vector3 func_81(int iParam0, char* sParam1)
{
	vVar0 = { iParam0->f_398 };
	StringConCat(&vVar0, "_", 24);
	StringConCat(&vVar0, sParam1, 24);
	return vVar0;
}

void func_82(int iParam0, int iParam1)
{
	func_184(iParam0, iParam1);
}

bool func_83(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

int func_84(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_185(1811977508, 1, 0))
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
			if (func_186(iVar25, 0) && func_187(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_85(var uParam0)
{
	set_ped_config_flag(*uParam0, 186, false);
	set_ped_config_flag(*uParam0, 4, true);
	set_ped_config_flag(*uParam0, 6, true);
	set_ped_config_flag(*uParam0, 278, false);
	set_ped_config_flag(*uParam0, 305, true);
	set_ped_config_flag(*uParam0, 306, true);
	set_ped_config_flag(*uParam0, 21, true);
	set_ped_config_flag(*uParam0, 314, true);
	set_ped_config_flag(*uParam0, 466, true);
	set_ped_config_flag(*uParam0, 388, true);
	set_ped_config_flag(*uParam0, 326, true);
	_0x18ff3110cf47115d(*uParam0, 16, 1);
	set_ped_combat_attributes(*uParam0, 24, false);
	_0x2e5b5d1f1453e08e(*uParam0, 1);
	_0x7fa58ced69405f9a(*uParam0, 3);
	_uiprompt_set_favoured_ped_for_conflict_resolution(*uParam0);
	func_188(*uParam0, 0);
}

void func_86(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (is_string_null_or_empty(sParam1))
	{
		StringCopy(&(uParam0->f_325), "BNTY_NME_GU", 24);
	}
	else
	{
		StringCopy(&(uParam0->f_325), sParam1, 24);
	}
	uParam0->f_300 = uParam2;
	Global_40.f_9074.f_3 = iParam3;
	Global_40.f_9074.f_4 = iParam4;
	uParam0->f_303 = iParam3;
	uParam0->f_302 = iParam4;
	uParam0->f_65 = -1;
	func_82(&(uParam0->f_329), 512);
	func_189(uParam0, bParam5);
}

bool func_87(bool bParam0)
{
	if (bParam0)
	{
		if (Local_15.f_458 >= 3)
		{
			if (Local_15.f_459 >= 3)
			{
				return true;
			}
		}
	}
	if (Local_15.f_456 >= 5)
	{
		if (Local_15.f_457 >= 5)
		{
			return true;
		}
	}
	return false;
}

void func_88()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(Global_1395482->f_20[iVar0], "", 24);
		StringCopy(Global_1395482->f_36[iVar0], "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(Global_1395482->f_52[iVar0], "", 24);
		StringCopy(Global_1395482->f_62[iVar0], "", 24);
		iVar0++;
	}
	Global_1395482->f_115 = 0;
	Global_1395482->f_114 = 0;
	Global_1395482->f_72 = 0;
	Global_1395482->f_73 = 0;
	Global_1395482->f_74 = 0;
	Global_1395482->f_75 = 0;
	func_64(Global_1395482->f_1, 8);
	func_64(Global_1395482->f_1, 16);
}

void func_89(bool bParam0)
{
	if (!is_ped_dead_or_dying(Local_15.f_387, true))
	{
		if (!is_any_speech_playing(Global_35))
		{
			if (!is_any_speech_playing(Local_15.f_387))
			{
				if (!func_69(&(Local_15.f_393)))
				{
					func_68(&(Local_15.f_393));
					if (Local_15.f_498 == 0)
					{
						Local_15.f_499 = 1f;
					}
					else if (bParam0)
					{
						Local_15.f_499 = get_random_float_in_range(5f, 10f);
					}
					else
					{
						Local_15.f_499 = get_random_float_in_range(7.5f, 18.5f);
					}
				}
				else if (func_190())
				{
					if (func_12(Local_15.f_388, 2))
					{
						if (func_67(&(Local_15.f_393), 2f))
						{
							func_191(bParam0);
						}
					}
					else if (func_67(&(Local_15.f_393), Local_15.f_499))
					{
						func_192(bParam0);
					}
				}
			}
		}
	}
}

bool func_90(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_66(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_193(fParam0))
	{
		return false;
	}
	return true;
}

int func_91(bool bParam0)
{
	if (is_entity_dead(Global_35))
	{
		return 0;
	}
	iVar1 = _get_first_entity_ped_is_carrying(Global_35);
	if (!does_entity_exist(iVar1))
	{
		if (func_194(Global_35))
		{
			iVar1 = func_195(Global_35);
		}
		else if (func_196(Global_35))
		{
			iVar1 = func_197(Global_35);
		}
		else if (func_198(Global_35))
		{
			iVar1 = func_199(Global_35);
		}
	}
	if (!does_entity_exist(iVar1))
	{
		if (func_200(0))
		{
			iVar2 = func_201(0);
			if (does_entity_exist(iVar2))
			{
				iVar1 = _get_first_entity_ped_is_carrying(iVar2);
			}
		}
	}
	if (!does_entity_exist(iVar1))
	{
		if (func_200(1))
		{
			iVar3 = func_201(1);
			if (does_entity_exist(iVar3))
			{
				iVar1 = _get_first_entity_ped_is_carrying(iVar3);
			}
		}
	}
	if (!does_entity_exist(iVar1))
	{
		iVar4 = _get_last_mount(Global_35);
		if (does_entity_exist(iVar4))
		{
			iVar1 = _get_first_entity_ped_is_carrying(iVar4);
		}
	}
	if (!does_entity_exist(iVar1))
	{
		return iVar0;
	}
	if (!is_entity_a_ped(iVar1))
	{
		return iVar0;
	}
	iVar0 = get_ped_index_from_entity_index(iVar1);
	if (!is_ped_human(iVar0))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!(decor_exist_on(iVar0, "bIsCriminal") && decor_get_bool(iVar0, "bIsCriminal")))
		{
			return 0;
		}
	}
	return iVar0;
}

bool func_92()
{
	if (func_12(Local_15.f_388, 32))
	{
		return false;
	}
	if (Local_15.f_477 < 0 || Local_15.f_477 >= 3)
	{
		func_15(&(Local_15.f_388), 32);
		return false;
	}
	if (!is_string_null_or_empty(Local_15.f_464[Local_15.f_477]))
	{
		func_14(Global_35, Local_15.f_387, Local_15.f_464[Local_15.f_477], 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	Local_15.f_477++;
	return true;
}

void func_93(var uParam0)
{
	func_202(uParam0);
	switch (uParam0->f_63)
	{
		case 0:
			func_203(uParam0);
			if (is_entity_dead(uParam0->f_67) || _is_ped_hogtied(uParam0->f_67))
			{
				func_122(uParam0, 2);
			}
			else
			{
				bVar0 = get_ped_config_flag(uParam0->f_67, 11, true);
				if (bVar0)
				{
					func_122(uParam0, 1);
				}
			}
			break;
		case 1:
			if (is_entity_dead(uParam0->f_67) || _is_ped_hogtied(uParam0->f_67))
			{
				func_122(uParam0, 2);
			}
			break;
		case 2:
			if (!is_entity_dead(uParam0->f_67) && !_is_ped_hogtied(uParam0->f_67))
			{
				func_122(uParam0, 0);
			}
			_0xc3abcfbc7d74afa5(uParam0->f_67, 19, 1);
			if (func_204(uParam0->f_67, 0))
			{
				if (func_114(uParam0))
				{
					func_122(uParam0, 4);
				}
				else if (func_205(uParam0->f_67))
				{
					if (!func_113(Global_36, func_97(uParam0->f_300), 30f, 1))
					{
						func_122(uParam0, 5);
					}
					else
					{
						func_122(uParam0, 6);
					}
				}
				else
				{
					func_122(uParam0, 3);
				}
			}
			break;
		case 3:
			func_206(uParam0);
			if (!func_204(uParam0->f_67, 0))
			{
				func_122(uParam0, 2);
			}
			else if (func_114(uParam0))
			{
				func_122(uParam0, 4);
			}
			else if (func_205(uParam0->f_67))
			{
				if (!func_113(Global_36, func_97(uParam0->f_300), 30f, 1))
				{
					func_122(uParam0, 5);
				}
				else
				{
					func_109(uParam0);
					func_122(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!func_205(uParam0->f_67))
			{
				func_122(uParam0, 3);
			}
			break;
		case 6:
			if (func_164(uParam0->f_67))
			{
				func_122(uParam0, 3);
			}
			break;
		case 4:
			if (uParam0->f_62 >= 5)
			{
				if (!func_146(uParam0->f_67))
				{
					func_68(&(uParam0->f_364));
					func_122(uParam0, 7);
				}
				else
				{
					func_68(&(uParam0->f_364));
					func_122(uParam0, 8);
				}
			}
			break;
		case 7:
			if (!func_39(uParam0->f_329, 2) && !func_144(1))
			{
				if (uParam0->f_62 == 6 || uParam0->f_62 == 7)
				{
					func_129(uParam0, 1024, 1);
					func_36(&(uParam0->f_329), 2);
				}
			}
			if (!func_146(uParam0->f_67))
			{
				func_207(uParam0);
				if (!func_204(uParam0->f_67, 1))
				{
					func_122(uParam0, 2);
				}
				else if (func_157(Global_35, func_208(uParam0), 0) < 1f && func_209(Global_35, func_208(uParam0)) < 3f)
				{
					func_53(uParam0->f_67, 0);
					func_120(uParam0, 1);
					func_122(uParam0, 12);
				}
			}
			else
			{
				func_68(&(uParam0->f_364));
				func_122(uParam0, 8);
			}
			break;
		case 8:
			if (!func_39(uParam0->f_329, 2) && !func_144(1))
			{
				if (uParam0->f_62 == 6 || uParam0->f_62 == 7)
				{
					func_129(uParam0, 1024, 1);
					func_36(&(uParam0->f_329), 2);
				}
			}
			func_207(uParam0);
			if (func_210(uParam0))
			{
				if (func_211(uParam0))
				{
					func_53(uParam0->f_67, 0);
					func_120(uParam0, 2);
					func_122(uParam0, 12);
				}
			}
			else if (!func_204(uParam0->f_67, 1))
			{
				if (_0x61914209c36efddb(uParam0->f_67) != 6)
				{
					if (func_43(Global_35, func_100(uParam0->f_300), 6.5f, 1, 1))
					{
						_0x18ff3110cf47115d(uParam0->f_67, 7, 0);
						func_53(uParam0->f_67, 0);
						func_120(uParam0, 2);
						func_122(uParam0, 12);
					}
					else
					{
						func_122(uParam0, 9);
					}
				}
			}
			break;
		case 9:
			if (func_204(uParam0->f_67, 1))
			{
				if (is_entity_dead(uParam0->f_67))
				{
					func_122(uParam0, 8);
				}
				else
				{
					func_122(uParam0, 7);
				}
			}
			break;
		case 12:
			break;
	}
}

void func_94(var uParam0)
{
	if (!func_39(uParam0->f_329, 16777216))
	{
		if (!func_146(uParam0->f_67))
		{
			if (_0x913d04a5176f84c9(uParam0->f_67))
			{
				if (!_0x0ccfe72b43c9cf96(uParam0->f_67))
				{
					if (_get_entity_carry_config(uParam0->f_67) != -2146271366)
					{
						task_carriable(uParam0->f_67, -2146271366, 0, 0, 9);
						func_36(&(uParam0->f_329), 16777216);
					}
				}
			}
		}
	}
	else if (get_ped_config_flag(uParam0->f_67, 11, true) == 1)
	{
		set_ped_config_flag(uParam0->f_67, 11, false);
	}
}

bool func_95(var uParam0)
{
	if (!Global_1935630->f_12)
	{
		if (func_212(uParam0->f_300) && func_213(uParam0->f_300))
		{
			return true;
		}
	}
	return false;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_59 = iParam1;
}

Vector3 func_97(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2910.89f, 1310.44f, 44.38f;
		case 5:
			return 2506.39f, -1308.93f, 47.95f;
		case 105:
			return 1359.44f, -1304.92f, 76.76f;
		case 26:
			return -1808.58f, -350.06f, 163.65f;
		case 76:
			return -275.78f, 804.02f, 118.37f;
		case 38:
			return -757.78f, -1269.13f, 43.14f;
		case 115:
			return -5528.903f, -2929.261f, -2.2833f;
	}
	return 0f, 0f, 0f;
}

char* func_98()
{
	return "unnamed";
}

int func_99(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_214(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

Vector3 func_100(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2908.76f, 1304.58f, 43.91f;
		case 5:
			return 2483.26f, -1303.78f, 48.88f;
		case 105:
			return 1362.846f, -1294.084f, 75.7035f;
		case 26:
			return -1808.76f, -342.45f, 163.81f;
		case 76:
			return -277.76f, 816.93f, 118.15f;
		case 38:
			return -768.61f, -1277.13f, 42.56f;
		case 115:
			return -5533.509f, -2932.444f, -2.8992f;
	}
	return 0f, 0f, 0f;
}

bool func_101()
{
	if (func_215() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_102(var uParam0, int iParam1, char* sParam2)
{
	func_216(&(uParam0->f_103), iParam1, sParam2, 1);
}

void func_103(var uParam0, bool bParam1)
{
	iVar0 = -1;
	switch (uParam0->f_300)
	{
		case 76:
			iVar0 = 4;
			break;
		case 26:
			iVar0 = 473;
			break;
		case 105:
			iVar0 = 71;
			break;
		case 5:
			break;
		case 38:
			iVar0 = 510;
			break;
		case 115:
			iVar0 = 349;
			break;
	}
	if (iVar0 != -1)
	{
		if (bParam1)
		{
			func_217(iVar0);
			func_36(&(uParam0->f_329), 16384);
		}
		else if (func_39(uParam0->f_329, 16384))
		{
			func_218(iVar0);
		}
	}
}

void func_104(var uParam0)
{
	iVar0 = func_219(uParam0->f_300);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_220(uParam0->f_300, iVar1);
		iVar1++;
	}
	func_99(uParam0->f_306, "volSheriffOffice", 1, 0, 0, 0, -1082130432);
	func_168(1);
}

void func_105(int iParam0)
{
	if (iParam0 == 105)
	{
		func_221(349074475, 1);
		func_221(1614494720, 1);
	}
	else if (iParam0 == 26)
	{
	}
	else if (iParam0 == 76)
	{
		func_221(1988748538, 1);
	}
	else if (iParam0 == 5)
	{
	}
	else if (iParam0 == 38)
	{
	}
	else if (iParam0 == 115)
	{
	}
}

void func_106(int iParam0)
{
	if (iParam0 == 26)
	{
		func_221(1821044729, 1);
	}
	else if (iParam0 == 76)
	{
		func_222(535323366, 0, 1f, 0, 1, 0, 0, 0);
	}
}

bool func_107(var uParam0)
{
	iVar0 = 1;
	request_model(uParam0->f_14, false);
	if (!has_model_loaded(uParam0->f_14))
	{
		iVar0 = 0;
	}
	request_model(uParam0->f_19, false);
	if (!has_model_loaded(uParam0->f_19))
	{
		iVar0 = 0;
	}
	if (uParam0->f_5 != 0)
	{
		request_model(uParam0->f_5, false);
		if (!has_model_loaded(uParam0->f_5))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_7 != 0)
	{
		request_model(uParam0->f_7, false);
		if (!has_model_loaded(uParam0->f_7))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_11 != 0)
	{
		request_model(uParam0->f_11, false);
		if (!has_model_loaded(uParam0->f_11))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_9 != 0)
	{
		request_model(uParam0->f_9, false);
		if (!has_model_loaded(uParam0->f_9))
		{
			iVar0 = 0;
		}
	}
	switch (uParam0->f_300)
	{
		case 76:
			sVar1 = "BHJVAAU";
			break;
		case 26:
			sVar1 = "BHJSTAU";
			break;
		case 105:
			sVar1 = "BHJROAU";
			break;
		case 5:
			sVar1 = "BHJSDAU";
			break;
		case 38:
			sVar1 = "BHJBWAU";
			break;
		case 115:
			sVar1 = "BHJTWAU";
			break;
		case 78:
			sVar1 = "";
			break;
	}
	if (!is_string_null_or_empty(sVar1))
	{
		_text_database_request(sVar1);
		if (!_text_database_has_loaded(sVar1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_108(var uParam0)
{
	iVar1 = 8;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = func_223(uParam0->f_300, iVar2);
		if (func_224(iVar0) && func_225(iVar0))
		{
			func_221(iVar0, 1);
		}
		iVar2++;
	}
}

void func_109(var uParam0)
{
	if (uParam0->f_375 > 0 && has_anim_dict_loaded("script_proc@bounty@riding_punch"))
	{
		remove_anim_dict("script_proc@bounty@riding_punch");
	}
	if (func_226(uParam0->f_375.f_1))
	{
		func_227(&(uParam0->f_375.f_1), 1, 1);
	}
	if (func_69(&(uParam0->f_375.f_3)))
	{
		func_127(&(uParam0->f_375.f_3));
	}
	if (uParam0->f_375 != 0)
	{
		uParam0->f_375 = 0;
	}
}

void func_110(var uParam0)
{
	if (is_entity_dead(uParam0->f_69) && uParam0->f_62 != 0)
	{
		func_228(uParam0, 0);
	}
	if ((uParam0->f_301 == 2 && _does_scenario_point_exist(uParam0->f_371)) && _0x9c54041bb66bcf9e(uParam0->f_69, uParam0->f_371))
	{
		set_ped_can_play_gesture_anims(uParam0->f_69, 0, 1);
	}
	switch (uParam0->f_62)
	{
		case 0:
			if (func_229(uParam0))
			{
				func_228(uParam0, 1);
			}
			break;
		case 1:
			if (uParam0->f_25)
			{
				if (!is_entity_dead(uParam0->f_69))
				{
					if (!_does_scenario_point_exist(uParam0->f_371))
					{
						if (!does_entity_exist(uParam0->f_4))
						{
							func_230(uParam0);
						}
						else
						{
							if (uParam0->f_301 == 0)
							{
								Var4 = { func_231(uParam0->f_30[0]->f_1, "Sheriff", uParam0->f_30[0]->f_9) };
								uParam0->f_371 = func_232(-318144249, Var4, Var4.f_3, 0, 0, 0);
							}
							else
							{
								uParam0->f_371 = create_scenario_point_attached_to_entity(uParam0->f_4, -318144249, 0.0086562f, 0.0409636f, 0.5f, 179.9999f, 0, 0, 1);
							}
							_request_scenario_type(-318144249, 15, 0, 0);
							_0xe69fda40aac3efc0(uParam0->f_371, 0);
						}
					}
					else
					{
						if (_does_anim_scene_exist(uParam0->f_30[0]->f_1))
						{
							Var0 = { func_231(uParam0->f_30[0]->f_1, "Chair", uParam0->f_30[0]->f_9) };
							func_233(uParam0->f_4, Var0, 2, 1073741824);
							if (does_entity_exist(uParam0->f_10))
							{
								Var8 = { func_231(uParam0->f_30[0]->f_1, "Book", uParam0->f_30[0]->f_9) };
								func_233(uParam0->f_10, Var8, 0, 1073741824);
							}
						}
						func_123(uParam0);
						func_228(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (!_does_scenario_point_exist(uParam0->f_371))
			{
				func_228(uParam0, 1);
			}
			if (func_114(uParam0) && func_69(&(uParam0->f_372)))
			{
				if (func_130(&(uParam0->f_372)) > 1f)
				{
					func_234(uParam0);
					func_68(&(uParam0->f_372));
					func_228(uParam0, 3);
				}
			}
			else
			{
				func_68(&(uParam0->f_372));
			}
			break;
		case 3:
			if (func_114(uParam0))
			{
				if (func_130(&(uParam0->f_372)) > 1f || func_235(uParam0))
				{
					if (uParam0->f_360)
					{
						func_228(uParam0, 4);
					}
					else
					{
						func_228(uParam0, 5);
					}
				}
			}
			break;
		case 4:
			if (func_114(uParam0))
			{
				if (func_236(uParam0))
				{
					func_228(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_114(uParam0))
			{
				if (func_237(uParam0))
				{
					func_68(&(uParam0->f_372));
					func_228(uParam0, 6);
				}
			}
			break;
		case 6:
			if (func_130(&(uParam0->f_372)) > 1f)
			{
				if (uParam0->f_361 && !_is_anim_scene_started(uParam0->f_30[0]->f_1, false))
				{
					if (_0x916b8e075abc8b4e(uParam0->f_69, 1))
					{
						if (uParam0->f_301 == 0)
						{
							_0x541e5b41dca45828(uParam0->f_69, 1, 0);
							_task_start_scenario_in_place(uParam0->f_69, 1904532698, -1, true, 0, -1f, false);
							task_look_at_entity(uParam0->f_69, Global_35, -1, 0, 51, 0);
						}
						else
						{
							_0x541e5b41dca45828(uParam0->f_69, 1, 0);
						}
					}
					func_228(uParam0, 7);
				}
			}
			break;
	}
}

void func_111(var uParam0)
{
	if (is_entity_in_volume(Global_35, uParam0->f_306, false, 0))
	{
		set_ped_max_move_blend_ratio(Global_35, 1.5f);
		disable_control_action(0, -640622144, false);
	}
	if (uParam0->f_61 > 0)
	{
		if (!_0x808077647856de62(uParam0->f_67, 4) && _0x3ab6c7b0bb0df4b1(Global_35, -1))
		{
			_0x18ff3110cf47115d(uParam0->f_67, 4, 1);
		}
	}
	else if (func_164(uParam0->f_67))
	{
		if (is_entity_in_volume(uParam0->f_67, uParam0->f_306, false, 0))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		if (func_238(uParam0, bVar0))
		{
			if (!_0x808077647856de62(uParam0->f_67, 4))
			{
				_0x18ff3110cf47115d(uParam0->f_67, 4, 1);
			}
		}
		else if (_0x808077647856de62(uParam0->f_67, 4))
		{
			_0x18ff3110cf47115d(uParam0->f_67, 4, 0);
		}
		if (uParam0->f_63 == 8)
		{
			if (_0x808077647856de62(uParam0->f_67, 14))
			{
				_0x18ff3110cf47115d(uParam0->f_67, 14, 0);
			}
		}
	}
}

int func_112(var uParam0)
{
	if (uParam0->f_25)
	{
		return 1;
	}
	if (func_239(uParam0))
	{
		uParam0->f_25 = 1;
	}
	return 0;
}

bool func_113(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return vdist2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_136(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_114(var uParam0)
{
	if (_does_volume_exist(uParam0->f_307))
	{
		if (is_entity_in_volume(uParam0->f_67, uParam0->f_307, false, 0))
		{
			return true;
		}
	}
	else if (is_entity_in_volume(uParam0->f_67, uParam0->f_306, false, 0))
	{
		return true;
	}
	return false;
}

void func_115(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_116(var uParam0)
{
	switch (uParam0->f_5)
	{
		case 0:
			return Global_35;
		case 1:
			return Local_15.f_387;
		default:
			break;
	}
	return 0;
}

void func_117(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_118(var uParam0)
{
	if (uParam0->f_301 == 0)
	{
		if (((_is_anim_scene_finished(uParam0->f_30[0]->f_1, false) && !func_49(uParam0->f_69, 993674639)) && !func_49(uParam0->f_69, -1098463898)) && !func_49(uParam0->f_69, -76381094))
		{
			if (uParam0->f_300 == 105)
			{
				if (func_157(Global_35, 1360.928f, -1305.943f, 76.761f, 0) > 1.5f)
				{
					task_start_scenario_at_position(uParam0->f_69, -251168298, 1360.928f, -1305.943f, 76.761f, -15.235f, -1, true, false, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", -1f, false);
				}
				else
				{
					task_start_scenario_at_position(uParam0->f_69, -251168298, 1357.958f, -1304.813f, 76.761f, -20.879f, -1, true, false, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", -1f, false);
				}
			}
			else
			{
				_task_start_scenario_in_place(uParam0->f_69, 1904532698, -1, true, 0, -1f, false);
			}
			task_look_at_entity(uParam0->f_69, Global_35, -1, 0, 51, 0);
		}
	}
	else if (!_0x9c54041bb66bcf9e(uParam0->f_69, uParam0->f_371))
	{
		if (_0x005e6f28dd7ed58d(uParam0->f_30[0]->f_1, "Sheriff") || _0xb89fcff19dafff28(uParam0->f_30[0]->f_1, "Sheriff"))
		{
			func_123(uParam0);
		}
	}
}

bool func_119(var uParam0)
{
	switch (uParam0->f_61)
	{
		case 0:
			if (uParam0->f_25)
			{
				func_240(Global_35, 0);
				func_117(&(uParam0->f_66));
				set_player_control(player_id(), false, 256, false);
				task_enter_anim_scene(Global_35, uParam0->f_30[1]->f_1, func_241(uParam0->f_300), uParam0->f_30[1]->f_9, 1069379748, 0, 256, 20000, -1082130432);
				func_242(uParam0, 2);
				func_242(uParam0, 1);
			}
			break;
		case 1:
			set_ped_reset_flag(Global_35, 108, true);
			disable_control_action(0, -1404316431, false);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_243(uParam0->f_300);
			if (get_script_task_status(Global_35, 1369124074, true) != 0 && get_script_task_status(Global_35, 1369124074, true) != 1)
			{
				_0x18ff3110cf47115d(uParam0->f_67, 2, 0);
				start_anim_scene(uParam0->f_30[1]->f_1);
				func_242(uParam0, 2);
			}
			break;
		case 2:
			if (!uParam0->f_362)
			{
				if (!is_entity_on_screen(uParam0->f_69))
				{
					_0x541e5b41dca45828(uParam0->f_69, 1, 0);
					task_clear_look_at(uParam0->f_69);
					uParam0->f_362 = 1;
				}
			}
			set_ped_reset_flag(Global_35, 108, true);
			disable_control_action(0, -1404316431, false);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (_0xb89fcff19dafff28(uParam0->f_30[1]->f_1, func_241(uParam0->f_300)))
			{
				func_244(12, 0, 0, 0, 0, 0, 1065353216, 0);
				func_242(uParam0, 5);
			}
			break;
		case 5:
			_0xdd1232b332cbb9e7(3, 1, 0);
			clear_ped_tasks(Global_35, 1, 0);
			set_player_control(player_id(), true, 0, false);
			return true;
	}
	return false;
}

void func_120(var uParam0, int iParam1)
{
	uParam0->f_60 = iParam1;
}

void func_121(var uParam0)
{
	iVar0 = uParam0->f_65;
	if (iVar0 != -1)
	{
		if (func_146(uParam0->f_67))
		{
			func_245(iVar0, 1);
		}
		else
		{
			func_246(iVar0, 1);
		}
	}
	_0x73bad7b2f2db50de(player_id(), func_247(uParam0->f_300, 1, 1));
	if (!func_146(uParam0->f_67))
	{
		_0x18ff3110cf47115d(uParam0->f_67, 7, 0);
		_0x18ff3110cf47115d(uParam0->f_67, 1, 0);
		_0x18ff3110cf47115d(uParam0->f_67, 2, 0);
		set_ped_keep_task(uParam0->f_67, true);
		iVar1 = get_entity_model(uParam0->f_67);
		func_249(iVar1, uParam0->f_300, func_248(uParam0->f_300));
		func_250(iVar1, uParam0->f_300, uParam0->f_299);
		if (!func_251(&(uParam0->f_67)))
		{
			func_252(iVar1, uParam0->f_300);
		}
		set_ped_config_flag(uParam0->f_67, 4, false);
		set_ped_config_flag(uParam0->f_67, 6, false);
		func_36(&(uParam0->f_329), 2048);
	}
}

void func_122(var uParam0, int iParam1)
{
	if (uParam0->f_63 != iParam1)
	{
		uParam0->f_63 = iParam1;
		func_82(&(uParam0->f_329), 2);
		switch (iParam1)
		{
			case 0:
				if (func_45(uParam0->f_67, 0))
				{
					stop_ped_speaking(uParam0->f_67, false);
				}
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 4, 1);
				break;
			case 1:
				if (func_45(uParam0->f_67, 0))
				{
					stop_ped_speaking(uParam0->f_67, false);
				}
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 8, 1);
				break;
			case 2:
				if (func_45(uParam0->f_67, 0))
				{
					if (!func_39(uParam0->f_329, 67108864))
					{
						stop_ped_speaking(uParam0->f_67, true);
					}
				}
				if (!func_253(Global_35))
				{
					func_109(uParam0);
				}
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				_0x7fa58ced69405f9a(uParam0->f_67, 3);
				func_129(uParam0, 16, 1);
				break;
			case 3:
				func_117(&(uParam0->f_68));
				func_254(uParam0, 3);
				func_129(uParam0, 32, 1);
				break;
			case 5:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_255(uParam0);
				func_129(uParam0, 64, 0);
				break;
			case 6:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 128, 0);
				break;
			case 4:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				break;
			case 7:
				func_117(&(uParam0->f_68));
				func_254(uParam0, 7);
				func_129(uParam0, 1024, 0);
				break;
			case 8:
				func_117(&(uParam0->f_68));
				func_254(uParam0, 8);
				func_129(uParam0, 1024, 0);
				break;
			case 9:
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 16, 1);
				break;
			case 10:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_129(uParam0, 2048, 1);
				if (does_entity_exist(uParam0->f_6))
				{
					uParam0->f_66 = func_256(408396114, get_entity_coords(uParam0->f_6, true, false), 1);
				}
				else
				{
					uParam0->f_66 = func_256(408396114, func_44(uParam0->f_300, uParam0->f_65), 1);
				}
				break;
			case 11:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_129(uParam0, 8192, 1);
				uParam0->f_66 = func_257(408396114, uParam0->f_8, 1);
				set_blip_name_from_text_file(uParam0->f_66, "BNTY_B_RWRD");
				break;
			case 12:
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_37();
				break;
		}
	}
}

void func_123(var uParam0)
{
	switch (uParam0->f_301)
	{
		case 1:
		case default:
			_task_use_scenario_point(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", -1, false, true, 0, false, -1f, false);
			break;
		case 0:
			_task_use_scenario_point(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_STANDING_DESK", -1, false, true, 0, false, -1f, false);
			break;
		case 2:
			_task_use_scenario_point(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_SIT_WRITING", -1, false, true, 0, false, -1f, false);
			break;
	}
	if (does_entity_exist(uParam0->f_12))
	{
		delete_object(&(uParam0->f_12));
	}
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 20:
			return 1033509606;
		case 17:
		case 18:
			return 529020251;
		case 12:
		case 154:
			return 1143368244;
		case 153:
			return -2100600611;
	}
	return 0;
}

bool func_125(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_310))
	{
		vVar0 = { uParam0->f_1 };
		uParam0->f_310 = _create_volume_cylinder_with_custom_name(vVar0.x, vVar0.y, (vVar0.z + 1f), 0f, 0f, 0f, 4.5f, 4.5f, 2.2f, "BH_RewardLineTriggerFar");
	}
	if (!_does_volume_exist(uParam0->f_311))
	{
		vVar3 = { uParam0->f_1 };
		uParam0->f_311 = _create_volume_cylinder_with_custom_name(vVar3.x, vVar3.y, (vVar3.z + 1f), 0f, 0f, 0f, 3f, 3f, 2.2f, "BH_RewardLineTriggerClose");
	}
	if (_0xf256a75210c5c0eb(uParam0->f_306, Global_36))
	{
		if (_0xf256a75210c5c0eb(uParam0->f_310, Global_36) && is_entity_on_screen(uParam0->f_69))
		{
			return true;
		}
		else if (_0xf256a75210c5c0eb(uParam0->f_311, Global_36))
		{
			return true;
		}
	}
	return false;
}

bool func_126(var uParam0)
{
	if (_0x54b187f111d9c6f8(uParam0->f_69, 0))
	{
		return false;
	}
	if (!_does_anim_scene_exist(uParam0->f_30[0]->f_1))
	{
		return true;
	}
	if (!is_entity_dead(uParam0->f_69) && does_entity_exist(uParam0->f_6))
	{
		iVar0 = func_258(uParam0->f_6, Global_35, 1060437492);
		iVar1 = func_258(uParam0->f_6, Global_35, 1f);
		StringCopy(&cVar5, "PB", 24);
		switch (uParam0->f_301)
		{
			case 1:
			case default:
				StringCopy(&cVar2, "_RELAX", 24);
				break;
			case 0:
				StringCopy(&cVar2, "_STAND", 24);
				break;
			case 2:
				StringCopy(&cVar2, "_WRITE", 24);
				break;
		}
		StringConCat(&cVar5, &cVar2, 24);
		switch (uParam0->f_300)
		{
			case 76:
				StringConCat(&cVar5, "_FL", 24);
				break;
			case 26:
			case 38:
			case 78:
				if (iVar0 == 0)
				{
					StringConCat(&cVar5, "_FR", 24);
				}
				else
				{
					StringConCat(&cVar5, "_R", 24);
				}
				break;
			case 105:
				StringConCat(&cVar5, "_R", 24);
				break;
			case 5:
				if (iVar1 == 2)
				{
					StringConCat(&cVar5, "_R", 24);
				}
				else
				{
					StringConCat(&cVar5, "_L", 24);
				}
				break;
			case 115:
				if (iVar0 == 0)
				{
					StringConCat(&cVar5, "_FL", 24);
				}
				else
				{
					StringConCat(&cVar5, "_L", 24);
				}
				break;
		}
		if (uParam0->f_301 == 0)
		{
			StringConCat(&cVar5, "_LOOK", 24);
		}
		else
		{
			StringConCat(&cVar5, &cVar2, 24);
		}
		_0xdf7b5144e25cd3fe(uParam0->f_30[0]->f_1, &cVar5);
		if (_0x23e33cb9f4a3f547(uParam0->f_30[0]->f_1, &cVar5))
		{
			if (uParam0->f_301 == 2 && !does_entity_exist(uParam0->f_12))
			{
				uParam0->f_12 = _0x4d0d2e3d8bc000eb(uParam0->f_69, "p_pen01x", 1);
				set_anim_scene_entity(uParam0->f_30[0]->f_1, "PEN", uParam0->f_12, 0);
			}
			if (!does_entity_exist(uParam0->f_8))
			{
				vVar8 = { func_231(uParam0->f_30[0]->f_1, "MONEY", &cVar5) };
				uParam0->f_8 = create_object(uParam0->f_9, vVar8, true, true, false, false, true);
				set_anim_scene_entity(uParam0->f_30[0]->f_1, "MONEY", uParam0->f_8, 0);
				_0xdfa1237f5228263f(uParam0->f_8, Global_35);
			}
			start_anim_scene(uParam0->f_30[0]->f_1);
			_set_anim_scene_playback_list_bool(uParam0->f_30[0]->f_1, &cVar5, true);
			set_anim_scene_bool(uParam0->f_30[0]->f_1, "BASE_BOOL", true, false);
			return true;
		}
	}
	return false;
}

void func_127(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_128(var uParam0)
{
	if (!func_69(uParam0))
	{
		return 0f;
	}
	if (func_259(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_260() - uParam0->f_1);
}

void func_129(var uParam0, int iParam1, bool bParam2)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (bParam2)
	{
		if (func_39(uParam0->f_330, iParam1))
		{
			bParam2 = false;
		}
	}
	switch (iParam1)
	{
		case 2:
			if (func_261(uParam0->f_65))
			{
				sVar0 = "BNTY_O_FLCTA";
			}
			else if (Global_40.f_9074.f_4 == 0)
			{
				sVar0 = "BNTY_O_LCTEA";
			}
			else
			{
				sVar0 = "BNTY_O_LCTED";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(_create_var_string(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 4:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (Global_40.f_9074.f_4 == 0)
			{
				sVar0 = "BNTY_O_CTREA";
			}
			else
			{
				sVar0 = "BNTY_O_CTRED";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(_create_var_string(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 8:
			sVar0 = "BNTY_O_HOGA";
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(_create_var_string(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 16:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(_create_var_string(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 64:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			sVar0 = "BNTY_O_MOUNT";
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(_create_var_string(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 128:
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(_create_var_string(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 32:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_RTA";
			}
			else
			{
				sVar0 = "BNTY_O_RTD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), func_264(uParam0->f_300));
			if (bParam2)
			{
				func_265(sVar0, uParam0);
			}
			break;
		case 256:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (func_45(uParam0->f_67, 2) && ((is_ped_fleeing(uParam0->f_67) || is_ped_on_mount(uParam0->f_67)) || is_ped_in_any_vehicle(uParam0->f_67, false)))
			{
				sVar0 = "BNTY_W_DIST_E";
			}
			else
			{
				sVar0 = "BNTY_W_DIST_R";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(_create_var_string(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 512:
			sVar0 = "BNTY_W_RJL";
			func_262(uParam0, bParam2, sVar0, func_264(uParam0->f_300), 0);
			if (bParam2)
			{
				func_263(_create_var_string(10, sVar0, func_264(uParam0->f_300)), 7500, 0, 0, 0, 1);
			}
			break;
		case 1024:
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_JLA";
			}
			else if (func_210(uParam0))
			{
				sVar0 = "BNTY_O_JLW";
			}
			else
			{
				sVar0 = "BNTY_O_JLD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(_create_var_string(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 2048:
			if (func_266(uParam0))
			{
				sVar0 = "BNTY_O_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_O_SHRF";
			}
			func_262(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_267(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 4096:
			if (func_266(uParam0))
			{
				sVar0 = "BNTY_R_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_R_SHRF";
			}
			func_262(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_267(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 8192:
			sVar0 = "BNTY_O_RWRD";
			func_262(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_267(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
	}
	if (bParam2)
	{
		func_36(&(uParam0->f_330), iParam1);
	}
}

float func_130(var uParam0)
{
	if (!func_69(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_259(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_260() - uParam0->f_1);
}

bool func_131(var uParam0)
{
	return false;
}

bool func_132(var uParam0)
{
	if (uParam0->f_65 == 14)
	{
		return true;
	}
	vVar0 = { func_268(uParam0, uParam0->f_383) };
	if (!is_string_null_or_empty(&vVar0))
	{
		if (!func_144(1))
		{
			if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
			{
				uParam0->f_383++;
				vVar0 = { func_268(uParam0, uParam0->f_383) };
				if (is_string_null_or_empty(&vVar0))
				{
					return true;
				}
			}
		}
	}
	else if (uParam0->f_358 || func_39(uParam0->f_328, 268435456))
	{
		if (func_146(uParam0->f_67))
		{
			StringCopy(&cVar3, "BOUNTY_TURN_IN_DEAD", 32);
		}
		else
		{
			StringCopy(&cVar3, "BOUNTY_TURN_IN_ALIVE", 32);
		}
		if (func_151(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
		{
			return true;
		}
	}
	else
	{
		StringCopy(&cVar7, "JPAY", 24);
		MemCopy(&cVar10, {func_152(uParam0->f_300)}, 1);
		StringConCat(&cVar7, &cVar10, 24);
		if (func_145(&(uParam0->f_201), cVar7, 0, -1, 0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_133(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	if (func_269(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_270())
	{
		iVar1 = 0;
	}
	func_271(iParam0, iVar1);
}

int func_134(var uParam0)
{
	if ((!_does_anim_scene_exist(uParam0->f_30[0]->f_1) || _is_anim_scene_finished(uParam0->f_30[0]->f_1, false)) || func_272(uParam0))
	{
		if (func_146(uParam0->f_67))
		{
			Global_1392235 = 0;
		}
		else
		{
			Global_1392235 = 1;
		}
		set_scenario_group_enabled("RANSACK_BH_REWARD", true);
		func_273();
		uParam0->f_304 = func_159(1);
		func_122(uParam0, 11);
		return 1;
	}
	return 0;
}

void func_135(var uParam0)
{
	iVar0 = func_274(0, uParam0->f_300, 2, 0);
	func_275(iVar0);
	if (func_101())
	{
		iVar1 = func_276(iVar0);
		func_277(iVar0, iVar1 + 1);
	}
	else
	{
		iVar1 = func_278(iVar0);
		func_279(iVar0, iVar1 + 1);
	}
	func_281(iVar0, func_280());
	Global_1392235->f_4 = 0;
	if (func_39(uParam0->f_329, 512))
	{
		if (func_185(func_282(uParam0->f_65), 1, 0))
		{
			func_283(func_282(uParam0->f_65), 1, 0, -142743235, 0);
		}
	}
}

float func_136(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_137(var uParam0)
{
	if (func_284(uParam0->f_69, 0, &(uParam0->f_74), &(uParam0->f_102), 0, 0))
	{
		if (uParam0->f_102 == 2)
		{
			return true;
		}
		else if (uParam0->f_102 == 4)
		{
			return true;
		}
		else if (uParam0->f_102 == 8)
		{
			return true;
		}
		else if (uParam0->f_102 == 8192)
		{
			if (func_285(uParam0->f_69, &(uParam0->f_74), 1))
			{
				return true;
			}
		}
		else if (uParam0->f_102 == 64)
		{
			return true;
		}
		else if (uParam0->f_102 == 256)
		{
			if (func_65(Global_35, uParam0->f_306, 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_138(int iParam0)
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

bool func_139(int iParam0, bool bParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_286(iParam0))
	{
		return false;
	}
	if (!func_140(iParam0) && bParam1)
	{
		return false;
	}
	return func_287(iParam0, 1);
}

bool func_140(int iParam0)
{
	if (!func_286(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_141(int iParam0)
{
	if (!func_286(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_142(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_286(iParam0))
	{
		return;
	}
	if (!func_287(iParam0, 1))
	{
		return;
	}
	if (!func_287(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_140(iParam0)) && func_141(iParam0))
	{
		return;
	}
	func_288(iParam0, 1);
	func_289(iParam0);
	if (func_291(func_290(iParam0)))
	{
		iVar0 = func_292(iParam0);
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
		func_288(iParam0, 16);
	}
	if (func_287(iParam0, 128) && !bParam3)
	{
		func_293(iParam0, 0);
	}
}

void func_143(int iParam0, int iParam1)
{
	func_161(1, iParam0, iParam1);
}

bool func_144(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

bool func_145(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_294(cParam1, cParam0);
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

bool func_146(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return false;
	}
	if (get_ped_config_flag(iParam0, 11, false))
	{
		return false;
	}
	return true;
}

bool func_147(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	if (bParam2)
	{
		fVar0 = 4f;
	}
	switch (iParam0)
	{
		case 76:
			if (func_157(Global_35, -275.43f, 802.52f, 118.41f, 0) < (1f + fVar0) || func_157(Global_35, -276.39f, 812.02f, 118.42f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 78:
			if (func_157(Global_35, 2911.362f, 1310.298f, 43.94069f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 26:
			if (!bParam1 && func_157(Global_35, -1806.44f, -350.96f, 163.65f, 0) < (1f + fVar0))
			{
				return true;
			}
			if (func_157(Global_35, -1812.81f, -345.61f, 163.66f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 105:
			if (func_157(Global_35, 1359.11f, -1305.88f, 76.77f, 0) < (1f + fVar0) || func_157(Global_35, 1358.8f, -1298.06f, 76.78f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 5:
			if ((((((func_157(Global_35, 2511.1f, -1311.37f, 47.95f, 0) < (1.5f + fVar0) || func_157(Global_35, 2507.45f, -1317.49f, 47.62f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2496.77f, -1317.49f, 47.81f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2493.1f, -1311.09f, 47.94f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2493.22f, -1306.48f, 47.95f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2511.18f, -1306.25f, 47.95f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2516.28f, -1308.78f, 47.96f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
		case 38:
			if (func_157(Global_35, -756.9f, -1269.2f, 43.03f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			else if (func_157(Global_35, -769.19f, -1269.29f, 42.98f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 115:
			if (!bParam1 && func_157(Global_35, -5527.72f, -2930.482f, -2.2717f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
	}
	return false;
}

struct<4> func_148(int iParam0)
{
	StringCopy(&cVar0, "JPAY", 32);
	MemCopy(&cVar4, {func_152(iParam0)}, 1);
	StringConCat(&cVar0, &cVar4, 32);
	if (func_101())
	{
		StringConCat(&cVar0, "J", 32);
	}
	else
	{
		StringConCat(&cVar0, "A", 32);
	}
	return cVar0;
}

Vector3 func_149(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			StringCopy(&cVar0, "JRPY_VA_NOT", 24);
			break;
		case 38:
			StringCopy(&cVar0, "JRPY_BW", 24);
			break;
		case 26:
			StringCopy(&cVar0, "JRPY_ST_A", 24);
			break;
		case 78:
			StringCopy(&cVar0, "", 24);
			break;
		case 105:
			StringCopy(&cVar0, "JRPYE_RO", 24);
			break;
		case 5:
			StringCopy(&cVar0, "", 24);
			break;
		case 115:
			StringCopy(&cVar0, "BHJTW_PAY_LEALY", 24);
			break;
	}
	return cVar0;
}

bool func_150(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_295(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_296(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_151(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_297(iParam0, &Var0);
}

Vector3 func_152(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			StringCopy(&cVar0, "_ST", 24);
			break;
		case 76:
			StringCopy(&cVar0, "_VA", 24);
			break;
		case 105:
			StringCopy(&cVar0, "_RO", 24);
			break;
		case 5:
			StringCopy(&cVar0, "_SD", 24);
			break;
		case 38:
			StringCopy(&cVar0, "_BW", 24);
			break;
		case 115:
			StringCopy(&cVar0, "_TW", 24);
			break;
		case 78:
			StringCopy(&cVar0, "_AN", 24);
			break;
		default:
			StringCopy(&cVar0, "_ST", 24);
			break;
	}
	return cVar0;
}

int func_153(int iParam0)
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

int func_154(int iParam0, int iParam1)
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

bool func_155(int iParam0)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_298(iParam0))
	{
		return false;
	}
	return func_299((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_156(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_157(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_158(int iParam0, int iParam1)
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

int func_159(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_160()
{
	return func_300(1);
}

void func_161(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_162(vector3 vParam0, int iParam3)
{
	if (func_301(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_302(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_163()
{
	if (_0x0d0ae5081f88cfe1(-161493966))
	{
		_0x154340e87d8cc178(-161493966);
	}
}

bool func_164(int iParam0)
{
	if ((_0x61914209c36efddb(iParam0) == 5 || _0x61914209c36efddb(iParam0) == 4) || _0x61914209c36efddb(iParam0) == 9)
	{
		if (_get_carrier_as_human(iParam0) == Global_35)
		{
			return true;
		}
	}
	return false;
}

void func_165(var uParam0)
{
	if (uParam0->f_5 != 0)
	{
		set_model_as_no_longer_needed(uParam0->f_5);
	}
	if (uParam0->f_7 != 0)
	{
		set_model_as_no_longer_needed(uParam0->f_7);
	}
	if (uParam0->f_9 != 0)
	{
		set_model_as_no_longer_needed(uParam0->f_9);
	}
	if (uParam0->f_11 != 0)
	{
		set_model_as_no_longer_needed(uParam0->f_11);
	}
}

void func_166(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_167(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_303(func_44(uParam0->f_300, uParam0->f_65), 3f, 2);
	}
	if (uParam0->f_300 == 26 || uParam0->f_300 == 105)
	{
		set_scenario_type_enabled("RANSACK_ATTACHED_P_DESK07X", bParam1);
	}
	else if (uParam0->f_300 == 38 || uParam0->f_300 == 76)
	{
		set_scenario_type_enabled("RANSACK_ATTACHED_P_WORKBENCHDESK01X_RIGHT", bParam1);
	}
	else if (uParam0->f_300 == 5)
	{
		set_scenario_type_enabled("RANSACK_ATTACHED_P_DESK08X_R", bParam1);
	}
	else if (uParam0->f_300 == 115)
	{
		set_scenario_type_enabled("RANSACK_ATTACHED_P_DESK07X", bParam1);
		set_scenario_type_enabled("RANSACK_ATTACHED_P_CABINET13X", bParam1);
	}
}

void func_168(int iParam0)
{
	Global_1396116->f_139 = iParam0;
}

void func_169()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(Global_1395482->f_95[iVar0], "", 32);
		Global_1395482->f_95[iVar0]->f_4 = 2;
		iVar0++;
	}
	Global_1395482->f_94 = 0;
	func_64(Global_1395482->f_1, 512);
}

void func_170()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(Global_1395482->f_80[iVar0], "", 32);
		iVar0++;
	}
	Global_1395482->f_93 = 0;
}

void func_171(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_260() - fParam1);
	func_304(uParam0, 1);
	func_305(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_172(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_173()
{
	return (Global_1894899 & 1 != 0 && func_33() != -1);
}

float func_174(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_175(Global_35, iParam0, bParam1, bParam2);
}

float func_175(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_176(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (is_ped_in_combat(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

int func_177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(bool bParam0, bool bParam1, bool bParam2)
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

bool func_179(int iParam0)
{
	if (_0x61914209c36efddb(iParam0) == 3 && !_0x383f64263f946e45(&uVar0, iParam0, 4, Global_35, 0, 1))
	{
		if (!is_entity_on_fire(iParam0) && !is_ped_on_mount(Global_35))
		{
			return true;
		}
	}
	return false;
}

bool func_180(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_181(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_182(int iParam0)
{
	if (!func_83(iParam0))
	{
		return false;
	}
	if (func_24(iParam0, 2))
	{
		if (iParam0 == 2 && func_306(12))
		{
			func_64(iParam0, 2);
		}
		else
		{
			return true;
		}
		if (iParam0 == 5)
		{
			if (!func_307())
			{
				func_64(iParam0, 2);
			}
			else
			{
				return true;
			}
		}
	}
	else if (iParam0 == 5)
	{
		if (func_307())
		{
			func_40(iParam0, 2);
			return true;
		}
	}
	iVar0 = func_308(iParam0);
	if (func_212(iVar0))
	{
		if (func_309(iVar0))
		{
			return true;
		}
	}
	iVar1 = func_310(iParam0);
	if (func_181(iVar1))
	{
		iVar2 = func_311(iVar1);
		if (func_312(iVar2))
		{
			if (func_313(iVar2))
			{
				return true;
			}
			if (func_313(iVar2))
			{
				return true;
			}
		}
	}
	return false;
}

int func_183(int iParam0)
{
	if (!func_83(iParam0))
	{
		return -1;
	}
	iVar0 = iParam0;
	iVar1 = iParam0;
	while (iVar0 < 6 || iVar1 > 0)
	{
		if (iVar0 < 6)
		{
			iVar0++;
		}
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - 1);
		}
		if (!func_182(iVar0))
		{
			iVar2 = iVar0;
		}
		else if (!func_182(iVar1))
		{
			iVar2 = iVar1;
		}
	else
	{
		}
	}
	if (iVar2 == iParam0)
	{
		iVar2 = -1;
	}
	return iVar2;
}

void func_184(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_185(int iParam0, int iParam1, bool bParam2)
{
	if (!func_186(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_314(iParam0);
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
		if (!func_315(iParam0, 1))
		{
			return false;
		}
	}
	return func_316(iParam0, 0, bParam2) >= iParam1;
}

bool func_186(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_187(int iParam0, int iParam1)
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

void func_188(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_317(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

void func_189(var uParam0, bool bParam1)
{
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	func_19(uParam0->f_300, &(uParam0->f_306));
	func_318(uParam0->f_300, &(uParam0->f_307));
	func_319(uParam0->f_300, &(uParam0->f_305));
	_0x18262cafebb5fbe1(uParam0->f_306, 0, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(uParam0->f_306, 0, 0, 0, -1, -1, 2);
	func_320(uParam0, bParam1);
}

bool func_190()
{
	if ((((!_0xa2cac9def0195e6f(0) && !func_321()) && is_screen_faded_in()) && !is_screen_fading_in()) && !func_322())
	{
		return true;
	}
	return false;
}

void func_191(bool bParam0)
{
	if (!bParam0)
	{
		if (Local_15.f_456 < 5)
		{
			if (func_323(&(Local_15.f_420), &Global_35, &(Local_15.f_387), Local_15.f_456))
			{
				Local_15.f_498++;
				Local_15.f_456++;
			}
			else
			{
				Local_15.f_456 = 5;
			}
		}
		else
		{
			func_92();
		}
	}
	else if (Local_15.f_458 < 3)
	{
		if (func_323(&(Local_15.f_446), &Global_35, &(Local_15.f_387), Local_15.f_458))
		{
			Local_15.f_498++;
			Local_15.f_458++;
		}
		else
		{
			Local_15.f_458 = 3;
		}
	}
	else
	{
		func_92();
	}
	func_127(&(Local_15.f_393));
	func_21(&(Local_15.f_388), 2);
}

void func_192(bool bParam0)
{
	if (!bParam0)
	{
		if (Local_15.f_457 < 5)
		{
			if (func_323(&(Local_15.f_404), &(Local_15.f_387), &Global_35, Local_15.f_457))
			{
				Local_15.f_498++;
				Local_15.f_457++;
			}
			else
			{
				Local_15.f_457 = 5;
			}
		}
	}
	else if (Local_15.f_459 < 3)
	{
		if (func_323(&(Local_15.f_436), &(Local_15.f_387), &Global_35, Local_15.f_459))
		{
			Local_15.f_498++;
			Local_15.f_459++;
		}
		else
		{
			Local_15.f_459 = 3;
		}
	}
	func_68(&(Local_15.f_393));
	func_15(&(Local_15.f_388), 2);
}

bool func_193(float fParam0)
{
	if (func_300(1))
	{
		return true;
	}
	if (func_69(&uLocal_0) && !func_324(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

int func_194(int iParam0)
{
	return func_325(iParam0, 6);
}

int func_195(int iParam0)
{
	iVar0 = func_326(iParam0, 6);
	return iVar0;
}

int func_196(int iParam0)
{
	return func_325(iParam0, 7);
}

int func_197(int iParam0)
{
	iVar0 = func_326(iParam0, 7);
	return iVar0;
}

bool func_198(int iParam0)
{
	return (func_325(iParam0, 4) || func_325(iParam0, 5));
}

int func_199(int iParam0)
{
	iVar0 = func_326(iParam0, 4);
	if (!does_entity_exist(iVar0))
	{
		iVar1 = func_326(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

bool func_200(int iParam0)
{
	iParam0 = func_327(iParam0);
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

int func_201(int iParam0)
{
	iParam0 = func_327(iParam0);
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

void func_202(var uParam0)
{
	if (!func_39(uParam0->f_329, 4194304) && does_entity_exist(uParam0->f_67))
	{
		func_36(&(uParam0->f_329), 4194304);
	}
	if (!func_39(uParam0->f_329, 8) && func_146(uParam0->f_67))
	{
		func_82(&(uParam0->f_329), 2);
		func_36(&(uParam0->f_329), 8);
	}
}

void func_203(var uParam0)
{
	if (func_39(uParam0->f_329, 262144))
	{
		return;
	}
	if (!func_45(uParam0->f_67, 0) || _is_ped_hogtied(uParam0->f_67))
	{
		iVar0 = 455691738;
	}
	else
	{
		iVar0 = 953018525;
	}
	if (does_blip_exist(uParam0->f_68))
	{
		_0xbd62d98799a3daf0(uParam0->f_68, iVar0);
	}
	else
	{
		uParam0->f_68 = _blip_add_for_entity(iVar0, uParam0->f_67);
	}
	_0x97f6f158cc5b5ca2(uParam0->f_67, uParam0->f_68);
	_blip_set_modifier(uParam0->f_68, 231194138);
	set_blip_name_from_text_file(uParam0->f_68, &(uParam0->f_325));
}

bool func_204(int iParam0, int iParam1)
{
	if (func_328(iParam0, iParam1) || func_164(iParam0))
	{
		return true;
	}
	return false;
}

bool func_205(int iParam0)
{
	if (_0x61914209c36efddb(iParam0) == 7)
	{
		iVar0 = _get_carrier_as_mount(iParam0);
		if (func_329(Global_35, iVar0, 0))
		{
			func_330(7);
			func_331();
			return false;
		}
	}
	else
	{
		return false;
	}
	if (func_332(iParam0))
	{
		func_330(7);
		func_331();
		return false;
	}
	return true;
}

void func_206(var uParam0)
{
	if (!func_39(uParam0->f_329, 128))
	{
		if (func_328(uParam0->f_67, 1))
		{
			if (!is_string_null_or_empty(uParam0->f_363))
			{
				trigger_music_event(uParam0->f_363);
			}
			func_36(&(uParam0->f_329), 128);
		}
	}
}

void func_207(var uParam0)
{
	if (!func_69(&(uParam0->f_318)))
	{
		func_171(&(uParam0->f_318), 5f);
		uParam0->f_324 = 0;
	}
	else if (func_130(&(uParam0->f_318)) >= 7f && func_144(1))
	{
		func_171(&(uParam0->f_318), 7f);
	}
	if (func_146(uParam0->f_67))
	{
		vVar1 = { func_100(uParam0->f_300) };
	}
	else
	{
		vVar1 = { func_333(uParam0->f_300) };
	}
	if (uParam0->f_300 == 5)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	if (uParam0->f_324 < iVar0)
	{
		if (!is_ped_heading_towards_position(Global_35, vVar1, 45f) || is_ped_stopped(Global_35))
		{
			if ((func_45(uParam0->f_69, 0) && func_150(uParam0->f_69, Global_35, 0, 12f, 0)) && func_65(Global_35, uParam0->f_306, 1, 0))
			{
				if (func_130(&(uParam0->f_318)) >= 15f)
				{
					if (is_ped_active_in_scenario(uParam0->f_69, 0) && !_0x916b8e075abc8b4e(uParam0->f_69, 1))
					{
						_0xe7fa07624574b79a(uParam0->f_69, Global_35, 2, 1, -1f, 1, 0, 0, 0);
					}
					if (uParam0->f_358 || func_39(uParam0->f_328, 67108864))
					{
						StringCopy(&cVar4, "BOUNTY_THROW_IN_CELL_AGAIN", 32);
						if (func_151(uParam0->f_69, &cVar4, 291934926, Global_35, 1, 0, 0, 1))
						{
							func_68(&(uParam0->f_318));
							uParam0->f_324++;
							if (uParam0->f_324 == 1)
							{
								func_129(uParam0, 1024, 1);
							}
						}
					}
					else if (!func_144(1))
					{
						StringCopy(&cVar8, "JR", 24);
						if (func_146(uParam0->f_67))
						{
							StringConCat(&cVar8, "DE", 24);
						}
						else
						{
							StringConCat(&cVar8, "AL", 24);
						}
						MemCopy(&cVar11, {func_152(uParam0->f_300)}, 1);
						StringConCat(&cVar8, &cVar11, 24);
						StringIntConCat(&cVar8, uParam0->f_324, 24);
						if (func_145(&(uParam0->f_201), cVar8, 0, -1, 0, 0))
						{
							func_68(&(uParam0->f_318));
							uParam0->f_324++;
							if (uParam0->f_324 == 1)
							{
								func_129(uParam0, 1024, 1);
							}
						}
					}
				}
			}
		}
		else if (func_130(&(uParam0->f_318)) > 8f)
		{
			func_171(&(uParam0->f_318), 8f);
		}
	}
}

Vector3 func_208(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_30[1]->f_1) && _is_anim_scene_loaded(uParam0->f_30[1]->f_1, true, false))
	{
		vVar0 = { func_231(uParam0->f_30[1]->f_1, func_241(uParam0->f_300), uParam0->f_30[1]->f_9) };
		return vVar0;
	}
	if (uParam0->f_300 == 115)
	{
		return -5530.09f, -2925.662f, -2.3609f;
	}
	return func_333(uParam0->f_300);
}

float func_209(int iParam0, vector3 vParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

bool func_210(var uParam0)
{
	if (uParam0->f_300 == 5)
	{
		return true;
	}
	return false;
}

bool func_211(var uParam0)
{
	switch (uParam0->f_61)
	{
		case 0:
			if (!_does_anim_scene_exist(uParam0->f_331))
			{
				uParam0->f_331 = _create_anim_scene("script@proc@bountyhunting@lemoyneraider@bodydrop", 0, "PBL_DROPOFF", false, true);
				set_anim_scene_entity(uParam0->f_331, "LINDSEY", uParam0->f_67, 0);
				set_anim_scene_entity(uParam0->f_331, "player", Global_35, 0);
				load_anim_scene(uParam0->f_331);
			}
			else if (_is_anim_scene_loaded(uParam0->f_331, true, false))
			{
				if (func_157(Global_35, func_100(uParam0->f_300), 0) < 3f && func_164(uParam0->f_67))
				{
					task_enter_anim_scene(Global_35, uParam0->f_331, "player", "PBL_DROPOFF", 1069379748, 0, 0, 20000, -1082130432);
					func_242(uParam0, 3);
				}
			}
			break;
		case 3:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (!func_49(Global_35, 1369124074))
			{
				if (func_157(Global_35, func_100(uParam0->f_300), 0) > 2f)
				{
					task_enter_anim_scene(Global_35, uParam0->f_331, "player", "PBL_DROPOFF", 1069379748, 1, 0, 20000, -1082130432);
				}
				else
				{
					start_anim_scene(uParam0->f_331);
					func_242(uParam0, 4);
				}
			}
			break;
		case 4:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (_is_anim_scene_finished(uParam0->f_331, false) || func_334(uParam0))
			{
				_0x18ff3110cf47115d(uParam0->f_67, 7, 0);
				func_242(uParam0, 5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_212(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_213(int iParam0)
{
	if (!func_212(iParam0))
	{
		return false;
	}
	return func_335(iParam0, 8);
}

int func_214(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_301(vParam0))
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
		if (func_336(vParam0))
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
	func_337(iVar0, bParam8);
	return iVar0;
}

int func_215()
{
	return Global_1572887->f_12;
}

void func_216(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_338(uParam0, iParam1, sParam2))
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

int func_217(int iParam0)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	if (!func_291(func_290(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_292(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_292(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_292(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_292(iParam0));
	return 1;
}

int func_218(int iParam0)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	if (!func_291(func_290(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_292(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_292(iParam0));
	return 1;
}

int func_219(int iParam0)
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

void func_220(int iParam0, int iParam1)
{
	func_217(func_339(iParam0, iParam1));
}

void func_221(int iParam0, int iParam1)
{
	func_222(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_222(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_340(iParam0, 0, 0);
	if (func_341(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_342(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_343(iParam0, 1);
			}
			else
			{
				func_344(iParam0, 1);
			}
		}
		else
		{
			func_345(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_346())
	{
	}
	else if (network_is_in_session())
	{
	}
}

int func_223(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 == 0)
			{
				return 1674105116;
			}
			else if (iParam1 == 1)
			{
				return 1979938193;
			}
			else if (iParam1 == 2)
			{
				return 1879655431;
			}
			else if (iParam1 == 3)
			{
				return -1170253702;
			}
			else if (iParam1 == 4)
			{
				return -864682777;
			}
			else if (iParam1 == 5)
			{
				return -693431983;
			}
			else if (iParam1 == 6)
			{
				return 417663242;
			}
			else if (iParam1 == 7)
			{
				return 1611175760;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return 1614494720;
			}
			else if (iParam1 == 1)
			{
				return 349074475;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 1514359658;
			}
			else if (iParam1 == 1)
			{
				return 1821044729;
			}
			break;
		case 76:
			if (iParam1 == 0)
			{
				return 395506985;
			}
			else if (iParam1 == 1)
			{
				return 535323366;
			}
			else if (iParam1 == 2)
			{
				return 1988748538;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return -1484165375;
			}
			else if (iParam1 == 1)
			{
				return -473782212;
			}
			else if (iParam1 == 2)
			{
				return -884246706;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				return -1559698258;
			}
			break;
		case 78:
			if (iParam1 == 0)
			{
				return -2082598623;
			}
			break;
	}
	return 0;
}

bool func_224(int iParam0)
{
	return iParam0 != 0;
}

bool func_225(int iParam0)
{
	func_340(iParam0, 0, 0);
	if (func_341(iParam0))
	{
		return (door_system_get_door_state(iParam0) == 2 || door_system_get_door_state(iParam0) == 1);
	}
	return false;
}

bool func_226(int iParam0)
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

void func_227(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_226(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_347(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_348(iVar0);
	*uParam0 = 0;
}

void func_228(var uParam0, int iParam1)
{
	uParam0->f_62 = iParam1;
}

bool func_229(var uParam0)
{
	uParam0->f_69 = func_349(func_138(uParam0->f_300), 1, 0, 0, 1, 1);
	if (func_45(uParam0->f_69, 0))
	{
		if (!is_entity_a_mission_entity(uParam0->f_69) || !_0x88ad6cc10d8d35b2(uParam0->f_69))
		{
			set_entity_as_mission_entity(uParam0->f_69, true, false);
		}
		set_blocking_of_non_temporary_events(uParam0->f_69, true);
		_0xbd75500141e4725c(uParam0->f_69, 1226687097);
		func_350(&(uParam0->f_74), 1);
		func_351(&(uParam0->f_74), 1);
		func_352(&(uParam0->f_74), 1);
		func_353(&(uParam0->f_74), 1);
		func_354(&(uParam0->f_74), 1);
		if (is_ped_using_any_scenario(uParam0->f_69))
		{
			clear_ped_tasks_immediately(uParam0->f_69, false, true);
		}
		else
		{
			clear_ped_tasks(uParam0->f_69, 1, 0);
		}
		set_ped_config_flag(uParam0->f_69, 146, false);
		set_entity_coords(uParam0->f_69, func_355(uParam0->f_300), true, false, true, true);
		_0x94a3c1b804d291ec(uParam0->f_69, 1, 0, 0, 0);
		task_swap_weapon(uParam0->f_69, 1, 0, 0, 0);
		func_102(uParam0, uParam0->f_69, func_356(uParam0->f_300));
		func_216(&(uParam0->f_201), uParam0->f_69, func_356(uParam0->f_300), 1);
		func_357(uParam0, uParam0->f_69);
		if (!Global_1935630->f_12)
		{
			if (func_101())
			{
				func_216(&(uParam0->f_201), Global_35, "John", 1);
			}
			else
			{
				func_216(&(uParam0->f_201), Global_35, "Arthur", 1);
			}
		}
		return true;
	}
	return false;
}

void func_230(var uParam0)
{
	if (uParam0->f_27 == 0)
	{
		uParam0->f_27 = _0x6f3068258a499e52(uParam0->f_5, uParam0->f_1, 7);
	}
	else if (_0x1ff441d7954f8709(uParam0->f_27))
	{
		uParam0->f_4 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_27));
	}
}

struct<4> func_231(int iParam0, char* sParam1, char* sParam2)
{
	if (_get_anim_scene_entity_matrix(iParam0, sParam1, &Var4, !is_string_null_or_empty(sParam2), sParam2, 2))
	{
		Var0 = { Var4 };
		Var0.f_3 = Var4.f_3.f_2;
	}
	return Var0;
}

var func_232(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(iParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

void func_233(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_358(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_234(var uParam0)
{
	func_167(uParam0, 0, 1);
	if (!is_entity_dead(uParam0->f_69))
	{
		func_359(uParam0);
	}
}

bool func_235(var uParam0)
{
	if ((((((uParam0->f_65 == 11 || uParam0->f_65 == 16) || uParam0->f_65 == 154) || uParam0->f_65 == 13) || uParam0->f_65 == 15) || uParam0->f_65 == 20) || uParam0->f_65 == 19)
	{
		return true;
	}
	return false;
}

bool func_236(var uParam0)
{
	if (func_360(uParam0))
	{
		if (!func_101())
		{
			if (func_151(Global_35, "GREET_SHERIFF", 291934926, uParam0->f_69, 1, 0, get_random_int_in_range(0, 3) + 3, 1))
			{
				return true;
			}
			else
			{
				return true;
			}
		}
		else
		{
			iVar3 = 0;
			StringCopy(&cVar0, "HOGTIES_MALE", 24);
			switch (get_random_int_in_range(0, 7))
			{
				case 0:
					iVar3 = 2;
					break;
				case 1:
					iVar3 = 3;
					break;
				case 2:
					iVar3 = 4;
					break;
				case 3:
					iVar3 = 7;
					break;
				case 4:
					iVar3 = 8;
					break;
				case 5:
					iVar3 = 13;
					break;
				case 6:
					iVar3 = 15;
					break;
			}
			if (func_151(Global_35, &cVar0, 291934926, uParam0->f_69, 1, 0, iVar3, 1))
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	else if (!func_144(1))
	{
		if (uParam0->f_382 == 0)
		{
			if (!func_146(uParam0->f_67))
			{
				MemCopy(&cVar0, {uParam0->f_332}, 3);
			}
			else
			{
				MemCopy(&cVar0, {uParam0->f_336}, 3);
			}
		}
		if (!is_string_null_or_empty(&cVar0))
		{
			if (func_145(&(uParam0->f_103), cVar0, 0, -1, 0, 0))
			{
				uParam0->f_382++;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_237(var uParam0)
{
	if (func_361(uParam0))
	{
		if (!func_66(Global_35, 0))
		{
			StringCopy(&cVar3, func_362(uParam0->f_300, is_ped_dead_or_dying(uParam0->f_67, true)), 32);
			if (func_151(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
			{
				return true;
			}
		}
	}
	else if (!func_39(uParam0->f_329, 512))
	{
		if (!func_144(1))
		{
			if (uParam0->f_382 == 0)
			{
				if (!func_146(uParam0->f_67))
				{
					MemCopy(&vVar0, {uParam0->f_332}, 3);
				}
				else
				{
					MemCopy(&vVar0, {uParam0->f_336}, 3);
				}
			}
			if (!is_string_null_or_empty(&vVar0))
			{
				if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
				{
					uParam0->f_382++;
				}
			}
			else
			{
				return true;
			}
		}
	}
	else if (!func_144(1))
	{
		vVar0 = { func_363(uParam0, uParam0->f_382) };
		if (!is_string_null_or_empty(&vVar0))
		{
			if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
			{
				uParam0->f_382++;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_238(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 0;
	}
	else if (uParam0->f_63 == 8)
	{
		if (func_157(uParam0->f_67, func_100(uParam0->f_300), 1) > 5f || func_210(uParam0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (func_157(uParam0->f_67, func_97(uParam0->f_300), 1) < 10f)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_239(var uParam0)
{
	if (!func_113(Global_36, func_97(uParam0->f_300), 150f, 1) || !func_95(uParam0))
	{
		return false;
	}
	if (!uParam0->f_70)
	{
		uParam0->f_71 = get_interior_at_coords(func_97(uParam0->f_300));
		pin_interior_in_memory(uParam0->f_71);
		uParam0->f_70 = 1;
	}
	if (!is_interior_ready(uParam0->f_71))
	{
		return false;
	}
	if (&uParam0->f_30[*uParam0])
	{
		return true;
	}
	func_364(uParam0);
	func_365(uParam0);
	if (uParam0->f_60 != 1)
	{
		if (func_366(uParam0, *uParam0) || func_367(uParam0, *uParam0))
		{
			return false;
		}
	}
	if (func_368(uParam0, *uParam0))
	{
		*uParam0++;
		if (*uParam0 >= 2)
		{
			if (!uParam0->f_23)
			{
				uParam0->f_23 = 1;
			}
			return true;
		}
	}
	return false;
}

void func_240(int iParam0, int iParam1)
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

char* func_241(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "Player";
		case 105:
			return "plr";
		case 78:
			return "Player";
		case 26:
			return "Player";
		case 5:
			return "Player";
		case 38:
			return "Player";
		case 115:
			return "Player";
	}
	return "";
}

void func_242(var uParam0, int iParam1)
{
	uParam0->f_61 = iParam1;
}

void func_243(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			if (!bLocal_14)
			{
				if (get_gameplay_cam_relative_heading() > 90f)
				{
					set_gameplay_cam_relative_heading(0f, 1f);
				}
				bLocal_14 = true;
			}
			_clamp_gameplay_cam_yaw(-45f, 90f);
			break;
	}
}

void func_244(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_215() != -1)
	{
		return;
	}
	if ((Global_36616 && func_317(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_369(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_370(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_371(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_370(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_245(int iParam0, int iParam1)
{
	iVar0 = func_278((*Global_1347702)[iParam0]->f_15);
	func_36(&iVar0, iParam1);
	func_279((*Global_1347702)[iParam0]->f_15, iVar0);
}

void func_246(int iParam0, int iParam1)
{
	iVar0 = func_278((*Global_1347702)[iParam0]->f_15);
	func_82(&iVar0, iParam1);
	func_279((*Global_1347702)[iParam0]->f_15, iVar0);
}

int func_247(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 76:
			if (func_309(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_309(iParam0))
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
			if (!bParam1 || func_215() != -1)
			{
				return 1624541293;
			}
			if (func_372(45))
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
			if (!bParam1 || func_215() != -1)
			{
				return 1024208566;
			}
			if (func_372(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_215() != -1)
			{
				return 965626876;
			}
			if (func_299((*Global_1835011)[59]->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_215() != -1)
			{
				return -497792649;
			}
			if (func_299((*Global_1347702)[9]->f_15, 1))
			{
				return -497792649;
			}
			else if (func_372(45))
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
			if (iParam0 == func_373())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_215() != -1)
			{
				return -1990305778;
			}
			if (func_372(45))
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
		iVar0 = func_374(iParam0);
		if (iVar0 != -1)
		{
			return func_375(iVar0, bParam1);
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	if (iParam0 == 76)
	{
		return 0;
	}
	else if (iParam0 == 38)
	{
		return 0;
	}
	return -1;
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	iVar3 = -1;
	iVar1 = func_219(iParam1);
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0] == -1 && iVar3 == -1)
		{
			iVar3 = iVar0;
		}
		if (&Global_40.f_9829[iVar0] == iParam1)
		{
			if (Global_40.f_9829[iVar0]->f_1 == iParam0)
			{
				return;
			}
			if (iParam2 == iVar2)
			{
				func_376(iVar0, iParam0, iParam1, 0);
				return;
			}
			iVar2++;
		}
		if (iVar2 >= iVar1)
		{
			func_377(iParam0, iParam1);
			return;
		}
		iVar0++;
	}
	if (iVar3 < 0)
	{
		return;
	}
	func_376(iVar3, iParam0, iParam1, 0);
}

void func_250(int iParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0] == iParam1 && Global_40.f_9829[iVar0]->f_1 == iParam0)
		{
			Global_40.f_9829[iVar0]->f_3 = uParam2;
		}
		iVar0++;
	}
}

bool func_251(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_378(*uParam0, -1725579161, 0))
	{
		return true;
	}
	return false;
}

void func_252(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0] == iParam1 && Global_40.f_9829[iVar0]->f_1 == iParam0)
		{
			func_379(iVar0, 128);
		}
		iVar0++;
	}
}

bool func_253(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_254(var uParam0, int iParam1)
{
	func_117(&(uParam0->f_66));
	if (iParam1 == 3)
	{
		if (!func_39(uParam0->f_329, 524288))
		{
			uParam0->f_66 = _blip_add_for_coord(408396114, func_97(uParam0->f_300));
			_blip_set_modifier(uParam0->f_66, 825788762);
			set_blip_name_from_text_file(uParam0->f_66, "BNTY_B_JAIL");
		}
	}
	else if (iParam1 == 7)
	{
		uParam0->f_66 = _blip_add_for_coord(408396114, func_208(uParam0));
		set_blip_name_from_text_file(uParam0->f_66, "BNTY_B_CELL");
	}
	else if (iParam1 == 8)
	{
		uParam0->f_66 = _blip_add_for_coord(408396114, func_100(uParam0->f_300));
		set_blip_name_from_text_file(uParam0->f_66, "BNTY_B_DUMP");
	}
	_blip_set_modifier(uParam0->f_66, 231194138);
	func_330(7);
	func_331();
	if (!func_39(uParam0->f_329, 1))
	{
		func_36(&(uParam0->f_329), 1);
		uParam0->f_368 = { Global_36 };
	}
}

void func_255(var uParam0)
{
	if (func_39(uParam0->f_329, 262144))
	{
		return;
	}
	iVar0 = _get_carrier_as_mount(uParam0->f_67);
	iVar1 = func_201(7);
	if (iVar1 == iVar0)
	{
		func_380(7);
		func_331();
	}
	else
	{
		uParam0->f_66 = _blip_add_for_entity(408396114, iVar0);
	}
	_blip_set_modifier(uParam0->f_66, 231194138);
}

int func_256(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

int func_257(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = _blip_add_for_entity(iParam0, iParam1);
	if (bParam2)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

int func_258(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_381(iParam0, vVar0, fParam2);
}

bool func_259(var uParam0)
{
	return func_172(*uParam0, 2);
}

float func_260()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_261(int iParam0)
{
	if (iParam0 == 14)
	{
		return true;
	}
	return false;
}

void func_262(var uParam0, bool bParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (bParam1)
	{
		if (func_69(&(uParam0->f_364)))
		{
			func_127(&(uParam0->f_364));
		}
	}
	else
	{
		func_68(&(uParam0->f_364));
	}
	uParam0->f_367 = bParam1;
	if (!is_string_null_or_empty(sParam4))
	{
		func_382(sParam2, sParam3, sParam4);
		if (func_298(uParam0->f_65))
		{
			sVar0 = func_383(4, sParam2, sParam3, sParam4, -1, -1);
			func_384(uParam0->f_65, sParam2, sVar0, -1082130432);
		}
	}
	else if (!is_string_null_or_empty(sParam3))
	{
		func_385(sParam2, sParam3);
		if (func_298(uParam0->f_65))
		{
			sVar0 = func_383(3, sParam2, sParam3, 0, -1, -1);
			func_384(uParam0->f_65, sParam2, sVar0, -1082130432);
		}
	}
	else
	{
		func_386(sParam2);
		if (func_298(uParam0->f_65))
		{
			sVar0 = func_383(0, sParam2, 0, 0, -1, -1);
			func_384(uParam0->f_65, sParam2, sVar0, -1082130432);
		}
	}
}

var func_263(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_264(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return "ANN";
		case 5:
			return "NBX";
		case 105:
			return "RHO";
		case 26:
			return "STR";
		case 76:
			return "VAL";
		case 38:
			return "BLK";
		case 115:
			return "TBL";
	}
	return "";
}

void func_265(char* sParam0, var uParam1)
{
	func_263(_create_var_string(42, sParam0, &(uParam1->f_325), func_264(uParam1->f_300)), 7500, 0, 0, 0, 1);
}

bool func_266(var uParam0)
{
	if (uParam0->f_300 == 5 || uParam0->f_300 == 38)
	{
		return true;
	}
	return false;
}

var func_267(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_263(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_383(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_263(sVar0, iParam1, 0, 0, 1, 1);
}

Vector3 func_268(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_65)
	{
		case 154:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT12_REWARD_A", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT12_RWD_A", 24);
				cVar0 = { func_387(cVar0) };
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BRA_REWARD", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "BRA_REWARD_", 24);
				cVar0 = { func_387(cVar0) };
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT14_REWARD_A", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT14_REWARD_A", 24);
				cVar0 = { func_387(cVar0) };
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT20_REWARD_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT20_REWARD_A", 24);
				}
			}
			break;
		case 155:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT21_PUTCAGEJ", 24);
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_REWARD_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT18_REWARD_A", 24);
				}
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BDUL_PAY_S1", 24);
			}
			else if (iParam1 == 1)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "BDUL_PAY_J1", 24);
				}
				else
				{
					StringCopy(&cVar0, "BDUL_PAY_A1", 24);
				}
			}
			else if (iParam1 == 2)
			{
				StringCopy(&cVar0, "BDUL_PAY_S2", 24);
			}
			else if (iParam1 == 3)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "BDUL_PAY_J2", 24);
				}
				else
				{
					StringCopy(&cVar0, "BDUL_PAY_A2", 24);
				}
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "NBX_SDS_RWD", 24);
			}
			else if (iParam1 == 1)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "NBX_SDS_RWD_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_SDS_RWD_A", 24);
				}
			}
			else if (iParam1 == 2)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "NBX_SDS_TKRWD_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_SDS_TKRWD_A", 24);
				}
			}
			break;
		case 153:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT03_RWD_DEAD", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT03_RWD_ALVE", 24);
				}
			}
			break;
	}
	return cVar0;
}

bool func_269(var uParam0)
{
	if (-1829635046 == func_388(81053684))
	{
		if (func_389(uParam0))
		{
			return true;
		}
	}
	else if (func_390(-525676072, uParam0))
	{
		if (func_389(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_270()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_271(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	iVar0 = func_391();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = absi(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = to_float(iVar0);
	fVar7 = to_float(&Global_1347398);
	fVar8 = to_float(iVar3);
	iVar4 = func_392(ceil(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_392(ceil(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_393())
		{
			func_394(0);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_395())
		{
			func_394(1000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_396())
		{
			func_394(2000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_397())
	{
		func_394(3000);
		play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_399(func_398(661720433), iVar1);
	iVar10 = func_391();
	_0x078f77fd1a43eab3(iVar0, iVar10);
}

bool func_272(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_30[0]->f_1) && _is_anim_scene_started(uParam0->f_30[0]->f_1, false))
	{
		if (_0x1f0e401031e20146(uParam0->f_30[0]->f_1, "PB_REWARD_R"))
		{
			fVar0 = 6.8f;
		}
		else
		{
			fVar0 = 5.7f;
		}
		if (_get_anim_scene_time(uParam0->f_30[0]->f_1) > fVar0)
		{
			return true;
		}
	}
	return false;
}

void func_273()
{
	_0x49f3241c28ebbfbc(0);
	Var0 = 2084597891;
	Var0.f_3 = 6;
	if (&Global_1392235)
	{
		Var0.f_4 = Global_40.f_9074.f_3;
		Var0.f_5 = Global_40.f_9074.f_3;
	}
	else
	{
		Var0.f_4 = Global_40.f_9074.f_4;
		Var0.f_5 = Global_40.f_9074.f_4;
	}
	Var0.f_1 = 1f;
	_0x183672fe838a661b(&Var0);
	_0x38c0c9cae1544500(-161493966);
}

int func_274(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_400())
	{
		iVar2 = func_400();
	}
	iVar5 = func_401(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_402(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_402(iVar6) == 0)
			{
				return func_403(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_402(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_402(iVar6) == 0)
			{
				return func_403(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_403(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_275(int iParam0)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_406(iParam0, (func_405(iParam0) + shift_left(1, 16)));
}

int func_276(int iParam0)
{
	if (!func_404(iParam0))
	{
		return -1;
	}
	return func_407(iParam0);
}

void func_277(int iParam0, int iParam1)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_408(iParam0, iParam1);
}

int func_278(int iParam0)
{
	if (!func_404(iParam0))
	{
		return -1;
	}
	return func_409(iParam0);
}

void func_279(int iParam0, int iParam1)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_410(iParam0, iParam1);
}

var func_280()
{
	return &Global_1899515;
}

void func_281(int iParam0, var uParam1)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_411(iParam0, uParam1);
}

int func_282(int iParam0)
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

int func_283(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_412(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_413(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_185(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_414(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_316(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_316(iParam0, 0, 0) - iParam1) < 0)
		{
			func_283(iParam0, func_316(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_314(iParam0) == -427144552)
	{
		if (!func_415(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_416(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_417(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_413(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_418(iParam0, iParam1);
	return 1;
}

bool func_284(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_419(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_420(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_421(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_422(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_423(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_424(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_71(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_421(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_425(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_426(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_427(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_428(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_428(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_421(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_429(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_430(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_431(uParam2, 4000))
				{
					if ((func_432(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_433(uParam2, iParam0)) && func_434(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_432(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_433(uParam2, iParam0)) && func_434(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_435(iParam0, Global_1935630->f_41))
							{
								func_436();
								*uParam3 = 2;
								func_421(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_435(iParam0, Global_1935630->f_41))
						{
							func_436();
							*uParam3 = 2;
							func_421(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_437(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_438() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_436();
						*uParam3 = 2;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_439())
					{
						if (func_435(iParam0, Global_1935630->f_42))
						{
							func_436();
							*uParam3 = 2;
							func_421(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_440(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_421(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_441(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_442(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_443(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_444(uParam2, 4000))
				{
					if (func_445(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_446(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_447(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_421(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_285(int iParam0, var uParam1, bool bParam2)
{
	func_448(1, &iVar0, &iVar1);
	if (!does_entity_exist(iVar0) && !does_entity_exist(iVar1))
	{
		return false;
	}
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_449(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (does_entity_exist(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_449(uParam1, iVar1))
				{
					if (func_157(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_286(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_287(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_286(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

void func_288(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	if (!func_286(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_289(int iParam0)
{
	if (!func_286(iParam0))
	{
		return;
	}
	iVar0 = func_450(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_290(int iParam0)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_291(int iParam0)
{
	return iParam0 != 0;
}

int func_292(int iParam0)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_293(int iParam0, bool bParam1)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	if (!func_287(iParam0, 2))
	{
		return 0;
	}
	if (func_290(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_292(iParam0)))
	{
		return 1;
	}
	if (func_287(iParam0, 1) && !bParam1)
	{
		func_451(iParam0, 128);
		return 1;
	}
	func_288(iParam0, 129);
	func_289(iParam0);
	_0xfc77c5b44d5ff7c0(func_292(iParam0));
	func_452(iParam0, 0);
	return 1;
}

void func_294(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

bool func_295(int iParam0, int iParam1, float fParam2)
{
	return func_453(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_296(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_297(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_298(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_299(int iParam0, bool bParam1)
{
	switch (func_454(iParam0))
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

bool func_300(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_301(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_302(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_303(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_304(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_305(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_306(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_299((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_307()
{
	if (Global_1894899->f_187)
	{
		return true;
	}
	if (func_306(16) && !func_306(21))
	{
		return true;
	}
	return false;
}

int func_308(int iParam0)
{
	if (!func_83(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 3:
			return 76;
		case 2:
			return 26;
		case 5:
			return 105;
		case 4:
			return 78;
		case 6:
			return 5;
		case 1:
			return 38;
		case 0:
			return 115;
		default:
			break;
	}
	return -1;
}

bool func_309(int iParam0)
{
	if (!func_212(iParam0))
	{
		return false;
	}
	return func_335(iParam0, 33554432);
}

int func_310(int iParam0)
{
	if (!func_83(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 3:
			return 9;
		case 2:
			return 1;
		case 6:
			return 0;
		case 4:
			return 10;
		case 1:
			return 4;
		case 5:
			return 11;
		case 0:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_311(int iParam0)
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

bool func_312(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_313(int iParam0)
{
	if (!func_312(iParam0))
	{
		return false;
	}
	if (func_455(iParam0) >= get_wanted_level_threshold(5))
	{
		return true;
	}
	return false;
}

int func_314(int iParam0)
{
	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_315(int iParam0, int iParam1)
{
	if (!func_186(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_412(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_456("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_457(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_458(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_459(iVar1);
				return true;
			}
			iVar3++;
		}
		func_459(iVar1);
	}
	return false;
}

int func_316(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_314(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_412(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_460(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_461(bParam2), iParam0, 0);
	return uVar2;
}

int func_317(int iParam0)
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

void func_318(int iParam0, var uParam1)
{
	if (_does_volume_exist(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = _create_volume_aggregate_with_custom_name("SD Dialogue Volume");
			_0x39816f6f94f385ad(*uParam1, 2506.862f, -1308.892f, 48.50731f, 0f, 0f, 0f, 8f, 16.5f, 3f);
			_0x39816f6f94f385ad(*uParam1, 2499.045f, -1308.865f, 48.91688f, 0f, 0f, 0f, 10f, 2f, 3f);
			break;
		default:
			break;
	}
}

void func_319(int iParam0, var uParam1)
{
	if (_does_volume_exist(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = _create_volume_box_with_custom_name(2503.332f, -1306.672f, 49.06244f, 0f, 0f, 0f, 5.38237f, 5.870902f, 2.389851f, "Near Cell");
			break;
		case 26:
			*uParam1 = _create_volume_box_with_custom_name(-1813.066f, -353.3387f, 161.438f, 0f, 0f, -20.6699f, 5.9382f, 3.494741f, 2.127687f, "Near Cell");
			break;
		case 76:
			*uParam1 = _create_volume_box_with_custom_name(-273.4034f, 808.0645f, 119.503f, 0f, 0f, -78.66611f, 2.868701f, 5.577141f, 2.388725f, "Near Cell");
			break;
		case 105:
			*uParam1 = _create_volume_box_with_custom_name(1357.195f, -1302.73f, 77.57108f, 0f, 0f, -18.89946f, 3.524552f, 3.867561f, 1.788079f, "Near Cell");
			break;
		case 38:
			*uParam1 = _create_volume_box_with_custom_name(-763.9052f, -1264.156f, 43.82976f, 0f, 0f, 0f, 3.441595f, 4.293221f, 2.234505f, "Near Cell");
			break;
		case 115:
			*uParam1 = _create_volume_box_with_custom_name(-5534.542f, -2948.278f, -0.368f, 0f, 0f, 15f, 9f, 4.7f, 3f, "Near Cell");
			break;
		case 78:
			*uParam1 = _create_volume_box_with_custom_name(2903.745f, 1311.18f, 45.13168f, 0f, 0f, -19.81251f, 1.647195f, 1.766237f, 2.464334f, "Near Cell");
			break;
		default:
			break;
	}
}

void func_320(var uParam0, bool bParam1)
{
	func_462(uParam0);
	switch (uParam0->f_300)
	{
		case 76:
			vVar0 = { -272.0415f, 808.1991f, 118.3685f };
			vVar3 = { 0f, 0f, -170.5f };
			uParam0->f_9 = -770982987;
			uParam0->f_7 = -1231539219;
			uParam0->f_14 = -798350419;
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = -1311816336;
			uParam0->f_20 = { -273.2888f, 808.1285f, 119.3935f };
			uParam0->f_1 = { -277.49f, 804.13f, 118.38f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@sitrelax_val";
					sVar8 = "PB_RELAX_FL_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@stand_val";
					sVar8 = "PB_STAND_FL_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@sitwriting_val";
					sVar8 = "PB_WRITE_FL_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_val";
			sVar9 = "PB_DROPOFF";
			break;
		case 105:
			vVar0 = { 1357.334f, -1302.453f, 76.75331f };
			vVar3 = { 0f, 0f, 70.00005f };
			uParam0->f_14 = -798350419;
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = -1311816336;
			uParam0->f_20 = { 1357.897f, -1301.337f, 77.77831f };
			uParam0->f_9 = -770982987;
			uParam0->f_7 = 1615548247;
			uParam0->f_1 = { 1361.26f, -1303.45f, 77.26f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@sitrelax_rhodes";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@stand_rhodes";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@sitwriting_rhodes";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_rhodes";
			if (bParam1)
			{
				sVar9 = "PB_DROPOFF_Floor";
			}
			else
			{
				sVar9 = "PB_DROPOFF";
			}
			break;
		case 78:
			vVar0 = { 2902.943f, 1310.878f, 43.9443f };
			vVar3 = { 0f, 0f, 69.26f };
			uParam0->f_14 = 575114670;
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = -1311816336;
			uParam0->f_20 = { 2903.49f, 1312.001f, 44.978f };
			uParam0->f_9 = -770982987;
			uParam0->f_7 = -130500054;
			uParam0->f_1 = { 2907.75f, 1313.686f, 44.56693f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@sitrelax_Ann";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@stand_Ann";
					sVar8 = "PB_BASE";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@sitwriting_Ann";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_ans";
			if (bParam1)
			{
				sVar9 = "PB_DROPOFF_Floor";
			}
			else
			{
				sVar9 = "PB_DROPOFF";
			}
			break;
		case 26:
			vVar0 = { -1811.985f, -351.8662f, 160.4395f };
			vVar3 = { 0f, 0f, -25.00003f };
			uParam0->f_1 = { -1807.28f, -347.87f, 163.65f };
			uParam0->f_9 = -770982987;
			uParam0->f_7 = 1615548247;
			uParam0->f_14 = -798350419;
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = -1311816336;
			uParam0->f_20 = { -1810.923f, -352.5239f, 161.4644f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@sitrelax_strawberry";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@stand_strawberry";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@sitwriting_strawberry";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_strawberry";
			sVar9 = "PB_DROPOFF";
			break;
		case 5:
			vVar0 = { 2502.43f, -1307.799f, 47.95231f };
			vVar3 = { 0f, 0f, 0f };
			uParam0->f_1 = { 2508.56f, -1309.07f, 48.41f };
			uParam0->f_9 = -770982987;
			uParam0->f_7 = 1615548247;
			uParam0->f_14 = -798350419;
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = -1311816336;
			uParam0->f_20 = { 2503.67f, -1307.946f, 48.97729f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@sitrelax_std";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@stand_std";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@sitwriting_std";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_std";
			sVar9 = "PB_DROPOFF";
			break;
		case 38:
			vVar0 = { -763.5278f, -1262.461f, 42.90836f };
			vVar3 = { 0f, 0f, -89.99999f };
			uParam0->f_9 = -770982987;
			if (uParam0->f_65 == 18)
			{
				uParam0->f_7 = 1883682934;
				uParam0->f_1 = { -761.53f, -1271.73f, 43.77f };
				sVar6 = "script@proc@bountyhunting@skinnersearch@sitrelax";
				sVar8 = "PB_RELAX_R_RELAX";
			}
			else
			{
				uParam0->f_7 = -1231539219;
				uParam0->f_1 = { -761.69f, -1266.73f, 43.05f };
				switch (uParam0->f_301)
				{
					case 1:
					case default:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@sitrelax_bw";
						sVar8 = "PB_RELAX_R_RELAX";
						break;
					case 0:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@stand_bw";
						sVar8 = "PB_STAND_R_LOOK";
						break;
					case 2:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@sitwriting_bw";
						sVar8 = "PB_WRITE_R_WRITE";
						break;
				}
			}
			uParam0->f_14 = -798350419;
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = -1311816336;
			uParam0->f_20 = { -763.6382f, -1263.701f, 44.04934f };
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_blackwater";
			sVar9 = "PB_DROPOFF";
			break;
		case 115:
			vVar0 = { -5529.901f, -2925.066f, -2.3753f };
			vVar3 = { 0f, 0f, 295f };
			uParam0->f_9 = -770982987;
			uParam0->f_7 = 1615548247;
			uParam0->f_1 = { -5530.877f, -2930.6f, -2.2877f };
			uParam0->f_14 = -798350419;
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = -1311816336;
			uParam0->f_20 = { -5529.466f, -2926.232f, -1.3503f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@sitrelax_tweed";
					sVar8 = "PB_RELAX_FL_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@stand_tweed";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@sitwriting_tweed";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_tumbleweed";
			sVar9 = "PB_DROPOFF";
			break;
	}
	if (uParam0->f_301 == 2)
	{
		uParam0->f_11 = -1947027049;
	}
	uParam0->f_5 = func_463(uParam0->f_300);
	uParam0->f_30[0] = 0;
	uParam0->f_30[0]->f_2 = { vVar0 };
	uParam0->f_30[0]->f_5 = { vVar3 };
	uParam0->f_30[0]->f_8 = sVar6;
	uParam0->f_30[0]->f_9 = sVar8;
	uParam0->f_30[0]->f_10 = 1;
	uParam0->f_30[0]->f_11 = 0;
	uParam0->f_30[0]->f_12 = 0;
	uParam0->f_30[1] = 0;
	uParam0->f_30[1]->f_2 = { vVar0 };
	uParam0->f_30[1]->f_5 = { vVar3 };
	uParam0->f_30[1]->f_8 = sVar7;
	uParam0->f_30[1]->f_9 = sVar9;
	uParam0->f_30[1]->f_10 = 0;
	uParam0->f_30[1]->f_11 = 0;
	uParam0->f_30[1]->f_12 = 1;
}

bool func_321()
{
	return func_464(_0xc17f69e1418cd11f(3));
}

bool func_322()
{
	if (func_465())
	{
		return true;
	}
	return false;
}

bool func_323(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 > -1 && iParam3 < *uParam0)
	{
		if (!is_string_null_or_empty((*uParam0)[iParam3]))
		{
			func_14(*uParam1, *uParam2, (*uParam0)[iParam3], 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			return true;
		}
	}
	return false;
}

bool func_324(var uParam0, float fParam1)
{
	if (func_67(uParam0, fParam1))
	{
		func_127(uParam0);
		return true;
	}
	return false;
}

int func_325(int iParam0, int iParam1)
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

int func_326(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_327(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_328(int iParam0, int iParam1)
{
	if (_0x61914209c36efddb(iParam0) == 7 || _0x61914209c36efddb(iParam0) == 8)
	{
		iVar0 = _get_carrier_as_mount(iParam0);
		if (func_45(iVar0, 0))
		{
			_0x2eb75fb86c41f026(iVar0, 3, 0);
			_0x2eb75fb86c41f026(iVar0, 1, 0);
		}
		if (iParam1 == 0)
		{
			return true;
		}
		if (func_45(iVar0, 0))
		{
			if (is_ped_on_mount(Global_35))
			{
				iVar1 = get_mount(Global_35);
				if (iVar0 == iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_329(int iParam0, int iParam1, bool bParam2)
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

void func_330(int iParam0)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_466(iParam0, 32);
	func_331();
}

void func_331()
{
	if (func_200(0))
	{
		func_467(0);
	}
	if (func_200(1))
	{
		func_467(1);
	}
	if (func_200(5))
	{
		func_467(5);
	}
	if (func_200(6))
	{
		func_468(6);
	}
}

bool func_332(int iParam0)
{
	if (_0x61914209c36efddb(iParam0) == 7 || _0x61914209c36efddb(iParam0) == 8)
	{
		iVar1 = _get_carrier_as_mount(iParam0);
		if (_0xefc4303ddc6e60d3(Global_35))
		{
			iVar0 = _0xed1f514af4732258(Global_35);
			if (iVar0 == iVar1)
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_333(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2903.174f, 1311.317f, 43.9893f;
		case 5:
			return 2503.365f, -1308.754f, 47.9537f;
		case 105:
			return 1358.246f, -1301.761f, 76.7606f;
		case 26:
			return -1811.682f, -353.0481f, 160.4039f;
		case 76:
			return -273.1385f, 809.027f, 118.38f;
		case 38:
			return -764.4813f, -1263.396f, 42.8484f;
		case 115:
			return -5529.103f, -2926.849f, -2.2884f;
	}
	return 0f, 0f, 0f;
}

bool func_334(var uParam0)
{
	fVar0 = get_disabled_control_normal(0, 1301263553);
	fVar1 = get_disabled_control_normal(0, -39308912);
	if (_is_anim_scene_started(uParam0->f_331, false) && _get_anim_scene_time(uParam0->f_331) > 3f)
	{
		if ((fVar0 > 0.1f || fVar0 < -0.1f) || (fVar1 > 0.1f || fVar1 < -0.1f))
		{
			remove_anim_scene_entity(uParam0->f_331, "player", Global_35);
			return true;
		}
	}
	return false;
}

bool func_335(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_336(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_337(int iParam0, bool bParam1)
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

bool func_338(var uParam0, int iParam1, char* sParam2)
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

int func_339(int iParam0, int iParam1)
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

int func_340(int iParam0, bool bParam1, bool bParam2)
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

bool func_341(int iParam0)
{
	if (func_224(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_342(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_341(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_343(int iParam0, bool bParam1)
{
	if (func_341(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_344(int iParam0, bool bParam1)
{
	if (func_341(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_345(int iParam0, bool bParam1)
{
	if (func_341(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_346()
{
	return true;
}

int func_347(var uParam0)
{
	return uParam0;
}

void func_348(int iParam0)
{
	if (!func_469(iParam0))
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

int func_349(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_470(iParam0, 1))
	{
		return 0;
	}
	if (func_291(func_290(iParam0)))
	{
		iVar1 = func_292(iParam0);
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
	if ((bParam4 && !func_140(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_451(iParam0, 1);
	func_471(iParam0);
	if (bParam3)
	{
		func_451(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_350(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_15(uParam0, 16);
	}
	else
	{
		func_21(uParam0, 67108864);
		func_21(uParam0, 16);
	}
}

void func_351(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_15(uParam0, 32);
	}
	else
	{
		func_21(uParam0, 32);
	}
}

void func_352(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_21(&(uParam0->f_1), 8);
	}
	else
	{
		func_15(&(uParam0->f_1), 8);
	}
}

void func_353(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_21(&(uParam0->f_1), 2);
	}
	else
	{
		func_15(&(uParam0->f_1), 2);
	}
}

void func_354(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_21(&(uParam0->f_1), 4);
	}
	else
	{
		func_15(&(uParam0->f_1), 4);
	}
}

Vector3 func_355(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2906.88f, 1313.98f, 44.32f;
		case 5:
			return 2510.23f, -1308.89f, 47.95f;
		case 105:
			return 1362.44f, -1301.61f, 76.76f;
		case 26:
			return -1808.22f, -347.41f, 163.65f;
		case 76:
			return -278.31f, 805.26f, 118.37f;
		case 38:
			return -763.94f, -1270.71f, 43.14f;
		case 115:
			return -5530.877f, -2930.6f, -2.2877f;
	}
	return 0f, 0f, 0f;
}

char* func_356(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			sVar0 = "ASB_Sheriff";
			break;
		case 5:
			sVar0 = "SD_PoliceChief";
			break;
		case 105:
			sVar0 = "RHD_sheriff";
			break;
		case 26:
			sVar0 = "STR_Sheriff";
			break;
		case 76:
			sVar0 = "VAL_Sheriff";
			break;
		case 38:
			sVar0 = "BLW_Police_Chief";
			break;
		case 115:
			sVar0 = "TWD_Sheriff";
			break;
		default:
			sVar0 = "VAL_Sheriff";
			break;
	}
	return sVar0;
}

void func_357(var uParam0, int iParam1)
{
	if (!func_472(iParam1, 1))
	{
		decor_set_bool(iParam1, "HAS_VOICE", true);
		set_ambient_voice_name(iParam1, func_473(uParam0->f_300));
	}
}

void func_358(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
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
	if (iParam0 == func_474(Global_35) && is_player_teleport_active())
	{
	}
	if (func_475(iParam0))
	{
		if (func_476(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_39(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_358(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_358(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!func_39(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_39(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_39(iParam5, 129))
	{
		if (func_39(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_39(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_39(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_475(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_39(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_39(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_359(var uParam0)
{
	iVar0 = func_258(uParam0->f_69, Global_35, 0.7f);
	if (uParam0->f_65 == 18)
	{
		if (iVar0 == 0 || iVar0 == 3)
		{
			if (is_entity_dead(uParam0->f_67))
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_DEAD_F_SHRFF";
				sVar2 = "RTN_DEAD_F_SHRFF";
			}
			else
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_ALIVE_F_SHRFF";
				sVar2 = "RTN_ALIVE_F_SHRFF";
			}
		}
		else if (is_entity_dead(uParam0->f_67))
		{
			sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_DEAD_B_SHRFF";
			sVar2 = "RTN_DEAD_B_SHRFF";
		}
		else
		{
			sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_ALIVE_B_SHRFF";
			sVar2 = "RTN_ALIVE_B_SHRFF";
		}
		_0x79197f7d2bb5e73a(uParam0->f_69, uParam0->f_371, sVar1, sVar2, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", 0);
		task_look_at_entity(uParam0->f_69, Global_35, -1, 0, 51, 0);
	}
	else if (uParam0->f_65 == 12)
	{
		if (iVar0 == 0)
		{
			if (is_entity_dead(uParam0->f_67))
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_FRONT_DEAD_DEPUTY";
				sVar2 = "ENTER_FRONT_DEAD_DEPUTY";
			}
			else
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_FRONT_ALIVE_DEPUTY";
				sVar2 = "ENTER_FRONT_ALIVE_DEPUTY";
			}
		}
		else
		{
			iVar0 = func_258(uParam0->f_69, Global_35, 1f);
			if (iVar0 == 3)
			{
				if (is_entity_dead(uParam0->f_67))
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_LEFT_DEAD_DEPUTY";
					sVar2 = "ENTER_LEFT_DEAD_DEPUTY";
				}
				else
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_LEFT_ALIVE_DEPUTY";
					sVar2 = "ENTER_LEFT_ALIVE_DEPUTY";
				}
			}
			else if (iVar0 == 2)
			{
				if (is_entity_dead(uParam0->f_67))
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_RIGHT_DEAD_DEPUTY";
					sVar2 = "ENTER_RIGHT_DEAD_DEPUTY";
				}
				else
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_RIGHT_ALIVE_DEPUTY";
					sVar2 = "ENTER_RIGHT_ALIVE_DEPUTY";
				}
			}
		}
		_0x79197f7d2bb5e73a(uParam0->f_69, uParam0->f_371, sVar1, sVar2, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", 0);
		task_look_at_entity(uParam0->f_69, Global_35, -1, 0, 51, 0);
	}
	else
	{
		_0xe7fa07624574b79a(uParam0->f_69, Global_35, 2, 1, -1f, 1, 0, 0, 0);
	}
}

bool func_360(var uParam0)
{
	if (uParam0->f_359)
	{
		return true;
	}
	if (is_ped_dead_or_dying(uParam0->f_67, true))
	{
		return func_39(uParam0->f_328, 33554432);
	}
	return func_39(uParam0->f_328, 16777216);
}

bool func_361(var uParam0)
{
	if (uParam0->f_358)
	{
		return true;
	}
	if (is_ped_dead_or_dying(uParam0->f_67, true))
	{
		return func_39(uParam0->f_328, -2147483648);
	}
	return func_39(uParam0->f_328, 1073741824);
}

char* func_362(int iParam0, bool bParam1)
{
	if (iParam0 == 78 && !bParam1)
	{
		return "WHOA";
	}
	return "GREET_PLAYER_CAPTURED_BOUNTY";
}

Vector3 func_363(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_65)
	{
		case 11:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BDUL_LAWGREET", 24);
				cVar0 = { func_387(cVar0) };
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "BDUL_LAWGREETSJ", 24);
			}
			break;
		case 153:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT03_GREET_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT03_GREET_A", 24);
				}
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "JVA_RBT5_RTRN_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "JVA_RBT5_RTRN_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (func_477(uParam0->f_65, 16))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "JVA_RBT5_DEAD_J", 24);
					}
					else
					{
						StringCopy(&cVar0, "JVA_RBT5_DEAD_A", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "JVA_RBT5_ALVE_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "JVA_RBT5_ALVE_A", 24);
				}
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "BRA_DELIVER_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "BRA_DELIVER_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (func_477(uParam0->f_65, 8))
				{
					StringCopy(&cVar0, "BRA_DEL_S_WK", 24);
				}
				else
				{
					StringCopy(&cVar0, "BRA_DELIVER_S", 24);
				}
			}
			else if (iParam1 == 2)
			{
				if (func_477(uParam0->f_65, 8))
				{
					StringCopy(&cVar0, "BRA_PLYR_KILL_", 24);
					cVar0 = { func_387(cVar0) };
				}
				else if (func_39(uParam0->f_329, 32768))
				{
					StringCopy(&cVar0, "BRA_PLYR_ATK_", 24);
					cVar0 = { func_387(cVar0) };
				}
				else
				{
					StringCopy(&cVar0, "BRA_PLR_ATKN_", 24);
					cVar0 = { func_387(cVar0) };
				}
			}
			else if (iParam1 == 3)
			{
				if (func_39(uParam0->f_329, 32768))
				{
					StringCopy(&cVar0, "BRA_PLYR_ATK_JN", 24);
				}
			}
			break;
		case 154:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "RBT12_GREET_DJ", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBT12_GREET_D", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "RBT12_GRT_AJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT12_GREET_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT12_GREET_DS", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT12_GRT_AS", 24);
				}
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				if (func_477(uParam0->f_65, 32))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "RBT14_GREET_AJ1", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBT14_GREET_A", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "RBT14_GREET_J12", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT14_GREET_A2", 24);
				}
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT14_GREET_AS", 24);
			}
			else if (iParam1 == 2)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "RBT14_GREET_AJ2", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT14_GREET_AA", 24);
				}
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "RBCON_IG3_P1_J", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBCON_IG3_P1", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "RBCON_IG2_P1_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBCON_IG2_P1", 24);
				}
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "NBX_SDS_ALV", 24);
				cVar0 = { func_387(cVar0) };
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "NBX_SDS_ALVR", 24);
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT20_IG3_DEAD", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT20_IG3_ALIVE", 24);
				}
			}
			break;
		case 155:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT21_RTRNAWKJ", 24);
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_GREET_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT18_GREET_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (!func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_RTNAWAKE", 24);
				}
			}
			break;
		case 19:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT22_IG7_B", 24);
			}
			break;
		case 20:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT23_BDM_D", 24);
					cVar0 = { func_387(cVar0) };
				}
				else
				{
					StringCopy(&cVar0, "RBT23_BDM_A", 24);
					cVar0 = { func_387(cVar0) };
				}
			}
			break;
	}
	return cVar0;
}

void func_364(var uParam0)
{
	if (uParam0->f_5 != 0)
	{
		if (!does_entity_exist(uParam0->f_4))
		{
			func_230(uParam0);
		}
	}
	if (uParam0->f_7 != 0)
	{
		if (!does_entity_exist(uParam0->f_6))
		{
			if (uParam0->f_26 == 0)
			{
				uParam0->f_26 = _0x6f3068258a499e52(uParam0->f_7, uParam0->f_1, 7);
			}
			else if (_0x1ff441d7954f8709(uParam0->f_26))
			{
				uParam0->f_6 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_26));
			}
		}
	}
	if (uParam0->f_11 != 0)
	{
		if (!does_entity_exist(uParam0->f_10))
		{
			uParam0->f_10 = create_object(uParam0->f_11, uParam0->f_1, true, true, false, false, true);
		}
	}
}

void func_365(var uParam0)
{
	if (!does_entity_exist(uParam0->f_13))
	{
		if (uParam0->f_29 == 0)
		{
			uParam0->f_29 = _0x6f3068258a499e52(uParam0->f_14, uParam0->f_15, 7);
		}
		else if (_0x1ff441d7954f8709(uParam0->f_29))
		{
			uParam0->f_13 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_29));
		}
	}
	if (!does_entity_exist(uParam0->f_18))
	{
		if (uParam0->f_28 == 0)
		{
			uParam0->f_28 = _0x6f3068258a499e52(uParam0->f_19, uParam0->f_20, 7);
		}
		else if (_0x1ff441d7954f8709(uParam0->f_28))
		{
			uParam0->f_18 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_28));
		}
	}
}

int func_366(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1]->f_10)
	{
		if (!does_entity_exist(uParam0->f_69))
		{
			return 1;
		}
		if (uParam0->f_5 != 0)
		{
			if (!does_entity_exist(uParam0->f_4))
			{
				return 1;
			}
			if (!does_entity_have_drawable(uParam0->f_4))
			{
				return 1;
			}
		}
		if (uParam0->f_7 != 0)
		{
			if (!does_entity_exist(uParam0->f_6))
			{
				return 1;
			}
			if (!does_entity_have_drawable(uParam0->f_6))
			{
				return 1;
			}
		}
		if (uParam0->f_11 != 0)
		{
			if (!does_entity_exist(uParam0->f_10))
			{
				return 1;
			}
			if (!does_entity_have_drawable(uParam0->f_10))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_367(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1]->f_12)
	{
		if (!does_entity_exist(uParam0->f_13) || !does_entity_exist(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

bool func_368(var uParam0, int iParam1)
{
	if ((uParam0->f_30[iParam1]->f_11 || uParam0->f_30[iParam1]->f_12) && !does_entity_exist(uParam0->f_67))
	{
		return false;
	}
	if (_does_anim_scene_exist(uParam0->f_30[iParam1]->f_1))
	{
		if (_is_anim_scene_loaded(uParam0->f_30[iParam1]->f_1, true, false))
		{
			uParam0->f_30[iParam1] = 1;
			return true;
		}
	}
	else
	{
		if (!is_string_null_or_empty(uParam0->f_30[iParam1]->f_9))
		{
			uParam0->f_30[iParam1]->f_1 = _create_anim_scene(uParam0->f_30[iParam1]->f_8, uParam0->f_30[iParam1]->f_13, uParam0->f_30[iParam1]->f_9, false, true);
		}
		else
		{
			uParam0->f_30[iParam1]->f_1 = _create_anim_scene(uParam0->f_30[iParam1]->f_8, uParam0->f_30[iParam1]->f_13, 0, false, true);
		}
		if (_does_anim_scene_exist(uParam0->f_30[iParam1]->f_1))
		{
			func_478(uParam0, iParam1);
			func_479(uParam0, iParam1);
			func_480(uParam0, iParam1);
			load_anim_scene(uParam0->f_30[iParam1]->f_1);
		}
	}
	return false;
}

int func_369(int iParam0)
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

void func_370(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_481();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_482(iParam0);
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
	if (func_372(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_101())
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
	Global_40.f_11095.f_35 = func_392(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_481();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_483(iVar1);
		func_485(func_484(), 0, 4000);
		func_486(Global_40.f_11095.f_35);
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
		func_487(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_399(func_398(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_369(14))
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
					sParam4 = func_488(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_489(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_489(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_399(func_398(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_369(4))
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
					sParam4 = func_488(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_489(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_489(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_398(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_490(10, 1);
	}
}

void func_371(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_372(int iParam0)
{
	if (!func_491(iParam0))
	{
		return false;
	}
	return func_492(iParam0);
}

int func_373()
{
	return Global_40.f_4283.f_1;
}

int func_374(int iParam0)
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

int func_375(int iParam0, bool bParam1)
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
			if (!bParam1 || func_215() != -1)
			{
				return -1308265478;
			}
			if (func_372(45))
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
			if (!bParam1 || func_215() != -1)
			{
				return -650528936;
			}
			if (func_372(45))
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
			if (!bParam1 || func_215() != -1)
			{
				return -877373104;
			}
			if (func_372(45))
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

void func_376(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	Global_40.f_9829[iParam0]->f_1 = iParam1;
	Global_40.f_9829[iParam0] = iParam2;
	Global_40.f_9829[iParam0]->f_2 = 0;
	Global_40.f_9829[iParam0]->f_3 = iParam3;
}

void func_377(int iParam0, int iParam1)
{
	iVar3 = -1;
	iVar1 = func_219(iParam1);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0] == iParam1)
		{
			if (iVar3 >= 0)
			{
				func_376(iVar3, Global_40.f_9829[iVar0]->f_1, iParam1, Global_40.f_9829[iVar0]->f_3);
			}
			iVar3 = iVar0;
			iVar2++;
			if (iVar2 == iVar1)
			{
				func_376(iVar0, iParam0, iParam1, 0);
				return;
			}
		}
		iVar0++;
	}
}

bool func_378(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
	}
	return _is_metaped_using_component(iParam0, iParam1);
}

void func_379(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_15(&(Global_40.f_9829[iParam0]->f_2), iParam1);
}

void func_380(int iParam0)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_493(iParam0, 32);
	func_331();
}

int func_381(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_494(vVar3, vVar6);
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
	if (func_495(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_382(char* sParam0, char* sParam1, char* sParam2)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	if (is_string_null(sParam1))
	{
		return;
	}
	if (is_string_null(sParam2))
	{
		return;
	}
	_uilog_set_cached_objective(_create_var_string(42, sParam0, sParam1, sParam2));
}

char* func_383(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_496(sParam1));
}

void func_384(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_497(iParam0);
	if (!_uilog_is_entry_registered(iVar0, func_498(iParam0)))
	{
		return;
	}
	_uilog_add_or_update_objective(iVar0, func_498(iParam0), get_hash_key(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_385(char* sParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	if (is_string_null(sParam1))
	{
		return;
	}
	_uilog_set_cached_objective(_create_var_string(10, sParam0, sParam1));
}

void func_386(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	_uilog_set_cached_objective(_create_var_string(2, sParam0));
}

Vector3 func_387(char[12] cParam0)
{
	if (func_101())
	{
		StringConCat(&cParam0, "J", 24);
	}
	else
	{
		StringConCat(&cParam0, "A", 24);
	}
	return cParam0;
}

int func_388(int iParam0)
{
	iVar0 = func_500(func_499(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_389(var uParam0)
{
	if (func_390(81053684, uParam0))
	{
		return true;
	}
	if (func_390(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_390(int iParam0, var uParam1)
{
	iVar1 = func_500(func_499(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_501(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_391()
{
	if (func_215() != -1)
	{
		return 0;
	}
	return func_502(661720433);
}

int func_392(int iParam0, int iParam1, int iParam2)
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

bool func_393()
{
	return Global_1347398->f_1 == 0;
}

void func_394(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_395()
{
	return Global_1347398->f_1 == 1000;
}

bool func_396()
{
	return Global_1347398->f_1 == 2000;
}

bool func_397()
{
	return Global_1347398->f_1 == 3000;
}

struct<2> func_398(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_399(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_400()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_401(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_402(int iParam0)
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

int func_403(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_503(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_400())
	{
		return -1;
	}
	iVar0 = func_401(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_504(iVar1, 0);
	func_406(iVar1, 0);
	func_410(iVar1, 0);
	func_408(iVar1, 0);
	func_505(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_506(iVar1, iParam4);
	}
	return iVar1;
}

bool func_404(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_405(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_406(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_407(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

void func_408(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

int func_409(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

void func_410(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_411(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = uParam1;
}

int func_412(int iParam0, int iParam1)
{
	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_314(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_187(iParam0, 1399091007))
	{
		func_507(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_413(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_186(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_508())
	{
		func_509(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_510(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_510(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_511(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_314(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_512(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_514(_create_var_string(10, &cVar2, _create_var_string(0, func_513(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_187(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_513(iParam0));
	}
	func_489(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_414(int iParam0)
{
	if (!func_186(iParam0, 0))
	{
		return Var0;
	}
	if (func_187(iParam0, -305066475))
	{
		if (func_215() == -1)
		{
			if (func_187(iParam0, -537818634))
			{
				return func_398(189951448);
			}
			else
			{
				return func_398(1176172851);
			}
		}
	}
	else if (func_187(iParam0, -537818634))
	{
		return func_398(-963660207);
	}
	if (func_187(iParam0, 2084895747))
	{
		return func_398(1694039471);
	}
	return Var2;
}

bool func_415(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_515(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_517(&Var0, func_516(0));
	}
	if (!func_518(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_457(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_519(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_459(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_416(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_186(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_520(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_521(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_522(iParam0, Var0, Var0.f_4, bParam4) };
	return func_519(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_417(bool bParam0)
{
	if (func_215() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_461(bParam0));
}

void func_418(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_187(iParam0, 606799272))
		{
			func_523(iParam0, iParam1);
		}
		if (func_187(iParam0, -1112814642) && func_187(iParam0, -1697809989))
		{
			func_524(iParam0, iParam1, 1, 0);
		}
	}
}

void func_419(var uParam0, bool bParam1, int iParam2)
{
	func_525(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!does_entity_exist(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639->f_11)
		{
			return;
		}
		if (Global_1225639->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_526(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_15(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_527(1))
						{
							func_15(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_527(1) || *uParam0 & 8192 != 0))
				{
					func_21(uParam0, 33554432);
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
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_14))
		{
			if (func_528(uParam0))
			{
				uParam0->f_15 = func_438();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_438() - uParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_529(uParam0);
}

bool func_420(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = _0x822a001bcea5bd81(iParam0, iVar0, 0, 0);
			if (!is_entity_a_ped(iVar1))
			{
				return false;
			}
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (!is_ped_human(iVar2))
			{
				return false;
			}
			if (decor_exist_on(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return false;
			}
			if (!func_530(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_531(iParam0, iVar2) <= func_532(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_421(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_533(iParam2, 1, 1, 1, 0))
	{
		func_15(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_534(uParam1, 1);
	func_535();
}

bool func_422(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_536(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_537(uParam1);
			if (func_538(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_539(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_534(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_534(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_423(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_540(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_537(uParam2);
		if (func_538(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_539(uParam2)
				{
					func_534(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_424(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_530(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_539(uParam1)
		{
			fVar3 = func_537(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_425(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_426(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_541(uParam2);
			if (!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1935630->f_46) && _0xea522f991e120d45(Global_1935630->f_46))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261) || (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46)))
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
			if (func_434(uParam2, iParam1))
			{
				func_534(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_427(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_542(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_434(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_534(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_428(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_543(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_534(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_534(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_544(iParam1, vVar0, vVar4))
					{
						func_534(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_534(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_544(iParam1, vVar0, vVar7))
					{
						func_534(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_429(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_530(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_545(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_546(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_547(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_548(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_549(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_430(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(*iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = _0x822a001bcea5bd81(*iParam0, iVar0, 0, 0);
			iVar2 = _0x38497f139981c5c9(*iParam0, iVar0, 0, 0);
			vVar5 = { get_entity_coords(iVar1, false, false) };
			vVar8 = { get_entity_coords(iVar2, false, false) };
			_0x1a5c5d350068a673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_431(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_432(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1))
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
		if (func_550(iVar0, &iVar2))
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
	if (func_551(iVar0, iParam0))
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

int func_433(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_434(var uParam0, int iParam1)
{
	if (func_552(uParam0))
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
	if ((is_ped_performing_melee_action(Global_35, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_35) != 0)
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

bool func_435(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_175(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_436()
{
}

bool func_437(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_553(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_438();
			return true;
		}
		else if (_0xa19447d83294e29f(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = _get_ped_in_draft_seat(iVar0, iVar6);
					if (does_entity_exist(iVar7))
					{
						if (func_157(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_438();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_438()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_439()
{
	if (Global_1935630->f_42 == 0)
	{
		return false;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return false;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return false;
	}
	if ((func_438() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_440(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_532(uParam0);
	if (uParam0->f_12 > func_554(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_555(iParam1);
	iVar1 = func_556(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_441(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_557(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_442(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_285(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_35);
	if (does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar1 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_35)
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x88ad6cc10d8d35b2(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			return true;
		case -1601932249:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!func_449(uParam1, iParam0))
					{
						if (func_157(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_443(int iParam0, var uParam1)
{
	if (!func_558(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_444(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_445(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_446(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_438();
	}
	else if (func_438() - uParam1->f_4) > func_559(uParam1)
	{
		return func_560(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_447(var uParam0, int iParam1)
{
	iVar0 = get_ped_source_of_death(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return true;
	}
	return false;
}

bool func_448(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1935630->f_32))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1935630->f_33))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_33))
		{
			if (_is_ped_hogtied(Global_1935630->f_33) || is_entity_dead(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !is_ped_injured(Global_35))
	{
		iVar1 = _get_lassoed_entity(Global_35);
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

bool func_449(var uParam0, int iParam1)
{
	if (decor_exist_on(iParam1, "bIsCriminal") && decor_get_bool(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (get_ped_config_flag(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = get_ped_relationship_group_default_hash(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return true;
		default:
			break;
	}
	return false;
}

int func_450(int iParam0)
{
	iVar0 = func_292(iParam0);
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

void func_451(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	if (!func_286(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_452(int iParam0, int iParam1)
{
	if (!func_286(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_453(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_454(int iParam0)
{
	if (!func_404(iParam0))
	{
		return -1;
	}
	return func_561(iParam0);
}

int func_455(int iParam0)
{
	if (!func_312(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

bool func_456(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_461(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_457(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_458(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_459(int iParam0)
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

int func_460(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_515(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_517(&Var0, func_516(0));
	}
	if (!func_518(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_459(iVar14);
	return uVar15;
}

int func_461(bool bParam0)
{
	if (func_215() == -1)
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

void func_462(var uParam0)
{
	if (func_562(uParam0->f_65))
	{
		uParam0->f_301 = 0;
	}
	else if (func_563(uParam0->f_65))
	{
		uParam0->f_301 = 2;
	}
	else if (func_564(uParam0->f_65))
	{
		uParam0->f_301 = 1;
	}
	else if (uParam0->f_300 != 78)
	{
		iVar0 = get_random_int_in_range(0, 3);
		uParam0->f_301 = iVar0;
	}
	else if (func_565())
	{
		uParam0->f_301 = 1;
	}
	else
	{
		uParam0->f_301 = 0;
	}
}

int func_463(int iParam0)
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

bool func_464(int iParam0)
{
	return iParam0 != 0;
}

bool func_465()
{
	return func_566(1);
}

void func_466(int iParam0, int iParam1)
{
	iParam0 = func_327(iParam0);
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

void func_467(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_201(iParam0);
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
	if (func_567(iParam0, 64))
	{
		func_468(iParam0);
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
	bVar3 = func_372(42);
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
				func_568(&((*Global_1900383)[iParam0]->f_27));
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
		func_468(iParam0);
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
		if (func_569(1) < 1)
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
		func_570(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_567(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_571(iParam0);
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
	fVar15 = func_572(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_573(iParam0))
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
		func_574((*Global_1900383)[iParam0]->f_26);
		func_575((*Global_1900383)[iParam0]->f_26);
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
	if (func_476(iVar0) && !bVar9)
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
	iVar21 = func_569(iParam0);
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

void func_468(int iParam0)
{
	iParam0 = func_327(iParam0);
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

bool func_469(int iParam0)
{
	return func_576(iParam0, 2);
}

bool func_470(int iParam0, bool bParam1)
{
	if (!func_286(iParam0))
	{
		return false;
	}
	if ((func_287(iParam0, 1) && !func_140(iParam0)) && func_141(iParam0))
	{
		return false;
	}
	if (!func_287(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_577(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_471(int iParam0)
{
	if (!func_286(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_472(int iParam0, int iParam1)
{
	if (decor_exist_on(iParam0, "HAS_VOICE") && decor_get_bool(iParam0, "HAS_VOICE"))
	{
		return true;
	}
	if (iParam1 && _0xf0ee69f500952fa5(iParam0))
	{
		return true;
	}
	return false;
}

char* func_473(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			sVar0 = "0034_U_M_O_AsbSheriff_01";
			break;
		case 5:
			sVar0 = "1017_U_M_M_SDPoliceChief_01";
			break;
		case 105:
			sVar0 = "0405_U_M_M_RhdSheriff_01";
			break;
		case 26:
			sVar0 = "0457_U_M_M_StrSherriff_01";
			break;
		case 76:
			sVar0 = "0484_U_M_M_ValSheriff_01";
			break;
		case 38:
			sVar0 = "0085_U_M_O_BlWPoliceChief_01";
			break;
		case 115:
			sVar0 = "TWD_Sheriff";
			break;
		default:
			sVar0 = "0484_U_M_M_ValSheriff_01";
			break;
	}
	return sVar0;
}

int func_474(var uParam0)
{
	return uParam0;
}

bool func_475(int iParam0)
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

bool func_476(int iParam0)
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

bool func_477(int iParam0, int iParam1)
{
	iVar0 = func_278((*Global_1347702)[iParam0]->f_15);
	if (func_39(iVar0, iParam1))
	{
		return true;
	}
	return false;
}

void func_478(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1]->f_11 || uParam0->f_30[iParam1]->f_12)
	{
		set_anim_scene_entity(uParam0->f_30[iParam1]->f_1, func_578(uParam0->f_300), uParam0->f_67, 0);
	}
	if (uParam0->f_30[iParam1]->f_12)
	{
		set_anim_scene_entity(uParam0->f_30[iParam1]->f_1, func_241(uParam0->f_300), Global_35, 0);
	}
}

void func_479(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1]->f_12)
	{
		set_anim_scene_entity(uParam0->f_30[iParam1]->f_1, func_579(uParam0->f_300), uParam0->f_13, 0);
		set_anim_scene_entity(uParam0->f_30[iParam1]->f_1, func_580(uParam0->f_300), uParam0->f_18, 0);
	}
}

void func_480(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1]->f_10)
	{
		set_anim_scene_entity(uParam0->f_30[iParam1]->f_1, "Sheriff", uParam0->f_69, 0);
		set_anim_scene_entity(uParam0->f_30[iParam1]->f_1, "DESK", uParam0->f_6, 0);
		set_anim_scene_entity(uParam0->f_30[iParam1]->f_1, "Chair", uParam0->f_4, 0);
		if (does_entity_exist(uParam0->f_10))
		{
			set_anim_scene_entity(uParam0->f_30[iParam1]->f_1, "BOOK", uParam0->f_10, 0);
		}
	}
}

int func_481()
{
	iVar0 = func_581();
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

int func_482(int iParam0)
{
	if (func_215() != -1)
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
	fVar1 = func_582(absf(fVar1) < 1f, func_582(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_483(int iParam0)
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

int func_484()
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

void func_485(int iParam0, bool bParam1, int iParam2)
{
	func_583((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_584(iParam0);
}

void func_486(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_585(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_487(bool bParam0)
{
	bVar3 = false;
	if (func_586(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_587(iVar5, &iVar2, &iVar0))
			{
				if (!func_186(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_588(iVar2);
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
							if (func_314(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_481() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_481() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_589();
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

char* func_488(int iParam0)
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

var func_489(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_590(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_490(int iParam0, int iParam1)
{
	if (!func_591(iParam0))
	{
		return 0;
	}
	if (!func_592())
	{
		return 0;
	}
	if (!func_593(iParam0, &iVar0, &uVar1))
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

bool func_491(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_492(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_493(int iParam0, int iParam1)
{
	iParam0 = func_327(iParam0);
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

float func_494(vector3 vParam0, vector3 vParam3)
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

bool func_495(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

char* func_496(char* sParam0)
{
	return sParam0;
}

int func_497(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_498(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

int func_499(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_594(iVar0);
}

int func_500(int iParam0, int iParam1)
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

int func_501(int iParam0)
{
	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

var func_502(int iParam0)
{
	Var1 = { func_398(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

bool func_503(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_504(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_595(iParam0);
	}
	else
	{
		func_596(iParam0, iParam1);
	}
	func_597();
}

void func_505(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_506(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

void func_507(int iParam0, var uParam1, var uParam2)
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

bool func_508()
{
	return !&Global_1911774;
}

void func_509(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_510(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_511(int iParam0, int iParam1)
{
	if (!func_186(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_512(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_513(int iParam0)
{
	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_514(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

struct<14> func_515(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_516(bool bParam0)
{
	iVar0 = func_461(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_522(923904168, func_598(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_522(923904168, func_598(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_522(923904168, func_598(bParam0), -740156546, 0);
}

void func_517(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_518(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_461(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_519(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_599(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_600(*uParam1, &Var0, bParam6, 0))
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
	if (!func_417(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_461(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

struct<5> func_520(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_598(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_314(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_522(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_516(bParam1) };
			if (bParam2 && func_601(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_602(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_602(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_603(iParam0, &Var5, 1728382685))
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
			Var0 = { func_604(bParam1) };
			switch (func_501(iParam0))
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
			if (func_605(iParam0, -1823706425))
			{
				Var0 = { func_522(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_605(iParam0, -1483207246))
			{
				Var0 = { func_522(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_600(Var0, &Var27, bParam1, 0))
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

bool func_521(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_599(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_417(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_461(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> func_522(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_186(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_461(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_523(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_215() == -1)
	{
		if (func_606(43))
		{
			if (func_187(iParam0, 412399755))
			{
				func_607(-1791518714);
				if (func_608() == 0)
				{
					func_609(0, 10);
					iVar0 = func_610(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_611(iParam0) < func_612(iParam0))
						{
							func_613(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_606(44))
		{
			if (func_187(iParam0, 709057512))
			{
				func_607(-2087881550);
				if (func_608() == 1)
				{
					func_609(0, 10);
					iVar0 = func_610(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_611(iParam0) < func_612(iParam0))
						{
							func_613(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(45))
		{
			if (func_187(iParam0, -1478961327))
			{
				func_607(1908068621);
				if (func_608() == 2)
				{
					func_609(0, 10);
					iVar0 = func_610(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_611(iParam0) < func_612(iParam0))
						{
							func_613(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(46))
		{
			if (func_187(iParam0, -1238404098))
			{
				func_607(1611247019);
				if (func_608() == 3)
				{
					func_609(0, 10);
					iVar0 = func_610(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_611(iParam0) < func_612(iParam0))
						{
							func_613(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(47))
		{
			if (func_187(iParam0, 1160548794))
			{
				func_607(1319635688);
				if (func_608() == 4)
				{
					func_609(0, 10);
					iVar0 = func_610(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_611(iParam0) < func_612(iParam0))
						{
							func_613(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_524(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_185(func_614(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_615(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_616(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_525(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_617();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = get_game_timer();
	}
	if (is_weapon_valid(Global_1935630->f_44))
	{
		if (is_ped_shooting(Global_35))
		{
			if (get_current_ped_vehicle_weapon(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_618(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == 2055893578)
				{
					Global_1935630->f_30 = _get_lassoed_entity(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case 2055893578:
					Global_1935630->f_25 = 0;
					break;
				default:
					if (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46))
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = get_frame_count();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_526(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_527(bool bParam0)
{
	if (func_448(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_528(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_215() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_619(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_619(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_556(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_529(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_620(uParam0);
	}
}

bool func_530(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam2))
	{
		iVar1 = func_556(iParam2);
	}
	else
	{
		iVar1 = func_555(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_556(iParam0);
	}
	else
	{
		iVar0 = func_555(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_12(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = get_ped_relationship_group_hash(iParam0);
	iVar3 = get_ped_relationship_group_hash(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_531(int iParam0, int iParam1)
{
	return func_175(iParam0, iParam1, 1, 1);
}

float func_532(var uParam0)
{
	return uParam0->f_26;
}

bool func_533(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_534(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_15(uParam0, 134217728);
	}
	else
	{
		func_21(uParam0, 134217728);
	}
}

void func_535()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_536(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_175(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_621(iVar0, 0)))
		{
			if (func_622(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_537(var uParam0)
{
	return uParam0->f_17;
}

bool func_538(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_12(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_539(var uParam0)
{
	return uParam0->f_18;
}

bool func_540(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_621(iVar0, 0)))
		{
			if (func_623(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_541(var uParam0)
{
	return uParam0->f_23;
}

int func_542(var uParam0)
{
	return uParam0->f_21;
}

int func_543(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_544(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_453(iParam0, vParam4, 0.5f))
	{
		if (_0x0c9dbf48c6ba6e4c(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (vdist(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_545(int iParam0)
{
	if (get_ped_config_flag(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == -1569615261)
		{
			return 1;
		}
		if (is_weapon_valid(Global_1935630->f_46))
		{
			if (_is_weapon_melee(Global_1935630->f_46) || _is_weapon_bow(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_624(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_546(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

bool func_547(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_625(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_548(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_625(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_549(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_625(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x2ba9d7bf629f920c(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (has_entity_clear_los_to_entity(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (_0x06087579e7aa85a9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_550(int iParam0, int iParam1)
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

bool func_551(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_626(iParam0, 1, 0, 0) != 2055893578)
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

bool func_552(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_553(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_157(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_554(var uParam0)
{
	return uParam0->f_24;
}

int func_555(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamA") && decor_get_bool(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamB") && decor_get_bool(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_556(int iParam0)
{
	if (!decor_exist_on(iParam0, "HorseScriptCreator") || decor_get_int(iParam0, "HorseScriptCreator") != get_hash_of_this_script_name())
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

int func_557(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (has_entity_been_damaged_by_entity(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 11, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_550(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (is_ped_ragdoll(iParam0) || (!bParam2 && is_entity_touching_entity(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_175(iParam0, player_ped_id(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_175(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (is_entity_touching_entity(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (is_ped_ragdoll(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_558(int iParam0)
{
	if (func_101())
	{
		return false;
	}
	return func_299((*Global_1347702)[58]->f_15, 1);
}

int func_559(var uParam0)
{
	return uParam0->f_20;
}

int func_560(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_561(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_627(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_562(int iParam0)
{
	if (((iParam0 == 14 || iParam0 == 11) || iParam0 == 154) || iParam0 == 17)
	{
		return true;
	}
	return false;
}

bool func_563(int iParam0)
{
	if ((iParam0 == 13 || iParam0 == 16) || iParam0 == 155)
	{
		return true;
	}
	return false;
}

bool func_564(int iParam0)
{
	if (((((iParam0 == 153 || iParam0 == 15) || iParam0 == 18) || iParam0 == 20) || iParam0 == 19) || iParam0 == 12)
	{
		return true;
	}
	return false;
}

bool func_565()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_566(int iParam0)
{
	return (Global_1935496 && iParam0) != 0;
}

bool func_567(int iParam0, int iParam1)
{
	iParam0 = func_327(iParam0);
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

void func_568(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_629(func_628(255), 109029619));
	}
	else if (func_630())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_101();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_569(int iParam0)
{
	iParam0 = func_327(iParam0);
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

void func_570(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_629(func_628(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_630())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_101())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_571(int iParam0)
{
	iParam0 = func_327(iParam0);
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

float func_572(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_573(int iParam0)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_631(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_569(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_569(iParam0) + 1;
	fVar6 = func_632(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_633(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_574(int iParam0)
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

void func_575(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_576(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_577(int iParam0, bool bParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_286(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_292(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_450(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_292(iParam0));
}

char* func_578(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "Bounty";
		case 105:
			return "Target";
		case 78:
			return "Bounty";
		case 26:
			return "Bounty";
		case 5:
			return "Bounty";
		case 38:
			return "Bounty";
		case 115:
			return "Bounty";
	}
	return "";
}

char* func_579(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "CellDoor";
		case 105:
			return "Door";
		case 78:
			return "CellDoor";
		case 26:
			return "CellDoor";
		case 5:
			return "CellDoor";
		case 38:
			return "CellDoor";
		case 115:
			return "CellDoor";
	}
	return "";
}

char* func_580(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "CellDoorLock";
		case 105:
			return "lock";
		case 78:
			return "CellDoorLock";
		case 26:
			return "CellDoorLock";
		case 5:
			return "CellDoorLock";
		case 38:
			return "CellDoorLock";
		case 115:
			return "CellDoorLock";
	}
	return "";
}

int func_581()
{
	return Global_40.f_11095.f_35;
}

float func_582(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_583(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_634(bParam1);
	}
}

void func_584(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_585(int iParam0)
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

bool func_586(int iParam0)
{
	if (!func_635(23, &vVar0))
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

bool func_587(int iParam0, int iParam1, int iParam2)
{
	if (!func_635(23, &Var0))
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

int func_588(int iParam0)
{
	return iParam0;
}

int func_589()
{
	iVar0 = func_481();
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

void func_590(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_591(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_592()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_593(int iParam0, int iParam1, var uParam2)
{
	if (!func_591(iParam0))
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

int func_594(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_636(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_595(int iParam0)
{
	iVar0 = func_627(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_637(iVar0);
}

int func_596(int iParam0, int iParam1)
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
			func_638(iVar2);
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

void func_597()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

struct<4> func_598(bool bParam0)
{
	return func_522(1328661203, func_639(), -1591664384, bParam0);
}

bool func_599(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_600(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_461(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_601(int iParam0, bool bParam1)
{
	if (func_501(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_372(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_602(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_640(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_603(int iParam0, var uParam1, int iParam2)
{
	if (func_641(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_604(bool bParam0)
{
	iVar0 = func_461(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_522(271701509, func_598(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_522(271701509, func_598(bParam0), 12999093, 0);
}

bool func_605(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_501(iParam0);
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

bool func_606(int iParam0)
{
	if (func_215() != -1)
	{
		return false;
	}
	return func_299((*Global_1347702)[iParam0]->f_15, 1);
}

void func_607(int iParam0)
{
	if (!func_642(iParam0))
	{
		func_644(func_643(iParam0));
	}
}

int func_608()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_642(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_609(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_645(&Global_0, 8);
	}
	if (!func_592() || func_215() != -1)
	{
		return;
	}
	func_645(&Global_0, 1);
}

int func_610(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_611(iVar9);
	iVar2 = func_611(iVar10);
	iVar3 = func_611(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_611(iVar12);
	}
	iVar5 = func_612(iVar9);
	iVar6 = func_612(iVar10);
	iVar7 = func_612(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_612(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_611(int iParam0)
{
	if (func_185(iParam0, 1, 0))
	{
		iVar0 = func_316(iParam0, 0, 0);
	}
	return iVar0;
}

int func_612(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

void func_613(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_592() && (func_646(38) || func_606(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_592() && (func_646(39) || func_606(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_647(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_592() && (func_646(41) || func_606(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_592() && (func_646(49) || func_606(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_647(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_648(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_649(iParam0, iVar13, iVar14))
	{
	}
	if (func_650(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_651(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_652(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_653(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_654(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_614(int iParam0, int iParam1)
{
	if (!func_635(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_615(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_614(iParam1, 5) || iParam0 == func_614(iParam1, 6)) || iParam0 == func_614(iParam1, 7)) || iParam0 == func_614(iParam1, 8)) || iParam0 == func_614(iParam1, 9))
	{
		func_655(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_613(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_656(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_616(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_614(iParam1, 5) || iParam0 == func_614(iParam1, 6)) || iParam0 == func_614(iParam1, 7)) || iParam0 == func_614(iParam1, 8)) || iParam0 == func_614(iParam1, 9))
	{
		if (func_655(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_613(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_656(51, 0, 0, iVar0, func_647(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_613(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_656(51, 0, 0, iVar0, func_647(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_617()
{
	if (func_657())
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return false;
}

void func_618(var uParam0, var uParam1)
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

int func_619(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
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
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_35);
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

void func_620(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_21(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_15(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_621(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_622(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_623(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_623(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_624(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !is_entity_dead(iParam0))
	{
		if (_0x9e2d5d6bc97a5f1e(iParam0, -1569615261, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (is_weapon_valid(Global_1935630->f_44))
			{
				if (_is_weapon_melee(Global_1935630->f_44) || Global_1935630->f_44 == -618550132)
				{
					if (_0x9e2d5d6bc97a5f1e(iParam0, Global_1935630->f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_625(int iParam0)
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
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
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

int func_626(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_627(int iParam0)
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

char* func_628(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_658(37, iParam0))
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
	if (func_658(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_629(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_514(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_630()
{
	if (func_215() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

int func_631(int iParam0)
{
	iParam0 = func_327(iParam0);
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

float func_632(int iParam0)
{
	iParam0 = func_327(iParam0);
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

float func_633(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_634(bool bParam0)
{
	func_659(bParam0);
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

bool func_635(int iParam0, var uParam1)
{
	if (!func_660(iParam0))
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

int func_636(int iParam0, int iParam1)
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

int func_637(int iParam0)
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

int func_638(int iParam0)
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

struct<4> func_639()
{
	return Var0;
}

int func_640(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_522(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_461(bParam6), &Var0, 0);
	return uVar4;
}

bool func_641(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_461(0);
	*uParam1 = { func_522(iParam0, func_516(0), iParam3, 0) };
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

bool func_642(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_643(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_644(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

void func_645(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_646(int iParam0)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_298(iParam0))
	{
		return false;
	}
	return func_661((*Global_1347702)[iParam0]->f_15);
}

int func_647(int iParam0, int iParam1)
{
	if (!func_635(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_648(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_662() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_663(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_664(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_665() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_666(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_665(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_667(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_668() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_669(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_668(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_647(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_649(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_650(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_651(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_652(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_670(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_185(iVar2, 1, 0) || func_672(func_671(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_673(func_670(iVar0))), func_673(func_670(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_665() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_674(iVar0)), func_674(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_666() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_674(iVar0)), func_674(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_674(iVar0)), func_674(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_614(iParam3, func_675(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_611(iVar2) - iParam7) >= func_647(iParam3, func_676(iVar0));
				}
				else
				{
					bVar1 = func_611(iVar2) >= func_647(iParam3, func_676(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_611(iVar2) + iParam7) >= func_647(iParam3, func_676(iVar0));
			}
			else
			{
				bVar1 = func_611(iVar2) >= func_647(iParam3, func_676(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_677(iVar2)), func_677(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_678(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_679(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_679(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_668() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_680(iVar0)), func_680(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_669() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_680(iVar0)), func_680(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_680(iVar0)), func_680(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_614(iParam3, func_675(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_611(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_681(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_681(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_682(iVar2)), func_682(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_653(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_667() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_654(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_404(func_683(0)) && ((func_684(0) == 1 || func_684(0) == 8) || func_684(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

bool func_655(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_681(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_681(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_681(iVar0))
		{
			*iParam2++;
		}
		if (func_681(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_681(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_681(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_681(iVar0))
		{
			*iParam2++;
		}
		if (func_681(iVar1))
		{
			*iParam2++;
		}
		if (func_681(iVar0) && func_681(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_681(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_681(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_681(iVar0))
		{
			*iParam2++;
		}
		if (func_681(iVar1))
		{
			*iParam2++;
		}
		if (func_681(iVar2))
		{
			*iParam2++;
		}
		if ((func_681(iVar0) && func_681(iVar1)) && func_681(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_681(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_681(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_681(iVar0))
		{
			*iParam2++;
		}
		if (func_681(iVar1))
		{
			*iParam2++;
		}
		if (func_681(iVar2))
		{
			*iParam2++;
		}
		if (func_681(iVar3))
		{
			*iParam2++;
		}
		if (((func_681(iVar0) && func_681(iVar1)) && func_681(iVar2)) && func_681(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_592() && (func_646(38) || func_606(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_592() && (func_646(39) || func_606(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_592() && (func_646(49) || func_606(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_592() && (func_646(38) || func_606(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_685(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_685(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_687(_create_var_string(2, sVar0), _create_var_string(2, func_673(func_686(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_685(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_685(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_592() && (func_646(39) || func_606(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_685(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_685(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_592() && (func_646(49) || func_606(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_685(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_685(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_685(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_685(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_657()
{
	switch (Global_1935630->f_44)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
			return true;
		default:
			break;
	}
	return false;
}

bool func_658(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_688(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_689())
	{
		return func_688(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_688(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_659(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_660(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_661(int iParam0)
{
	iVar0 = func_454(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_662()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_185(func_690(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_663()
{
	return func_691(Global_40.f_12019);
}

int func_664()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_690(iVar1);
		if (func_185(iVar2, 1, 0) || func_672(func_671(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_665()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_692(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_666()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_693(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_667()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_678(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_668()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

int func_669()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_670(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_672(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_673(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

char* func_674(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_677(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_678(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_679(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_680(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_681(int iParam0)
{
	if (func_694(iParam0) && func_185(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_695(iParam0) && func_696(iParam0))
	{
		return true;
	}
	return false;
}

char* func_682(int iParam0)
{
	if (!func_186(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_513(iParam0));
}

int func_683(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_684(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

var func_685(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

int func_686(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

var func_687(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

bool func_688(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_689()
{
	return Global_1109400->f_245;
}

int func_690(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_691(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_692(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_693(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_694(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_695(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_696(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_697(&iVar0, 0, iVar95, &Var1) && !func_697(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_698(iVar0, &Var1);
			if (func_186(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_697(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_200(iParam1) && !func_699(iParam1))
	{
		iVar0 = func_201(iParam1);
	}
	else
	{
		return false;
	}
	func_700(uParam3);
	iVar5 = func_701(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_698(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_702(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_703(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

bool func_699(int iParam0)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_200(iParam0))
	{
		return false;
	}
	iVar0 = func_201(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_700(var uParam0)
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

int func_701(int iParam0)
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

void func_702(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_703(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

