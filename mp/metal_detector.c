void __EntryFunction__()
{
	if (has_force_cleanup_occurred(523))
	{
		func_1();
		terminate_this_thread();
	}
	while (!func_2())
	{
		switch (iVar322)
		{
			case 0:
				func_3();
				iLocal_324 = 1;
				break;
			case 1:
				func_4();
				break;
		}
		wait(0);
	}
	func_1();
	terminate_this_thread();
}

void func_1()
{
	func_5();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_6(iVar0, 1);
		iVar0++;
	}
	if (func_7(1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			release_sound_id(&(iLocal_275[iVar0]));
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			release_sound_id(&(iLocal_282[iVar0]));
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			release_sound_id(&(iLocal_263[iVar0]));
			iVar0++;
		}
		_0x531a78d6bf27014b(func_8());
	}
	if (func_7(2))
	{
		remove_anim_dict(func_9());
	}
	if (func_7(4))
	{
		remove_ptfx_asset();
	}
	func_10();
}

bool func_2()
{
	if (func_11(1, 1))
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		return true;
	}
	if (func_7(32))
	{
		return true;
	}
	return false;
}

void func_3()
{
	iLocal_289 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		*vLocal_166[iVar0] = { 0f, 0f, 0f };
		func_12(4, iVar0);
		iVar0++;
	}
}

void func_4()
{
	if (func_7(16))
	{
		func_13(16);
	}
	bVar8 = false;
	iVar3 = 0;
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		if (!&Global_1296859->f_22[iVar4])
		{
			func_6(iVar4, 0);
		}
		else
		{
			iVar18 = &Global_1296859->f_154[iVar4];
			iVar19 = get_player_ped(iVar18);
			if (iVar19 == Global_34)
			{
				bVar5 = true;
				vVar12 = { Global_35 };
			}
			else
			{
				bVar5 = false;
				vVar12 = { get_entity_coords(iVar19, true, false) };
				fVar2 = vdist2(Global_35, vVar12);
				if (fVar2 > 2500f)
				{
					func_6(iVar4, 0);
				}
				else
				{
					vVar9 = { func_14(iVar19, iVar4, bVar5) };
					vVar15 = { vVar12 };
					vVar15.f_2 = (vVar15.z - 1f);
					fVar0 = vdist(vVar15, vVar9);
					fVar1 = ((80f - fVar0) / 80f);
					fVar1 = func_15(fVar1, 0f, 1f);
					bVar7 = false;
					bVar6 = false;
					if (!bVar5)
					{
						if (func_16(vVar9))
						{
							func_6(iVar4, 0);
						}
						else
						{
							iVar3++;
							func_17(iVar19, iVar4, bVar5, &bVar7);
							if (!bVar7)
							{
								func_6(iVar4, bVar5);
								if (bVar5)
								{
									func_5();
								}
							}
							else if (does_entity_exist(&(iLocal_0[iVar4])))
							{
								if (!func_18(256, iVar4))
								{
									func_12(256, iVar4);
								}
								if (bVar5)
								{
									if (!func_7(512))
									{
										func_19(817, 0);
										func_20(512);
									}
									iVar3++;
									if (func_16(vVar9) || fVar0 > 80f)
									{
										func_21();
										func_5();
										func_22(iVar4);
									}
									else
									{
										func_23(fVar0, fVar1);
										func_24();
										if (!func_7(256))
										{
											bVar8 = true;
										}
										else
										{
											if (!bVar5)
											{
												if (fVar2 < 225f)
												{
													if (!func_18(128, iVar4))
													{
														func_12(128, iVar4);
													}
												}
												else if (func_18(128, iVar4))
												{
													func_25(128, iVar4);
												}
											}
											if (func_18(4, iVar4))
											{
												func_25(4, iVar4);
											}
											func_26(iVar4, bVar5, fVar0, fVar1, &bVar6);
											func_27(iVar4, fVar1);
											if (bVar6)
											{
												func_28(bVar5, iVar4);
											}
											else
											{
												func_29(iVar4);
											}
										}
									}
									iVar4++;
									if (bVar8)
									{
										if ((func_30() && func_31()) && func_32())
										{
											func_20(256);
										}
									}
									iLocal_289 = iVar287 + 1;
									if (iVar287 >= 32)
									{
										iLocal_289 = 0;
										if (!func_7(128))
										{
											func_20(128);
										}
									}
									if (iVar3 == 0 && func_7(128))
									{
										func_20(32);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_5()
{
	if (func_7(8))
	{
		decor_remove(Global_34, "DigSiteX");
		decor_remove(Global_34, "DigSiteY");
		decor_remove(Global_34, "DigSiteZ");
		func_13(8);
	}
}

void func_6(int iParam0, bool bParam1)
{
	if (!func_18(256, iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_10();
	}
	func_22(iParam0);
	set_object_as_no_longer_needed(iLocal_0[iParam0]);
	iLocal_0[iParam0] = 0;
	func_25(256, iParam0);
}

bool func_7(int iParam0)
{
	return func_33(uVar320, iParam0);
}

char* func_8()
{
	return "RDRO_Metal_Detector_Sounds";
}

char* func_9()
{
	return "mech_weapons_dual@metaldetector@operate";
}

void func_10()
{
	if (func_7(64))
	{
		_0xa0cefcea390aab9b(0);
		func_13(64);
	}
}

bool func_11(bool bParam0, bool bParam1)
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

void func_12(int iParam0, int iParam1)
{
	func_34(uLocal_290[iParam1], iParam0);
}

void func_13(int iParam0)
{
	func_35(&uLocal_323, iParam0);
}

Vector3 func_14(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return *Global_1212889;
	}
	return func_36(iParam0, iParam1);
}

float func_15(float fParam0, float fParam1, float fParam2)
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

bool func_16(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_17(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (bParam2)
	{
		if (Global_1940258->f_38 == -862059856)
		{
			*bParam3 = 1;
			if (!does_entity_exist(&(iLocal_0[iParam1])))
			{
				iLocal_0[iParam1] = get_object_index_from_entity_index(get_current_ped_weapon_entity_index(iParam0, 0));
			}
		}
	}
	else if (get_current_ped_weapon(iParam0, &iVar0, true, 0, false))
	{
		if (iVar0 == -862059856)
		{
			*bParam3 = 1;
			if (!does_entity_exist(&(iLocal_0[iParam1])))
			{
				iLocal_0[iParam1] = get_object_index_from_entity_index(get_current_ped_weapon_entity_index(iParam0, 0));
			}
		}
	}
	if (!*bParam3)
	{
		if (get_current_ped_weapon(iParam0, &iVar0, true, 1, false))
		{
			if (iVar0 == -862059856)
			{
				*bParam3 = 1;
				if (!does_entity_exist(&(iLocal_0[iParam1])))
				{
					iLocal_0[iParam1] = get_object_index_from_entity_index(get_current_ped_weapon_entity_index(iParam0, 1));
				}
			}
		}
	}
}

bool func_18(int iParam0, int iParam1)
{
	return func_33(&(uLocal_290[iParam1]), iParam0);
}

void func_19(int iParam0, bool bParam1)
{
	func_37(iParam0, &iVar0, &iVar1);
	if (!func_38(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_39(iVar0, iVar1);
}

void func_20(int iParam0)
{
	func_34(&uLocal_323, iParam0);
}

void func_21()
{
	if (!func_7(64))
	{
		_0xf239400e16c23e08(0, 0);
		func_20(64);
	}
}

void func_22(int iParam0)
{
	if (func_18(4, iParam0))
	{
		return;
	}
	if (func_18(2, iParam0))
	{
		_0xf49574e2332a8f06(&(iLocal_0[iParam0]), 0f);
		func_25(2, iParam0);
	}
	if (func_18(32, iParam0))
	{
		stop_particle_fx_looped(&(iLocal_33[iParam0]), true);
		func_25(32, iParam0);
	}
	if (func_18(16, iParam0))
	{
		stop_entity_anim(&(iLocal_0[iParam0]), func_40(), func_9(), -1000f);
		func_25(16, iParam0);
	}
	func_29(iParam0);
	func_12(4, iParam0);
}

void func_23(float fParam0, float fParam1)
{
	_0x437c08db4febe2bd(Global_34, "MetalDetectorDistanceToDigSite", fParam0, 10);
	_0x437c08db4febe2bd(Global_34, "MetalDetectorDetectionValue", fParam1, 10);
}

void func_24()
{
	if (!func_7(8))
	{
		decor_set_float(Global_34, "DigSiteX", &Global_1212889);
		decor_set_float(Global_34, "DigSiteY", Global_1212889->f_1);
		decor_set_float(Global_34, "DigSiteZ", Global_1212889->f_2);
		func_20(8);
	}
}

void func_25(int iParam0, int iParam1)
{
	func_35(uLocal_290[iParam1], iParam0);
}

void func_26(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4)
{
	iVar0 = floor(func_41(to_float(3000), to_float(30), fParam3));
	fVar1 = func_41(1400f, 2000f, fParam3);
	iVar2 = (iVar0 / 6);
	bVar3 = false;
	if (fParam2 < 1.6f)
	{
		*bParam4 = 1;
		bVar3 = true;
	}
	else if (!func_18(1, iParam0))
	{
		if (!func_42(vLocal_66[iParam0]) || func_43(vLocal_66[iParam0]) > iVar0)
		{
			func_44(vLocal_66[iParam0]);
			func_12(1, iParam0);
			bVar3 = true;
		}
	}
	else if (func_43(vLocal_66[iParam0]) < iVar2)
	{
		bVar3 = true;
	}
	else
	{
		func_25(1, iParam0);
	}
	if (bVar3)
	{
		func_45(bParam1, iParam0);
		if (bParam1)
		{
			func_10();
			if (!func_42(&uLocal_163))
			{
				func_44(&uLocal_163);
			}
			if (func_43(&uLocal_163) < 5000)
			{
				set_pad_shake(0, 68, 110);
			}
			else if (func_43(&uLocal_163) >= 7000)
			{
				func_44(&uLocal_163);
			}
		}
		if (!func_18(32, iParam0))
		{
			iLocal_33[iParam0] = start_particle_fx_looped_on_entity_bone(func_46(), &(iLocal_0[iParam0]), func_47(), func_48(), get_entity_bone_index_by_name(&(iLocal_0[iParam0]), func_49()), 1f, false, false, false);
			func_12(32, iParam0);
		}
		if (!func_18(2, iParam0))
		{
			set_particle_fx_looped_evolution(&(iLocal_33[iParam0]), func_50(), fParam3, true);
			func_12(2, iParam0);
		}
		_0xf49574e2332a8f06(&(iLocal_0[iParam0]), (fVar1 * func_51()));
	}
	else
	{
		if (bParam1)
		{
			if (func_42(&uLocal_163))
			{
				func_52(&uLocal_163);
			}
			func_21();
		}
		if (func_18(2, iParam0))
		{
			_0xf49574e2332a8f06(&(iLocal_0[iParam0]), 0f);
			set_particle_fx_looped_evolution(&(iLocal_33[iParam0]), func_50(), 0f, true);
			func_25(2, iParam0);
		}
	}
}

void func_27(int iParam0, float fParam1)
{
	if (!func_18(16, iParam0))
	{
		if (play_entity_anim(&(iLocal_0[iParam0]), func_40(), func_9(), 1000f, true, false, false, 0f, 0))
		{
			func_12(16, iParam0);
			if (!func_18(64, iParam0))
			{
				func_12(64, iParam0);
			}
		}
	}
	else if (iVar285 == iParam0 || func_18(64, iParam0))
	{
		_set_entity_anim_speed(&(iLocal_0[iParam0]), func_9(), func_40(), (fParam1 * 2f));
		if (func_18(64, iParam0))
		{
			func_25(64, iParam0);
		}
	}
}

void func_28(bool bParam0, int iParam1)
{
	if (func_18(8, iParam1))
	{
		return;
	}
	if (!bParam0 && !func_18(128, iParam1))
	{
		return;
	}
	iVar0 = func_53(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	sVar1 = func_8();
	sVar2 = func_54();
	if (bParam0)
	{
		uVar3 = Global_34;
	}
	else
	{
		uVar3 = &iLocal_0[iParam1];
	}
	_0xf1c5310feaa36b48(iVar0, sVar2, uVar3, sVar1, 0, 0);
	func_12(8, iParam1);
}

void func_29(int iParam0)
{
	if (!func_18(8, iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0, 1);
	if (iVar0 != -1)
	{
		_0x3210bcb36af7621b(iVar0);
	}
	func_25(8, iParam0);
}

int func_30()
{
	if (func_7(1))
	{
		return 1;
	}
	if (_0xd9130842d7226045(func_8(), 0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iLocal_275[iVar0] = get_sound_id();
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iLocal_282[iVar0] = get_sound_id();
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iLocal_263[iVar0] = get_sound_id();
			iLocal_269[iVar0] = -1;
			iVar0++;
		}
		func_20(1);
		return 1;
	}
	return 0;
}

int func_31()
{
	if (func_7(2))
	{
		return 1;
	}
	request_anim_dict(func_9());
	if (has_anim_dict_loaded(func_9()))
	{
		func_20(2);
		return 1;
	}
	return 0;
}

int func_32()
{
	if (func_7(4))
	{
		return 1;
	}
	request_ptfx_asset();
	if (has_ptfx_asset_loaded())
	{
		func_20(4);
		return 1;
	}
	return 0;
}

bool func_33(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_36(int iParam0, int iParam1)
{
	if (func_56(iParam1))
	{
		vVar0 = { 0f, 0f, 0f };
		if (decor_exist_on(iParam0, "DigSiteX"))
		{
			vVar0.x = decor_get_float(iParam0, "DigSiteX");
			vVar0.f_1 = decor_get_float(iParam0, "DigSiteY");
			vVar0.f_2 = decor_get_float(iParam0, "DigSiteZ");
		}
		*vLocal_166[iParam1] = { vVar0 };
	}
	return *vLocal_166[iParam1];
}

void func_37(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_38(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_57(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_58(iParam0))
	{
		return false;
	}
	if (func_59(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_60(iParam0, 1)) || func_61(32768))
	{
		if (!func_60(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_62())
	{
		return false;
	}
	return true;
}

void func_39(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

char* func_40()
{
	return "spin_dial";
}

float func_41(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_42(var uParam0)
{
	return func_63(*uParam0, 1);
}

int func_43(var uParam0)
{
	if (!func_42(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_64(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_65() - round((uParam0->f_1 * 1000f)));
}

void func_44(var uParam0)
{
	func_66(uParam0, 0f);
}

void func_45(bool bParam0, int iParam1)
{
	if (func_18(2, iParam1))
	{
		return;
	}
	if (!bParam0)
	{
		if (!func_18(128, iParam1) || func_7(16))
		{
			return;
		}
	}
	sVar0 = func_8();
	sVar1 = func_67();
	if (bParam0)
	{
		_0xf1c5310feaa36b48(&(iLocal_275[iVar277]), sVar1, Global_34, sVar0, 0, 0);
		iLocal_281 = iVar277 + 1;
		if (iVar277 >= 5)
		{
			iLocal_281 = 0;
		}
	}
	else
	{
		_0xf1c5310feaa36b48(&(iLocal_282[iVar284]), sVar1, &(iLocal_0[iParam1]), sVar0, 0, 0);
		iLocal_288 = iVar284 + 1;
		if (iVar284 >= 5)
		{
			iLocal_288 = 0;
		}
		func_20(16);
	}
}

char* func_46()
{
	return "scr_mp_metal_detector_sparks";
}

Vector3 func_47()
{
	return 0f, -0.09f, 0f;
}

Vector3 func_48()
{
	return 0f, 0f, 0f;
}

char* func_49()
{
	return "Detector_Spin_Bone";
}

char* func_50()
{
	return "intensity";
}

float func_51()
{
	iVar0 = get_clock_hours();
	iVar1 = get_clock_minutes();
	if ((iVar0 == 5 && iVar1 >= 30) || (iVar0 == 6 && iVar1 < 30))
	{
		return func_68(0, 5, 30, 3600);
	}
	if ((iVar0 == 19 && iVar1 >= 45) || (iVar0 == 20 && iVar1 < 20))
	{
		return func_68(1, 19, 45, 2100);
	}
	if (((iVar0 > 6 && iVar0 < 19) || (iVar0 == 6 && iVar1 >= 30)) || (iVar0 == 19 && iVar1 < 45))
	{
		return 1000f;
	}
	return 1f;
}

void func_52(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_53(int iParam0)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (&iLocal_269[iVar1] == -1 || &iLocal_269[iVar1] == iParam0)
		{
			iVar0 = &iLocal_263[iVar1];
			if (&iLocal_269[iVar1] != iParam0)
			{
				iLocal_269[iVar1] = iParam0;
			}
			return iVar0;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_54()
{
	return "Metal_Detector_Spin";
}

int func_55(int iParam0, bool bParam1)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (&iLocal_269[iVar1] == iParam0)
		{
			iVar0 = &iLocal_263[iVar1];
			if (bParam1)
			{
				iLocal_269[iVar1] = -1;
			}
			return iVar0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_56(int iParam0)
{
	return (iVar286 % 8) == (iParam0 / 4);
}

bool func_57(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_58(int iParam0)
{
	if (func_60(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_59(int iParam0)
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

bool func_60(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_61(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_62()
{
	if (!func_69())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_64(var uParam0)
{
	return func_63(*uParam0, 2);
}

int func_65()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_66(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_70() - fParam1);
	func_71(uParam0, 1);
	func_72(uParam0, 2);
	uParam0->f_2 = 0f;
}

char* func_67()
{
	return "Metal_Detector";
}

float func_68(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = (get_clock_hours() - iParam1);
	iVar1 = (get_clock_minutes() - iParam2);
	iVar2 = ((get_clock_seconds() + iVar1 * 60) + iVar0 * 3600);
	fVar3 = (to_float(iVar2) / IntToFloat(iParam3));
	fVar3 = func_15(fVar3, 0f, 1f);
	if (bParam0)
	{
		return func_41(1000f, 1f, fVar3);
	}
	return func_41(1f, 1000f, fVar3);
}

bool func_69()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

float func_70()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_72(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

