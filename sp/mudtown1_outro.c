void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_271);
	}
	func_2(&Local_271, &uScriptParam_0);
	while (!func_3(&Local_271))
	{
		func_4(&Local_271);
		switch (func_5(Local_271))
		{
			case 0:
				if (func_6(&Local_271))
				{
					func_7(&Local_271, 1);
				}
				break;
			case 1:
				if (func_8(&Local_271))
				{
					func_7(&Local_271, 2);
				}
				break;
			case 2:
				if (func_9(&Local_271))
				{
					func_7(&Local_271, 3);
				}
				break;
			case 3:
				func_1(&Local_271);
				break;
		}
		wait(0);
	}
	func_1(&Local_271);
	terminate_this_thread();
}

void func_1(var uParam0)
{
	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_12(iVar1) && func_13(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			if (does_entity_exist(iVar2))
			{
				if (func_14(iVar1))
				{
					func_15(iVar1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_16(uParam0, 4))
	{
		clear_bit(&(Global_1956580->f_1), 5);
		func_17(uParam0, 4);
	}
	terminate_this_thread();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (_does_anim_scene_exist(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		take_ownership_of_anim_scene(uParam0->f_2);
		func_18(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		func_18(uParam0, 2);
	}
	func_19(uParam0);
	set_script_with_name_hash_as_no_longer_needed(get_hash_of_this_script_name());
	return 1;
}

bool func_3(var uParam0)
{
	if (func_20(&Global_1935630, 16384))
	{
		return true;
	}
	if (!func_16(uParam0, 8))
	{
		if (func_20(&Global_1935630, 32768))
		{
			return true;
		}
	}
	return false;
}

void func_4(var uParam0)
{
	if (!func_16(uParam0, 4))
	{
		if ((_does_anim_scene_exist(uParam0->f_2) && _is_anim_scene_started(uParam0->f_2, false)) && !is_gameplay_cam_rendering())
		{
			set_bit(&(Global_1956580->f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if ((!_does_anim_scene_exist(uParam0->f_2) || !_is_anim_scene_started(uParam0->f_2, false)) || is_gameplay_cam_rendering())
	{
		clear_bit(&(Global_1956580->f_1), 5);
		func_17(uParam0, 4);
	}
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return uParam0;
}

bool func_6(var uParam0)
{
	iVar0 = 1;
	StringCopy(&cLocal_268, "MUD1_EXT", 24);
	if (!func_21(&uLocal_25, &cLocal_268, 1, 1))
	{
		iVar0 = 0;
	}
	if (!_text_database_has_loaded("MUD1"))
	{
		iVar0 = 0;
	}
	if (!func_22(iLocal_14, 0))
	{
		iLocal_14 = func_23(5, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -922193456, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		iVar0 = 0;
	}
	else
	{
		func_24(5, -922193456, 1);
	}
	return iVar0;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && _does_thread_exist(uParam0->f_1)) && is_thread_active(uParam0->f_1, false))
	{
		return false;
	}
	return func_25(uParam0);
}

bool func_9(var uParam0)
{
	iVar0 = 1;
	if (!func_26())
	{
		iVar0 = 0;
	}
	if (!func_27(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_10()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0) && func_14(iVar0))
		{
			func_28(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_29(&(Global_1359489->f_40), 1);
}

void func_11(var uParam0)
{
	if (_text_database_has_loaded("MUD1"))
	{
		_text_database_delete("MUD1");
	}
	func_30(&uVar0, 0);
	func_31();
	func_32(5, 0);
	display_radar(true);
	if (!_0x495a04caec263af8(Global_35, 0))
	{
		func_33(-183018591, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	_0x67e21acc5c0c970c(Global_35, 9, true);
	_0x67e21acc5c0c970c(Global_35, 16, true);
	_0x67e21acc5c0c970c(Global_35, 10, true);
	set_ped_current_weapon_visible(Global_35, true, false, true, false);
	func_34(524288);
	func_35();
	func_36(5, Global_35, 46, 18, 0);
	func_37(5, -2147483648, 1, 2);
	Global_1327590->f_19735 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		func_38(&(Global_40.f_7731[iVar2]));
		iVar2++;
	}
	func_39(1);
	func_40(537, 0);
	_display_hud_component(1331687942);
	func_30(&iVar1, 0);
}

bool func_12(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_13(int iParam0)
{
	return func_41(iParam0, 16, 1);
}

bool func_14(int iParam0)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (!func_13(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_15(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_28(iParam0, 56, 1);
		func_29(&(Global_1359489->f_40), 1);
	}
	func_42(iParam0, 0);
	func_43(iParam0, 4, 0);
	func_44(iParam0);
	func_45(iParam0);
	func_46(iParam0, 37, 1);
	bVar0 = func_22(Global_1360165[iParam0], 0);
	iVar1 = func_47(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_48(iParam0, 64, 1))
	{
		func_46(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_46(iParam0, 33, 1);
		func_46(iParam0, 34, 1);
		func_49(iParam0, 1056964608, -1, 1061158912);
		func_50(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_28(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_28(iParam0, 35, 1);
			if (bParam8)
			{
				func_28(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_51(iParam0, 0);
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
		func_46(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_28(iParam0, 33, 1);
		func_50(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_29(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_52(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_28(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_53(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_48(iParam0, 45, 1))
	{
		func_46(iParam0, 45, 1);
	}
	func_54(iParam0, 16, 1);
	func_46(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_22(func_55(iParam0), 0))
		{
			func_56(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

int func_19(var uParam0)
{
	iVar0 = 0;
	func_57(&iVar0, 4096, 2, 0, 0, 0, 0);
	func_59(&uLocal_25, Global_35, func_58(Global_35), 0, 0, 0);
	_hide_hud_component(1331687942);
	_text_database_request("MUD1");
	return 1;
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_21(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (func_60(uParam0, 256) && !func_60(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_61(uParam0, sParam1);
	if (!func_60(uParam0, 64))
	{
		if (!func_63(func_62(uParam0)))
		{
			func_64(uParam0, 64);
		}
		else
		{
			vVar0 = { func_65(uParam0) };
			if (!func_63(vVar0))
			{
				func_66(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_67(Global_35, func_62(uParam0), 1);
	if (func_60(uParam0, 128) || func_60(uParam0, 256))
	{
		if ((fVar3 >= func_68(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				func_69();
				uParam0->f_241 = 0;
			}
			func_70(uParam0);
			if (_does_anim_scene_exist(uParam0->f_156))
			{
				_delete_anim_scene(uParam0->f_156);
			}
			func_71(uParam0);
			func_72(uParam0, 128, 1);
			func_72(uParam0, 256, 1);
			func_72(uParam0, 4096, 1);
			func_72(uParam0, 32768, 1);
			func_72(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_73(uParam0) || bParam2)
	{
		if (!func_60(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_156))
			{
				if (func_73(uParam0) >= func_68(uParam0))
				{
				}
				Var4 = { func_74(uParam0) };
				if (is_string_null_or_empty(&Var4))
				{
					func_75(uParam0);
				}
				Var4 = { func_74(uParam0) };
				iVar12 = 256;
				if (!func_60(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = _create_anim_scene(&(uParam0->f_152), iVar12, &Var4, false, true);
				func_76(uParam0, 0, 0, 0, 0);
				func_64(uParam0, 128);
			}
		}
	}
	if (func_60(uParam0, 128))
	{
		if (func_60(uParam0, 256) && !func_60(uParam0, 4194304))
		{
			return true;
		}
		func_77(uParam0);
		if (!uParam0->f_241)
		{
			if (func_78())
			{
				func_79(4096);
				uParam0->f_241 = 1;
			}
		}
		if (_is_anim_scene_loaded(uParam0->f_156, true, false))
		{
			bVar13 = true;
			Var15 = { func_80(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!is_string_null_or_empty(uParam0->f_174[iVar14]))
				{
					if (!are_strings_equal(uParam0->f_174[iVar14], &Var15))
					{
						if (!uParam0->f_174[iVar14]->f_8)
						{
							uParam0->f_174[iVar14]->f_8 = 1;
							_0xdf7b5144e25cd3fe(uParam0->f_156, uParam0->f_174[iVar14]);
							bVar13 = false;
						}
						else if (!_0x23e33cb9f4a3f547(uParam0->f_156, uParam0->f_174[iVar14]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_60(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_156, &Var15))
				{
					if (!func_60(uParam0, 16777216))
					{
						if ((!_0x0df57f86fe71dbe5(uParam0->f_156, &Var15) && !_0x23e33cb9f4a3f547(uParam0->f_156, &Var15)) && !_0x1f0e401031e20146(uParam0->f_156, &Var15))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_156, &Var15);
						}
						func_64(uParam0, 16777216);
					}
					if (!_0x23e33cb9f4a3f547(uParam0->f_156, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_64(uParam0, 256);
			func_72(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_22(int iParam0, int iParam1)
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
	if (func_81(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_81(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_81(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_81(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_81(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_81(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_81(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_81(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_23(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_48(iParam0, 2, 1))
			{
				func_46(iParam0, 2, 1);
			}
			if (func_41(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_28(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_15(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_22(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_22(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_82(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_28(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_83(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_28(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_83(iParam0, 1);
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
			if (!func_48(iParam0, 44, 0))
			{
				func_28(iParam0, 44, 0);
			}
			if (func_84(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_83(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_46(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_50(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_85(iParam0, 0, 0, 1);
			}
			func_46(iParam0, 33, 1);
			func_46(iParam0, 34, 1);
			func_46(iParam0, 29, 1);
			if (!func_63(vVar0) && bParam7)
			{
				func_83(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_83(iParam0, 4);
			}
			else
			{
				func_83(iParam0, 5);
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
						func_82(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_86(Global_1360165[iParam0], vVar0, iParam6, 2, 1073741824);
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
				func_83(iParam0, 4);
			}
			else
			{
				func_83(iParam0, 5);
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
				if (func_87(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_24(iParam0, iParam13, 0);
						func_88(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_48(iParam0, 25, 0))
						{
							func_46(iParam0, 25, 0);
						}
						func_28(iParam0, 66, 0);
						func_83(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_83(iParam0, 5);
				}
				func_28(iParam0, 28, 1);
			}
			else
			{
				func_83(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_83(iParam0, 6);
			}
			break;
		case 6:
			if (func_22(Global_1360165[iParam0], 0))
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
					func_89(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_90(Global_1360165[iParam0], 1);
				}
			}
			func_83(iParam0, 7);
		case 7:
			func_50(iParam0, bParam9, bParam15, 0);
			func_43(iParam0, 4, bParam11);
			func_45(iParam0);
			if (bParam20)
			{
				if (func_91(Global_1360165[iParam0]))
				{
				}
			}
			func_92(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_83(iParam0, 0);
			func_93(iParam0, 16, 1);
			func_46(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_24(int iParam0, int iParam1, bool bParam2)
{
	if (!func_12(iParam0))
	{
		return;
	}
	if (!func_87(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_28(iParam0, 25, 1);
	}
}

int func_25(var uParam0)
{
	do_screen_fade_out(0);
	clear_ped_blood_damage(Global_35);
	_0xa7a806677f8de138(Global_35);
	set_ped_sweat(Global_35, 0f);
	if (is_screen_faded_in() && func_94())
	{
		return 0;
	}
	if (!bLocal_18)
	{
		func_95(-558867971, 195285667, -469960592, 12, 1, 1, 0);
		func_96(1);
		Global_1359453 = 0;
		func_97(268435456);
		func_98(1, 16);
		func_99();
		func_100();
		func_101(1, 0);
		bLocal_18 = true;
		return 0;
	}
	func_57(&uVar0, 0, 2, 0, 0, 0, 0);
	if (!func_102(71))
	{
		return 0;
	}
	if (!does_entity_exist(iLocal_15))
	{
		iLocal_15 = func_103(-114.4731f, -17.47196f, 95.88894f, 75.28431f, 1, 1, 1, 1, 1);
		return 0;
	}
	if (!func_104(iLocal_15, -114.4731f, -17.47196f, 95.88894f, 8f, 1, 1))
	{
		func_86(iLocal_15, -114.4731f, -17.47196f, 95.88894f, 75.28431f, 2, 1073741824);
		return 0;
	}
	if (!func_105(iLocal_15, -114.4731f, -17.47196f, 95.88894f, 8f, 1))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (((((((iVar1 != 2 && iVar1 != 6) && iVar1 != 7) && iVar1 != 21) && func_41(iVar1, 4, 1)) && func_41(iVar1, 2, 1)) && func_41(iVar1, 32768, 1)) && !func_48(iVar1, 40, 0))
		{
			func_28(iVar1, 40, 0);
		}
		iVar1++;
	}
	func_106(&uLocal_25, iLocal_14, func_58(iLocal_14), 0, 0, 0);
	func_108(&uLocal_25, 18937);
	iVar2 = func_109(Global_35, 7, 1, 0);
	if (func_110(iVar2))
	{
		_0xe9bd19f8121ade3e(Global_35, iVar2);
	}
	iVar2 = func_109(Global_35, 8, 1, 0);
	if (func_110(iVar2))
	{
		_0xe9bd19f8121ade3e(Global_35, iVar2);
	}
	iVar2 = func_109(Global_35, 18, 1, 0);
	if (func_110(iVar2))
	{
		_0xe9bd19f8121ade3e(Global_35, iVar2);
	}
	iVar2 = func_109(Global_35, 9, 1, 0);
	if (func_110(iVar2) && iVar2 != -183018591)
	{
		_0xe9bd19f8121ade3e(Global_35, iVar2);
	}
	func_111(0);
	if (!does_entity_exist(iVar264))
	{
		uLocal_267 = _0xc6a6789bb405d11c(Global_35, 1);
	}
	if (func_21(&uLocal_25, &cLocal_268, 1, 1))
	{
		Global_1327590->f_19735 = 1;
		_set_weather_type(821931868, true, true, false, 0f, false);
		_0x2916b30dc6c41179(669657108);
		_0x2916b30dc6c41179(-1721991356);
		_0x2916b30dc6c41179(-702816767);
		_0x2916b30dc6c41179(2137137442);
		_0x2916b30dc6c41179(1974067816);
		_0x2916b30dc6c41179(839715153);
		_0x2916b30dc6c41179(669657108);
		_0x2916b30dc6c41179(433385945);
		_0x2916b30dc6c41179(1420204096);
		_0x2916b30dc6c41179(-1317052143);
		_0x2916b30dc6c41179(-416908843);
		_0x2916b30dc6c41179(212278652);
		_0x2916b30dc6c41179(-273223690);
		_0x2916b30dc6c41179(1679686673);
		_0x2916b30dc6c41179(603685163);
		_0x2916b30dc6c41179(-1233681761);
		_0x2916b30dc6c41179(2082228755);
		_0x2916b30dc6c41179(725623432);
		func_112(100f, 0, 0, 1);
		func_113(100f, 0, 0, 1);
		func_114(100f, 0, 0, 1);
		return 1;
	}
	return 0;
}

bool func_26()
{
	iVar0 = 1;
	return iVar0;
}

bool func_27(var uParam0)
{
	func_115();
	func_116(4);
	display_radar(false);
	StringCopy(&cVar0, "MUD1_EXT", 32);
	if (!bLocal_24 && func_117(1, 0, 0))
	{
		bLocal_24 = true;
	}
	if (!bLocal_24)
	{
		return false;
	}
	if (!bLocal_16)
	{
		func_21(&uLocal_25, &cVar0, 1, 1);
		func_118(cVar0, &uLocal_25);
		_0x6339c1ea3979b5f7("Pass_Time", "Chapter_Screen_Scenes");
		bLocal_16 = true;
	}
	else
	{
		return func_118(cVar0, &uLocal_25);
	}
	return false;
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_119(iParam0))
		{
			return;
		}
	}
	func_120(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1 || !func_121(uParam0))
	{
		func_122(uParam0);
	}
}

void func_30(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_123(2000);
	Global_16 = 0;
	func_124();
	set_entity_invincible(Global_35, func_125(*iParam0, 8));
	if (!func_125(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_125(*iParam0, 2) || func_125(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_125(*iParam0, 16))
	{
		func_126(1);
	}
	if (func_125(*iParam0, 32))
	{
		func_127(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_128(-1623728698, 0);
	}
	func_129(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

void func_31()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_12(iVar17))
		{
			iVar18 = func_130(iVar17);
			if (does_entity_exist(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				_0x88bc5f4aef77fc4e(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_52(&(Global_1359489->f_55));
	if (func_131(1777191912, 1))
	{
		func_132(1777191912, 1, 0);
	}
}

void func_32(int iParam0, bool bParam1)
{
	if (!func_133(iParam0))
	{
		return;
	}
	iVar0 = func_135(func_134(iParam0));
	if (func_136(iVar0) && (*Global_1835011)[iParam0]->f_71)
	{
		(*Global_1835011)[iParam0]->f_71 = 0;
	}
	if (!bParam1)
	{
		func_137(iParam0, -1, 0, 1, 0, 0, 0);
		func_138(func_134(iParam0), 1, 2);
	}
}

int func_33(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_139(iParam0, 0))
	{
		return 0;
	}
	if (!func_140(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_141(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_142(iParam0, bParam2);
	iVar2 = 0;
	if (func_143(iParam0, 0, 0) == 0)
	{
		if (func_144(iParam0))
		{
			iVar5 = func_145(iParam0);
			iVar6 = func_146(iVar5);
			iVar7 = func_147(iVar6) + 1;
			func_148(iVar5);
			if (func_149(38))
			{
				func_40(483, 0);
			}
			else
			{
				func_40(482, 0);
			}
			if (iVar7 == func_150(iVar6))
			{
				func_33(func_151(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_152() && func_153(4))
				{
					if (func_152() && (func_154(38) || func_149(38)))
					{
						func_156(38, func_151(iVar6), 0, 0, func_155(), 0, -1, 0);
						func_157(2);
					}
					else
					{
						func_156(38, func_151(iVar6), 0, 0, func_155(), 0, -1, 0);
						func_157(1);
					}
				}
			}
			else if (func_152() && func_153(4))
			{
				if (func_152() && (func_154(38) || func_149(38)))
				{
					func_156(38, 0, 0, 0, func_155(), 0, -1, 0);
					func_157(2);
				}
				else
				{
					func_156(38, 0, 0, 0, func_155(), 0, -1, 0);
					func_157(1);
				}
			}
			if (func_152() && func_153(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_152() && (func_154(38) || func_149(38)))
					{
						func_158(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_158(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_159(iParam0) == -1037537535)
	{
		if ((!func_160(iParam0, 866047851) && !func_160(iParam0, -1979000645)) && !func_160(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_161(iParam0, 8388608) && !func_162(28))
	{
		func_163(28);
	}
	if (!bVar3)
	{
		if (func_160(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_164(iParam0) == -1447088266)
			{
				iVar1 = func_166(func_165(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_167() == -1)
					{
						func_168(iVar1);
					}
					if (func_169(0) && func_170(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_171(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_167() == -1)
					{
						func_168(iParam0);
					}
					if (func_169(0) && func_170(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_171(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_159(iParam0) == -427144552)
		{
			if (!func_172(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_159(iParam0) == 307971639 && func_173(iParam0))
		{
			if (!func_174(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_160(iParam0, 866047851))
		{
			func_175(iParam0);
		}
		else if (func_160(iParam0, 2000026003))
		{
			func_176(iParam0);
		}
		else if (func_160(iParam0, -103750053))
		{
			func_178(func_177(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_178(func_179(-717883113, 2091222383), iVar0);
		}
		else if (func_160(iParam0, -121341956) && !func_160(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_180((*Global_1835011)[4]->f_1, 1))
				{
					func_40(498, 0);
				}
			}
			if (func_160(iParam0, -2017733358) || func_160(iParam0, -1369131378))
			{
				func_181(iParam0);
			}
		}
		else if (func_160(iParam0, -136654233))
		{
			if (func_160(iParam0, -1021472396))
			{
			}
		}
		else if (func_160(iParam0, -1466706512) && func_160(iParam0, 1147021565))
		{
			func_40(484, 0);
		}
		else if (func_160(iParam0, 1147021565) && func_160(iParam0, -524514947))
		{
		}
		else if (func_160(iParam0, 554195525))
		{
		}
		else if (func_160(iParam0, 589988438))
		{
			if (func_182())
			{
				func_183(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_160(iParam0, 787083290) && func_160(iParam0, 949916894))
		{
			func_184(iParam0);
		}
		else if (func_160(iParam0, -1718133314))
		{
			func_185(iParam0);
		}
		else if (func_160(iParam0, -1738650224))
		{
			func_186(iParam0);
		}
		else if (func_160(iParam0, -1112814642) && func_160(iParam0, 949916894))
		{
			func_187(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_160(iParam0, 1841149704))
		{
			func_188();
		}
		else if (func_160(iParam0, 606799272))
		{
			func_189(iParam0, iParam1);
			func_190(iParam0);
		}
		else if (func_160(iParam0, -1112814642) && func_160(iParam0, -1697809989))
		{
			func_191(iParam0, 0, 0, 0);
		}
		else if (func_160(iParam0, -2017733358) || func_160(iParam0, -1369131378))
		{
			func_181(iParam0);
		}
		else if (func_160(iParam0, -1921346699))
		{
			if (func_167() != -1)
			{
				return 0;
			}
			func_192(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_160(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_193(215778062, 1, 0))
					{
						func_33(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_193(670273567, 1, 0))
					{
						func_33(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_193(-967317137, 1, 0))
					{
						func_33(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_193(526074061, 1, 0))
					{
						func_33(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_193(-1045488665, 1, 0))
					{
						func_33(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_193(471514780, 1, 0))
					{
						func_33(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_160(iParam0, -839724752) && func_161(iParam0, 4))
		{
			if (!func_149(42))
			{
				func_194(iParam0);
			}
		}
		else if (func_160(iParam0, 1399091007))
		{
			func_195(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_160(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_33(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
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
			case -1185145312:
				func_163(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_127(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_196(&iVar9, 0))
				{
					func_170(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_167() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_127(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_40(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_197();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_198();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_199();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_200();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_201();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_202(499813453, 854119837, 0);
				func_203(499813453, 0);
				func_204(1);
				break;
			case 2127812557:
				func_202(499813453, -1292544588, 0);
				func_203(499813453, 0);
				func_204(2);
				break;
			case 808991383:
				func_202(499813453, -1003325394, 0);
				func_203(499813453, 0);
				func_204(4);
				break;
			case 1134518629:
				func_202(666607663, -335460405, 0);
				func_203(666607663, 0);
				func_205(1);
				break;
			case 902940106:
				func_202(666607663, 903797617, 0);
				func_203(666607663, 0);
				func_205(2);
				break;
			case -418174898:
				func_202(666607663, 669728650, 0);
				func_203(666607663, 0);
				func_205(4);
				break;
			case -648114971:
				func_202(-220219788, 1214120047, 0);
				func_203(-220219788, 0);
				func_206(1);
				break;
			case 211153747:
				func_202(-220219788, 655769340, 0);
				func_203(-220219788, 0);
				func_206(2);
				break;
			case -32876996:
				func_202(-220219788, 885316185, 0);
				func_203(-220219788, 0);
				func_206(4);
				break;
			case 1191437462:
				func_202(218622660, -1491419385, 0);
				func_203(218622660, 0);
				func_207(1);
				break;
			case 1119149048:
				func_202(218622660, 1809565830, 0);
				func_203(218622660, 0);
				func_207(2);
				break;
			case 506073827:
				func_202(390004462, -628873767, 0);
				func_203(390004462, 0);
				func_208(1);
				break;
			case -1876986168:
				func_202(390004462, -405421956, 0);
				func_203(390004462, 0);
				func_208(2);
				break;
			case 2142623221:
				func_202(390004462, -1108972386, 0);
				func_203(390004462, 0);
				func_208(4);
				break;
			case 1508215381:
				func_202(6410548, 1053716392, 0);
				func_203(6410548, 0);
				func_209(1);
				break;
			case -888935280:
				func_202(6410548, 806507056, 0);
				func_203(6410548, 0);
				func_209(2);
				break;
			case -1252474566:
				func_202(6410548, 1571925350, 0);
				func_203(6410548, 0);
				func_209(4);
				break;
			case -1465702449:
				func_202(6410548, 1330352282, 0);
				func_203(6410548, 0);
				func_209(8);
				break;
			case -21093309:
				func_211(242, func_210(-21093309), 0);
				break;
			case 204375141:
				func_211(240, func_210(204375141), 0);
				break;
			case -417963070:
				func_211(241, func_210(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_212(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_212(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_212(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_212(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
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
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_212(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_212(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_40(488, 0);
				break;
			case 1613651027:
				func_40(491, 0);
				break;
			case -885810591:
				func_40(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_33(func_213(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_33(func_214(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_162(1))
				{
					func_40(487, 0);
				}
				break;
			case -898386032:
				func_40(486, 0);
				break;
			case -2035110427:
				if (func_167() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_40(496, 0);
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
		iVar10 = iParam0;
		func_215(&iVar10);
		if (!func_216(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_169(0))
		{
			return 1;
		}
		if (func_159(iParam0) == -1037537535)
		{
			func_217(iParam0);
		}
		if (func_160(iParam0, -1979000645))
		{
			func_218(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_169(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_33(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_219(iVar2, 0);
		}
	}
	Var35 = { func_220(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_221(iParam0);
	if (fParam6 > 0f)
	{
		if (func_160(iParam0, -839724752))
		{
			func_222(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_223(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_34(int iParam0)
{
	switch (func_167())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_35()
{
	Var0.f_15 = 531055934;
	Var0 = player_ped_id();
	Var0.f_12 = 46;
	Var0.f_4 = 531055934;
	Var0.f_8 = 0;
	_0x88bc5f4aef77fc4e(&Var0, 17);
}

void func_36(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_12(iParam0))
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	Var0.f_14 = func_130(iParam0);
	Var0 = uParam1;
	Var0.f_12 = iParam2;
	Var0.f_8 = 0;
	if (iParam3 != 0)
	{
		Var0.f_13 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	_0x88bc5f4aef77fc4e(&Var0, 17);
}

int func_37(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_224(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		(*Global_1360165)[iParam0]->f_140 = ((*Global_1360165)[iParam0]->f_140 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_141 = ((*Global_1360165)[iParam0]->f_141 || iParam1);
		(*Global_1360165)[iParam0]->f_142 = &Global_1899515;
		func_225(&((*Global_1360165)[iParam0]->f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

void func_38(int iParam0)
{
	if (iParam0 >= 7)
	{
		func_40(489, 0);
	}
	if ((iParam0 >= 4 && Global_1897952->f_41 != 8) && func_180((*Global_1835011)[4]->f_1, 1))
	{
		func_40(493, 0);
	}
}

void func_39(int iParam0)
{
	Global_1905944->f_5694 = iParam0;
}

void func_40(int iParam0, bool bParam1)
{
	func_226(iParam0, &iVar0, &iVar1);
	if (!func_227(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_228(iVar0, iVar1);
}

bool func_41(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_119(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_42(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_229(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_43(iParam0, 1, 0);
		}
	}
	func_43(iParam0, 16, bParam1);
}

void func_43(int iParam0, int iParam1, bool bParam2)
{
	if (!func_119(iParam0))
	{
		return;
	}
	func_230(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_44(int iParam0)
{
	func_43(iParam0, 8, 0);
}

void func_45(int iParam0)
{
	func_28(iParam0, 36, 1);
}

void func_46(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_119(iParam0))
		{
			return;
		}
	}
	func_120(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_47(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_231(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_48(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_119(iParam0))
		{
			return false;
		}
	}
	func_120(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_49(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_12(iParam0))
	{
		iVar1 = func_130(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_232(iParam0);
		}
	}
	if (func_48(iParam0, 5, 1))
	{
		set_ped_config_flag(func_130(iParam0), 137, true);
	}
}

void func_50(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_46(iParam0, 50, 1);
		func_46(iParam0, 48, 1);
		func_46(iParam0, 49, 1);
		func_46(iParam0, 51, 1);
		func_46(iParam0, 52, 1);
		func_46(iParam0, 54, 1);
		func_46(iParam0, 55, 1);
	}
	else
	{
		func_28(iParam0, 50, 1);
		func_28(iParam0, 48, 1);
		func_28(iParam0, 49, 1);
		func_28(iParam0, 51, 1);
		if (bParam3)
		{
			func_28(iParam0, 54, 1);
		}
		else
		{
			func_46(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_28(iParam0, 52, 1);
			if (bParam3)
			{
				func_28(iParam0, 55, 1);
			}
		}
		else
		{
			func_46(iParam0, 52, 1);
			if (!bParam3)
			{
				func_46(iParam0, 55, 1);
			}
		}
	}
}

void func_51(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_130(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_130(iParam0), 204, false);
	}
}

void func_52(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (!func_14(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_48(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_47(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_130(iParam0);
	if (((does_entity_exist(iVar1) && func_233(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_28(iParam0, 2, 1);
	}
	else
	{
		func_234(iParam0);
		func_28(iParam0, 1, 1);
	}
}

void func_54(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_55(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_56(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_119(iParam1))
	{
		return;
	}
	iVar0 = func_55(iParam1);
	if (func_235(iParam1))
	{
		if (!func_236(iParam1))
		{
			return;
		}
	}
	func_46(iParam1, 39, 1);
	func_237(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_237(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_237(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_28(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_238(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_239(0, 0);
		func_240(-1);
	}
	func_241(1);
	set_entity_invincible(Global_35, true);
	if (!func_242(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_242(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_242(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_242(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_242(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_242(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_242(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_242(*iParam0, 4) && !func_242(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_242(*iParam0, 2048))
	{
		func_243(0, 0);
	}
	if (func_242(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_242(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_242(*iParam0, 8192))
	{
		func_244();
	}
	if (!func_242(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_242(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_242(*iParam0, 1024))
	{
		set_cinematic_mode_active(false);
	}
	if (iParam2 != 2)
	{
		set_ped_stealth_movement(Global_35, iParam2 == 1, 0, 0);
	}
	if (is_ped_on_foot(Global_35))
	{
		if (bParam6)
		{
			set_ped_desired_move_blend_ratio(Global_35, 0f);
			set_ped_desired_heading(Global_35, get_entity_heading(Global_35));
			set_entity_velocity(Global_35, 0f, 0f, 0f);
		}
		if (!func_242(*iParam0, 16))
		{
			iVar0 = create_itemset(true);
			bVar1 = false;
			find_all_attached_carriable_entities(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < get_itemset_size(iVar0))
			{
				iVar6 = get_indexed_item_in_itemset(iVar2, iVar0);
				iVar7 = _get_entity_from_item(iVar6);
				if (!does_entity_exist(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (is_entity_an_object(iVar7))
					{
						if (func_245() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_63(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_246(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_247(2);
						func_248(-1);
						func_249(vVar3);
						func_251(func_250());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!_0x3ab6c7b0bb0df4b1(Global_35, -1))
				{
					clear_ped_tasks_immediately(Global_35, false, true);
					_0x2208438012482a1a(Global_35, false, false);
				}
			}
			destroy_itemset(iVar0);
		}
	}
	if (bParam6 && is_ped_on_mount(Global_35))
	{
		iVar9 = get_mount(Global_35);
		if (!is_entity_dead(iVar9))
		{
			clear_ped_tasks(iVar9, 1, 0);
			task_stand_still(iVar9, -1);
		}
	}
	if (!func_242(*iParam0, 4096))
	{
		func_252(Global_35);
	}
	if (!func_242(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_242(*iParam0, 2097152))
	{
		if (func_253() || _0x50f124e6ef188b22(Global_35))
		{
			func_254(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

char* func_58(int iParam0)
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
	return func_255(iVar0);
}

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_106(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

bool func_60(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_61(var uParam0, char* sParam1)
{
	if (func_60(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_152), {func_256("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 4);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_152), {func_256("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_64(uParam0, 8192);
}

Vector3 func_62(var uParam0)
{
	return uParam0->f_5;
}

bool func_63(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_64(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_65(var uParam0)
{
	MemCopy(&uVar0, {func_257(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_157))
	{
		uParam0->f_157 = _create_anim_scene(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_157, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_157, func_58(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			_get_anim_scene_origin(uParam0->f_157, &vVar8, &uVar11, 2);
		}
		_delete_anim_scene(uParam0->f_157);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_66(var uParam0, vector3 vParam1)
{
	if (func_63(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_67(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_68(var uParam0)
{
	return uParam0->f_147;
}

void func_69()
{
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_258(Var0);
	}
}

void func_70(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]) && (_0x23e33cb9f4a3f547(uParam0->f_156, uParam0->f_174[iVar0]) || _0x0df57f86fe71dbe5(uParam0->f_156, uParam0->f_174[iVar0])))
		{
			_0xae6ada8fe7e84acc(uParam0->f_156, uParam0->f_174[iVar0]);
		}
		uParam0->f_174[iVar0]->f_8 = 0;
		iVar0++;
	}
}

void func_71(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_60(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_259(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_60(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_72(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_72(uParam0, 16, 1);
}

void func_72(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_156)) && _0xef324e9550a394d5(uParam0->f_156))
	{
		_0x8a8208ae92bf87a5(uParam0->f_156);
	}
}

float func_73(var uParam0)
{
	return uParam0->f_146;
}

struct<8> func_74(var uParam0)
{
	return uParam0->f_158;
}

void func_75(var uParam0)
{
	Var0 = { func_260() };
	func_261(uParam0, &Var0);
}

void func_76(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_60(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_262(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_263());
		func_64(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_264(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_64(uParam0, 16);
	}
}

void func_77(var uParam0)
{
	if ((!func_60(uParam0, 32768) && _does_anim_scene_exist(uParam0->f_156)) && _is_anim_scene_metadata_loaded(uParam0->f_156, false))
	{
		func_265(uParam0);
		func_266(uParam0, 0);
		if (!_is_anim_scene_loading(uParam0->f_156, true))
		{
			load_anim_scene(uParam0->f_156);
		}
		func_64(uParam0, 32768);
	}
}

bool func_78()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_79(int iParam0)
{
	if (func_267(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_258(Var0);
}

struct<8> func_80(var uParam0)
{
	Var0 = { func_268(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_269() };
	}
	return Var0;
}

bool func_81(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_82(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_130(iParam0);
	if (!func_12(iParam0) || is_entity_dead(iVar0))
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

void func_83(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_84(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_119(iParam0))
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
					iParam4 = func_270(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_271((*Global_1360165)[iParam0]->f_4.f_2) || func_272((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_270(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_273((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_274(iParam0, 0))
					{
						func_28(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_275(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_46(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_22(func_130(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_22(func_55(iParam0), 0))
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

void func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_12(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_276(iParam0, bParam3);
	}
	else
	{
		func_277(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_278(iParam0, bParam3);
	}
	else
	{
		func_279(iParam0, bParam3);
	}
}

void func_86(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_280(Global_35) && is_player_teleport_active())
	{
	}
	if (func_281(iParam0))
	{
		if (func_282(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_81(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_86(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_86(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_81(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_81(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_81(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_81(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_81(iParam5, 129))
	{
		if (func_81(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_81(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_81(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_81(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_281(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_81(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_81(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_87(int iParam0, int iParam1)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_283(iParam0, iParam1);
	return bVar0;
}

void func_88(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_284(iParam2))
		{
			iVar0 = func_285(iParam2, -1);
			if (func_286(iParam1, iVar0))
			{
				if (func_287(iParam1, iVar0))
				{
					if (func_288(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_289(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_290(iParam0, iParam1, 0);
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
			func_28(iParam0, 66, 0);
		}
	}
}

void func_89(int iParam0)
{
	func_291(iParam0);
	func_292(iParam0, 0);
}

void func_90(int iParam0, int iParam1)
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

bool func_91(int iParam0)
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

void func_92(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_293(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_293(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_93(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_94()
{
	return func_294(Global_1879514->f_1);
}

int func_95(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_295(iParam0);
	iVar3 = func_296(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_297();
				func_225(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_298(iParam0, 1);
			if (func_299(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_300(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_301(1, iParam0);
				}
				else
				{
					func_302(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_96(int iParam0)
{
	if (func_167() != -1)
	{
		return;
	}
	if (Global_40.f_4283.f_4 == iParam0)
	{
		return;
	}
	Global_40.f_4283.f_4 = iParam0;
	iVar0 = 176656832;
	iVar1 = 176656832;
	switch (Global_40.f_4283)
	{
		case 0:
			iVar0 = 794696385;
			iVar1 = -2137730706;
			break;
		case 1:
			iVar0 = 2091083291;
			iVar1 = -1771575988;
			break;
		case 2:
			iVar0 = -302574837;
			iVar1 = -1205318041;
			break;
		case 3:
			iVar0 = -1916588959;
			iVar1 = 772151702;
			break;
		case 6:
			iVar0 = 1786449168;
			iVar1 = -365550600;
			break;
	}
	iVar2 = 0;
	while (iVar2 < 60)
	{
		if (Global_40.f_4283.f_6[iVar2]->f_4 == 2)
		{
			func_300(Global_40.f_4283.f_6[iVar2], 1, 0);
		}
		iVar2++;
	}
	if (Global_40.f_4283.f_4 == 0 && iVar0 != 176656832)
	{
		func_95(iVar0, 1137976064, -469960592, -1, 1, 1, 0);
	}
	else if (Global_40.f_4283.f_4 == 2 && iVar1 != 176656832)
	{
		func_95(iVar1, 1137976064, -469960592, -1, 1, 1, 0);
	}
	func_303();
}

void func_97(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 || iParam0);
}

void func_98(int iParam0, int iParam1)
{
	if (iParam0 > 4)
	{
		iParam0 = 4;
	}
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam1 == 16)
	{
		Global_40.f_4283.f_312 = iParam0;
		iVar0 = 0;
		while (iVar0 < 17)
		{
			func_304(iVar0, iParam0);
			iVar0++;
		}
	}
	else
	{
		func_304(iParam1, iParam0);
	}
}

void func_99()
{
	func_305(32);
}

void func_100()
{
	Global_1359489->f_11 = 0;
}

void func_101(bool bParam0, int iParam1)
{
	if (func_306())
	{
		if (func_307(255))
		{
			if (!func_308(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_309(Global_1894899->f_2) && func_102(Global_1894899->f_2))
		{
			func_310(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_311(16);
			}
		}
		else if (func_309(Global_1894899->f_2) && !func_312(Global_1894899->f_2, 2))
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
		func_313(16);
		func_314();
		if (bVar0)
		{
			func_313(1);
		}
	}
}

bool func_102(int iParam0)
{
	if (!func_309(iParam0))
	{
		return false;
	}
	return func_312(iParam0, 8);
}

int func_103(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var1.f_10 = 7;
	Var1 = iParam4;
	Var1.f_1 = iParam5;
	Var1.f_2 = iParam6;
	Var1.f_3 = iParam7;
	Var1.f_4 = iParam8;
	Var1.f_6 = { vParam0 };
	Var1.f_9 = fParam3;
	return func_315(&uVar0, &Var1);
}

bool func_104(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_316(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_105(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	func_317(vParam1, fParam4, 0);
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
	return true;
}

void func_106(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_318(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_319(uParam0, iParam1);
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
		iVar1 = func_320(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_321(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_322(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_323(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_324(uParam0->f_13[iVar0], 2);
		}
	}
}

void func_107(var uParam0)
{
	set_ped_reset_flag(Global_35, 129, true);
	if (func_325(uParam0, Global_35, func_58(Global_35), 0, 1, 1))
	{
	}
	else if (!func_326(uParam0, Global_35, 4))
	{
	}
	if ((is_screen_faded_out() && _get_anim_scene_time(uParam0->f_156) > 0.75f) && !_0xef324e9550a394d5(uParam0->f_156))
	{
		do_screen_fade_in(1000);
	}
	if (_get_anim_scene_time(uParam0->f_156) >= 4.5f && !bLocal_23)
	{
		_0x9428447ded71fc7e("Chapter_Screen_Scenes");
		bLocal_23 = true;
	}
	if (_get_anim_scene_time(uParam0->f_156) > 46.83f && !bLocal_21)
	{
		func_327("MUD1_HELP_RESTORE", 10000, 0, 0, 0, 1);
		bLocal_21 = true;
	}
	if (!bLocal_22)
	{
		if (_0x005e6f28dd7ed58d(uParam0->f_156, "HoseaMatthews"))
		{
			task_follow_nav_mesh_to_coord(iLocal_14, -126.0461f, -23.87263f, 96.09798f, 1f, 45000, 0.25f, 0, 40000f);
			bLocal_22 = true;
			if (!_0xef324e9550a394d5(uParam0->f_156))
			{
				force_ped_motion_state(iLocal_14, -668482597, false, 1, false);
			}
			func_15(5, 0, 0, 0, 6f, 1, 1, 0, 0, 0, 0);
		}
	}
	if (!bLocal_19)
	{
		if (func_328(5, 0, 0))
		{
			if (func_329(5))
			{
				bLocal_19 = true;
			}
		}
	}
}

void func_108(var uParam0, int iParam1)
{
	uParam0->f_149 = iParam1;
	func_330(uParam0, 2);
}

int func_109(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_110(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

void func_111(bool bParam0)
{
	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_109(Global_35, iVar0, 0, 1);
		if (is_weapon_valid(iVar1))
		{
			if (_is_weapon_two_handed(iVar1) || func_331(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					_0xe9bd19f8121ade3e(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_112(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_167() == 0)
	{
		func_332(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_333(1);
	if (bParam1)
	{
		func_334(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_335(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_337(1, func_336(fParam0, -100f, 100f), bParam1);
}

void func_113(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_167() == 0)
	{
		func_332(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_333(2);
	if (bParam1)
	{
		func_334(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_335(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_337(2, func_336(fParam0, -100f, 100f), bParam1);
}

void func_114(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_167() == 0)
	{
		func_332(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_333(0);
	if (bParam1)
	{
		func_334(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_338();
	}
	if (bParam2)
	{
		fParam0 = func_335(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_337(0, func_336(fParam0, -100f, 100f), bParam1);
}

void func_115()
{
	Global_1905944->f_5695 = 1;
}

void func_116(int iParam0)
{
	if (!func_339(iParam0))
	{
		return;
	}
	if (!Global_1395601->f_5[iParam0]->f_21)
	{
		Global_1395601->f_5[iParam0]->f_21 = 1;
	}
}

bool func_117(bool bParam0, bool bParam1, bool bParam2)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_340(iVar1, bParam0, bParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_118(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4)
{
	func_61(uParam4, &cParam0);
	if (func_60(uParam4, 2) && !func_60(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_341(uParam4) != 1)
	{
		func_342(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_341(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_156, false))
				{
					func_343(uParam4, &cParam0);
				}
				else if (_0xef324e9550a394d5(uParam4->f_156))
				{
					func_344(uParam4, 4);
					return 0;
				}
				else if (func_345(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				func_344(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_156))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (!is_string_null_or_empty(&(uParam4->f_158)) && func_60(uParam4, 134217728))
				{
				}
				else
				{
					func_346(uParam4);
				}
				func_122(&(uParam4->f_1));
				func_344(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_77(uParam4);
				if (!func_121(&(uParam4->f_1)))
				{
					func_29(&(uParam4->f_1), 0);
				}
				else if (func_347(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_344(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_156) || !_is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (func_21(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_156, true, false))
					{
						func_344(uParam4, 4);
					}
					else if (!func_63(func_62(uParam4)) && !func_104(Global_35, func_62(uParam4), 100f, 1, 1))
					{
						func_241(1);
						start_player_teleport(get_player_index(), func_62(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_347(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_344(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (!get_is_loading_screen_active())
				{
					_0xa565fac215cbc77d();
					func_348(1, 0);
					func_343(uParam4, &cParam0);
					func_344(uParam4, 3);
				}
				else
				{
					shutdown_loading_screen();
				}
			}
			else if (func_347(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					_delete_anim_scene(uParam4->f_156);
				}
				func_344(uParam4, 4);
			}
			break;
		case 3:
			func_349(uParam4);
			if (func_345(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_started(uParam4->f_156, false)) && (_0xef324e9550a394d5(uParam4->f_156) || func_60(uParam4, 512)))
			{
				if (!func_60(uParam4, 1024) && func_350(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_60(uParam4, 512))
				{
					func_122(&(uParam4->f_1));
					func_64(uParam4, 512);
					func_344(uParam4, 4);
				}
				else if (func_60(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_342(uParam4);
			}
			if (func_60(uParam4, 524288))
			{
				if (IntToFloat(absi((func_351(uParam4) - func_352(uParam4)))) <= 2f)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					if (_0xef324e9550a394d5(uParam4->f_156))
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
				if (func_326(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_352(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_353(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_156))
				{
				}
				func_354(uParam4);
				func_355(uParam4);
				return 1;
			}
			else
			{
				if (func_60(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_156) && !_0xef324e9550a394d5(uParam4->f_156))
						{
							_delete_anim_scene_2(uParam4->f_156);
						}
						func_122(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_64(uParam4, 512);
						func_72(uParam4, 67108864, 1);
						func_344(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_60(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_156)) && is_screen_faded_out()) && func_352(uParam4) <= 5000) && func_352(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_60(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_30(&(uParam4->f_213), 0);
					func_64(uParam4, 536870912);
				}
				if (func_352(uParam4) >= 5000 && func_352(uParam4) <= (func_351(uParam4) - 5000))
				{
					func_356();
				}
			}
			break;
		case 6:
			if (func_353(uParam4))
			{
				func_354(uParam4);
				func_355(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_60(uParam4, 524288))
			{
				_0x1b70811d3bf75db9(1, 1);
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1000);
					if (_is_anim_scene_paused(uParam4->f_156))
					{
						func_64(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					if (!_is_anim_scene_paused(uParam4->f_156))
					{
						set_anim_scene_paused(uParam4->f_156, true);
						if (_0xc17f69e1418cd11f(9) != 0)
						{
							_0xdd1232b332cbb9e7(9, 1, 0);
						}
						return 0;
					}
					else if (_0x4cdffe3189ebdbd0(uParam4->f_156))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_345(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_344(uParam4, 3);
					}
					else if (func_347(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_344(uParam4, 3);
					}
				}
				if (func_341(uParam4) == 3)
				{
					if (func_60(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_344(uParam4, 4);
			break;
	}
	return 0;
}

bool func_119(int iParam0)
{
	return iParam0 > -1;
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_121(var uParam0)
{
	return func_357(*uParam0, 1);
}

void func_122(var uParam0)
{
	func_358(uParam0, 0f);
}

void func_123(int iParam0)
{
	func_359();
	Global_1911774->f_1 = get_game_timer();
	Global_1911774->f_2 = iParam0;
}

void func_124()
{
	if (!network_is_in_session())
	{
		return;
	}
	if (!network_is_in_mp_cutscene())
	{
		return;
	}
	network_set_in_mp_cutscene(false, false, 32, true);
}

bool func_125(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_126(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_360(bParam0);
}

int func_127(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_361(iParam1, 1, 0) };
		iParam3 = func_362(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_364(iParam1, iParam2, func_363(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_365(1, (func_167() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_363(iParam3, 1)])
			{
				func_366(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_367(32768) && iParam1 != &Global_1946804->f_57[func_363(iParam3, 1)])
			{
				func_368();
				func_366(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_366(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_369(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_366(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_79(0);
			func_370(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_366(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_128(int iParam0, bool bParam1)
{
	Var0 = { func_361(iParam0, 0, 0) };
	Var5 = { func_371(iParam0, Var0, Var0.f_4, 0) };
	if (func_372(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_373(0), &Var5, bParam1);
}

void func_129(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_167() != -1;
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
			func_374(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_375(iParam1, 29, bVar4, 1, 0);
			func_375(iParam1, 31, bVar4, 1, 0);
			func_375(iParam1, 30, bVar4, 1, 0);
			func_375(iParam1, 22, bVar4, 1, 0);
			func_375(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_367(32768) && func_376(1108822547, 8)) && func_377(10, iParam3))
	{
		func_378(iParam1, 0, 1);
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
			iVar3 = func_379(iVar1, 1);
			if (func_376(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_377(iVar1, iParam3))
				{
				}
				else if ((func_376(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_376(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_375(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_380(iVar3, 1, 6);
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
								func_375(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_376(iVar3, 1))
							{
								func_381(iVar3, 1, 6);
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

int func_130(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_131(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_382(iParam0);
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

int func_132(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_300(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_133(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_134(int iParam0)
{
	if (!func_133(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

int func_135(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_136(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_137(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_136(iParam1))
	{
		iParam1 = func_135(func_134(iParam0));
		if (!func_136(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		if ((bParam2 || bParam6) && (!func_383(iParam0, -1) || (*Global_1835011)[iParam0]->f_70))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
		}
		else
		{
			if (func_384())
			{
				if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
				{
					if ((*Global_1835011)[iParam0]->f_27 == Global_1905944->f_5698)
					{
						func_385(1);
					}
				}
			}
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1835011)[iParam0]->f_27));
			if (func_383(iParam0, -1) && func_386(iParam0))
			{
				func_387(iParam0, fParam5, iParam1, bParam2, 1);
				func_388((*Global_1835011)[iParam0], 2);
			}
		}
	}
	else if ((bParam2 && !func_389(iParam0)) && !Global_43891)
	{
		func_387(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_390(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_12));
	}
	if ((is_thread_active((*Global_1835011)[iParam0]->f_16, false) && !func_391(iParam0)) && !func_390(iParam1, 1024))
	{
		force_cleanup_for_thread_with_this_id((*Global_1835011)[iParam0]->f_16, 1);
	}
	if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
	{
		destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
	}
	if (bParam4)
	{
		func_392((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_393(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_73 = 0;
}

void func_138(int iParam0, bool bParam1, int iParam2)
{
	if (!func_294(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_272(iParam0) && !func_271(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_394(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_272(iParam0))
	{
		iParam2 = -1;
	}
	if (func_395(iParam0) == 3 || (func_395(iParam0) == 1 && _0x01f4d242765c6b24(func_394(iParam0))))
	{
		func_397(func_396(iParam0), func_394(iParam0), iParam2);
		if ((!func_294(Global_1572864->f_8) && !func_398(0, 1, 0)) && !func_20(&Global_1935630, 32768))
		{
			iVar0 = func_399(iParam0);
			if (iVar0 != -1)
			{
				func_400(0);
			}
			else if (func_396(iParam0) == 8)
			{
				iVar0 = func_401();
				if (iVar0 != -1)
				{
					func_400(0);
				}
			}
		}
	}
	func_402(iParam0, 0);
	if (func_403(0) == iParam0)
	{
		func_404(1);
		func_405(0);
		func_406(1);
	}
	func_407(iParam0, 1);
	func_408(iParam0);
}

bool func_139(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_140(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_167() == -1)
	{
		if (func_409(iParam0) && func_410(iParam0))
		{
			func_411(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_141(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_412(iParam0, iParam1);
	Var0 = { func_361(iParam0, 0, 1) };
	iVar5 = func_413(iParam0, &Var0, 0, 0);
	iVar6 = func_414(iParam0, 0);
	if ((iVar5 > 1 && !func_415()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_160(iParam0, -2051813666))
		{
			func_40(583, 1);
		}
		else
		{
			func_40(582, 0);
		}
	}
	if (func_416(iParam0, &Var0, *iParam1, 0, 0))
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

void func_142(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_417(iParam0, -949239683))
	{
		case -1565009253:
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
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

int func_143(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_139(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_159(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_418(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_419(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_373(bParam2), iParam0, 0);
	return iVar2;
}

bool func_144(int iParam0)
{
	if (func_167() != -1)
	{
		return false;
	}
	return func_145(iParam0) != 0;
}

int func_145(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_420())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_421(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_146(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_147(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_420())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_146(iVar0))
		{
			if (func_193(func_421(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_148(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_422(48);
	func_423(0, -1);
}

bool func_149(int iParam0)
{
	if (func_167() != -1)
	{
		return false;
	}
	return func_180((*Global_1347702)[iParam0]->f_15, 1);
}

int func_150(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_151(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_152()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_153(int iParam0)
{
	if (func_167() != -1)
	{
		return false;
	}
	return func_180((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_154(int iParam0)
{
	if (func_167() != -1)
	{
		return false;
	}
	if (!func_424(iParam0))
	{
		return false;
	}
	return func_272((*Global_1347702)[iParam0]->f_15);
}

int func_155()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_193(func_425(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_156(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_152() && (func_154(38) || func_149(38)))
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
			if (func_152() && (func_154(39) || func_149(39)))
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
			iVar9 = func_426(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_152() && (func_154(41) || func_149(41)))
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
			if (func_152() && (func_154(49) || func_149(49)))
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
			iVar9 = func_426(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_427(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_428(iParam0, iVar13, iVar14))
	{
	}
	if (func_429(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_430(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_431(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_432(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_433(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_157(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_152() && (func_154(38) || func_149(38)))
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
			if (func_152() && (func_154(39) || func_149(39)))
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
			if (func_152() && (func_154(49) || func_149(49)))
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
		if (func_152() && (func_154(38) || func_149(38)))
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
			func_434(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_434(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_436(_create_var_string(2, sVar0), _create_var_string(2, func_435(func_151(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_434(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_434(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_152() && (func_154(39) || func_149(39)))
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
			func_434(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_434(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_152() && (func_154(49) || func_149(49)))
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
			func_434(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_434(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_434(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_434(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_159(int iParam0)
{
	if (!func_139(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_160(int iParam0, int iParam1)
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

bool func_161(int iParam0, int iParam1)
{
	if (!func_139(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_162(int iParam0)
{
	if (!func_437(iParam0))
	{
		return false;
	}
	return func_438(iParam0);
}

void func_163(int iParam0)
{
	if (!func_437(iParam0))
	{
		return;
	}
	func_439(iParam0);
	func_440(iParam0);
}

int func_164(int iParam0)
{
	if (!func_139(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_165(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
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
	if (func_139(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_441(iVar0) || func_442(iVar0))
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

int func_166(int iParam0, bool bParam1)
{
	if (!func_139(iParam0, 0))
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

int func_167()
{
	return Global_1572887->f_12;
}

void func_168(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_110(iParam0))
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

bool func_169(bool bParam0)
{
	if (func_167() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_373(bParam0));
}

bool func_170(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_361(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_443((386 + iVar28), 1);
			if (func_444(iParam0, &Var0, iVar5, 0))
			{
				if (func_445(iParam0, &Var6, iVar5))
				{
					Var29 = { func_371(iParam0, Var0, iVar5, 0) };
					func_446(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_169(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_171(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_447(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_171(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_173(iParam0))
	{
		return false;
	}
	if (!func_169(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_172(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_166(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_167() == -1)
		{
			func_168(iVar0);
			if (iParam1 == 1248274121)
			{
				func_448(iVar0);
			}
		}
		if (!func_416(iParam0, &uVar1, 1, 0, 0))
		{
			func_411(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_449(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_170(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_170(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_170(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_450())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_451(iVar0))
				{
					func_170(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_170(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_109(Global_35, 2, 0, 1);
				if ((((func_110(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_162(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_110(iVar7) && func_162(24))
				{
					if (!func_170(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_170(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_170(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_40(480, 1);
	}
	return true;
}

bool func_173(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_174(int iParam0, int iParam1, int iParam2)
{
	if (!func_173(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_110(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
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
	if (func_193(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
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
		func_211(func_452(iParam0), func_210(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_167() == -1)
		{
			if (func_180((*Global_1835011)[14]->f_1, 1))
			{
				func_40(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_169(0))
	{
		if (func_171(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_216(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_175(int iParam0)
{
	if ((iParam0 == -615217896 && !func_453()) || iParam0 != -615217896)
	{
		if (func_454(Global_35, iParam0, &uVar0))
		{
			func_127(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_201();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_201();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_201();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_199();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_197();
			break;
	}
}

void func_176(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_197();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_198();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_199();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_200();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_201();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_455();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_456();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_177(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_178(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_179(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_180(int iParam0, bool bParam1)
{
	switch (func_457(iParam0))
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

void func_181(int iParam0)
{
	bVar0 = func_160(iParam0, -2017733358);
	if (func_458() < 3)
	{
		if (bVar0)
		{
			if (func_460(func_459(iParam0), iParam0))
			{
				func_211(79, func_210(func_459(iParam0)), 1);
			}
			else
			{
				func_211(78, func_210(func_459(iParam0)), 1);
			}
		}
		else
		{
			func_211(80, func_210(func_461(iParam0)), 1);
		}
	}
}

bool func_182()
{
	if (((((func_462(839908568, 400) || func_462(-1134030454, 400)) || func_462(623353496, 400)) || func_462(-344413337, 400)) || func_462(-1664948962, 400)) || func_462(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_183(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_463(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_464(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_465(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_184(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_156(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_158(51, 0, 0, 0, 0, -1, 0);
			func_466(8192);
			break;
		case 581047644:
			func_156(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_158(51, 0, 0, 0, 0, -1, 0);
			func_466(524288);
			break;
		case -644199619:
			func_156(39, 0, 0, 0, 0, 0, 1, 0);
			func_158(39, 0, 0, 0, 0, -1, 0);
			func_467(16);
			break;
		case 684296857:
			func_156(41, 0, 0, 0, 0, 0, 1, 0);
			func_158(41, 0, 0, 0, 0, -1, 0);
			func_468(8);
			break;
		case 466137807:
			func_156(49, 0, 0, 0, 0, 0, 1, 0);
			func_158(49, 0, 0, 0, 0, -1, 0);
			func_469(16);
			break;
		case -1087522507:
			func_156(43, 0, 0, -1791518714, func_470(1), 0, -1, 0);
			func_471(1);
			break;
		case -405829000:
			func_156(43, 0, 0, -2087881550, func_470(2), 0, -1, 0);
			func_471(2);
			break;
		case 378660860:
			func_156(43, 0, 0, 1908068621, func_470(4), 0, -1, 0);
			func_471(4);
			break;
		case 1566111097:
			func_156(43, 0, 0, 1611247019, func_470(8), 0, -1, 0);
			func_471(8);
			break;
		case 1276007140:
			func_156(43, 0, 0, 1319635688, func_470(16), 0, -1, 0);
			func_471(16);
			break;
	}
}

void func_185(int iParam0)
{
	if (func_472() == 1)
	{
		if (func_149(39))
		{
			func_40(342, 0);
		}
		else
		{
			func_40(343, 0);
			func_467(1);
		}
	}
	if (func_472() >= 30)
	{
		func_40(344, 0);
	}
	func_156(39, 0, 0, 0, 0, 0, -1, 0);
	func_158(39, 0, 0, func_472(), 30, 1, 0);
}

void func_186(int iParam0)
{
	if (func_473() == 1)
	{
		if (func_149(49))
		{
			func_40(409, 0);
		}
		else
		{
			func_40(410, 0);
			func_469(1);
		}
	}
	if (func_473() >= 10)
	{
		func_40(411, 0);
	}
	func_156(49, 0, 0, 0, 0, 0, -1, 0);
	func_158(49, 0, 0, func_473(), 10, 1, 0);
}

void func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_40(437, 0);
			func_40(440, 0);
			func_474(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_156(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_158(51, 0, 0, sVar0, func_426(-949689219, 20), 1, 0);
			func_466(1);
			func_475(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_474(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_156(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_158(51, 0, 0, sVar0, func_426(-1248968496, 20), 1, 0);
			func_466(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_474(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_156(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_158(51, 0, 0, sVar0, func_426(1706369307, 20), 1, 0);
			func_466(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_474(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_156(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_158(51, 0, 0, sVar0, func_426(1520110311, 20), 1, 0);
			func_466(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_40(438, 0);
			func_474(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_156(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_158(51, 0, 0, sVar0, func_426(-1992824800, 20), 1, 0);
			func_466(32768);
			break;
		default:
			func_40(439, 0);
			break;
	}
}

void func_188()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_189(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_167() == -1)
	{
		if (!func_149(43))
		{
			if (iParam0 == 281887510)
			{
				func_40(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_40(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_40(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_40(400, 0);
			}
		}
		else if (func_160(iParam0, 412399755))
		{
			func_476(-1791518714);
			if (func_477() == 0)
			{
				func_423(0, 10);
				iVar1 = func_478(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_479(iParam0) < func_480(iParam0))
					{
						func_156(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_158(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_149(44))
		{
			if (iParam0 == -222563712)
			{
				func_40(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_40(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_40(401, 0);
			}
		}
		else if (func_160(iParam0, 709057512))
		{
			func_476(-2087881550);
			if (func_477() == 1)
			{
				func_423(0, 10);
				iVar1 = func_478(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_479(iParam0) < func_480(iParam0))
					{
						func_156(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_158(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_149(45))
		{
			if (iParam0 == 2116770557)
			{
				func_40(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_40(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_40(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_40(398, 0);
			}
		}
		else if (func_160(iParam0, -1478961327))
		{
			func_476(1908068621);
			if (func_477() == 2)
			{
				func_423(0, 10);
				iVar1 = func_478(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_481(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_482(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_422(48);
					}
					if (func_479(iParam0) < func_480(iParam0))
					{
						func_156(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_158(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_479(iParam0) < func_480(iParam0))
					{
						func_156(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_158(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_149(46))
		{
			if (iParam0 == 2085530337)
			{
				func_40(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_40(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_40(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_40(406, 0);
			}
		}
		else if (func_160(iParam0, -1238404098))
		{
			func_476(1611247019);
			if (func_477() == 3)
			{
				func_423(0, 10);
				iVar1 = func_478(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_479(iParam0) < func_480(iParam0))
					{
						func_156(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_158(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_149(47))
		{
			if (iParam0 == -1521783510)
			{
				func_40(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_40(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_40(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_40(403, 0);
			}
		}
		else if (func_160(iParam0, 1160548794))
		{
			func_476(1319635688);
			if (func_477() == 4)
			{
				func_423(0, 10);
				iVar1 = func_478(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_479(iParam0) < func_480(iParam0))
					{
						func_156(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_158(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_190(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_481(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_482(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_422(48);
		}
	}
}

void func_191(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_193(func_483(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_484(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_485(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_192(int iParam0, int iParam1, int iParam2)
{
	if (func_167() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_183(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_183(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_183(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_183(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_183(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_183(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_183(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_183(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_183(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_183(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_183(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_183(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_183(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_486())
			{
				func_183(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_183(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_183(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_183(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_183(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_183(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_183(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_183(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_183(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_183(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_183(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_183(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_183(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_193(int iParam0, int iParam1, bool bParam2)
{
	if (!func_139(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_159(iParam0);
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
		if (!func_487(iParam0, 1))
		{
			return false;
		}
	}
	return func_143(iParam0, 0, bParam2) >= iParam1;
}

void func_194(int iParam0)
{
	if (func_149(41))
	{
		func_40(363, 0);
	}
	else
	{
		func_40(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_488(-1865241121);
			func_489(-642026005);
			func_490(-642026005);
			func_423(0, 10);
			break;
		case -2108314374:
			func_488(2117142684);
			func_489(-940584364);
			func_490(-940584364);
			func_423(0, 10);
			break;
		case -1193798153:
			func_488(-1409326024);
			func_489(1972645282);
			func_490(1972645282);
			func_423(0, 10);
			break;
		case -787702678:
			func_488(-641744968);
			func_489(1667205433);
			func_490(1667205433);
			func_423(0, 10);
			break;
		case -804542901:
			func_488(-946988203);
			func_489(1362715885);
			func_490(1362715885);
			func_423(0, 10);
			break;
		case -1696275132:
			func_488(-646136018);
			func_489(1053540370);
			func_490(1053540370);
			func_423(0, 10);
			break;
		case -161595323:
			func_488(-955835837);
			func_489(-1100103852);
			func_490(-1100103852);
			func_423(0, 10);
			break;
		case -1114363619:
			func_488(-179276075);
			func_489(-1409869209);
			func_490(-1409869209);
			func_423(0, 10);
			break;
		case -368407134:
			func_488(-492711560);
			func_489(-1760235357);
			func_490(-1760235357);
			func_423(0, 10);
			break;
		case 1997759228:
			func_488(1764383959);
			func_489(-138366827);
			func_490(-138366827);
			func_423(0, 10);
			break;
		case 1265573293:
			func_488(317501533);
			func_489(-1261163843);
			func_490(-1261163843);
			func_423(0, 10);
			break;
		case -1030441283:
			func_488(817753087);
			func_489(-963523016);
			func_490(-963523016);
			func_423(0, 10);
			break;
		case -1490884871:
			func_488(576606016);
			func_489(560825326);
			func_490(560825326);
			func_423(0, 10);
			break;
		case -395458616:
			func_488(814934957);
			func_489(858269539);
			func_490(858269539);
			break;
	}
}

void func_195(int iParam0, int iParam1)
{
	func_491(iParam0, iParam1, &uVar0);
}

bool func_196(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_109(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_109(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_492("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_493(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_494(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_197()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_198()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_199()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_200()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_201()
{
	func_495();
	func_496();
	func_497();
}

void func_202(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_203(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_434(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_204(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_205(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_206(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_207(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_208(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_209(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_210(int iParam0)
{
	if (!func_139(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_211(int iParam0, int iParam1, bool bParam2)
{
	func_226(iParam0, &iVar0, &iVar1);
	if (!func_227(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_498(iParam0, 1024))
	{
		return;
	}
	func_228(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_212(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_226(iParam0, &iVar0, &iVar1);
	if (!func_227(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_498(iParam0, 1024))
	{
		return;
	}
	func_228(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_213()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_420())
	{
		return func_214();
	}
	iVar4 = (func_420() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_420())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_499(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_421(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_214()
{
	iVar0 = get_random_int_in_range(0, func_420());
	return func_421(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_215(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	if (!func_139(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_361(iParam0, 0, 1) };
	Var5 = { func_371(iParam0, Var0, Var0.f_4, 0) };
	return func_500(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_217(int iParam0)
{
	if (func_167() != -1)
	{
		return;
	}
	switch (func_164(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_501(81053684, 0) <= 0)
			{
				func_366(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_366(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_502(iParam0);
			if (func_503(iVar0))
			{
				func_504(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_366(30, iParam0, 0, 0, 0);
			}
			if (func_505() == -2125499975 || func_505() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_366(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_505() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_366(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_506(-525676072, 0))
			{
				if (func_507(-525676072, &iVar1))
				{
					func_366(33, iVar1, 0, 0, 0);
				}
			}
			func_366(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_508(99217379))
		{
			func_127(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_163(24);
		if (func_196(&iVar2, 0))
		{
			func_170(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_218(int iParam0)
{
	if (func_160(iParam0, 943695443))
	{
		func_509(0, iParam0);
	}
	else if (func_160(iParam0, -2096528786))
	{
		func_509(1, iParam0);
	}
	else if (func_160(iParam0, -1094167013))
	{
		func_509(2, iParam0);
	}
	else if (func_160(iParam0, 1936654645))
	{
		func_509(3, iParam0);
	}
	else if (func_160(iParam0, 1306489306))
	{
		func_509(4, iParam0);
	}
	else if (func_160(iParam0, 435762317))
	{
		func_509(5, iParam0);
	}
	else if (func_160(iParam0, 1259363210))
	{
		func_509(6, iParam0);
	}
	else if (func_160(iParam0, 881398259))
	{
		func_509(7, iParam0);
	}
	else if (func_160(iParam0, -541549214))
	{
		func_509(8, iParam0);
	}
	else if (func_160(iParam0, 130796156))
	{
		func_509(-1, iParam0);
	}
}

int func_219(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_510(&Var4, 1356624740);
	return func_511(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_220(int iParam0)
{
	if (!func_139(iParam0, 0))
	{
		return Var0;
	}
	if (func_160(iParam0, -305066475))
	{
		if (func_167() == -1)
		{
			if (func_160(iParam0, -537818634))
			{
				return func_512(189951448);
			}
			else
			{
				return func_512(1176172851);
			}
		}
	}
	else if (func_160(iParam0, -537818634))
	{
		return func_512(-963660207);
	}
	if (func_160(iParam0, 2084895747))
	{
		return func_512(1694039471);
	}
	return Var2;
}

void func_221(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_167() == -1)
			{
				if (func_180((*Global_1835011)[4]->f_1, 1))
				{
					func_40(109, 1);
				}
			}
			break;
	}
}

void func_222(int iParam0, char* sParam1)
{
	sVar0 = func_514(func_513(0));
	func_516(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_515(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_223(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_139(iParam0, 0))
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
	if (!func_517())
	{
		func_518(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_519(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_519(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_161(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_159(iParam0);
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
	else if (!func_520(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_521(_create_var_string(10, &cVar2, _create_var_string(0, func_210(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_160(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_210(iParam0));
	}
	func_516(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_224(int iParam0, int iParam1, bool bParam2)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	if (!func_522(iParam0))
	{
		return false;
	}
	if (func_523(iParam0, -2147483648))
	{
		return true;
	}
	if (func_523(iParam0, 1073741824))
	{
		return true;
	}
	iVar0 = func_524(iParam1);
	if (iVar0 < (*Global_1360165)[iParam0]->f_22)
	{
		return true;
	}
	if (iVar0 == (*Global_1360165)[iParam0]->f_22)
	{
		if (bParam2)
		{
			return true;
		}
		if (!func_523(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_225(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_525(*iParam0);
	iVar1 = func_526(*iParam0);
	iVar2 = func_527(*iParam0);
	iVar3 = func_528(*iParam0);
	iVar4 = func_529(*iParam0);
	iVar5 = func_530(*iParam0);
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
	iVar6 = func_531(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_531(iVar1, iVar0);
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
	func_532(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_226(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_227(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_533(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_534(iParam0))
	{
		return false;
	}
	if (func_535(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_498(iParam0, 1)) || func_536(32768))
	{
		if (!func_498(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_537())
	{
		return false;
	}
	return true;
}

void func_228(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_229(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_230(var uParam0, int iParam1, bool bParam2)
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

void func_231(int iParam0)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_538(iParam0);
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

void func_232(int iParam0)
{
	if (func_12(iParam0))
	{
		if (does_entity_exist(func_130(iParam0)))
		{
			func_93(iParam0, 67108864, 1);
			func_46(iParam0, 19, 1);
		}
	}
}

float func_233(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_234(int iParam0)
{
	iVar0 = func_130(iParam0);
	iVar1 = func_47(iParam0, 0);
	func_539(iParam0, iVar0);
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

bool func_235(int iParam0)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_236(int iParam0)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_237(int iParam0, int iParam1, bool bParam2)
{
	if (!func_119(iParam0))
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

int func_238(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	iVar0 = func_55(iParam0);
	if (func_22(iVar0, 0))
	{
		if (func_22(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_235(iParam0)) || func_236(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_540(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_541(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_542(iParam0);
					_0x7b204f88f6c3d287(func_543(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_543(iParam0, 0));
					func_544(iParam0);
				}
			}
			else
			{
				if (func_41(iParam0, 32768, 1))
				{
					iVar2 = func_543(iParam0, 0);
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
		if (func_22((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_41(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_542(iParam0);
				_0x7b204f88f6c3d287(func_543(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_543(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_542(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_545(iParam0, 0);
	return 1;
}

void func_239(int iParam0, bool bParam1)
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

void func_240(int iParam0)
{
	if (func_167() != -1)
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

void func_241(int iParam0)
{
	if (!network_is_in_session())
	{
		return;
	}
	if (network_is_in_mp_cutscene())
	{
		return;
	}
	set_entity_visible_in_cutscene(player_ped_id(), iParam0, 0, 256);
	network_set_in_mp_cutscene(true, true, 32, true);
}

bool func_242(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_243(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_110(iVar3) && _0x705be297eebdb95d(iVar3))
			{
				if (bParam0)
				{
					if (get_ammo_in_ped_weapon(Global_35, iVar3) < _get_weapon_clip_size(iVar3) * 4)
					{
						_add_ammo_to_ped_by_type(Global_35, _get_ammo_type_for_weapon(iVar3), (_get_weapon_clip_size(iVar3) * 4 - get_ped_ammo_by_type(Global_35, get_ped_ammo_type_from_weapon(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = get_ammo_in_ped_weapon(Global_35, iVar3);
				if (iVar0 > _get_weapon_clip_size(iVar3))
				{
					iVar1 = _get_weapon_clip_size(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					set_ammo_in_clip(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && _0x21091b4beb6376ee(get_player_index()) == 0)
	{
		func_546(1);
	}
}

void func_244()
{
	iVar0 = func_109(Global_35, 9, 1, 0);
	if (func_110(iVar0))
	{
		return;
	}
	iVar0 = func_109(Global_35, 7, 1, 0);
	if (func_110(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_109(Global_35, 0, 1, 0);
	if (func_110(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_109(Global_35, 1, 1, 0);
	if (func_110(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_109(Global_35, 18, 1, 0);
	if (func_110(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_547();
	if (func_110(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_293(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_548(6291456, 0);
	if (func_110(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_293(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_245()
{
	return Global_1900383->f_393;
}

int func_246(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_262(*uParam0, 0f, 0f, 0f))
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

void func_247(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_248(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_249(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_250()
{
	return &Global_1899515;
}

void func_251(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_252(int iParam0)
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

bool func_253()
{
	return (func_549() || func_550());
}

void func_254(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	_0x8f44ebb3ba8f6d44(get_player_index(), 0);
	_0x06d26a96ca1bca75(Global_35, 10, 0f, 0);
	set_ped_is_drunk(Global_35, false);
	_0x406ccf555b04fad3(Global_35, 0, 0f);
	func_551(0f);
	Global_1935436->f_11 = 1;
	if (func_552())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_553();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

char* func_255(int iParam0)
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

struct<8> func_256(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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

struct<4> func_257(var uParam0)
{
	return uParam0->f_152;
}

void func_258(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_554(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_554(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_555(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_374(8);
}

void func_259(var uParam0)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
}

struct<8> func_260()
{
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

void func_261(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_158), sParam1, 64);
}

bool func_262(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

char* func_263()
{
	return "unnamed";
}

void func_264(var uParam0, var uParam1, int iParam2, bool bParam3)
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

void func_265(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_556(uParam0->f_13[iVar0], 2))
		{
			if (_0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_323(uParam0->f_13[iVar0], 1);
			}
		}
		iVar0++;
	}
}

void func_266(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_556(uParam0->f_13[iVar0], 2))
		{
			if (func_556(uParam0->f_13[iVar0], 1) || _0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_557(uParam0, &(uParam0->f_13[iVar0]->f_1), &(uParam0->f_13[iVar0]), uParam0->f_13[iVar0]->f_9);
				if (bParam1 && is_entity_a_ped(&(uParam0->f_13[iVar0])))
				{
					iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
					if (iVar1 != Global_35 && !func_556(uParam0->f_13[iVar0], 16))
					{
						func_252(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_267(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

struct<8> func_268(var uParam0)
{
	return uParam0->f_166;
}

struct<8> func_269()
{
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

int func_270(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_119(iParam0))
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
					if (func_180((*Global_1835011)[4]->f_1, 1))
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
					if (func_558(iVar0, 9, 11))
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
					if (func_180((*Global_1347702)[63]->f_15, 1) || func_272((*Global_1347702)[63]->f_15))
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
					if (func_558(iVar0, 9, 12))
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
					if (!func_180((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_41(18, 134217728, 1))
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
					if (func_558(iVar0, 9, 11))
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
					if (func_180((*Global_1347702)[134]->f_15, 1) || func_272((*Global_1347702)[134]->f_15))
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
					if (func_180((*Global_1835011)[38]->f_1, 1))
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
					if (func_558(iVar0, 9, 11))
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
					if (func_131(747937920, 1) && !func_180((*Global_1347702)[1]->f_15, 1))
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
	if (bParam3 && does_entity_exist(func_130(iParam0)))
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
	if (!func_87(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0]->f_3;
	}
	return iVar8;
}

bool func_271(int iParam0)
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
		iVar0 = func_395(iParam0);
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

bool func_272(int iParam0)
{
	iVar0 = func_457(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_273(int iParam0)
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

bool func_274(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_13(iParam0) || func_48(iParam0, 44, 1))
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

struct<7> func_275(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
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

void func_276(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	iVar0 = func_130(iParam0);
	func_559(iVar0);
	func_28(iParam0, 60, 1);
	if (bParam1)
	{
		func_560(iParam0);
	}
}

void func_277(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	iVar0 = func_130(iParam0);
	func_561(iVar0);
	func_46(iParam0, 60, 1);
	if (bParam1)
	{
		func_562(iParam0);
	}
}

void func_278(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	iVar0 = func_130(iParam0);
	func_563(iVar0);
	if (iParam0 == 14)
	{
		func_564(iVar0);
	}
	func_28(iParam0, 61, 1);
	if (bParam1)
	{
		func_565(iParam0);
	}
}

void func_279(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	iVar0 = func_130(iParam0);
	func_566(iVar0);
	func_46(iParam0, 61, 1);
	if (bParam1)
	{
		func_567(iParam0);
	}
}

int func_280(var uParam0)
{
	return uParam0;
}

bool func_281(int iParam0)
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

bool func_282(int iParam0)
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

bool func_283(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	func_568(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_284(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_285(int iParam0, int iParam1)
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
			iVar0 = func_569(296923297, iParam1);
			return func_570(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_569(1237718549, iParam1);
			return func_570(iVar0);
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

bool func_286(int iParam0, int iParam1)
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

bool func_287(int iParam0, int iParam1)
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

bool func_288(int iParam0, int iParam1)
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
	if (!func_286(iParam0, iVar0))
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

void func_289(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_290(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_286(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_286(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_286(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_286(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_286(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_286(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_286(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_286(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_286(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_286(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_286(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_286(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_286(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_286(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_286(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_286(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_286(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_286(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_286(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_286(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_286(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_286(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_286(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_286(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_286(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_286(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_291(int iParam0)
{
	func_571(iParam0, 1);
	func_571(iParam0, 128);
	func_571(iParam0, 256);
	func_571(iParam0, 512);
	func_571(iParam0, 1024);
	func_571(iParam0, 2048);
	func_571(iParam0, 4096);
	func_571(iParam0, 65536);
	func_571(iParam0, 16384);
	func_571(iParam0, 262144);
	func_571(iParam0, 524288);
	func_571(iParam0, 1048576);
	func_571(iParam0, 2097152);
	func_571(iParam0, 32768);
	func_571(iParam0, 131072);
	func_571(iParam0, 134217728);
	func_571(iParam0, 1073741824);
}

void func_292(int iParam0, bool bParam1)
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

int func_293(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_110(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_110(iVar4) && iVar4 != iVar0)
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
	if (func_167() == -1 && !func_442(iVar0))
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
				if (func_442(-183018591))
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
		if (iParam0 != Global_35 && func_110(iVar0))
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
		func_170(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_572(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_451(iVar0))
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

bool func_294(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_295(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_573(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_574(iVar6);
	}
	return iVar5;
}

int func_296(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_575(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

int func_297()
{
	return &Global_1899515;
}

void func_298(int iParam0, bool bParam1)
{
	func_576(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
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
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
		default:
			break;
	}
	return false;
}

void func_300(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_298(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_301(2, *uParam0);
		}
		else
		{
			func_302(2, *uParam0);
		}
	}
	func_577(uParam0);
}

void func_301(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483] = iParam0;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_1 = iParam1;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_302(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406] = iParam0;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_1 = iParam1;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

void func_303()
{
	Global_1357549 = 0;
	func_34(1);
}

void func_304(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_40.f_4283.f_313 = iParam1;
			break;
		case 1:
			Global_40.f_4283.f_316 = iParam1;
			break;
		case 2:
			Global_40.f_4283.f_317 = iParam1;
			break;
		case 3:
			Global_40.f_4283.f_318 = iParam1;
			break;
		case 4:
			Global_40.f_4283.f_319 = iParam1;
			break;
		case 5:
			Global_40.f_4283.f_320 = iParam1;
			break;
		case 10:
			Global_40.f_4283.f_321 = iParam1;
			break;
		case 12:
			Global_40.f_4283.f_315 = iParam1;
			break;
		case 13:
			Global_40.f_4283.f_314 = iParam1;
			break;
		case 14:
			Global_40.f_4283.f_322 = iParam1;
			break;
	}
}

void func_305(int iParam0)
{
	switch (func_167())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 || iParam0);
			break;
	}
}

bool func_306()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_307(int iParam0)
{
	return func_308(23, iParam0);
}

bool func_308(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_578(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_579())
	{
		return func_578(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_578(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_309(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_310(int iParam0, int iParam1)
{
	if (!func_309(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_311(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_312(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_313(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_314()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_312(iVar1, 1))
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
				if (func_167() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1888801)[iVar1]->f_9, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1888801)[iVar1]->f_9))
				{
					_0x7de4643157ad646c((*Global_1888801)[iVar1]->f_9);
				}
			}
			else if (func_312(iVar1, 2))
			{
				if (func_167() == -1)
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
				func_580(iVar1, 11);
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

int func_315(var uParam0, var uParam1)
{
	uParam1->f_10 = func_581(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_63(uParam1->f_6))
		{
		}
	}
	bVar0 = func_152();
	if (*uParam1)
	{
		if (bVar0 && !func_180((*Global_1835011)[4]->f_1, 1))
		{
			if (func_582(5))
			{
				func_583(5);
				func_584(5);
				func_248(0);
				func_247(0);
			}
		}
	}
	if (func_585(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_180((*Global_1835011)[37]->f_1, 1)) && !func_180((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_180((*Global_1835011)[43]->f_1, 1)) && !func_180((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_586(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_587(iVar1))
	{
		bVar3 = true;
		if (func_588(iVar1))
		{
			bVar4 = true;
		}
		if (func_589(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_590(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_582(0) && func_582(1))
			{
				func_591(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_592())
			{
				func_593();
			}
			func_248(0);
			func_247(0);
			func_249(uParam1->f_6);
		}
	}
	if (!func_587(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_594(uParam1->f_10) == 0 || func_595(uParam1->f_10) == 0) || func_596(uParam1->f_10) == 0)
			{
				func_597(uParam1->f_10);
			}
			func_598(uParam1->f_10);
			func_599(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_586(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_587(iVar1))
	{
		bVar3 = true;
		if (func_588(iVar1))
		{
			bVar4 = true;
		}
		if (func_589(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(iVar2))
			{
				freeze_entity_position(iVar2, false);
			}
			if (!func_63(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_600(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*uParam0 = 0;
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
			Var8 = { func_601(uParam1->f_10) };
			Var10 = { func_602() };
			func_603(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_604(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_605(uParam1->f_10);
		if (uParam1->f_2 && !func_63(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_606(uParam1->f_10);
	if (func_604(uParam1->f_10))
	{
		iVar16 = func_607(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

float func_316(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_317(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

char* func_318(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_58(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_608(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_609(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_319(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_320(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_321(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 11)
	{
		if (&uParam0->f_13[iVar12] == iParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_322(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!does_entity_exist(&(uParam0->f_13[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_323(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_324(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_325(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (bParam4 && is_entity_dead(iParam1))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_318(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = get_entity_model(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
	}
	if (!func_326(uParam0, iParam1, 4))
	{
		if (_0xb89fcff19dafff28(uParam0->f_156, sParam2))
		{
			func_610(uParam0, iParam1, 4);
			return true;
		}
		else if (bParam5 && _0x005e6f28dd7ed58d(uParam0->f_156, sParam2))
		{
			func_610(uParam0, iParam1, 4);
			return true;
		}
	}
	return false;
}

bool func_326(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1) && func_556(uParam0->f_13[iVar0], iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_327(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_328(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_133(iParam0))
	{
		return true;
	}
	if (func_536(32768))
	{
		return true;
	}
	if (is_thread_active((*Global_1835011)[iParam0]->f_16, false))
	{
		return true;
	}
	iVar0 = func_135(func_134(iParam0));
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return true;
	}
	if (!func_271(func_134(iParam0)))
	{
		func_611(iParam0, 0, 0, -1);
	}
	if (func_136(iVar0))
	{
		if (!(*Global_1835011)[iParam0]->f_71)
		{
			if (bParam1)
			{
				func_612(iVar0, 256);
			}
			if (bParam2)
			{
				func_612(iVar0, 512);
			}
			(*Global_1835011)[iParam0]->f_71 = 1;
			return true;
		}
	}
	return false;
}

bool func_329(int iParam0)
{
	if (!func_133(iParam0))
	{
		return false;
	}
	iVar0 = func_135(func_134(iParam0));
	if (!func_136(iVar0))
	{
		return false;
	}
	return func_390(iVar0, 4);
}

void func_330(var uParam0, int iParam1)
{
	uParam0->f_151 = (uParam0->f_151 || iParam1);
}

bool func_331(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_332(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_335(iParam0, fParam1, 1);
	}
	func_614(iParam0, (func_613(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_333(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_334(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

float func_335(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_297();
	func_615(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_616(iParam0, 2);
	if (func_618(iVar0, func_617(iParam0, 2), 1))
	{
		func_619(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_40(88, bParam2);
		return 0f;
	}
	func_620(iParam0, func_297(), 2);
	func_619(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_336(float fParam0, float fParam1, float fParam2)
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

void func_337(int iParam0, float fParam1, bool bParam2)
{
	if (func_167() != -1)
	{
		return;
	}
	if (!func_162(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_621(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_622(iParam0), iVar0);
	func_624(func_623(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_625(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_40(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_40(func_626(iParam0), 1);
	}
	sVar1 = func_627(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

void func_338()
{
	Global_40.f_11095.f_11[14] = 100f;
	set_attribute_points(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

bool func_339(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_340(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_628(iParam0, 1, 0))
	{
		if (func_629(iParam0))
		{
			iVar0 = func_47(iParam0, 0);
			if (_0x800df3fc913355f3(iVar0))
			{
				if (!_0xa8120ebeaf290c7a(iVar0))
				{
					return false;
				}
				if (bParam3 && !_0xa0bc8faed8cfeb3c(func_130(iParam0)))
				{
					return false;
				}
				if ((bParam1 || !func_630(func_130(iParam0), 1116471296, -1082130432, -1082130432, -1082130432)) || is_screen_faded_out())
				{
					_0xd4b614179bcd0654(iVar0);
					func_631(iParam0, 0);
					if (bParam2 && func_273((*Global_1360165)[iParam0]->f_63))
					{
						func_28(iParam0, 65, 0);
					}
				}
				else
				{
					return false;
				}
			}
		}
	}
	return true;
}

int func_341(var uParam0)
{
	return *uParam0;
}

void func_342(var uParam0)
{
	if (((!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false)) || _0xef324e9550a394d5(uParam0->f_156)) || func_60(uParam0, 512))
	{
		if (!func_125(uParam0->f_213, 128))
		{
			func_632();
		}
		return;
	}
	if ((func_326(uParam0, Global_35, 4) || (_0x6f1f0b17109309da(uParam0->f_156, func_58(Global_35)) && _0xb89fcff19dafff28(uParam0->f_156, func_58(Global_35)))) || !_0x4b85b3cf91972222(uParam0->f_156))
	{
		if (!func_125(uParam0->f_213, 128))
		{
			func_632();
		}
		return;
	}
	bVar0 = true;
	iVar1 = _0xc17f69e1418cd11f(9);
	if (iVar1 != 0)
	{
		if (func_633(iVar1))
		{
			if (func_634(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_125(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (func_635(bVar0, bVar2))
	{
		_delete_anim_scene_2(uParam0->f_156);
		func_632();
	}
}

void func_343(var uParam0, char* sParam1)
{
	if (func_341(uParam0) == 2 && (func_242(uParam0->f_212, 16384) || func_60(uParam0, 268435456)))
	{
		Var0 = { func_80(uParam0) };
		func_636(uParam0, &Var0);
	}
	func_637(uParam0, sParam1);
	if (func_60(uParam0, 131072))
	{
		func_638(uParam0, 0);
	}
	if (func_639())
	{
		set_ped_reset_flag(Global_35, 265, true);
		func_640();
	}
	if (func_641())
	{
		func_642(1);
	}
	func_76(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_643(uParam0, cVar8);
	func_348(1, 0);
	func_70(uParam0);
	if (func_644() && _0x6f1f0b17109309da(uParam0->f_156, func_58(Global_35)))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_345(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	func_645(uParam0);
	func_266(uParam0, 1);
	start_anim_scene(uParam0->f_156);
	Global_43800 = uParam0->f_156;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_344(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_122(&(uParam0->f_1));
}

bool func_345(var uParam0, int iParam1)
{
	return (uParam0->f_151 && iParam1) != 0;
}

void func_346(var uParam0)
{
	Var0 = { func_80(uParam0) };
	func_261(uParam0, &Var0);
}

float func_347(var uParam0)
{
	if (!func_121(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_646(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_647() - uParam0->f_1);
}

void func_348(bool bParam0, int iParam1)
{
	if (func_648())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_384())
		{
			func_649(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_349(var uParam0)
{
	if (!func_60(uParam0, 4))
	{
		if (func_242(uParam0->f_212, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_650(uParam0) };
		if (!func_242(uParam0->f_212, 524288))
		{
			func_651(&(uParam0->f_224));
		}
		func_57(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_652(uParam0, 0f, 0f, 0f);
		func_653(uParam0);
		func_654(uParam0);
		func_655(uParam0, 0f, 0f, 0f, 0, 0);
		func_656(uParam0);
		func_64(uParam0, 4);
		func_657(uParam0, 0);
		func_129(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_225)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_225));
		}
	}
}

bool func_350(var uParam0, bool bParam1)
{
	if (func_60(uParam0, 262144))
	{
		return false;
	}
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return false;
	}
	if (!_0x6f1f0b17109309da(uParam0->f_156, "ExportCamera"))
	{
		return false;
	}
	if ((_0xb89fcff19dafff28(uParam0->f_156, "ExportCamera") || (_0x005e6f28dd7ed58d(uParam0->f_156, "ExportCamera") && bParam1)) || _is_anim_scene_active(uParam0->f_156))
	{
		func_64(uParam0, 262144);
		func_657(uParam0, 1);
		return true;
	}
	return false;
}

int func_351(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_duration(uParam0->f_156) * 1000f));
}

int func_352(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_time(uParam0->f_156) * 1000f));
}

bool func_353(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return true;
	}
	if (_0xf94692eb9dc15d74(uParam0->f_156, 0))
	{
		if (func_60(uParam0, 524288))
		{
			_0x1b70811d3bf75db9(1, 1);
		}
		return true;
	}
	if (_is_anim_scene_active(uParam0->f_156) && func_60(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_354(var uParam0)
{
	if (((func_60(uParam0, 1073741824) && !func_60(uParam0, 524288)) && func_60(uParam0, 512)) && is_screen_faded_out())
	{
		do_screen_fade_in(1000);
	}
}

void func_355(var uParam0)
{
	if (!func_60(uParam0, 536870912))
	{
		func_657(uParam0, 1);
		func_30(&(uParam0->f_213), uParam0->f_224);
		func_69();
		func_64(uParam0, 536870912);
	}
	if (func_60(uParam0, 524288))
	{
		do_screen_fade_out(0);
	}
	func_658(uParam0);
	func_344(uParam0, 1);
	func_71(uParam0);
	func_659(uParam0);
	func_660(uParam0);
	func_661(uParam0, 4);
	func_75(uParam0);
	func_638(uParam0, 1);
	func_70(uParam0);
	func_52(&(uParam0->f_1));
	if (_does_anim_scene_exist(uParam0->f_156) && check_ownership_of_anim_scene(uParam0->f_156))
	{
		_delete_anim_scene(uParam0->f_156);
	}
	func_662(!func_125(uParam0->f_213, 128));
	if (!func_125(uParam0->f_213, 128))
	{
		func_632();
	}
}

void func_356()
{
	Global_1935630->f_52 = 1;
}

bool func_357(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_358(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_647() - fParam1);
	func_663(uParam0, 1);
	func_664(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_359()
{
	Global_1911774 = 1;
}

void func_360(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

struct<5> func_361(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_665(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_159(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_371(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_666(bParam1) };
			if (bParam2 && func_667(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_444(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_444(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_445(iParam0, &Var5, 1728382685))
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
			Var0 = { func_668(bParam1) };
			switch (func_164(iParam0))
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
			if (func_669(iParam0, -1823706425))
			{
				Var0 = { func_371(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_669(iParam0, -1483207246))
			{
				Var0 = { func_371(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_670(Var0, &Var27, bParam1, 0))
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

int func_362(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_379(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_363(int iParam0, int iParam1)
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

bool func_364(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_671();
	if (iParam2 == 39)
	{
		Var0 = { func_361(iParam0, 1, 0) };
		iParam2 = func_363(func_362(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_160(iParam0, 866047851) && func_672(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_367(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_673(func_379(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_674(iParam2);
	func_675(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_676(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_676(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_677(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_678(iParam0, iParam2, iParam1, func_167() != -1);
	if (bParam4)
	{
		func_679(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_679(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_381(func_379(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_365(bool bParam0, bool bParam1, bool bParam2)
{
	func_680(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_374(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_681(Var0);
}

bool func_367(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_368()
{
	func_682(&(Global_1946804->f_2776));
	func_683(32768);
	func_381(1108822547, 8, 6);
}

int func_369(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_363(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_370(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_258(Var0);
}

struct<4> func_371(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_139(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_373(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_372(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_139(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_371(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_373(bParam6), &Var0, 0);
	return uVar4;
}

int func_373(bool bParam0)
{
	if (func_167() == -1)
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

void func_374(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_375(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_379(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_684(iParam4);
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

bool func_376(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_363(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_377(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_378(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_376(1108822547, 6))
	{
		if (bParam2)
		{
			func_375(iParam0, iVar0, func_167() != -1, 0, 0);
			func_380(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_381(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_379(int iParam0, int iParam1)
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

void func_380(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_363(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_363(iParam0, 1)])->f_10 || iParam1);
}

void func_381(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_363(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_363(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_363(iParam0, 1)])->f_10 && iParam1));
}

bool func_382(int iParam0)
{
	func_576(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

bool func_383(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_685(iParam0))
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

bool func_384()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_385(int iParam0)
{
	func_649(1);
}

bool func_386(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_63 & 64512 != 0;
}

int func_387(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_536(32768))
	{
		return 0;
	}
	iVar0 = func_167();
	if ((bParam4 && func_686(&((*Global_1835011)[iParam0]->f_29), 512)) && !func_686(&((*Global_1835011)[iParam0]->f_29), 1024))
	{
		if (func_384())
		{
			return 0;
		}
	}
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 0;
	}
	if (!func_687(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_180((*Global_1835011)[20]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[20]->f_1) && (get_game_timer() - func_688()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_180((*Global_1835011)[19]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[19]->f_1) && (get_game_timer() - func_688()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_180((*Global_1347702)[62]->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_70;
		if (func_383(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_689((*Global_1835011)[iParam0], 2))
			{
				if (func_685(iParam0))
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_690(iParam0));
					bVar2 = true;
				}
				else
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_691(iParam0));
				}
			}
			else if (func_685(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_area(1673015813, func_690(iParam0), func_692(iParam0), func_693(iParam0));
				bVar2 = true;
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_radius(1673015813, func_694(iParam0), func_695(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_685(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_696(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_690(iParam0));
				bVar2 = true;
			}
		}
		else if (func_697(iParam0))
		{
			if (iParam0 == 7)
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(-1337945352, func_691(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_691(iParam0));
			}
		}
		else
		{
			(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_691(iParam0));
		}
		(*Global_1835011)[iParam0]->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_685(iParam0))
			{
				func_612(iParam2, 4194304);
			}
			else
			{
				func_393(iParam2, 4194304);
			}
		}
		set_blip_flash_timer((*Global_1835011)[iParam0]->f_27, 63, iParam0);
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		set_blip_sprite((*Global_1835011)[iParam0]->f_27, (*Global_1835011)[iParam0]->f_26, true);
		if (iVar0 != -1)
		{
			_set_blip_name_from_player_string((*Global_1835011)[iParam0]->f_27, &((*Global_1835011)[iParam0]->f_39));
		}
		if (!func_686(&((*Global_1835011)[iParam0]->f_29), 1024) && !func_697(iParam0))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 580546400);
			func_698(&((*Global_1835011)[iParam0]->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_697(iParam0))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, -1986290853);
	}
	if (bParam3 || func_689((*Global_1835011)[iParam0], 2))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	else
	{
		_set_blip_flash_style((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	iVar4 = func_699(Global_40.f_4283);
	if (func_309(iVar4) && func_700((*Global_1888801)[iVar4]->f_13))
	{
		bVar5 = true;
		bVar6 = func_701(iVar4);
	}
	if (func_702(iParam0, bVar5, iVar4))
	{
		func_703((*Global_1835011)[iParam0]->f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_704(579))
	{
		func_705(579, (*Global_1835011)[iParam0]->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_686(&((*Global_1835011)[iParam0]->f_29), 4096) && !func_686(&((*Global_1835011)[iParam0]->f_29), 8192)) && IntToFloat(func_688()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_706(Global_35, -2016812721)) && !_is_ped_using_scenario_hash(Global_35, -1054012177)) && !_is_ped_using_scenario_hash(Global_35, 1097070152))
	{
		if (!func_383(iParam0, iVar0) || (fParam1 >= (func_707(iParam0) * func_707(iParam0)) && !(*Global_1835011)[iParam0]->f_70))
		{
			MemCopy(&cVar7, {(*Global_1835011)[iParam0]->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_327(&cVar7, 10000, 0, 0, 0, 1);
			func_698(&((*Global_1835011)[iParam0]->f_29), 8192);
		}
	}
	return 1;
}

void func_388(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

bool func_389(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

bool func_390(int iParam0, int iParam1)
{
	return (func_136(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

bool func_391(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_272((*Global_1835011)[iParam0]->f_1);
}

void func_392(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_294(iParam0))
	{
		return;
	}
	if (func_271(iParam0))
	{
		func_138(iParam0, 0, 2);
	}
	iVar0 = func_135(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*(*Global_1898346)[iVar1] = { *((*Global_1898346)[(&Global_1898329 - 1)]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1)]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*(*Global_1898346)[iVar1] = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_393(int iParam0, int iParam1)
{
	if (!func_136(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 - ((*Global_1898346)[iParam0]->f_1 && iParam1));
}

int func_394(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_395(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_708(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_396(int iParam0)
{
	if (!func_294(iParam0))
	{
		return 0;
	}
	return func_710(func_709(iParam0));
}

void func_397(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_167() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_398(int iParam0, bool bParam1, bool bParam2)
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
		if (func_711())
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
		iVar0 = func_712(&(Global_1898164->f_1[0]));
		if (func_424(iVar0) && func_713((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_294(&(Global_1898164->f_1[0])))
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

int func_399(int iParam0)
{
	switch (func_396(iParam0))
	{
		case 1:
			iVar0 = func_712(iParam0);
			return func_714(iVar0);
		case 8:
			iVar1 = func_712(iParam0);
			if (func_713((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_715(iVar1);
			}
			break;
	}
	return -1;
}

void func_400(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_167() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_716(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_717();
		Global_1898077->f_9 = func_718(Global_1894899->f_2);
		func_719(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_401()
{
	if (!func_180((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_180((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_180((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_180((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_180((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_180((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_180((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_402(int iParam0, int iParam1)
{
	if (!func_294(iParam0))
	{
		return;
	}
	func_720(iParam0, iParam1);
}

int func_403(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_404(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_721(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_722(Global_1935630, 4194304);
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

int func_405(bool bParam0)
{
	if (!bParam0 && func_723(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_406(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_407(int iParam0, bool bParam1)
{
	if (func_167() != -1)
	{
		return;
	}
	if (func_403(0) != iParam0)
	{
		return;
	}
	if (func_724(iParam0))
	{
		if (bParam1)
		{
			func_725(-525676072);
		}
		else
		{
			func_726(-525676072);
		}
	}
}

int func_408(int iParam0)
{
	return func_728(func_727(iParam0));
}

bool func_409(int iParam0)
{
	return func_159(iParam0) == -427144552;
}

bool func_410(int iParam0)
{
	if (func_167() != -1)
	{
		return false;
	}
	if (func_161(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_416(iParam0, &uVar0, 1, 0, 0);
	}
	return func_193(iParam0, 1, 0);
}

void func_411(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_159(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_166(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_442(iVar0))
	{
		if (func_167() == -1)
		{
			func_168(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_143(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_223(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_412(int iParam0, int iParam1)
{
	if (func_160(iParam0, 58855631))
	{
		func_729(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_413(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_139(iParam0, 0))
	{
		return 0;
	}
	if (!func_169(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_373(bParam3), iParam0);
}

int func_414(int iParam0, bool bParam1)
{
	if (func_173(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_373(bParam1), iParam0, 0);
}

bool func_415()
{
	if (func_167() != -1)
	{
		return false;
	}
	if (!func_152())
	{
		return false;
	}
	if (!func_180((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_180((*Global_1835011)[2]->f_1, 1) && func_180((*Global_1347702)[120]->f_15, 1)) && !func_180((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_180((*Global_1835011)[37]->f_1, 1) && !func_180((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_180((*Global_1835011)[57]->f_1, 1) && !func_180((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_180((*Global_1835011)[26]->f_1, 1) && !func_180((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_180((*Global_1835011)[62]->f_1, 1) && func_180((*Global_1835011)[63]->f_1, 1)) && !func_180((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_180((*Global_1835011)[75]->f_1, 1) && !func_180((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_180((*Global_1835011)[76]->f_1, 1) && !func_180((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_180((*Global_1835011)[40]->f_1, 1) && func_180((*Global_1835011)[41]->f_1, 1)) && !func_180((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_180((*Global_1835011)[62]->f_1, 1) && func_180((*Global_1835011)[63]->f_1, 1)) && !func_180((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_180((*Global_1835011)[65]->f_1, 1) && func_180((*Global_1835011)[66]->f_1, 1)) && !func_180((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_416(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_730(&iParam0);
	if (!func_139(iParam0, 0))
	{
		return false;
	}
	if (!func_169(0))
	{
		bParam3 = true;
	}
	if (func_409(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_666(0) };
			Var4.f_9 = -1591664384;
			if (!func_444(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_445(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_667(iParam0, 1))
			{
				if (!func_444(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_445(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_731(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_413(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_372(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_373(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_417(int iParam0, int iParam1)
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

int func_418(int iParam0, int iParam1)
{
	if (!func_139(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_159(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_160(iParam0, 1399091007))
	{
		func_491(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_419(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_732(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_733(&Var0, func_666(0));
	}
	if (!func_734(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_494(iVar14);
	return uVar15;
}

int func_420()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_421(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_422(int iParam0)
{
	if (func_167() != -1)
	{
		return;
	}
	iVar0 = func_735(iParam0);
	fVar1 = func_736(iParam0);
	if ((Global_1347477->f_117 || !func_162(31)) || !func_737(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_738(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_739(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_516(_create_var_string(6, func_740(iParam0), fVar1), "itemtype_textures", func_741(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_423(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_742(&Global_0, 8);
	}
	if (!func_152() || func_167() != -1)
	{
		return;
	}
	func_742(&Global_0, 1);
}

bool func_424(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_425(int iParam0)
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

int func_426(int iParam0, int iParam1)
{
	if (!func_743(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_427(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_155() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_744(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_745(), 12);
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
			else if (func_472() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_746(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_472(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_747(), 13);
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
			else if (func_473() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_748(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_473(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_426(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_428(int iParam0, int iParam1, int iParam2)
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

bool func_429(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_430(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_431(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_749(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_193(iVar2, 1, 0) || func_751(func_750(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_435(func_749(iVar0))), func_435(func_749(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_472() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_752(iVar0)), func_752(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_746() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_752(iVar0)), func_752(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_752(iVar0)), func_752(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_483(iParam3, func_753(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_479(iVar2) - iParam7) >= func_426(iParam3, func_754(iVar0));
				}
				else
				{
					bVar1 = func_479(iVar2) >= func_426(iParam3, func_754(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_479(iVar2) + iParam7) >= func_426(iParam3, func_754(iVar0));
			}
			else
			{
				bVar1 = func_479(iVar2) >= func_426(iParam3, func_754(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_755(iVar2)), func_755(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_756(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_757(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_757(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_473() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_758(iVar0)), func_758(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_748() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_758(iVar0)), func_758(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_758(iVar0)), func_758(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_483(iParam3, func_753(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_479(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_759(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_759(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_760(iVar2)), func_760(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_432(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_747() >= 13)
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

bool func_433(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_294(func_403(0)) && ((func_761(0) == 1 || func_761(0) == 8) || func_761(0) == 6))
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

var func_434(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_435(int iParam0)
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

var func_436(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_437(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_438(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_439(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_440(int iParam0)
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
			func_762(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_763(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_763(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_763(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_764(1);
			break;
		case 34:
			func_765(1);
			break;
		case 35:
			func_766(1);
			break;
		case 36:
			break;
		case 37:
			func_767(0);
			break;
		case 38:
			func_768(0);
			break;
		case 39:
			func_769(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_152()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_436("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_40(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_152()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_436("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_40(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_152()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_436("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_40(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_152()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_436("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_40(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_167() == -1)
			{
				if (!func_508(99217379) || func_770(99217379) == 2110595215)
				{
					if (func_450())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_193(iVar0, 1, 0))
					{
						func_216(iVar0, 1, 752097756);
					}
					func_127(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_167() == -1)
			{
				if (!func_193(1013902307, 1, 0))
				{
					func_216(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_167() == -1)
			{
				if (!func_193(1013902307, 1, 0))
				{
					func_216(1013902307, 1, 752097756);
				}
				if (!func_193(142640135, 1, 0))
				{
					func_216(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_167() == -1)
			{
				if (!func_193(786809402, 1, 0))
				{
					func_216(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_167() == -1)
			{
				if (!func_193(786809402, 1, 0))
				{
					func_216(786809402, 1, 752097756);
				}
				if (!func_193(-518019409, 1, 0))
				{
					func_216(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
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
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_771();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_441(int iParam0)
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

bool func_442(int iParam0)
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

int func_443(int iParam0, int iParam1)
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
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_444(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_372(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_445(int iParam0, var uParam1, int iParam2)
{
	if (func_772(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_446(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_773(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(*uParam1, &Var0, bParam6, 0))
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
	if (!func_169(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_373(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_447(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_774(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_448(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
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
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_297();
	func_225(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_449(int iParam0)
{
	if (func_331(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
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
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
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

bool func_450()
{
	if (func_167() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_451(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_452(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_162(50))
			{
				if (!func_162(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_162(51))
			{
				if (!func_162(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_453()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_454(int iParam0, int iParam1, var uParam2)
{
	if (!func_139(iParam1, 0))
	{
		return false;
	}
	if (func_159(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_167() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_164(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_775(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_160(iParam1, 866047851))
	{
		iVar5 = func_363(iVar4, 1);
		if (func_672(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_164(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_160(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_776(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_777(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_777(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_164(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_160(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_778(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_455()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_456()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_457(int iParam0)
{
	if (!func_294(iParam0))
	{
		return -1;
	}
	return func_395(iParam0);
}

int func_458()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_193(func_779(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_460(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_193(iVar0, 1, 0) && func_193(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_462(int iParam0, int iParam1)
{
	iVar0 = func_780(iParam0);
	if (iVar0 != -15)
	{
		func_225(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_781(iVar0, 1);
	}
	return false;
}

int func_463(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_193(1811977508, 1, 0))
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
			if (func_139(iVar25, 0) && func_160(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_464(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_516(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_465(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_782())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_516(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_783(iVar0);
			func_784(iVar0, 0, 0);
		}
		func_516(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_178(func_512(1644987397), iVar1);
	}
}

void func_466(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_467(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_468(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_469(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_470(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
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
	iVar1 = func_479(iVar9);
	iVar2 = func_479(iVar10);
	iVar3 = func_479(iVar11);
	iVar5 = func_480(iVar9);
	iVar6 = func_480(iVar10);
	iVar7 = func_480(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_479(iVar12);
		iVar8 = func_480(iVar12);
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
	if (iParam0 != 2)
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

void func_471(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_472()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_785(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_473()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_474(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_759(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_759(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_759(iVar0))
		{
			*sParam2++;
		}
		if (func_759(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_759(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_759(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_759(iVar0))
		{
			*sParam2++;
		}
		if (func_759(iVar1))
		{
			*sParam2++;
		}
		if (func_759(iVar0) && func_759(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_759(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_759(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_759(iVar0))
		{
			*sParam2++;
		}
		if (func_759(iVar1))
		{
			*sParam2++;
		}
		if (func_759(iVar2))
		{
			*sParam2++;
		}
		if ((func_759(iVar0) && func_759(iVar1)) && func_759(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_759(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_759(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_759(iVar0))
		{
			*sParam2++;
		}
		if (func_759(iVar1))
		{
			*sParam2++;
		}
		if (func_759(iVar2))
		{
			*sParam2++;
		}
		if (func_759(iVar3))
		{
			*sParam2++;
		}
		if (((func_759(iVar0) && func_759(iVar1)) && func_759(iVar2)) && func_759(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_475(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_786(1497516462);
			func_787(2016141805);
			func_787(1010885152);
			func_787(-502324015);
			break;
		case 2016141805:
			func_787(1497516462);
			func_786(2016141805);
			func_787(1010885152);
			func_787(-502324015);
			break;
		case 1010885152:
			func_787(1497516462);
			func_787(2016141805);
			func_786(1010885152);
			func_787(-502324015);
			break;
		case -502324015:
			func_787(1497516462);
			func_787(2016141805);
			func_787(1010885152);
			func_786(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_787(-538889627);
			func_787(-538880323);
			func_787(-1056767524);
			func_786(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_788();
			func_786(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_789();
			func_786(iParam0);
			break;
		case 2019386373:
			func_787(-664252410);
			func_787(2109952320);
			func_786(2019386373);
			break;
		case -664252410:
			func_787(2019386373);
			func_787(2109952320);
			func_786(-664252410);
			break;
		case 2109952320:
			func_787(2019386373);
			func_787(-664252410);
			func_786(2109952320);
			break;
		case -1674179981:
			func_787(-1835851517);
			func_787(-1838352012);
			func_786(-1674179981);
			break;
		case -1835851517:
			func_787(-1674179981);
			func_787(-1838352012);
			func_786(-1835851517);
			break;
		case -1838352012:
			func_787(-1674179981);
			func_787(-1835851517);
			func_786(-1838352012);
			break;
		case -1717960576:
			func_787(210001842);
			func_786(-1717960576);
			break;
		case 210001842:
			func_787(-1717960576);
			func_786(210001842);
			break;
		case -150493654:
			func_787(-1271608261);
			func_787(1846061697);
			func_787(-1145519186);
			func_786(-150493654);
			break;
		case -1271608261:
			func_787(-150493654);
			func_787(1846061697);
			func_787(-1145519186);
			func_786(-1271608261);
			break;
		case 1846061697:
			func_787(-150493654);
			func_787(-1271608261);
			func_787(-1145519186);
			func_786(1846061697);
			break;
		case -1145519186:
			func_787(-150493654);
			func_787(-1271608261);
			func_787(1846061697);
			func_786(-1145519186);
			break;
		case 1766284049:
			func_787(280705402);
			func_787(1926308480);
			func_786(1766284049);
			break;
		case 280705402:
			func_787(1766284049);
			func_787(1926308480);
			func_786(280705402);
			break;
		case 1926308480:
			func_787(1766284049);
			func_787(280705402);
			func_786(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_787(439465264);
				func_786(1609506757);
			}
			else
			{
				func_787(1609506757);
				func_787(439465264);
			}
			break;
		case 439465264:
			if (func_723(1609506757))
			{
				if (bParam1)
				{
					func_786(439465264);
				}
				else
				{
					func_787(439465264);
				}
			}
			break;
		case 1822001510:
			func_787(-1612662716);
			func_786(1822001510);
			break;
		case -1612662716:
			func_787(1822001510);
			func_786(-1612662716);
			break;
		case 1306158345:
			func_787(1952610440);
			func_787(-223469678);
			func_787(-404698347);
			func_787(1517904467);
			func_786(1306158345);
			break;
		case 1952610440:
			func_787(1306158345);
			func_787(-223469678);
			func_787(-404698347);
			func_787(1517904467);
			func_786(1952610440);
			break;
		case -223469678:
			func_787(1306158345);
			func_787(1952610440);
			func_787(-404698347);
			func_787(1517904467);
			func_786(-223469678);
			break;
		case -404698347:
			func_787(1306158345);
			func_787(1952610440);
			func_787(-223469678);
			func_787(1517904467);
			func_786(-404698347);
			break;
		case 1517904467:
			func_787(1306158345);
			func_787(1952610440);
			func_787(-223469678);
			func_787(-404698347);
			func_786(1517904467);
			break;
		case 1376646519:
			func_787(931649776);
			func_787(-434590080);
			func_787(1743048395);
			func_787(449774763);
			func_786(1376646519);
			break;
		case 931649776:
			func_787(1376646519);
			func_787(-434590080);
			func_787(1743048395);
			func_787(449774763);
			func_786(931649776);
			break;
		case -434590080:
			func_787(1376646519);
			func_787(931649776);
			func_787(1743048395);
			func_787(449774763);
			func_786(-434590080);
			break;
		case 1743048395:
			func_787(1376646519);
			func_787(931649776);
			func_787(-434590080);
			func_787(449774763);
			func_786(1743048395);
			break;
		case 449774763:
			func_787(1376646519);
			func_787(931649776);
			func_787(-434590080);
			func_787(1743048395);
			func_786(449774763);
			break;
		case -1414537028:
			func_787(38162571);
			func_787(1350391819);
			func_787(54073871);
			func_786(-1414537028);
			break;
		case 38162571:
			func_787(-1414537028);
			func_787(1350391819);
			func_787(54073871);
			func_786(38162571);
			break;
		case 1350391819:
			func_787(-1414537028);
			func_787(38162571);
			func_787(54073871);
			func_786(1350391819);
			break;
		case 54073871:
			func_787(-1414537028);
			func_787(38162571);
			func_787(1350391819);
			func_786(54073871);
			break;
		case 198200492:
			func_786(198200492);
			func_787(-1124061431);
			func_787(52706132);
			func_787(-259123672);
			break;
		case -1124061431:
			func_787(198200492);
			func_786(-1124061431);
			func_787(52706132);
			func_787(-259123672);
			break;
		case 52706132:
			func_787(198200492);
			func_787(-1124061431);
			func_786(52706132);
			func_787(-259123672);
			break;
		case -259123672:
			func_787(198200492);
			func_787(-1124061431);
			func_787(52706132);
			func_786(-259123672);
			break;
		case -919512195:
			func_786(-919512195);
			func_787(-1925798111);
			func_787(420709909);
			func_787(1703426636);
			break;
		case -1925798111:
			func_786(-1925798111);
			func_787(-919512195);
			func_787(420709909);
			func_787(1703426636);
			break;
		case 420709909:
			func_786(420709909);
			func_787(-919512195);
			func_787(-1925798111);
			func_787(1703426636);
			break;
		case 1703426636:
			func_786(1703426636);
			func_787(-919512195);
			func_787(-1925798111);
			func_787(420709909);
			break;
		case -1223121209:
			func_786(-1223121209);
			func_787(630808005);
			break;
		case 630808005:
			func_786(630808005);
			func_787(-1223121209);
			break;
		case 1453909576:
			func_786(1453909576);
			func_787(1643531967);
			break;
		case 1643531967:
			func_786(1643531967);
			func_787(1453909576);
			break;
		case 0:
			func_786(0);
			func_787(473295046);
			func_787(-1738165526);
			break;
		case 473295046:
			func_786(473295046);
			func_787(0);
			func_787(-1738165526);
			break;
		case -1738165526:
			func_786(-1738165526);
			func_787(0);
			func_787(473295046);
			break;
		case 932909855:
			func_786(932909855);
			func_787(2051822093);
			break;
		case 2051822093:
			func_786(2051822093);
			func_787(932909855);
			break;
		case 405586984:
			func_786(405586984);
			func_787(1509509592);
			func_787(-959357075);
			func_787(-1311865656);
			break;
		case 1509509592:
			func_786(1509509592);
			func_787(405586984);
			func_787(-959357075);
			func_787(-1311865656);
			break;
		case -959357075:
			func_786(-959357075);
			func_787(1509509592);
			func_787(405586984);
			func_787(-1311865656);
			break;
		case -1311865656:
			func_786(-1311865656);
			func_787(1509509592);
			func_787(-959357075);
			func_787(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_786(-524145696);
			}
			else
			{
				func_787(-524145696);
			}
			func_787(1626481264);
			func_787(282809459);
			break;
		case 282809459:
			func_786(282809459);
			func_787(1626481264);
			func_787(-524145696);
			break;
		case 1626481264:
			func_786(1626481264);
			func_787(-524145696);
			func_787(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_786(885203519);
			}
			else
			{
				func_787(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_786(-1080627546);
			}
			else
			{
				func_787(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_723(iParam0))
				{
					func_786(iParam0);
				}
			}
			else if (func_723(iParam0))
			{
				func_787(iParam0);
			}
			break;
	}
}

void func_476(int iParam0)
{
	if (!func_790(iParam0))
	{
		func_792(func_791(iParam0));
	}
}

int func_477()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_790(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_478(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_479(iVar9);
	iVar2 = func_479(iVar10);
	iVar3 = func_479(iVar11);
	iVar5 = func_480(iVar9);
	iVar6 = func_480(iVar10);
	iVar7 = func_480(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_479(iVar12);
		iVar8 = func_480(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
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

int func_479(int iParam0)
{
	if (func_193(iParam0, 1, 0))
	{
		iVar0 = func_143(iParam0, 0, 0);
	}
	return iVar0;
}

int func_480(int iParam0)
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

int func_481(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_482(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_483(int iParam0, int iParam1)
{
	if (!func_743(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_484(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_483(iParam1, 5) || iParam0 == func_483(iParam1, 6)) || iParam0 == func_483(iParam1, 7)) || iParam0 == func_483(iParam1, 8)) || iParam0 == func_483(iParam1, 9))
	{
		func_474(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_156(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_158(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_485(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_483(iParam1, 5) || iParam0 == func_483(iParam1, 6)) || iParam0 == func_483(iParam1, 7)) || iParam0 == func_483(iParam1, 8)) || iParam0 == func_483(iParam1, 9))
	{
		if (func_474(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_156(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_158(51, 0, 0, iVar0, func_426(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_156(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_158(51, 0, 0, iVar0, func_426(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_486()
{
	if (func_272((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

bool func_487(int iParam0, int iParam1)
{
	if (!func_139(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_418(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_492("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_493(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_110(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_494(iVar1);
				return true;
			}
			iVar3++;
		}
		func_494(iVar1);
	}
	return false;
}

void func_488(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_489(int iParam0)
{
	if (!func_793(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_490(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_491(int iParam0, int iParam1, var uParam2)
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

bool func_492(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_373(bParam4), sParam0, iParam3, iParam2);
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

int func_494(int iParam0)
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

float func_495()
{
	if (func_794())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_333(2);
	}
	if (Global_1347477->f_119)
	{
		return func_333(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_795();
	fVar2 = func_796();
	fVar3 = func_797();
	fVar4 = func_798();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_799()));
	fVar7 = (func_333(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_800(3, round((to_float(iVar8) * fVar10)), 0);
	func_801(3, fVar9, fVar9 > 100f);
	return func_336(fVar7, -100f, 100f);
}

float func_496()
{
	if (func_794())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_333(1);
	}
	if (Global_1347477->f_119)
	{
		return func_333(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_795();
	fVar2 = func_796();
	fVar3 = func_797();
	fVar4 = func_798();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_799()));
	fVar7 = (func_333(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_800(2, round((to_float(iVar8) * fVar10)), 0);
	func_801(2, fVar9, fVar9 > 100f);
	return func_336(fVar7, -100f, 100f);
}

float func_497()
{
	if (func_794())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_333(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_802())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_803())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_333(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_795();
	fVar2 = func_796();
	fVar3 = func_797();
	fVar4 = func_798();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_799()));
	fVar7 = (func_333(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_800(1, round((to_float(iVar8) * fVar10)), 0);
	func_801(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_333(0);
	}
	return func_336(fVar7, -100f, 100f);
}

bool func_498(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_499(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_500(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_139(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_416(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_169(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_373(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_501(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_804();
			}
			break;
	}
	return 0;
}

int func_502(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_503(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_504(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_503(iParam0))
	{
		return;
	}
	if (func_805(iParam0))
	{
		return;
	}
	if (!func_806(iParam0))
	{
		func_807(iParam0, 1, 0);
	}
	iVar0 = func_808(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_809(iParam0, 512))
		{
			func_366(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_384() && !bParam1) && !func_398(0, 0, 1))
	{
		func_327(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_810(iParam0, 6);
	if (bParam2)
	{
		if (!func_398(0, 0, 1))
		{
			func_423(1, 4);
		}
	}
}

int func_505()
{
	return Global_1946804->f_1;
}

bool func_506(int iParam0, bool bParam1)
{
	return func_501(iParam0, 0) < func_811(iParam0, bParam1);
}

bool func_507(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_164(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_508(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_363(iParam0, 1)] != &Global_1946804->f_57[func_363(iParam0, 1)];
}

void func_509(int iParam0, int iParam1)
{
	if (func_160(iParam1, 130796156))
	{
		func_812(iParam1, 0);
	}
	else if (func_160(iParam1, 930141731))
	{
		func_812(iParam1, 1);
		func_813(iParam0);
	}
}

void func_510(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_511(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_814(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_815(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_512(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_513(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_514(int iParam0)
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

int func_515(int iParam0)
{
	if (!func_816(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_516(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_817(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_517()
{
	return !&Global_1911774;
}

void func_518(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_519(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_520(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_521(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_522(int iParam0)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_140 != 0 || (*Global_1360165)[iParam0]->f_141 != 0)
	{
		return true;
	}
	return false;
}

bool func_523(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	if (((*Global_1360165)[iParam0]->f_140 && iParam1) != 0)
	{
		return true;
	}
	if (((*Global_1360165)[iParam0]->f_141 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		case 2:
		case 64:
			return 3;
		case 4:
		case 8:
		case 128:
			return 2;
		case 512:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_525(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_818(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_526(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_527(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_528(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_529(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_530(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_531(int iParam0, int iParam1)
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

void func_532(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_819(iParam0, iParam6);
	func_820(iParam0, iParam5);
	func_821(iParam0, iParam4);
	func_822(iParam0, iParam3);
	func_823(iParam0, iParam2);
	func_824(iParam0, iParam1);
}

bool func_533(int iParam0, int iParam1)
{
	if (func_167() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_534(int iParam0)
{
	if (func_167() != -1)
	{
		if (func_498(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_498(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_535(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_498(iParam0, 65536) && !func_498(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_498(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_498(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_536(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_537()
{
	return Global_1905944->f_5694;
}

int func_538(int iParam0)
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

void func_539(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_825(iParam1);
	}
}

float func_540(int iParam0, int iParam1, bool bParam2)
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
	return func_316(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_541(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_826(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_542(int iParam0)
{
	iVar0 = func_55(iParam0);
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

int func_543(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_827(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_544(int iParam0)
{
	if (!func_119(iParam0))
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

void func_545(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

void func_546(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_547()
{
	if (!func_110(Global_1935630->f_45))
	{
		return -1569615261;
	}
	return Global_1935630->f_45;
}

int func_548(int iParam0, int iParam1)
{
	return func_828(&uVar0, iParam0, iParam1);
}

bool func_549()
{
	return &Global_1935436 == 1;
}

bool func_550()
{
	return &Global_1935436 == 2;
}

void func_551(float fParam0)
{
	func_829(10, fParam0);
}

bool func_552()
{
	if (func_167() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_553()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

bool func_554(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_555(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

bool func_556(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_557(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (_0x9d1eca9337be9fc3(uParam0->f_156, sParam1))
		{
			iParam3 = 0;
		}
	}
	set_anim_scene_entity(uParam0->f_156, sParam1, iParam2, iParam3);
}

bool func_558(int iParam0, int iParam1, int iParam2)
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

void func_559(int iParam0)
{
	if (func_830(iParam0, 0))
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

void func_560(int iParam0)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (func_541(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_55(iParam0);
	func_559(iVar0);
	func_237(iParam0, 8192, 1);
}

void func_561(int iParam0)
{
	if (func_830(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_562(int iParam0)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (func_541(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_55(iParam0);
	func_561(iVar0);
	func_237(iParam0, 8192, 0);
}

void func_563(int iParam0)
{
	if (func_830(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_564(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_13(14))
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

void func_565(int iParam0)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (func_541(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_55(iParam0);
	func_563(iVar0);
	func_237(iParam0, 16384, 1);
}

void func_566(int iParam0)
{
	if (func_830(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_567(int iParam0)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (func_541(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_55(iParam0);
	func_566(iVar0);
	func_237(iParam0, 16384, 0);
}

int func_568(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_831(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_569(int iParam0, int iParam1)
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
		if (func_87(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_570(int iParam0)
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

void func_571(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

void func_572(int iParam0, int iParam1, float fParam2)
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

bool func_573(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_574(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_575(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_576(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_832(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_577(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_578(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_579()
{
	return Global_1109400->f_245;
}

void func_580(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

int func_581(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_582(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_596(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_583(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_587(iParam0))
	{
		return;
	}
	iVar0 = func_586(iParam0);
	func_833(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_834(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_835(iParam0, 0);
	func_836(iParam0);
}

void func_584(int iParam0)
{
	iParam0 = func_581(iParam0);
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
	func_837(&Var0);
	func_838(iParam0, Var0);
	func_839(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_840(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_841(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_842(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_843(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_844(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_845(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_846(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_847(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_585(vector3 vParam0)
{
	return func_848(_get_map_zone_at_coords(vParam0, 10));
}

int func_586(int iParam0)
{
	iParam0 = func_581(iParam0);
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

bool func_587(int iParam0)
{
	iParam0 = func_581(iParam0);
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

bool func_588(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_587(iParam0))
	{
		return false;
	}
	iVar0 = func_586(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_589(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_587(iParam0))
	{
		return false;
	}
	iVar0 = func_586(iParam0);
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

void func_590(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_587(iParam0))
	{
		return;
	}
	iVar0 = func_586(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_591(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_849(iParam0);
	func_849(iParam0);
	func_850(iParam0, iParam1);
	func_851(iParam0, iParam1);
	func_852(iParam0, iParam1);
	iVar1 = func_586(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_853(iVar1);
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
	iVar3 = func_586(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_853(iVar3);
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
	func_854();
}

bool func_592()
{
	iVar0 = func_245();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_593()
{
	iVar0 = func_245();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_855(0);
}

int func_594(int iParam0)
{
	iParam0 = func_581(iParam0);
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

int func_595(int iParam0)
{
	iParam0 = func_581(iParam0);
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

int func_596(int iParam0)
{
	iParam0 = func_581(iParam0);
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

void func_597(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_856(&uVar0, &uVar1, &uVar2);
	func_857(iParam0, uVar0);
	func_858(iParam0, uVar1);
	func_859(iParam0, uVar2);
	func_860(iParam0, 1);
	func_861(iParam0, 1);
}

void func_598(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_862(iParam0, 1);
}

void func_599(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_581(iParam0);
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

bool func_600(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_863(iParam0, 1);
}

struct<2> func_601(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_864(iParam0, &uVar2))
	{
	}
	if (!func_865(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_602()
{
	if (func_866(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_866(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_866(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_866(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_866(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_866(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_603(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_867(iParam0);
	func_868(iParam0, uParam1);
	func_869(iParam0);
	func_870(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_871(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

bool func_604(int iParam0)
{
	iParam0 = func_581(iParam0);
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

void func_605(int iParam0)
{
	iParam0 = func_581(iParam0);
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

void func_606(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_607(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_836(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_836(iParam0);
	}
}

int func_607(int iParam0)
{
	iParam0 = func_581(iParam0);
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

char* func_608(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_872(iVar0);
}

char* func_609(int iParam0)
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

void func_610(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			func_323(uParam0->f_13[iVar0], iParam2);
		}
		iVar0++;
	}
}

int func_611(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_873(iParam0))
	{
		return 0;
	}
	if ((func_180((*Global_1347702)[59]->f_15, 1) && !func_180((*Global_1347702)[61]->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_874(player_id(), 1, 0))
	{
		if ((!does_blip_exist((*Global_1835011)[iParam0]->f_27) && !func_697(iParam0)) && !Global_43891)
		{
			func_387(iParam0, vdist2(func_696(iParam0), Global_36), -1, 1, 1);
			func_388((*Global_1835011)[iParam0], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_876(func_875(iParam0), func_134(iParam0), 0, (*Global_1835011)[iParam0]->f_21, iParam3))
		{
			return 0;
		}
		if (func_877(1) > 1)
		{
			if ((*Global_1835011)[iParam0]->f_73 <= 0)
			{
				(*Global_1835011)[iParam0]->f_73 = get_game_timer();
			}
			if ((get_game_timer() - (*Global_1835011)[iParam0]->f_73) < 60000)
			{
				if (func_878(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_104(Global_35, func_879(iParam0), 50f, 1, 1))
				{
					if (!_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
					{
						(*Global_1835011)[iParam0]->f_72 = create_tracked_point();
						set_tracked_point_info((*Global_1835011)[iParam0]->f_72, func_879(iParam0), 5f);
					}
					if (is_screen_faded_in() && (is_tracked_point_visible((*Global_1835011)[iParam0]->f_72) || is_sphere_visible(func_879(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_880((*Global_1835011)[iParam0]->f_1);
	if (!func_136(iVar0))
	{
		return 0;
	}
	else if ((*Global_1835011)[iParam0]->f_73 != 0)
	{
		(*Global_1835011)[iParam0]->f_73 = 0;
		func_881(iParam0);
		if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
		{
			destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
		}
	}
	if (bParam1)
	{
		func_882((*Global_1835011)[iParam0]->f_1);
	}
	else if (!&Global_1879534)
	{
		func_406(4);
	}
	return 1;
}

void func_612(int iParam0, int iParam1)
{
	if (!func_136(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

float func_613(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_883();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_614(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_883();
	}
	iVar0 = player_ped_id();
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
		func_884(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_885(iVar0, iParam0, fParam1);
	func_886(iParam0, fParam1, bParam4, iParam5);
	if (!is_entity_dead(iVar0))
	{
		_set_attribute_core_value(iVar0, func_622(iParam0), ceil(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_615(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_525(*iParam0);
	iVar1 = func_526(*iParam0);
	iVar2 = func_527(*iParam0);
	iVar3 = func_528(*iParam0);
	iVar4 = func_529(*iParam0);
	iVar5 = func_530(*iParam0);
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
		iVar7 = func_531(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_532(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_616(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_883();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_2;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_2;
		default:
			break;
	}
	return -1;
}

int func_617(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_883();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_1;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_1;
		default:
			break;
	}
	return -15;
}

bool func_618(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_887(iParam1) || !func_887(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_619(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_883();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_620(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_883();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_1 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_621(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_622(int iParam0)
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

int func_623(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_624(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_888(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_625(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_626(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_627(int iParam0)
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

bool func_628(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	if (func_41(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_41(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_41(iParam0, 4, 1))
	{
		return false;
	}
	if (func_48(iParam0, 33, 1))
	{
		return false;
	}
	if (func_13(iParam0))
	{
		return false;
	}
	if (func_889(iParam0))
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

bool func_629(int iParam0)
{
	if (func_12(iParam0))
	{
		if (func_22(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

bool func_630(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_67(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_631(int iParam0, bool bParam1)
{
	if (_0xa8120ebeaf290c7a(func_47(iParam0, 0)))
	{
		iVar0 = _0x69786495c92a3044(func_47(iParam0, 0));
		if (iVar0 != (*Global_1360165)[iParam0]->f_47 || bParam1)
		{
			(*Global_1360165)[iParam0]->f_47 = iVar0;
			StringCopy(&((*Global_1360165)[iParam0]->f_48), _0x9c7f95946e304778(func_47(iParam0, 0), (*Global_1360165)[iParam0]->f_47), 64);
			(*Global_1360165)[iParam0]->f_56 = 1;
		}
	}
}

void func_632()
{
	if (func_890(Global_43801))
	{
		func_891(&Global_43801, 0, 0);
	}
}

bool func_633(int iParam0)
{
	if (func_892(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_634(int iParam0, bool bParam1)
{
	if (bParam1 && !func_890(iParam0))
	{
		return false;
	}
	return !func_893(iParam0, 4);
}

bool func_635(bool bParam0, bool bParam1)
{
	if (!func_890(Global_43801))
	{
		Global_43801 = func_894("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1945938)[Global_43801]->f_16 = &Global_23[3];
		func_895(Global_43801, 0, 1);
		func_896(Global_43801, 6, 1);
		if (bParam1)
		{
			func_896(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_634(Global_43801, 0))
		{
			func_897(Global_43801, 1, 1);
		}
		if (func_898(Global_43801, 1) != 0f && bParam0)
		{
			func_895(Global_43801, 1, 1);
		}
		else
		{
			func_895(Global_43801, 0, 1);
		}
		return func_899(Global_43801, 1);
	}
	return false;
}

void func_636(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_156, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]) && are_strings_equal(sParam1, uParam0->f_174[iVar0]))
		{
			Var1 = { uParam0->f_158 };
			*uParam0->f_174[iVar0] = { Var1 };
		}
		iVar0++;
	}
	func_261(uParam0, sParam1);
	func_72(uParam0, 2097152, 1);
	func_64(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_156, sParam1, true);
}

void func_637(var uParam0, char* sParam1)
{
	if (((!func_60(uParam0, 32) || func_900(uParam0)) || func_60(uParam0, 268435456)) && !func_60(uParam0, 65536))
	{
		func_901(&(uParam0->f_212), 256);
	}
}

void func_638(var uParam0, bool bParam1)
{
	if (get_current_ped_weapon(Global_35, &uVar0, false, 9, false))
	{
		_0x67e21acc5c0c970c(Global_35, 9, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 7, false))
	{
		_0x67e21acc5c0c970c(Global_35, 7, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 8, false))
	{
		_0x67e21acc5c0c970c(Global_35, 8, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 10, false))
	{
		_0x67e21acc5c0c970c(Global_35, 10, bParam1);
	}
}

bool func_639()
{
	return _get_number_of_references_of_script_with_name_hash(130487986) > 0;
}

void func_640()
{
	script_thread_iterator_reset();
	iVar0 = script_thread_iterator_get_next_thread_id();
	while (_does_thread_exist(iVar0))
	{
		if (_get_hash_of_thread(iVar0) == 130487986)
		{
			if (!is_entity_dead(Global_35))
			{
				set_ped_reset_flag(Global_35, 265, true);
			}
			force_cleanup_for_thread_with_this_id(iVar0, 1);
			return;
		}
		iVar0 = script_thread_iterator_get_next_thread_id();
	}
}

bool func_641()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

void func_642(bool bParam0)
{
	if (func_641())
	{
		Global_1357509 = 1;
	}
	if (func_902(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_643(var uParam0, char[16] cParam1)
{
	uParam0->f_152 = { cParam1 };
}

bool func_644()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	return false;
}

void func_645(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]))
		{
			func_903(uParam0, uParam0->f_174[iVar0]);
		}
		iVar0++;
	}
	Var1 = { func_260() };
	func_903(uParam0, &Var1);
	Var1 = { func_80(uParam0) };
	func_903(uParam0, &Var1);
}

bool func_646(var uParam0)
{
	return func_357(*uParam0, 2);
}

float func_647()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_648()
{
	return func_892(_0xc17f69e1418cd11f(3));
}

void func_649(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

Vector3 func_650(var uParam0)
{
	return uParam0->f_214;
}

void func_651(var uParam0)
{
	if (func_904(&iVar0))
	{
		if (func_139(iVar0, 0))
		{
			if (func_164(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_127(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_139(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_652(var uParam0, vector3 vParam1)
{
	uParam0->f_214 = { vParam1 };
}

void func_653(var uParam0)
{
	if (func_60(uParam0, 2048) && !func_63(func_905(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_60(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_86(iVar1, func_905(uParam0), func_906(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_60(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_86(iVar3, func_905(uParam0), func_906(uParam0), 2, 1073741824);
		}
	}
}

void func_654(var uParam0)
{
	if ((func_60(uParam0, 268435456) && !func_63(func_905(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_905(uParam0) };
			func_86(iVar0, vVar1, func_907(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_655(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = iParam4;
	if (func_63(vParam1))
	{
		func_72(uParam0, 2048, 1);
	}
	else
	{
		func_64(uParam0, 2048);
		if (bParam5)
		{
			func_64(uParam0, -2147483648);
		}
	}
}

void func_656(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((!is_entity_dead(&(uParam0->f_13[iVar0])) && is_entity_a_ped(&(uParam0->f_13[iVar0]))) && get_ped_index_from_entity_index(&(uParam0->f_13[iVar0])) != Global_35)
		{
			iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
			if (is_ped_human(iVar1))
			{
				if (_0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
				{
					if (!func_556(uParam0->f_13[iVar0], 8))
					{
						if (func_110(func_109(iVar1, 0, 1, 0)))
						{
							if (!func_908(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_110(func_109(iVar1, 1, 1, 0)))
						{
							if (!func_908(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_657(var uParam0, bool bParam1)
{
	_0x67e21acc5c0c970c(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			_set_ped_component_disabled(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_658(var uParam0)
{
	StringCopy(&(uParam0->f_152), "", 32);
	func_909(uParam0);
	func_66(uParam0, 0f, 0f, 0f);
	func_910(uParam0);
}

void func_659(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		uParam0->f_13[iVar0]->f_11 = 0;
		iVar0++;
	}
}

void func_660(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_661(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_324(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_662(bool bParam0)
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
		func_632();
	}
	_0xa0cefcea390aab9b(0);
}

void func_663(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_664(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

struct<4> func_665(bool bParam0)
{
	return func_371(1328661203, func_911(), -1591664384, bParam0);
}

struct<4> func_666(bool bParam0)
{
	iVar0 = func_373(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_371(923904168, func_665(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_371(923904168, func_665(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_371(923904168, func_665(bParam0), -740156546, 0);
}

bool func_667(int iParam0, bool bParam1)
{
	if (func_164(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_162(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_668(bool bParam0)
{
	iVar0 = func_373(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_371(271701509, func_665(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_371(271701509, func_665(bParam0), 12999093, 0);
}

bool func_669(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_164(iParam0);
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

bool func_670(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_373(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_671()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_672(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_160(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_160(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_160(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_160(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_160(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_160(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_673(int iParam0)
{
	func_381(iParam0, 8, 6);
}

void func_674(int iParam0)
{
	func_912(&(Global_1946804->f_2589), iParam0);
}

void func_675(int iParam0, int iParam1)
{
	func_913(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_676(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_677(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_164(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_377(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_675(iVar1, iVar3);
		}
	}
	if (func_508(-1586649372) && func_377(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_675(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_675(iVar1, iVar3);
					}
				}
			}
			func_914(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_914(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_675(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_914(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_675(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_675(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_914(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_914(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_675(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_914(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_675(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_675(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_164(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_675(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_778(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_164(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_675(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_160(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_675(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_675(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_778(&(Global_1946804->f_1497.f_1[iVar1])) || func_160(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_675(iVar1, iVar3);
					}
				}
			}
			switch (func_164(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_164(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_675(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_164(&(uParam0->f_1[iVar1])) || func_160(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_675(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_678(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_915(0);
	if (iParam2 != 0 && func_916(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_917(iParam0, func_379(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_679(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_167() != -1;
	iVar7 = func_915(0);
	if (func_367(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_379(iVar0, 1);
			if (func_376(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_376(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_777(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_918(uParam0);
				if (iVar3 > 0)
				{
					if (!func_367(524288))
					{
						func_374(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_379(iVar0, 1);
							if (func_376(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_376(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_777(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_675(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_683(524288);
				}
			}
		}
	}
}

void func_680(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_919(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_167() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_920(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_808(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_808(Global_40.f_7729);
				Global_1946804->f_1378 = func_808(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_921(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_922(0, 1);
	}
}

void func_681(struct<4> Param0)
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
			if (func_554(Param0))
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
			func_555(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_374(8);
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
			if (func_554(Param0))
			{
				return;
			}
			func_555(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_374(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_370(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_682(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_683(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

int func_684(int iParam0)
{
	iVar0 = func_164(iParam0);
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

bool func_685(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_923((*Global_1835011)[iParam0]);
	}
	return false;
}

bool func_686(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_687(int iParam0)
{
	if (func_167() == 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 18:
			return func_180((*Global_1347702)[21]->f_15, 1);
		case 44:
			return func_180((*Global_1347702)[83]->f_15, 1);
	}
	return true;
}

int func_688()
{
	return &Global_1898438;
}

bool func_689(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

Vector3 func_690(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

Vector3 func_691(int iParam0)
{
	if (func_685(iParam0))
	{
		return func_690(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

Vector3 func_692(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
		default:
			break;
	}
	return 5f, 5f, 5f;
}

int func_693(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 19;
		default:
			break;
	}
	return 0;
}

Vector3 func_694(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return -1541.14f, -305.74f, (*Global_1835011)[iParam0]->f_18.f_2;
		case 39:
			return 4432.49f, -3404.77f, (*Global_1835011)[iParam0]->f_18.f_2;
		case 8:
			return 891.27f, 1279.39f, 234.14f;
		case 27:
			return 2604.742f, -1212.295f, 52.3389f;
		case 29:
			return 2715.245f, -1356.552f, (*Global_1835011)[iParam0]->f_18.f_2;
		case 41:
			return 1332.632f, -7248.313f, 55.5522f;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

float func_695(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 45f;
		case 8:
			return 54f;
			return 35f;
			return 50f;
			return 17.5f;
			return 25f;
		}

Vector3 func_696(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

bool func_697(int iParam0)
{
	return func_389(iParam0);
}

void func_698(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_699(int iParam0)
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

bool func_700(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

bool func_701(int iParam0)
{
	if (!func_924(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_925(iParam0))
		{
			if (vdist(Global_36, func_926(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_926(iParam0), false) <= func_927();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_927();
	}
	return func_928();
}

bool func_702(int iParam0, bool bParam1, int iParam2)
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

void func_703(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_294(iParam0))
	{
		return;
	}
	switch (func_396(iParam0))
	{
		case 1:
			iVar0 = func_712(iParam0);
			if (func_929(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_383(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_383(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
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
				if (!func_697(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_689((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_712(iParam0);
			if (func_930(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_931(iVar1))
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
				iVar2 = func_931(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_932(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

bool func_704(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_167() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_705(int iParam0, var uParam1, bool bParam2)
{
	func_226(iParam0, &iVar0, &iVar1);
	if (!func_227(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_498(iParam0, 1024))
	{
		return;
	}
	func_228(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = uParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 3;
}

bool func_706(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

float func_707(int iParam0)
{
	return (func_695(iParam0) / 2f);
}

int func_708(int iParam0)
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

int func_709(int iParam0)
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

int func_710(int iParam0)
{
	return iParam0 & 31;
}

bool func_711()
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

int func_712(int iParam0)
{
	if (!func_294(iParam0))
	{
		return -1;
	}
	return func_933(func_709(iParam0));
}

bool func_713(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_714(int iParam0)
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

int func_715(int iParam0)
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

void func_716(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_717()
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

int func_718(int iParam0)
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

void func_719(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_720(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_934(iParam0);
	}
	else
	{
		func_935(iParam0, iParam1);
	}
	func_936();
}

void func_721(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_722(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_723(int iParam0)
{
	iVar0 = func_937(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_724(int iParam0)
{
	if (!func_294(iParam0))
	{
		return false;
	}
	switch (func_396(iParam0))
	{
		case 1:
			switch (func_712(iParam0))
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
			switch (func_712(iParam0))
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

void func_725(int iParam0)
{
	iVar2 = func_373(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_164(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_939(func_938(iParam0), 6);
}

void func_726(int iParam0)
{
	iVar2 = func_373(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_164(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_940(func_938(iParam0), 6);
}

int func_727(int iParam0)
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

int func_728(int iParam0)
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
	func_941(iParam0, Global_1898164->f_162);
	return 1;
}

int func_729(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_139(iParam0, 0))
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

int func_730(int iParam0)
{
	if (!func_139(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_731(int iParam0, var uParam1, bool bParam2)
{
	if (!func_139(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_361(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_443((386 + iVar29), 1);
		if (func_444(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_445(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

struct<14> func_732(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_733(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_734(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_373(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_735(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_736(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_942(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_942(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_942(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_162(18);
		case 2:
			return func_162(20);
		case 1:
			return func_162(19);
		default:
			break;
	}
	return true;
}

int func_738(int iParam0)
{
	return func_943(&(Global_40.f_11095.f_11[iParam0]));
}

void func_739(int iParam0, float fParam1, bool bParam2)
{
	if (func_167() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_162(31))
	{
		return;
	}
	iVar0 = func_738(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_738(iParam0);
	if (func_944(iParam0) && func_945(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_946(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_947(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_40(func_948(iParam0), 0);
					}
					func_949(iParam0, iVar2, iVar3);
					func_950(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_740(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_741(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

void func_742(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_743(int iParam0, var uParam1)
{
	if (!func_951(iParam0))
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

int func_744()
{
	return func_952(Global_40.f_12019);
}

int func_745()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_425(iVar1);
		if (func_193(iVar2, 1, 0) || func_751(func_750(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_746()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_953(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_747()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_756(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_748()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_749(int iParam0)
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

int func_750(int iParam0)
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

bool func_751(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_752(int iParam0)
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

int func_753(int iParam0)
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

int func_754(int iParam0)
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

char* func_755(int iParam0)
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

bool func_756(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_757(int iParam0)
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

char* func_758(int iParam0)
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

bool func_759(int iParam0)
{
	if (func_954(iParam0) && func_193(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_955(iParam0) && func_956(iParam0))
	{
		return true;
	}
	return false;
}

char* func_760(int iParam0)
{
	if (!func_139(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_210(iParam0));
}

int func_761(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_762(bool bParam0)
{
	if (!does_entity_exist(Global_35))
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

void func_763(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_764(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_765(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_766(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_767(bool bParam0)
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

void func_768(bool bParam0)
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

void func_769(bool bParam0)
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

int func_770(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_363(iParam0, 1)]);
}

void func_771()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_957();
		_unlock_set_unlocked(-1526891582, true);
		func_168(-916314281);
		func_216(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_168(494733111);
		func_216(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_772(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_373(0);
	*uParam1 = { func_371(iParam0, func_666(0), iParam3, 0) };
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

bool func_773(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_774(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_775(int iParam0)
{
	Var0 = { func_361(iParam0, 1, 0) };
	return func_362(Var0.f_4);
}

bool func_776(int iParam0, int iParam1)
{
	iVar1 = func_363(func_958(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_164(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_777(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_363(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_367(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

bool func_778(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_780(int iParam0)
{
	return func_959(iParam0, -1);
}

bool func_781(int iParam0, bool bParam1)
{
	return func_618(func_297(), iParam0, bParam1);
}

bool func_782()
{
	if (func_453())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_783(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_960((Global_40.f_4283.f_325 + iParam0));
}

void func_784(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_782())
	{
		func_516(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_516(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_785(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_786(int iParam0)
{
	iVar0 = func_937(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_787(int iParam0)
{
	iVar0 = func_937(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_788()
{
	func_787(-939420910);
	func_787(-1187950766);
	func_787(356365161);
	func_787(753127042);
	func_787(-2038424081);
	func_787(1884271742);
	func_787(459290420);
}

void func_789()
{
	func_787(704802028);
	func_787(588987611);
	func_787(2008888900);
	func_787(1649996811);
	func_787(227918160);
	func_787(168171957);
	func_787(1193080109);
	func_787(-491981251);
	func_787(-639037538);
	func_787(-618620429);
}

bool func_790(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_791(int iParam0)
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

void func_792(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_793(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_794()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_795()
{
	fVar0 = func_961(13);
	iVar1 = func_962(fVar0);
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

float func_796()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_797()
{
	if (func_453())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_798()
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

float func_799()
{
	return Global_1955565->f_3;
}

void func_800(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_888(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_801(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_888(iParam0, 2, 0, 0);
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

bool func_802()
{
	return func_961(12) <= -99f;
}

bool func_803()
{
	return func_961(12) >= 99f;
}

int func_804()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_164(iVar1) == -999503751)
		{
			if (func_963() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_805(int iParam0)
{
	if (!func_503(iParam0))
	{
		return false;
	}
	if (func_809(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_806(int iParam0)
{
	if (!func_503(iParam0))
	{
		return false;
	}
	if (func_809(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_807(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_503(iParam0))
	{
		return;
	}
	if (!func_806(iParam0))
	{
		func_810(iParam0, 2);
		if (bParam2)
		{
			if (!func_398(0, 0, 1))
			{
				func_423(1, 4);
			}
		}
		if ((!func_384() && !bParam1) && !func_398(0, 0, 1))
		{
			func_327(_create_var_string(10, "OUT_JOURN_ADD", func_964(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_808(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_809(int iParam0, int iParam1)
{
	if (!func_503(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_810(int iParam0, int iParam1)
{
	if (!func_503(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_811(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_812(int iParam0, bool bParam1)
{
	iVar0 = func_965(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_163(50);
			}
			else
			{
				func_163(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_163(51);
			}
			else
			{
				func_163(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_966(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_197();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_197();
			}
			break;
		case 3:
			func_163(24);
			if (bParam1)
			{
				if (!func_966(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_197();
				}
			}
			break;
	}
}

void func_813(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_967(0))
			{
				iVar0++;
			}
			if (func_967(2))
			{
				iVar0++;
			}
			if (func_967(4))
			{
				iVar0++;
			}
			if (!func_968(16))
			{
				if (iVar0 == 1)
				{
					func_969();
					func_40(456, 1);
					func_970(16);
				}
			}
			if (!func_968(32))
			{
				if (iVar0 >= 3)
				{
					func_969();
					func_40(456, 1);
					func_970(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_967(1))
			{
				iVar0++;
			}
			if (func_967(3))
			{
				iVar0++;
			}
			if (func_967(7))
			{
				iVar0++;
			}
			if (!func_968(1))
			{
				if (iVar0 == 1)
				{
					func_971();
					func_40(457, 1);
					func_970(1);
				}
			}
			if (!func_968(2))
			{
				if (iVar0 >= 3)
				{
					func_971();
					func_40(457, 1);
					func_970(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_967(5))
			{
				iVar0++;
			}
			if (func_967(6))
			{
				iVar0++;
			}
			if (func_967(8))
			{
				iVar0++;
			}
			if (!func_968(4))
			{
				if (iVar0 == 1)
				{
					func_972();
					func_40(455, 1);
					func_970(4);
				}
			}
			if (!func_968(8))
			{
				if (iVar0 >= 3)
				{
					func_972();
					func_40(455, 1);
					func_970(8);
				}
			}
			break;
	}
}

void func_814(var uParam0)
{
	func_510(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_510(uParam0, 617531372);
	}
	else
	{
		func_510(uParam0, 291123060);
	}
}

void func_815(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_973(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

bool func_816(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_817(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_818(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_819(int iParam0, int iParam1)
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

void func_820(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_821(int iParam0, int iParam1)
{
	iVar0 = func_526(*iParam0);
	iVar1 = func_525(*iParam0);
	if (iParam1 < 1 || iParam1 > func_531(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_822(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_823(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_824(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_825(int iParam0)
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

int func_826(int iParam0)
{
	iVar0 = 0;
	if (!func_119(iParam0))
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
	if (!func_119(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_827(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_541(iParam0, 1);
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

int func_828(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_974(iParam1, 128);
	if (func_492("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_493(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_110(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4) && !_is_weapon_bow(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_974(iParam1, 512) && func_772(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if ((((((_is_weapon_two_handed(Var4.f_4) || func_331(Var4.f_4)) && (!_is_weapon_shotgun(Var4.f_4) || func_974(iParam1, 16))) && (!_is_weapon_sniper(Var4.f_4) || func_974(iParam1, 4))) && (!func_331(Var4.f_4) || func_974(iParam1, 8))) && (!_is_weapon_repeater(Var4.f_4) || !func_974(iParam1, 8388608))) && (!_is_weapon_rifle(Var4.f_4) || !func_974(iParam1, 1048576)))
				{
					if (iVar0 == 0 || _0xa2091482ed42ef85(Global_35, &Var4) > _0xa2091482ed42ef85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_494(iVar1);
	}
	if (is_weapon_valid(iVar0))
	{
	}
	else if (!func_974(iParam1, 512) && !func_974(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_828(uParam0, iParam1, iParam2);
	}
	else if (func_974(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_829(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_519(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_975(1, bVar1, 1, sVar2);
		func_976(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_621(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_201();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_621(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_621(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_830(int iParam0, bool bParam1)
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

int func_831(int iParam0, int iParam1)
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

int func_832(int iParam0, int iParam1)
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

void func_833(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_586(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_977(iVar6);
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

bool func_834(int iParam0)
{
	if (!func_978(iParam0))
	{
		return false;
	}
	if (!func_979())
	{
		return true;
	}
	return false;
}

void func_835(int iParam0, int iParam1)
{
	iParam0 = func_581(iParam0);
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

void func_836(int iParam0)
{
	iParam0 = func_581(iParam0);
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

void func_837(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_838(int iParam0, struct<2> Param1)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_980(iParam0, Param1))
	{
	}
	if (!func_981(iParam0, Param1.f_1))
	{
	}
}

void func_839(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_982((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_840(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_841(var uParam0)
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

void func_842(var uParam0)
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

void func_843(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_844(int iParam0, var uParam1)
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

void func_845(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_846(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_847(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_848(int iParam0)
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

void func_849(int iParam0)
{
	iParam0 = func_581(iParam0);
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

void func_850(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_851(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_852(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_983(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_983(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_984(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_985(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_986(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_853(int iParam0)
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
	if (func_987(iParam0))
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
	if (func_988(iParam0))
	{
		iVar3 = func_989(iParam0);
		if (func_990(iVar3))
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

void func_854()
{
	if (func_587(0))
	{
		func_991(0);
	}
	if (func_587(1))
	{
		func_991(1);
	}
	if (func_587(5))
	{
		func_991(5);
	}
	if (func_587(6))
	{
		func_849(6);
	}
}

void func_855(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_856(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_152())
	{
		if (func_552())
		{
			bVar0 = false;
			if (!func_180((*Global_1835011)[15]->f_1, 1) && !func_162(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_992();
				*iParam1 = func_993();
				*uParam2 = func_994();
				return 1;
			}
			else
			{
				*uParam0 = func_995();
				*iParam1 = func_996();
				*uParam2 = func_997();
				return 1;
			}
		}
		else if (func_450())
		{
			if (!func_180((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_998();
				*iParam1 = func_999();
				*uParam2 = func_1000();
				return 1;
			}
			else
			{
				*uParam0 = func_1001();
				*iParam1 = func_1002();
				*uParam2 = func_1003();
				return 1;
			}
		}
	}
	else if (func_552())
	{
		*uParam0 = func_1004();
		*iParam1 = func_1005();
		*uParam2 = func_1006();
		return 1;
	}
	else if (func_450())
	{
		*uParam0 = func_1007();
		*iParam1 = func_1008();
		*uParam2 = func_1009();
		return 1;
	}
	return 0;
}

void func_857(int iParam0, var uParam1)
{
	iParam0 = func_581(iParam0);
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

void func_858(int iParam0, var uParam1)
{
	iParam0 = func_581(iParam0);
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

void func_859(int iParam0, var uParam1)
{
	iParam0 = func_581(iParam0);
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

void func_860(int iParam0, int iParam1)
{
	iParam0 = func_581(iParam0);
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

void func_861(int iParam0, int iParam1)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_856(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1010(iParam1);
	iVar5 = func_586(iParam0);
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

void func_862(int iParam0, int iParam1)
{
	iParam0 = func_581(iParam0);
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

bool func_863(int iParam0, int iParam1)
{
	iParam0 = func_581(iParam0);
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

bool func_864(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_983(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1011(Var0, 1415981582, 0);
	if (!func_139(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_865(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_983(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1011(Var0, -2119169513, 0);
	if (!func_139(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_866(int iParam0, var uParam1)
{
	if (!func_1012(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1013() };
	*uParam1 = func_1011(Var0, iParam0, 0);
	if (!func_139(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_867(int iParam0)
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

void func_868(int iParam0, var uParam1)
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
	func_1014(iParam0, *uParam1);
	func_1014(iParam0, uParam1->f_1);
}

void func_869(int iParam0)
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

void func_870(int iParam0, var uParam1)
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
	func_1014(iParam0, *uParam1);
	func_1014(iParam0, uParam1->f_1);
	func_1014(iParam0, uParam1->f_2);
	func_1014(iParam0, uParam1->f_3);
	func_1014(iParam0, uParam1->f_4);
	func_1014(iParam0, uParam1->f_5);
}

int func_871(int iParam0, int iParam1, bool bParam2)
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

char* func_872(int iParam0)
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

bool func_873(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_1015((*Global_1835011)[iParam0]->f_1);
}

bool func_874(int iParam0, bool bParam1, bool bParam2)
{
	if (func_1016(iParam0, bParam1, bParam2, 1))
	{
		return true;
	}
	return false;
}

int func_875(int iParam0)
{
	if (!func_133(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_30;
}

bool func_876(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_167() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_398(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_1017(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_1018(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_93(iVar0, 512, 1);
			}
			else
			{
				func_54(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

int func_877(bool bParam0)
{
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1])
				{
					case 987244216:
						iVar1 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1]->f_2;
						if (func_713((*Global_1347702)[iVar1]->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1]->f_2;
							if (func_133(iVar2) && !func_389(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_878(int iParam0, bool bParam1, bool bParam2)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	iVar0 = func_875(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_1018(iVar1, &iVar0))
		{
			iVar2 = func_130(func_1019(iParam0));
			if (is_entity_dead(iVar2))
			{
			}
			else
			{
				if (bParam1 && func_48(iVar1, 67, 1))
				{
					return true;
				}
				if (bParam2 && func_48(iVar1, 47, 1))
				{
					return true;
				}
				if (!_0x5102307ce88798eb(iVar2))
				{
					request_ped_visibility_tracking(iVar2);
				}
				if (is_tracked_ped_visible(iVar2))
				{
					return true;
				}
			}
		}
		iVar1++;
	}
	return false;
}

Vector3 func_879(int iParam0)
{
	return func_691(iParam0);
}

int func_880(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_1015(iParam0))
	{
		return -1;
	}
	if (func_167() != -1)
	{
		iVar2 = func_135(iParam0);
		if (iVar2 >= 0)
		{
			func_1020(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_1021(iVar1, 1);
			func_1020(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_135(iParam0);
		if (iVar2 >= 0)
		{
			func_1020(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_294(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_1021(iVar0, 1);
					func_1020(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

void func_881(int iParam0)
{
	iVar0 = func_875(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_1018(iVar1, &iVar0))
		{
			iVar2 = func_130(func_1019(iParam0));
			if (is_entity_dead(iVar2))
			{
			}
			else if (_0x5102307ce88798eb(iVar2))
			{
				_0x3088634cf8c819cf(iVar2);
			}
		}
		iVar1++;
	}
}

void func_882(int iParam0)
{
	func_1022(iParam0);
}

int func_883()
{
	if (func_1023())
	{
		return 1;
	}
	return 0;
}

void func_884(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_883();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0] = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_885(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_627(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_1024(iParam1), fParam2, -1);
	}
}

void func_886(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_883();
	}
	iVar0 = get_game_timer();
	func_1025(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1026(iParam0, iVar0, iParam3);
	}
}

bool func_887(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_530(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_529(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_528(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_525(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_526(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_527(iParam0);
	if (iVar5 < 1 || iVar5 > func_531(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

char* func_888(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_519(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_519(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

bool func_889(int iParam0)
{
	if (Global_40.f_4942[iParam0]->f_59 != 0)
	{
		return true;
	}
	return false;
}

bool func_890(int iParam0)
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

void func_891(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_890(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_1027(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1028(iVar0);
	*uParam0 = 0;
}

bool func_892(int iParam0)
{
	return iParam0 != 0;
}

bool func_893(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_894(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_893(iVar0, 2))
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
		func_1029(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_895(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_890(iParam0))
	{
		return;
	}
	iVar0 = func_1027(iParam0);
	func_1030(iVar0, bParam1);
}

void func_896(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_890(iParam0))
	{
		return;
	}
	iVar0 = func_1027(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_897(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_890(iParam0))
	{
		return;
	}
	iVar0 = func_1027(iParam0);
	if (bParam1)
	{
		func_1031(iParam0, 4);
		func_1030(iVar0, 1);
		func_1032(iVar0, 1);
	}
	else
	{
		func_1033(iParam0, 4);
		func_1032(iVar0, 0);
	}
}

float func_898(int iParam0, bool bParam1)
{
	if (bParam1 && !func_890(iParam0))
	{
		return 0f;
	}
	iVar0 = func_1027(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_899(int iParam0, bool bParam1)
{
	if (bParam1 && !func_890(iParam0))
	{
		return false;
	}
	iVar0 = func_1027(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_900(var uParam0)
{
	Var0 = { func_74(uParam0) };
	Var8 = { func_80(uParam0) };
	return are_strings_equal(&Var0, &Var8);
}

void func_901(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_902(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1034(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_903(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	Var0 = { func_74(uParam0) };
	if ((!are_strings_equal(&Var0, sParam1) && _0xa9016536015de29d(uParam0->f_156, sParam1)) && _0x23e33cb9f4a3f547(uParam0->f_156, sParam1))
	{
		_0xae6ada8fe7e84acc(uParam0->f_156, sParam1);
	}
}

bool func_904(int iParam0)
{
	if (-1829635046 == func_1035(81053684))
	{
		if (func_1036(iParam0))
		{
			return true;
		}
	}
	else if (func_776(-525676072, iParam0))
	{
		if (func_1036(iParam0))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_905(var uParam0)
{
	return uParam0->f_217;
}

float func_906(var uParam0)
{
	return uParam0->f_220;
}

float func_907(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_908(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_909(var uParam0)
{
	uParam0->f_166 = { Var0 };
}

void func_910(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_174[iVar0], "", 64);
		iVar0++;
	}
}

struct<4> func_911()
{
	return Var0;
}

void func_912(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1037(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1037(uParam0->f_2[iVar0], 1))
				{
					func_1038(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_913(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1039(uParam0, 1))
	{
		func_1040(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

void func_914(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3]->f_1 == 1216705912 || uParam0->f_1[iVar3]->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
		{
			uParam0->f_1[iVar3]->f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3]->f_1 = -1539589426;
			uParam0->f_1[iVar1]->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_675(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_675(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_675(iVar2, iVar0);
		}
	}
}

int func_915(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_505();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_916(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_917(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

int func_918(var uParam0)
{
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	return iVar1;
}

void func_919(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_167() == -1)
	{
		func_1041(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1042(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_920(int iParam0, int iParam1)
{
	if (func_167() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1] && iParam0) != 0;
	}
	return false;
}

void func_921(int iParam0, bool bParam1, int iParam2)
{
	func_1043(&(Global_1946804->f_1378), iParam0);
	func_1044(2, iParam0, 6);
	if (bParam1)
	{
		func_922(0, 1);
	}
}

void func_922(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1045(0);
	}
	if (bParam0)
	{
		func_374(8);
		func_374(512);
	}
	else
	{
		func_374(8);
		func_374(16);
	}
}

bool func_923(var uParam0)
{
	if (func_686(&(uParam0->f_29), 62))
	{
		switch (func_1046())
		{
			case 1:
				if (!func_686(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_686(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_686(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_686(&(uParam0->f_29), 32))
				{
					if (func_686(&(uParam0->f_29), 2))
					{
						if (func_528(func_297()) < 5)
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

bool func_924(int iParam0)
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

bool func_925(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_926(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_927()
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

bool func_928()
{
	return Global_1894899 & 2 != 0;
}

bool func_929(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_702(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_930(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_1047(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_931(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_424(iParam0))
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

void func_932(int iParam0)
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

int func_933(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_934(int iParam0)
{
	iVar0 = func_708(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1048(iVar0);
}

int func_935(int iParam0, int iParam1)
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
			func_1049(iVar2);
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

void func_936()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_937(int iParam0, int iParam1)
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

int func_938(int iParam0)
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

void func_939(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_940(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_941(int iParam0, int iParam1)
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
			func_1050((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1050(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_294(&(Global_1898164->f_1[0])))
	{
		func_402(&(Global_1898164->f_1[0]), 3);
	}
}

float func_942(int iParam0)
{
	iVar4 = func_735(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_943(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1051(iVar6) - func_1051(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_943(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_944(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_945(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_946(float fParam0, float fParam1)
{
	iVar0 = func_943(fParam0);
	fVar1 = to_float(func_1051(iVar0));
	fVar2 = to_float(func_1051(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = floor((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = floor((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_947(int iParam0)
{
	if (func_1052(iParam0, &iVar0))
	{
		return func_1051(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1053())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1053())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1053())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_948(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_949(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1054(iParam0));
	sVar4 = func_1056(func_1055(iVar3, iParam2));
	sVar6 = func_1057(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1058(iParam0));
	iVar8 = func_1059(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1060(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_434(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1061(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_950(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

bool func_951(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_952(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_953(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_954(int iParam0)
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

int func_955(int iParam0)
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

int func_956(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1062(&iVar0, 0, iVar95, &Var1) && !func_1062(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1063(iVar0, &Var1);
			if (func_139(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_957()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1064(Global_35, &uVar0);
	Var30 = { func_665(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1065(0);
	func_1066(7);
	func_1067(-1623728698, 1, 1, 0);
	if (func_505() == 1160113249)
	{
		func_1067(-763730846, 1, 1, 1);
		func_1067(-361635024, 1, 1, 1);
	}
	func_1068(Global_35, &uVar0);
}

int func_958(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_362(iVar0);
}

int func_959(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_373(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_819(&uVar6, iVar0);
	func_820(&uVar6, iVar1);
	func_821(&uVar6, iVar2);
	func_822(&uVar6, iVar3);
	func_823(&uVar6, iVar4);
	func_824(&uVar6, iVar5);
	return uVar6;
}

void func_960(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_512(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

float func_961(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_962(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

int func_963()
{
	return Global_1946804->f_1497;
}

char* func_964(int iParam0)
{
	iVar0 = func_808(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_760(iVar0);
}

int func_965(int iParam0)
{
	if (func_1069(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1070(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1071(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1072(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_966(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_193(func_1073(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_967(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_193(func_1074(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_968(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_969()
{
	if (func_167() != -1)
	{
		return;
	}
	func_216(1654063339, 1, 752097756);
	iVar0 = func_738(1);
	func_949(1, iVar0, 0);
}

void func_970(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_971()
{
	if (func_167() != -1)
	{
		return;
	}
	func_216(1623931083, 1, 752097756);
	iVar0 = func_738(2);
	func_949(2, iVar0, 0);
}

void func_972()
{
	if (func_167() != -1)
	{
		return;
	}
	func_216(-1845241476, 1, 752097756);
	iVar0 = func_738(0);
	func_949(0, iVar0, 0);
}

bool func_973(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_974(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_975(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_976(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_888(0, 1, bParam0, bParam1);
	sVar0 = _create_var_string(2, sVar0);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[1]), bParam2);
	if (bParam0)
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), false);
	}
	else if (bParam1)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_cold");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
	else
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_hot");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
}

int func_977(int iParam0)
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

bool func_978(int iParam0)
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

bool func_979()
{
	return _unlock_is_unlocked(99890643);
}

bool func_980(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_983(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_371(iParam1, Var0, 1415981582, 0) };
	return func_1075(Var29, 1);
}

bool func_981(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_983(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_371(iParam1, Var0, -2119169513, 0) };
	return func_1075(Var29, 1);
}

void func_982(var uParam0)
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

bool func_983(int iParam0, var uParam1)
{
	if (!func_1076(iParam0))
	{
		return false;
	}
	iVar0 = func_984(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_665(0) };
	if (!func_1077(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1078(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_984(int iParam0)
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

bool func_985(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_169(bParam10))
	{
		return func_1079(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1080(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_373(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1075(Var14, 1))
		{
		}
	}
	return true;
}

bool func_986(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_169(bParam9))
	{
		return func_1081(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_1080(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, bParam9, 1) || !func_670(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1080(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_373(0);
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

bool func_987(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1082(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_988(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_989(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_989(int iParam0)
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

bool func_990(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_991(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_586(iParam0);
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
	if (func_863(iParam0, 64))
	{
		func_849(iParam0);
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
	bVar3 = func_162(42);
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
				func_1083(&((*Global_1900383)[iParam0]->f_27));
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
		func_849(iParam0);
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
		if (func_1084(1) < 1)
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
		func_1085(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_863(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1086(iParam0);
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
	fVar15 = func_1087(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1088(iParam0))
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
		func_1089((*Global_1900383)[iParam0]->f_26);
		func_1090((*Global_1900383)[iParam0]->f_26);
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
	if (func_282(iVar0) && !bVar9)
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
	iVar21 = func_1084(iParam0);
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

int func_992()
{
	return 1342496140;
}

int func_993()
{
	return 446670976;
}

int func_994()
{
	return 1;
}

int func_995()
{
	return -868094182;
}

int func_996()
{
	return 1074477367;
}

int func_997()
{
	return 1;
}

int func_998()
{
	return -997197050;
}

int func_999()
{
	return -2063289686;
}

int func_1000()
{
	return 2;
}

int func_1001()
{
	return -868094182;
}

int func_1002()
{
	return 1074477367;
}

int func_1003()
{
	return 1;
}

int func_1004()
{
	return 1235275977;
}

int func_1005()
{
	return 2030804811;
}

int func_1006()
{
	return 1;
}

int func_1007()
{
	return 1974379573;
}

int func_1008()
{
	return 2024948086;
}

int func_1009()
{
	return 1;
}

void func_1010(int iParam0)
{
	if (func_1091() < iParam0)
	{
		func_1092(iParam0);
	}
}

int func_1011(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1093(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1012(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_164(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1094(iParam0);
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

struct<4> func_1013()
{
	Var0 = { func_665(0) };
	return func_371(856287005, Var0, -218846335, 0);
}

void func_1014(int iParam0, int iParam1)
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

bool func_1015(int iParam0)
{
	return func_457(iParam0) == 0;
}

int func_1016(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1095(bParam1, bParam2, bParam3);
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

bool func_1017(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_1018(iVar0, &iParam0))
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

bool func_1018(int iParam0, int iParam1)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_1096(iParam0);
	return (*iParam1 && iVar0) != 0;
}

int func_1019(int iParam0)
{
	if (!func_133(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

void func_1020(int iParam0, bool bParam1)
{
	if (!func_294(iParam0))
	{
		return;
	}
	if (!func_1015(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_394(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_394(iParam0)))
		{
			_0xca41e86545413b5b(func_396(iParam0), func_712(iParam0), func_1097(iParam0), func_394(iParam0), Global_36);
		}
	}
	func_402(iParam0, 1);
	bParam1 = bParam1;
}

void func_1021(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_709(Global_1898330[iParam0]);
		func_1098((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

void func_1022(int iParam0)
{
	if (!func_294(iParam0))
	{
		return;
	}
	if (!func_271(iParam0))
	{
		return;
	}
	func_402(iParam0, 2);
}

bool func_1023()
{
	return Global_1955569->f_866;
}

char* func_1024(int iParam0)
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

void func_1025(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_883();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0] = fParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_1026(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_883();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

int func_1027(int iParam0)
{
	return iParam0;
}

void func_1028(int iParam0)
{
	if (!func_1099(iParam0))
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

void func_1029(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_1030(iParam0, 1);
	func_1032(iParam0, 1);
	func_1033(iParam0, 128);
}

void func_1030(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_893(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1031(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_1032(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_1033(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_1034(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1934603)[iParam0]->f_10)))
	{
		return;
	}
	*(*Global_1934603)[iParam0] = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

int func_1035(int iParam0)
{
	iVar0 = func_363(func_958(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1036(int iParam0)
{
	if (func_776(81053684, iParam0))
	{
		return true;
	}
	if (func_776(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1037(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1038(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1039(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1040(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1041(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1042(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1043(var uParam0, int iParam1)
{
	if (func_167() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1041(uParam0->f_1[iVar0], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1042(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1044(int iParam0, int iParam1, int iParam2)
{
	if (func_167() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1] = (Global_26796.f_26[iParam1] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1] = (Global_36638.f_45.f_350.f_26[iParam1] || iParam0);
	}
}

void func_1045(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_1046()
{
	return &Global_1899516;
}

bool func_1047(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

int func_1048(int iParam0)
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

int func_1049(int iParam0)
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

void func_1050(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1051(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_1052(int iParam0, int iParam1)
{
	return false;
}

bool func_1053()
{
	return false;
}

int func_1054(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_373(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_373(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_373(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1055(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_1056(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1057(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1058(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1059(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_1060(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1061(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_1062(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_587(iParam1) && !func_588(iParam1))
	{
		iVar0 = func_586(iParam1);
	}
	else
	{
		return false;
	}
	func_982(uParam3);
	iVar5 = func_977(iParam2);
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

void func_1063(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1100(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1101(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1064(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_110(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1065(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_139(iVar1, 0))
		{
			func_1102(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1066(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_167() == -1)
	{
		func_1103(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_164(iVar2) != -999503751)
		{
			func_1104(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1105(iVar2, 0))
		{
			func_128(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1067(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1106(iParam0))
	{
		return;
	}
	iVar0 = func_164(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1107(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1107(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1107(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1107(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1107(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1107(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1108(0))
	{
		func_1109(iParam0, 1);
		if (func_505() == 1160113249)
		{
			func_1109(func_1108(-2125499975), 0);
		}
		else
		{
			func_1109(func_1108(1160113249), 0);
		}
	}
	func_1110();
	if (func_1111(iVar0))
	{
		_0x766315a564594401(func_373(0), iParam0, 0);
	}
	func_128(iParam0, bParam3);
	if (bParam2)
	{
		func_922(0, 0);
	}
}

void func_1068(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_442(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1069(int iParam0)
{
	if (!func_139(iParam0, 0))
	{
		return false;
	}
	if (func_160(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1070(int iParam0)
{
	if (!func_139(iParam0, 0))
	{
		return false;
	}
	if (func_160(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1071(int iParam0)
{
	if (!func_139(iParam0, 0))
	{
		return false;
	}
	if (func_160(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1072(int iParam0)
{
	if (!func_139(iParam0, 0))
	{
		return false;
	}
	if (func_160(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1073(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1112(iParam0);
		case 1:
			return func_1113(iParam0);
		case 2:
			return func_1114(iParam0);
		case 3:
			return func_1115(iParam0);
	}
	return 0;
}

int func_1074(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1116(iParam0);
		case 1:
			return func_1117(iParam0);
		case 2:
			return func_1118(iParam0);
		case 3:
			return func_1119(iParam0);
		case 4:
			return func_1120(iParam0);
		case 5:
			return func_1121(iParam0);
		case 6:
			return func_1122(iParam0);
		case 7:
			return func_1123(iParam0);
		case 8:
			return func_1124(iParam0);
	}
	return 0;
}

bool func_1075(struct<4> Param0, int iParam4)
{
	if (!func_169(0))
	{
		return func_1125(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_373(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1076(int iParam0)
{
	iVar0 = func_984(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_665(0) };
	if (func_1126(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_1077(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_373(bParam7);
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

bool func_1078(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_373(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_1079(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1080(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_372(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1127(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1128(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_1080(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1081(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_1080(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 1, 0) || !func_670(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1080(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1127(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1127(&Var14) };
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
					func_1129(iVar60, 1);
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
		iVar60 = func_1128(1168099063, &Var28, 0);
		iVar60 = func_1128(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_1082(int iParam0)
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

void func_1083(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1131(func_1130(255), 109029619));
	}
	else if (func_552())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_450();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1084(int iParam0)
{
	iParam0 = func_581(iParam0);
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

void func_1085(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1131(func_1130(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_552())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_450())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1086(int iParam0)
{
	iParam0 = func_581(iParam0);
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

float func_1087(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1088(int iParam0)
{
	iParam0 = func_581(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_594(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1084(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1084(iParam0) + 1;
	fVar6 = func_1132(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1133(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1089(int iParam0)
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

void func_1090(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

int func_1091()
{
	return Global_40.f_1095.f_3135;
}

void func_1092(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1093(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_373(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_670(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1094(int iParam0)
{
	if (!func_139(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_164(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

int func_1095(bool bParam0, bool bParam1, bool bParam2)
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

int func_1096(int iParam0)
{
	return shift_left(1, iParam0);
}

int func_1097(int iParam0)
{
	if (!func_294(iParam0))
	{
		return -1;
	}
	return func_1134(func_709(iParam0));
}

void func_1098(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_710(iParam0);
	*uParam1 = func_933(iParam0);
	*uParam2 = func_1134(iParam0);
}

bool func_1099(int iParam0)
{
	return func_893(iParam0, 2);
}

void func_1100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1101(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1102(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_164(iParam0))
	{
		case -2061583405:
			bVar0 = func_1135(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1135(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1135(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1135(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1135(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1135(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1110();
	}
	if (bParam1)
	{
		func_922(0, 0);
	}
}

void func_1103(int iParam0)
{
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_732(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_734(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_494(iVar0);
	}
}

void func_1104(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1136(iParam2, *uParam0);
	func_1137(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1105(int iParam0, int iParam1)
{
	Var0 = { func_361(iParam0, 0, 0) };
	Var5 = { func_371(iParam0, Var0, Var0.f_4, 0) };
	if (func_372(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_373(0), &Var5, iParam1);
	return true;
}

bool func_1106(int iParam0)
{
	if (func_167() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return false;
			}
		}
	}
	return true;
}

int func_1107(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1138(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1105(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_164(iParam0) != -999503751)
	{
		func_1104(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1108(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_505();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1109(int iParam0, int iParam1)
{
	Var0 = { func_361(iParam0, 0, 0) };
	Var5 = { func_371(iParam0, Var0, Var0.f_4, 0) };
	if (func_372(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_373(0), &Var5);
	return 1;
}

void func_1110()
{
	if (func_167() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_1111(int iParam0)
{
	return func_1139(func_938(iParam0));
}

int func_1112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_1113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_1114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_1115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_1117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_1118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_1119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_1120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_1121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_1122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_1123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_1124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1125(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_670(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_159(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1140(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1141(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1142(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1143(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1127(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1128(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1126(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_373(bParam2), uParam0, iParam1);
}

struct<16> func_1127(var uParam0)
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

int func_1128(int iParam0, var uParam1, bool bParam2)
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
					func_1129(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1129(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1129(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1129(int iParam0, int iParam1)
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
	func_1144(iParam0, iParam1);
}

char* func_1130(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_308(37, iParam0))
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
	if (func_308(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1131(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_521(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1132(int iParam0)
{
	iParam0 = func_581(iParam0);
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

float func_1133(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_1134(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_1135(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1138(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_164(iParam0) != -999503751)
		{
			func_1145(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_164(iParam0) != -999503751)
	{
		func_1145(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1105(iParam0, 1);
	return 1;
}

void func_1136(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1137(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1146(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_363(func_775(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1147(uParam0);
	}
}

bool func_1138(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

bool func_1139(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

struct<28> func_1140(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_373(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1127(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1141(int iParam0, var uParam1, bool bParam2)
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
					func_1129(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1129(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1129(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1142(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_373(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1127(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1143(int iParam0, var uParam1, bool bParam2)
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
					func_1129(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1129(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1129(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1144(int iParam0, int iParam1)
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

void func_1145(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1148(iParam1);
	func_1149(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1150(&(uParam0->f_26), iVar1);
		if (func_1151(uParam0->f_26, &iVar0))
		{
			func_1152(iVar0, iVar1);
		}
	}
}

void func_1146(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1153(&(uParam0->f_3));
}

void func_1147(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1154(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_1148(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1149(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1146(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1151(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1152(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1153(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1154(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1155(func_505());
	if (*uParam0)
	{
		func_1153(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_167() != -1, uParam2);
	*uParam0 = 1;
}

int func_1155(int iParam0)
{
	if (func_167() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

