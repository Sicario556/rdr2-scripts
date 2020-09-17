void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = -1;
	iLocal_24 = -1;
	iLocal_52 = -1;
	iLocal_53 = -1;
	iLocal_55 = -1;
	iLocal_56 = -1;
	fLocal_57 = 0f;
	fLocal_58 = 1f;
	fLocal_59 = 1f;
	fLocal_60 = 1f;
	vLocal_61 = { 0f, 0f, 0f };
	iLocal_883 = func_1(3, 0, 0);
	iLocal_884 = func_1(3, 0, 0);
	iLocal_885 = func_1(3, 0, 0);
	Local_344.f_3 = func_2(&vScriptParam_0);
	Local_344.f_161 = func_3(vScriptParam_0.z, 2);
	uLocal_560 = uVar558;
	func_4(&Local_344, 1);
	func_5(&iLocal_214, &Local_344, &uLocal_54);
	iLocal_899 = func_6();
	if (func_7())
	{
		func_8(&Local_344, 1);
	}
	else
	{
		func_8(&Local_344, 0);
	}
	func_9(&uLocal_594);
	func_9(&(Local_344.f_5));
	if (has_force_cleanup_occurred(523))
	{
		iLocal_901 = 1;
	}
	while (true)
	{
		func_11(bVar899, 1417, 0);
		if (bVar899)
		{
			wait(0);
		}
		else
		{
			switch (iVar561)
			{
				case 0:
					if (func_12())
					{
						func_13(iLocal_214, &fLocal_59, &fLocal_60, &fLocal_58);
						iLocal_563 = 1;
					}
					else if (Local_344.f_160)
					{
						func_10();
					}
					break;
				case 1:
					if (func_14(&Local_344, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_15(&Local_344, &iLocal_899, &uLocal_900);
						Local_344.f_51.f_4 = iVar898;
						func_17(&Local_344, iVar897, 2307);
						func_18(&Local_344, &iLocal_899, &uLocal_900);
						func_19(&iLocal_214, iVar897, iVar898, uLocal_54, Local_344.f_161);
						func_20(iLocal_214, iVar897, Local_344.f_51.f_4, &Local_64);
						func_21(&uLocal_538, iLocal_214, iVar897, iVar898);
						func_22(iLocal_214, iVar897, &Local_215);
						func_23(iLocal_214, iVar897, iVar898);
						func_24();
						func_25(iLocal_214, iVar897, iVar898);
						func_26();
						iLocal_563 = 2;
					}
					else if (Local_344.f_160)
					{
						func_10();
					}
					break;
				case 2:
					if (func_27(Local_64) && func_28(iVar536))
					{
						iLocal_50 = iVar536;
						iLocal_563 = 3;
					}
					break;
				case 3:
					if (func_29(uLocal_178[1], &iLocal_185, iLocal_214, Local_344.f_51) && func_30())
					{
						func_31(iVar897, Local_344.f_51.f_4, &Local_64);
						func_32(iVar897, Local_344.f_51.f_4, &Local_64);
						func_33(iVar897, Local_344.f_51.f_4, &Local_64);
						func_34();
						func_35();
						func_36();
						func_37();
						func_38();
						func_39();
						func_40(&uLocal_171);
						iLocal_563 = 4;
					}
					if (iLocal_214 != 4)
					{
					}
					else if (!func_41(&uLocal_171))
					{
						func_42(&uLocal_171, 0);
					}
					else if (func_43(&uLocal_171, 15f) && is_entity_dead(&(uLocal_178[1])))
					{
						func_10();
					}
					if (func_44(&Local_344, &uLocal_178, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_10();
					}
					break;
				case 4:
					if (!func_45(&Local_344, &uLocal_178, iLocal_214, 0, 1, 0, 1, 0))
					{
						func_10();
					}
					if (Local_344.f_46)
					{
						if (func_46(player_id(), 0, 1, 1) && iVar560 != 22)
						{
							func_47();
							func_48(22);
						}
					}
					else
					{
						switch (iLocal_214)
						{
							case 4:
								if (func_49())
								{
									Local_344.f_46 = 1;
									func_48(10);
								}
								break;
							default:
								if (func_50())
								{
									Local_344.f_46 = 1;
									func_47();
									func_51();
									if (!func_52(16384))
									{
										func_53(iLocal_212, 0);
									}
									else
									{
										func_54(iLocal_212);
									}
									func_48(14);
								}
								break;
						}
					}
					if (func_44(&Local_344, &uLocal_178, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_344.f_50 = 1;
						func_10();
					}
					if (func_55())
					{
						Local_344.f_50 = 1;
						func_10();
					}
					func_56();
					break;
			}
			wait(Local_344.f_158);
		}
	}
}

int func_1(int iParam0, int iParam1, int iParam2)
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

var func_2(var uParam0)
{
	return *uParam0;
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4(var uParam0, bool bParam1)
{
	func_57(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_58("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_5(int iParam0, var uParam1, var uParam2)
{
	*iParam0 = func_59(uParam1->f_3, 5, 0);
}

int func_6()
{
	return Global_1897952->f_41;
}

bool func_7()
{
	if (iLocal_214 == 4)
	{
		return true;
	}
	return false;
}

void func_8(var uParam0, bool bParam1)
{
	func_57(&(uParam0->f_5));
	func_60(&(uParam0->f_5), 1);
	func_61(&(uParam0->f_5), bParam1);
	func_62(&(uParam0->f_5), 500);
	func_63(&(uParam0->f_5), 1, 0, 1);
	func_64(&(uParam0->f_5), 0);
	func_65(&(uParam0->f_5), 0);
}

void func_9(int iParam0)
{
	func_61(iParam0, 1);
	func_62(iParam0, 500);
	func_63(iParam0, 1, 0, 1);
	func_66(iParam0, 2f, 1);
	func_60(iParam0, 1);
	func_67(iParam0, 0);
	func_68(iParam0, 0);
	func_69(iParam0, 0);
	func_64(iParam0, 0);
	func_70(iParam0, 0);
	func_71(iParam0, 0);
	func_65(iParam0, 1);
}

void func_10()
{
	if (func_72(4))
	{
		func_73(uLocal_178[1], 4, Local_623[1], &Local_778, iVar897);
	}
	func_74(iLocal_205);
	func_74(iLocal_206);
	Local_344.f_50 = 1;
	func_75(&Local_344, &uLocal_178, &uLocal_187, iLocal_214, iVar897, uVar898, 0, 1, 0, 1);
	func_76(uLocal_178[0]);
	func_77(&Local_708, 0, 0, 1, 0);
	func_78();
	func_79(iLocal_50);
	func_80(&(uLocal_178[iLocal_183]));
	func_81(&uLocal_178);
	func_82(&(Local_886.f_1));
	func_83(1098854605);
	func_84();
	func_85();
	func_86();
	func_87();
	func_88(1);
	func_89(1);
	if (iLocal_197 != 0)
	{
		_0xd2b9c78537ed5759(iLocal_197);
	}
	if (iLocal_198 != 0)
	{
		_0xd2b9c78537ed5759(iLocal_197);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_90(&(uLocal_178[iVar0]), 0, 0))
		{
			set_ped_config_flag(&(uLocal_178[iVar0]), 217, false);
		}
		iVar0++;
	}
	if (is_audio_scene_active("RE_Street_Fight_scene"))
	{
		stop_audio_scene("RE_Street_Fight_scene");
	}
	_0x9f348de670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE");
	_0x9f348de670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED");
	_0x9f348de670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER");
	_0x9f348de670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM");
	remove_ptfx_asset();
	terminate_this_thread();
}

void func_11(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_91(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_12()
{
	switch (iVar559)
	{
		case 0:
			if (func_92(&Local_344))
			{
				func_93(&Local_215, iLocal_214, iVar897, iVar898);
				func_94(&Local_215);
				func_95(iLocal_214, &Local_546, &uLocal_97);
				request_ptfx_asset();
				func_96(&Local_567);
				iLocal_561 = 1;
			}
			break;
		case 1:
			if (!func_97(&uLocal_560, uLocal_92))
			{
				return false;
			}
			if (!func_98(&Local_215))
			{
				return false;
			}
			if (!func_99(&uLocal_97))
			{
				return false;
			}
			if (!has_ptfx_asset_loaded())
			{
				return false;
			}
			if (!_0x85b8f04555ab49b8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE"))
			{
				return false;
			}
			if (!_0x85b8f04555ab49b8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED"))
			{
				return false;
			}
			if (!_0x85b8f04555ab49b8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER"))
			{
				return false;
			}
			if (!_0x85b8f04555ab49b8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_13(int iParam0, float fParam1, float fParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*fParam1 = 0.5758f;
			*fParam2 = 0.6315f;
			*fParam3 = 1f;
			break;
		case 1:
		case 2:
			*fParam1 = 0.5448f;
			*fParam2 = 0.5727f;
			*fParam3 = 1f;
			break;
	}
}

bool func_14(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_100(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_101(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_102(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_103(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_104(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_15(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 4;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 2:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 3:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
	}
}

Vector3 func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -89.1f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_17(var uParam0, int iParam1, int iParam2)
{
	Stack.Push(iParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

void func_18(var uParam0, int iParam1, var uParam2)
{
	switch (*iParam1)
	{
		case 4:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, -799.5692f, -1320.505f, 44.259f, 0f, 0f, 0f, 18f, 15f, 5f);
					_0x39816f6f94f385ad(uParam0->f_173, -809.5124f, -1336.469f, 44.2586f, 0f, 0f, 0f, 35f, 17f, 5f);
					break;
			}
			break;
		case 9:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, -309.808f, 786.006f, 119.488f, 0f, 0f, 11f, 100f, 25f, 10f);
					break;
				case 1:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, -252.0321f, 760.9167f, 118.0679f, 0f, 0f, 19f, 20f, 75f, 10f);
					break;
			}
			break;
		case 10:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, 2960.006f, 522.5409f, 46.9798f, 0f, 0f, 0f, 20f, 75f, 10f);
					break;
			}
			break;
		case 11:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = _create_volume_aggregate();
					_0x39816f6f94f385ad(uParam0->f_173, 1369.239f, -1378.793f, 81.047f, 0f, 0f, -9.75f, 30f, 40f, 8f);
					_0x39816f6f94f385ad(uParam0->f_173, 1342.579f, -1375.116f, 81.7343f, 0f, 0f, -10.5f, 20f, 12f, 5f);
					break;
			}
			break;
	}
}

void func_19(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	bVar0 = true;
	if (bParam4)
	{
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case 9:
				switch (iParam2)
				{
					case 0:
						switch (func_105(iParam1, iParam2))
						{
							case 0:
								*iParam0 = 2;
								break;
							case 1:
								*iParam0 = 0;
								break;
							case 2:
								*iParam0 = 1;
								break;
							case 3:
								*iParam0 = 3;
								break;
							default:
								if (*iParam0 == 4)
								{
									*iParam0 = 0;
								}
								break;
						}
						break;
					case 1:
						switch (func_105(iParam1, iParam2))
						{
							case 0:
								if (func_106() || func_107(9))
								{
									*iParam0 = 4;
								}
								else
								{
									*iParam0 = 1;
								}
								break;
							case 1:
								*iParam0 = 1;
								break;
							case 2:
								*iParam0 = 0;
								break;
							case 3:
								*iParam0 = 3;
								break;
							default:
								if (*iParam0 == 2)
								{
									*iParam0 = 0;
								}
								break;
						}
						break;
				}
				break;
			case 10:
				switch (func_105(iParam1, iParam2))
				{
					case 0:
						*iParam0 = 0;
						break;
					case 1:
						*iParam0 = 1;
						break;
					case 2:
						*iParam0 = 3;
						break;
					default:
						switch (*iParam0)
						{
							case 2:
								*iParam0 = 3;
								break;
							case 4:
								*iParam0 = 0;
								break;
						}
						break;
				}
				break;
			case 4:
				*iParam0 = 4;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 9:
				switch (iParam2)
				{
					case 0:
						if (*iParam0 == 4)
						{
							*iParam0 = 0;
						}
						break;
					case 1:
						if (*iParam0 == 2)
						{
							*iParam0 = 0;
						}
						break;
				}
				break;
			case 10:
				switch (*iParam0)
				{
					case 2:
						*iParam0 = 3;
						break;
					case 4:
						*iParam0 = 0;
						break;
				}
				break;
			case 4:
				*iParam0 = 4;
				break;
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam1)
	{
		case 10:
			*uParam3 = { 2946.417f, 525.8564f, 44.34274f };
			uParam3->f_3 = { 2951.588f, 526.2109f, 45.47384f };
			uParam3->f_6 = { 2951.618f, 523.3102f, 45.66131f };
			uParam3->f_9 = { 2951.588f, 526.2109f, 45.47384f };
			uParam3->f_12 = { 2946.991f, 523.1688f, 44.36835f };
			break;
		case 4:
			*uParam3 = { -815.6277f, -1318.792f, 42.67896f };
			uParam3->f_3 = { 0f, 0f, 0f };
			uParam3->f_6 = { -810.0895f, -1327.633f, 43.76683f };
			uParam3->f_9 = { 0f, 0f, 0f };
			uParam3->f_12 = { -811.2068f, -1322.647f, 42.67806f };
			break;
		default:
			switch (iParam2)
			{
				case 0:
					*uParam3 = { -312.1026f, 808.2841f, 117.982f };
					uParam3->f_3 = { -303.6723f, 797.997f, 119.2487f };
					uParam3->f_6 = { -307.5079f, 798.4366f, 119.0628f };
					uParam3->f_9 = { -306.6963f, 793.7566f, 116.9643f };
					uParam3->f_12 = { -308.0499f, 801.3186f, 117.9793f };
					break;
				case 1:
					*uParam3 = { -240.6656f, 769.7513f, 117.085f };
					uParam3->f_3 = { -245.4576f, 769.4586f, 118.9128f };
					uParam3->f_6 = { -243.9364f, 765.5624f, 118.3578f };
					uParam3->f_9 = { -249.3253f, 766.9821f, 116.3386f };
					uParam3->f_12 = { -242.7195f, 769.2915f, 117.085f };
					if (iParam0 != 4)
					{
						func_108(1098854605, 0, 0);
						func_109(1098854605, 0, -1f, 0, 0, 0, 0, 0);
					}
					break;
			}
			break;
	}
}

void func_21(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			switch (iParam2)
			{
				case 9:
					if (iParam3 == 0)
					{
						uParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor_Val0";
					}
					else
					{
						uParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor";
					}
					break;
				case 10:
					uParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor_vanhorn";
					break;
				default:
					uParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor";
					break;
			}
			break;
		case 2:
			uParam0->f_4 = "script@beat@town@streetFight@thrownOutWindow";
			break;
		case 3:
			switch (iParam2)
			{
				case 10:
					uParam0->f_4 = "script@beat@town@streetFight@thrownOutWindowDead_VanHorn";
					break;
				default:
					uParam0->f_4 = "script@beat@town@streetFight@thrownOutWindowDead";
					break;
			}
			break;
		case 4:
			uParam0->f_4 = "script@beat@town@streetFight@Uncle_Fight";
			break;
	}
	if (!is_string_null_or_empty(uParam0->f_4))
	{
		switch (iParam1)
		{
			case 4:
				*uParam0 = _create_anim_scene(uParam0->f_4, 0, func_110(0), false, true);
				break;
			default:
				*uParam0 = _create_anim_scene(uParam0->f_4, 0, func_111(iParam1), false, true);
				break;
		}
		if (!_is_anim_scene_loaded(*uParam0, true, false))
		{
			load_anim_scene(*uParam0);
		}
	}
}

void func_22(int iParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam0)
			{
				case 0:
					StringCopy(&((*uParam2)[0]->f_23), "0949_A_M_M_Guard_White_AGGRESSIVE_04", 64);
					StringCopy(&((*uParam2)[1]->f_23), "0941_A_M_M_Foreman_White_AVOID_01", 64);
					break;
				case 1:
					StringCopy(&((*uParam2)[0]->f_23), "0920_A_M_M_Civ_Poor_White_AVOID_03", 64);
					StringCopy(&((*uParam2)[1]->f_23), "0921_A_M_M_Civ_Poor_White_AVOID_04", 64);
					break;
				case 2:
					StringCopy(&((*uParam2)[0]->f_23), "0908_A_M_M_Civ_Poor_White_AGGRESSIVE_08", 64);
					StringCopy(&((*uParam2)[1]->f_23), "0926_A_M_M_Civ_Poor_White_AVOID_09", 64);
					break;
				case 3:
					StringCopy(&((*uParam2)[0]->f_23), "0907_A_M_M_Civ_Poor_White_AGGRESSIVE_07", 64);
					StringCopy(&((*uParam2)[2]->f_23), "0901_A_M_M_Civ_Poor_White_AGGRESSIVE_01", 64);
					StringCopy(&((*uParam2)[3]->f_23), "0902_A_M_M_Civ_Poor_White_AGGRESSIVE_02", 64);
					break;
				case 4:
					StringCopy(&((*uParam2)[0]->f_23), "1062_G_M_M_UniCriminals_01_WHITE_09", 64);
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					StringCopy(&((*uParam2)[0]->f_23), "0494_A_M_M_VhtTownfolk_01_WHITE_01", 64);
					StringCopy(&((*uParam2)[1]->f_23), "0919_A_M_M_Civ_Poor_White_AVOID_02", 64);
					break;
				case 1:
					StringCopy(&((*uParam2)[0]->f_23), "0495_A_M_M_VhtTownfolk_01_BLACK_01", 64);
					StringCopy(&((*uParam2)[1]->f_23), "0893_A_M_M_Civ_Poor_Black_AVOID_08", 64);
					break;
				case 2:
					StringCopy(&((*uParam2)[0]->f_23), "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02", 64);
					StringCopy(&((*uParam2)[1]->f_23), "0891_A_M_M_Civ_Poor_Black_AVOID_06", 64);
					break;
				case 3:
					StringCopy(&((*uParam2)[0]->f_23), "0905_A_M_M_Civ_Poor_White_AGGRESSIVE_05", 64);
					StringCopy(&((*uParam2)[2]->f_23), "0933_A_M_M_Civ_White_AVOID_03", 64);
					StringCopy(&((*uParam2)[3]->f_23), "0887_A_M_M_Civ_Poor_Black_AVOID_02", 64);
					break;
			}
			break;
		case 4:
			StringCopy(&((*uParam2)[0]->f_23), "0134_G_M_M_UniCriminals_01_HISPANIC_01", 64);
			break;
	}
	start_audio_scene("RE_Street_Fight_scene");
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 9:
					switch (iParam2)
					{
						case 0:
							iLocal_202 = _create_volume_box_with_custom_name(-303.064f, 795.973f, 118.625f, 0f, 0f, 99.715f, 5.753f, 3.638f, 3.973f, "Smithfields's Saloon Hitching");
							break;
						case 1:
							break;
						default:
							break;
					}
					break;
				case 10:
					iLocal_202 = _create_volume_box_with_custom_name(2952.651f, 526.154f, 44.9f, 0f, 0f, 0f, 1.901f, 2.431f, 5.094f, "Van Horn's Saloon Hitching");
					break;
				case 4:
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
}

void func_24()
{
	if (!_does_volume_exist(iLocal_202))
	{
		return;
	}
	_0xb56d41a694e42e86(iLocal_202, 0, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iLocal_202, 0, 0, 0, -1, -1, 0);
	func_112(iLocal_202, 0, 0, 0, 0, 0);
	func_113(iLocal_202, 0);
	uLocal_203 = _0x4c39c95ae5db1329(iLocal_202, 0, 15);
}

void func_25(int iParam0, int iParam1, int iParam2)
{
	iLocal_204 = _create_volume_box_with_custom_name(func_114(iParam0, iParam1, iParam2), func_115(iParam0, iParam1, iParam2), func_116(iParam0, iParam1, iParam2), "Animscene avodiance");
}

void func_26()
{
	if (!_does_volume_exist(iLocal_204))
	{
		return;
	}
	_0xb56d41a694e42e86(iLocal_204, 0, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iLocal_204, 0, 0, 0, -1, -1, 0);
	func_112(iLocal_204, 0, 0, 0, 0, 0);
	func_113(iLocal_204, 0);
}

bool func_27(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27)
{
	iVar0 = get_interior_at_coords(vParam0);
	if (is_valid_interior(iVar0))
	{
		pin_interior_in_memory(iVar0);
		if (is_interior_ready(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_28(int iParam0)
{
	return _is_anim_scene_loaded(iParam0, true, false);
}

int func_29(var uParam0, int iParam1, int iParam2, vector3 vParam3)
{
	iVar1 = 0;
	switch (iParam2)
	{
		case 4:
			iVar0 = 4;
			iVar1 = -268604689;
			if ((!Local_344.f_161 && func_117(iVar0)) && !func_72(iVar0))
			{
				func_10();
			}
			break;
		default:
			return 1;
	}
	if (!is_entity_dead(*uParam0) && !is_entity_dead(*iParam1))
	{
		if (!is_entity_a_mission_entity(*uParam0))
		{
			set_entity_as_mission_entity(*uParam0, true, false);
			set_ped_config_flag(*uParam0, 18, true);
			set_blocking_of_non_temporary_events(*uParam0, true);
		}
		if (!is_entity_a_mission_entity(*iParam1))
		{
			set_entity_as_mission_entity(*iParam1, true, false);
			set_ped_config_flag(*iParam1, 18, true);
			set_ped_can_be_targetted(*iParam1, false);
			set_entity_invincible(*iParam1, true);
			set_blocking_of_non_temporary_events(*uParam0, true);
		}
		if (!func_118(iVar0, 256))
		{
			func_119(iVar0, *iParam1, 1);
		}
		else
		{
			_0xba8818212633500a(*iParam1, 6, 1);
			return 1;
		}
	}
	else
	{
		bVar2 = false;
		if (!func_90(*uParam0, 0, 1))
		{
			*uParam0 = func_120(iVar0, 1, 1, vParam3.x, vParam3.y, vParam3.z, 0f, 1, 0, 0, 1, 0, 0, iVar1, bVar2, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!func_90(*iParam1, 0, 1))
		{
			*iParam1 = func_121(iVar0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	return 0;
}

int func_30()
{
	switch (iVar620)
	{
		case 0:
			iLocal_622 = 1;
			break;
		case 1:
			if (!func_122(Local_344.f_51, 0f, &Local_215, &uLocal_178, 0, 0, -1, 1))
			{
				return 0;
			}
			iLocal_622 = 6;
			break;
		case 6:
			if (!is_entity_dead(&(uLocal_178[0])))
			{
				func_123(&(uLocal_178[0]), 12);
			}
			if (!is_entity_dead(&(uLocal_178[1])))
			{
				func_123(&(uLocal_178[1]), 12);
			}
			return 1;
	}
	return 0;
}

void func_31(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 10:
			vVar0 = { 2951.658f, 522.181f, 45.362f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 2.5f, 6.25f, 2f };
			vVar9 = { 2955.698f, 520.1378f, 44.6571f };
			vVar12 = { 0f, 0f, 0f };
			vVar15 = { 2.5f, 4f, 2f };
			vVar18 = { 2953.228f, 526.3458f, 45.92805f };
			vVar21 = { 0f, 0f, 0f };
			vVar24 = { 3f, 3f, 3f };
			break;
		case 4:
			vVar0 = { -810.078f, -1325.815f, 44.056f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 3f, 3f, 3f };
			vVar9 = { -828.913f, -1328.888f, 43.322f };
			vVar12 = { 0f, 0f, 0f };
			vVar15 = { 3f, 3f, 2f };
			vVar18 = { -809.001f, -1329.048f, 43.544f };
			vVar21 = { 0f, 0f, 0f };
			vVar24 = { 7.65f, 4.5f, 2f };
			break;
		default:
			switch (iParam1)
			{
				case 0:
					vVar0 = { -305.321f, 797.702f, 118.645f };
					vVar3 = { 0f, 0f, 10.5f };
					vVar6 = { 7f, 3.5f, 2f };
					vVar9 = { -303.197f, 794.854f, 117.828f };
					vVar12 = { 0f, 0f, 10.5f };
					vVar15 = { 4.5f, 4f, 2f };
					break;
				case 1:
					vVar0 = { -245.781f, 766.819f, 117.737f };
					vVar3 = { 0f, 0f, 21f };
					vVar6 = { 4.75f, 6.2f, 1.5f };
					vVar9 = { -248.632f, 765.011f, 116.983f };
					vVar12 = { 0f, 0f, 20f };
					vVar15 = { 2.5f, 7f, 1.5f };
					break;
			}
			break;
	}
	func_124(vVar0, 3f, 0);
	func_125(&(uParam2->f_15), &(uParam2->f_16), vVar0, vVar3, vVar6, 1, 534496, 1, 2, 0);
	func_125(&(uParam2->f_17), &(uParam2->f_18), vVar9, vVar12, vVar15, 1, 534496, 1, 2, 0);
	if (!func_126(vVar18))
	{
		func_125(&(uParam2->f_19), &(uParam2->f_20), vVar18, vVar21, vVar24, 1, 534496, 1, 2, 0);
		func_113(uParam2->f_19, 0);
	}
}

void func_32(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 == 9 && iParam1 == 0)
	{
		func_127(&(uParam2->f_23), -303.343f, 795.682f, 118.001f, 0f, 0f, 11.25f, 5f, 1.7f, 1f, "RE_SF_NAV_MESH_BLOCKING_VOL");
	}
	if (_does_volume_exist(uParam2->f_23))
	{
		_0x19c7567d2f2287d6(uParam2->f_23, 7);
	}
}

void func_33(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 4:
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					uParam2->f_27 = _create_volume_box_with_custom_name(-311.716f, 821.056f, 118.528f, 0f, 0f, 10.5f, 12.81f, 3.951f, 10.653f, "volKill");
					break;
				case 1:
					uParam2->f_27 = _create_volume_box_with_custom_name(-236.724f, 774.881f, 117.183f, 0f, 0f, 22.286f, 6.767f, 6.481f, 9.496f, "volKill");
					break;
				default:
					break;
			}
			break;
		case 10:
			uParam2->f_27 = _create_volume_box_with_custom_name(2940.289f, 523.053f, 47.023f, 0f, 0f, 0f, 7.76f, 15.73f, 6.656f, "volKill");
			break;
		default:
			break;
	}
}

void func_34()
{
	iVar0 = 0;
	while (iVar0 < func_128(iLocal_214, Local_344.f_51.f_4, 2, 4))
	{
		if (func_90(&(uLocal_178[iVar0]), 0, 1))
		{
			func_129(&(Local_215[iVar0]->f_22));
			remove_all_ped_weapons(&(uLocal_178[iVar0]), true, true);
			func_131(&(uLocal_178[iVar0]), func_130(1072590268, 0, -1));
			if (iVar0 == 0 || (iVar0 == 1 && !func_7()))
			{
				set_ped_combat_movement(&(uLocal_178[iVar0]), 0);
				set_ped_combat_attributes(&(uLocal_178[iVar0]), 9, false);
				set_ped_combat_attributes(&(uLocal_178[iVar0]), 77, true);
				set_ped_combat_attributes(&(uLocal_178[iVar0]), 46, true);
				set_ped_config_flag(&(uLocal_178[iVar0]), 358, true);
				if (func_132(uLocal_178[iVar0]))
				{
					func_133(&(uLocal_178[iVar0]));
				}
			}
			if (iVar0 == 2 || iVar0 == 2)
			{
				set_ped_config_flag(&(uLocal_178[iVar0]), 366, true);
			}
			if (!func_134(&(uLocal_178[iVar0]), 0))
			{
				func_135(&(uLocal_178[iVar0]), 0);
			}
			add_entity_to_audio_mix_group(&(uLocal_178[iVar0]), "RE_Street_Fight_group", 0f);
			if (func_7() && iVar0 == 0)
			{
				func_136(&(uLocal_178[iVar0]), 1);
			}
		}
		iVar0++;
	}
	if (iLocal_214 == 3 && does_entity_exist(&(uLocal_178[1])))
	{
		set_ped_config_flag(&(uLocal_178[1]), 6, true);
	}
	func_137(&(uLocal_178[0]), &Local_344, 0);
	if (!func_7())
	{
		func_137(&(uLocal_178[1]), &Local_344, 0);
	}
	if (func_90(&(uLocal_178[2]), 0, 1))
	{
		func_137(&(uLocal_178[2]), &Local_344, 0);
	}
	if (func_90(&(uLocal_178[3]), 0, 1))
	{
		func_137(&(uLocal_178[3]), &Local_344, 0);
	}
}

void func_35()
{
	if (!func_90(&(uLocal_178[1]), 0, 1))
	{
		return;
	}
	switch (iLocal_214)
	{
		case 4:
			if (!is_entity_a_mission_entity(&(uLocal_178[1])))
			{
				set_entity_as_mission_entity(&(uLocal_178[1]), true, false);
			}
			set_ped_config_flag(&(uLocal_178[1]), 18, true);
			set_blocking_of_non_temporary_events(&(uLocal_178[1]), true);
			clear_ped_tasks_immediately(&(uLocal_178[1]), false, true);
			set_blocking_of_non_temporary_events(&(uLocal_178[1]), true);
			set_current_ped_weapon(&(uLocal_178[1]), -1569615261, true, 0, false, false);
			remove_all_ped_weapons(&(uLocal_178[1]), true, true);
			if (is_ped_on_mount(&(uLocal_178[1])))
			{
				task_dismount_animal(&(uLocal_178[1]), 16, 0, 0, 0, 0);
			}
			if (func_90(iLocal_185, 0, 1))
			{
				if (!is_entity_a_mission_entity(iLocal_185))
				{
					set_entity_as_mission_entity(iLocal_185, true, false);
				}
				set_ped_config_flag(iLocal_185, 18, true);
				set_ped_can_be_targetted(iLocal_185, false);
				set_entity_proofs(iLocal_185, 127, false);
				set_blocking_of_non_temporary_events(iLocal_185, true);
				_0xba8818212633500a(iLocal_185, 6, 1);
				clear_ped_tasks_immediately(iLocal_185, false, true);
				set_blocking_of_non_temporary_events(iLocal_185, true);
				func_140(iLocal_185, func_138(iVar897), func_139(iVar897), 2, 1073741824);
			}
			break;
	}
}

void func_36()
{
	switch (iVar897)
	{
		case 9:
			switch (iVar898)
			{
				case 0:
					iLocal_201 = func_141(0);
					break;
				case 1:
					iLocal_201 = func_141(1);
					break;
			}
			break;
		default:
			iLocal_201 = func_141(0);
			break;
	}
}

void func_37()
{
	if ((iLocal_214 != 3 || (iVar897 == 9 && Local_344.f_51.f_4 == 1)) || iVar897 == 10)
	{
		func_142(iVar897, Local_344.f_51.f_4, iLocal_214, &vLocal_61, &fLocal_57, &bVar3, &bVar4);
		if (bVar3)
		{
			vVar0 = { vLocal_61 };
		}
		else
		{
			vVar0 = { Local_344.f_51 + vLocal_61 };
		}
		if (!bVar4)
		{
			set_anim_scene_origin(iLocal_50, vVar0, 0f, 0f, fLocal_57, 2);
		}
	}
	if (func_90(&(uLocal_178[0]), 0, 1))
	{
		set_anim_scene_entity(iLocal_50, func_143(0), &(uLocal_178[0]), 0);
	}
	if (!func_7())
	{
		if (func_90(&(uLocal_178[1]), 0, 1))
		{
			set_anim_scene_entity(iLocal_50, func_143(1), &(uLocal_178[1]), 0);
		}
	}
	if (iLocal_214 == 3)
	{
		if (func_90(&(uLocal_178[2]), 0, 1))
		{
			set_anim_scene_entity(iLocal_50, func_143(2), &(uLocal_178[2]), 0);
		}
		if (func_90(&(uLocal_178[3]), 0, 1))
		{
			set_anim_scene_entity(iLocal_50, func_143(3), &(uLocal_178[3]), 0);
		}
	}
	if (iLocal_214 != 2 && iLocal_214 != 3)
	{
		iLocal_193 = func_144(iVar897, iVar898);
		if (iLocal_193 == 0)
		{
		}
		else
		{
			iLocal_195 = func_145(iLocal_193, 0);
			if (does_entity_exist(iLocal_195))
			{
				func_109(iLocal_193, 0, 0f, 0, 0, 0f, 1, 0);
				if (func_7() || iVar897 == 10)
				{
					set_anim_scene_entity(iLocal_50, func_146(iVar897, iVar898), iLocal_195, 0);
				}
				iLocal_197 = _0xaaacb74442c1bed3(iLocal_195);
			}
		}
		iLocal_194 = func_147(iLocal_214, iVar897, iVar898);
		if (iLocal_194 == 0)
		{
		}
		else
		{
			iLocal_196 = func_145(iLocal_194, 0);
			if (does_entity_exist(iLocal_196))
			{
				func_109(iLocal_194, 0, 0f, 0, 0, 0f, 1, 0);
				if (func_7() || iVar897 == 10)
				{
					set_anim_scene_entity(iLocal_50, func_148(iLocal_214, iVar897, iVar898), iLocal_196, 0);
				}
				iLocal_198 = _0xaaacb74442c1bed3(iLocal_196);
			}
		}
	}
	if (func_7())
	{
		if (func_90(&(uLocal_178[1]), 0, 1))
		{
			set_anim_scene_entity(iLocal_50, func_149(), &(uLocal_178[1]), 0);
		}
	}
	switch (iLocal_214)
	{
		case 4:
			if (_get_anim_scene_entity_matrix(iLocal_50, func_143(0), &Var5, false, 0, 2))
			{
				func_140(&(uLocal_178[0]), Var5, Var5.f_3.f_2, 2, 1073741824);
			}
			if (_get_anim_scene_entity_matrix(iLocal_50, func_149(), &Var17, false, 0, 2))
			{
				func_140(&(uLocal_178[1]), Var17, Var17.f_3.f_2, 2, 1073741824);
			}
			_0xdf7b5144e25cd3fe(iLocal_50, func_110(1));
			_0xdf7b5144e25cd3fe(iLocal_50, func_110(2));
			_0xdf7b5144e25cd3fe(iLocal_50, func_110(3));
			_0xdf7b5144e25cd3fe(iLocal_50, func_110(4));
			break;
		default:
			start_anim_scene(iLocal_50);
			set_anim_scene_bool(iLocal_50, "FLAG_LOOP", false, false);
			_0xdf7b5144e25cd3fe(iLocal_50, func_111(iLocal_214));
			_0xdf7b5144e25cd3fe(iLocal_50, func_150(iLocal_214));
			iLocal_205 = _0x0eb78c2b156635b1(665633627, 0f, 0f, 0f, 0f, 0f, 0f, 2f, 2f, 2f);
			_0x7c00cfc48a782dc0(iLocal_205, &(uLocal_178[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			iLocal_206 = _0x0eb78c2b156635b1(665633627, 0f, 0f, 0f, 0f, 0f, 0f, 2f, 2f, 2f);
			_0x7c00cfc48a782dc0(iLocal_206, &(uLocal_178[1]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			break;
	}
}

void func_38()
{
	if (func_52(268435456))
	{
		return;
	}
	if (!func_7())
	{
		return;
	}
	if (is_entity_dead(iLocal_185))
	{
		return;
	}
	if (!_does_scenario_point_exist(iLocal_200))
	{
		vVar0 = { func_151(iVar897) };
		iLocal_200 = _find_closest_active_scenario_point_of_type(vVar0, -1805387726, 1f, 1, false);
	}
	if (_does_scenario_point_exist(iLocal_200))
	{
		_task_use_scenario_point(iLocal_185, iLocal_200, 0, 0, false, false, 0, false, -1f, false);
		func_152(268435456);
	}
}

void func_39()
{
	iVar2 = func_1(3, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!does_entity_exist(&(uLocal_178[iVar0])))
		{
		}
		else if (is_entity_dead(&(uLocal_178[iVar0])))
		{
		}
		else
		{
			iVar1 = iVar0;
			switch (iVar1)
			{
				case 0:
					func_153(uLocal_178[iVar1], Local_623[iVar1], 15f, &Local_708, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432);
					func_154(Local_623[iVar1], &Local_708, &iLocal_883, iLocal_214, iVar897);
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						func_153(uLocal_178[iVar1], Local_623[iVar1], 15f, &Local_778, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432);
						func_155(Local_623[iVar1], &Local_778, &iLocal_884, iVar897);
						func_156(&(uLocal_178[iVar1]), 749790628);
					}
					else
					{
						func_153(uLocal_178[iVar1], Local_623[iVar1], 15f, &Local_743, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432);
						func_157(Local_623[iVar1], &Local_743, &iLocal_883, iLocal_214, iVar897);
					}
					break;
				case 2:
					func_153(uLocal_178[iVar1], Local_623[iVar1], 15f, &Local_813, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432);
					func_158(Local_623[iVar1], &Local_813);
					break;
				case 3:
					func_153(uLocal_178[iVar1], Local_623[iVar1], 15f, &Local_848, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432);
					func_159(Local_623[iVar1], &Local_848);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_40(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_41(var uParam0)
{
	return func_160(*uParam0, 1);
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1 || !func_41(uParam0))
	{
		func_161(uParam0);
	}
}

bool func_43(var uParam0, float fParam1)
{
	if (!func_41(uParam0))
	{
		return false;
	}
	if (func_162(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_44(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_163())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (is_player_riding_train(player_id()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_164(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_102(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_102(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_102(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (does_entity_exist(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !is_entity_dead(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_165(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_165(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!is_entity_dead(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

bool func_45(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_166(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_167(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_168(&(uParam0->f_5));
			}
			func_169(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_170(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_171(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_172(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_173(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_174(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_102(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_175(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (_is_ped_carrying(Global_35))
			{
				iVar1 = _get_first_entity_ped_is_carrying(Global_35);
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						iVar2 = get_ped_index_from_entity_index(iVar1);
						if (does_entity_exist(iVar2))
						{
							if (_is_ped_hogtied(iVar2) || ((bParam5 || is_ped_human(iVar2)) && is_entity_dead(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_46(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_176(bParam1, bParam2, bParam3);
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

void func_47()
{
	func_177(0);
	if ((func_90(&(uLocal_178[0]), 0, 1) && get_script_task_status(&(uLocal_178[0]), 1469008894, true) == 1) || (func_90(&(uLocal_178[1]), 0, 1) && get_script_task_status(&(uLocal_178[1]), 1469008894, true) == 1))
	{
		func_178(iLocal_183, iLocal_184);
	}
	if (func_90(&(uLocal_178[1]), 0, 0))
	{
		switch (iLocal_214)
		{
			case 3:
				if (func_179(iLocal_48, 16))
				{
					func_180(&(uLocal_178[1]), 1, 0);
					set_ped_config_flag(&(uLocal_178[1]), 243, true);
				}
				break;
		}
	}
}

void func_48(int iParam0)
{
	iLocal_562 = iParam0;
}

bool func_49()
{
	if (!func_52(4096))
	{
		if (func_181(&(uLocal_178[0]), 1, 1, 0, 0, 0))
		{
			if (!func_41(&uLocal_168))
			{
				func_42(&uLocal_168, 0);
			}
			else if (func_43(&uLocal_168, 1.5f))
			{
				func_152(4096);
				func_40(&uLocal_168);
			}
		}
	}
	if (func_182(&(uLocal_178[0]), 0, &(Local_344.f_5), &uLocal_592, 0, 0) || func_52(4096))
	{
		switch (iVar590)
		{
			case 2:
			case 4:
			case 8:
			case 256:
				func_152(16384);
				func_152(1);
				if (!func_52(8192))
				{
					func_183();
				}
				return true;
			default:
				break;
		}
		if (func_52(4096))
		{
			func_152(16384);
			func_152(1);
			if (!func_52(8192))
			{
				func_183();
			}
		}
		return true;
	}
	else if (iVar590 > 0)
	{
	}
	return false;
}

bool func_50()
{
	iVar0 = 1;
	if (iLocal_214 == 3)
	{
		iVar0 = 3;
	}
	if (func_184(&uLocal_178, &(Local_344.f_5), &uLocal_592, &iLocal_51, 0, iVar0, 1))
	{
		iLocal_212 = iLocal_51;
		if (!func_90(&(uLocal_178[iLocal_212]), 8, 1))
		{
			return false;
		}
		if (iVar590 == 2048 && iVar560 != 5)
		{
			if (!func_179(iLocal_48, 32768))
			{
				func_152(32768);
				if (iLocal_214 == 2 && func_185(iLocal_50))
				{
					if (iLocal_212 != 0)
					{
						func_152(524288);
					}
					if (iLocal_212 != 1)
					{
						func_152(1048576);
					}
					return true;
				}
				return true;
			}
		}
		else
		{
			switch (iVar590)
			{
				case 2048:
					switch (iLocal_212)
					{
						case 0:
							if (func_186(8))
							{
								return false;
							}
							break;
						case 1:
							if (func_186(4))
							{
								return false;
							}
							break;
					}
					break;
				case 2:
					return true;
				case 4:
				case 8:
				case 16:
				case 256:
					func_152(16384);
					break;
			}
			switch (iLocal_212)
			{
				case 2:
				case 3:
					func_152(2048);
					break;
			}
			if (((iVar560 != 5 && iVar560 != 6) && iVar560 != 14) && iVar560 != 16)
			{
				func_187();
			}
			if (iLocal_214 == 2 && func_185(iLocal_50))
			{
				if (iLocal_212 != 0)
				{
					func_152(524288);
				}
				if (iLocal_212 != 1)
				{
					func_152(1048576);
				}
			}
			if (iVar590 != 16384 && iVar590 != 8192)
			{
				return true;
			}
		}
	}
	return false;
}

void func_51()
{
	if (!func_52(16384) && func_90(&(uLocal_178[iLocal_212]), 0, 1))
	{
		if (iLocal_212 == 0)
		{
			func_188(&(uLocal_178[iLocal_212]), Global_35, 4194304, 1, -1065353216);
		}
		else if (iLocal_212 == 1)
		{
			if (iLocal_214 == 1 && iVar897 == 9)
			{
				func_189(&(uLocal_178[iLocal_212]), Global_35, "CHALLENGE_THREATEN", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_188(&(uLocal_178[iLocal_212]), Global_35, 8388608, 1, -1065353216);
			}
		}
		else if (iLocal_212 == 2)
		{
			func_188(&(uLocal_178[iLocal_212]), Global_35, 16777216, 1, -1065353216);
		}
		else if (iLocal_212 == 3)
		{
			func_188(&(uLocal_178[iLocal_212]), Global_35, 33554432, 1, -1065353216);
		}
	}
}

bool func_52(int iParam0)
{
	return func_179(iLocal_48, iParam0);
}

void func_53(int iParam0, bool bParam1)
{
	if (!func_90(&(uLocal_178[iParam0]), 0, 0))
	{
		return;
	}
	Local_344.f_46 = 1;
	func_190(iParam0);
	if (bParam1)
	{
		Local_567.f_7 = 2000;
		_0x66f9eb44342bb4c5(&(uLocal_178[iLocal_212]), &Local_567);
	}
	if (iParam0 == 0)
	{
		if (!func_186(16))
		{
			func_188(&(uLocal_178[iLocal_212]), Global_35, 4194304, 1, -1065353216);
		}
	}
	else if (iLocal_214 == 1 && iVar895 == 9)
	{
		func_189(&(uLocal_178[iLocal_212]), Global_35, "CHALLENGE_THREATEN", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	else
	{
		func_188(&(uLocal_178[iLocal_212]), Global_35, 8388608, 1, -1065353216);
	}
}

void func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_179(iLocal_48, 1048576))
			{
				func_191(&(uLocal_178[2]), &(uLocal_178[3]), 0, 0);
			}
			else
			{
				func_191(&(uLocal_178[1]), &(uLocal_178[2]), &(uLocal_178[3]), 0);
			}
			break;
		case 1:
			if (func_179(iLocal_48, 524288))
			{
				func_191(&(uLocal_178[2]), &(uLocal_178[3]), 0, 0);
			}
			else
			{
				func_191(&(uLocal_178[0]), &(uLocal_178[2]), &(uLocal_178[3]), 0);
			}
			break;
		case 2:
		case 3:
			func_191(&(uLocal_178[0]), &(uLocal_178[1]), &(uLocal_178[2]), &(uLocal_178[3]));
			break;
	}
}

bool func_55()
{
	if (iVar560 > 1)
	{
		if (iVar560 < 12)
		{
			func_38();
		}
		func_192();
		func_193();
		func_194();
		func_195();
		func_196();
		func_197();
		func_198();
	}
	if (bLocal_207)
	{
		func_86();
		func_87();
	}
	if (iVar560 > 3)
	{
		if (iLocal_214 != 3 && iLocal_214 != 4)
		{
			func_199();
		}
		if (iLocal_214 == 4 && iVar560 >= 9)
		{
			if (func_200(&uLocal_174, 1f))
			{
				if (func_6() == 4)
				{
					func_189(&(uLocal_178[0]), 0, "RE_STF_BLW_V6_PATHETIC", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_189(&(uLocal_178[0]), 0, "RE_STF_VAL_V6_PATHETIC", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
		}
	}
	if (func_179(iLocal_48, 16) && get_number_of_fires_in_range(Local_64.f_3, 3f) > 0)
	{
		stop_fire_in_range(Local_64.f_3, 3f);
	}
	switch (iVar560)
	{
		case 0:
			switch (iLocal_214)
			{
				case 4:
					if (func_28(iLocal_50))
					{
						func_156(&(uLocal_178[1]), 749790628);
						set_entity_visible(&(uLocal_178[1]), false);
						set_entity_visible(&(uLocal_178[0]), false);
						func_48(8);
					}
					break;
				default:
					if (func_201(iLocal_50, func_150(iLocal_214)))
					{
						func_48(1);
					}
					break;
			}
			break;
		case 2:
			func_202();
			func_203();
			func_204();
			func_205();
			func_206();
			if (func_207())
			{
				func_208();
				switch (iLocal_214)
				{
					case 0:
					case 1:
					case 2:
						func_209(&(Local_344.f_5), 1);
						func_48(3);
						break;
					case 3:
						set_entity_can_be_damaged(&(uLocal_178[0]), true);
						func_210(0, 0, 0, 0);
						func_209(&(Local_344.f_5), 1);
						func_211();
						func_74(iLocal_205);
						func_74(iLocal_206);
						func_48(20);
						break;
				}
			}
			break;
		case 3:
			func_212(0);
			func_213();
			if (iVar563 == 10 || func_214())
			{
				func_74(iLocal_205);
				func_74(iLocal_206);
				set_combat_float(&(uLocal_178[0]), 12, 0f);
				func_48(4);
			}
			else if ((!func_215(0) && !func_215(1)) && func_179(iLocal_48, 32768))
			{
				func_47();
				func_74(iLocal_205);
				func_74(iLocal_206);
				if (iLocal_212 == 0)
				{
					func_53(iLocal_212, 0);
				}
				else if (iLocal_212 == 1)
				{
					func_54(iLocal_212);
				}
				func_48(14);
			}
			break;
		case 4:
			if (func_214())
			{
				func_212(0);
				func_74(Local_64.f_25);
				func_8(&Local_344, 1);
				if (!is_entity_dead(&(uLocal_178[0])) && !func_216(&(uLocal_178[0]), 1313215416))
				{
					func_161(&uLocal_138);
					set_ped_config_flag(&(uLocal_178[1]), 243, true);
					func_64(&(Local_344.f_5), 1);
					func_74(iLocal_205);
					func_74(iLocal_206);
					func_48(5);
				}
				else if (!is_entity_dead(&(uLocal_178[1])) && !func_216(&(uLocal_178[1]), 1313215416))
				{
					if (func_162(&uLocal_159) > 3f)
					{
						func_40(&uLocal_159);
						func_177(0);
						if (iLocal_214 == 2)
						{
							func_189(&(uLocal_178[1]), &(uLocal_178[1]), func_217(iVar897, iLocal_214, 1024), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_189(&(uLocal_178[1]), &(uLocal_178[1]), func_217(iVar897, iLocal_214, 16), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_218();
						set_ped_config_flag(&(uLocal_178[0]), 243, true);
						func_219(iVar897, iLocal_214, Local_623[iLocal_213], &Local_743, iLocal_211);
						func_48(20);
					}
					else if (func_162(&uLocal_159) > 1f && func_220(&(uLocal_178[1]), 1, 1) < 1.5f)
					{
						iLocal_212 = 1;
						func_40(&uLocal_159);
						func_177(0);
						if (iLocal_214 == 1 && iVar897 == 9)
						{
							func_189(&(uLocal_178[iLocal_212]), Global_35, "CHALLENGE_THREATEN", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_189(&(uLocal_178[iLocal_212]), Global_35, func_217(iVar897, iLocal_214, 8388608), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_53(1, 0);
						func_54(1);
						func_48(14);
					}
					else if (!func_41(&uLocal_159))
					{
						func_161(&uLocal_159);
					}
				}
				else
				{
					func_48(22);
				}
			}
			break;
		case 5:
			func_202();
			func_212(0);
			if (func_162(&uLocal_138) > 1f)
			{
				func_221();
				if (func_162(&uLocal_141) > 10f)
				{
					func_222();
					func_152(131072);
					if (func_90(&(uLocal_178[0]), 0, 1))
					{
						set_ped_config_flag(&(uLocal_178[0]), 6, false);
					}
					func_223(iVar897, iLocal_214, Local_623[0], &Local_708);
					iLocal_23 = 4;
					func_48(7);
				}
				else if (!func_41(&uLocal_141))
				{
					func_161(&uLocal_141);
				}
				if (func_41(&uLocal_153))
				{
					if (func_162(&uLocal_153) > 2f && func_224(-6f, 1, 0, 0))
					{
						if (func_225(Global_35, &(uLocal_178[0])) < 2.5f)
						{
							iLocal_212 = 0;
							func_226();
							func_177(0);
							func_227(4194304);
							func_189(&(uLocal_178[iLocal_212]), Global_35, func_217(iVar897, iLocal_214, 4194304), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							if (func_90(&(uLocal_178[0]), 0, 1))
							{
								set_ped_config_flag(&(uLocal_178[0]), 6, true);
							}
							bLocal_208 = true;
							iLocal_23 = 3;
							func_48(6);
						}
						else
						{
							func_161(&uLocal_153);
						}
					}
				}
				else if (func_225(Global_35, &(uLocal_178[0])) < 2.5f)
				{
					func_161(&uLocal_153);
				}
			}
			break;
		case 6:
			func_221();
			if (func_90(&(uLocal_178[0]), 0, 1))
			{
				task_react(&(uLocal_178[0]), Global_35, Global_36, "Default_Angry", 0.5f, 0, 4);
				_0x66f9eb44342bb4c5(&(uLocal_178[0]), &Local_567);
			}
			func_228();
			if (func_224(0, 1, Global_35, 1) && !func_186(16))
			{
				func_188(&(uLocal_178[iLocal_212]), Global_35, 4194304, 1, -1065353216);
			}
			if (func_224(0, 1, &(uLocal_178[0]), 1) && func_224(0, 1, Global_35, 1))
			{
				func_53(0, 0);
				func_54(0);
				func_48(14);
			}
			break;
		case 7:
			bLocal_207 = true;
			func_221();
			if (func_90(&(uLocal_178[0]), 0, 1))
			{
				_0x66f9eb44342bb4c5(&(uLocal_178[0]), &Local_567);
				set_ped_reset_flag(&(uLocal_178[iLocal_213]), 94, true);
				_0xc6981aff6d2a71c2(&(uLocal_178[iLocal_213]));
			}
			if (func_224(-2f, 1, 0, 0))
			{
				func_222();
				func_48(20);
			}
			break;
		case 8:
			if (func_229())
			{
				iLocal_566 = func_230(iVar897, &iLocal_50);
				set_entity_visible(&(uLocal_178[1]), true);
				set_entity_visible(&(uLocal_178[0]), true);
				start_anim_scene(iLocal_50);
				func_48(9);
				_0x89f5e7adecccb49c(&(uLocal_178[1]), "injured_general");
			}
			else if (is_entity_in_volume(Global_35, Local_64.f_27, true, 0))
			{
				func_152(268435456);
				func_48(22);
			}
			break;
		case 9:
			func_64(&(Local_344.f_5), 1);
			func_231(&(Local_344.f_5), 1);
			if ((!func_52(8192) && (func_52(1) && func_162(&uLocal_165) > 2f)) && func_232(&(uLocal_178[0])))
			{
				_0x66f9eb44342bb4c5(&(uLocal_178[0]), &Local_567);
				func_152(2097152);
				func_210(iLocal_213, 0, 0, 1);
				func_189(&(uLocal_178[0]), Global_35, func_233(iVar897, iLocal_214, 128), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			func_234(&iLocal_199, iVar897, iVar898);
			func_204();
			func_202();
			func_235();
			func_236(0);
			if (!func_185(iLocal_50) || !func_237(&(uLocal_178[1]), iLocal_50))
			{
				func_238();
				func_239(&uLocal_187);
				func_212(0);
				func_152(4194304);
				func_48(12);
			}
			else if (func_52(2097152))
			{
				func_239(&uLocal_187);
				func_212(0);
				func_223(iVar897, iLocal_214, Local_623[0], &Local_708);
				func_210(0, 0, 0, 1);
				func_48(11);
			}
			if (_get_anim_scene_time(iLocal_50) >= 0.62f && _0x3ab6c7b0bb0df4b1(iLocal_192, iLocal_50))
			{
				func_236(1);
			}
			break;
		case 10:
			if (func_52(16384))
			{
				func_239(&uLocal_187);
				_0x463803429297117c(&(uLocal_178[iLocal_213]), Global_36, 1, 0);
				task_smart_flee_ped(&(uLocal_178[iLocal_213]), Global_35, -1f, -1, 32768, 1f, 0);
				func_189(&(uLocal_178[iLocal_212]), Global_35, func_240(iLocal_212, iVar897, iLocal_214), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (func_179(iLocal_48, 4194304))
				{
					func_241(0, 0);
					func_48(22);
				}
				else
				{
					func_152(2097152);
					func_48(11);
				}
			}
			else
			{
				func_188(&(uLocal_178[0]), Global_35, 2048, 1, -1065353216);
				func_236(1);
				func_242(1);
				func_48(16);
			}
			break;
		case 11:
			func_243();
			if (has_anim_event_fired(&(uLocal_178[1]), 329510876))
			{
				func_238();
			}
			if ((!func_185(iLocal_50) || !func_237(&(uLocal_178[1]), iLocal_50)) || func_244(iLocal_50, &(uLocal_178[1])))
			{
				if (func_220(&(uLocal_178[1]), 1, 1) > 20f || func_245(Global_35, iLocal_201, 1, 0))
				{
					func_241(0, 0);
					bLocal_44 = true;
					func_48(20);
				}
				else
				{
					func_152(4194304);
					func_238();
					func_241(1, 0);
					func_48(12);
				}
			}
			break;
		case 12:
			if ((!is_entity_playing_anim(&(uLocal_178[1]), &(Local_546[3]), Local_546[3]->f_1, 1) && !func_237(&(uLocal_178[1]), iLocal_50)) && !func_216(&(uLocal_178[1]), 2121492476))
			{
				if (((func_52(16777216) || func_52(33554432)) || func_245(Global_35, iLocal_201, 1, 0)) || func_246())
				{
					bLocal_44 = true;
					if (!func_247(&(uLocal_178[1]), iLocal_185, 0))
					{
						func_241(0, 0);
					}
					func_48(21);
				}
				else if (!func_248(&(uLocal_178[1]), Global_35, 0.6f))
				{
					if (!func_216(&(uLocal_178[1]), -875674219) && !is_entity_dead(&(uLocal_178[0])))
					{
						task_turn_ped_to_face_entity(&(uLocal_178[1]), Global_35, 0, -1082130432, -1082130432, -1082130432);
					}
				}
			}
			break;
		case 1:
			if (func_229() && func_201(iLocal_50, func_150(iLocal_214)))
			{
				_set_anim_scene_playback_list_bool(iLocal_50, func_150(iLocal_214), true);
				func_48(2);
			}
			if (is_entity_in_volume(Global_35, Local_64.f_27, true, 0))
			{
				func_152(268435456);
				func_48(22);
			}
			break;
		case 14:
			if (!_0x75df9e73f2f005fd(&(uLocal_178[iLocal_212])))
			{
				set_entity_can_be_damaged(&(uLocal_178[iLocal_212]), true);
			}
			bLocal_207 = true;
			stop_ped_speaking(&(uLocal_178[iLocal_212]), true);
			func_228();
			if (func_179(iLocal_48, 524288) || func_179(iLocal_48, 1048576))
			{
				func_48(15);
			}
			else if (func_52(16384))
			{
				func_48(17);
			}
			else
			{
				func_48(16);
			}
			break;
		case 15:
			if (func_249())
			{
				if (func_52(16384))
				{
					func_48(17);
				}
				else
				{
					func_48(16);
				}
			}
			break;
		case 16:
			func_243();
			func_74(iLocal_205);
			func_74(iLocal_206);
			if (!_0x75df9e73f2f005fd(&(uLocal_178[iLocal_212])))
			{
				set_entity_can_be_damaged(&(uLocal_178[iLocal_212]), true);
			}
			if (!func_90(&(uLocal_178[iLocal_212]), 0, 1))
			{
				func_239(&uLocal_187);
				if (func_7())
				{
					if (func_179(iLocal_48, 4194304))
					{
						func_241(0, 0);
						func_48(22);
					}
					else
					{
						func_152(2097152);
						func_48(11);
					}
				}
				else
				{
					func_48(22);
				}
			}
			else
			{
				if (get_script_task_status(&(uLocal_178[iLocal_212]), 780511057, true) != 1 && get_script_task_status(&(uLocal_178[iLocal_212]), 780511057, true) != 0)
				{
					if ((iLocal_23 == 2 && func_250(32)) && !bLocal_40)
					{
						if ((get_game_timer() - iLocal_41) >= 2300)
						{
							func_190(iLocal_212);
							bLocal_40 = true;
						}
					}
					else
					{
						func_190(iLocal_212);
					}
				}
				if (func_220(&(uLocal_178[iLocal_212]), 1, 1) > 20f || func_182(&(uLocal_178[iLocal_212]), 0, &uLocal_594, &uLocal_593, 1, 0))
				{
					func_239(&uLocal_187);
					if (func_90(&(uLocal_178[iLocal_212]), 201, 1))
					{
						func_251(&(uLocal_178[iLocal_212]), 1, Global_35, 0);
						func_189(&(uLocal_178[iLocal_212]), Global_35, func_240(iLocal_212, iVar897, iLocal_214), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (func_7())
					{
						if (func_179(iLocal_48, 4194304))
						{
							func_241(0, 0);
							func_48(22);
						}
						else
						{
							func_152(2097152);
							func_48(11);
						}
					}
					else
					{
						func_48(22);
					}
				}
				if (_is_ped_getting_into_a_mount_seat(Global_35, true))
				{
					if (!func_41(&uLocal_156))
					{
						func_161(&uLocal_156);
					}
					else if (func_200(&uLocal_156, 9f))
					{
						func_239(&uLocal_187);
						if (func_7())
						{
							if (func_179(iLocal_48, 4194304))
							{
								func_241(0, 0);
								func_48(22);
							}
							else
							{
								func_152(2097152);
								func_48(11);
							}
						}
						else
						{
							func_48(22);
						}
					}
				}
				else if (func_41(&uLocal_156))
				{
					func_40(&uLocal_156);
				}
			}
			break;
		case 17:
			bLocal_207 = true;
			if (func_90(&(uLocal_178[iLocal_212]), 0, 1))
			{
				func_239(&uLocal_187);
				_0x2e1d6d87346bb7d2(&(uLocal_178[iLocal_212]), Global_35, 0, 0);
				if (func_216(&(uLocal_178[0]), -71340211) || func_216(&(uLocal_178[1]), -71340211))
				{
					func_80(&(uLocal_178[iLocal_183]));
					func_48(18);
				}
				else
				{
					func_177(0);
					func_188(&(uLocal_178[iLocal_212]), Global_35, func_252(iLocal_212), 1, -1065353216);
					open_sequence_task(&iVar0);
					task_react(0, Global_35, Global_36, "Default_Shocked", 1f, 0, 4);
					task_smart_flee_ped(0, Global_35, -1f, -1, 0, 3f, 0);
					func_253(&(uLocal_178[iLocal_212]), &iVar0, 0, 0, 1, 1);
					func_48(19);
				}
			}
			else
			{
				func_48(19);
			}
			break;
		case 18:
			bLocal_207 = true;
			if (func_90(&(uLocal_178[0]), 201, 1) && func_90(&(uLocal_178[1]), 201, 1))
			{
				if (!_0x3bdfcf25b58b0415(&(uLocal_178[0])) && !_0x3bdfcf25b58b0415(&(uLocal_178[1])))
				{
					func_177(0);
					func_188(&(uLocal_178[iLocal_212]), Global_35, func_252(iLocal_212), 1, -1065353216);
					func_251(&(uLocal_178[iLocal_212]), 1, Global_35, 0);
					func_48(22);
				}
			}
			else
			{
				func_48(19);
			}
			break;
		case 19:
			bLocal_207 = true;
			if (func_90(&(uLocal_178[iLocal_212]), 0, 1))
			{
				if (is_ped_injured(&(uLocal_178[iLocal_212])) || (func_216(&(uLocal_178[iLocal_212]), 242628503) && get_sequence_progress(&(uLocal_178[iLocal_212])) > 0))
				{
					func_251(&(uLocal_178[iLocal_212]), 1, Global_35, 0);
					func_48(22);
				}
			}
			else
			{
				func_48(22);
			}
			break;
		case 20:
			func_64(&(Local_344.f_5), 1);
			func_231(&(Local_344.f_5), 1);
			bLocal_207 = true;
			func_254();
			func_255();
			if (!func_52(1073741824))
			{
				if (func_90(&(uLocal_178[iLocal_213]), 0, 1))
				{
					if ((func_256(&(uLocal_178[iLocal_213]), 1) || func_257(&(uLocal_178[iLocal_213]), Local_64, 1) < 5f) || func_220(&(uLocal_178[iLocal_213]), 1, 1) > 35f)
					{
						func_239(&uLocal_187);
						if (_does_scenario_point_exist(iLocal_199) && !func_52(131072))
						{
							_0x24c82ef607105faa(&(uLocal_178[iLocal_213]), -920810745);
							if (iLocal_214 != 3)
							{
								set_ped_config_flag(&(uLocal_178[iLocal_213]), 168, true);
							}
							set_ped_config_flag(&(uLocal_178[iLocal_213]), 146, false);
							set_blocking_of_non_temporary_events(&(uLocal_178[iLocal_213]), false);
							func_48(21);
						}
						else
						{
							_0x24c82ef607105faa(&(uLocal_178[iLocal_213]), -920810745);
							func_258(&(uLocal_178[iLocal_213]), 2);
							func_259(&(uLocal_178[iLocal_213]), Local_64, 0);
							func_152(1073741824);
						}
					}
					else
					{
						set_ped_reset_flag(&(uLocal_178[iLocal_213]), 94, true);
						_0xc6981aff6d2a71c2(&(uLocal_178[iLocal_213]));
					}
				}
				else
				{
					func_152(1073741824);
				}
			}
			break;
		case 21:
			func_64(&(Local_344.f_5), 1);
			func_231(&(Local_344.f_5), 1);
			bLocal_207 = true;
			func_254();
			func_255();
			if (!func_52(1073741824))
			{
				if (func_90(&(uLocal_178[iLocal_213]), 0, 1))
				{
					if (_does_volume_exist(iLocal_201))
					{
						if (!is_entity_in_volume(Global_35, iLocal_201, true, 0))
						{
							if (func_41(&uLocal_162))
							{
								if (func_162(&uLocal_162) > 30f)
								{
									func_40(&uLocal_162);
									func_258(&(uLocal_178[iLocal_213]), 2);
									func_259(&(uLocal_178[iLocal_213]), Local_64, 0);
									func_152(1073741824);
								}
							}
							else
							{
								func_161(&uLocal_162);
							}
						}
					}
					else
					{
						func_36();
					}
					if (func_260(2))
					{
						func_152(1073741824);
					}
					else if (func_260(4))
					{
						task_smart_flee_ped(&(uLocal_178[iLocal_213]), Global_35, -1f, -1, 32768, 1f, 0);
						func_152(1073741824);
					}
					if (func_220(&(uLocal_178[iLocal_213]), 1, 1) > 35f)
					{
						func_258(&(uLocal_178[iLocal_213]), 2);
						func_259(&(uLocal_178[iLocal_213]), Local_64, 0);
						func_152(1073741824);
					}
				}
				else
				{
					func_152(1073741824);
				}
			}
			if (func_52(-2147483648) && func_52(1073741824))
			{
				func_48(22);
			}
			break;
		case 22:
			if (func_52(268435456))
			{
				return true;
			}
			else if (func_254())
			{
				Local_344.f_50 = 1;
				func_212(1);
				return true;
			}
			break;
	}
	return false;
}

void func_56()
{
	if ((func_186(2) || does_blip_exist(&(uLocal_187[0]))) || does_blip_exist(&(uLocal_187[1])))
	{
		return;
	}
	if (((func_52(16) || func_261(1)) || func_261(32)) || func_261(1))
	{
		func_262(2);
		if (iLocal_214 == 1 || iLocal_214 == 2)
		{
			func_263(&(uLocal_178[1]), uLocal_187[1], -89429847, 580546400, 0, "RE_INTER_STRANGER");
		}
		else
		{
			func_263(&(uLocal_178[0]), uLocal_187[0], -89429847, 580546400, 0, "RE_INTER_STRANGER");
		}
	}
}

void func_57(int iParam0)
{
	func_60(iParam0, 0);
	func_64(iParam0, 0);
	func_264(iParam0, 1);
	func_68(iParam0, 1);
	func_265(iParam0, 0);
	func_65(iParam0, 1);
	func_63(iParam0, 1, 1, 1);
}

var func_58(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_266(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_267(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_266(sVar0, iParam1, 0, 0, 1, 1);
}

int func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_268(iParam0) % iParam1);
	}
	return (func_269(iParam0) % iParam1);
}

void func_60(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(iParam0->f_1), 16384);
	}
	else
	{
		func_169(&(iParam0->f_1), 16384);
	}
}

void func_61(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(uParam0->f_1), 8);
	}
	else
	{
		func_169(&(uParam0->f_1), 8);
	}
}

void func_62(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_63(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_169(iParam0, 268435456);
	}
	else
	{
		func_270(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_169(iParam0, 1073741824);
	}
	else
	{
		func_270(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_169(iParam0, 536870912);
	}
	else
	{
		func_270(iParam0, 536870912);
	}
}

void func_64(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(iParam0->f_1), 2048);
	}
	else
	{
		func_169(&(iParam0->f_1), 2048);
	}
}

void func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 256);
	}
	else
	{
		func_270(iParam0, 256);
	}
}

void func_66(int iParam0, float fParam1, bool bParam2)
{
	iParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_271(iParam0, fParam1);
	}
}

void func_67(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(iParam0->f_1), 2);
	}
	else
	{
		func_169(&(iParam0->f_1), 2);
	}
}

void func_68(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 16);
	}
	else
	{
		func_270(iParam0, 67108864);
		func_270(iParam0, 16);
	}
}

void func_69(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 4);
	}
	else
	{
		func_270(iParam0, 4);
	}
}

void func_70(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 8);
	}
	else
	{
		func_270(iParam0, 8);
	}
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 32);
	}
	else
	{
		func_270(iParam0, 32);
	}
}

bool func_72(int iParam0)
{
	if (!func_272(iParam0))
	{
		return false;
	}
	if (!func_117(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_73(var uParam0, int iParam1, int* iParam2, var uParam3, int iParam4)
{
	if (is_entity_dead(*uParam0))
	{
		return;
	}
	open_sequence_task(&iVar0);
	_task_move_in_traffic_2(0, func_273(iParam4, 0), 1073741824, 1f, 0, 0);
	func_253(*uParam0, &iVar0, 0, 0, 1, 1);
	set_ped_keep_task(*uParam0, true);
	func_274(iParam2, uParam3);
	func_275(iParam1, 0, 0, 0, -1082130432, 1, 1, 0, 0, 0, 0);
}

void func_74(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_75(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_276(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_277(uParam0->f_3, 524288);
		}
	}
	if (func_90(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_90(uParam1[iVar0], 0, 0))
			{
				func_278(uParam1[iVar0], bVar3);
				if (func_279(uParam0, (*uParam1)[iVar0]))
				{
					func_280((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_90(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (get_ped_stealth_movement(uParam1[iVar0]))
						{
							set_ped_stealth_movement(uParam1[iVar0], 0, 0, 0);
						}
						else if (_get_ped_crouch_movement(uParam1[iVar0]))
						{
							_set_ped_crouch_movement(uParam1[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_282(uParam1[iVar0], 1073741824, func_281(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							task_wander_standard(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_283(uParam0);
	}
	func_284(uParam0);
	if (!uParam0->f_186)
	{
		func_166(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_285(uParam0->f_3, uParam0->f_185);
		_int_to_string(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_286(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_76(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_77(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_287((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_288(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_78()
{
	if (_0x91a5f9cbebb9d936(Local_64.f_16))
	{
		func_289(&(Local_64.f_15), &(Local_64.f_16));
	}
	if (_0x91a5f9cbebb9d936(Local_64.f_18))
	{
		func_289(&(Local_64.f_17), &(Local_64.f_18));
	}
	if (_0x91a5f9cbebb9d936(Local_64.f_20))
	{
		func_289(&(Local_64.f_19), &(Local_64.f_20));
	}
	if (_does_volume_exist(Local_64.f_23))
	{
		_0x2c87c3e1c7b96ee2(Local_64.f_23);
		func_74(Local_64.f_23);
		Local_64.f_23 = 0;
	}
	if (_does_volume_exist(Local_64.f_24))
	{
		_0x74c2b3dc0b294102(Local_64.f_24);
		func_74(Local_64.f_24);
		Local_64.f_24 = 0;
	}
	func_74(Local_64.f_25);
}

void func_79(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			_delete_anim_scene(iParam0);
		}
	}
}

void func_80(int iParam0)
{
	if (!func_90(iParam0, 0, 1))
	{
		return;
	}
	if (get_script_task_status(iParam0, -71340211, true) != 1)
	{
		return;
	}
	_0x8301d87b1b89e219(iParam0, 1665151756);
	_0x789dabd18e9024db(iParam0, 32768, 0);
}

void func_81(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_90(uParam0[iVar0], 0, 1))
		{
			set_blocking_of_non_temporary_events(uParam0[iVar0], false);
		}
		iVar0++;
	}
}

void func_82(var uParam0)
{
	if (*uParam0 != 0)
	{
		remove_shocking_event(*uParam0);
		*uParam0 = 0;
	}
}

void func_83(int iParam0)
{
	if (func_290(iParam0) && func_291())
	{
		remove_door_from_system(iParam0);
	}
}

void func_84()
{
	if (!_does_volume_exist(iLocal_202))
	{
		return;
	}
	_0x74c2b3dc0b294102(iLocal_202);
	_0xa1cfb35069d23c23(iLocal_202);
	if (_0x91a5f9cbebb9d936(uLocal_203))
	{
		remove_scenario_blocking_area(uLocal_203, false);
	}
}

void func_85()
{
	if (_does_volume_exist(iLocal_202))
	{
		_delete_volume(iLocal_202);
		iLocal_202 = 0;
	}
}

void func_86()
{
	if (!_does_volume_exist(iLocal_204))
	{
		return;
	}
	_0x74c2b3dc0b294102(iLocal_204);
	_0xa1cfb35069d23c23(iLocal_204);
}

void func_87()
{
	if (!_does_volume_exist(iLocal_204))
	{
		return;
	}
	_delete_volume(iLocal_204);
	iLocal_204 = 0;
}

void func_88(bool bParam0)
{
	if (!does_entity_exist(iLocal_195) || !func_237(iLocal_195, iLocal_50))
	{
		return;
	}
	if ((((bParam0 || !func_90(&(uLocal_178[0]), 0, 1)) || !func_237(&(uLocal_178[0]), iLocal_50)) || has_entity_been_damaged_by_any_ped(iLocal_195)) || func_220(iLocal_195, 1, 1) < 2f)
	{
		remove_anim_scene_entity(iLocal_50, func_146(iVar896, iVar897), iLocal_195);
	}
}

void func_89(bool bParam0)
{
	if (!does_entity_exist(iLocal_196) || !func_237(iLocal_196, iLocal_50))
	{
		return;
	}
	if ((((bParam0 || !func_90(&(uLocal_178[0]), 0, 1)) || !func_237(&(uLocal_178[0]), iLocal_50)) || has_entity_been_damaged_by_any_ped(iLocal_196)) || func_220(iLocal_196, 1, 1) < 2f)
	{
		remove_anim_scene_entity(iLocal_50, func_148(iLocal_214, iVar896, iVar897), iLocal_196);
	}
}

bool func_90(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_292(iParam0, iParam1);
}

bool func_91(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_293(iVar0))
	{
		return false;
	}
	if (func_294(iVar0, 1) || func_294(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_92(var uParam0)
{
	iVar0 = func_295(uParam0->f_3);
	iVar1 = func_296(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	_0xed9582b3da8f02b4(iVar0);
	if (_0x5c16855277819bbf() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_93(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 10:
			(*uParam0)[0]->f_1 = 137638734;
			(*uParam0)[0] = 22;
			func_297(&((*uParam0)[0]->f_22));
			(*uParam0)[1]->f_1 = 137638734;
			(*uParam0)[1] = 22;
			func_297(&((*uParam0)[1]->f_22));
			switch (iParam1)
			{
				case 0:
					(*uParam0)[0]->f_3 = 672405718;
					(*uParam0)[1]->f_3 = 402293651;
					break;
				case 1:
					(*uParam0)[0]->f_3 = 935704633;
					(*uParam0)[1]->f_3 = 1236887312;
					break;
				case 3:
					(*uParam0)[0]->f_3 = 1418490310;
					(*uParam0)[1]->f_3 = 1655707901;
					(*uParam0)[2]->f_1 = 137638734;
					(*uParam0)[2] = 4;
					(*uParam0)[2]->f_3 = 1245509546;
					(*uParam0)[3]->f_1 = 137638734;
					(*uParam0)[3] = 4;
					(*uParam0)[3]->f_3 = 399381197;
					break;
				default:
					(*uParam0)[0]->f_3 = 672405718;
					(*uParam0)[1]->f_3 = 402293651;
					break;
			}
			break;
		case 4:
			(*uParam0)[0]->f_1 = 137638734;
			(*uParam0)[0] = 22;
			(*uParam0)[0]->f_3 = 903791949;
			func_297(&((*uParam0)[0]->f_22));
			break;
		default:
			(*uParam0)[0]->f_1 = 137638734;
			(*uParam0)[0] = 22;
			func_297(&((*uParam0)[0]->f_22));
			if (iParam1 != 4)
			{
				(*uParam0)[1]->f_1 = 137638734;
				(*uParam0)[1] = 22;
				func_297(&((*uParam0)[1]->f_22));
			}
			if (iParam1 == 3 && iParam3 == 0)
			{
				(*uParam0)[2]->f_1 = 137638734;
				(*uParam0)[2] = 4;
				(*uParam0)[2]->f_3 = 1841741509;
				(*uParam0)[3]->f_1 = 137638734;
				(*uParam0)[3] = 4;
				(*uParam0)[3]->f_3 = 961762775;
			}
			switch (iParam1)
			{
				case 0:
					(*uParam0)[0]->f_3 = 1937649573;
					(*uParam0)[1]->f_3 = 344292521;
					break;
				case 1:
					(*uParam0)[0]->f_3 = 2093761089;
					(*uParam0)[1]->f_3 = -1893568031;
					break;
				case 2:
					(*uParam0)[0]->f_3 = -2094870798;
					(*uParam0)[1]->f_3 = -1415435548;
					break;
				case 3:
					(*uParam0)[0]->f_3 = -1922964624;
					(*uParam0)[1]->f_3 = -1654288789;
					break;
				case 4:
					(*uParam0)[0]->f_3 = 903791949;
					break;
				default:
					(*uParam0)[0]->f_3 = 1937649573;
					(*uParam0)[1]->f_3 = 344292521;
					break;
			}
			break;
	}
}

void func_94(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_298(&((*uParam0)[iVar0]->f_1));
		func_298(&((*uParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_95(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			(*uParam1)[0] = "script_re@street_fight@v1";
			(*uParam1)[0]->f_1 = "challenge_enter_attacker";
			func_299(uParam1[0], uParam2);
			(*uParam1)[1] = "script_re@street_fight@v1";
			(*uParam1)[1]->f_1 = "challenge_loop_attacker";
			func_299(uParam1[1], uParam2);
			(*uParam1)[2] = "script_re@street_fight@v1";
			(*uParam1)[2]->f_1 = "challenge_exit_attacker";
			func_299(uParam1[2], uParam2);
			break;
		case 4:
			(*uParam1)[3] = "script_re@street_fight@uncle_fight";
			(*uParam1)[3]->f_1 = "UNCLE_STAND_UP_IF_PLAYER_SHOOTS_MAN";
			func_299(uParam1[3], uParam2);
			break;
	}
	_0x03ddbf2d73799f9e("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE");
	_0x03ddbf2d73799f9e("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED");
	_0x03ddbf2d73799f9e("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER");
	_0x03ddbf2d73799f9e("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM");
}

void func_96(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = Global_35;
	uParam0->f_8 = 4;
	uParam0->f_19 = 4;
	uParam0->f_21 = 4;
	uParam0->f_17 = 4;
	uParam0->f_18 = 4;
	uParam0->f_7 = 0;
}

bool func_97(var uParam0, var uParam1)
{
	return true;
}

bool func_98(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_300((*uParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_99(var uParam0)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!is_string_null_or_empty((*uParam0)[iVar1]))
		{
			if (!has_anim_dict_loaded((*uParam0)[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

int func_100(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_301(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_302(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_170(iParam0, 128))
			{
				if (!func_303(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_304(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_305(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_126(*uParam1))
				{
					return func_306(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_307(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_302(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_308(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_309(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_310(vdist(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_170(iParam0, 128))
			{
				if (!func_311(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_306(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_304(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_308(uParam1))
					{
						return func_306(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_312(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_302(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_306(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_58("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_58("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_101(var uParam0, int iParam1)
{
	if (func_102(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_314(iParam1, func_313(uParam0), &(uParam0->f_172)))
		{
			if (func_90(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_102(int iParam0, int iParam1)
{
	if (!func_315(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_103(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_316(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_102(uParam0->f_3, 1) && !func_102(uParam0->f_3, 32))
	{
		func_316(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_102(uParam0->f_3, 2) && !func_102(uParam0->f_3, 32))
	{
		func_316(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_317(uParam0->f_171, 1);
	}
	if (func_102(uParam0->f_3, 1))
	{
		func_316(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_318(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_104(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

int func_105(int iParam0, int iParam1)
{
	iVar0 = func_319(iParam0, iParam1);
	iVar1 = func_320(111, iVar0);
	return iVar1;
}

bool func_106()
{
	if (func_321() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_107(int iParam0)
{
	if (func_321() != -1)
	{
		return false;
	}
	if (!func_322(iParam0))
	{
		return false;
	}
	return func_323((*Global_1347702)[iParam0]->f_15, 1);
}

void func_108(int iParam0, int iParam1, bool bParam2)
{
	func_324(iParam0, 0, 0);
	if (func_290(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_109(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_324(iParam0, 0, 0);
	if (func_290(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_325(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_326(iParam0, 1);
			}
			else
			{
				func_327(iParam0, 1);
			}
		}
		else
		{
			func_328(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_329())
	{
	}
	else if (network_is_in_session())
	{
	}
}

char* func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_CALLING_ARTHUR_FRONT";
		case 1:
			return "PL_CALLING_ARTHUR_LEFT";
		case 2:
			return "PL_CALLING_ARTHUR_RIGHT";
		case 3:
			return "PL_CONFRONTATION";
		case 4:
			return "PL_STAND_UP";
		default:
			break;
	}
	return "INVALID_PLAY_LIST";
}

char* func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "pblIntro";
		default:
			break;
	}
	return "pblIntro";
	return "NO VALID PLAYBACK LIST FOUND";
}

void func_112(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_113(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

Vector3 func_114(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -307.208f, 796.927f, 118.065f;
						case 1:
							return -307.208f, 796.927f, 118.065f;
						case 2:
							return -304.833f, 796.49f, 118.065f;
						case 3:
							return -304.833f, 796.49f, 118.065f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -245.201f, -245.201f, 117.446f;
						case 1:
							return -245.201f, -245.201f, 117.446f;
						case 4:
							return -245.201f, -245.201f, 117.446f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return 2953.273f, 523.561f, 45.303f;
				case 1:
					return 2953.273f, 523.561f, 45.303f;
				case 3:
					return 2953.273f, 525.435f, 45.303f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return -810.336f, -1329.165f, 44.843f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_115(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 9.759f;
						case 1:
							return 0f, 0f, 9.759f;
						case 2:
							return 0f, 0f, 9.759f;
						case 3:
							return 0f, 0f, 9.759f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 18.966f;
						case 1:
							return 0f, 0f, 18.966f;
						case 4:
							return 0f, 0f, 18.966f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_116(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 5.994f, 5.908f, 6.062f;
						case 1:
							return 5.994f, 5.908f, 6.062f;
						case 2:
							return 8.967f, 6.616f, 6.062f;
						case 3:
							return 8.967f, 6.616f, 6.062f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 4.154f, 4.109f, 4.846f;
						case 1:
							return 4.154f, 4.109f, 4.846f;
						case 4:
							return 4.154f, 4.109f, 4.846f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return 4.852f, 6.803f, 3.006f;
				case 1:
					return 4.852f, 6.803f, 3.006f;
				case 3:
					return 4.852f, 6.803f, 3.006f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 5f, 5f, 5f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_117(int iParam0)
{
	return func_330(iParam0, 16, 1);
}

bool func_118(int iParam0, int iParam1)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1) != 0;
}

bool func_119(int iParam0, int iParam1, bool bParam2)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	if (func_118(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_292(iParam1, iVar0))
	{
		return false;
	}
	_set_ped_body_component(iParam1, func_332(iParam0));
	_update_ped_variation(iParam1, false, true, true, true, false);
	func_333(iParam0, 256, 1);
	return true;
}

int func_120(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_272(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_334(iParam0, 2, 1))
			{
				func_335(iParam0, 2, 1);
			}
			if (func_330(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_336(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_275(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_292(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_292(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_337(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_336(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_338(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_336(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_338(iParam0, 1);
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
			if (!func_334(iParam0, 44, 0))
			{
				func_336(iParam0, 44, 0);
			}
			if (func_339(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_338(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_335(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_340(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_341(iParam0, 0, 0, 1);
			}
			func_335(iParam0, 33, 1);
			func_335(iParam0, 34, 1);
			func_335(iParam0, 29, 1);
			if (!func_126(vVar0) && bParam7)
			{
				func_338(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_338(iParam0, 4);
			}
			else
			{
				func_338(iParam0, 5);
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
						func_337(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_140(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_338(iParam0, 4);
			}
			else
			{
				func_338(iParam0, 5);
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
				if (func_342(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_343(iParam0, iParam13, 0);
						func_344(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_334(iParam0, 25, 0))
						{
							func_335(iParam0, 25, 0);
						}
						func_336(iParam0, 66, 0);
						func_338(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_338(iParam0, 5);
				}
				func_336(iParam0, 28, 1);
			}
			else
			{
				func_338(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_338(iParam0, 6);
			}
			break;
		case 6:
			if (func_292(Global_1360165[iParam0], 0))
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
					func_345(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_346(Global_1360165[iParam0], 1);
				}
			}
			func_338(iParam0, 7);
		case 7:
			func_340(iParam0, bParam9, bParam15, 0);
			func_347(iParam0, 4, bParam11);
			func_348(iParam0);
			if (bParam20)
			{
				if (func_349(Global_1360165[iParam0]))
				{
				}
			}
			func_350(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_338(iParam0, 0);
			func_351(iParam0, 16, 1);
			func_335(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

int func_121(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	if (!func_331(iParam0))
	{
		return 0;
	}
	iVar1 = func_352(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iVar1) && _0xa0bc8faed8cfeb3c(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

bool func_122(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_353() || !func_354((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, fParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

var func_123(var uParam0, int iParam1)
{
	return _0xdf947fe0d551684e(uParam0, func_355(iParam1));
}

void func_124(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_125(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!_does_volume_exist(*uParam0))
	{
		if (bParam11)
		{
			if (is_string_null_or_empty(sParam15))
			{
				func_356(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_127(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (is_string_null_or_empty(sParam15))
		{
			func_357(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_358(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (_does_volume_exist(*uParam0))
	{
		_0x18262cafebb5fbe1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = _0x4c39c95ae5db1329(*uParam0, 0, 15);
		}
	}
}

bool func_126(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_127(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (func_359())
	{
		case 92:
			return iParam2;
		default:
			break;
	}
	switch (iParam0)
	{
		case 3:
			if (iParam1 > 0)
			{
				return iParam2;
			}
			else
			{
				return iParam3;
			}
			break;
		case 4:
			return 1;
		default:
			return iParam2;
	}
	return iParam3;
}

void func_129(int iParam0)
{
	func_360(iParam0, 2);
}

int func_130(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_361(1811977508, 1, 0))
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
			if (func_362(iVar25, 0) && func_363(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_131(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_364(iParam0);
		return func_365(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

bool func_132(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_366(*uParam0, -1725579161, 0))
	{
		return true;
	}
	return false;
}

void func_133(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	_update_ped_variation(iParam0, false, true, true, true, false);
}

bool func_134(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
			iVar1 = func_367(iParam1);
			if ((iVar0 && iVar1) != 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_135(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_367(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

void func_136(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(iParam0, 263, !bParam1);
		}
		set_ped_config_flag(iParam0, 138, bParam1);
		set_ped_config_flag(iParam0, 488, bParam1);
	}
}

int func_137(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_368(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

Vector3 func_138(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return -249.6991f, 767.2766f, 116.5169f;
		case 4:
			return -829.5267f, -1329.962f, 43.4293f;
		default:
			break;
	}
	return -249.6991f, 767.2766f, 116.5169f;
}

float func_139(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return -70.47f;
		case 4:
			return -113.4f;
		default:
			break;
	}
	return -70.47f;
}

void func_140(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_369(Global_35) && is_player_teleport_active())
	{
	}
	if (func_370(iParam0))
	{
		if (func_371(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_179(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_140(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_140(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_179(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_179(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_179(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_179(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_179(iParam5, 129))
	{
		if (func_179(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_179(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_179(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_179(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_370(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_179(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_179(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

int func_141(int iParam0)
{
	return Global_1935369->f_5[iParam0]->f_4;
}

void func_142(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam2)
			{
				case 3:
					*uParam3 = { 0f, 0f, 0f };
					*fParam4 = -87.349f;
					break;
				default:
					*bParam6 = 1;
					*uParam3 = { 2951.82f, 519.347f, 46.754f };
					*fParam4 = 90.57f;
					break;
			}
			break;
		case 4:
			*bParam5 = 1;
			*uParam3 = { -809.7952f, -1327.604f, 42.678f };
			*fParam4 = -179.81f;
			break;
		default:
			switch (iParam2)
			{
				case 0:
				case 1:
					switch (iParam1)
					{
						case 1:
							*uParam3 = { -0.9f, -1.08f, 0f };
							*fParam4 = 100f;
							break;
						default:
							*uParam3 = { 0.4705f, 1.527f, 0.0409f };
							*fParam4 = 189f;
							break;
					}
					break;
				case 2:
					*uParam3 = { 0.47f, 1.53f, 0.04f };
					*fParam4 = -170.07f;
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							*uParam3 = { 0.72f, 1.95f, 0.04f };
							*fParam4 = 180f;
							break;
						default:
							*uParam3 = { -2.91f, 6.59f, 0f };
							*fParam4 = 115.1f;
							break;
					}
					break;
				case 4:
					*bParam5 = 1;
					*uParam3 = { -243.7268f, 765.0442f, 117.1425f };
					*fParam4 = 110f;
					break;
			}
			break;
	}
}

char* func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pedThug";
		case 1:
			return "pedVictim";
		case 2:
			return "pedWatcherA";
		case 3:
			return "pedWatcherB";
		default:
			break;
	}
	return "INVALID PED ID";
}

int func_144(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return -908482159;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 10:
			return -1069042457;
		case 4:
			return 0;
	}
	return 0;
}

int func_145(int iParam0, int iParam1)
{
	func_324(iParam0, 0, 0);
	if (func_290(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

char* func_146(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return "DOOR_01";
				case 1:
					return "";
				default:
					break;
			}
			break;
		case 10:
			return "DOOR_L";
		case 4:
			return "";
	}
	return "";
}

int func_147(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					return -1147728628;
				case 1:
					return 1098854605;
				default:
					break;
			}
			break;
		case 10:
			return 244699522;
		case 4:
			return -1974086289;
	}
	return 0;
}

char* func_148(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					return "DOOR_02";
				case 1:
					switch (iParam0)
					{
						case 4:
							return "door";
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			return "DOOR_R";
		case 4:
			return "door";
	}
	return "";
}

char* func_149()
{
	return "uncle";
}

char* func_150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case default:
	}
	return "pblAction";
	return "NO VALID PLAYBACK LIST FOUND";
}

Vector3 func_151(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -829.5507f, -1329.762f, 42.54148f;
		case 9:
			return -250.7171f, 767.7319f, 116.4807f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_152(int iParam0)
{
	if (!func_52(iParam0))
	{
		func_360(&iLocal_48, iParam0);
	}
}

int func_153(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_372(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_281(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_161(&(iParam1->f_13));
		}
		if (func_373(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_153(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_76(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_375(*uParam0, 1, 1);
						}
					}
					else if (func_376(iParam1, 22))
					{
						func_375(*uParam0, 0, 1);
					}
				}
				if (func_377(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_378(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_379(iParam8);
					if (func_380(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_381(uParam3);
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
					func_382(iParam1, uParam3, fVar8);
					if (func_383(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_77(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_384(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_377(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_385(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_380(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_378(uParam0, func_377(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_379(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_77(uParam3, 0, 0, 1, 1);
					}
					func_386(iParam1, 1);
				}
				func_382(iParam1, uParam3, fVar8);
				if (func_384(uParam0, iParam1, fParam4, bVar6))
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
			func_274(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_154(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam4)
	{
		case 9:
			switch (iParam3)
			{
				case 0:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VAL_V1_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VAL_V1_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				case 1:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VAL_V2_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VAL_V2_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				case 2:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VAL_V4_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VAL_V4_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				case 3:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VAL_V5_GREET_POS_OUT", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(10), "RE_STF_VAL_V5_GREET_NEG_OUT", 648122183, 0, 0, 0, 1, 0);
					break;
				case 4:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VAL_V6_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VAL_V6_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VHT_V1_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VHT_V1_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				case 1:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VHT_V2_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VHT_V2_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				case 2:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VHT_V5_GREET_POS_OUT", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VHT_V5_GREET_NEG_OUT", 648122183, 0, 0, 0, 1, 0);
					break;
				case 3:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VHT_V5_GREET_POS_OUT", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(10), "RE_STF_VHT_V5_GREET_NEG_OUT", 648122183, 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 4:
					func_388((*uParam1)[0], func_387(7), "RE_STF_BLW_V6_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_BLW_V6_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	func_389(0, 0);
	func_390(iParam0, 0);
	*iParam2 = func_1(3, 0, 0) | 64 | 128;
}

void func_155(int* iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 9)
	{
		func_388((*uParam1)[0], func_387(7), "RE_STF_VAL_V6_GREET_POS", -163964935, 0, 0, 0, 1, 0);
		func_388((*uParam1)[1], func_387(26), "RE_STF_VAL_V6_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
	}
	else
	{
		func_388((*uParam1)[0], func_387(7), "RE_STF_BLW_V6_GREET_POS", -163964935, 0, 0, 0, 1, 0);
		func_388((*uParam1)[1], func_387(26), "RE_STF_BLW_V6_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
	}
	func_389(1, 0);
	func_390(iParam0, 0);
	*iParam2 = func_1(3, 0, 0) | 64 | 128;
}

void func_156(int iParam0, int iParam1)
{
	if (func_90(iParam0, 0, 1))
	{
		_0xfca8fb9e15fa80d3(iParam0, iParam1);
	}
}

void func_157(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam4)
	{
		case 9:
			switch (iParam3)
			{
				case 0:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VAL_V1_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VAL_V1_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				case 1:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VAL_V2_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VAL_V2_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				case 2:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VAL_V4_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VAL_V4_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				case 3:
					func_388((*uParam1)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
					break;
				case 4:
					func_388((*uParam1)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
					break;
				default:
					func_388((*uParam1)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VHT_V1_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VHT_V1_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				case 1:
					func_388((*uParam1)[0], func_387(7), "RE_STF_VHT_V2_GREET_POS", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(26), "RE_STF_VHT_V2_GREET_INTERVENE", 648122183, 0, 0, 0, 1, 0);
					break;
				case 2:
					func_388((*uParam1)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
					break;
				case 3:
					func_388((*uParam1)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam1)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		default:
			func_388((*uParam1)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
			func_388((*uParam1)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
			break;
	}
	func_389(1, 0);
	func_390(iParam0, 0);
	*iParam2 = func_1(3, 0, 0) | 64 | 128;
}

void func_158(var uParam0, var uParam1)
{
	func_389(2, 0);
	func_388((*uParam1)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
	func_388((*uParam1)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
}

void func_159(var uParam0, var uParam1)
{
	func_389(3, 0);
	func_388((*uParam1)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
	func_388((*uParam1)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
}

bool func_160(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_161(var uParam0)
{
	func_391(uParam0, 0f);
}

float func_162(var uParam0)
{
	if (!func_41(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_392(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_393() - uParam0->f_1);
}

bool func_163()
{
	if (!func_394(Global_1395482->f_1))
	{
		return false;
	}
	return func_395(Global_1395482->f_1, 32);
}

bool func_164(int iParam0)
{
	if (func_102(iParam0, 1))
	{
		return false;
	}
	return (1 == func_396(iParam0) || 2 == func_396(iParam0));
}

float func_165(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_166(var uParam0, int iParam1)
{
	vVar0 = { func_397(uParam0) };
	iVar3 = func_285(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_167(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (does_entity_exist(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = get_distance_between_coords(get_entity_coords(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_168(int iParam0)
{
	func_264(iParam0, 1);
	func_398(iParam0, 20);
}

void func_169(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_170(int iParam0, int iParam1)
{
	if (!func_315(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_171(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_315(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_399())
	{
		func_400(1);
	}
	func_401(iParam2, uParam0->f_43);
	func_402(iParam2, 0, 0, 0, 0);
	if (func_403(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_276(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_404(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_172(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_173(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_405())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_170(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_171(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_172(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_245(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_406(uParam0, bVar0);
		func_407(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_408(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_171(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_172(&(uParam0->f_121));
		}
	}
}

bool func_174(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_102(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_409())
			{
				fVar0 = 15f;
			}
		}
		if (func_410(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_46(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_410(uParam2, fVar1))
		{
			if (!func_411((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_412(uParam2->f_3, 2) && func_413(2))
		{
			return false;
		}
		if (func_102(iParam0, 4194304) || func_102(iParam0, 33554432))
		{
			if (func_414(1))
			{
				return false;
			}
		}
	}
	if (func_415(Global_35))
	{
		return false;
	}
	if (func_416(0, 1, 1) && !func_417(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_102(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_256(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_46(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_418())
		{
			return false;
		}
		iVar2 = func_419(func_359());
		if (func_420(iVar2))
		{
			if (func_421(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_422(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_423(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_175(var uParam0, int iParam1)
{
	if (func_424(uParam0->f_51))
	{
		func_425(uParam0->f_51, 0);
		fVar0 = func_426(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_427());
		bVar1 = func_281(!func_102(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_429(iVar2, func_428(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

int func_176(bool bParam0, bool bParam1, bool bParam2)
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

void func_177(int iParam0)
{
	func_40(&uLocal_0);
	func_430(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_431();
}

void func_178(int iParam0, int iParam1)
{
	if (!func_90(&(uLocal_178[iParam0]), 0, 1))
	{
		return;
	}
	set_entity_can_be_damaged(&(uLocal_178[iParam1]), false);
	_0x8301d87b1b89e219(&(uLocal_178[iParam0]), -1842202375);
	_0x789dabd18e9024db(&(uLocal_178[iParam0]), 32, 0);
	task_knocked_out(&(uLocal_178[iParam1]), 20f, 1);
	iLocal_186 = &uLocal_178[iParam1];
	if (iParam1 == 0)
	{
		func_262(8);
	}
	else
	{
		func_262(4);
	}
}

bool func_179(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_180(int iParam0, bool bParam1, bool bParam2)
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
		if (Global_35 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

bool func_181(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_432(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_433(iVar0, 0)))
		{
			if (func_434(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_182(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_435(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_436(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_437(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_438(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_437(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_439(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_437(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_440(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_437(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_46(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_437(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_441(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_442(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_437(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_443(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_437(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_444(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_437(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_444(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_437(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_445(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_437(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_446(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_437(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_447(iParam2, 4000))
				{
					if ((func_448(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_449(iParam2, iParam0)) && func_450(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_437(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_448(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_449(iParam2, iParam0)) && func_450(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_437(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_451(iParam0, Global_1935630->f_41))
							{
								func_452();
								*uParam3 = 2;
								func_437(iParam0, iParam2, *uParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (func_451(iParam0, Global_1935630->f_41))
						{
							func_452();
							*uParam3 = 2;
							func_437(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_453(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_454() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_452();
						*uParam3 = 2;
						func_437(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_455())
					{
						if (func_451(iParam0, Global_1935630->f_42))
						{
							func_452();
							*uParam3 = 2;
							func_437(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_456(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_437(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_457(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_437(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_458(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_437(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_459(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_437(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_460(iParam2, 4000))
				{
					if (func_461(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_437(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_462(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_437(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_463(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_437(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_183()
{
	if (bLocal_94)
	{
		return;
	}
	func_465(func_464(111), 0, 0, 0, 0, 0, 1065353216, 0);
	bLocal_94 = true;
	func_212(1);
}

bool func_184(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_466(iVar2, iParam6);
	}
	if (*iParam3 < iParam4 || *iParam3 > iParam5)
	{
		*iParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_182(uParam0[*iParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*iParam3++;
		if (*iParam3 > iParam5)
		{
			*iParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_185(int iParam0)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	return _is_anim_scene_started(iParam0, false);
}

bool func_186(int iParam0)
{
	return func_179(iLocal_49, iParam0);
}

void func_187()
{
	if (bLocal_93)
	{
		return;
	}
	func_465(2, 0, 0, 0, 0, 0, 1065353216, 0);
	bLocal_93 = true;
}

bool func_188(int iParam0, int iParam1, int iParam2, bool bParam3, float fParam4)
{
	if (!func_90(iParam0, 0, 1) || func_261(iParam2))
	{
		return false;
	}
	if (func_224(fParam4, 1, iParam0, 1) || bParam3)
	{
		if (!func_261(iParam2))
		{
			func_189(iParam0, iParam1, func_217(iVar892, iLocal_214, iParam2), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_227(iParam2);
			return true;
		}
	}
	return false;
}

bool func_189(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_467(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_190(int iParam0)
{
	if (iLocal_212 != iParam0)
	{
		iLocal_212 = iParam0;
	}
	if (!bLocal_95)
	{
		func_468(&(uLocal_178[iLocal_212]));
		bLocal_95 = true;
	}
	set_ped_combat_movement(&(uLocal_178[iLocal_212]), 2);
	set_ped_combat_attributes(&(uLocal_178[iLocal_212]), 93, true);
	set_ped_config_flag(&(uLocal_178[iLocal_212]), 233, true);
	set_ped_config_flag(&(uLocal_178[iLocal_212]), 192, false);
	register_target(&(uLocal_178[iLocal_212]), Global_35, 1);
	task_combat_ped(&(uLocal_178[iLocal_212]), Global_35, 0, 0);
	func_239(&uLocal_187);
	if (iLocal_212 != 1)
	{
		func_263(&(uLocal_178[iLocal_212]), uLocal_187[iParam0], 831283580, 580546400, 0, 0);
	}
}

void func_191(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_90(iParam0, 201, 1))
	{
		func_251(iParam0, 1, Global_35, 0);
	}
	if (func_90(iParam1, 201, 1))
	{
		func_251(iParam1, 1, Global_35, 0);
	}
	if (func_90(iParam2, 201, 1))
	{
		func_251(iParam2, 1, Global_35, 0);
	}
	if (func_90(iParam3, 201, 1))
	{
		func_251(iParam3, 1, Global_35, 0);
	}
}

void func_192()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!does_entity_exist(&(uLocal_178[iVar0])))
		{
		}
		else if (is_entity_dead(&(uLocal_178[iVar0])))
		{
		}
		else
		{
			iVar2 = iVar0;
			switch (iVar2)
			{
				case 0:
					iVar1 = func_469(uLocal_178[iVar2], Local_623[iVar2], 15f, &Local_708, &uVar4, 0, 1, 0, 0, iVar881, 0, 0, 2, 1, -1082130432, 0);
					if (iVar1 != -1)
					{
						if (iLocal_52 == -1)
						{
							iLocal_52 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = &iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_52 != -1)
					{
						bVar3 = true;
					}
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						iVar1 = func_469(uLocal_178[iVar2], Local_623[iVar2], 15f, &Local_778, &uVar4, 0, 1, 0, 0, iVar882, 0, 0, 2, 1, -1082130432, 0);
					}
					else
					{
						iVar1 = func_469(uLocal_178[iVar2], Local_623[iVar2], 15f, &Local_743, &uVar4, 0, 1, 0, 0, iVar881, 0, 0, 2, 1, -1082130432, 0);
					}
					if (iVar1 != -1)
					{
						if (iLocal_53 == -1)
						{
							iLocal_53 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = &iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_53 != -1)
					{
						bVar3 = true;
					}
					break;
				case 2:
					iVar1 = func_469(uLocal_178[iVar2], Local_623[iVar2], 15f, &Local_813, &uVar4, 0, 1, 0, 0, iVar883, 0, 0, 2, 1, -1082130432, 0);
					if (iVar1 != -1)
					{
						if (iLocal_55 == -1)
						{
							iLocal_55 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = &iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_55 != -1)
					{
						bVar3 = true;
					}
					break;
				case 3:
					iVar1 = func_469(uLocal_178[iVar2], Local_623[iVar2], 15f, &Local_848, &uVar4, 0, 1, 0, 0, iVar883, 0, 0, 2, 1, -1082130432, 0);
					if (iVar1 != -1)
					{
						if (iLocal_56 == -1)
						{
							iLocal_56 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = &iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_56 != -1)
					{
						bVar3 = true;
					}
					break;
				default:
					break;
			}
			iVar1 = -1;
		}
		iVar0++;
	}
	func_470((bVar3 || iLocal_24 != -1));
}

void func_193()
{
	if (iLocal_16 == -1)
	{
		return;
	}
	if (iLocal_52 != -1)
	{
		iVar1 = 0;
		iVar2 = iLocal_52;
	}
	else if (iLocal_53 != -1)
	{
		if (iLocal_214 == 4)
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = 1;
		}
		iVar2 = iLocal_53;
	}
	else
	{
		iLocal_55 = -1;
		iLocal_56 = -1;
		iLocal_16 = -1;
		return;
	}
	iVar0 = iVar2;
	switch (iLocal_16)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_471(1);
					if (iLocal_214 == 4)
					{
						func_152(1);
						func_472(8, 0);
						func_219(iVar897, iLocal_214, Local_623[iVar1], &Local_778, 0);
						func_223(iVar897, iLocal_214, Local_623[0], &Local_708);
					}
					break;
				case 1:
					func_152(1);
					func_183();
					func_471(2);
					if (iLocal_214 == 4)
					{
						func_472(8, 0);
						func_360(&iLocal_48, 2097152);
						func_219(iVar897, iLocal_214, Local_623[iVar1], &Local_778, 0);
						func_223(iVar897, iLocal_214, Local_623[0], &Local_708);
					}
					else
					{
						set_ped_config_flag(&(uLocal_178[0]), 6, true);
					}
					break;
				default:
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 0:
					switch (iLocal_214)
					{
						case 0:
							switch (iVar0)
							{
								case 1:
									func_472(16, 0);
									func_471(32);
									iLocal_41 = get_game_timer();
									func_48(14);
									break;
							}
							break;
						case 4:
							Local_567.f_7 = 7000;
							_0x66f9eb44342bb4c5(&(uLocal_178[1]), &Local_567);
							switch (iVar0)
							{
								case 0:
									func_472(11, 0);
									func_471(1024);
									func_152(16777216);
									break;
								case 1:
									func_472(12, 0);
									func_471(2048);
									func_152(33554432);
									break;
							}
							break;
					}
					break;
				case 1:
					Local_567.f_7 = 7000;
					_0x66f9eb44342bb4c5(&(uLocal_178[1]), &Local_567);
					switch (iLocal_214)
					{
						case 1:
							switch (iVar897)
							{
								case 10:
									switch (iVar0)
									{
										case 1:
											func_472(15, 1);
											func_471(64);
											func_152(33554432);
											break;
									}
									break;
								default:
									switch (iVar0)
									{
										case 1:
											iLocal_42 = get_game_timer();
											func_471(64);
											func_152(33554432);
											break;
									}
									break;
							}
							break;
						case 2:
							switch (iVar0)
							{
								case 1:
									if (iLocal_211 < 1)
									{
										func_472(2, 1);
										iLocal_211++;
										func_219(iVar897, iLocal_214, Local_623[iVar1], &Local_743, iLocal_211);
										func_471(64);
										func_152(33554432);
									}
									else
									{
										func_472(3, 1);
										func_471(128);
										func_152(33554432);
									}
									break;
							}
							break;
						case 4:
							switch (iVar0)
							{
								case 0:
									func_472(13, 1);
									func_471(8);
									func_152(67108864);
									break;
								case 1:
									func_472(14, 1);
									func_471(16);
									func_152(134217728);
									break;
							}
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							func_472(0, 0);
							iLocal_23 = 1;
							func_262(16);
							break;
						case 1:
							func_472(1, 0);
							iLocal_23 = 2;
							func_223(iVar897, iLocal_214, Local_623[0], &Local_708);
							func_262(16);
							break;
					}
					func_471(4);
					break;
				default:
					break;
			}
			break;
		case 5:
			switch (iVar1)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							func_472(4, 0);
							func_471(256);
							break;
						case 1:
							func_472(5, 0);
							func_471(512);
							func_48(14);
							break;
					}
					break;
			}
			break;
		case 4:
			switch (iVar1)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							func_472(6, 0);
							func_471(256);
							break;
						case 1:
							func_472(7, 0);
							func_471(512);
							func_48(14);
							break;
					}
					break;
			}
			break;
		default:
			break;
	}
	switch (iVar1)
	{
		case 0:
			iLocal_52 = -1;
			break;
		case 1:
			iLocal_53 = -1;
			break;
		case 2:
			iLocal_55 = -1;
			break;
		case 3:
			iLocal_56 = -1;
			break;
	}
	iLocal_16 = -1;
}

void func_194()
{
	if (iLocal_24 == -1)
	{
		return;
	}
	if (iLocal_25 < 0 || iLocal_25 >= 4)
	{
		iLocal_24 = -1;
		iLocal_25 = -1;
		return;
	}
	if (!func_90(&(uLocal_178[iLocal_25]), 0, 1))
	{
		iLocal_24 = -1;
		iLocal_25 = -1;
		return;
	}
	if (func_473(Global_35, 0))
	{
		return;
	}
	if (func_473(&(uLocal_178[iLocal_25]), 0))
	{
		return;
	}
	if (func_189(&(uLocal_178[iLocal_25]), Global_35, func_474(iLocal_24, iVar897, iLocal_214), 0, -1082130432, func_475(iLocal_24), 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
	{
	}
	iLocal_24 = -1;
	iLocal_25 = -1;
}

void func_195()
{
	switch (iLocal_214)
	{
		case 1:
			switch (iVar897)
			{
				case 9:
					if (!bLocal_43)
					{
						if (func_250(64))
						{
							if ((get_game_timer() - iLocal_42) >= 8000)
							{
								if (!func_473(Global_35, 0))
								{
									func_189(Global_35, &(uLocal_178[1]), "RE_STF_VAL_V2_GREET_NEG_B", 0, -1082130432, 0, 1, 0, 1, 1, 1, 291934926, 0, 0, 0);
									bLocal_43 = true;
								}
							}
						}
					}
					break;
			}
			break;
	}
}

void func_196()
{
	if (iLocal_214 != 3)
	{
		return;
	}
	if (!_does_volume_exist(iLocal_201))
	{
		return;
	}
	if (bLocal_26)
	{
		if (!func_245(Global_35, iLocal_201, 1, 0))
		{
			func_476(iVar897, iLocal_214, &Local_708, 1);
			bLocal_26 = false;
		}
	}
	else if (func_245(Global_35, iLocal_201, 1, 0))
	{
		func_476(iVar897, iLocal_214, &Local_708, 0);
		bLocal_26 = true;
	}
}

void func_197()
{
	if ((!bLocal_208 || bLocal_209) || bLocal_210)
	{
		return;
	}
	if (!does_entity_exist(&(uLocal_178[0])))
	{
		return;
	}
	if (is_entity_dead(&(uLocal_178[0])))
	{
		iVar0 = get_ped_cause_of_death(&(uLocal_178[0]));
		if (iVar0 == -1569615261)
		{
			bLocal_210 = true;
			return;
		}
		_0xedfc6c1fd1c964f5(player_id(), -493957506, 0, 75f, 100f, 0, 0, 0, 0);
		set_ped_config_flag(&(uLocal_178[0]), 6, true);
		bLocal_209 = true;
		return;
	}
	if (_has_entity_been_damaged_by_weapon(&(uLocal_178[0]), Global_1935630->f_44, 0))
	{
		if (Global_1935630->f_44 != -1569615261)
		{
			_0xedfc6c1fd1c964f5(player_id(), 195938434, 0, 75f, 100f, 0, 0, 0, 0);
			set_ped_config_flag(&(uLocal_178[0]), 6, true);
			bLocal_209 = true;
			return;
		}
	}
	if (func_181(&(uLocal_178[0]), 1, 1, Global_1935630->f_44 != -1569615261, 0, 0))
	{
		_0xedfc6c1fd1c964f5(player_id(), -1810065318, 0, 75f, 100f, 0, 0, 0, 0);
		set_ped_config_flag(&(uLocal_178[0]), 6, true);
		bLocal_209 = true;
		return;
	}
}

void func_198()
{
	if (bLocal_44)
	{
		if (!bLocal_45)
		{
			func_477(iVar897, Local_623[1], &Local_778);
			bLocal_45 = true;
		}
	}
}

void func_199()
{
	if (func_90(iLocal_186, 0, 1) && !func_216(iLocal_186, 1313215416))
	{
		set_blocking_of_non_temporary_events(iLocal_186, false);
		func_478(iLocal_186);
		set_ped_as_no_longer_needed(&iLocal_186);
	}
}

bool func_200(var uParam0, float fParam1)
{
	if (func_43(uParam0, fParam1))
	{
		func_40(uParam0);
		return true;
	}
	return false;
}

bool func_201(int iParam0, char* sParam1)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	return _0x23e33cb9f4a3f547(iParam0, sParam1);
}

void func_202()
{
	switch (iLocal_214)
	{
		case 0:
		case 1:
			if (iVar897 == 10)
			{
				return;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			if (!func_52(1))
			{
				if (func_479(&(uLocal_178[1]), "RE_STF_LETS_TALK", 1067030938))
				{
					func_189(&(uLocal_178[1]), &(uLocal_178[0]), func_217(iVar897, iLocal_214, 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (func_479(&(uLocal_178[1]), "RE_STF_LEND_HAND", 1067030938))
				{
					func_189(&(uLocal_178[1]), Global_35, func_217(iVar897, iLocal_214, 2), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (func_479(&(uLocal_178[0]), "RE_STF_CALL_MOMMA", 1067030938))
				{
					func_189(&(uLocal_178[0]), &(uLocal_178[1]), func_217(iVar897, iLocal_214, 4), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (func_479(&(uLocal_178[1]), "RE_STF_LUMBAGO", 1067030938))
				{
					func_189(&(uLocal_178[1]), &(uLocal_178[0]), func_217(iVar897, iLocal_214, 8), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (func_479(&(uLocal_178[0]), "RE_STF_THOUGHT", 1067030938))
				{
					func_189(&(uLocal_178[0]), &(uLocal_178[1]), func_217(iVar897, iLocal_214, 16), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					func_480(Local_623[1], &Local_778);
					func_223(iVar897, iLocal_214, Local_623[0], &Local_708);
				}
			}
			break;
	}
}

void func_203()
{
	if (func_179(iLocal_48, 16))
	{
		return;
	}
	if (func_179(iLocal_48, 8))
	{
		set_ragdoll_blocking_flags(&(uLocal_178[0]), 32);
		set_ragdoll_blocking_flags(&(uLocal_178[1]), 32);
		set_ped_config_flag(&(uLocal_178[1]), 113, false);
		func_161(&uLocal_144);
		start_particle_fx_non_looped_at_coord("scr_beat_str_fght_win_smh", Local_64.f_3, 0f, 0f, 0f, 1f, false, false, false);
		set_entity_can_be_damaged(&(uLocal_178[1]), false);
		set_entity_can_be_damaged(&(uLocal_178[0]), false);
		func_209(&(Local_344.f_5), 0);
		add_owned_explosion(&(uLocal_178[0]), Local_64.f_3, 25, 0.05f, false, true, 0f);
		func_481(Local_64.f_3);
		func_152(16);
		_remove_all_shocking_events_of_type(217247011, false);
		func_482(&Local_886, iLocal_214, iVar897, iVar898);
		return;
	}
	if (!_is_anim_scene_started(iLocal_50, false) || !_does_anim_scene_exist(iLocal_50))
	{
		return;
	}
	fVar0 = 0f;
	switch (iLocal_214)
	{
		case 2:
			if (Local_344.f_51.f_4 == 1)
			{
				fVar0 = 0.298f;
			}
			else
			{
				fVar0 = 0.147f;
			}
			break;
		case 3:
			fVar0 = 0.298f;
			break;
		default:
			return;
	}
	if (_get_anim_scene_progress(iLocal_50) > fVar0)
	{
		_0xb6f4825153920582();
		func_482(&Local_886, iLocal_214, iVar897, iVar898);
		func_152(8);
	}
}

void func_204()
{
	if (func_179(iLocal_48, 32) || !func_185(iLocal_50))
	{
		return;
	}
	switch (iLocal_214)
	{
		case 4:
			if (func_90(&(uLocal_178[0]), 0, 1))
			{
				if (_get_anim_scene_progress(iLocal_50) > 0.0463f)
				{
					func_482(&Local_886, iLocal_214, iVar897, iVar898);
					func_481(Local_64.f_6);
					func_152(32);
				}
			}
			break;
		case 0:
		case 1:
			if (func_90(&(uLocal_178[1]), 0, 1))
			{
				if (!func_179(iLocal_48, 4) && _get_anim_scene_progress(iLocal_50) > 0.1702f)
				{
					func_481(Local_64.f_6);
					func_152(4);
				}
				if (_get_anim_scene_progress(iLocal_50) > 0.247f)
				{
					func_482(&Local_886, iLocal_214, iVar897, iVar898);
					func_152(32);
				}
			}
			break;
	}
}

void func_205()
{
	if (iLocal_214 != 3)
	{
		return;
	}
	if (func_179(iLocal_48, 64))
	{
		return;
	}
	if (!func_90(&(uLocal_178[1]), 0, 1))
	{
		return;
	}
	if (_get_anim_scene_progress(iLocal_50) > 0.46f)
	{
		remove_anim_scene_entity(iLocal_50, func_143(1), &(uLocal_178[1]));
		func_180(&(uLocal_178[1]), 1, 0);
		func_482(&Local_886, iLocal_214, iVar897, iVar898);
		set_ped_config_flag(&(uLocal_178[1]), 243, true);
		func_152(64);
	}
}

void func_206()
{
	if ((((!_does_anim_scene_exist(iLocal_50) || !_is_anim_scene_started(iLocal_50, false)) || _does_volume_exist(Local_64.f_25)) || !func_90(&(uLocal_178[0]), 0, 1)) || !func_90(&(uLocal_178[1]), 0, 1))
	{
		return;
	}
	switch (iLocal_214)
	{
		case 0:
		case 1:
			if (_get_anim_scene_progress(iLocal_50) > 0.5572f)
			{
				func_483(&Local_64, &(uLocal_178[0]), &(uLocal_178[1]));
			}
			break;
		case 2:
			if (_get_anim_scene_progress(iLocal_50) > 0.964f)
			{
				func_483(&Local_64, &(uLocal_178[0]), &(uLocal_178[1]));
			}
			break;
		case 4:
			break;
	}
}

bool func_207()
{
	if (!_is_anim_scene_started(iLocal_50, false) || !_does_anim_scene_exist(iLocal_50))
	{
		return true;
	}
	if (!_0x1f0e401031e20146(iLocal_50, func_150(iLocal_214)))
	{
		return false;
	}
	fVar0 = _get_anim_scene_progress(iLocal_50);
	switch (iLocal_214)
	{
		case 0:
		case 1:
			if ((iVar897 == 9 && iVar898 == 1) && !func_179(iLocal_48, 262144))
			{
				if (fVar0 > 0.253f)
				{
					func_109(1098854605, 0, -0.1f, 0, 0, 0, 0, 0);
					func_152(262144);
				}
			}
			if (_is_anim_scene_active(iLocal_50))
			{
				return true;
			}
			else if (func_484(fLocal_59, fLocal_60, 8f))
			{
				func_152(65536);
				return true;
			}
			break;
		case 2:
			if (!func_179(iLocal_48, 128))
			{
				if (_is_anim_scene_active(iLocal_50))
				{
					func_152(128);
				}
			}
			if (!func_179(iLocal_48, 256))
			{
				if (_is_anim_scene_active(iLocal_50))
				{
					func_152(256);
				}
			}
			if (func_179(iLocal_48, 128) && func_179(iLocal_48, 256))
			{
				return true;
			}
			break;
		case 3:
			if (_is_anim_scene_active(iLocal_50))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_208()
{
	switch (iLocal_214)
	{
		case 0:
			func_485(0, 1);
			break;
		case 1:
			func_485(1, 0);
			break;
		case 2:
			func_485(1, 0);
			break;
		case 3:
			break;
	}
}

void func_209(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(uParam0->f_1), 16);
	}
	else
	{
		func_169(&(uParam0->f_1), 16);
	}
}

void func_210(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_90(&(uLocal_178[iParam0]), 0, 1) || func_52(8192))
	{
		return;
	}
	set_ped_config_flag(&(uLocal_178[iParam0]), 252, true);
	set_ped_path_can_use_climbovers(&(uLocal_178[iParam0]), false);
	func_234(&iLocal_199, iVar893, iVar894);
	open_sequence_task(&iLocal_177);
	if (bParam3)
	{
		task_turn_ped_to_face_entity(0, Global_35, 2000, -1082130432, -1082130432, -1082130432);
	}
	if (bParam2)
	{
		task_force_motion_state(0, -668482597, false);
	}
	if (bParam1)
	{
		task_play_upper_anim_facing_entity(0, &(Local_546[2]), Local_546[2]->f_1, Global_35, 900, 2f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
	}
	task_follow_nav_mesh_to_coord(0, Local_64.f_12, 1f, -1, 0.25f, 2228224, 40000f);
	_task_use_scenario_point(0, iLocal_199, 0, -1, true, false, 0, false, -1f, false);
	close_sequence_task(iLocal_177);
	if (iParam0 == 1)
	{
		task_look_at_entity(&(uLocal_178[iParam0]), &(uLocal_178[0]), 3000, 0, 51, 0);
		_task_perform_sequence_2(&(uLocal_178[iParam0]), iLocal_177, 2.3f, 2.3f);
	}
	else
	{
		task_perform_sequence(&(uLocal_178[iParam0]), iLocal_177);
	}
	clear_sequence_task(&iLocal_177);
	func_152(8192);
	set_ped_keep_task(&(uLocal_178[iParam0]), true);
	iLocal_213 = iParam0;
}

void func_211()
{
	if (!_does_anim_scene_exist(iLocal_50))
	{
		return;
	}
	if (!_is_anim_scene_started(iLocal_50, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_128(iLocal_214, Local_344.f_51.f_4, 2, 4))
	{
		if (iVar0 != 1)
		{
			if (does_entity_exist(&(uLocal_178[iVar0])))
			{
				remove_anim_scene_entity(iLocal_50, func_143(iVar0), &(uLocal_178[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_212(bool bParam0)
{
	if (Local_344.f_44)
	{
		return;
	}
	if ((func_486(Local_344.f_51, 1) < 25f || func_487(&(uLocal_178[0]), 35f, 0)) || bParam0)
	{
		func_488(iVar896, iVar897);
		Local_344.f_44 = 1;
		switch (iVar896)
		{
			case 9:
				iVar0 = func_489(1);
				set_blocking_of_non_temporary_events(iVar0, false);
				break;
			case 10:
				iVar0 = func_489(1);
				set_blocking_of_non_temporary_events(iVar0, false);
				break;
			case 4:
				iVar0 = func_489(508);
				set_blocking_of_non_temporary_events(iVar0, false);
				break;
		}
	}
}

void func_213()
{
	if (func_90(&(uLocal_178[0]), 0, 1) && func_90(&(uLocal_178[1]), 0, 1))
	{
		if (!_0x3bdfcf25b58b0415(&(uLocal_178[0])) && !_0x3bdfcf25b58b0415(&(uLocal_178[1])))
		{
			if (func_162(&uLocal_150) > 3f)
			{
				func_161(&uLocal_150);
				func_161(&uLocal_147);
				if ((get_script_task_status(&(uLocal_178[0]), 1469008894, true) != 1 && get_script_task_status(&(uLocal_178[1]), 1469008894, true) != 1) && get_script_task_status(&(uLocal_178[0]), 242628503, true) != 1)
				{
					_0x630e7b01f091a197(&(uLocal_178[1]), 1313545729);
					_0x630e7b01f091a197(&(uLocal_178[0]), 1313545729);
					task_put_ped_directly_into_grapple(&(uLocal_178[iLocal_183]), &(uLocal_178[iLocal_184]), 0, 0, 0f, 1, 0);
					_0x2208438012482a1a(&(uLocal_178[iLocal_183]), false, false);
					_0x2208438012482a1a(&(uLocal_178[iLocal_184]), false, false);
					return;
				}
			}
			return;
		}
	}
	if (iVar563 < 9 && (func_52(1) || func_52(32768)))
	{
		func_490(9);
	}
	switch (iVar563)
	{
		case 0:
			if (!_0x75df9e73f2f005fd(&(uLocal_178[1])))
			{
				set_entity_can_be_damaged(&(uLocal_178[1]), true);
				_0x29924eb8ee9db926(&(uLocal_178[1]), 10f);
			}
			if (!_0x75df9e73f2f005fd(&(uLocal_178[0])))
			{
				set_entity_can_be_damaged(&(uLocal_178[0]), true);
				_0x29924eb8ee9db926(&(uLocal_178[0]), 10f);
			}
			func_161(&uLocal_147);
			func_490(1);
			break;
		case 1:
			if (func_491(2f, 6.5f))
			{
				if (func_179(iLocal_48, 65536))
				{
					if (iLocal_214 == 0 || iLocal_214 == 1)
					{
						func_188(&(uLocal_178[iLocal_183]), &(uLocal_178[iLocal_184]), 4, 1, -1065353216);
					}
					else
					{
						func_188(&(uLocal_178[0]), &(uLocal_178[1]), 128, 0, -1065353216);
					}
				}
				func_74(Local_64.f_25);
				func_492(&(uLocal_178[iLocal_183]));
				func_161(&uLocal_147);
				func_490(2);
			}
			break;
		case 2:
			if (func_491(0.5f, 6.5f))
			{
				func_492(&(uLocal_178[iLocal_183]));
				func_161(&uLocal_147);
				func_490(3);
			}
			break;
		case 3:
			if (func_491(0.5f, 6.5f))
			{
				func_492(&(uLocal_178[iLocal_183]));
				func_161(&uLocal_147);
				func_490(4);
			}
			break;
		case 4:
			if (func_491(0.5f, 5.5f))
			{
				if (iLocal_214 == 0 || iLocal_214 == 1)
				{
				}
				else
				{
					func_188(&(uLocal_178[1]), &(uLocal_178[0]), 256, 0, -1065353216);
				}
				func_492(&(uLocal_178[iLocal_183]));
				func_161(&uLocal_147);
				func_490(5);
			}
			break;
		case 5:
			if (func_491(1f, 5.5f))
			{
				func_492(&(uLocal_178[iLocal_183]));
				func_161(&uLocal_147);
				func_490(6);
			}
			break;
		case 6:
			if (func_491(0.5f, 4.5f))
			{
				func_492(&(uLocal_178[iLocal_183]));
				func_161(&uLocal_147);
				func_490(7);
			}
			break;
		case 7:
			if (func_491(0.5f, 4.5f))
			{
				if (iLocal_214 == 2)
				{
					func_188(&(uLocal_178[iLocal_183]), &(uLocal_178[iLocal_184]), 512, 0, -1065353216);
				}
				func_492(&(uLocal_178[iLocal_183]));
				func_161(&uLocal_147);
				func_490(9);
			}
			break;
		case 8:
			func_490(9);
			break;
		case 9:
			if (func_491(0.5f, 4f) || func_179(iLocal_48, 32768))
			{
				func_74(Local_64.f_25);
				func_178(iLocal_183, iLocal_184);
				func_161(&uLocal_147);
				func_490(10);
				func_493(Local_623[1], &Local_743, 1);
				func_493(Local_623[0], &Local_708, 0);
			}
			break;
		case 10:
			break;
	}
}

bool func_214()
{
	if (is_entity_dead(&(uLocal_178[0])) || is_entity_dead(&(uLocal_178[1])))
	{
		return true;
	}
	if (func_216(&(uLocal_178[0]), 1313215416) || func_216(&(uLocal_178[1]), 1313215416))
	{
		return true;
	}
	return false;
}

bool func_215(int iParam0)
{
	if (!func_90(&(uLocal_178[iParam0]), 0, 1))
	{
		return false;
	}
	if (_0x3bdfcf25b58b0415(&(uLocal_178[iParam0])))
	{
		return true;
	}
	else if (get_script_task_status(&(uLocal_178[iParam0]), 1469008894, true) == 1)
	{
		return (1 || get_script_task_status(&(uLocal_178[iParam0]), 1469008894, true) == 0);
		return true;
	}
	return false;
}

bool func_216(int iParam0, int iParam1)
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

char* func_217(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 4:
			switch (iParam2)
			{
				case 1:
					return func_496("STF", func_494(iParam0), "LETS_TALK", func_495(iParam1));
				case 2:
					if (func_497())
					{
						return func_496("STF", func_494(iParam0), "LEND_HAND_JOHN", func_495(iParam1));
					}
					else
					{
						return func_496("STF", func_494(iParam0), "LEND_HAND_ARTHUR", func_495(iParam1));
					}
					break;
				case 4:
					return func_496("STF", func_494(iParam0), "CALL_MOMMA", func_495(iParam1));
				case 8:
					return func_496("STF", func_494(iParam0), "LUMBAGO", func_495(iParam1));
				case 16:
					return func_496("STF", func_494(iParam0), "THOUGHT", func_495(iParam1));
				case 32:
					if (func_497())
					{
						return func_496("STF", func_494(iParam0), "THANKS_JOHN", func_495(iParam1));
					}
					else
					{
						return func_496("STF", func_494(iParam0), "THANKS_ARTHUR", func_495(iParam1));
					}
					break;
				case 64:
					return func_496("STF", func_494(iParam0), "HOW_DRUNK", func_495(iParam1));
				case 128:
					return func_496("STF", func_494(iParam0), "NORMAL_DRUNK", func_495(iParam1));
				case 256:
					return func_496("STF", func_494(iParam0), "NO_THANKS", func_495(iParam1));
				case 512:
					return func_496("STF", func_494(iParam0), "COVERED", func_495(iParam1));
				case 1024:
					return func_496("STF", func_494(iParam0), "WAIT_OLD", func_495(iParam1));
				case 2048:
					return func_496("STF", func_494(iParam0), "AGGRO", func_495(iParam1));
				case 4096:
					return func_496("STF", func_494(iParam0), "WARN", func_495(iParam1));
				case 8192:
					return func_496("STF", func_494(iParam0), "WARN_AGGRO", func_495(iParam1));
				case 67108864:
					return func_496("STF", func_494(iParam0), "FLEE_THUG", func_495(iParam1));
				case 16384:
					return func_496("STF", func_494(iParam0), "BACK_TO_CAMP", func_495(iParam1));
				case 32768:
					return func_496("STF", func_494(iParam0), "BACK_TO_BEECHERS", func_495(iParam1));
			}
			break;
		default:
			switch (iParam2)
			{
				case 1:
					return func_496("STF", func_494(iParam0), "DOOR_TAUNT_A", func_495(iParam1));
				case 2:
					return func_496("STF", func_494(iParam0), "DOOR_REPLY_A", func_495(iParam1));
				case 4:
					return func_496("STF", func_494(iParam0), "DOOR_TAUNT_B", func_495(iParam1));
				case 8:
					return func_496("STF", func_494(iParam0), "DOOR_REPLY_B", func_495(iParam1));
				case 262144:
					return func_496("STF", func_494(iParam0), "CALL", func_495(iParam1));
				case 524288:
					return func_496("STF", func_494(iParam0), "DECLINE", func_495(iParam1));
				case 1048576:
					return func_496("STF", func_494(iParam0), "PLAYER_DECLINE", func_495(iParam1));
				case 2097152:
					return func_496("STF", func_494(iParam0), "PLAYER_ACCEPT", func_495(iParam1));
				case 16:
					return func_496("STF", func_494(iParam0), "DRUNK", func_495(iParam1));
				case 32:
					return func_496("STF", func_494(iParam0), "WINDOW_TAUNT_A", func_495(iParam1));
				case 64:
					return func_496("STF", func_494(iParam0), "WINDOW_REPLY_A", func_495(iParam1));
				case 128:
					return func_496("STF", func_494(iParam0), "WINDOW_TAUNT_B", func_495(iParam1));
				case 256:
					return func_496("STF", func_494(iParam0), "WINDOW_REPLY_B", func_495(iParam1));
				case 512:
					return func_496("STF", func_494(iParam0), "WINDOW_TAUNT_C", func_495(iParam1));
				case 1024:
					return func_496("STF", func_494(iParam0), "SEE_WIFE", func_495(iParam1));
				case 2048:
					return func_496("STF", func_494(iParam0), "DEAD", func_495(iParam1));
				case 4194304:
					return func_496("STF", func_494(iParam0), "AGGRO_THUG", func_495(iParam1));
				case 8388608:
					return func_496("STF", func_494(iParam0), "AGGRO_VICTIM", func_495(iParam1));
				case 16777216:
					return func_496("STF", func_494(iParam0), "AGGRO_WATCHER_A", func_495(iParam1));
				case 33554432:
					return func_496("STF", func_494(iParam0), "AGGRO_WATCHER_B", func_495(iParam1));
				case 67108864:
					return func_496("STF", func_494(iParam0), "FLEE_THUG", func_495(iParam1));
				case 134217728:
					return func_496("STF", func_494(iParam0), "FLEE_VICTIM", func_495(iParam1));
				case 4096:
					return func_496("STF", func_494(iParam0), "SEES_BODY_WATCHER_A", func_495(iParam1));
				case 8192:
					return func_496("STF", func_494(iParam0), "SEES_BODY_WATCHER_B", func_495(iParam1));
				default:
					break;
			}
			break;
	}
	return "INVALID DIALOGUE BIT";
}

void func_218()
{
	switch (iLocal_214)
	{
		case 3:
			if (func_90(&(uLocal_178[1]), 0, 1))
			{
				if (!func_52(64))
				{
					func_180(&(uLocal_178[1]), 1, 0);
					set_ped_config_flag(&(uLocal_178[1]), 243, true);
				}
			}
			break;
		default:
			func_210(1, 0, 0, 0);
			break;
	}
}

void func_219(int iParam0, int iParam1, int* iParam2, var uParam3, int iParam4)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam4)
					{
						case 0:
							func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
							func_388((*uParam3)[1], func_387(10), "RE_STF_VAL_V2_GREET_NEG", 648122183, 0, 0, 0, 1, 0);
							break;
						case 1:
							func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
							func_388((*uParam3)[1], func_387(10), "RE_STF_VAL_V2_GREET_NEG_B", 648122183, 0, 0, 0, 1, 0);
							break;
						default:
							func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
							func_388((*uParam3)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
							break;
					}
					break;
				case 2:
					switch (iParam4)
					{
						case 0:
							func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
							func_388((*uParam3)[1], func_387(10), "RE_STF_VAL_V4_GREET_NEG", 648122183, 0, 0, 0, 1, 0);
							break;
						case 1:
							func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
							func_388((*uParam3)[1], func_387(10), "RE_STF_VAL_V4_GREET_NEG_B", 648122183, 0, 0, 0, 1, 0);
							break;
						default:
							func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
							func_388((*uParam3)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
							break;
					}
					break;
				default:
					func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam3)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam4)
					{
						case 0:
							func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
							func_388((*uParam3)[1], func_387(10), "RE_STF_VHT_V2_GREET_NEG", 648122183, 0, 0, 0, 1, 0);
							break;
						default:
							func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
							func_388((*uParam3)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
							break;
					}
					break;
				default:
					func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam3)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
					break;
			}
			break;
		default:
			func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
			func_388((*uParam3)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
			break;
	}
	func_390(iParam2, 0);
	func_389(1, 2);
}

float func_220(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_432(Global_35, iParam0, bParam1, bParam2);
}

void func_221()
{
	if (!func_90(&(uLocal_178[0]), 0, 1))
	{
		return;
	}
	if (func_52(1) && iVar562 < 4)
	{
		iLocal_564 = 4;
		func_183();
		func_48(6);
	}
	switch (iVar562)
	{
		case 0:
			if (!func_216(&(uLocal_178[0]), 242628503))
			{
				open_sequence_task(&iLocal_177);
				task_clear_look_at(0);
				task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
				task_play_anim(0, &(Local_546[0]), Local_546[0]->f_1, 2f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				task_play_anim(0, &(Local_546[1]), Local_546[1]->f_1, 8f, 2f, -1, 1, 0f, false, 0, false, 0, false);
				func_253(&(uLocal_178[0]), &iLocal_177, 0, 0, 1, 1);
			}
			else if (is_entity_playing_anim(&(uLocal_178[0]), &(Local_546[0]), Local_546[0]->f_1, 1) && !func_224(0, 1, &(uLocal_178[0]), 1))
			{
				iLocal_564 = 1;
			}
			break;
		case 1:
			if (func_224(0, 1, &(uLocal_178[0]), 1))
			{
				func_498(iVar897, Local_623[0], &Local_708);
				iLocal_564 = 2;
			}
			break;
		case 2:
			switch (iLocal_23)
			{
				case 1:
					if (func_224(0, 1, &(uLocal_178[0]), 1))
					{
						iLocal_564 = 4;
						if (func_90(&(uLocal_178[0]), 0, 1))
						{
							set_ped_config_flag(&(uLocal_178[0]), 6, true);
						}
						bLocal_208 = true;
						func_48(6);
					}
					break;
				case 2:
					iLocal_564 = 3;
					func_152(131072);
					if (func_90(&(uLocal_178[0]), 0, 1))
					{
						set_ped_config_flag(&(uLocal_178[0]), 6, false);
					}
					func_223(iVar897, iLocal_214, Local_623[0], &Local_708);
					func_48(7);
					break;
			}
			break;
		case 3:
			if (func_224(-5.5f, 1, 0, 0))
			{
				func_222();
			}
			break;
		case 4:
			func_226();
			break;
		case 5:
			break;
	}
}

void func_222()
{
	if (!func_186(16))
	{
		func_188(&(uLocal_178[0]), &(uLocal_178[0]), 524288, 1, -1065353216);
	}
	func_210(0, 1, 0, 0);
	iLocal_564 = 5;
}

void func_223(int iParam0, int iParam1, int* iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam3)[1], func_387(10), "RE_STF_VAL_V1_GREET_NEG", 648122183, 0, 0, 0, 1, 0);
					break;
				case 4:
					func_388((*uParam3)[0], func_387(7), "RE_STF_VAL_V6_GREET_POS_B", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam3)[1], func_387(10), "RE_STF_VAL_V6_GREET_NEG", 648122183, 0, 0, 0, 1, 0);
					break;
				default:
					func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam3)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam3)[1], func_387(10), "RE_STF_VHT_V1_GREET_NEG", 648122183, 0, 0, 0, 1, 0);
					break;
				default:
					func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam3)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 4:
					func_388((*uParam3)[0], func_387(7), "RE_STF_BLW_V6_GREET_POS_B", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam3)[1], func_387(10), "RE_STF_BLW_V6_GREET_NEG", 648122183, 0, 0, 0, 1, 0);
					break;
				default:
					func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
					func_388((*uParam3)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
					break;
			}
			break;
		default:
			func_388((*uParam3)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
			func_388((*uParam3)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
			break;
	}
	func_390(iParam2, 0);
	func_389(0, 2);
}

bool func_224(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_473(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_499(fParam0))
	{
		return false;
	}
	return true;
}

float func_225(int iParam0, int iParam1)
{
	return func_432(iParam0, iParam1, 1, 1);
}

void func_226()
{
	task_play_upper_anim_facing_entity(&(uLocal_178[0]), &(Local_546[2]), Local_546[2]->f_1, Global_35, 900, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
	iLocal_564 = 5;
}

void func_227(int iParam0)
{
	if (!func_261(iParam0))
	{
		func_360(&iLocal_46, iParam0);
	}
}

void func_228()
{
	if (_does_volume_exist(Local_64.f_24))
	{
		return;
	}
	if (!func_90(&(uLocal_178[0]), 0, 1))
	{
		return;
	}
	func_357(&(Local_64.f_24), Global_36, 0f, 0f, 0f, 2f, 2f, 2f);
	_0xb56d41a694e42e86(Local_64.f_24, 0, 0, 0, -1, -1, 8);
	_0x7c00cfc48a782dc0(Local_64.f_24, &(uLocal_178[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
}

int func_229()
{
	return func_501(&Local_344, &uLocal_557, 0.5f, 1114636288, func_500(), 500, 3f, 2f, 0, 0, 1, -1082130432, 1, 0, 0);
}

int func_230(int iParam0, int iParam1)
{
	vVar12 = { func_502(Global_35, 1065353216) };
	sVar15 = func_110(1);
	sVar16 = func_110(2);
	switch (iParam0)
	{
		case 9:
			vVar0 = { -243.9014f, 764.795f, 117.1724f };
			vVar3 = { -255.3097f, 753.9832f, 116.0334f };
			vVar6 = { -244.3904f, 766.0107f, 117.1767f };
			vVar9 = { -260.1509f, 766.5687f, 116.4614f };
			break;
		case 4:
			vVar0 = { -809.2987f, -1327.793f, 42.66204f };
			vVar3 = { -805.478f, -1340.927f, 42.51833f };
			vVar6 = { -810.8365f, -1327.812f, 42.66229f };
			vVar9 = { -815.6164f, -1341.133f, 42.54564f };
			break;
	}
	if (func_503(vVar0, vVar3, vVar12))
	{
		_set_anim_scene_playback_list_bool(*iParam1, sVar15, true);
		return 1;
	}
	else if (!func_503(vVar6, vVar9, vVar12))
	{
		_set_anim_scene_playback_list_bool(*iParam1, sVar16, true);
		return 2;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_231(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 128);
	}
	else
	{
		func_270(iParam0, 128);
	}
}

bool func_232(int iParam0)
{
	if (!func_90(iParam0, 0, 1))
	{
		return false;
	}
	if (has_anim_event_fired(iParam0, 1673132633))
	{
		return false;
	}
	return true;
}

char* func_233(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 4:
			switch (iParam2)
			{
				case 8:
					return func_496("STF", func_494(iParam0), "GREET_POS_RESPONSE", func_495(iParam1));
				case 32:
					return func_496("STF", func_494(iParam0), "GREET_NEG_RESPONSE", func_495(iParam1));
				case 2:
					return func_496("STF", func_494(iParam0), "GREET_POS_RESPONSE", func_495(iParam1));
				case 4:
					return func_496("STF", func_494(iParam0), "GREET_NEG_RESPONSE", func_495(iParam1));
				case 128:
					return func_496("STF", func_494(iParam0), "INTERVENE_RESPONSE", func_495(iParam1));
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 8:
					return func_496("STF", func_494(iParam0), "GREET_POSITIVE_RESPONSE", func_495(iParam1));
				case 32:
					return func_496("STF", func_494(iParam0), "GREET_NEGATIVE_RESPONSE", func_495(iParam1));
				default:
					break;
			}
			break;
	}
	return "INVALID DIALOGUE BIT";
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	if (_does_scenario_point_exist(*iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		vVar1 = { func_504(iParam1, iParam2, iVar0) };
		sVar4 = func_505(iParam1, iParam2, iVar0);
		*iParam0 = _find_closest_active_scenario_point_of_type(vVar1, get_hash_key(sVar4), 1f, 1, false);
		if (_does_scenario_point_exist(*iParam0) && !is_scenario_occupied(vVar1, 0.5f, true))
		{
			vVar5 = { _get_scenario_point_coords(*iParam0, true) };
			vVar8 = { 0f, 0f, 0f };
			vVar11 = { 0.5f, 0.5f, 2f };
			func_125(&(Local_64.f_21), &(Local_64.f_22), vVar5, vVar8, vVar11, 1, 534496, 1, 2, 0);
			Jump @184; //curOff = 169
		}
		iVar0++;
	}
}

void func_235()
{
	if (!func_90(&(uLocal_178[0]), 0, 1))
	{
		return;
	}
	else if (func_52(1))
	{
		return;
	}
	else if (!func_237(&(uLocal_178[0]), iLocal_50))
	{
		if (func_256(&(uLocal_178[0]), 1))
		{
			func_239(&uLocal_187);
		}
		if (!func_52(536870912) && _does_scenario_point_exist(iLocal_199))
		{
			_task_use_scenario_point(&(uLocal_178[iLocal_213]), iLocal_199, 0, 0, true, false, 0, false, -1f, false);
			func_152(536870912);
		}
		return;
	}
	if (_get_anim_scene_progress(iLocal_50) > func_506(iVar564))
	{
		func_239(&uLocal_187);
		remove_anim_scene_entity(iLocal_50, func_143(0), &(uLocal_178[0]));
		func_210(0, 0, 1, 0);
		func_161(&uLocal_174);
		func_223(iVar897, iLocal_214, Local_623[0], &Local_708);
	}
}

void func_236(bool bParam0)
{
	if (!does_entity_exist(iLocal_192) || !func_237(iLocal_192, iLocal_50))
	{
		return;
	}
	if ((((!func_90(&(uLocal_178[0]), 0, 1) || !func_237(&(uLocal_178[0]), iLocal_50)) || has_entity_been_damaged_by_any_ped(iLocal_192)) || func_220(iLocal_192, 1, 1) < 2f) || bParam0)
	{
		remove_anim_scene_entity(iLocal_50, "door", iLocal_192);
	}
}

bool func_237(int iParam0, int iParam1)
{
	if (!func_185(iParam1) || is_entity_dead(iParam0))
	{
		return false;
	}
	return _0x3ab6c7b0bb0df4b1(iParam0, iParam1);
}

void func_238()
{
	if (!func_90(&(uLocal_178[1]), 0, 1))
	{
		return;
	}
	if (func_237(&(uLocal_178[1]), iLocal_50))
	{
		remove_anim_scene_entity(iLocal_50, func_149(), &(uLocal_178[1]));
	}
}

void func_239(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_507((*uParam0)[iVar0]);
		iVar0++;
	}
}

char* func_240(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return func_217(iParam1, iParam2, 67108864);
		case 1:
			return func_217(iParam1, iParam2, 134217728);
		case 2:
			return func_217(iParam1, iParam2, 16777216);
		case 3:
			return func_217(iParam1, iParam2, 33554432);
		default:
			break;
	}
	return func_217(iParam1, iParam2, 67108864);
}

void func_241(bool bParam0, bool bParam1)
{
	if (!func_90(&(uLocal_178[1]), 0, 1) || !func_90(iLocal_185, 0, 1))
	{
		return;
	}
	open_sequence_task(&iVar0);
	if (is_entity_dead(&(uLocal_178[0])) && !bLocal_96)
	{
		task_react(0, Global_35, Global_36, "TaskCombat_Panic", 3f, 1f, 4);
		bLocal_96 = true;
	}
	else if (bParam0)
	{
		task_turn_ped_to_face_entity(0, Global_35, 2000, -1082130432, -1082130432, -1082130432);
	}
	task_mount_animal(0, iLocal_185, -1, -1, 1f, 1025, 0, 0);
	if (bParam1)
	{
		task_follow_nav_mesh_to_coord(0, func_273(iVar895, 0), 1f, -1, 0.25f, 8193, 40000f);
		task_wander_standard(0, 40000f, 0);
	}
	close_sequence_task(iVar0);
	task_perform_sequence(&(uLocal_178[1]), iVar0);
	clear_sequence_task(&iVar0);
}

void func_242(bool bParam0)
{
	if (!func_90(&(uLocal_178[0]), 0, 0))
	{
		return;
	}
	func_190(0);
	open_sequence_task(&iVar0);
	task_react(0, Global_35, Global_36, "Default_Angry", 1f, 0, 4);
	if (bParam0)
	{
		task_combat_ped(0, Global_35, 0, 0);
	}
	func_253(&(uLocal_178[0]), &iVar0, 0, 0, 1, 1);
}

void func_243()
{
	if (((!func_7() || func_179(iLocal_48, 8388608)) || !func_90(&(uLocal_178[1]), 0, 1)) || !func_185(iLocal_50))
	{
		return;
	}
	if (func_508(iLocal_50, &(uLocal_178[1]), iVar564))
	{
		func_152(8388608);
	}
}

bool func_244(int iParam0, int iParam1)
{
	if (!func_90(iParam1, 0, 1) || !func_185(iParam0))
	{
		return false;
	}
	if (has_anim_event_fired(iParam1, -2113731257))
	{
		return true;
	}
	return false;
}

bool func_245(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_246()
{
	if (func_179(iLocal_48, 2097152))
	{
		if (func_224(-4.5f, 1, &(uLocal_178[1]), 1) && func_224(-4.5f, 1, Global_35, 1))
		{
			if (!func_179(iLocal_46, 32))
			{
				func_188(&(uLocal_178[1]), Global_35, 32, 1, -1065353216);
				func_227(32);
			}
			else if (!func_179(iLocal_46, 64))
			{
				func_188(Global_35, &(uLocal_178[1]), 64, 1, -1065353216);
				func_227(64);
			}
			else if (!func_179(iLocal_46, 128))
			{
				func_188(&(uLocal_178[1]), Global_35, 128, 1, -1065353216);
				func_227(128);
			}
			else if (func_106() && !func_179(iLocal_46, 16384))
			{
				func_188(&(uLocal_178[1]), Global_35, 16384, 1, -1065353216);
				func_241(1, 0);
				func_227(16384);
			}
			else if (func_497() && !func_179(iLocal_46, 32768))
			{
				func_188(&(uLocal_178[1]), Global_35, 32768, 1, -1065353216);
				func_227(32768);
				func_241(1, 0);
				bLocal_44 = true;
				return true;
			}
			else
			{
				bLocal_44 = true;
				return true;
			}
		}
	}
	else if (func_224(-4.5f, 1, &(uLocal_178[1]), 1) && func_224(-4.5f, 1, Global_35, 1))
	{
		if (!func_179(iLocal_46, 256))
		{
			func_188(&(uLocal_178[1]), Global_35, 256, 1, -1065353216);
			func_227(256);
		}
		else if (!func_179(iLocal_46, 512))
		{
			func_188(Global_35, &(uLocal_178[1]), 512, 1, -1065353216);
			func_227(512);
		}
		else if (!func_179(iLocal_46, 1024))
		{
			func_188(&(uLocal_178[1]), Global_35, 1024, 1, -1065353216);
			func_227(1024);
		}
		else if (func_106() && !func_179(iLocal_46, 16384))
		{
			func_188(&(uLocal_178[1]), Global_35, 16384, 1, -1065353216);
			func_241(1, 0);
			func_227(16384);
		}
		else if (func_497() && !func_179(iLocal_46, 32768))
		{
			func_188(&(uLocal_178[1]), Global_35, 32768, 1, -1065353216);
			func_241(1, 0);
			func_227(32768);
			bLocal_44 = true;
			return true;
		}
		else
		{
			bLocal_44 = true;
			return true;
		}
	}
	return false;
}

bool func_247(int iParam0, int iParam1, bool bParam2)
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

bool func_248(int iParam0, int iParam1, float fParam2)
{
	return func_509(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_249()
{
	if (!func_185(iLocal_50))
	{
		return true;
	}
	else if (((iLocal_214 == 0 || iLocal_214 == 1) || iLocal_214 == 3) || iLocal_214 == 4)
	{
		return true;
	}
	if (func_179(iLocal_48, 524288))
	{
		iVar0 = 0;
		fVar1 = 0.3823f;
	}
	else if (func_179(iLocal_48, 1048576))
	{
		iVar0 = 1;
		fVar1 = 0.7441f;
	}
	else
	{
		return true;
	}
	if (!func_90(&(uLocal_178[iVar0]), 0, 1))
	{
		return true;
	}
	if (!_0x3ab6c7b0bb0df4b1(&(uLocal_178[iVar0]), iLocal_50) || _get_anim_scene_progress(iLocal_50) > fVar1)
	{
		func_251(&(uLocal_178[iVar0]), 1, Global_35, 0);
		return true;
	}
	return false;
}

bool func_250(int iParam0)
{
	return (uLocal_22 && iParam0) != 0;
}

int func_251(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return 0;
	}
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (is_in_itemset(iParam0, &Global_1396084))
		{
			return 1;
		}
		add_to_itemset(iParam0, &Global_1396084);
		decor_set_bool(iParam0, "pedRoam_bInPedRoam", true);
		func_510(iParam0, 0);
		func_511(iParam0, iParam1);
		func_512(iParam0, iParam2);
		if (!is_string_null_or_empty(sParam3))
		{
			iVar0 = get_hash_key(sParam3);
			if (!func_513(iVar0))
			{
				decor_set_int(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 67108864;
		case 1:
			return 134217728;
		case 2:
			return 16777216;
		case 3:
			return 33554432;
		default:
			break;
	}
	return 67108864;
}

void func_253(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	close_sequence_task(*iParam1);
	if (!bParam5 || !is_entity_dead(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			_task_perform_sequence_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			task_perform_sequence(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		clear_sequence_task(iParam1);
	}
}

bool func_254()
{
	if ((Local_344.f_46 || !func_90(&(uLocal_178[2]), 0, 1)) || !func_90(&(uLocal_178[3]), 0, 1))
	{
		return true;
	}
	if (!func_52(512))
	{
		if (((has_anim_event_fired(&(uLocal_178[2]), -2113731257) || !_does_anim_scene_exist(iLocal_50)) || !_is_anim_scene_started(iLocal_50, false)) || !_0x3ab6c7b0bb0df4b1(&(uLocal_178[2]), iLocal_50))
		{
			task_turn_ped_to_face_entity(&(uLocal_178[2]), &(uLocal_178[1]), -1, -1082130432, -1082130432, -1082130432);
			func_152(512);
		}
	}
	else if (!func_52(1024))
	{
		if (((has_anim_event_fired(&(uLocal_178[3]), -2113731257) || !_does_anim_scene_exist(iLocal_50)) || !_is_anim_scene_started(iLocal_50, false)) || !_0x3ab6c7b0bb0df4b1(&(uLocal_178[3]), iLocal_50))
		{
			task_turn_ped_to_face_entity(&(uLocal_178[3]), &(uLocal_178[1]), -1, -1082130432, -1082130432, -1082130432);
			func_152(1024);
		}
	}
	else if (!func_52(8192))
	{
	}
	else if (!func_261(4096))
	{
		if (func_224(-4.5f, 1, &(uLocal_178[2]), 1) && func_224(-4.5f, 1, &(uLocal_178[3]), 1))
		{
			if (func_188(&(uLocal_178[2]), &(uLocal_178[3]), 4096, 0, -1065353216))
			{
				if (iLocal_214 == 3)
				{
					add_shocking_event_at_position(1722245163, get_entity_coords(&(uLocal_178[1]), true, false), -1f, -1f, -1f, -1f, -1f, -1, -1);
					func_227(4096);
					_task_move_in_traffic_3(&(uLocal_178[2]), Global_35, 1f, 0, 0);
					task_follow_to_offset_of_entity(&(uLocal_178[3]), &(uLocal_178[2]), 2f, -1f, 0f, 1f, -1, 1036831949, 1, 1, 0, 0, 1);
				}
			}
		}
	}
	else if (!func_261(8192))
	{
		if (func_188(&(uLocal_178[3]), &(uLocal_178[2]), 8192, 0, -1065353216))
		{
			func_227(8192);
		}
	}
	return false;
}

int func_255()
{
	if (iLocal_214 != 4)
	{
		func_152(-2147483648);
		return 1;
	}
	if (!func_52(2))
	{
		if (!func_90(iLocal_185, 0, 1) || (func_247(&(uLocal_178[1]), iLocal_185, 1) && !func_216(&(uLocal_178[1]), 713668775)))
		{
			open_sequence_task(&iVar0);
			_task_move_in_traffic_2(0, func_273(iVar897, 0), 1073741824, 1f, 0, 0);
			_task_move_in_traffic_2(0, func_273(iVar897, 1), 1073741824, 1f, 0, 0);
			func_253(&(uLocal_178[1]), &iVar0, 0, 0, 1, 1);
			func_152(2);
		}
	}
	if (func_52(-2147483648))
	{
		return 1;
	}
	if ((func_260(8) || func_260(32)) || ((func_257(&(uLocal_178[1]), func_273(iVar897, 0), 1) < 5f && !func_52(67108864)) && !func_52(134217728)))
	{
		func_73(uLocal_178[1], 4, Local_623[1], &Local_778, iVar897);
		func_152(-2147483648);
	}
	return 0;
}

bool func_256(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_514(iVar0) || func_515(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

float func_257(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_258(int iParam0, int iParam1)
{
	iVar0 = func_516(iParam0);
	iVar0 = (iVar0 || iParam1);
	decor_set_int(iParam0, "pedRoam_flags", iVar0);
}

int func_259(int iParam0, vector3 vParam1, char* sParam4)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return 0;
	}
	if (func_126(vParam1))
	{
		return 0;
	}
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (is_in_itemset(iParam0, &Global_1396084))
		{
			return 1;
		}
		if (!is_string_null_or_empty(sParam4))
		{
			iVar0 = get_hash_key(sParam4);
			if (!func_513(iVar0))
			{
				decor_set_int(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		add_to_itemset(iParam0, &Global_1396084);
		func_510(iParam0, 0);
		func_511(iParam0, 7);
		func_517(iParam0, vParam1);
		return 1;
	}
	return 0;
}

bool func_260(int iParam0)
{
	return func_179(iLocal_47, iParam0);
}

bool func_261(int iParam0)
{
	return func_179(iLocal_46, iParam0);
}

void func_262(int iParam0)
{
	if (!func_186(iParam0))
	{
		func_360(&iLocal_49, iParam0);
	}
}

void func_263(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	if (!is_entity_dead(iParam0))
	{
		if (does_blip_exist(*iParam1))
		{
			remove_blip(iParam1);
		}
		iVar0 = get_blip_from_entity(iParam0);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
		*iParam1 = _blip_add_for_entity(iParam2, iParam0);
		if (iParam3 != 0)
		{
			_blip_set_modifier(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			set_blip_sprite(*iParam1, iParam4, true);
		}
		if (!is_string_null_or_empty(sParam5))
		{
			set_blip_name_from_text_file(*iParam1, sParam5);
		}
	}
}

void func_264(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(iParam0->f_1), 256);
	}
	else
	{
		func_169(&(iParam0->f_1), 256);
	}
}

void func_265(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(iParam0->f_1), 128);
	}
	else
	{
		func_169(&(iParam0->f_1), 128);
	}
}

var func_266(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_267(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_518(sParam1));
}

int func_268(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_1;
}

int func_269(int iParam0)
{
	return &(Global_17504.f_42[iParam0]);
}

void func_270(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_271(int iParam0, float fParam1)
{
	iParam0->f_27 = fParam1;
}

bool func_272(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

Vector3 func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			return -2569.571f, 459.7099f, 145.5262f;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1362.5f, -983.7f, 66.6f;
				case 1:
					return -2569.571f, 459.7099f, 145.5262f;
				default:
					break;
			}
			break;
	}
	return -240.1862f, 740.1418f, 114.8284f;
}

void func_274(int* iParam0, var uParam1)
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
	func_519(iParam0, uParam1, 1);
	func_77(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_275(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_272(iParam0))
	{
		return;
	}
	if (func_117(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_336(iParam0, 56, 1);
		func_42(&(Global_1359489->f_40), 1);
	}
	func_520(iParam0, 0);
	func_347(iParam0, 4, 0);
	func_521(iParam0);
	func_348(iParam0);
	func_335(iParam0, 37, 1);
	bVar0 = func_292(Global_1360165[iParam0], 0);
	iVar1 = func_522(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_334(iParam0, 64, 1))
	{
		func_335(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_335(iParam0, 33, 1);
		func_335(iParam0, 34, 1);
		func_523(iParam0, 1056964608, -1, 1061158912);
		func_340(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_336(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_336(iParam0, 35, 1);
			if (bParam8)
			{
				func_336(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_524(iParam0, 0);
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
		func_335(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_336(iParam0, 33, 1);
		func_340(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_42(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_40(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_336(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_525(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_334(iParam0, 45, 1))
	{
		func_335(iParam0, 45, 1);
	}
	func_526(iParam0, 16, 1);
	func_335(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_292(func_527(iParam0), 0))
		{
			func_528(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

char* func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_277(int iParam0, int iParam1)
{
	if (!func_315(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_278(int iParam0, bool bParam1)
{
	if (func_90(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_529(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_279(var uParam0, var uParam1)
{
	if (func_102(uParam0->f_3, 16777216))
	{
		if (func_530(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_280(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_281(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_282(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_90(iParam0, 0, 1)))
	{
		if (!does_entity_exist(iParam3))
		{
			iParam3 = get_mount(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!is_entity_a_mission_entity(iParam0))
			{
				set_entity_as_mission_entity(iParam0, true, false);
			}
			clear_ped_tasks(iParam0, 1, 0);
			clear_ped_secondary_task(iParam0);
			fVar2 = func_281(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_531(&iParam0);
			}
			else if (does_entity_exist(iParam0))
			{
				open_sequence_task(&iVar0);
				task_smart_flee_ped(0, Global_35, 1000f, -1, 0, fParam1, 0);
				close_sequence_task(iVar0);
				_task_perform_sequence_2(iParam0, iVar0, 0.1f, 0.5f);
				clear_sequence_task(&iVar0);
				iVar1 = get_mount(iParam0);
				if (does_entity_exist(iVar1))
				{
					_0x39a2fc5af55a52b1(iVar1, -1);
				}
				_0x39a2fc5af55a52b1(iParam0, -1);
			}
		}
	}
}

void func_283(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_532(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_533(uParam0);
	func_534(uParam0);
	func_535(uParam0);
	if (!func_536(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_425(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_537();
	}
	if (!func_538(uParam0->f_3) && !func_102(uParam0->f_3, 256))
	{
		func_539(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_74(uParam0->f_173);
	func_74(uParam0->f_172);
}

void func_284(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_285(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_321() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_287(int iParam0)
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

void func_288(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_287(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_540(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_541(iVar0);
	*uParam0 = 0;
}

void func_289(var uParam0, var uParam1)
{
	if (_does_volume_exist(*uParam0))
	{
		_0x74c2b3dc0b294102(*uParam0);
		_0xa1cfb35069d23c23(*uParam0);
		_delete_volume(*uParam0);
	}
	if (_0x91a5f9cbebb9d936(*uParam1))
	{
		remove_scenario_blocking_area(*uParam1, false);
	}
}

bool func_290(int iParam0)
{
	if (func_542(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_291()
{
	return true;
}

bool func_292(int iParam0, int iParam1)
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
	if (func_179(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_179(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_179(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_179(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_179(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_179(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_179(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_179(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_293(int iParam0)
{
	if (((func_294(iParam0, 1) && func_294(iParam0, 2)) && func_294(iParam0, 8)) && func_294(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_294(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_296(bool bParam0)
{
	if (bParam0)
	{
		return func_543(Global_1359489->f_4);
	}
	get_group_size(func_544(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_544(), iVar3);
		if (func_545(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_297(int iParam0)
{
	func_360(iParam0, 256);
}

void func_298(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

void func_299(char* sParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (is_string_null_or_empty((*uParam1)[iVar0]))
		{
			StringCopy((*uParam1)[iVar0], sParam0, 64);
			request_anim_dict((*uParam1)[iVar0]);
			return;
		}
		iVar0++;
	}
}

bool func_300(var uParam0)
{
	if (!func_546(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_546(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			uParam0->f_5 = _request_metaped_outfit(uParam0->f_1, uParam0->f_3);
			if (!_is_metaped_outfit_request_valid(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return false;
		}
		else if (!_0x610438375e5d1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_301(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_315(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_547(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_548(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_302(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_102(iParam0, 32))
	{
		if (func_549(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_550(Global_35, &(uParam1->f_12)) };
				if (!func_126(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_551(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_426(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_427());
		if (func_552(Global_1310750[iParam0], 33554432))
		{
			func_429(iVar0, func_428(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_429(iVar0, func_428(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_102(iParam0, 1))
		{
			func_553(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_554(iParam0);
}

bool func_303(int iParam0, var uParam1)
{
	*uParam1 = _0x74f0209674864cbd();
	if (!_0x1ac5a8ab50cfaa33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*Global_1310750)[iParam0]->f_4.f_4[iVar0]->f_1 != -1)
		{
			func_555(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_170(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_556(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_556(iParam0));
		fVar1 = 60f;
	}
	_0x9b6a58fdb0024f12(*uParam1, 35f);
	_0x954451ea2d2120fb(*uParam1, fVar2);
	_0x0f4f6c4ce471259d(*uParam1, (fVar2 + fVar1));
	_0x4a7d73989f52eb37(*uParam1, (fVar2 + 10f));
	_0x8f8c84363810691a(*uParam1, 7f);
	_0x2b8af29a78024bd3(*uParam1);
	return true;
}

void func_304(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_557(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_102(iParam0, 1))
			{
				if (func_170(iParam0, 2))
				{
				}
			}
			func_558(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_559(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_559(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_164(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_305(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_547(iParam1))
	{
		if (!func_560(iParam1, iVar0))
		{
			vVar4 = { func_301(iParam1, iVar0) };
			if (!func_126(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_310(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_561(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_126(vVar4))
	{
	}
	return vVar1;
}

int func_306(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_58("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_307(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_547(iParam0))
	{
		vVar1 = { func_301(iParam0, iVar0) };
		if (func_562(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_308(var uParam0)
{
	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = create_tracked_point();
		if (uParam0->f_7 == 0)
		{
		}
		set_tracked_point_info(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = _0xdfe332a5da6fe7c9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_309(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_563(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_564(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_126(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_565(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *uParam0->f_12[iVar1] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_306(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_310(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_304(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_102(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_311(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (_0x0365000d8bf86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (_0x0365000d8bf86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { _0x865732725536ee39(&(uParam0->f_10)) };
		return true;
	}
	return false;
}

bool func_312(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_566(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_567(iParam0, uParam2))
	{
		return false;
	}
	if (!func_568(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_569(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_313(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_314(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					_0x39816f6f94f385ad(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					_0x39816f6f94f385ad(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					_0x39816f6f94f385ad(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					_0x39816f6f94f385ad(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					_0x39816f6f94f385ad(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}
	return false;
}

bool func_315(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_316(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_317(int iParam0, int iParam1)
{
	if (func_570(iParam0))
	{
		return;
	}
	if (func_571(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602]->f_1 = iParam1;
	Global_36581[Global_36602] = iParam0;
	Global_36602++;
}

void func_318(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_270(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_319(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			return 0;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 10:
			return 3;
	}
	return 0;
}

int func_320(int iParam0, int iParam1)
{
	iVar0 = func_572(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

int func_321()
{
	return Global_1572887->f_12;
}

bool func_322(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_323(int iParam0, bool bParam1)
{
	switch (func_573(iParam0))
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

int func_324(int iParam0, bool bParam1, bool bParam2)
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

void func_325(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_290(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_326(int iParam0, bool bParam1)
{
	if (func_290(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_327(int iParam0, bool bParam1)
{
	if (func_290(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_328(int iParam0, bool bParam1)
{
	if (func_290(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_329()
{
	return true;
}

bool func_330(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_331(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_331(int iParam0)
{
	return iParam0 > -1;
}

int func_332(int iParam0)
{
	return 1268180497;
}

void func_333(int iParam0, int iParam1, bool bParam2)
{
	if (!func_331(iParam0))
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

bool func_334(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_331(iParam0))
		{
			return false;
		}
	}
	func_574(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_335(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_331(iParam0))
		{
			return;
		}
	}
	func_574(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_336(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_331(iParam0))
		{
			return;
		}
	}
	func_574(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_337(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_575(iParam0);
	if (!func_272(iParam0) || is_entity_dead(iVar0))
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

void func_338(int iParam0, int iParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_339(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_331(iParam0))
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
					iParam4 = func_576(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_577((*Global_1360165)[iParam0]->f_4.f_2) || func_578((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_576(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_579((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_580(iParam0, 0))
					{
						func_336(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_581(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_335(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_292(func_575(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_292(func_527(iParam0), 0))
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

void func_340(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_335(iParam0, 50, 1);
		func_335(iParam0, 48, 1);
		func_335(iParam0, 49, 1);
		func_335(iParam0, 51, 1);
		func_335(iParam0, 52, 1);
		func_335(iParam0, 54, 1);
		func_335(iParam0, 55, 1);
	}
	else
	{
		func_336(iParam0, 50, 1);
		func_336(iParam0, 48, 1);
		func_336(iParam0, 49, 1);
		func_336(iParam0, 51, 1);
		if (bParam3)
		{
			func_336(iParam0, 54, 1);
		}
		else
		{
			func_335(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_336(iParam0, 52, 1);
			if (bParam3)
			{
				func_336(iParam0, 55, 1);
			}
		}
		else
		{
			func_335(iParam0, 52, 1);
			if (!bParam3)
			{
				func_335(iParam0, 55, 1);
			}
		}
	}
}

void func_341(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_272(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_582(iParam0, bParam3);
	}
	else
	{
		func_583(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_584(iParam0, bParam3);
	}
	else
	{
		func_585(iParam0, bParam3);
	}
}

bool func_342(int iParam0, int iParam1)
{
	if (!func_272(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_586(iParam0, iParam1);
	return bVar0;
}

void func_343(int iParam0, int iParam1, bool bParam2)
{
	if (!func_272(iParam0))
	{
		return;
	}
	if (!func_342(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_336(iParam0, 25, 1);
	}
}

void func_344(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_587(iParam2))
		{
			iVar0 = func_588(iParam2, -1);
			if (func_589(iParam1, iVar0))
			{
				if (func_590(iParam1, iVar0))
				{
					if (func_591(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_592(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_593(iParam0, iParam1, 0);
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
			func_336(iParam0, 66, 0);
		}
	}
}

void func_345(int iParam0)
{
	func_594(iParam0);
	func_595(iParam0, 0);
}

void func_346(int iParam0, int iParam1)
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

void func_347(int iParam0, int iParam1, bool bParam2)
{
	if (!func_331(iParam0))
	{
		return;
	}
	func_596(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_348(int iParam0)
{
	func_336(iParam0, 36, 1);
}

bool func_349(int iParam0)
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

void func_350(int iParam0, int iParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_597(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_597(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_351(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_272(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

int func_352(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	if (!func_331(iParam1))
	{
		return 0;
	}
	iVar0 = func_527(iParam1);
	if ((!does_entity_exist(iVar0) || !func_292(iVar0, 0)) || (bParam3 && !func_598(iParam1)))
	{
		if (bParam2)
		{
			if (func_599(iParam1, 1) != 0)
			{
				iVar0 = func_600(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (does_entity_exist(iVar0) && func_292(iVar0, 0))
	{
		*uParam0 = 2;
		(*Global_1360165)[iParam1]->f_70.f_2 = 0;
		func_601(iParam1, iVar0);
		func_602(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_353()
{
	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == get_id_of_this_thread())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_354(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_603(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_604(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_605(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_606(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_135(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (has_model_loaded(uParam0->f_1))
			{
				bVar0 = (does_entity_exist(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_603(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_604(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_607(&(uParam0->f_22)));
					Var2 = { func_603(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_604(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_605(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_608(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_609(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AA";
		case 1:
			return "AA_2";
		case 2:
			return "AM";
		case 3:
			return "AM_2";
		case 4:
			return "AP";
		case 5:
			return "AMD";
		case 6:
			return "BR";
		case 7:
			return "BT";
		case 8:
			return "BA";
		case 9:
			return "BTR";
		case 10:
			return "CA";
		case 11:
			return "CR";
		case 12:
			return "CP";
		case 13:
			return "CR";
		case 14:
			return "CQ";
		case 15:
			return "CC";
		case 16:
			return "CW";
		case 17:
			return "DAA";
		case 18:
			return "DAB";
		case 19:
			return "DAS";
		case 20:
			return "DJ";
		case 21:
			return "DIB";
		case 22:
			return "DOMD";
		case 23:
			return "DM";
		case 24:
			return "DC";
		case 25:
			return "DD";
		case 26:
			return "DW";
		case 27:
			return "ES";
		case 28:
			return "EX";
		case 29:
			return "FLO";
		case 30:
			return "FOOTR";
		case 31:
			return "FO";
		case 32:
			return "GP";
		case 33:
			return "HAT";
		case 34:
			return "HR";
		case 35:
			return "HR_2";
		case 36:
			return "HU";
		case 37:
			return "IK";
		case 38:
			return "IR";
		case 39:
			return "IT";
		case 40:
			return "KV";
		case 41:
			return "KT";
		case 42:
			return "KT_V2";
		case 64:
			return "KD";
		case 65:
			return "KS";
		case 43:
			return "LRU";
		case 44:
			return "GELRC";
		case 45:
			return "LSF";
		case 46:
			return "LP";
		case 47:
			return "LDRUNK";
		case 48:
			return "LDRUNK_V1";
		case 49:
			return "LDRUNK_V1_2";
		case 50:
			return "LDRUNK_V2";
		case 51:
			return "LDRUNK_V2_2";
		case 52:
			return "LF";
		case 53:
			return "MC";
		case 54:
			return "MC_2";
		case 55:
			return "OR";
		case 56:
			return "OT";
		case 57:
			return "PAR";
		case 58:
			return "PT";
		case 59:
			return "PP";
		case 60:
			return "PISS";
		case 61:
			return "PCA";
		case 62:
			return "PO";
		case 63:
			return "PW";
		case 66:
			return "RL";
		case 67:
			return "RP";
		case 68:
			return "RD";
		case 69:
			return "FND_STD";
		case 70:
			return "SAM";
		case 71:
			return "SAF";
		case 72:
			return "SOFF";
		case 73:
			return "SS";
		case 74:
			return "SB";
		case 75:
			return "SB_2";
		case 76:
			return "STR";
		case 77:
			return "STF";
		case 78:
			return "TC";
		case 79:
			return "TB";
		case 80:
			return "TC";
		case 81:
			return "TOWNR";
		case 82:
			return "TOWNR_2";
		case 83:
			return "TWW";
		case 84:
			return "TA";
		case 85:
			return "TGH";
		case 86:
			return "TWO";
		case 87:
			return "TWO_2";
		case 88:
			return "TH";
		case 89:
			return "WT";
		case 90:
			return "WA";
		case 91:
			return "WC";
		case 92:
			return "W";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

void func_356(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, func_427());
	}
}

void func_357(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_427());
	}
}

void func_358(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

int func_359()
{
	return Global_1894899->f_2;
}

void func_360(int iParam0, int iParam1)
{
	func_610(iParam0, iParam1);
}

bool func_361(int iParam0, int iParam1, bool bParam2)
{
	if (!func_362(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_611(iParam0);
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
		if (!func_612(iParam0, 1))
		{
			return false;
		}
	}
	return func_613(iParam0, 0, bParam2) >= iParam1;
}

bool func_362(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_363(int iParam0, int iParam1)
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

int func_364(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_365(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_366(int iParam0, int iParam1, bool bParam2)
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

int func_367(int iParam0)
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

bool func_368(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!does_entity_exist((*uParam1)[iVar0]->f_6))
		{
			(*uParam1)[iVar0]->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_369(var uParam0)
{
	return uParam0;
}

bool func_370(int iParam0)
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

bool func_371(int iParam0)
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

void func_372(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_373(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_614(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_77(uParam2, 0, 0, 1, 0);
				func_169(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_615(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_270(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_374(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_3(iParam4, 32);
		func_519(iParam1, uParam2, 0);
		iVar5 = func_616(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_77(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_3(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_3(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_3(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_3(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_3(iParam4, 8388608) || func_3(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_3(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_3(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_376(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_376(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_3(iParam4, 67108864))
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
				iParam6 = func_617(uParam0);
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
			if (func_3(iParam4, 268435456))
			{
				iVar8 = func_618(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_619(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_376(iParam1, 23))
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
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_375(*uParam0, 1, 1);
			}
			else
			{
				func_375(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_375(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_376(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_377(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_620(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_378(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_621(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_379(int iParam0)
{
	if (func_3(iParam0, 4))
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
	if (func_3(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_3(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_380(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_622(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_623(Global_35)) || func_624(Global_35)) || func_625(Global_35));
	fVar12 = -1f;
	if (func_41(&(iParam1->f_13)))
	{
		fVar12 = func_162(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_287((*uParam4)[iVar0]->f_6);
		func_626(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_627(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_628(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_77(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_629(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_519(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_630(iParam1, fParam6, iParam1->f_9))
					{
						func_161(&(iParam1->f_18));
						if (bVar6)
						{
							func_629(uParam4, 0, 0);
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
		func_631(iParam1, fParam2);
	}
	return bVar5;
}

void func_381(var uParam0)
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

void func_382(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_632((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_631(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_383(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_633(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_634(iParam1, 0);
				func_519(iParam1, uParam2, func_376(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_384(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_161(&(iParam1->f_18));
			return false;
		}
		else if (func_41(&(iParam1->f_18)))
		{
			func_40(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_41(&(iParam1->f_18)))
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
	return func_200(&(iParam1->f_18), fParam2);
	return true;
}

void func_385(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_626(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_386(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

char* func_387(int iParam0)
{
	if (func_635(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_388(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_287(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_636(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_637(iParam0->f_6, iParam0->f_5, 0);
			}
			func_638(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_639(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_389(int iParam0, int iParam1)
{
	iLocal_17[iParam0] = iParam1;
}

void func_390(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_40(&(iParam0->f_18));
}

void func_391(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_393() - fParam1);
	func_640(uParam0, 1);
	func_641(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_392(var uParam0)
{
	return func_160(*uParam0, 2);
}

float func_393()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_394(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_395(int iParam0, int iParam1)
{
	if (!func_394(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_396(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

Vector3 func_397(var uParam0)
{
	return uParam0->f_51;
}

void func_398(int iParam0, int iParam1)
{
	iParam0->f_21 = iParam1;
}

bool func_399()
{
	return &Global_1935436 == 2;
}

void func_400(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_401(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_102(iParam0, 2))
	{
		func_643(iParam0, func_642(iParam1));
	}
	else
	{
		func_644(iParam0, func_6());
	}
	fVar0 = (1f + (to_float((Global_17504.f_42[iParam0]->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_645(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_646(iParam0, 0);
	func_647(iParam0);
	func_648(1);
	set_ped_config_flag(Global_35, 514, true);
	if (!get_mission_flag())
	{
		set_random_event_flag(true);
	}
	_0x33d51f801cb16e4f();
	(*Global_1310750)[iParam0]->f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_102(iParam0, 16))
	{
		func_402(iParam0, 0, 0, 0, 0);
	}
}

void func_402(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_649() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_315(iVar1) && !func_102(iVar1, iParam2)) && (!bParam3 || !func_417(iVar1))) && (!bParam4 || !func_650(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_651(iVar0);
			}
		}
		iVar0++;
	}
}

int func_403(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_404(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_552(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_102(uParam0->f_3, 1073741824))
			{
				func_652(2, -1, 0, 0, 0);
			}
			else
			{
				func_652(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_652(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_653(1, uParam0->f_177))
				{
					func_654(16, uParam0->f_177);
					func_655(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_656(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_652(8, -1, 0, 0, 0);
	}
}

int func_405()
{
	if (func_657(Global_1935630->f_44))
	{
		if (_is_weapon_sniper(Global_1935630->f_44))
		{
			if (_0xa24c1d341c6e0d53(1, 1, 1))
			{
				if (is_player_free_aiming(player_id()))
				{
					return 1;
				}
			}
		}
		else if (func_658())
		{
			return 1;
		}
	}
	return 0;
}

float func_406(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_102(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_102(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_102(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_102(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_102(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_102(uParam0->f_3, 1))
		{
		}
		else if (func_102(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_407(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	iParam2 = iParam2;
	if (is_entity_dead(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (is_entity_a_ped(uParam0->f_6) && !_0x5102307ce88798eb(get_ped_index_from_entity_index(uParam0->f_6)))
			{
				request_ped_visibility_tracking(get_ped_index_from_entity_index(uParam0->f_6));
			}
			else if (func_659(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (is_entity_occluded(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (is_entity_a_ped(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = _0x164cecc59e70df86(get_ped_index_from_entity_index(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = is_tracked_ped_visible(get_ped_index_from_entity_index(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = _0xc8ccdb712fbcba92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (is_entity_occluded(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !is_entity_a_ped(uParam0->f_6))
					{
						fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
					}
					if (func_660(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_393() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_408(var uParam0, int iParam1, float fParam2)
{
	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((does_entity_exist((*uParam0)[iVar0]->f_6) && (*uParam0)[iVar0]->f_7 > 0f) && is_entity_on_screen((*uParam0)[iVar0]->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (*uParam0)[iVar0]->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_172(uParam0);
	return true;
}

bool func_409()
{
	return (Global_1894899 & 1 != 0 && func_359() != -1);
}

bool func_410(var uParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_411(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_662(func_661());
	if (func_3(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_3(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_3(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_412(int iParam0, int iParam1)
{
	return (func_403(iParam0) && iParam1) != 0;
}

bool func_413(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	_get_weather_type_transition(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_663(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_664(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_665(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_666(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_667(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_668(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_669(iVar3))
	{
		return true;
	}
	return false;
}

bool func_414(bool bParam0)
{
	if (func_670(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_415(int iParam0)
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

bool func_416(int iParam0, bool bParam1, bool bParam2)
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
		if (func_671())
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
		iVar0 = func_672(&(Global_1898164->f_1[0]));
		if (func_322(iVar0) && func_673((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_674(&(Global_1898164->f_1[0])))
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

bool func_417(int iParam0)
{
	if (!func_315(iParam0))
	{
		return false;
	}
	if (func_675(64) && func_676(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_418()
{
	return Global_1894899 & 4 != 0;
}

int func_419(int iParam0)
{
	if (!func_677(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_420(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_421(vector3 vParam0, int iParam3)
{
	if (!func_420(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_422(vector3 vParam0)
{
	if (func_126(vParam0))
	{
		return false;
	}
	fVar0 = func_281(func_409(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_423(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_id();
	if (!bParam4)
	{
		if (_0x1a51bfe60708e482(iVar0))
		{
			if (get_player_target_entity(iVar0, &iVar1))
			{
				if (!is_entity_a_mission_entity(iVar1))
				{
					if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
					{
						func_161(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (_0x6c54e69516cc56bd(iVar0) > 0)
	{
		func_161(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_41(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_43(uParam0, fParam2))
		{
			return true;
		}
		if (func_41(uParam0))
		{
			func_40(uParam0);
		}
	}
	return false;
}

bool func_424(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_425(vector3 vParam0, int iParam3)
{
	if (func_126(vParam0))
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
			if (func_562(vVar2, vParam0, 2f, 1))
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

float func_426(int iParam0)
{
	if (!func_315(iParam0))
	{
		return 0f;
	}
	if (!func_678(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_427()
{
	return "unnamed";
}

char* func_428(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_429(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_553(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_431()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

float func_432(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

var func_433(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_434(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_679(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_435(int iParam0, bool bParam1, int iParam2)
{
	func_680(iParam2);
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
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		iParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		iParam0->f_13 = func_681(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_169(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_414(1))
						{
							func_169(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_414(1) || *iParam0 & 8192 != 0))
				{
					func_270(iParam0, 33554432);
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
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(iParam0->f_14))
		{
			if (func_682(iParam0))
			{
				iParam0->f_15 = func_454();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_454() - iParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_683(iParam0);
}

bool func_436(int iParam0, int iParam1)
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
			if (!func_684(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_225(iParam0, iVar2) <= func_685(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_437(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_686(iParam2, 1, 1, 1, 0))
	{
		func_169(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_687(iParam1, 1);
	func_537();
}

bool func_438(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_181(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_688(iParam1);
			if (func_689(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_690(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_687(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_687(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_439(int iParam0, int iParam1, int iParam2)
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
	if (func_691(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_688(iParam2);
		if (func_689(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_690(iParam2)
				{
					func_687(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_440(int iParam0, int iParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
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
	if (func_684(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_690(iParam1)
		{
			fVar3 = func_688(iParam1);
			if (iParam1->f_12 < fVar3)
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

bool func_441(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_454();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_442(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_692(iParam2);
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
			if (func_450(iParam2, iParam1))
			{
				func_687(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_443(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_693(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_450(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_687(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_444(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_694(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_687(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_687(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_695(iParam1, vVar0, vVar4))
					{
						func_687(iParam2, 1);
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
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_687(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_695(iParam1, vVar0, vVar7))
					{
						func_687(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_445(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_684(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_696(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_697(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_698(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_699(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_700(iParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_446(int iParam0, int iParam1)
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

bool func_447(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_454();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_448(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_701(iVar0, &iVar2))
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
	if (func_702(iVar0, iParam0))
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

int func_449(int iParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_450(int iParam0, int iParam1)
{
	if (func_703(iParam0))
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

bool func_451(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_432(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_452()
{
}

bool func_453(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_704(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_454();
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
						if (func_257(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_454();
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

int func_454()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_455()
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
	if ((func_454() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_456(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_685(iParam0);
	if (iParam0->f_12 > func_705(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_706(iParam1);
	iVar1 = func_707(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_457(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_708(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_458(int iParam0, int iParam1)
{
	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_709(iParam0, iParam1, 1))
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
					if (!func_710(iParam1, iParam0))
					{
						if (func_257(iVar4, Global_36, 1) < 7f)
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

bool func_459(int iParam0, int iParam1)
{
	if (!func_711(0))
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

bool func_460(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_454();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_461(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_462(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_454();
	}
	else if (func_454() - iParam1->f_4) > func_712(iParam1)
	{
		return func_713(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_463(int iParam0, int iParam1)
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

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		case 1:
			return 12;
		case 2:
			return 9;
		case 3:
			return 3;
		case 76:
			return 3;
		case 4:
			return 12;
		case 7:
			return 3;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 3;
		case 82:
			return 13;
		case 87:
			return 13;
		case 17:
			return 12;
		case 18:
			return 12;
		case 92:
			return 12;
		case 119:
			return 12;
		case 27:
			return 12;
		case 29:
			return 4;
		case 95:
			return 13;
		case 31:
			return 12;
		case 32:
			return 11;
		case 33:
			return 11;
		case 34:
			return 11;
		case 97:
			return 12;
		case 98:
			return 12;
		case 38:
			return 12;
		case 40:
			return 11;
		case 102:
			return 2;
		case 48:
			return 13;
		case 49:
			return 12;
		case 106:
			return 2;
		case 107:
			return 12;
		case 54:
			return 13;
		case 57:
			return 12;
		case 109:
			return 2;
		case 58:
			return 12;
		case 111:
			return 12;
		case 112:
			return 2;
		case 113:
			return 3;
		case 115:
			return 3;
		case 67:
			return 13;
		case 64:
			return 13;
		case 65:
			return 12;
		default:
			break;
	}
	return 9;
	return 9;
}

void func_465(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_321() != -1)
	{
		return;
	}
	if ((Global_36616 && func_367(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_714(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_715(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_716(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_715(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_466(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_467(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_409())
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
				if (func_220(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_432(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_161(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_717(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_719(func_718(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_468(int iParam0)
{
	if (func_90(iParam0, 0, 1))
	{
		clear_ped_tasks(iParam0, 1, 0);
		clear_ped_secondary_task(iParam0);
	}
}

int func_469(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_372(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_153(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_720(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_721(558))
				{
					func_722(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_470(bool bParam0)
{
	func_723();
	if (bParam0 || func_473(Global_35, 0))
	{
		func_724();
	}
	else
	{
		func_725();
	}
}

void func_471(int iParam0)
{
	uLocal_22 = (uLocal_22 || iParam0);
}

void func_472(int iParam0, int iParam1)
{
	if (func_726(&uLocal_14, iParam0, 1))
	{
		return;
	}
	iLocal_24 = iParam0;
	iLocal_25 = iParam1;
}

bool func_473(int iParam0, bool bParam1)
{
	if (func_90(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

char* func_474(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return func_496("STF", func_494(iParam1), "AGGRO_THUG", func_495(iParam2));
		case 1:
			return func_496("STF", func_494(iParam1), "DECLINE", func_495(iParam2));
		case 2:
			return "CHALLENGE_THREATEN";
		case 3:
			return "IGNORING_YOU";
		case 4:
			return "GENERIC_INSULT_HIGH_NEUTRAL";
		case 5:
			return "OPENS_FIRE";
		case 6:
			return "NO_IDEA";
		case 7:
			return "FIGHT";
		case 8:
			return func_496("STF", func_494(iParam1), "INTERVENE_RESPONSE", func_495(iParam2));
		case 9:
			return func_496("STF", func_494(iParam1), "NORMAL_DRUNK", func_495(iParam2));
		case 10:
			return func_496("STF", func_494(iParam1), "WAIT_OLD", func_495(iParam2));
		case 11:
			return func_496("STF", func_494(iParam1), "GREET_POS_RESPONSE", func_495(iParam2));
		case 12:
			return func_496("STF", func_494(iParam1), "GREET_NEG_RESPONSE", func_495(iParam2));
		case 13:
			return func_496("STF", func_494(iParam1), "GREET_POS_RESPONSE", func_495(iParam2));
		case 14:
			return func_496("STF", func_494(iParam1), "GREET_NEG_RESPONSE", func_495(iParam2));
		case 15:
			return "DEFUSE_RESPONSE";
		case 16:
			return func_496("STF", func_494(iParam1), "AGGRO_THUG", func_495(iParam2));
		default:
			break;
	}
	return "";
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 2;
		case 3:
			return 2;
		case 4:
			return 0;
		case 5:
			return 2;
		case 6:
			return 0;
		case 7:
			return 3;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 1;
		case 16:
			return 0;
		default:
			break;
	}
	return -1;
}

void func_476(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 3:
					if (bParam3)
					{
						func_388((*uParam2)[0], func_387(7), "RE_STF_VAL_V5_GREET_POS_OUT", -163964935, 0, 0, 0, 1, 0);
						func_388((*uParam2)[1], func_387(10), "RE_STF_VAL_V5_GREET_NEG_OUT", 648122183, 0, 0, 0, 1, 0);
						func_389(0, 5);
					}
					else
					{
						func_388((*uParam2)[0], func_387(7), "RE_STF_VAL_V5_GREET_POS_IN", -163964935, 0, 0, 0, 1, 0);
						func_388((*uParam2)[1], func_387(10), "RE_STF_VAL_V5_GREET_NEG_IN", 648122183, 0, 0, 0, 1, 0);
						func_389(0, 4);
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 2:
				case 3:
					if (bParam3)
					{
						func_388((*uParam2)[0], func_387(7), "RE_STF_VHT_V5_GREET_POS_OUT", -163964935, 0, 0, 0, 1, 0);
						func_388((*uParam2)[1], func_387(10), "RE_STF_VHT_V5_GREET_NEG_OUT", 648122183, 0, 0, 0, 1, 0);
						func_389(0, 5);
					}
					else
					{
						func_388((*uParam2)[0], func_387(7), "RE_STF_VHT_V5_GREET_POS_IN", -163964935, 0, 0, 0, 1, 0);
						func_388((*uParam2)[1], func_387(10), "RE_STF_VHT_V5_GREET_NEG_IN", 648122183, 0, 0, 0, 1, 0);
						func_389(0, 4);
					}
					break;
			}
			break;
	}
}

void func_477(int iParam0, int* iParam1, var uParam2)
{
	if (iParam0 == 9)
	{
		func_388((*uParam2)[0], func_387(7), "RE_STF_VAL_V6_GREET_POS_UNCLE", -163964935, 0, 0, 0, 1, 0);
		func_388((*uParam2)[1], func_387(10), "RE_STF_VAL_V6_GREET_NEG_UNCLE", 648122183, 0, 0, 0, 1, 0);
	}
	else
	{
		func_388((*uParam2)[0], func_387(7), "RE_STF_BLW_V6_GREET_POS_UNCLE", -163964935, 0, 0, 0, 1, 0);
		func_388((*uParam2)[1], func_387(10), "RE_STF_BLW_V6_GREET_NEG_UNCLE", 648122183, 0, 0, 0, 1, 0);
	}
	func_390(iParam1, 0);
	func_389(1, 2);
}

void func_478(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_507(&iVar0);
}

bool func_479(int iParam0, char* sParam1, int iParam2)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0))
		{
			if (has_anim_event_fired(iParam0, get_hash_key(sParam1)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_480(int* iParam0, var uParam1)
{
	func_388((*uParam1)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
	func_388((*uParam1)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
	func_390(iParam0, 0);
	func_389(1, 6);
}

void func_481(vector3 vParam0)
{
	func_727(1891783641, vParam0, 1);
}

void func_482(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 9:
			iVar0 = func_489(1);
			set_blocking_of_non_temporary_events(iVar0, true);
			break;
		case 10:
			iVar0 = func_489(1);
			set_blocking_of_non_temporary_events(iVar0, true);
			break;
		case 4:
			iVar0 = func_489(508);
			set_blocking_of_non_temporary_events(iVar0, true);
			break;
	}
	func_732(uParam0, func_728(iParam1), "", func_729(iParam1, iParam2, iParam3), 0, func_730(iParam1), func_731(iParam2), func_731(iParam2), -1082130432, -1082130432, 1127481344, 0);
}

void func_483(var uParam0, int iParam1, int iParam2)
{
	if (!func_90(iParam1, 0, 1) || !func_90(iParam2, 0, 1))
	{
		return;
	}
	vVar0 = { get_entity_coords(iParam1, true, false) };
	vVar3 = { get_entity_coords(iParam2, true, false) };
	vVar6 = { func_733(vVar0, vVar3) };
	uParam0->f_25 = _0x0eb78c2b156635b1(665633627, vVar6, 0f, 0f, 0f, 0.5f, 0.5f, 1f);
}

bool func_484(float fParam0, float fParam1, float fParam2)
{
	fVar0 = _get_anim_scene_progress(iLocal_50);
	if ((fVar0 < fParam1 && fVar0 > fParam0) && get_distance_between_coords(func_502(Global_35, 1065353216), Local_344.f_51, true) < fParam2)
	{
		return true;
	}
	return false;
}

void func_485(int iParam0, int iParam1)
{
	if (!func_90(&(uLocal_178[iParam0]), 0, 1))
	{
		return;
	}
	if (!func_90(&(uLocal_178[iParam1]), 0, 1))
	{
		return;
	}
	set_ped_config_flag(&(uLocal_178[iParam1]), 174, true);
	set_ped_config_flag(&(uLocal_178[iParam1]), 213, true);
	_0x789dabd18e9024db(&(uLocal_178[iParam0]), 29, 0);
	func_734();
	set_ped_using_action_mode(&(uLocal_178[iParam0]), true, 8000, 0);
	_0x630e7b01f091a197(&(uLocal_178[iParam0]), 1313545729);
	_0x630e7b01f091a197(&(uLocal_178[iParam1]), 1313545729);
	task_put_ped_directly_into_grapple(&(uLocal_178[iParam0]), &(uLocal_178[iParam1]), 0, 0, 0.2f, 0, 0);
	force_ped_motion_state(&(uLocal_178[iParam0]), 1926482157, false, 0, false);
	force_ped_motion_state(&(uLocal_178[iParam1]), 1926482157, false, 0, false);
	iLocal_183 = iParam0;
	iLocal_184 = iParam1;
	func_161(&uLocal_150);
	func_161(&uLocal_147);
}

float func_486(vector3 vParam0, int iParam3)
{
	return func_257(Global_35, vParam0, iParam3);
}

bool func_487(int iParam0, float fParam1, bool bParam2)
{
	if (is_entity_on_screen(iParam0) && func_735(Global_35, iParam0, 0, fParam1, bParam2))
	{
		return true;
	}
	return false;
}

void func_488(int iParam0, int iParam1)
{
	iVar0 = func_319(iParam0, iParam1);
	iVar1 = func_320(111, iVar0);
	iVar1++;
	func_736(111, iVar0, iVar1);
}

int func_489(int iParam0)
{
	iVar0 = func_737(iParam0);
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

void func_490(int iParam0)
{
	iLocal_565 = iParam0;
}

bool func_491(float fParam0, float fParam1)
{
	if (func_162(&uLocal_147) > fParam0)
	{
		return true;
	}
	if (func_220(&(uLocal_178[0]), 0, 1) < fParam1)
	{
		return true;
	}
	return false;
}

void func_492(int iParam0)
{
	if (!func_90(iParam0, 0, 1))
	{
		return;
	}
	_0x8301d87b1b89e219(iParam0, -1428509408);
	_0x789dabd18e9024db(iParam0, 32, 0);
}

void func_493(var uParam0, var uParam1, int iParam2)
{
	func_389(iParam2, 1);
	func_388((*uParam1)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
	func_388((*uParam1)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
	func_738((*uParam1)[0], 0, 0);
	func_738((*uParam1)[1], 0, 0);
}

char* func_494(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "VAL";
		case 10:
			return "VHT";
		case 4:
			return "BLW";
		default:
			break;
	}
	return "INVALID";
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 6;
		default:
			break;
	}
	return -1;
}

var func_496(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&cVar0, "RE_", 64);
	StringCopy(&cVar8, sParam1, 32);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, &cVar8, 64);
	if (iParam3 >= 0)
	{
		StringConCat(&cVar0, "_V", 64);
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		StringConCat(&cVar0, "_ALL", 64);
	}
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, sParam2, 64);
	return func_739(cVar0);
}

bool func_497()
{
	if (func_321() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_498(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 9:
			func_388((*uParam2)[0], func_387(4), "RE_STF_VAL_V1_PLAYER_ACCEPT", -163964935, 0, 0, 0, 1, 0);
			func_388((*uParam2)[1], func_387(6), "RE_STF_VAL_V1_PLAYER_DECLINE", 648122183, 0, 0, 0, 1, 0);
			break;
		case 10:
			func_388((*uParam2)[0], func_387(4), "RE_STF_VHT_V1_PLAYER_ACCEPT", -163964935, 0, 0, 0, 1, 0);
			func_388((*uParam2)[1], func_387(6), "RE_STF_VHT_V1_PLAYER_DECLINE", 648122183, 0, 0, 0, 1, 0);
			break;
		default:
			func_388((*uParam2)[0], func_387(7), "", -163964935, 0, 0, 0, 1, 0);
			func_388((*uParam2)[1], func_387(10), "", 648122183, 0, 0, 0, 1, 0);
			break;
	}
	func_390(uParam1, 0);
	func_389(0, 3);
}

bool func_499(float fParam0)
{
	if (func_740(1))
	{
		return true;
	}
	if (func_41(&uLocal_0) && !func_200(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

float func_500()
{
	switch (iVar897)
	{
		case 10:
			switch (iLocal_214)
			{
				case 0:
					return 10f;
				case 1:
					return 10f;
				case 3:
					return 10f;
				default:
					break;
			}
			return 10f;
		default:
			switch (iLocal_214)
			{
				case 0:
					return 10f;
				case 1:
					return 10f;
				case 3:
					return 10f;
				case 4:
					return 10f;
				default:
					break;
			}
			return 10f;
	}
	return 20f;
}

int func_501(var uParam0, var uParam1, float fParam2, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	func_563(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (func_564(uParam1, iParam5))
	{
		if (_is_ped_getting_into_a_mount_seat(Global_35, true) || is_ped_in_any_vehicle(Global_35, false))
		{
			fVar0 = (get_entity_speed(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (get_entity_speed(Global_35) * fParam6);
		}
	}
	if (func_741(uParam0, fParam2, 1114636288, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264, bParam14, 1))
	{
		return 1;
	}
	return 0;
}

Vector3 func_502(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { get_entity_coords(iParam0, false, false) };
	if (is_entity_dead(iParam0))
	{
		return vVar0;
	}
	vVar6 = { get_entity_forward_vector(iParam0) };
	func_742(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

bool func_503(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

Vector3 func_504(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return -240.9722f, 770.5749f, 117.085f;
						case 1:
							return -240.4874f, 769.4385f, 117.085f;
						case 2:
							return -240.1775f, 768.6014f, 117.085f;
						default:
							break;
					}
					return -240.9722f, 770.5749f, 117.085f;
				default:
					switch (iParam2)
					{
						case 0:
							return -311.4769f, 805.1859f, 117.9799f;
						case 1:
							return -311.6861f, 806.213f, 117.9799f;
						case 2:
							return -311.8987f, 807.0702f, 117.98f;
						default:
							break;
					}
					return -311.4769f, 805.1859f, 117.9799f;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 0:
					return 2947.972f, 526.3637f, 44.34212f;
				case 1:
					return 2945.712f, 528.1676f, 44.33343f;
				case 2:
					return 2948.965f, 526.3848f, 44.34282f;
				default:
					break;
			}
			return 2947.972f, 526.3637f, 44.34212f;
		case 4:
			return -815.7969f, -1318.883f, 42.67896f;
	}
	return 0f, 0f, 0f;
}

char* func_505(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam2)
			{
				case 0:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				case 1:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				case 2:
					return "WORLD_HUMAN_BARCUSTOMER";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 0:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				case 1:
					return "WORLD_HUMAN_DRINKING";
				case 2:
					return "WORLD_HUMAN_SMOKE_CIGAR";
				default:
					break;
			}
			break;
		default:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				default:
					break;
			}
			return "WORLD_HUMAN_BARCUSTOMER_BEER";
	}
	return "WORLD_HUMAN_BARCUSTOMER_BEER";
}

float func_506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.5987f;
		case 1:
			return 0.6171f;
		case 2:
			return 0.6024f;
		default:
			break;
	}
	return 1f;
}

void func_507(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_508(int iParam0, int iParam1, int iParam2)
{
	if ((!func_90(iParam1, 0, 1) || !func_185(iParam0)) || !func_201(iParam0, func_110(4)))
	{
		return false;
	}
	if (has_anim_event_fired(iParam1, 633058162))
	{
	}
	fVar0 = _get_anim_scene_progress(iParam0);
	switch (iParam2)
	{
		case 0:
			if (func_743(fVar0, 0.1913f, 0.455f))
			{
				_set_anim_scene_playback_list_bool(iParam0, func_110(4), true);
				return true;
			}
			break;
		case 1:
			if (func_743(fVar0, 0.2379f, 0.4888f))
			{
				_set_anim_scene_playback_list_bool(iParam0, func_110(4), true);
				return true;
			}
			break;
		case 2:
			if (func_743(fVar0, 0.2073f, 0.465f))
			{
				_set_anim_scene_playback_list_bool(iParam0, func_110(4), true);
				return true;
			}
			break;
	}
	return false;
}

bool func_509(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_510(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_state", iParam1);
}

void func_511(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_behavior", iParam1);
}

void func_512(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_target", iParam1);
}

bool func_513(int iParam0)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return false;
	}
	iVar0 = get_itemset_size(&Global_1396084);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = get_indexed_item_in_itemset(iVar2, &Global_1396084);
		if (_does_item_have_valid_base(iVar1))
		{
			if (decor_exist_on(iVar1, "pedRoam_hashKey"))
			{
				if (decor_get_int(iVar1, "pedRoam_hashKey") == iParam0)
				{
					return true;
				}
			}
		}
		iVar2++;
	}
	return false;
}

int func_514(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_515(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

int func_516(int iParam0)
{
	if (decor_exist_on(iParam0, "pedRoam_flags"))
	{
		iVar0 = decor_get_int(iParam0, "pedRoam_flags");
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_517(int iParam0, vector3 vParam1)
{
	decor_set_int(iParam0, "pedRoam_targetCoord", func_744(vParam1));
	decor_set_float(iParam0, "pedRoam_targetCoord_Z", vParam1.z);
}

char* func_518(char* sParam0)
{
	return sParam0;
}

void func_519(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_288(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_390(iParam0, 0);
		}
	}
}

void func_520(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_745(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_347(iParam0, 1, 0);
		}
	}
	func_347(iParam0, 16, bParam1);
}

void func_521(int iParam0)
{
	func_347(iParam0, 8, 0);
}

int func_522(int iParam0, bool bParam1)
{
	if (!func_272(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_746(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_523(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_272(iParam0))
	{
		iVar1 = func_575(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_747(iParam0);
		}
	}
	if (func_334(iParam0, 5, 1))
	{
		set_ped_config_flag(func_575(iParam0), 137, true);
	}
}

void func_524(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_575(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_575(iParam0), 204, false);
	}
}

void func_525(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_272(iParam0))
	{
		return;
	}
	if (func_117(iParam0))
	{
		if (!func_72(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_334(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_522(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_575(iParam0);
	if (((does_entity_exist(iVar1) && func_748(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_336(iParam0, 2, 1);
	}
	else
	{
		func_749(iParam0);
		func_336(iParam0, 1, 1);
	}
}

void func_526(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_272(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_527(int iParam0)
{
	if (!func_272(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_528(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_331(iParam1))
	{
		return;
	}
	iVar0 = func_527(iParam1);
	if (func_750(iParam1))
	{
		if (!func_598(iParam1))
		{
			return;
		}
	}
	func_335(iParam1, 39, 1);
	func_333(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_333(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_333(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_336(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_751(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_529(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		_0xe98d55c5983f2509(iParam0);
	}
	if (!get_ped_config_flag(iParam0, 178, true))
	{
		set_ped_config_flag(iParam0, 178, true);
	}
	if (get_ped_config_flag(iParam0, 297, true) != bParam2)
	{
		set_ped_config_flag(iParam0, 297, bParam2);
	}
	if (get_ped_config_flag(iParam0, 315, true))
	{
		set_ped_config_flag(iParam0, 315, false);
	}
	if (get_ped_config_flag(iParam0, 331, true))
	{
		set_ped_config_flag(iParam0, 331, false);
	}
	if (get_ped_config_flag(iParam0, 130, true))
	{
		set_ped_config_flag(iParam0, 130, false);
	}
	if (get_ped_config_flag(iParam0, 301, true))
	{
		set_ped_config_flag(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (_0x870708a6e147a9ad(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0)
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

void func_531(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
	}
	delete_ped(iParam0);
}

void func_532(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			Global_36581[iVar0]->f_1 = 3;
		}
		iVar0++;
	}
}

void func_533(var uParam0)
{
	if (func_287(uParam0->f_162))
	{
		func_288(&(uParam0->f_162), 1, 1);
	}
	if (func_287(uParam0->f_163))
	{
		func_288(&(uParam0->f_163), 1, 1);
	}
	if (func_287(uParam0->f_164))
	{
		func_288(&(uParam0->f_164), 1, 1);
	}
	if (func_287(uParam0->f_165))
	{
		func_288(&(uParam0->f_165), 1, 1);
	}
}

void func_534(var uParam0)
{
	if (uParam0->f_170)
	{
		func_752();
	}
}

void func_535(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_753(32);
		func_539(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_536(var uParam0)
{
	if (func_754(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_755(uParam0->f_3);
		func_404(uParam0, 0, 1);
		func_756(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_757(0, 0);
		return true;
	}
	return false;
}

void func_537()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_538(int iParam0)
{
	if (!func_315(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_539(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_396(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_321() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_540(int iParam0)
{
	return iParam0;
}

void func_541(int iParam0)
{
	if (!func_758(iParam0))
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

bool func_542(int iParam0)
{
	return iParam0 != 0;
}

int func_543(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_759(&iVar1, -2147483648);
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

int func_544()
{
	return get_player_group(get_player_index());
}

bool func_545(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_321() != -1)
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

bool func_546(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!has_model_loaded(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_547(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

bool func_549(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1075.036f, -498.9537f, 80.4572f };
					*(*uParam2)[1] = { -1058.055f, -609.5211f, 76.6181f };
					*(*uParam2)[2] = { -1272.208f, -612.5573f, 100.8638f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -2288.302f, -389.368f, 155.9838f };
					*(*uParam2)[1] = { -2267.837f, -294.2087f, 162.0459f };
					*(*uParam2)[2] = { -2588.6f, -283.9735f, 157.3797f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { -1751.366f, 174.5853f, 140.272f };
					*(*uParam2)[1] = { -1639.375f, -163.5104f, 165.0787f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -771.0659f, -259.0937f, 47.9193f };
					*(*uParam2)[1] = { -822.0638f, -500.4154f, 43.2726f };
					*(*uParam2)[2] = { -1024.218f, -401.8981f, 74.0529f };
					*(*uParam2)[3] = { -1006.993f, -282.9351f, 74.6298f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 4:
					*(*uParam2)[0] = { -1338.573f, 327.9119f, 84.6143f };
					*(*uParam2)[1] = { -1232.65f, 330.8496f, 62.4046f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 5:
					*(*uParam2)[0] = { -1502.984f, -885.5237f, 88.3171f };
					*(*uParam2)[1] = { -1297.384f, -819.8127f, 66.0834f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 350.4579f, 1090.999f, 185.1566f };
					*(*uParam2)[1] = { 92.55f, 1093.111f, 180.0293f };
					*(*uParam2)[2] = { 409.0284f, 1196.024f, 176.0849f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 749.1558f, 1391.218f, 169.0392f };
					*(*uParam2)[1] = { 655.3339f, 1501.052f, 182.3537f };
					*(*uParam2)[2] = { 564.7472f, 1351.075f, 181.0084f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 798.8331f, 1217.176f, 139.389f };
					*(*uParam2)[1] = { 796.767f, 1022.301f, 117.9023f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1499.724f, 1483.517f, 148.1553f };
					*(*uParam2)[1] = { 1762.153f, 1460.505f, 154.3694f };
					*(*uParam2)[2] = { 1791.473f, 1553.145f, 158.3201f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1592.016f, 838.9788f, 137.0506f };
					*(*uParam2)[1] = { 1481.788f, 983.7827f, 159.4282f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 11:
					*(*uParam2)[0] = { 2066.821f, 1396.182f, 161.616f };
					*(*uParam2)[1] = { 2018.585f, 1589.685f, 166.3078f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 1931.246f, 1417.71f, 175.205f };
					*(*uParam2)[1] = { 1758.616f, 1470.966f, 153.1616f };
					*(*uParam2)[2] = { 1908.101f, 1340.718f, 184.5229f };
					*(*uParam2)[3] = { 1758.631f, 1339.565f, 179.8116f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 906.3064f, 1862.921f, 276.5091f };
					*(*uParam2)[1] = { 1227.372f, 1910.686f, 303.6052f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 39.5976f, -446.5889f, 73.5138f };
					*(*uParam2)[1] = { 261.8906f, -501.4701f, 69.7941f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 147.7795f, 574.2345f, 124.4514f };
					*(*uParam2)[1] = { 353.6481f, 791.2978f, 158.3952f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 1152.273f, 1.4974f, 91.3795f };
					*(*uParam2)[1] = { 1229.58f, -41.3491f, 97.8027f };
					*(*uParam2)[2] = { 1388.351f, 191.7681f, 91.0511f };
					*(*uParam2)[3] = { 1182.174f, 249.1711f, 95.8012f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { 2436.349f, 1255.752f, 108.7815f };
					*(*uParam2)[1] = { 2581.654f, 1319.187f, 109.4025f };
					*(*uParam2)[2] = { 2648.991f, 1389.994f, 86.802f };
					*(*uParam2)[3] = { 2499.877f, 1520.766f, 84.1962f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 2886.699f, 650.0214f, 56.9408f };
					*(*uParam2)[1] = { 2841.172f, 901.8114f, 48.3778f };
					*(*uParam2)[2] = { 2789.388f, 789.1998f, 69.4871f };
					*(*uParam2)[3] = { 2838.36f, 650.3098f, 66.5798f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 1966.349f, 55.0459f, 77.6335f };
					*(*uParam2)[1] = { 1997.614f, 290.7841f, 80.4139f };
					*(*uParam2)[2] = { 2073.044f, 228.7493f, 69.5644f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 20:
					*(*uParam2)[0] = { 2515.785f, 798.911f, 69.7688f };
					*(*uParam2)[1] = { 2506.887f, 618.8073f, 68.6403f };
					*(*uParam2)[2] = { 2377.615f, 751.5095f, 66.3114f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 21:
					*(*uParam2)[0] = { 2128.213f, 1721.563f, 130.3847f };
					*(*uParam2)[1] = { 2264.183f, 1720.874f, 103.2933f };
					*(*uParam2)[2] = { 2134.791f, 1568.948f, 115.1957f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 22:
					*(*uParam2)[0] = { 2826.741f, 2204.882f, 155.551f };
					*(*uParam2)[1] = { 2838.074f, 1999.792f, 161.9055f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(*uParam2)[0] = { 350.8081f, 1195.732f, 176.1334f };
					*(*uParam2)[1] = { -9.8736f, 1100.082f, 171.5504f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 951.1178f, 411.6494f, 111.4674f };
					*(*uParam2)[1] = { 786.1444f, 1078.456f, 125.8602f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -784.4099f, 128.655f, 42.3724f };
					*(*uParam2)[1] = { -478.0183f, 232.7834f, 42.1853f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1148.99f, 1456.264f, 190.799f };
					*(*uParam2)[1] = { 840.1897f, 1221.47f, 141.6344f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1413.901f, -334.469f, 88.1597f };
					*(*uParam2)[1] = { 1222.652f, -59.931f, 93.5015f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1548.822f, -1190.659f, 49.1131f };
					*(*uParam2)[1] = { 1547.513f, -1410.952f, 60.6415f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { 2466.914f, -732.939f, 42.531f };
					*(*uParam2)[1] = { 2303.902f, -750.908f, 41.569f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { 1757.029f, -832.27f, 41.718f };
					*(*uParam2)[1] = { 1882.646f, -955.777f, 42.672f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { 2117.433f, -847.803f, 41.749f };
					*(*uParam2)[1] = { 2112.33f, -625.643f, 41.772f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 2552.283f, -208.465f, 43.013f };
					*(*uParam2)[1] = { 2725.735f, 32.896f, 51.048f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 2219.83f, -503.6095f, 41.0142f };
					*(*uParam2)[1] = { 2371.775f, -527.7825f, 40.7584f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 2157.784f, -459.4536f, 40.5431f };
					*(*uParam2)[1] = { 2354.891f, -401.4336f, 40.5042f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 26:
					*(*uParam2)[0] = { 3266.224f, 1664.717f, 60.269f };
					*(*uParam2)[1] = { 3221.388f, 1809.026f, 74.813f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 27:
					*(*uParam2)[0] = { 2782.415f, 634.97f, 74.323f };
					*(*uParam2)[1] = { 2594.708f, 556.157f, 75.742f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 3268.065f, 1618.25f, 51.5041f };
					*(*uParam2)[1] = { 3151.345f, 1476.824f, 42.9185f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 2524.41f, 1402.663f, 97.646f };
					*(*uParam2)[1] = { 2436.137f, 1254.158f, 109.722f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 2145.954f, 1592.128f, 118.3828f };
					*(*uParam2)[1] = { 2118.189f, 1395.341f, 146.675f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(*uParam2)[0] = { 2724.549f, -7.066f, 51.083f };
					*(*uParam2)[1] = { 2542.005f, -233.1396f, 41.4732f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 2300.604f, -441.226f, 41.797f };
					*(*uParam2)[1] = { 2569.006f, -361.3357f, 40.5728f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 762.142f, 1455.038f, 160.172f };
					*(*uParam2)[1] = { 581.92f, 1359.699f, 182.007f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1561.312f, 1602.54f, 188.8227f };
					*(*uParam2)[1] = { 1315.677f, 1471.669f, 160.1485f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.8591f };
					*(*uParam2)[1] = { -1627.641f, 266.7185f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.859f };
					*(*uParam2)[1] = { -1627.641f, 266.719f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -1090.74f, 151.3781f, 58.3089f };
					*(*uParam2)[1] = { -823.9262f, 278.8717f, 92.3226f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 1714.427f, -1933.318f, 45.6594f };
					*(*uParam2)[1] = { 1714.571f, -1856.846f, 48.5272f };
					*(*uParam2)[2] = { 1531.954f, -1706.023f, 57.3286f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(*uParam2)[0] = { -1736.774f, -836.8357f, 96.5171f };
					*(*uParam2)[1] = { -1915.833f, -682.8271f, 116.4542f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -755.4001f, -796.7909f, 49.7304f };
					*(*uParam2)[1] = { -1039.648f, -688.1265f, 69.6641f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 902.8263f, 386.1294f, 115.5771f };
					*(*uParam2)[1] = { 615.3056f, 258.5487f, 103.5037f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 874.3443f, 827.1644f, 114.901f };
					*(*uParam2)[1] = { 859.3398f, 590.4376f, 110.1404f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { -769.1578f, 299.2588f, 93.7465f };
					*(*uParam2)[1] = { -588.5746f, 443.7545f, 97.2538f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 442.6022f, -274.5149f, 141.8569f };
					*(*uParam2)[1] = { 252.7831f, -219.3386f, 129.8086f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 82.4531f, 27.6559f, 99.5123f };
					*(*uParam2)[1] = { 441.6833f, 325.2197f, 102.5464f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 24:
					*(*uParam2)[0] = { 2682.666f, 254.0104f, 62.8591f };
					*(*uParam2)[1] = { 2726.419f, 15.7709f, 48.8237f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 25:
					*(*uParam2)[0] = { 2166.428f, 1654.068f, 114.0645f };
					*(*uParam2)[1] = { 2375.665f, 1665.218f, 95.4254f };
					*(*uParam2)[2] = { 2402.211f, 1816.359f, 106.9185f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 1832.606f, -1986.944f, 43.5085f };
					*(*uParam2)[1] = { 1691.085f, -1896.396f, 47.2405f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 1375.404f, -1591.844f, 68.4645f };
					*(*uParam2)[1] = { 1603.71f, -1744.756f, 52.1714f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 816.4478f, -915.9297f, 49.4983f };
					*(*uParam2)[1] = { 1006.361f, -1293.403f, 53.9613f };
					*(*uParam2)[2] = { 1094.919f, -1166.476f, 67.619f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 31:
					*(*uParam2)[0] = { 810.3403f, -872.8113f, 51.4344f };
					*(*uParam2)[1] = { 825.1677f, -576.8741f, 79.2273f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 32:
					*(*uParam2)[0] = { 1018.101f, -922.2153f, 66.9381f };
					*(*uParam2)[1] = { 832.2029f, -891.5154f, 51.1305f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 33:
					*(*uParam2)[0] = { 1472.147f, -437.5275f, 75.9389f };
					*(*uParam2)[1] = { 1224.738f, -51.7863f, 93.1655f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_550(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_126(*(*uParam1)[iVar0]))
			{
				if (iVar1 < 0 || vdist2(vVar2, *(*uParam1)[iVar0]) < vdist2(vVar2, *(*uParam1)[iVar1]))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(*uParam1)[iVar1];
		}
	}
	return 0f, 0f, 0f;
}

void func_551(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_58("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_552(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_553(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_126(vParam0))
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
		if (func_424(vParam0))
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
	if (bParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, bParam9);
	}
	func_760(iVar0, bParam8);
	return iVar0;
}

void func_554(int iParam0)
{
	if (!func_315(iParam0))
	{
		return;
	}
	func_761(iParam0);
}

void func_555(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		_0x5d9b0baaf04cf65b(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		_0x19bc99c678fba139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_556(int iParam0)
{
	if (func_170(iParam0, 2))
	{
		return 200;
	}
	if (func_170(iParam0, 4))
	{
		return 70;
	}
	if (func_170(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_557(int iParam0)
{
	if (func_102(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_6() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_102(iParam0, 2);
		bVar1 = func_102(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_409())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_558(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_170(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_559(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_170(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_170(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_560(int iParam0, int iParam1)
{
	iVar0 = (func_548(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_561(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_126(vParam1))
	{
		return false;
	}
	if (func_566(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = vdist2(vParam1, Global_36);
	if (func_164(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_562(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_563(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	fVar0 = func_281(bParam6, fParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_569(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_454();
			iParam4->f_2 = func_257(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_569(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_454();
		iParam4->f_2 = func_257(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_564(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_454() - *uParam0) >= iParam1;
	}
	return false;
}

int func_565(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_126(*uParam0->f_12[iVar0]))
		{
			if (iVar1 < 0 || vdist2(Global_36, *uParam0->f_12[iVar1]) < vdist2(Global_36, *uParam0->f_12[iVar0]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_566(int iParam0, vector3 vParam1)
{
	if (!func_102(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_762(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_102(iParam0, 33554432))
	{
		if (func_763(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_567(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_170(iParam0, 128))
	{
		if (!get_ground_z_for_3d_coord(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (_0xbbe5b63effb08e68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_102(iParam0, 1) && !func_102(iParam0, 2))
	{
		if (func_102(iParam0, 4096) || func_102(iParam0, 2048))
		{
			if (func_764(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_568(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_2(&uParam0);
	if (!func_765())
	{
		return false;
	}
	return true;
}

bool func_569(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_766(vVar0, vParam0) > func_766(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_570(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_571(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return Global_36581[Global_36602]->f_1;
		}
		iVar0++;
	}
	return 3;
}

int func_572(int iParam0, int iParam1)
{
	iVar1 = func_767(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (&Global_17504.f_1003[iVar0] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_573(int iParam0)
{
	if (!func_674(iParam0))
	{
		return -1;
	}
	return func_768(iParam0);
}

int func_574(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_575(int iParam0)
{
	if (!func_331(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

int func_576(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_331(iParam0))
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
					if (func_323((*Global_1835011)[4]->f_1, 1))
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
					if (func_769(iVar0, 9, 11))
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
					if (func_323((*Global_1347702)[63]->f_15, 1) || func_578((*Global_1347702)[63]->f_15))
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
					if (func_769(iVar0, 9, 12))
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
					if (!func_323((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_330(18, 134217728, 1))
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
					if (func_769(iVar0, 9, 11))
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
					if (func_323((*Global_1347702)[134]->f_15, 1) || func_578((*Global_1347702)[134]->f_15))
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
					if (func_323((*Global_1835011)[38]->f_1, 1))
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
					if (func_769(iVar0, 9, 11))
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
					if (func_770(747937920, 1) && !func_323((*Global_1347702)[1]->f_15, 1))
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
	if (bParam3 && does_entity_exist(func_575(iParam0)))
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
	if (!func_342(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0]->f_3;
	}
	return iVar8;
}

bool func_577(int iParam0)
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
		iVar0 = func_768(iParam0);
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

bool func_578(int iParam0)
{
	iVar0 = func_573(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_579(int iParam0)
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

bool func_580(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_117(iParam0) || func_334(iParam0, 44, 1))
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

struct<7> func_581(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
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

void func_582(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	func_771(iVar0);
	func_336(iParam0, 60, 1);
	if (bParam1)
	{
		func_772(iParam0);
	}
}

void func_583(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	func_773(iVar0);
	func_335(iParam0, 60, 1);
	if (bParam1)
	{
		func_774(iParam0);
	}
}

void func_584(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	func_775(iVar0);
	if (iParam0 == 14)
	{
		func_776(iVar0);
	}
	func_336(iParam0, 61, 1);
	if (bParam1)
	{
		func_777(iParam0);
	}
}

void func_585(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	func_778(iVar0);
	func_335(iParam0, 61, 1);
	if (bParam1)
	{
		func_779(iParam0);
	}
}

bool func_586(int iParam0, int iParam1)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	func_780(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_587(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_588(int iParam0, int iParam1)
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
			iVar0 = func_781(296923297, iParam1);
			return func_782(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_781(1237718549, iParam1);
			return func_782(iVar0);
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

bool func_589(int iParam0, int iParam1)
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

bool func_590(int iParam0, int iParam1)
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

bool func_591(int iParam0, int iParam1)
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
	if (!func_589(iParam0, iVar0))
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

void func_592(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_593(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_589(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_589(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_589(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_589(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_589(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_589(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_589(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_589(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_589(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_589(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_589(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_589(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_589(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_589(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_589(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_589(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_589(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_589(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_589(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_589(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_589(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_589(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_589(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_589(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_589(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_589(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_594(int iParam0)
{
	func_783(iParam0, 1);
	func_783(iParam0, 128);
	func_783(iParam0, 256);
	func_783(iParam0, 512);
	func_783(iParam0, 1024);
	func_783(iParam0, 2048);
	func_783(iParam0, 4096);
	func_783(iParam0, 65536);
	func_783(iParam0, 16384);
	func_783(iParam0, 262144);
	func_783(iParam0, 524288);
	func_783(iParam0, 1048576);
	func_783(iParam0, 2097152);
	func_783(iParam0, 32768);
	func_783(iParam0, 131072);
	func_783(iParam0, 134217728);
	func_783(iParam0, 1073741824);
}

void func_595(int iParam0, bool bParam1)
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

void func_596(var uParam0, int iParam1, bool bParam2)
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

int func_597(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_657(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_657(iVar4) && iVar4 != iVar0)
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
	if (func_321() == -1 && !func_784(iVar0))
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
				if (func_784(-183018591))
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
		if (iParam0 != Global_35 && func_657(iVar0))
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
		func_785(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_786(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_787(iVar0))
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

bool func_598(int iParam0)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

int func_599(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_788(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

int func_600(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (!func_331(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = func_789(iParam0, 1);
	switch ((*Global_1360165)[iParam0]->f_70.f_12)
	{
		case 0:
			(*Global_1360165)[iParam0]->f_124 = _0x31c70a716cae1fee(iVar3);
			(*Global_1360165)[iParam0]->f_125 = 0;
			if (func_292((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_790(iParam0, 3);
			}
			else
			{
				if (!func_791(iParam0) && func_792(iParam0, &uVar4))
				{
					_0x187d65f3aec5d679(func_599(iParam0, 1), &uVar4);
				}
				func_333(iParam0, 256, 0);
				func_790(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!_0xa8120ebeaf290c7a(iVar3))
				{
					return func_793();
				}
				if (bParam2 && !func_126(vVar0))
				{
					_0x59c7ad6fea2ac449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					_0xd4b614179bcd0654(iVar3);
				}
				if (!func_794(iParam0, vVar0, iParam6, iParam10))
				{
					return func_793();
				}
				if (func_292((*Global_1360165)[iParam0]->f_124, 0))
				{
					if (_0x31c70a716cae1fee(iVar3) != (*Global_1360165)[iParam0]->f_124)
					{
					}
					if (!does_entity_belong_to_this_script((*Global_1360165)[iParam0]->f_124, true))
					{
						set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
					}
					freeze_entity_position((*Global_1360165)[iParam0]->f_124, true);
					set_entity_invincible((*Global_1360165)[iParam0]->f_124, true);
					func_790(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_292((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_790(iParam0, 1);
				return func_793();
			}
			if (!bParam9 || _0xa0bc8faed8cfeb3c((*Global_1360165)[iParam0]->f_124))
			{
				func_790(iParam0, 3);
			}
			break;
		case 3:
			if (!func_292((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_790(iParam0, 1);
				return func_793();
			}
			if (bParam7)
			{
				if (!func_119(iParam0, (*Global_1360165)[iParam0]->f_124, 1))
				{
					return func_793();
				}
			}
			if ((bParam2 && !func_126(vVar0)) && !func_562(vVar0, get_entity_coords((*Global_1360165)[iParam0]->f_124, true, false), 1056964608, 1))
			{
				if (is_entity_attached((*Global_1360165)[iParam0]->f_124))
				{
					detach_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_140((*Global_1360165)[iParam0]->f_124, vVar0, iParam6, 2, 1073741824);
			}
			if (bParam1)
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					if (func_334(iParam0, 39, 1))
					{
					}
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_336(iParam0, 39, 1);
				func_333(iParam0, 8, 1);
				func_333(iParam0, 64, 0);
				(*Global_1360165)[iParam0]->f_70.f_11 = get_id_of_this_thread();
			}
			freeze_entity_position((*Global_1360165)[iParam0]->f_124, false);
			set_entity_invincible((*Global_1360165)[iParam0]->f_124, false);
			func_795((*Global_1360165)[iParam0]->f_124, iParam0);
			if (bParam8)
			{
				_0xf74e134f40192884((*Global_1360165)[iParam0]->f_124, 1);
			}
			sVar12 = func_796(iParam0, func_497());
			if (!is_string_null_or_empty(sVar12))
			{
				_0x63aa2b8eb087886a(func_599(iParam0, 1), get_hash_key(sVar12));
			}
			(*Global_1360165)[iParam0]->f_70 = (*Global_1360165)[iParam0]->f_124;
			(*Global_1360165)[iParam0]->f_124 = 0;
			func_335(iParam0, 40, 0);
			func_333(iParam0, 32, 0);
			func_790(iParam0, 0);
			return (*Global_1360165)[iParam0]->f_70;
	}
	return func_793();
}

void func_601(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = get_max_attribute_points(iParam1, 16);
			iVar0 = get_random_int_in_range(round((IntToFloat(iVar1) * 0.4f)), round((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = get_max_attribute_points(iParam1, 16);
			iVar0 = get_random_int_in_range(round((IntToFloat(iVar1) * 0.1f)), round((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	set_attribute_points(iParam1, 16, iVar0);
}

void func_602(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_272(iParam0))
	{
		return;
	}
	if (func_599(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_797(func_527(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_772(iParam0);
	}
	else
	{
		func_774(iParam0);
	}
	if (bParam2)
	{
		func_777(iParam0);
	}
	else
	{
		func_779(iParam0);
	}
}

Vector3 func_603(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_604(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_798((fParam0 + fParam1));
}

int func_605(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_799(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_800(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_801(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_801(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (is_entity_dead(iVar0))
	{
	}
	else
	{
		_0x9520175b35e2268d(iVar0, 1);
		set_blocking_of_non_temporary_events(iVar0, true);
		if (uParam1->f_10)
		{
			if (is_ped_human(iVar0))
			{
				_0x0fb1ba7ff73b41e1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_370(iVar0))
		{
			func_609(iVar0, &(uParam1->f_23), 0);
		}
		if (func_370(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_802(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_803(&(uParam1->f_22)));
			func_180(iVar0, func_804(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_805(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_806(&(uParam1->f_22)))
		{
			func_807(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_808(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_179(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_370(iVar0))
		{
			func_810(iVar0, !func_809(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_811(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_812(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_812(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				set_ped_relationship_group_hash(iVar0, uParam1->f_31);
			}
		}
	}
	if (does_entity_exist(iVar0))
	{
		if (is_ped_human(iVar0))
		{
			decor_set_bool(iVar0, "bBeatPed", true);
			decor_set_bool(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_606(int iParam0, int iParam1)
{
	if (func_813(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case -1208814201:
		case -535404896:
		case -390289284:
		case 1112571710:
		case 1478983280:
			return true;
		case -1990962020:
		case 1057570823:
			return iParam1;
		default:
			break;
	}
	return false;
}

bool func_607(var uParam0)
{
	return func_179(*uParam0, 32);
}

int func_608(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	if (get_mount(iParam0) != iParam1)
	{
		_set_ped_on_mount(iParam0, iParam1, iParam3, bParam4);
		set_ped_can_be_targetted(iParam1, bParam2);
	}
	return 1;
}

void func_609(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_90(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

void func_610(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_611(int iParam0)
{
	if (!func_362(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_612(int iParam0, int iParam1)
{
	if (!func_362(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_814(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_815("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_816(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_657(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_817(iVar1);
				return true;
			}
			iVar3++;
		}
		func_817(iVar1);
	}
	return false;
}

int func_613(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_362(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_611(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_814(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_818(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_819(bParam2), iParam0, 0);
	return uVar2;
}

bool func_614(int iParam0, int* iParam1)
{
	if (iParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_820((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_615(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_632((*uParam0)[iVar0]))
		{
			func_821((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_616(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_822(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_287((*uParam2)[iVar0]->f_6))
		{
			func_821((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_617(var uParam0)
{
	iVar0 = func_530(*uParam0);
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

int func_618(var uParam0, int iParam1)
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

void func_619(int* iParam0, int* iParam1)
{
	if (!func_376(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_821(iParam1, 19);
			func_634(iParam0, 23);
			func_823(iParam1, 2);
		}
	}
}

bool func_620(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_824(16))
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
					func_825(16);
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

void func_621(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_822(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_622(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_623(int iParam0)
{
	return (func_826(iParam0, 4) || func_826(iParam0, 5));
}

bool func_624(int iParam0)
{
	return func_826(iParam0, 7);
}

bool func_625(int iParam0)
{
	return func_826(iParam0, 6);
}

void func_626(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_632(iParam1))
		{
			clear_bit(iParam1, 14);
			func_822(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_627(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_827(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_828(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_638(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_638(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_829(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_628(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_830(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_831(iParam1, 1))
	{
		func_832(iParam1, 1);
		return true;
	}
	return false;
}

void func_629(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_738((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_630(int* iParam0, float fParam1, bool bParam2)
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

void func_631(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_632(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_633(int iParam0)
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

void func_634(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_635(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_636(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_637(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_638(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	if (bParam1)
	{
		func_833(iParam0, 4);
		func_834(iVar0, 1);
		func_835(iVar0, 1);
	}
	else
	{
		func_836(iParam0, 4);
		func_835(iVar0, 0);
	}
}

void func_639(int* iParam0, char* sParam1)
{
	if (func_287(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_637(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_837(iParam0, 1);
}

void func_640(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_641(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_642(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_838(1);
	}
	else
	{
		iVar0 = func_839(iParam0);
	}
	return iVar0;
}

void func_643(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_840(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_841(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

void func_644(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_170(iParam0, 8192))
	{
		iVar0 = func_841(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_645(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_539(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_646(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_102(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_842(262144, iVar0, 0, 1);
		}
	}
	if (func_102(iParam0, 128))
	{
		func_842(128, iVar0, 0, 1);
	}
	else if (func_102(iParam0, 524288))
	{
		func_842(524288, iVar0, 0, 1);
	}
	else if (func_102(iParam0, 536870912))
	{
		func_842(536870912, iVar0, 0, 1);
	}
	else if (func_102(iParam0, 4194304))
	{
		func_842(4194304, iVar0, 0, 1);
	}
	else if (func_102(iParam0, 8388608))
	{
		func_842(8388608, iVar0, 0, 1);
	}
}

void func_647(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_648(bool bParam0)
{
	if (!bParam0 && func_843(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_649()
{
	return Global_1310750->f_16037;
}

bool func_650(int iParam0)
{
	if (!func_315(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_651(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_315(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_844(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_652(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_845(Global_1393447, 1);
	func_846();
	func_847();
	func_848((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_454() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_849();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_842(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_842(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_842(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_850(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_851(to_float(iVar0), 1, 0);
	}
	else
	{
		func_851((to_float(200) / 3f), 1, 0);
	}
}

bool func_653(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_654(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_655(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_656(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606;
		case 2:
			return 1143368244;
		case 1:
			return -1797026825;
		case 0:
			return 55818986;
		case 4:
			return -2100600611;
		case 3:
			return 529020251;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_657(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_658()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_659(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!is_entity_on_screen(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_660(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_659(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_393() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_661()
{
	return &Global_1899515;
}

int func_662(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_663(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return true;
		default:
			break;
	}
	return false;
}

bool func_664(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return true;
		default:
			break;
	}
	return false;
}

bool func_665(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_666(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return true;
		default:
			break;
	}
	return false;
}

bool func_667(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return true;
		default:
			break;
	}
	return false;
}

bool func_668(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_669(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return true;
		default:
			break;
	}
	return false;
}

bool func_670(bool bParam0, int iParam1, int iParam2)
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

bool func_671()
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

int func_672(int iParam0)
{
	if (!func_674(iParam0))
	{
		return -1;
	}
	return func_853(func_852(iParam0));
}

bool func_673(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_674(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_675(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_676(int iParam0)
{
	return func_102(iParam0, Global_1310750->f_16072 | 64);
}

bool func_677(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_678(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

bool func_679(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_680(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_854();
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
			func_855(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_681(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_682(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_321() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_856(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_856(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_707(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_683(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_857(iParam0);
	}
}

bool func_684(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_707(iParam2);
	}
	else
	{
		iVar1 = func_706(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_707(iParam0);
	}
	else
	{
		iVar0 = func_706(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_3(*iParam1, 8388608))
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

float func_685(int iParam0)
{
	return iParam0->f_26;
}

bool func_686(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_687(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 134217728);
	}
	else
	{
		func_270(iParam0, 134217728);
	}
}

float func_688(int iParam0)
{
	return iParam0->f_17;
}

bool func_689(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_3(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_690(int iParam0)
{
	return iParam0->f_18;
}

bool func_691(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_433(iVar0, 0)))
		{
			if (func_679(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_692(int iParam0)
{
	return iParam0->f_23;
}

int func_693(int iParam0)
{
	return iParam0->f_21;
}

int func_694(int iParam0)
{
	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_695(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_509(iParam0, vParam4, 0.5f))
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

int func_696(int iParam0)
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
	if (func_858(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_697(int iParam0)
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

bool func_698(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_415(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_699(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_415(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_700(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_415(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
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

bool func_701(int iParam0, int iParam1)
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

bool func_702(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_859(iParam0, 1, 0, 0) != 2055893578)
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

bool func_703(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_704(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_257(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_705(int iParam0)
{
	return iParam0->f_24;
}

int func_706(int iParam0)
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

int func_707(int iParam0)
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

int func_708(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_701(Global_35, &iVar1))
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
		fVar2 = func_432(iParam0, player_ped_id(), 0, 1);
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
		if (func_432(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_709(int iParam0, int iParam1, bool bParam2)
{
	func_670(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_710(iParam1, iVar0))
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
				if (!bParam2 || !func_710(iParam1, iVar1))
				{
					if (func_257(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_710(int iParam0, int iParam1)
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

bool func_711(int iParam0)
{
	if (func_497())
	{
		return false;
	}
	return func_323((*Global_1347702)[58]->f_15, 1);
}

int func_712(int iParam0)
{
	return iParam0->f_20;
}

int func_713(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
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

int func_714(int iParam0)
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

void func_715(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_860();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_861(iParam0);
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
	if (func_862(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_497())
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
	Global_40.f_11095.f_35 = func_863(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_860();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_864(iVar1);
		func_866(func_865(), 0, 4000);
		func_867(Global_40.f_11095.f_35);
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
		func_868(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_870(func_869(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_714(14))
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
					sParam4 = func_871(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_872(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_872(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_870(func_869(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_714(4))
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
					sParam4 = func_871(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_872(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_872(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_869(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_873(10, 1);
	}
}

void func_716(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_717(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_718(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_874(iParam0, &Var0);
}

int func_719(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_720(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_875(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_189(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_721(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_321() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_722(int iParam0, bool bParam1)
{
	func_876(iParam0, &iVar0, &iVar1);
	if (!func_877(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_878(iVar0, iVar1);
}

void func_723()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar3 = iVar1;
			switch (iVar2)
			{
				case 0:
					switch (iVar3)
					{
						case 0:
							switch (&iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = ((!func_250(1) && !func_250(2)) && iVar562 == 0);
											break;
										case 1:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										case 4:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										case 2:
											bVar4 = ((!func_250(1) && !func_250(2)) && iVar562 == 0);
											break;
										case 3:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									switch (iLocal_214)
									{
										case 0:
										case 1:
										case 2:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = false;
											break;
										case 4:
											bVar4 = (!func_250(1024) && !func_473(&(uLocal_178[0]), 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 3:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = !func_250(4);
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 4:
								case 5:
									switch (iLocal_214)
									{
										case 3:
											bVar4 = (!func_250(256) && !func_473(&(uLocal_178[0]), 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						case 1:
							switch (&iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = (!func_250(2) && iVar562 == 0);
											break;
										case 1:
											bVar4 = !func_250(2);
											break;
										case 4:
											bVar4 = !func_250(2);
											break;
										case 2:
											bVar4 = !func_250(2);
											break;
										case 3:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									switch (iLocal_214)
									{
										case 0:
										case 1:
										case 2:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = (!func_250(32) && !func_473(&(uLocal_178[0]), 0));
											break;
										case 4:
											bVar4 = (!func_250(2048) && !func_473(&(uLocal_178[0]), 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 3:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = !func_250(4);
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 4:
								case 5:
									switch (iLocal_214)
									{
										case 3:
											bVar4 = (!func_250(512) && !func_473(&(uLocal_178[0]), 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						default:
							bVar4 = false;
							break;
					}
					break;
				case 1:
					switch (iVar3)
					{
						case 0:
							switch (&iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = ((!func_250(1) && !func_250(2)) && iVar562 == 0);
											break;
										case 1:
										case 4:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										case 2:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 1:
											bVar4 = false;
											break;
										case 2:
											bVar4 = false;
											break;
										case 4:
											bVar4 = ((!func_250(8) && bLocal_44) && !func_473(&(uLocal_178[1]), 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									bVar4 = false;
									break;
								case 6:
									bVar4 = false;
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						case 1:
							switch (&iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = (!func_250(2) && iVar562 == 0);
											break;
										case 1:
										case 4:
											bVar4 = !func_250(2);
											break;
										case 2:
											bVar4 = (!func_250(2) && iVar562 != 0);
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 1:
											bVar4 = (!func_250(64) && !func_473(&(uLocal_178[1]), 0));
											break;
										case 2:
											bVar4 = ((!func_250(64) || !func_250(128)) && !func_473(&(uLocal_178[1]), 0));
											break;
										case 4:
											bVar4 = ((!func_250(16) && bLocal_44) && !func_473(&(uLocal_178[1]), 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									bVar4 = false;
									break;
								case 6:
									bVar4 = false;
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						default:
							bVar4 = false;
							break;
					}
					break;
				default:
					bVar4 = false;
					break;
			}
			func_879(iVar2, iVar3, bVar4);
			iVar1++;
		}
		iVar0++;
	}
}

void func_724()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			switch (iVar2)
			{
				case 0:
					func_738(Local_708[iVar1], 0, 0);
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						func_738(Local_778[iVar1], 0, 0);
					}
					else
					{
						func_738(Local_743[iVar1], 0, 0);
					}
					break;
				case 2:
					func_738(Local_813[iVar1], 0, 0);
					break;
				case 3:
					func_738(Local_848[iVar1], 0, 0);
					break;
				default:
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_725()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			switch (iVar2)
			{
				case 0:
					if (func_880(Local_708[iVar1], 1, 0) != vLocal_27[iVar2][iVar1])
					{
						func_738(Local_708[iVar1], vLocal_27[iVar2][iVar1], 0);
					}
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						if (func_880(Local_778[iVar1], 1, 0) != vLocal_27[iVar2][iVar1])
						{
							func_738(Local_778[iVar1], vLocal_27[iVar2][iVar1], 0);
						}
					}
					else if (func_880(Local_743[iVar1], 1, 0) != vLocal_27[iVar2][iVar1])
					{
						func_738(Local_743[iVar1], vLocal_27[iVar2][iVar1], 0);
					}
					break;
				case 2:
					if (func_880(Local_813[iVar1], 1, 0) != vLocal_27[iVar2][iVar1])
					{
						func_738(Local_813[iVar1], vLocal_27[iVar2][iVar1], 0);
					}
					break;
				case 3:
					if (func_880(Local_848[iVar1], 1, 0) != vLocal_27[iVar2][iVar1])
					{
						func_738(Local_848[iVar1], vLocal_27[iVar2][iVar1], 0);
					}
					break;
				default:
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_726(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

void func_727(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	trigger_sonar_blip(iParam0, vParam1);
}

int func_728(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -23350179;
		case 1:
			return -23350179;
		case 2:
			return -23350179;
		case 3:
			return 67779789;
		case 4:
			return -23350179;
		default:
			break;
	}
	return -23350179;
}

Vector3 func_729(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 2:
							return -303.4379f, 797.2956f, 117.9503f;
						case 3:
							return -303.4379f, 797.2956f, 117.9503f;
						default:
							break;
					}
					return -307.2557f, 796.936f, 117.9482f;
				case 1:
					switch (iParam0)
					{
						case 3:
							return -246.3026f, 769.0882f, 117.1506f;
						default:
							break;
					}
					return -245.3641f, 764.9188f, 117.1341f;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 3:
					return 2953.516f, 520.4395f, 44.44659f;
				default:
					break;
			}
			return 2953.575f, 523.8731f, 44.47325f;
		case 4:
			return -809.8254f, -1329.847f, 42.65924f;
	}
	return 0f, 0f, 0f;
}

float func_730(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return -1f;
		case 2:
			return -1f;
		case 3:
			return -1f;
		case 4:
			return -1f;
		default:
			break;
	}
	return -1f;
}

float func_731(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 15f;
		case 10:
			return 10f;
		case 4:
			return 10f;
		default:
			break;
	}
	return -1f;
}

void func_732(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, bool bParam13)
{
	func_881(uParam0, 1);
	uParam0->f_12 = sParam2;
	uParam0->f_5 = fParam8;
	uParam0->f_6 = fParam9;
	*uParam0 = iParam1;
	uParam0->f_8 = fParam7;
	StringCopy(&cVar4, sParam2, 32);
	Var0 = { cVar4 };
	if (!func_126(vParam3))
	{
	}
	if (fParam8 > 0f)
	{
		StringConCat(&Var0, "Vis", 32);
		uParam0->f_2 = _create_volume_sphere_with_custom_name(vParam3, 0f, 0f, 0f, fParam8, fParam8, fParam8, &Var0);
	}
	else
	{
		uParam0->f_2 = _create_volume_cylinder_with_custom_name(vParam3, 0f, 0f, 0f, 1f, 1f, 3f, &cVar4);
	}
	if (fParam9 > 0f && fParam9 != fParam8)
	{
		Var0 = { cVar4 };
		StringConCat(&Var0, "Aud", 32);
		uParam0->f_3 = _create_volume_sphere_with_custom_name(vParam3, 0f, 0f, 0f, fParam9, fParam9, fParam9, &Var0);
	}
	if (!func_126(vParam3))
	{
		uParam0->f_1 = add_shocking_event_at_position(iParam1, vParam3, fParam7, fParam8, fParam9, fParam10, fParam11, -1, -1);
	}
	else
	{
		if (_does_volume_exist(uParam0->f_2))
		{
			_0x7c00cfc48a782dc0(uParam0->f_2, iParam6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (_does_volume_exist(uParam0->f_3))
		{
			_0x7c00cfc48a782dc0(uParam0->f_3, iParam6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		uParam0->f_1 = add_shocking_event_for_entity(iParam1, iParam6, fParam7, fParam8, fParam9, fParam10, fParam11, fParam12, bParam13, false, -1, -1);
	}
}

Vector3 func_733(vector3 vParam0, vector3 vParam3)
{
	vVar0.x = ((vParam0.x + vParam3.x) * 0.5f);
	vVar0.f_1 = ((vParam0.y + vParam3.y) * 0.5f);
	vVar0.f_2 = ((vParam0.z + vParam3.z) * 0.5f);
	return vVar0;
}

void func_734()
{
	if (!func_185(iLocal_50))
	{
		return;
	}
	if (does_entity_exist(&(uLocal_178[0])))
	{
		remove_anim_scene_entity(iLocal_50, func_143(0), &(uLocal_178[0]));
	}
	if (does_entity_exist(&(uLocal_178[1])))
	{
		remove_anim_scene_entity(iLocal_50, func_143(1), &(uLocal_178[1]));
	}
	if (does_entity_exist(&(uLocal_178[2])))
	{
		remove_anim_scene_entity(iLocal_50, func_143(2), &(uLocal_178[2]));
	}
	if (does_entity_exist(&(uLocal_178[3])))
	{
		remove_anim_scene_entity(iLocal_50, func_143(3), &(uLocal_178[3]));
	}
}

bool func_735(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_248(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_882(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_736(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_883(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

int func_737(int iParam0)
{
	if (!func_884(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_738(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_885(iParam0, 13))
	{
		func_821(iParam0, 0);
	}
	else
	{
		func_837(iParam0, 0);
	}
	if (func_287(iParam0->f_6))
	{
		if (bParam2)
		{
			func_288(&(iParam0->f_6), 0, 1);
		}
	}
}

var func_739(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_740(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_741(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_406(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (get_entity_speed(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (absf((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && func_405())
	{
		bVar1 = true;
		fVar3 = func_281(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_407(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_407(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_408(&(uParam0->f_121), iParam4, fParam1))
		{
			func_172(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_285(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!is_entity_dead(uParam0->f_121[iVar0]->f_6))
		{
			if (vdist2(Global_36, get_entity_coords(uParam0->f_121[iVar0]->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (_does_volume_exist(uParam0->f_173) && !(bParam8 && _is_ped_getting_into_a_mount_seat(Global_35, true)))
					{
						if (!is_entity_in_volume(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_171(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_172(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_285(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

Vector3 func_742(vector3 vParam0)
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

bool func_743(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 <= fParam2)
	{
		return true;
	}
	return false;
}

int func_744(struct<2> Param0, var uParam2)
{
	iVar0 = (round(absf(Param0)) & 32767 || shift_left(round(absf(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

bool func_745(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_746(int iParam0)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_886(iParam0);
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

void func_747(int iParam0)
{
	if (func_272(iParam0))
	{
		if (does_entity_exist(func_575(iParam0)))
		{
			func_351(iParam0, 67108864, 1);
			func_335(iParam0, 19, 1);
		}
	}
}

float func_748(int iParam0)
{
	if (!func_331(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_749(int iParam0)
{
	iVar0 = func_575(iParam0);
	iVar1 = func_522(iParam0, 0);
	func_887(iParam0, iVar0);
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

bool func_750(int iParam0)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

int func_751(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_331(iParam0))
	{
		return 0;
	}
	iVar0 = func_527(iParam0);
	if (func_292(iVar0, 0))
	{
		if (func_292(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_750(iParam0)) || func_598(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_888(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_599(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_889(iParam0);
					_0x7b204f88f6c3d287(func_789(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_789(iParam0, 0));
					func_890(iParam0);
				}
			}
			else
			{
				if (func_330(iParam0, 32768, 1))
				{
					iVar2 = func_789(iParam0, 0);
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
		if (func_292((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_330(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_889(iParam0);
				_0x7b204f88f6c3d287(func_789(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_789(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_889(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_790(iParam0, 0);
	return 1;
}

void func_752()
{
	func_891(23);
}

void func_753(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_754(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_755(int iParam0)
{
	iVar0 = func_892(iParam0);
	if (iVar0 != 0)
	{
		func_893(-1, 24, 0, iVar0);
	}
}

void func_756(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_870(func_869(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_102(iParam0, 2))
	{
		func_894(iParam0, func_642(iParam3));
	}
	if (func_102(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_6();
		}
		func_895(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_170(iParam0, 65536))
	{
		func_896(iParam0, iParam1);
		func_897(iParam0, func_301(iParam0, iParam1));
		func_753(128);
	}
	func_645(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_646(iParam0, 1);
	if (!bParam2)
	{
		func_753(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_898(524288);
	}
	if (func_899(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_899(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_757(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_900(&Global_0, 8);
	}
	if (!func_901() || func_321() != -1)
	{
		return;
	}
	func_900(&Global_0, 1);
}

bool func_758(int iParam0)
{
	return func_902(iParam0, 2);
}

void func_759(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_760(int iParam0, bool bParam1)
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

void func_761(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_762(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_126(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_763(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_126(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_764(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_126(*Global_1310750->f_16043[iVar0]))
		{
			if (func_165(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_765()
{
	iVar0 = func_903(func_359());
	if (iVar0 == 8)
	{
		iVar1 = func_419(func_359());
		if (func_421(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_904(func_838(0)))
	{
		return false;
	}
	if (func_905())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_766(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_767(int iParam0, int iParam1)
{
	if (!func_315(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_768(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_906(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_769(int iParam0, int iParam1, int iParam2)
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

bool func_770(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_907(iParam0);
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

void func_771(int iParam0)
{
	if (func_908(iParam0, 0))
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

void func_772(int iParam0)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (func_599(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_771(iVar0);
	func_333(iParam0, 8192, 1);
}

void func_773(int iParam0)
{
	if (func_908(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_774(int iParam0)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (func_599(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_773(iVar0);
	func_333(iParam0, 8192, 0);
}

void func_775(int iParam0)
{
	if (func_908(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_776(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_117(14))
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

void func_777(int iParam0)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (func_599(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_775(iVar0);
	func_333(iParam0, 16384, 1);
}

void func_778(int iParam0)
{
	if (func_908(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_779(int iParam0)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (func_599(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_778(iVar0);
	func_333(iParam0, 16384, 0);
}

int func_780(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_909(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_781(int iParam0, int iParam1)
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
			if (iParam1 != -1)
			{
				if (func_342(iParam1, iVar1))
				{
					iVar2 = iVar1;
				}
			}
			return iVar2;
		}

int func_782(int iParam0)
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

void func_783(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_784(int iParam0)
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

int func_785(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_910(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_911((386 + iVar28), 1);
			if (func_912(iParam0, &Var0, iVar5, 0))
			{
				if (func_913(iParam0, &Var6, iVar5))
				{
					Var29 = { func_914(iParam0, Var0, iVar5, 0) };
					func_915(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_916(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_917(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_918(iParam0, iParam1);
					return 1;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_786(int iParam0, int iParam1, float fParam2)
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

bool func_787(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_788(int iParam0)
{
	iVar0 = 0;
	if (!func_331(iParam0))
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
	if (!func_331(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_789(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_919(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_790(int iParam0, int iParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

bool func_791(int iParam0)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_127)
	{
		case -784953535:
		case -543937540:
		case -233385727:
		case 893704044:
		case 1132950513:
			return true;
		default:
			break;
	}
	return false;
}

bool func_792(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return true;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return true;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return true;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return true;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return true;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return true;
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return true;
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return true;
	}
	return false;
}

int func_793()
{
	return -1;
}

bool func_794(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489->f_12) || (bParam5 && Global_1359489->f_13 < 8))
	{
		if ((*Global_1360165)[iParam0]->f_125 <= 300)
		{
			if (_0xeb98b38ca60742d7((*Global_1360165)[iParam0]->f_126))
			{
				_0x49a8c2cd97815215((*Global_1360165)[iParam0]->f_126);
			}
			if (bParam5)
			{
				(*Global_1360165)[iParam0]->f_124 = _0x08fc896d2cb31fcc((*Global_1360165)[iParam0]->f_126, 0);
				Global_1359489->f_13++;
			}
			else
			{
				(*Global_1360165)[iParam0]->f_124 = _0x0cadc3a977997472((*Global_1360165)[iParam0]->f_126, 0);
			}
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_126);
			(*Global_1360165)[iParam0]->f_125++;
		}
		else
		{
			iVar0 = _0xa00df706c60173d1(func_599(iParam0, 1));
			request_model(iVar0, false);
			if (has_model_loaded(iVar0))
			{
				(*Global_1360165)[iParam0]->f_124 = func_801(iVar0, vParam1, bParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				set_model_as_no_longer_needed(iVar0);
				_0x7b204f88f6c3d287((*Global_1360165)[iParam0]->f_126);
			}
		}
		if (!func_292((*Global_1360165)[iParam0]->f_124, 0))
		{
			return false;
		}
		Global_1359489->f_12 = 1;
		func_333(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

void func_795(int iParam0, int iParam1)
{
	decor_set_bool(iParam0, "HorseCompanion", true);
	func_921(iParam0, func_920(iParam1));
	if (func_118(iParam1, 8))
	{
		_0xf74e134f40192884(iParam0, 2);
		set_ped_config_flag(iParam0, 412, true);
	}
	else
	{
		set_ped_config_flag(iParam0, 412, false);
	}
	if (does_entity_exist(func_575(iParam1)))
	{
		_0x931b241409216c1f(func_575(iParam1), iParam0, 0);
		_0xed1c764997a86d5a(func_575(iParam1), iParam0);
		set_ped_config_flag(iParam0, 367, true);
	}
	else
	{
		func_336(iParam1, 38, 1);
	}
	set_ped_relationship_group_default_hash(iParam0, -1856989775);
	set_ped_relationship_group_hash(iParam0, -1856989775);
	if (Global_40.f_4283 == 0)
	{
		set_ped_config_flag(iParam0, 172, true);
	}
	set_ped_config_flag(iParam0, 324, true);
	set_ped_config_flag(iParam0, 330, true);
	set_ped_config_flag(iParam0, 331, true);
	set_ped_config_flag(iParam0, 471, true);
	set_ped_config_flag(iParam0, 442, true);
	if (func_118(iParam1, 4096))
	{
		set_ped_config_flag(iParam0, 1, false);
		set_ped_config_flag(iParam0, 54, false);
		set_ped_config_flag(iParam0, 121, false);
		set_ped_config_flag(iParam0, 302, false);
	}
	else
	{
		set_ped_config_flag(iParam0, 1, true);
		set_ped_config_flag(iParam0, 54, true);
		set_ped_config_flag(iParam0, 121, true);
		set_ped_config_flag(iParam0, 302, true);
	}
	_0xae6004120c18df97(iParam0, 2, 0);
	_0xae6004120c18df97(iParam0, 3, 0);
	func_602(iParam1, func_118(iParam1, 8192), func_118(iParam1, 16384), 1);
}

char* func_796(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_797(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_922(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

float func_798(float fParam0)
{
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_799(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_923(&uParam1))
	{
		return 1;
	}
	if (!func_924(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_800(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			if (_0x610438375e5d1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_801(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_925(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_802(var uParam0)
{
	return func_179(*uParam0, 4);
}

bool func_803(var uParam0)
{
	return func_179(*uParam0, 64);
}

bool func_804(var uParam0)
{
	return func_179(*uParam0, 8);
}

bool func_805(var uParam0)
{
	return func_179(*uParam0, 128);
}

bool func_806(var uParam0)
{
	return func_179(*uParam0, 2048);
}

void func_807(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_808(var uParam0)
{
	return func_179(*uParam0, 1024);
}

bool func_809(var uParam0)
{
	return func_179(*uParam0, 256);
}

void func_810(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_811(var uParam0)
{
	return func_179(*uParam0, 512);
}

bool func_812(var uParam0)
{
	return func_179(*uParam0, 4096);
}

int func_813(int iParam0)
{
	switch (iParam0)
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
			return 0;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			return 2;
		case 363815774:
			return 1;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			return 3;
		case -1090280091:
		case -1076294934:
			return 4;
		case -1011228908:
		case -1008616424:
		case 424175505:
			return 5;
	}
	return -1;
}

int func_814(int iParam0, int iParam1)
{
	if (!func_362(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_611(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_363(iParam0, 1399091007))
	{
		func_926(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_815(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_819(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_816(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_817(int iParam0)
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

int func_818(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_927(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_929(&Var0, func_928(0));
	}
	if (!func_930(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_817(iVar14);
	return uVar15;
}

int func_819(bool bParam0)
{
	if (func_321() == -1)
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

int func_820(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_821(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_822(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_287(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_288(&(iParam1->f_6), 0, 1);
	}
	if (!func_287(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_632(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_931(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_287(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_829(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_932(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_933(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_636(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_932(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_638(iParam1->f_6, 0, 1);
				}
				else
				{
					func_638(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_823(int* iParam0, int iParam1)
{
	if (!func_885(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_821(iParam0, 14);
		}
	}
}

bool func_824(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_825(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_826(int iParam0, int iParam1)
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

bool func_827(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_828(int iParam0, bool bParam1)
{
	if (bParam1 && !func_287(iParam0))
	{
		return false;
	}
	return !func_902(iParam0, 4);
}

void func_829(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_287(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	func_932(iParam0, 18, 0, 1);
	func_932(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_830(int iParam0, bool bParam1)
{
	if (bParam1 && !func_287(iParam0))
	{
		return false;
	}
	iVar0 = func_540(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_831(int iParam0, bool bParam1)
{
	if (bParam1 && !func_287(iParam0))
	{
		return false;
	}
	iVar0 = func_540(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_832(int iParam0, bool bParam1)
{
	if (bParam1 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

void func_833(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_834(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_902(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_835(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_836(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_837(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_838(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_934(1, 0, 0);
	}
	else
	{
		iVar0 = func_359();
	}
	return func_839(iVar0);
}

int func_839(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_840(int iParam0)
{
	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_841(int iParam0, int iParam1)
{
	iVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_842(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_552(Global_1310750[iVar0], iParam0))
		{
			if (!func_538(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_935(iVar0) < func_936(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_645(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_843(int iParam0)
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

void func_844(int iParam0)
{
	if (&Global_1310750->f_13321[iParam0] != -1)
	{
		(*Global_1310750)[&Global_1310750->f_13321[iParam0]]->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0] = -1;
	Global_1310750->f_13321[iParam0]->f_1 = -1;
	Global_1310750->f_13321[iParam0]->f_2 = { 0f, 0f, 0f };
	Global_1310750->f_13321[iParam0]->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750->f_13321[iParam0]->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_845(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_846()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_938(iVar0, 128))
		{
			func_939(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_847()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_938(iVar0, 128) && func_938(iVar0, 1))
		{
			func_939(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_848(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_849()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_102(iVar0, 16777216))
		{
			if (!func_940(iVar0))
			{
				func_941(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_850(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_539(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_539(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_539(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_539(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_539(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_539(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_851(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_393();
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

int func_852(int iParam0)
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

int func_853(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_854()
{
	if (func_942())
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

void func_855(var uParam0, var uParam1)
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

int func_856(int iParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
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
	if (iParam0->f_6 == 3)
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

void func_857(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_270(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_169(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_858(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_859(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_860()
{
	iVar0 = func_943();
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

int func_861(int iParam0)
{
	if (func_321() != -1)
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
	fVar1 = func_281(absf(fVar1) < 1f, func_281(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_862(int iParam0)
{
	if (!func_944(iParam0))
	{
		return false;
	}
	return func_945(iParam0);
}

int func_863(int iParam0, int iParam1, int iParam2)
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

int func_864(int iParam0)
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

int func_865()
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

void func_866(int iParam0, bool bParam1, int iParam2)
{
	func_946((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_947(iParam0);
}

void func_867(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_948(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_868(bool bParam0)
{
	bVar3 = false;
	if (func_949(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_950(iVar5, &iVar2, &iVar0))
			{
				if (!func_362(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_951(iVar2);
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
							if (func_611(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_860() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_860() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_952();
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

struct<2> func_869(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_870(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_871(int iParam0)
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

var func_872(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_953(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_873(int iParam0, int iParam1)
{
	if (!func_954(iParam0))
	{
		return 0;
	}
	if (!func_901())
	{
		return 0;
	}
	if (!func_955(iParam0, &iVar0, &uVar1))
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

bool func_874(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

int func_875(int* iParam0)
{
	if (func_376(iParam0, 0))
	{
		if (func_956(iParam0))
		{
			func_386(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_876(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_877(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_957(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_958(iParam0))
	{
		return false;
	}
	if (func_959(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_960(iParam0, 1)) || func_961(32768))
	{
		if (!func_960(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_962())
	{
		return false;
	}
	return true;
}

void func_878(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_879(int iParam0, int iParam1, bool bParam2)
{
	if (vLocal_27[iParam0][iParam1] == bParam2)
	{
		return;
	}
	(*vLocal_27[iParam0])[iParam1] = bParam2;
}

int func_880(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_287(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_828(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_881(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	if (uParam0->f_1 != 0)
	{
		remove_shocking_event(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	func_74(uParam0->f_2);
	func_74(uParam0->f_3);
	uParam0->f_5 = -1f;
	uParam0->f_6 = -1f;
	uParam0->f_8 = -1f;
	uParam0->f_12 = "";
	func_161(&(uParam0->f_9));
	func_40(&(uParam0->f_9));
	*uParam0 = 0;
}

bool func_882(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_883(int iParam0, int iParam1)
{
	iVar1 = func_767(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (&Global_17504.f_1003[iVar0] == iVar1 || &Global_17504.f_1003[iVar0] == -1)
		{
			Global_17504.f_1003[iVar0] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_884(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_885(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

int func_886(int iParam0)
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

void func_887(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_963(iParam1);
	}
}

float func_888(int iParam0, int iParam1, bool bParam2)
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
	return func_165(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_889(int iParam0)
{
	iVar0 = func_527(iParam0);
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

void func_890(int iParam0)
{
	if (!func_331(iParam0))
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

void func_891(int iParam0)
{
	if (func_321() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_292(func_575(iVar0), 0))
		{
			if (is_ped_group_member(func_575(iVar0), func_544(), 1))
			{
				func_964(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_892(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_893(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = Global_1415419->f_19[iParam0]->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419->f_19[iVar0]->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_965() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_965();
					}
					func_966(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_270(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_894(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_840(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_841(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_895(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_170(iParam0, 8192))
	{
		iVar0 = func_841(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_896(int iParam0, int iParam1)
{
	iVar0 = (func_548(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_897(int iParam0, vector3 vParam1)
{
	if (func_102(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_126(vParam1))
	{
		return;
	}
	if (!func_315(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_126(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_562(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*Global_17504.f_2084[iVar1] = { vParam1 };
		Global_17504.f_2084[iVar1]->f_3 = iParam0;
		Global_17504.f_2084[iVar1]->f_4 = (*Global_1310750)[iParam0]->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*Global_17504.f_2084[iVar0] = { vParam1 };
				Global_17504.f_2084[iVar0]->f_3 = iParam0;
				Global_17504.f_2084[iVar0]->f_4 = (*Global_1310750)[iParam0]->f_62;
			}
			else
			{
				*Global_17504.f_2084[iVar0] = { *(Global_17504.f_2084[iVar0 + 1]) };
			}
			iVar0++;
		}
	}
}

void func_898(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_941(iVar0, iParam0);
		iVar0++;
	}
}

int func_899(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_900(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_901()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_902(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_903(int iParam0)
{
	if (!func_677(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_904(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_905()
{
	return Global_1894899 & 2 != 0;
}

int func_906(int iParam0)
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

bool func_907(int iParam0)
{
	func_967(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

bool func_908(int iParam0, bool bParam1)
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

int func_909(int iParam0, int iParam1)
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

struct<5> func_910(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_968(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_611(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_914(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_928(bParam1) };
			if (bParam2 && func_969(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_912(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_912(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_913(iParam0, &Var5, 1728382685))
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
			Var0 = { func_970(bParam1) };
			switch (func_971(iParam0))
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
			if (func_972(iParam0, -1823706425))
			{
				Var0 = { func_914(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_972(iParam0, -1483207246))
			{
				Var0 = { func_914(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_973(Var0, &Var27, bParam1, 0))
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

int func_911(int iParam0, int iParam1)
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
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
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

bool func_912(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_974(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_913(int iParam0, var uParam1, int iParam2)
{
	if (func_975(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_914(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_362(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_819(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_915(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_976(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_973(*uParam1, &Var0, bParam6, 0))
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
	if (!func_916(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_819(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_916(bool bParam0)
{
	if (func_321() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_819(bParam0));
}

int func_917(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_977(iParam0))
	{
		return 0;
	}
	if (!func_916(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_918(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_466(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_919(int iParam0)
{
	if (!func_331(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_599(iParam0, 1);
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

int func_920(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_862(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_862(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_921(int iParam0, int iParam1)
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

float func_922(float fParam0, float fParam1, float fParam2)
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

bool func_923(var uParam0)
{
	return func_179(*uParam0, 1);
}

bool func_924(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_978(*uParam0, 0f, 0f, 0f))
	{
		return true;
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

void func_925(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_979(iParam1))
		{
			func_980(iParam0, 41788943);
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
			func_981(iParam0, 0, 1);
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
			func_982(iParam0, 0);
			bVar0 = true;
		}
		func_921(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_926(int iParam0, var uParam1, var uParam2)
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

struct<14> func_927(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_928(bool bParam0)
{
	iVar0 = func_819(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_914(923904168, func_968(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_914(923904168, func_968(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_914(923904168, func_968(bParam0), -740156546, 0);
}

void func_929(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_930(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_819(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_931(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_902(iVar0, 2))
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
				func_983(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_932(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_933(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_934(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if ((*Global_1888801)[iVar2]->f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_984(iVar2))
				{
					vVar3 = { _0xf70f00013a62f866((*Global_1888801)[iVar2]->f_3) };
					fVar6 = vdist(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_935(int iParam0)
{
	if (func_315(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_936(int iParam0)
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

bool func_938(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_939(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_940(int iParam0)
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

void func_941(int iParam0, int iParam1)
{
	if (!func_315(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_942()
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

int func_943()
{
	return Global_40.f_11095.f_35;
}

bool func_944(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_945(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_946(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_985(bParam1);
	}
}

void func_947(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_948(int iParam0)
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

bool func_949(int iParam0)
{
	if (!func_986(23, &vVar0))
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

bool func_950(int iParam0, int iParam1, int iParam2)
{
	if (!func_986(23, &Var0))
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

int func_951(int iParam0)
{
	return iParam0;
}

int func_952()
{
	iVar0 = func_860();
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

void func_953(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_954(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_955(int iParam0, int iParam1, var uParam2)
{
	if (!func_954(iParam0))
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

bool func_956(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_957(int iParam0, int iParam1)
{
	if (func_321() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_958(int iParam0)
{
	if (func_321() != -1)
	{
		if (func_960(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_960(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_959(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_960(iParam0, 65536) && !func_960(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_960(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_960(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_960(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_961(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_962()
{
	return Global_1905944->f_5694;
}

void func_963(int iParam0)
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

void func_964(int iParam0, int iParam1)
{
	if (!func_272(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0];
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0))
		{
			decor_set_int(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_965()
{
	return &Global_1899515;
}

void func_966(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_987(*uParam0);
	iVar1 = func_988(*uParam0);
	iVar2 = func_989(*uParam0);
	iVar3 = func_662(*uParam0);
	iVar4 = func_990(*uParam0);
	iVar5 = func_991(*uParam0);
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
	iVar6 = func_992(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_992(iVar1, iVar0);
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
	func_993(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_967(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_994(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

struct<4> func_968(bool bParam0)
{
	return func_914(1328661203, func_995(), -1591664384, bParam0);
}

bool func_969(int iParam0, bool bParam1)
{
	if (func_971(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_862(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_970(bool bParam0)
{
	iVar0 = func_819(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_914(271701509, func_968(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_914(271701509, func_968(bParam0), 12999093, 0);
}

int func_971(int iParam0)
{
	if (!func_362(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_972(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_971(iParam0);
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

bool func_973(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_819(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_974(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_362(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_914(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_819(bParam6), &Var0, 0);
	return uVar4;
}

bool func_975(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_819(0);
	*uParam1 = { func_914(iParam0, func_928(0), iParam3, 0) };
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

bool func_976(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_977(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_978(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_979(int iParam0)
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

void func_980(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_589(iParam0, iParam1))
		{
			if (func_590(iParam0, iParam1))
			{
				if (func_591(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_592(iParam0);
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

void func_981(int iParam0, int iParam1, bool bParam2)
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

void func_982(int iParam0, bool bParam1)
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

void func_983(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_834(iParam0, 1);
	func_835(iParam0, 1);
	func_836(iParam0, 128);
}

bool func_984(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0] & 32 != 0;
}

void func_985(bool bParam0)
{
	func_996(bParam0);
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

bool func_986(int iParam0, var uParam1)
{
	if (!func_997(iParam0))
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

int func_987(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_719(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_988(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_989(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_990(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_991(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_992(int iParam0, int iParam1)
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

void func_993(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_998(uParam0, iParam6);
	func_999(uParam0, iParam5);
	func_1000(uParam0, iParam4);
	func_1001(uParam0, iParam3);
	func_1002(uParam0, iParam2);
	func_1003(uParam0, iParam1);
}

int func_994(int iParam0, int iParam1)
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

struct<4> func_995()
{
	return Var0;
}

void func_996(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_997(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_998(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || shift_left((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_999(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_1000(var uParam0, int iParam1)
{
	iVar0 = func_988(*uParam0);
	iVar1 = func_987(*uParam0);
	if (iParam1 < 1 || iParam1 > func_992(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_1001(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_1002(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_1003(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

