void __EntryFunction__()
{
	fLocal_1168 = 1f;
	fLocal_1169 = 1f;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	Local_8.f_15 = 0;
	if (has_force_cleanup_occurred(523))
	{
		func_1(&Local_8);
		terminate_this_thread();
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		func_1(&Local_8);
		terminate_this_thread();
	}
	if (iVar1173 == 1)
	{
		Local_8.f_14 = 1;
	}
	if (!Local_8.f_14 && func_2(Global_1394141->f_1326, -2147483648))
	{
		func_3(&(Global_1394141->f_1326), -2147483648);
	}
	Local_8 = ScriptParam_0.f_1;
	Local_8.f_42 = { 2553.875f, -1313.143f, 48.2166f };
	Local_8.f_45 = { 2546.522f, -1306.835f, 48.26664f };
	if (!Local_8.f_1070)
	{
		Local_8.f_1058 = 180000;
	}
	while (true)
	{
		bVar1 = func_4(Global_35, Global_1394141->f_7[Local_8]->f_4, 1, 0);
		bVar2 = func_4(Global_35, &(Local_8.f_35[3]), 1, 0);
		fVar3 = func_5(Global_35, Global_1394141->f_7[Local_8]->f_1, 1);
		if ((!func_2(Local_8.f_16, 64) && bVar1) && !Local_8.f_1070)
		{
			func_6(get_entity_coords(Global_35, true, false), 200f, 0, 0);
			func_7(&(Local_8.f_16), 64);
		}
		if (_0x9e4ef615e307fbbe())
		{
			if (func_8(&Local_8) < 10)
			{
				func_9(&Local_8, 10);
			}
		}
		if (!Local_8.f_14)
		{
			func_10(256);
			if ((func_8(&Local_8) < 10 && func_11(Local_8)) && !bVar1)
			{
				func_7(&(Global_1394141->f_1326), -2147483648);
				func_9(&Local_8, 10);
			}
			func_12(bVar1);
			func_13(&Local_8, fVar3);
			if (fVar3 > 75f || func_2(Global_1394141->f_1326, -2147483648))
			{
				func_7(&(Global_1394141->f_1326), -2147483648);
				if (func_8(&Local_8) < 10)
				{
					func_9(&Local_8, 10);
				}
			}
			if ((func_14(get_player_index(), 1, 0, 1) || is_ped_in_combat(Global_35, 0)) || Global_1394141->f_1279[Local_8.f_1]->f_6)
			{
				func_7(&(Local_8.f_16), 33554432);
				if (func_8(&Local_8) < 10)
				{
					func_9(&Local_8, 10);
				}
			}
			if (_0x6c54e69516cc56bd(get_player_index()) > 0 && bVar2)
			{
				func_7(&(Local_8.f_16), 33554432);
				if (func_8(&Local_8) < 10)
				{
					func_9(&Local_8, 10);
				}
			}
		}
		if (!Local_8.f_14)
		{
			func_15(&(Local_8.f_104), Local_8.f_1);
			func_16(&(Local_8.f_104), Local_8.f_1);
		}
		func_17(&Local_8);
		func_18(&Local_8);
		if (func_8(&Local_8) >= 6)
		{
			func_19(&Local_8);
		}
		if (func_8(&Local_8) >= 8 && bVar1)
		{
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if ((func_20(&(Local_8.f_74[iVar4])) && does_entity_exist(&(Local_8.f_81[iVar4]))) && !is_entity_dead(&(Local_8.f_81[iVar4])))
				{
					set_ped_reset_flag(&(Local_8.f_81[iVar4]), 261, true);
				}
				iVar4++;
			}
		}
		if (_does_anim_scene_exist(Local_8.f_48) && _is_anim_scene_started(Local_8.f_48, false))
		{
			if (bVar1)
			{
				if (!get_anim_scene_bool(Local_8.f_48, "b_ShowCrowd"))
				{
					set_anim_scene_bool(Local_8.f_48, "b_ShowCrowd", true, false);
				}
			}
			else if (get_anim_scene_bool(Local_8.f_48, "b_ShowCrowd"))
			{
				set_anim_scene_bool(Local_8.f_48, "b_ShowCrowd", false, false);
			}
		}
		switch (func_8(&Local_8))
		{
			case 0:
				if (func_21(&Local_8))
				{
					func_22(&Local_8);
					if (!Local_8.f_14)
					{
						func_23(&(Local_8.f_104));
						func_24(1);
						func_25(-1, 0, 0, 0, 0);
						func_26();
					}
					func_27(&Local_8);
					func_28(&Local_8);
					Global_1394141->f_1321 = 0;
					func_29(&Local_8);
				}
				func_9(&Local_8, 1);
				break;
			case 1:
				if (func_21(&Local_8))
				{
					func_29(&Local_8);
				}
				if (func_30(&Local_8))
				{
					func_31(&Local_8);
					func_9(&Local_8, 2);
				}
				break;
			case 2:
				if (func_21(&Local_8))
				{
					func_29(&Local_8);
				}
				if (func_32(&Local_8))
				{
					func_33(&Local_8);
					if (!Local_8.f_14)
					{
						if (!Local_8.f_1070)
						{
							start_anim_scene(Local_8.f_49);
						}
						else
						{
							func_34(&Local_8);
						}
						func_9(&Local_8, 3);
					}
					else
					{
						func_9(&Local_8, 6);
					}
				}
				break;
			case 3:
				if (func_21(&Local_8))
				{
					if (Local_8.f_1 == -1)
					{
					}
					else
					{
						func_35(&(Local_8.f_910), Local_8.f_1);
					}
					func_29(&Local_8);
				}
				if (Local_8.f_1 == -1)
				{
					func_9(&Local_8, 6);
				}
				else if (func_36(&(Local_8.f_910), Local_8.f_1))
				{
					func_9(&Local_8, 4);
				}
				break;
			case 4:
				if (func_21(&Local_8))
				{
					func_29(&Local_8);
				}
				if (func_37(&(Local_8.f_349), Local_8.f_1, -1))
				{
					func_9(&Local_8, 5);
				}
				break;
			case 5:
				if (func_21(&Local_8))
				{
					func_29(&Local_8);
				}
				if (func_38(&(Local_8.f_349), &(Local_8.f_910), Local_8.f_1))
				{
					if (func_39(&(Local_8.f_349), Local_8.f_1))
					{
						if (!func_40(&(Local_8.f_26)))
						{
							func_41(&(Local_8.f_26));
						}
						else if (func_42(&(Local_8.f_26)) > 1f)
						{
							func_43(&(Local_8.f_26));
							func_9(&Local_8, 6);
						}
					}
				}
				break;
			case 6:
				if (func_21(&Local_8))
				{
					func_41(&(Local_8.f_947));
					if (Local_8.f_1070)
					{
						Local_8.f_1059.f_1 = Local_8.f_1;
					}
					if (Local_8.f_1 == 0 && !Local_8.f_14)
					{
						func_7(&(Global_1394141->f_1325), 512);
						func_7(&(Global_1394141->f_1325), 131072);
					}
					func_29(&Local_8);
				}
				func_44(&Local_8);
				if (Local_8.f_1070)
				{
					func_45(&(Local_8.f_1059), Local_8);
				}
				if (func_46(&Local_8))
				{
					if ((func_40(&(Local_8.f_947)) && func_47(&(Local_8.f_947)) > Local_8.f_1058) || bVar1)
					{
						func_41(&(Local_8.f_947));
						func_9(&Local_8, 7);
					}
				}
				break;
			case 7:
				if (func_21(&Local_8))
				{
					func_29(&Local_8);
				}
				func_44(&Local_8);
				if ((Local_8.f_1070 && Local_8.f_1059.f_10 == 0) && func_48(&(Local_8.f_947)) > 3f)
				{
					Local_8.f_1059.f_10 = 1;
				}
				if ((func_40(&(Local_8.f_947)) && func_47(&(Local_8.f_947)) > 10000) || Local_8.f_14)
				{
					bVar0 = true;
				}
				if (Local_8.f_1070)
				{
					func_45(&(Local_8.f_1059), Local_8);
				}
				if (bVar0)
				{
					if (!Local_8.f_14)
					{
						func_7(&(Global_1394141->f_1325), 2);
						func_7(&(Global_1394141->f_1325), 4096);
					}
					if (Local_8.f_1 != 0)
					{
					}
					if (Local_8.f_1070)
					{
						func_7(&(Global_1394141->f_1325), 16);
						Global_1394141->f_1330 = 1;
						if (Local_8.f_1 == 1 || Local_8.f_1 == 2)
						{
							func_7(&(Global_1394141->f_1325), 4194304);
						}
					}
					if (!func_2(Local_8.f_16, 1024))
					{
						func_9(&Local_8, 8);
					}
					else if (!func_40(&(Local_8.f_26)))
					{
						func_41(&(Local_8.f_26));
						Global_1394141->f_1322 = 1;
					}
					else if (func_42(&(Local_8.f_26)) > 5f)
					{
						func_43(&(Local_8.f_26));
						func_9(&Local_8, 8);
					}
				}
				break;
			case 8:
				if (func_21(&Local_8))
				{
					func_29(&Local_8);
				}
				func_44(&Local_8);
				if (Local_8.f_1070)
				{
					func_45(&(Local_8.f_1059), Local_8);
					func_49(&Local_8, Local_8.f_1);
					if (!func_2(Global_1394141->f_1325, 16))
					{
						func_50(&Local_8);
						func_51(Local_8);
						func_9(&Local_8, 9);
						_0x8bf907833be275de(0f, 1f);
						func_7(&(Local_8.f_16), 268435456);
					}
				}
				else
				{
					if (_does_anim_scene_exist(Local_8.f_48) && !func_2(Local_8.f_16, 128))
					{
						start_anim_scene(Local_8.f_48);
						func_7(&(Local_8.f_16), 128);
					}
					if (_does_anim_scene_exist(Local_8.f_49) && !func_2(Local_8.f_16, 512))
					{
						func_7(&(Local_8.f_16), -2147483648);
						func_7(&(Local_8.f_16), 512);
					}
					_0x8bf907833be275de(0f, 1f);
					func_7(&(Local_8.f_16), 268435456);
					func_54(func_52(6), func_53());
					if (func_2(Local_8.f_17, 1) && load_stream(func_55(Local_8), func_56(Local_8)))
					{
						iVar5 = _0x0556c784fa056628(func_55(Local_8), func_56(Local_8));
						if (iVar5 != -1)
						{
							play_stream_from_position(2548.749f, -1305.267f, 50.01453f, iVar5);
						}
					}
					if (_does_anim_scene_exist(Local_8.f_48))
					{
						if (_is_anim_scene_started(Local_8.f_48, false))
						{
							func_9(&Local_8, 9);
						}
					}
				}
				break;
			case 9:
				if (func_21(&Local_8))
				{
					if (Local_8.f_1070 || !Local_8.f_14)
					{
						if (Local_8.f_1 == 4 || Local_8.f_1 == 2)
						{
							Global_40.f_9028[4] = (&Global_40.f_9028[4] + 1);
							Global_40.f_9028[2] = &Global_40.f_9028[2] + 1;
						}
						else
						{
							Global_40.f_9028[1] = (&Global_40.f_9028[1] + 1);
							Global_40.f_9028[3] = &Global_40.f_9028[3] + 1;
						}
					}
					func_41(&(Local_8.f_32));
					Global_1394141->f_1335 = Local_8.f_48;
					func_29(&Local_8);
				}
				func_44(&Local_8);
				if (!Local_8.f_14)
				{
					func_57(&(Local_8.f_910), &(Local_8.f_349), Local_8.f_1);
					if (!bVar1)
					{
						if (func_58(1))
						{
							if (!func_40(&(Local_8.f_20)))
							{
								func_41(&(Local_8.f_20));
							}
							else if (func_42(&(Local_8.f_20)) > 10f)
							{
								func_59(1);
								func_43(&(Local_8.f_20));
							}
						}
					}
					else
					{
						if (!func_58(1))
						{
							func_24(1);
							func_25(-1, 0, 0, 0, 0);
							func_26();
						}
						if (func_40(&(Local_8.f_20)))
						{
							func_43(&(Local_8.f_20));
						}
					}
				}
				func_60(&(Local_8.f_12));
				func_61(&Local_8);
				func_62(&Local_8);
				func_63(&Local_8);
				if (func_2(Local_8.f_16, 4096))
				{
					if (_is_anim_scene_started(Local_8.f_48, false) && _get_anim_scene_progress(Local_8.f_48) > func_64())
					{
						func_7(&(Local_8.f_16), 2);
					}
				}
				if (func_2(Local_8.f_16, 268435456) && func_2(Local_8.f_16, 134217728))
				{
					_0x8bf907833be275de(1f, 1f);
					func_3(&(Local_8.f_16), 268435456);
				}
				if (Local_8.f_1070)
				{
					func_65(&Local_8);
					func_45(&(Local_8.f_1059), Local_8);
					func_66(&Local_8, bVar1);
					if ((func_67() && func_2(Local_8.f_16, 2097152)) && func_48(&(Local_8.f_32)) > 30f)
					{
						if (!func_2(Local_8.f_16, 67108864))
						{
							func_7(&(Global_1394141->f_1325), 4);
							func_7(&(Global_1394141->f_1325), 32);
							if (Local_8.f_1 == 1 || Local_8.f_1 == 2)
							{
								func_7(&(Global_1394141->f_1325), 8388608);
							}
							Global_1394141->f_1330 = 0;
							Local_8.f_910.f_19 = 1;
							Global_1394141->f_1329 = 1;
							func_69(func_68(281346304), 1);
							func_70(&Local_8);
							func_7(&(Local_8.f_16), 67108864);
						}
						func_71(&Local_8);
						if (!bVar1 && !bVar2)
						{
							func_9(&Local_8, 10);
						}
						if (func_2(Local_8.f_16, 268435456))
						{
							_0x8bf907833be275de(1f, 1f);
							func_3(&(Local_8.f_16), 268435456);
						}
					}
					else
					{
						if (bVar1 || bVar2)
						{
							if (!func_2(Local_8.f_16, 268435456))
							{
								_0x8bf907833be275de(0f, 1f);
								func_7(&(Local_8.f_16), 268435456);
							}
						}
						else if (func_2(Local_8.f_16, 268435456))
						{
							_0x8bf907833be275de(1f, 1f);
							func_3(&(Local_8.f_16), 268435456);
						}
						func_72(&Local_8);
					}
				}
				else if (func_2(Local_8.f_16, 8388608))
				{
					if (!func_2(Local_8.f_16, 67108864))
					{
						func_73(func_52(6), func_53());
						if (func_2(Local_8.f_16, 268435456))
						{
							_0x8bf907833be275de(1f, 1f);
							func_3(&(Local_8.f_16), 268435456);
						}
						if (func_2(Local_8.f_16, 4096) && !Local_8.f_14)
						{
							func_7(&(Global_1394141->f_1325), 4);
							func_7(&(Global_1394141->f_1325), 8192);
						}
						if (Local_8.f_14)
						{
							Global_1394141->f_1323 = 1;
						}
						func_69(func_68(-299021541), 1);
						func_7(&(Local_8.f_16), 67108864);
					}
					if (Local_8.f_14)
					{
						if (!Global_1394141->f_1321)
						{
							if (_get_anim_scene_progress(Local_8.f_48) > 0.99f)
							{
								func_9(&Local_8, 10);
							}
							if (Local_8 != 7)
							{
							}
							else
							{
								func_9(&Local_8, 10);
							}
						}
					}
					else
					{
						func_74(&Local_8);
						if (!bVar1 && !bVar2)
						{
							Global_1394141->f_1321 = 0;
							func_9(&Local_8, 10);
						}
					}
				}
				if (!bVar1)
				{
					func_75(&Local_8);
				}
				break;
			case 10:
				if (func_21(&Local_8))
				{
					func_29(&Local_8);
				}
				if (func_2(Local_8.f_16, 4194304))
				{
					iVar6 = get_interior_at_coords(func_76(Local_8.f_1));
					if (is_valid_interior(iVar6))
					{
						unpin_interior(iVar6);
					}
					func_3(&(Local_8.f_16), 4194304);
				}
				func_3(&(Global_1394141->f_1326), 32768);
				if (!Local_8.f_14 && (func_2(Global_1394141->f_1326, -2147483648) || func_2(Local_8.f_16, 33554432)))
				{
					if (!bVar1)
					{
						if (Local_8.f_1070)
						{
							func_77(&(Local_8.f_1059));
							func_7(&(Global_1394141->f_1325), 4);
							func_7(&(Global_1394141->f_1325), 32);
							if (func_2(Local_8.f_16, 268435456))
							{
								_0x8bf907833be275de(1f, 1f);
								func_3(&(Local_8.f_16), 268435456);
							}
							func_71(&Local_8);
						}
						else
						{
							Global_1394141->f_1321 = 0;
						}
						func_70(&Local_8);
						Global_1394141->f_1328 = 0;
						Global_1394141->f_1330 = 0;
						if (_does_anim_scene_exist(Local_8.f_49))
						{
							_delete_anim_scene(Local_8.f_49);
						}
						_0x531a78d6bf27014b(func_53());
						func_1(&Local_8);
						func_78(&(Local_8.f_349), &(Local_8.f_35[4]));
						func_79(&Local_8);
						func_80(Local_8);
						func_81(Global_1394141->f_7[&Global_1394141]->f_30);
						func_82();
						func_9(&Local_8, 11);
					}
				}
				if (Local_8.f_14)
				{
					if (_does_anim_scene_exist(Local_8.f_49))
					{
						_delete_anim_scene(Local_8.f_49);
					}
					_0x531a78d6bf27014b(func_53());
					func_1(&Local_8);
					func_9(&Local_8, 11);
				}
				else if (((!bVar1 && !bVar2) && !Local_8.f_14) && fVar3 > 17f)
				{
					func_74(&Local_8);
					func_70(&Local_8);
					Global_1394141->f_1328 = 0;
					Global_1394141->f_1330 = 0;
					func_77(&(Local_8.f_1059));
					if (!func_83(Local_8) && !func_84(Local_8))
					{
						if (_does_anim_scene_exist(Local_8.f_49))
						{
							_delete_anim_scene(Local_8.f_49);
						}
						_0x531a78d6bf27014b(func_53());
						func_1(&Local_8);
						func_78(&(Local_8.f_349), &(Local_8.f_35[4]));
						func_79(&Local_8);
						func_81(Global_1394141->f_7[&Global_1394141]->f_30);
						func_82();
						func_9(&Local_8, 11);
					}
				}
				break;
			case 11:
				if (func_21(&Local_8))
				{
					func_29(&Local_8);
				}
				if (!Local_8.f_14)
				{
					if (!bVar1)
					{
						if (Local_8.f_2 == 0)
						{
							Global_1394141->f_1279[Local_8.f_1]->f_6 = 0;
							terminate_this_thread();
						}
					}
					else
					{
						func_9(&Local_8, 10);
					}
				}
				else
				{
					terminate_this_thread();
				}
				break;
		}
		wait(0);
	}
}

void func_1(int iParam0)
{
	if (Local_8.f_1070)
	{
		func_85(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_66)
	{
		iVar1 = &iParam0->f_66[iVar0];
		if (does_entity_exist(iVar1))
		{
			delete_object(&iVar1);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_81)
	{
		iVar2 = &iParam0->f_81[iVar0];
		if (is_model_valid(&(iParam0->f_74[iVar0])) && does_entity_exist(iVar2))
		{
			remove_entity_from_audio_mix_group(iVar2, -1f);
			delete_ped(&iVar2);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_96)
	{
		iVar3 = &iParam0->f_96[iVar0];
		if (does_entity_exist(iVar3))
		{
			delete_object(&iVar3);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(iParam0->f_48))
	{
		_delete_anim_scene(iParam0->f_48);
	}
	if (does_entity_exist(iParam0->f_57))
	{
		delete_object(&(iParam0->f_57));
	}
	if (_does_text_database_exist(iParam0->f_945))
	{
		if (_text_database_has_loaded(iParam0->f_945))
		{
			_text_database_delete(iParam0->f_945);
		}
	}
	if (_does_text_database_exist(iParam0->f_946) && !iParam0->f_14)
	{
		if (_text_database_has_loaded(iParam0->f_946))
		{
			_text_database_delete(iParam0->f_946);
		}
	}
	func_86(iParam0);
	if (!iParam0->f_14)
	{
		func_87(&(iParam0->f_104));
		if (func_58(1))
		{
			func_59(1);
		}
	}
	if (func_2(iParam0->f_16, 33554432))
	{
		func_78(&(iParam0->f_349), Global_1394141->f_7[*iParam0]->f_4);
	}
	func_59(1);
}

bool func_2(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_3(var uParam0, int iParam1)
{
	func_88(uParam0, iParam1);
}

bool func_4(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_5(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_6(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_7(var uParam0, int iParam1)
{
	func_89(uParam0, iParam1);
}

int func_8(int iParam0)
{
	return iParam0->f_9;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0->f_9 != iParam1)
	{
		iParam0->f_9 = iParam1;
		func_90(iParam0);
	}
}

void func_10(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

bool func_11(int iParam0)
{
	if ((get_frame_count() % 15) == 0)
	{
		func_91(&(Global_40.f_9028.f_6[Global_1394141->f_7[iParam0]->f_30]), &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
		if (((iVar2 >= 6 || iVar3 >= 1) || iVar4 >= 1) || iVar5 >= 1)
		{
			return true;
		}
	}
	return false;
}

void func_12(bool bParam0)
{
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = false;
	if (func_2(Global_1394141->f_1326, 1))
	{
		bVar3 = false;
		bVar1 = false;
		bVar4 = false;
	}
	if (func_2(Global_1394141->f_1326, 2))
	{
		bVar0 = false;
	}
	if (func_2(Global_1394141->f_1326, 4))
	{
		bVar2 = false;
		bVar0 = false;
		bVar1 = false;
	}
	if (func_2(Global_1394141->f_1326, 64))
	{
		bVar2 = false;
	}
	if (func_2(Global_1394141->f_1326, 512))
	{
		bVar5 = true;
	}
	func_92(0);
	if (bParam0)
	{
		if (_0x3d10d7179d7034af(func_93(0), -1569615261, 0))
		{
			_0x6a564540fac12211(func_93(0), -1569615261);
		}
		if (!bVar0)
		{
			if (!func_2(Global_1394141->f_1326, 8))
			{
				if (_does_volume_exist(Global_1394141->f_7[&Global_1394141]->f_4) && _0x666c2f53abefc952(Global_1394141->f_7[&Global_1394141]->f_4) != 623901053)
				{
					_0xfd010a2154b40676(Global_1394141->f_7[&Global_1394141]->f_4, 623901053);
					if (get_current_ped_weapon(Global_35, &iLocal_2, true, 2, false))
					{
						if ((iLocal_2 != -1569615261 && iLocal_2 != 1549070292) && iLocal_2 != 1030402560)
						{
							if (_0x3d10d7179d7034af(func_93(0), iLocal_2, 0))
							{
								_0x6a564540fac12211(func_93(0), iLocal_2);
								func_94(iLocal_2);
							}
						}
						if (_0x666c2f53abefc952(Global_1394141->f_7[&Global_1394141]->f_4) != 623901053)
						{
							_0xfd010a2154b40676(Global_1394141->f_7[&Global_1394141]->f_4, 623901053);
						}
						func_7(&(Global_1394141->f_1326), 8);
					}
				}
			}
		}
		else if (func_2(Global_1394141->f_1326, 8))
		{
			if (_does_volume_exist(Global_1394141->f_7[&Global_1394141]->f_4) && bVar3)
			{
				_0xfd010a2154b40676(Global_1394141->f_7[&Global_1394141]->f_4, 1030835986);
				func_3(&(Global_1394141->f_1326), 8);
			}
		}
		else
		{
			if (get_current_ped_weapon(Global_35, &iLocal_2, true, 0, false))
			{
				iVar6 = get_script_task_status(Global_35, 716706914, true);
				iVar7 = get_script_task_status(Global_35, 713668775, true);
				if ((((((iLocal_2 != -1569615261 && iLocal_2 != 1549070292) && iLocal_2 != 1030402560) && iVar6 != 1) && iVar6 != 0) && iVar7 != 1) && iVar7 != 0)
				{
					set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
					task_swap_weapon(Global_35, 1, 0, 0, 0);
					if (is_ped_using_action_mode(Global_35))
					{
						set_ped_using_action_mode(Global_35, false, -1, 0);
					}
				}
			}
			func_95(&iLocal_2, 1);
		}
		if (bVar3)
		{
			disable_control_action(0, -128997553, false);
		}
		if (bVar1)
		{
			disable_control_action(0, -1292666904, false);
		}
		if (bVar0)
		{
			disable_control_action(0, 130948705, false);
			disable_control_action(0, 42190210, false);
			disable_control_action(0, -197984200, false);
			disable_control_action(0, -238861894, false);
		}
		if (bVar2)
		{
			disable_control_action(0, -640622144, false);
		}
		_0x632be8d84846fa56();
		_0x3c8f74e8fe751614();
		_0x8910c24b7e0046ec();
		disable_control_action(0, -824104112, false);
		disable_control_action(0, 516589524, false);
		disable_control_action(0, 1390807691, false);
		disable_control_action(0, 1663574939, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, -562475458, false);
		if (!get_ped_config_flag(Global_35, 489, false))
		{
			set_ped_config_flag(Global_35, 489, true);
		}
		if (bVar4)
		{
			if (bVar5)
			{
				_0xc9caeaeec1256e54(-1679307491);
			}
			else
			{
				_0xc9caeaeec1256e54(1664736751);
			}
			disable_control_action(0, -1404316431, false);
		}
		else
		{
			if (bVar5)
			{
				_0xc9caeaeec1256e54(-1679307491);
			}
			if (!func_2(Global_1394141->f_1326, 8))
			{
				if (_does_volume_exist(Global_1394141->f_7[&Global_1394141]->f_4) && _0x666c2f53abefc952(Global_1394141->f_7[&Global_1394141]->f_4) != 623901053)
				{
					if (get_current_ped_weapon(Global_35, &iLocal_2, true, 2, false))
					{
						if ((iLocal_2 != -1569615261 && iLocal_2 != 1549070292) && iLocal_2 != 1030402560)
						{
							if (_0x3d10d7179d7034af(func_93(0), iLocal_2, 0))
							{
								_0x6a564540fac12211(func_93(0), iLocal_2);
								func_94(iLocal_2);
							}
						}
						if (_0x666c2f53abefc952(Global_1394141->f_7[&Global_1394141]->f_4) != 623901053)
						{
							_0xfd010a2154b40676(Global_1394141->f_7[&Global_1394141]->f_4, 623901053);
						}
						func_7(&(Global_1394141->f_1326), 8);
					}
				}
			}
		}
		func_96();
	}
	else
	{
		func_97();
		func_95(&iLocal_2, 1);
		if (get_ped_config_flag(Global_35, 489, false))
		{
			set_ped_config_flag(Global_35, 489, false);
		}
	}
}

void func_13(int iParam0, float fParam1)
{
	switch (iParam0->f_2)
	{
		case 0:
			if (func_8(iParam0) == 6 && !func_98())
			{
				func_99(&(iParam0->f_2), 1);
			}
			if (((func_4(Global_35, Global_1394141->f_7[*iParam0]->f_4, 1, 0) && !func_98()) && func_8(iParam0) >= 6) && !func_4(Global_35, &(iParam0->f_35[3]), 1, 0))
			{
				func_99(&(iParam0->f_2), 1);
			}
			break;
		case 1:
			if (func_100(*iParam0))
			{
				func_99(&(iParam0->f_2), 2);
			}
			break;
		case 2:
			if (func_98() && !func_4(Global_35, Global_1394141->f_7[*iParam0]->f_4, 1, 0))
			{
				func_99(&(iParam0->f_2), 3);
			}
			if (func_8(iParam0) == 10 || func_8(iParam0) == 11)
			{
				if (fParam1 > 17f)
				{
					func_99(&(iParam0->f_2), 3);
				}
			}
			break;
		case 3:
			if (func_80(*iParam0))
			{
				func_99(&(iParam0->f_2), 0);
			}
			break;
	}
}

bool func_14(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_101(bParam1, bParam2, bParam3);
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

int func_15(var uParam0, int iParam1)
{
	if (iParam1 == -1 || !func_2(Global_1394141->f_1325, -2147483648))
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (!func_2(Global_1394141->f_1325, 1))
	{
		iVar1 = func_102(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar3 = iVar0;
			if (func_105((*uParam0)[iVar0], func_103(iParam1), func_104(iParam1, iVar3), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_7(&(Global_1394141->f_1325), 1);
		}
	}
	iVar2 = 0;
	if (!func_2(Global_1394141->f_1325, 8))
	{
		iVar1 = func_106(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar4 = iVar0;
			if (func_105(uParam0->f_31[iVar0], func_107(iParam1), func_108(iParam1, iVar4), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_7(&(Global_1394141->f_1325), 8);
		}
	}
	iVar2 = 0;
	if (!func_2(Global_1394141->f_1325, 2048))
	{
		iVar1 = func_109(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar5 = iVar0;
			if (func_105(uParam0->f_107[iVar0], func_110(iParam1), func_111(iParam1, iVar5), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_7(&(Global_1394141->f_1325), 2048);
		}
	}
	switch (iParam1)
	{
		case 0:
			if (!func_2(Global_1394141->f_1325, 64) && func_105(uParam0->f_118[0], func_112(iParam1, 0), func_113(iParam1, 0), 1065353216))
			{
				func_7(&(Global_1394141->f_1325), 64);
			}
			if ((!func_2(Global_1394141->f_1325, 16384) && func_105(uParam0->f_118[1], func_112(iParam1, 1), func_113(iParam1, 1), 1065353216)) && func_105(uParam0->f_118[2], func_112(iParam1, 2), func_113(iParam1, 2), 1065353216))
			{
				func_7(&(Global_1394141->f_1325), 16384);
			}
			break;
		case 1:
		case 2:
			iVar2 = 0;
			if (!func_2(Global_1394141->f_1325, 2097152))
			{
				iVar1 = func_114(iParam1);
				iVar0 = 0;
				while (iVar0 <= (iVar1 - 1))
				{
					iVar6 = iVar0;
					if (func_105(uParam0->f_118[iVar0], func_112(iParam1, 0), func_113(iParam1, iVar6), 1065353216))
					{
						iVar2++;
					}
					iVar0++;
				}
				if (iVar2 >= iVar1)
				{
					func_7(&(Global_1394141->f_1325), 2097152);
				}
			}
			break;
	}
	return 1;
}

void func_16(var uParam0, int iParam1)
{
	if (func_2(Global_1394141->f_1325, 1))
	{
		if (func_2(Global_1394141->f_1325, 2) && func_118(uParam0, func_115(uParam0), &(uParam0->f_229), func_116(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 2);
		}
		if (func_2(Global_1394141->f_1325, 4) && func_120(uParam0, func_119(uParam0), &(uParam0->f_229), func_116(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 4);
		}
	}
	if (func_2(Global_1394141->f_1325, 8))
	{
		if (func_2(Global_1394141->f_1325, 16) && func_118(&(uParam0->f_31), func_121(uParam0), &(uParam0->f_232), func_122(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 16);
		}
		if (func_2(Global_1394141->f_1325, 32) && func_120(&(uParam0->f_31), func_123(uParam0), &(uParam0->f_232), func_122(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 32);
		}
	}
	if (func_2(Global_1394141->f_1325, 2048))
	{
		if (func_2(Global_1394141->f_1325, 4096) && func_118(&(uParam0->f_107), func_124(uParam0), &(uParam0->f_235), func_125(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 4096);
		}
		if (func_2(Global_1394141->f_1325, 8192) && func_120(&(uParam0->f_107), func_126(uParam0), &(uParam0->f_235), func_125(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 8192);
		}
	}
	if (iParam1 == 0)
	{
		if (func_2(Global_1394141->f_1325, 64))
		{
			if (func_2(Global_1394141->f_1325, 128) && func_129(uParam0->f_118[0], func_127(uParam0), &(uParam0->f_238), func_128(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 128);
			}
			if (func_2(Global_1394141->f_1325, 256) && func_131(uParam0->f_118[0], func_130(uParam0), &(uParam0->f_238), func_128(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 256);
			}
			if (func_2(Global_1394141->f_1325, 512) && func_129(uParam0->f_118[0], func_127(uParam0), &(uParam0->f_238), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 512);
			}
			if (func_2(Global_1394141->f_1325, 1024) && func_131(uParam0->f_118[0], func_130(uParam0), &(uParam0->f_238), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 1024);
			}
		}
		if (func_2(Global_1394141->f_1325, 16384))
		{
			if (func_2(Global_1394141->f_1325, 32768) && func_134(1, 2, &(uParam0->f_118), func_132(uParam0), &(uParam0->f_241), func_133(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 32768);
			}
			if (func_2(Global_1394141->f_1325, 65536) && func_136(1, 2, &(uParam0->f_118), func_135(uParam0), &(uParam0->f_241), func_133(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 65536);
			}
			if (func_2(Global_1394141->f_1325, 131072) && func_134(1, 2, &(uParam0->f_118), func_132(uParam0), &(uParam0->f_241), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 131072);
			}
			if (func_2(Global_1394141->f_1325, 262144) && func_136(1, 2, &(uParam0->f_118), func_135(uParam0), &(uParam0->f_241), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 262144);
			}
		}
		if (func_2(Global_1394141->f_1325, 524288))
		{
			bVar0 = true;
			if (!func_118(&(uParam0->f_31), func_121(uParam0), &(uParam0->f_232), 0.1f, func_117(uParam0)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_3(&(Global_1394141->f_1325), 524288);
			}
		}
		if (func_2(Global_1394141->f_1325, 1048576))
		{
			bVar1 = true;
			if (!func_120(&(uParam0->f_31), func_123(uParam0), &(uParam0->f_232), 0.1f, func_117(uParam0)))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_3(&(Global_1394141->f_1325), 1048576);
			}
		}
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (func_2(Global_1394141->f_1325, 2097152))
		{
			if (func_2(Global_1394141->f_1325, 4194304) && func_118(&(uParam0->f_118), func_137(uParam0), &(uParam0->f_238), func_138(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 4194304);
			}
			if (func_2(Global_1394141->f_1325, 8388608) && func_120(&(uParam0->f_118), func_139(uParam0), &(uParam0->f_238), func_138(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 8388608);
			}
		}
	}
}

void func_17(int iParam0)
{
	if (!_does_anim_scene_exist(iParam0->f_49))
	{
		return;
	}
	switch (iParam0->f_13)
	{
		case 0:
			if (!func_142(iParam0->f_49, func_140(1), func_141()))
			{
				return;
			}
			func_143(&(iParam0->f_13), 1);
			break;
		case 1:
			if (func_2(iParam0->f_16, -2147483648))
			{
				set_anim_scene_entity(iParam0->f_49, func_144(), iParam0->f_57, 0);
				func_145(iParam0->f_49, func_140(1), func_141());
				func_143(&(iParam0->f_13), 2);
			}
			break;
		case 2:
			if (_0x1f0e401031e20146(iParam0->f_49, func_140(1)))
			{
				func_146(iParam0->f_49, func_140(2), func_141());
				func_3(&(iParam0->f_16), -2147483648);
				func_143(&(iParam0->f_13), 3);
			}
			break;
		case 3:
			if (!func_142(iParam0->f_49, func_140(2), func_141()))
			{
				return;
			}
			func_143(&(iParam0->f_13), 4);
			break;
		case 4:
			if (Global_1394141->f_1321)
			{
				set_anim_scene_entity(iParam0->f_49, func_144(), iParam0->f_57, 0);
				func_145(iParam0->f_49, func_140(2), func_141());
				func_143(&(iParam0->f_13), 5);
			}
			break;
		case 5:
			if (_0x1f0e401031e20146(iParam0->f_49, func_140(2)))
			{
				func_146(iParam0->f_49, func_140(1), func_141());
				func_143(&(iParam0->f_13), 0);
			}
			break;
	}
}

void func_18(int iParam0)
{
	if (!iParam0->f_1070)
	{
		return;
	}
	bVar0 = _is_ped_using_scenario_hash(Global_35, -447259824);
	bVar1 = func_4(Global_35, &(iParam0->f_35[1]), 1, 0);
	bVar2 = func_4(Global_35, &(iParam0->f_35[2]), 1, 0);
	if (bVar0)
	{
		if (bVar1)
		{
			if (!func_2(iParam0->f_16, 2048) && !is_entity_dead(iParam0->f_1088))
			{
				if (_0xdd0b7c5ae58f721d(&(iParam0->f_1101)) && !_0x927b810e43e99932(&(iParam0->f_1101)))
				{
					_0xb8b207c34285e978(&(iParam0->f_1101));
					func_7(&(iParam0->f_16), 2048);
				}
			}
		}
		if (bVar2)
		{
			if (!func_2(iParam0->f_16, 2048) && !is_entity_dead(iParam0->f_1088))
			{
				if (_0xdd0b7c5ae58f721d(&(iParam0->f_1117)) && !_0x927b810e43e99932(&(iParam0->f_1117)))
				{
					_0xb8b207c34285e978(&(iParam0->f_1117));
				}
			}
		}
	}
	else
	{
		if (_0x927b810e43e99932(&(iParam0->f_1101)))
		{
			_0x0a5a4f1979abb40e(&(iParam0->f_1101));
			func_3(&(iParam0->f_16), 2048);
		}
		if (_0x927b810e43e99932(&(iParam0->f_1117)))
		{
			_0x0a5a4f1979abb40e(&(iParam0->f_1117));
			func_3(&(iParam0->f_16), 2048);
		}
	}
}

void func_19(int iParam0)
{
}

bool func_20(int iParam0)
{
	return iParam0 != 0;
}

bool func_21(int iParam0)
{
	return iParam0->f_10;
}

void func_22(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iParam0->f_88[iVar0] = 0;
		iVar0++;
	}
}

void func_23(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		(*uParam0)[iVar0]->f_2 = 1f;
		(*uParam0)[iVar0]->f_3 = 0f;
		(*uParam0)[iVar0]->f_4 = 1f;
		(*uParam0)[iVar0]->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		uParam0->f_31[iVar0]->f_2 = 1f;
		uParam0->f_31[iVar0]->f_3 = 0f;
		uParam0->f_31[iVar0]->f_4 = 1f;
		uParam0->f_31[iVar0]->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_107[iVar0]->f_2 = 1f;
		uParam0->f_107[iVar0]->f_3 = 0f;
		uParam0->f_107[iVar0]->f_4 = 1f;
		uParam0->f_107[iVar0]->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		uParam0->f_118[iVar0]->f_2 = 1f;
		uParam0->f_118[iVar0]->f_3 = 0f;
		uParam0->f_118[iVar0]->f_4 = 1f;
		uParam0->f_118[iVar0]->f_1 = 0;
		iVar0++;
	}
	func_7(&(Global_1394141->f_1325), -2147483648);
}

void func_24(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_25(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_147() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_148(iVar1) && !func_149(iVar1, iParam2)) && (!bParam3 || !func_150(iVar1))) && (!bParam4 || !func_151(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_152(iVar0);
			}
		}
		iVar0++;
	}
}

void func_26()
{
	if (!func_148(&Global_1327479))
	{
		return;
	}
	if (does_script_exist(&((*Global_1310750)[&Global_1327479]->f_40)))
	{
		if (has_script_loaded(&((*Global_1310750)[&Global_1327479]->f_40)))
		{
			set_script_as_no_longer_needed(&((*Global_1310750)[&Global_1327479]->f_40));
		}
	}
	func_153(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_27(int iParam0)
{
	iParam0->f_74[0] = -2053326164;
	iParam0->f_74[1] = -1458432563;
	iParam0->f_74[2] = 1599685341;
	iParam0->f_58[0] = 335081545;
	iParam0->f_946 = "ODDFAUD";
	iParam0->f_910 = Local_8;
	func_7(&(iParam0->f_16), 131072);
	if (func_154())
	{
		func_155(&(iParam0->f_954), Global_35, "JOHN", 0);
	}
	else
	{
		func_155(&(iParam0->f_954), Global_35, "ARTHUR", 0);
	}
	iParam0->f_50 = { 2546.41f, -1303.55f, 46.9f };
	iParam0->f_53 = { 0f, 0f, 40f };
	if (!_does_anim_scene_exist(iParam0->f_48))
	{
		iParam0->f_48 = _create_anim_scene("script@rcm@roddf@ig@roddf_s3@roddf_s3", 0, "pl_Performance", false, true);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		iVar1 = iVar0;
		iLocal_1143[iVar0] = get_hash_key(func_156(iVar1));
		iVar0++;
	}
	_0xf008e0ba1fe1d644(3);
}

void func_28(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_58)
	{
		iVar1 = &iParam0->f_58[iVar0];
		if (func_20(iVar1))
		{
			request_model(iVar1, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_74)
	{
		iVar2 = &iParam0->f_74[iVar0];
		if (func_20(iVar2))
		{
			request_model(iVar2, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iVar3 = &iParam0->f_88[iVar0];
		if (iVar3 != 0)
		{
			if (is_weapon_valid(iVar3))
			{
				_0x72d4cb5db927009c(iVar3, -1, 0);
			}
		}
		iVar0++;
	}
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		request_model(iParam0->f_56, false);
	}
	request_anim_dict(func_157());
	if (_does_anim_scene_exist(iParam0->f_48) && !_is_anim_scene_loaded(iParam0->f_48, true, false))
	{
		load_anim_scene(iParam0->f_48);
	}
}

void func_29(int iParam0)
{
	iParam0->f_10 = 0;
}

bool func_30(int iParam0)
{
	iVar1 = get_interior_at_coords(func_76(iParam0->f_1));
	if (!func_2(iParam0->f_16, 4194304))
	{
		if (is_valid_interior(iVar1))
		{
			pin_interior_in_memory(iVar1);
			func_7(&(iParam0->f_16), 4194304);
			return false;
		}
	}
	else if (!is_interior_ready(iVar1))
	{
		return false;
	}
	if (!is_string_null_or_empty(iParam0->f_945))
	{
		if (_does_text_database_exist(iParam0->f_945))
		{
			_text_database_request(iParam0->f_945);
		}
		if (!_text_database_has_loaded(iParam0->f_945))
		{
			return false;
		}
	}
	if (!is_string_null_or_empty(iParam0->f_946) && !iParam0->f_14)
	{
		if (_does_text_database_exist(iParam0->f_946))
		{
			_text_database_request(iParam0->f_946);
		}
		if (!_text_database_has_loaded(iParam0->f_946))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_58)
	{
		iVar2 = &iParam0->f_58[iVar0];
		if (func_20(iVar2))
		{
			if (!has_model_loaded(iVar2))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_74)
	{
		iVar3 = &iParam0->f_74[iVar0];
		if (func_20(iVar3))
		{
			if (!has_model_loaded(iVar3))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iVar4 = &iParam0->f_88[iVar0];
		if (iVar4 != 0)
		{
			if (is_weapon_valid(iVar4) && !_0xff07cf465f48b830(iVar4))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		if (!has_model_loaded(iParam0->f_56))
		{
			return false;
		}
	}
	if (_does_anim_scene_exist(iParam0->f_48))
	{
		if (!_is_anim_scene_loaded(iParam0->f_48, true, false))
		{
			return false;
		}
	}
	if (!_0xd9130842d7226045(func_53(), 1))
	{
		return false;
	}
	if (!has_anim_dict_loaded(func_157()))
	{
		return false;
	}
	if (!func_158(iParam0))
	{
		return false;
	}
	if (!func_159(iParam0))
	{
		return false;
	}
	return true;
}

int func_31(int iParam0)
{
	StringCopy(&(iParam0->f_1101), "camera_treatments", 64);
	StringCopy(&(iParam0->f_1101.f_8), "THEATRE_CUSTOM_TREATMENT_REQUEST", 64);
	StringCopy(&(iParam0->f_1117), "camera_treatments", 64);
	StringCopy(&(iParam0->f_1117.f_8), "THEATRE_RIGHT_SIDE_CUSTOM_TREATMENT_REQUEST", 64);
	_0x6a4d224fc7643941(&(iParam0->f_1117));
	return 1;
}

bool func_32(int iParam0)
{
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		if (!func_160(&(iParam0->f_57), iParam0->f_56, iParam0->f_45))
		{
			return false;
		}
		if (!func_163(&(iParam0->f_49), &(iParam0->f_16), func_161(), func_162(0), 1))
		{
			return false;
		}
		if (!func_142(iParam0->f_49, func_162(1), func_161()))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (is_model_valid(&(iParam0->f_74[iVar0])))
		{
			if (!func_164(iParam0->f_81[iVar0], &(iParam0->f_74[iVar0]), iParam0->f_42, 0f))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!func_165(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((is_model_valid(&(iParam0->f_74[iVar0])) && does_entity_exist(&(iParam0->f_81[iVar0]))) && !is_entity_dead(&(iParam0->f_81[iVar0])))
		{
			add_entity_to_audio_mix_group(&(iParam0->f_81[iVar0]), "Default_Show_Performers_Group", -1f);
		}
		iVar0++;
	}
	func_166(iParam0);
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		set_anim_scene_entity(iParam0->f_49, "CURTAIN", iParam0->f_57, 0);
	}
	return true;
}

void func_33(int iParam0)
{
	if (!_does_anim_scene_exist(iParam0->f_48))
	{
		return;
	}
	func_167(iParam0);
	if (!_is_anim_scene_loaded(iParam0->f_48, true, false))
	{
		load_anim_scene(iParam0->f_48);
	}
}

void func_34(int iParam0)
{
	if (iParam0->f_1 == 0)
	{
		return;
	}
	Var0 = { func_168(1, iParam0->f_1) };
	if (!_does_volume_exist(&(iParam0->f_35[1])))
	{
		iParam0->f_35[1] = _create_volume_by_hash_with_custom_name(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	Var0 = { func_168(2, iParam0->f_1) };
	if (!_does_volume_exist(&(iParam0->f_35[2])))
	{
		iParam0->f_35[2] = _create_volume_by_hash_with_custom_name(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	Var0 = { func_168(3, iParam0->f_1) };
	if (!_does_volume_exist(&(iParam0->f_35[3])))
	{
		iParam0->f_35[3] = _create_volume_by_hash_with_custom_name(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	Var0 = { func_168(4, iParam0->f_1) };
	if (!_does_volume_exist(&(iParam0->f_35[4])))
	{
		iParam0->f_35[4] = _create_volume_by_hash_with_custom_name(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
}

void func_35(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			_0xf008e0ba1fe1d644(56);
			iVar0 = 0;
			while (iVar0 <= (12 - 1))
			{
				iVar1 = iVar0;
				if (func_169(iVar1, *uParam0))
				{
					request_anim_dict(func_170(iVar1));
				}
				iVar0++;
			}
			uParam0->f_17 = get_random_int_in_range(0, 5);
			break;
		case 1:
			_0xf008e0ba1fe1d644(22);
			request_anim_dict(func_170(0));
			break;
		case 2:
			_0xf008e0ba1fe1d644(22);
			request_anim_dict(func_170(0));
			break;
		case 3:
			_0xf008e0ba1fe1d644(10);
			request_anim_dict(func_170(0));
			break;
		case 4:
			_0xf008e0ba1fe1d644(23);
			request_anim_dict(func_170(0));
			break;
	}
}

bool func_36(var uParam0, int iParam1)
{
	if (!_0x5e420ff293ee5472())
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 <= (12 - 1))
			{
				iVar1 = iVar0;
				if (func_169(iVar1, *uParam0) && !has_anim_dict_loaded(func_170(iVar1)))
				{
					bVar2 = false;
				}
				iVar0++;
			}
			if (!bVar2)
			{
				return false;
			}
			if (!func_172(uParam0->f_12[1], func_171(1, uParam0->f_17), 0))
			{
				return false;
			}
			if (!func_172(uParam0->f_12[0], func_171(0, uParam0->f_17), 0))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_37(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_173(iParam1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar0 - 1))
	{
		if (!does_entity_exist(uParam0[iVar2]))
		{
			iVar3 = get_random_model_from_population_set(func_174(iParam1), func_175(iParam1, iVar2), -156825994, false, true, func_176(iParam1, iVar2));
			bVar1 = false;
			if (func_2(Global_1394141->f_1326, 16))
			{
				if (iVar2 == 4)
				{
					iVar3 = 1110781448;
					bVar1 = true;
				}
			}
			else if (iParam2 == 0)
			{
				if (iVar2 == 5)
				{
					iVar3 = 339709868;
					bVar1 = true;
				}
				else if (iVar2 == 31)
				{
					iVar3 = -141596905;
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				request_model(iVar3, false);
			}
			if (bVar1 && !has_model_loaded(iVar3))
			{
				return false;
			}
			if (is_model_valid(iVar3))
			{
				(*uParam0)[iVar2] = func_179(iVar3, func_176(iParam1, iVar2), func_177(iParam1, iVar2), 1, 1, func_178(iParam1, iVar2), 1, 1, 1, 0, 0, 0, 0);
			}
			return false;
		}
		if (!does_entity_exist(uParam0[iVar2]))
		{
			return false;
		}
		iVar2++;
	}
	return true;
}

bool func_38(var uParam0, var uParam1, int iParam2)
{
	if (!func_180(uParam1, iParam2))
	{
		return false;
	}
	iVar0 = func_173(iParam2);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((func_181(iVar1, uParam1->f_17) && iParam2 == 0) && !uParam1->f_20)
		{
			(*uParam0)[iVar1]->f_1 = 6;
			(*uParam0)[iVar1]->f_2 = iVar1;
			set_anim_scene_entity(&(uParam1->f_12[1]), func_182(1, iVar1, uParam1->f_17), uParam0[iVar1], 0);
		}
		else if (func_183(iParam2))
		{
			(*uParam0)[iVar1]->f_1 = 1;
			(*uParam0)[iVar1]->f_2 = iVar1;
			func_184((*uParam0)[iVar1], iParam2);
		}
		else
		{
			(*uParam0)[iVar1]->f_1 = 1;
			(*uParam0)[iVar1]->f_2 = iVar1;
			func_185((*uParam0)[iVar1], iParam2);
		}
		iVar1++;
	}
	return true;
}

bool func_39(var uParam0, int iParam1)
{
	iVar0 = func_173(iParam1);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (does_entity_exist(uParam0[iVar1]))
		{
			set_ped_config_flag(uParam0[iVar1], 301, true);
			set_ped_config_flag(uParam0[iVar1], 448, true);
			stop_ped_speaking(uParam0[iVar1], true);
			set_ped_can_be_targetted(uParam0[iVar1], false);
			set_ped_relationship_group_hash(uParam0[iVar1], -1538724068);
			set_blocking_of_non_temporary_events(uParam0[iVar1], true);
			func_186(uParam0[iVar1], 0);
		}
		iVar1++;
	}
	return true;
}

bool func_40(var uParam0)
{
	return func_187(*uParam0, 1);
}

void func_41(var uParam0)
{
	func_188(uParam0, 0f);
}

float func_42(var uParam0)
{
	if (!func_40(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_189(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_190() - uParam0->f_1);
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_44(int iParam0)
{
	if (iParam0->f_15)
	{
	}
}

void func_45(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_191(uParam0->f_1))
			{
				func_192(uParam0, 5);
				return;
			}
			_0xf008e0ba1fe1d644(1);
			request_model(func_193(), false);
			request_model(func_194(0), false);
			func_192(uParam0, 1);
			break;
		case 1:
			if (!_0x5e420ff293ee5472())
			{
				return;
			}
			if (!has_model_loaded(func_193()) || !has_model_loaded(func_194(0)))
			{
				return;
			}
			bVar0 = func_195(uParam0->f_1);
			if (!does_entity_exist(uParam0->f_2))
			{
				if (bVar0)
				{
					uParam0->f_2 = func_179(func_193(), func_196(uParam0->f_1), func_197(uParam0->f_1), 1, 1, 1, 1, 1, 0, 0, 1, 0, 0);
				}
				else
				{
					uParam0->f_2 = func_179(func_193(), func_196(uParam0->f_1), func_197(uParam0->f_1), 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
				}
			}
			if (!does_entity_exist(uParam0->f_2))
			{
				return;
			}
			else
			{
				set_blocking_of_non_temporary_events(uParam0->f_2, true);
				if (bVar0)
				{
					func_199(uParam0->f_2, func_198(uParam0->f_1));
				}
			}
			iVar1 = 0;
			while (iVar1 <= (5 - 1))
			{
				iVar2 = iVar1;
				uParam0->f_3[iVar1] = create_object(func_194(iVar2), func_200(iVar2), true, true, false, false, true);
				iVar1++;
			}
			func_192(uParam0, 2);
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam0->f_9))
			{
				uParam0->f_9 = _create_anim_scene(func_201(iParam1), 0, func_202(iParam1, 0), false, true);
				load_anim_scene(uParam0->f_9);
				set_anim_scene_origin(uParam0->f_9, func_203(iParam1), func_204(iParam1), 2);
			}
			else if (_is_anim_scene_loaded(uParam0->f_9, true, false))
			{
				func_192(uParam0, 3);
			}
			break;
		case 3:
			if (_does_anim_scene_exist(uParam0->f_9))
			{
				set_anim_scene_entity(uParam0->f_9, func_205(iParam1), uParam0->f_2, 0);
				iVar3 = 0;
				while (iVar3 <= (5 - 1))
				{
					set_anim_scene_entity(uParam0->f_9, func_206(iParam1, iVar3), &(uParam0->f_3[iVar3]), 0);
					iVar3++;
				}
				start_anim_scene(uParam0->f_9);
				func_192(uParam0, 4);
			}
			break;
		case 4:
			if (uParam0->f_10)
			{
				if (!_0x1f0e401031e20146(uParam0->f_9, func_202(iParam1, 1)))
				{
					if (!_0x23e33cb9f4a3f547(uParam0->f_9, func_202(iParam1, 1)))
					{
						_0xdf7b5144e25cd3fe(uParam0->f_9, func_202(iParam1, 1));
					}
					else
					{
						_set_anim_scene_playback_list_bool(uParam0->f_9, func_202(iParam1, 1), true);
					}
				}
			}
			break;
		case 5:
			break;
	}
}

bool func_46(int iParam0)
{
	if (!does_entity_exist(&(iParam0->f_81[3])))
	{
		uVar2 = 1;
		if (func_207(&uVar0, &uVar2, 1, 2544.54f, -1303.289f, 47.51585f, 0.5f, 0, 1, 1, -1, 1, 0, -1082130432, 0, 0) > 0)
		{
			if (does_entity_exist(&(uVar0[0])) && !is_entity_dead(&(uVar0[0])))
			{
				iParam0->f_81[3] = &uVar0[0];
				set_anim_scene_entity(iParam0->f_48, "CS_GENSTORYMALE", &(iParam0->f_81[3]), 0);
				set_blocking_of_non_temporary_events(&(iParam0->f_81[3]), true);
				add_entity_to_audio_mix_group(&(iParam0->f_81[3]), "Default_Show_Performers_Group", -1f);
				Global_1394141->f_1334 = 1;
				return true;
			}
		}
		return false;
	}
	return true;
}

int func_47(var uParam0)
{
	if (!func_40(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_189(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_208() - round((uParam0->f_1 * 1000f)));
}

float func_48(var uParam0)
{
	if (!func_40(uParam0))
	{
		return 0f;
	}
	if (func_189(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_190() - uParam0->f_1);
}

int func_49(int iParam0, int iParam1)
{
	Var0 = { func_168(0, iParam1) };
	if (!_does_volume_exist(&(iParam0->f_35[0])))
	{
		iParam0->f_35[0] = _create_volume_by_hash_with_custom_name(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	else
	{
		_0x541b8576615c33de(&(iParam0->f_35[0]), Var0);
		_0xa07cf1b21b56f041(&(iParam0->f_35[0]), Var0.f_3);
		_0xa46e98bdc407e23d(&(iParam0->f_35[0]), Var0.f_6);
	}
	return 1;
}

void func_50(int iParam0)
{
	if (iParam0->f_1071 == 0)
	{
		return;
	}
	if (!does_entity_exist(iParam0->f_1088))
	{
		return;
	}
	if (!iParam0->f_1072)
	{
		set_entity_visible(iParam0->f_1088, true);
	}
	set_tv_audio_frontend(false);
	set_tv_volume(iParam0->f_1095);
	if (iParam0->f_1072)
	{
		if (iParam0->f_1 != 3)
		{
			if (does_entity_exist(iParam0->f_1088))
			{
				attach_tv_audio_to_entity(iParam0->f_1088);
			}
		}
		else if (does_entity_exist(iParam0->f_1089))
		{
			attach_tv_audio_to_entity(iParam0->f_1089);
		}
		else
		{
			attach_tv_audio_to_entity(iParam0->f_1088);
		}
		if (does_entity_exist(iParam0->f_1089))
		{
			_0xf49574e2332a8f06(iParam0->f_1089, 5f);
		}
	}
	set_tv_channel(-1);
	set_tv_channel_playlist(0, iParam0->f_1076, true);
	set_tv_channel(0);
	if (load_stream("Audience", func_209(*iParam0)))
	{
		iParam0->f_1100 = _0x0556c784fa056628("Audience", func_209(*iParam0));
		play_stream_from_position(iParam0->f_1097, iParam0->f_1100);
	}
}

void func_51(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			func_210();
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			func_211();
			break;
	}
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEER_SMALL";
		case 1:
			return "CHEER_MEDIUM";
		case 2:
			return "CHEER_LARGE";
		case 3:
			return "JEER_SMALL";
		case 4:
			return "JEER_MEDIUM";
		case 5:
			return "JEER_LARGE";
		case 6:
			return "CROWD_LISTENS_TO_SHOW";
		default:
			break;
	}
	return "CHEER_SMALL";
}

char* func_53()
{
	return "SHOWS_sounds";
}

void func_54(char* sParam0, char* sParam1)
{
	play_sound_frontend(sParam0, sParam1, true, 0);
}

char* func_55(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "Curtain_Open_Music";
		case 10:
			return "Curtain_Opens_Music";
		case 11:
			return "Escape_Noose_Curtain_Music";
		default:
			break;
	}
	return "";
}

char* func_56(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "3160317806_action";
		case 10:
			return "2245181467_action";
		case 11:
			return "4224921010_action";
		default:
			break;
	}
	return "";
}

void func_57(var uParam0, var uParam1, int iParam2)
{
	if (func_2(uParam0->f_18, 1) && !func_2(uParam0->f_18, 2))
	{
		_request_scenario_type(-1426662425, 15, 0, 0);
		func_7(&(uParam0->f_18), 2);
	}
	if (func_2(uParam0->f_18, 2) && !func_2(uParam0->f_18, 4))
	{
		if (_has_scenario_type_loaded(-1426662425, false))
		{
			func_7(&(uParam0->f_18), 4);
		}
	}
	if (func_2(uParam0->f_18, 8) && !func_2(uParam0->f_18, 16))
	{
		request_waypoint_recording(func_212(iParam2));
		if (get_is_waypoint_recording_loaded(func_212(iParam2)))
		{
			func_7(&(uParam0->f_18), 16);
		}
	}
	func_213(uParam0, uParam1, iParam2);
	switch (Global_1394141->f_1332)
	{
		case 0:
			break;
		default:
			if (Global_1394141->f_1332 != Global_1394141->f_1333)
			{
				func_215(uParam0, uParam1, iParam2, func_214(*uParam0, uParam0->f_1, Global_1394141->f_1332));
				Global_1394141->f_1333 = Global_1394141->f_1332;
			}
			break;
	}
}

bool func_58(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

void func_59(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_60(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return;
	}
	vVar0 = { get_entity_forward_vector(Global_35) };
	vVar3 = { get_entity_coords(*uParam0, true, false) - Global_36 };
	vVar3 = { func_216(vVar3) };
	fVar6 = func_217(vVar3, vVar0);
	if (fVar6 >= 0.2f)
	{
		func_218(uParam0);
	}
}

void func_61(int iParam0)
{
	if (!does_entity_exist(iParam0->f_12))
	{
		return;
	}
	if ((func_2(iParam0->f_16, 262144) && iParam0->f_41 != 2) && iParam0->f_41 != 3)
	{
		_0xe98d55c5983f2509(iParam0->f_12);
		func_219(iParam0);
		func_220(&(iParam0->f_41), 2);
	}
	if (func_2(Global_1394141->f_1326, 512))
	{
		if (!func_2(iParam0->f_16, 1048576))
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (does_entity_exist(&(iParam0->f_81[iVar0])))
				{
					set_ped_config_flag(&(iParam0->f_81[iVar0]), 301, true);
				}
				iVar0++;
			}
			func_7(&(iParam0->f_16), 1048576);
		}
	}
	else if (func_2(iParam0->f_16, 1048576))
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			if (does_entity_exist(&(iParam0->f_81[iVar1])))
			{
				set_ped_config_flag(&(iParam0->f_81[iVar1]), 301, false);
			}
			iVar1++;
		}
		func_3(&(iParam0->f_16), 1048576);
	}
	switch (iParam0->f_41)
	{
		case 0:
			iParam0->f_1052 = 0;
			iParam0->f_953 = 8500;
			func_41(&(iParam0->f_950));
			_0x870708a6e147a9ad(iParam0->f_12, "", 20f, 0, 4, 0, 0, 0, 0, -1);
			set_ped_config_flag(iParam0->f_12, 297, true);
			set_ped_config_flag(iParam0->f_12, 315, true);
			set_ped_config_flag(iParam0->f_12, 130, true);
			func_220(&(iParam0->f_41), 1);
			break;
		case 1:
			iVar3 = func_221(iParam0->f_12);
			if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar2, 0, 0) && iVar2 == iVar3)
			{
				if ((func_2(iParam0->f_16, 131072) && !func_2(Global_1394141->f_1326, 512)) && !func_2(Global_1394141->f_1326, 16384))
				{
					if (!func_40(&(iParam0->f_947)))
					{
						func_41(&(iParam0->f_947));
					}
					else if (!func_222(&(iParam0->f_1053[1])) || !func_222(&(iParam0->f_1053[0])))
					{
						func_223(iParam0, &Global_35);
						if (func_47(&(iParam0->f_947)) > iParam0->f_953)
						{
							func_224(&(iParam0->f_1053[1]), 1, 1);
							func_224(&(iParam0->f_1053[0]), 1, 1);
						}
					}
					else if (func_47(&(iParam0->f_947)) > iParam0->f_953 || func_2(iParam0->f_16, 524288))
					{
						if (!func_225(&(iParam0->f_1053[1]), 0))
						{
							func_3(&(iParam0->f_16), 16);
							func_224(&(iParam0->f_1053[1]), 1, 1);
						}
						if (!func_225(&(iParam0->f_1053[0]), 0))
						{
							func_3(&(iParam0->f_16), 32);
							func_224(&(iParam0->f_1053[0]), 1, 1);
						}
						if (func_226(iParam0->f_1053[1]))
						{
							func_224(&(iParam0->f_1053[1]), 0, 1);
							func_224(&(iParam0->f_1053[0]), 0, 1);
							if (func_2(iParam0->f_16, 524288))
							{
								func_3(&(iParam0->f_16), 524288);
							}
							if (func_2(Global_1394141->f_1326, 32768))
							{
								if (func_227(iParam0))
								{
									iVar4 = get_random_int_in_range(0, 11);
									if (iVar4 < 4)
									{
										func_228();
									}
									iParam0->f_953 = 8500;
									func_41(&(iParam0->f_947));
								}
							}
							else
							{
								func_228();
								iParam0->f_953 = 8500;
								func_41(&(iParam0->f_947));
							}
						}
						else if (func_226(iParam0->f_1053[0]))
						{
							func_224(&(iParam0->f_1053[1]), 0, 1);
							func_224(&(iParam0->f_1053[0]), 0, 1);
							if (func_2(iParam0->f_16, 524288))
							{
								func_3(&(iParam0->f_16), 524288);
							}
							if (func_229(iParam0))
							{
								iParam0->f_953 = 8500;
								func_41(&(iParam0->f_947));
							}
						}
					}
					else
					{
						if (func_225(&(iParam0->f_1053[1]), 0))
						{
							func_224(&(iParam0->f_1053[1]), 0, 1);
						}
						if (func_225(&(iParam0->f_1053[0]), 0))
						{
							func_224(&(iParam0->f_1053[0]), 0, 1);
						}
					}
				}
				else
				{
					if (func_225(&(iParam0->f_1053[1]), 1))
					{
						func_224(&(iParam0->f_1053[1]), 0, 1);
					}
					if (func_225(&(iParam0->f_1053[0]), 1))
					{
						func_224(&(iParam0->f_1053[0]), 0, 1);
					}
				}
				if (func_2(iParam0->f_16, 256))
				{
					if (!func_230(iParam0->f_1053[2], &Global_35, "INTERACT_DRAW", 129547951))
					{
						return;
					}
					else if (!func_232(func_231(Global_35, 0, 0, 0)) && !func_232(func_231(Global_35, 0, 1, 0)))
					{
						if (!func_225(&(iParam0->f_1053[2]), 0))
						{
							func_224(&(iParam0->f_1053[2]), 1, 1);
						}
						else if (func_233(&(iParam0->f_1053[2]), 1))
						{
							if (get_current_ped_weapon(Global_35, &iVar5, true, 2, false))
							{
								set_current_ped_weapon(Global_35, iVar5, false, 0, false, false);
								task_swap_weapon(Global_35, 1, 0, 0, 0);
								func_224(&(iParam0->f_1053[2]), 0, 1);
							}
						}
					}
					else if (func_225(&(iParam0->f_1053[2]), 0))
					{
						func_224(&(iParam0->f_1053[2]), 0, 1);
					}
				}
				else if (func_225(&(iParam0->f_1053[2]), 1))
				{
					func_224(&(iParam0->f_1053[2]), 0, 1);
				}
			}
			else
			{
				func_219(iParam0);
			}
			break;
		case 2:
			func_219(iParam0);
			if ((_get_anim_scene_time(iParam0->f_48) / _get_anim_scene_duration(iParam0->f_48)) < 0.85f)
			{
				return;
			}
			func_220(&(iParam0->f_41), 3);
			break;
		case 3:
			if ((_get_anim_scene_time(iParam0->f_48) / _get_anim_scene_duration(iParam0->f_48)) < 0.99f && _0x714a0ea7de1167be(func_52(iParam0->f_944), func_53()))
			{
				func_54(func_52(iParam0->f_944), func_53());
			}
			break;
	}
}

void func_62(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (does_entity_exist(&(iParam0->f_81[iVar0])))
		{
			if (!is_entity_dead(&(iParam0->f_81[iVar0])) && !Global_1935630->f_12)
			{
				fVar1 = get_distance_between_coords(get_entity_coords(Global_35, true, false), get_entity_coords(&(iParam0->f_81[iVar0]), true, false), true);
				if (fVar1 < 5f)
				{
					vVar2 = { get_entity_coords(&(iParam0->f_81[iVar0]), true, false) - get_entity_coords(Global_35, true, false) };
					fVar5 = func_217(func_216(vVar2), func_216(get_entity_forward_vector(&(iParam0->f_81[iVar0]))));
					if (fVar5 < 0f)
					{
						func_234(iParam0->f_81[iVar0]);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_63(int iParam0)
{
	if (!_does_anim_scene_exist(iParam0->f_48))
	{
		return;
	}
	fVar0 = 0f;
	bVar1 = _is_anim_scene_started(iParam0->f_48, false);
	if (bVar1)
	{
		fVar0 = _get_anim_scene_progress(iParam0->f_48);
	}
	if (!func_2(uVar1139, 1))
	{
		if (fVar0 > 0.187f)
		{
			_0x870708a6e147a9ad(&(iParam0->f_81[1]), "", 20f, 0, 0, 0, 0, 0, 0, -1);
			set_ped_config_flag(&(iParam0->f_81[1]), 297, true);
			set_ped_config_flag(&(iParam0->f_81[1]), 315, true);
			set_ped_config_flag(&(iParam0->f_81[1]), 130, true);
			func_7(&uLocal_1142, 1);
		}
	}
	if (!func_2(uVar1139, 2))
	{
		if (fVar0 > 0.583f)
		{
			_0x870708a6e147a9ad(&(iParam0->f_81[2]), "", 20f, 0, 0, 0, 0, 0, 0, -1);
			set_ped_config_flag(&(iParam0->f_81[2]), 297, true);
			set_ped_config_flag(&(iParam0->f_81[2]), 315, true);
			set_ped_config_flag(&(iParam0->f_81[2]), 130, true);
			func_7(&uLocal_1142, 2);
		}
	}
	iVar3 = func_221(&(iParam0->f_81[2]));
	iVar4 = func_221(&(iParam0->f_81[1]));
	if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar3)
		{
			iParam0->f_12 = &iParam0->f_81[2];
		}
		else if (iVar2 == iVar4)
		{
			iParam0->f_12 = &iParam0->f_81[1];
		}
		else
		{
			iParam0->f_12 = &iParam0->f_81[0];
		}
	}
	if (bVar1)
	{
		func_235(iParam0);
	}
	switch (iVar1138)
	{
		case 0:
			if (bVar1)
			{
				set_entity_coords(&(iParam0->f_81[2]), 2538.53f, -1312.081f, 48.21665f, true, false, true, true);
				Global_1394141->f_1322 = 1;
				Global_1394141->f_1334 = 1;
				func_236(&uLocal_1141, 1);
			}
			break;
		case 1:
			if (bVar1 && fVar0 > 0.96f)
			{
				func_236(&uLocal_1141, 2);
			}
			break;
		case 2:
			Global_1394141->f_1321 = 1;
			func_7(&(iParam0->f_16), 8388608);
			if (!iParam0->f_14)
			{
				func_7(&(Global_1394141->f_1325), 4);
				func_7(&(Global_1394141->f_1325), 8192);
			}
			func_7(&(Global_1394141->f_1326), 32);
			if (func_237())
			{
				func_238(490527209, 0);
			}
			else
			{
				func_238(110372616, 0);
			}
			remove_entity_from_audio_mix_group(&(iParam0->f_81[3]), -1f);
			func_236(&uLocal_1141, 3);
			break;
		case 3:
			break;
	}
}

float func_64()
{
	return 0.95f;
}

int func_65(int iParam0)
{
	if (!func_2(iParam0->f_16, 2097152))
	{
		if (get_tv_channel() == 0)
		{
			if (!func_40(&(iParam0->f_29)))
			{
				func_41(&(iParam0->f_29));
			}
			else if (func_42(&(iParam0->f_29)) > 5f)
			{
				func_43(&(iParam0->f_29));
				func_7(&(iParam0->f_16), 2097152);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_66(int iParam0, bool bParam1)
{
	if (get_tv_channel() == -1)
	{
		return;
	}
	if (iParam0->f_1071)
	{
		if (!bParam1)
		{
			_0x32de2bffda43e62a();
		}
		set_text_render_id(iParam0->f_1074);
		draw_tv_channel(iParam0->f_1093, iParam0->f_1094, iParam0->f_1091, iParam0->f_1092, 0f, 255, 255, 255, 128);
	}
}

bool func_67()
{
	if (get_tv_channel() == -1)
	{
		return true;
	}
	if (_is_tv_playlist_item_playing(-1302053960))
	{
		return true;
	}
	return false;
}

struct<2> func_68(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_69(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_70(int iParam0)
{
	if (does_cam_exist(iParam0->f_4))
	{
		if (is_cam_rendering(iParam0->f_4))
		{
			render_script_cams(false, false, 3000, true, false, 0);
			set_cam_active(iParam0->f_4, false);
		}
		destroy_cam(iParam0->f_4, false);
	}
	if (!is_player_control_on(get_player_index()))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	func_3(&(Global_1394141->f_1326), 512);
	if (func_222(&(iParam0->f_1053[3])))
	{
		func_239(iParam0->f_1053[3], 1, 1);
	}
}

void func_71(int iParam0)
{
	if (get_tv_channel() == -1)
	{
		return;
	}
	set_tv_channel(-1);
	if (does_entity_exist(iParam0->f_1088))
	{
		set_entity_visible(iParam0->f_1088, false);
	}
	if (iParam0->f_1072)
	{
		if (does_entity_exist(iParam0->f_1089))
		{
			_0xf49574e2332a8f06(iParam0->f_1089, 0f);
			_0x04d1d4e411ce52d0(iParam0->f_1089, 0);
		}
	}
	if (is_stream_playing(iParam0->f_1100))
	{
		stop_stream(iParam0->f_1100);
	}
}

void func_72(int iParam0)
{
	bVar0 = false;
	if (func_4(Global_35, &(iParam0->f_35[0]), 1, 0))
	{
		bVar0 = true;
	}
	if (iParam0->f_1 == 2)
	{
		if (Global_36.f_2 > 51.8f)
		{
			bVar0 = true;
		}
	}
	switch (iParam0->f_3)
	{
		case 0:
			if (bVar0)
			{
				if (!does_cam_exist(iParam0->f_4))
				{
					iParam0->f_4 = create_camera_with_params(26379945, func_240(iParam0->f_1, 0), func_241(iParam0->f_1, 0), get_final_rendered_cam_fov(), false, 2);
				}
				func_242(&(iParam0->f_3), 1);
			}
			break;
		case 1:
			if (!is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), true, 0, false);
			}
			if (is_disabled_control_pressed(0, -416594956))
			{
				if (!func_40(&(iParam0->f_5)))
				{
					func_41(&(iParam0->f_5));
					return;
				}
				else if (func_47(&(iParam0->f_5)) < 800)
				{
					return;
				}
			}
			else
			{
				if (func_40(&(iParam0->f_5)))
				{
					func_43(&(iParam0->f_5));
				}
				if (func_222(&(iParam0->f_1053[3])))
				{
					func_239(iParam0->f_1053[3], 1, 1);
				}
				return;
			}
			if (!func_222(&(iParam0->f_1053[3])))
			{
				iParam0->f_1053[3] = func_243("INTERACT_LOOK", -416594956, 6, 570, 570, 10, 1073741824, 0, 1065353216, 0, 1, 1704213876, 0);
				func_244(&(iParam0->f_1053[3]), 13, 1, 1);
			}
			else if (func_245(&(iParam0->f_1053[3]), 1))
			{
				if (does_cam_exist(iParam0->f_4))
				{
					if (!is_cam_rendering(iParam0->f_4))
					{
						set_cam_active(iParam0->f_4, true);
						render_script_cams(true, false, 3000, true, false, 0);
						func_239(iParam0->f_1053[3], 1, 1);
						func_7(&(Global_1394141->f_1326), 512);
						func_242(&(iParam0->f_3), 2);
					}
				}
			}
			break;
		case 2:
			if (!is_disabled_control_pressed(0, -416594956))
			{
				func_242(&(iParam0->f_3), 3);
			}
			break;
		case 3:
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, 0, false);
			}
			disable_control_action(0, 2139949496, false);
			if (is_disabled_control_pressed(0, -416594956))
			{
				render_script_cams(false, false, 3000, true, false, 0);
				func_3(&(Global_1394141->f_1326), 512);
				func_43(&(iParam0->f_5));
				func_242(&(iParam0->f_3), 4);
			}
			if (is_control_just_pressed(2, -1496944061))
			{
				iParam0->f_8++;
				if (iParam0->f_8 > 2)
				{
					iParam0->f_8 = 0;
				}
				set_cam_coord(iParam0->f_4, func_240(iParam0->f_1, iParam0->f_8));
				set_cam_rot(iParam0->f_4, func_241(iParam0->f_1, iParam0->f_8), 2);
			}
			if (func_8(iParam0) == 10 || !bVar0)
			{
				func_242(&(iParam0->f_3), 5);
			}
			break;
		case 4:
			disable_control_action(0, 2139949496, false);
			if (!is_disabled_control_pressed(0, -416594956))
			{
				func_242(&(iParam0->f_3), 1);
			}
			break;
		case 5:
			if (!is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), true, 0, false);
			}
			if (!bVar0)
			{
				if (does_cam_exist(iParam0->f_4) && is_cam_rendering(iParam0->f_4))
				{
					render_script_cams(false, false, 3000, true, false, 0);
					set_cam_active(iParam0->f_4, false);
				}
				if (func_222(&(iParam0->f_1053[3])))
				{
					func_239(iParam0->f_1053[3], 1, 1);
				}
				func_242(&(iParam0->f_3), 0);
			}
			else if (does_cam_exist(iParam0->f_4))
			{
				if (is_cam_rendering(iParam0->f_4))
				{
					render_script_cams(false, false, 3000, true, false, 0);
					set_cam_active(iParam0->f_4, false);
				}
				else
				{
					destroy_cam(iParam0->f_4, false);
					if (func_222(&(iParam0->f_1053[3])))
					{
						func_239(iParam0->f_1053[3], 1, 1);
					}
					func_242(&(iParam0->f_3), 6);
				}
			}
			if (!is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), true, 0, false);
			}
			func_3(&(Global_1394141->f_1326), 512);
			break;
		case 6:
			break;
	}
}

void func_73(char* sParam0, char* sParam1)
{
	_0x0f2a2175734926d8(sParam0, sParam1);
}

void func_74(int iParam0)
{
	switch (Local_8.f_1)
	{
		case 0:
			if (!func_40(&(iParam0->f_941)))
			{
				func_41(&(iParam0->f_941));
			}
			if (func_2(iParam0->f_16, 33554432))
			{
				func_78(&(iParam0->f_349), Global_1394141->f_7[*iParam0]->f_4);
				return;
			}
			if (func_2(iParam0->f_16, 65536))
			{
				func_246(&(iParam0->f_349));
				func_3(&(iParam0->f_16), 65536);
				func_7(&(iParam0->f_16), 8192);
				func_7(&(iParam0->f_16), 16384);
				func_7(&(iParam0->f_16), 32768);
			}
			else if (!func_2(iParam0->f_16, 8192))
			{
				func_247(&(iParam0->f_349), 54, 64);
				func_7(&(iParam0->f_16), 8192);
			}
			else if (!func_2(iParam0->f_16, 16384))
			{
				if (func_42(&(iParam0->f_941)) > 12f)
				{
					func_247(&(iParam0->f_349), 15, 26);
					func_247(&(iParam0->f_349), 40, 52);
					func_41(&(iParam0->f_941));
					func_7(&(iParam0->f_16), 16384);
				}
			}
			else if (!func_2(iParam0->f_16, 32768))
			{
				if (func_42(&(iParam0->f_941)) > 12f)
				{
					func_247(&(iParam0->f_349), 0, 13);
					func_247(&(iParam0->f_349), 27, 39);
					func_41(&(iParam0->f_941));
					func_7(&(iParam0->f_16), 32768);
				}
			}
			break;
	}
}

void func_75(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_1053)
	{
		if (func_222(&(iParam0->f_1053[iVar0])))
		{
			func_239(iParam0->f_1053[iVar0], 1, 1);
		}
		iVar0++;
	}
}

Vector3 func_76(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -779.4891f, -1362.618f, 45.14579f;
		case 1:
		case 2:
			return 2696.776f, -1353.734f, 48.56572f;
		case 0:
			return 2546.481f, -1299.015f, 48.74436f;
		case 3:
			return -348.3176f, 698.5706f, 117.706f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_77(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_9))
	{
		_delete_anim_scene(uParam0->f_9);
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (does_entity_exist(&(uParam0->f_3[iVar0])))
		{
			delete_object(uParam0->f_3[iVar0]);
		}
		iVar0++;
	}
	if (does_entity_exist(uParam0->f_2))
	{
		delete_ped(&(uParam0->f_2));
	}
}

void func_78(var uParam0, int iParam1)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (does_entity_exist(uParam0[iVar1]))
		{
			if (!func_4(uParam0[iVar1], iParam1, 1, 0))
			{
				set_ped_as_no_longer_needed((*uParam0)[iVar1]);
			}
			else
			{
				delete_ped((*uParam0)[iVar1]);
			}
		}
		iVar1++;
	}
}

void func_79(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		iVar1 = iVar0;
		if (_does_volume_exist(&(iParam0->f_35[iVar1])))
		{
			_delete_volume(&(iParam0->f_35[iVar1]));
		}
		iVar0++;
	}
}

bool func_80(int iParam0)
{
	if (&Global_1394141->f_7[iParam0]->f_7[0] == 0)
	{
		if (func_248() == 76)
		{
			if (func_249())
			{
				return true;
			}
		}
		else
		{
			return true;
		}
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1394141->f_7[iParam0]->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!func_250(iVar1) && !func_251(iVar1))
			{
				func_252(iVar1, 1, 0, 0, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_81(int iParam0)
{
	if (func_253(iParam0))
	{
		remove_waypoint_recording(func_212(iParam0));
	}
}

void func_82()
{
	set_ped_config_flag(Global_35, 489, false);
	_0xd5d72f1624f3ba7c(func_93(0));
	func_3(&(Global_1394141->f_1326), 1);
	func_3(&(Global_1394141->f_1326), 2);
	func_3(&(Global_1394141->f_1326), 4);
	func_3(&(Global_1394141->f_1326), 64);
	func_3(&(Global_1394141->f_1326), 512);
}

bool func_83(int iParam0)
{
	if (&Global_1394141->f_7[iParam0]->f_7[0] == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1394141->f_7[iParam0]->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (func_254(iVar1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_84(int iParam0)
{
	if (&Global_1394141->f_7[iParam0]->f_7[0] == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1394141->f_7[iParam0]->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (func_255(iVar1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_85(int iParam0)
{
	set_tv_channel(-1);
	if (iParam0->f_1071)
	{
		if (does_entity_exist(iParam0->f_1089))
		{
			_0x04d1d4e411ce52d0(iParam0->f_1089, 0);
			set_object_as_no_longer_needed(&(iParam0->f_1089));
		}
		if (is_named_rendertarget_registered(iParam0->f_1075))
		{
			release_named_rendertarget(iParam0->f_1075);
		}
		iParam0->f_1071 = 0;
	}
	if (does_entity_exist(iParam0->f_1088))
	{
		delete_object(&(iParam0->f_1088));
	}
}

void func_86(int iParam0)
{
	_0x7d4e70a67a651c71(3);
	_0xe98d55c5983f2509(&(iParam0->f_81[1]));
	set_ped_config_flag(&(iParam0->f_81[1]), 297, false);
	set_ped_config_flag(&(iParam0->f_81[1]), 315, false);
	set_ped_config_flag(&(iParam0->f_81[1]), 130, false);
	_0xe98d55c5983f2509(&(iParam0->f_81[2]));
	set_ped_config_flag(&(iParam0->f_81[2]), 297, false);
	set_ped_config_flag(&(iParam0->f_81[2]), 315, false);
	set_ped_config_flag(&(iParam0->f_81[2]), 130, false);
}

void func_87(var uParam0)
{
	func_256(uParam0);
	func_256(&(uParam0->f_31));
	func_256(&(uParam0->f_107));
	func_256(&(uParam0->f_118));
	Global_1394141->f_1325 = 0;
}

void func_88(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_90(int iParam0)
{
	iParam0->f_10 = 1;
}

void func_91(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_258(func_257(), iParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		func_259(4);
	}
	func_259(2);
	set_bit(&(Global_1956580->f_1), 0);
}

int func_93(bool bParam0)
{
	if (func_260() == -1)
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

void func_94(int iParam0)
{
	if (!bLocal_1)
	{
		_0xd63b4ba3a02a99e0(Global_35, iParam0);
		bLocal_1 = true;
	}
}

void func_95(int iParam0, bool bParam1)
{
	if (bLocal_1)
	{
		_0x404514d231db27a0(Global_35, *iParam0);
		bLocal_1 = false;
		if (bParam1)
		{
			*iParam0 = 0;
		}
	}
}

void func_96()
{
	if (!bLocal_0)
	{
		_0xe3a46370f70f3607(func_93(0), 0);
		bLocal_0 = true;
	}
}

void func_97()
{
	if (bLocal_0)
	{
		_0xd5d72f1624f3ba7c(func_93(0));
		bLocal_0 = false;
	}
}

bool func_98()
{
	iVar0 = _get_first_entity_ped_is_carrying(Global_35);
	if (does_entity_exist(iVar0) && get_entity_type(iVar0) == 1)
	{
		return true;
	}
	return false;
}

void func_99(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_100(int iParam0)
{
	if (&Global_1394141->f_7[iParam0]->f_7[0] == 0)
	{
		if (func_248() == 76)
		{
			if (func_261())
			{
				return true;
			}
		}
		else
		{
			return true;
		}
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1394141->f_7[iParam0]->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!func_255(iVar1))
			{
				func_262(iVar1, 0, 0);
			}
		}
		iVar0++;
	}
	return true;
}

int func_101(bool bParam0, bool bParam1, bool bParam2)
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

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 0;
		case 4:
			return 4;
	}
	return 0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -842374052;
		case 1:
			return 2085190894;
		case 2:
			return 2085190894;
		case 3:
			return 0;
		case 4:
			return -1701282116;
	}
	return 0;
}

Vector3 func_104(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2553.688f, -1306.052f, 49.97987f;
				case 1:
					return 2539.203f, -1306.098f, 49.9794f;
				case 2:
					return 2539.188f, -1291.61f, 49.97276f;
				case 3:
					return 2543.014f, -1290.244f, 49.95035f;
				case 4:
					return 2549.863f, -1290.254f, 50.00306f;
				case 5:
					return 2553.694f, -1291.636f, 49.96515f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2698.354f, -1347.851f, 48.38391f;
				case 1:
					return 2702.992f, -1353.339f, 48.37968f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -777.252f, -1367.02f, 44.965f;
				case 1:
					return -780.828f, -1366.866f, 45.282f;
				case 2:
					return -777.252f, -1358.225f, 44.965f;
				case 3:
					return -780.85f, -1358.394f, 45.282f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_105(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = _0x6f3068258a499e52(iParam1, vParam2, 7);
	}
	else if (_0x1ff441d7954f8709(uParam0->f_1))
	{
		*uParam0 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_1));
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	uParam0->f_2 = 1f;
	return true;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 13;
		case 2:
			return 10;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1681397868;
		case 1:
			return 1663958773;
		case 2:
			return 1663958773;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

Vector3 func_108(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2550.559f, -1306.926f, 48.30644f;
				case 1:
					return 2549.975f, -1306.784f, 48.30579f;
				case 2:
					return 2549.373f, -1306.661f, 48.27742f;
				case 3:
					return 2548.778f, -1306.565f, 48.3292f;
				case 4:
					return 2548.191f, -1306.501f, 48.33652f;
				case 5:
					return 2547.599f, -1306.461f, 48.33248f;
				case 6:
					return 2547.012f, -1306.439f, 48.3321f;
				case 7:
					return 2546.379f, -1306.432f, 48.32198f;
				case 8:
					return 2545.83f, -1306.439f, 48.32955f;
				case 9:
					return 2545.216f, -1306.474f, 48.32186f;
				case 10:
					return 2544.61f, -1306.53f, 48.32782f;
				case 11:
					return 2544.018f, -1306.617f, 48.31695f;
				case 12:
					return 2543.43f, -1306.736f, 48.32981f;
				case 13:
					return 2542.867f, -1306.884f, 48.33492f;
				case 14:
					return 2542.276f, -1307.063f, 48.32477f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2700.432f, -1348.183f, 47.87681f;
				case 1:
					return 2700.377f, -1348.514f, 47.85976f;
				case 2:
					return 2700.37f, -1348.888f, 47.8551f;
				case 3:
					return 2700.434f, -1349.257f, 47.86578f;
				case 4:
					return 2700.558f, -1349.631f, 47.84948f;
				case 5:
					return 2701.542f, -1350.802f, 47.85961f;
				case 6:
					return 2701.878f, -1350.986f, 47.88033f;
				case 7:
					return 2702.219f, -1351.111f, 47.86714f;
				case 8:
					return 2702.572f, -1351.179f, 47.87275f;
				case 9:
					return 2702.962f, -1351.181f, 47.87634f;
				case 10:
					return 2701.173f, -1350.579f, 47.846f;
				case 11:
					return 2700.92f, -1350.285f, 47.846f;
				case 12:
					return 2700.691f, -1349.987f, 47.846f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2700.432f, -1348.183f, 47.87681f;
				case 1:
					return 2700.377f, -1348.514f, 47.85976f;
				case 2:
					return 2700.37f, -1348.888f, 47.8551f;
				case 3:
					return 2700.434f, -1349.257f, 47.86578f;
				case 4:
					return 2700.558f, -1349.631f, 47.84948f;
				case 5:
					return 2701.542f, -1350.802f, 47.85961f;
				case 6:
					return 2701.878f, -1350.986f, 47.88033f;
				case 7:
					return 2702.219f, -1351.111f, 47.86714f;
				case 8:
					return 2702.572f, -1351.179f, 47.87275f;
				case 9:
					return 2702.962f, -1351.181f, 47.87634f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
	return 0f, 0f, 0f;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 0;
		case 4:
			return 2;
	}
	return 0;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1292279125;
		case 1:
			return -280988606;
		case 2:
			return -280988606;
		case 3:
			return 0;
		case 4:
			return 1292279125;
	}
	return 0;
}

Vector3 func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2548.641f, -1292.548f, 53.95758f;
				case 1:
					return 2544.289f, -1292.548f, 53.96331f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2691.054f, -1352.816f, 52.59f;
				case 1:
					return 2696.695f, -1359.527f, 52.59f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2688.867f, -1354.651f, 53.697f;
				case 1:
					return 2694.49f, -1361.375f, 53.697f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -783.34f, -1367.153f, 45.388f;
				case 1:
					return -783.939f, -1360.04f, 45.325f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_112(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -584148549;
				case 1:
					return 134813799;
				case 2:
					return 134813799;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			return -7413278;
		case 3:
			break;
		case 4:
			break;
	}
	return 0;
}

Vector3 func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2546.694f, -1306.438f, 48.21665f;
				case 1:
					return 2551.421f, -1308.492f, 48.21665f;
				case 2:
					return 2541.836f, -1308.431f, 48.21665f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2697.828f, -1347.849f, 48.061f;
				case 1:
					return 2697.828f, -1347.854f, 48.89f;
				case 2:
					return 2697.827f, -1347.856f, 49.633f;
				case 3:
					return 2697.825f, -1347.853f, 50.458f;
				case 4:
					return 2697.889f, -1347.932f, 51.201f;
				case 5:
					return 2698.051f, -1348.127f, 52.013f;
				case 6:
					return 2698.298f, -1348.42f, 52.674f;
				case 7:
					return 2698.682f, -1348.865f, 53.307f;
				case 8:
					return 2699.068f, -1349.323f, 53.747f;
				case 9:
					return 2699.578f, -1349.924f, 54.096f;
				case 10:
					return 2700.049f, -1350.493f, 54.234f;
				case 11:
					return 2700.6f, -1351.151f, 54.236f;
				case 12:
					return 2701.085f, -1351.721f, 54.095f;
				case 13:
					return 2701.579f, -1352.32f, 53.744f;
				case 14:
					return 2701.959f, -1352.784f, 53.318f;
				case 15:
					return 2702.34f, -1353.231f, 52.683f;
				case 16:
					return 2702.584f, -1353.52f, 52.034f;
				case 17:
					return 2702.747f, -1353.716f, 51.212f;
				case 18:
					return 2702.814f, -1353.797f, 50.457f;
				case 19:
					return 2702.818f, -1353.797f, 49.618f;
				case 20:
					return 2702.819f, -1353.797f, 48.896f;
				case 21:
					return 2702.817f, -1353.803f, 48.036f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
	return 0f, 0f, 0f;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 22;
		case 2:
			return 22;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

float func_115(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_116(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

int func_117(var uParam0)
{
	iVar0 = 10;
	return iVar0;
}

bool func_118(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar1 = func_42(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_263((*uParam0)[iVar0], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_43(uParam2);
		return true;
	}
	return false;
}

float func_119(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

bool func_120(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar1 = func_42(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_264((*uParam0)[iVar0], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_43(uParam2);
		return true;
	}
	return false;
}

float func_121(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_122(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

float func_123(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

float func_124(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_125(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

float func_126(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

float func_127(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_128(var uParam0)
{
	fVar0 = 3f;
	return fVar0;
}

bool func_129(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar0 = func_42(uParam2);
	func_263(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_43(uParam2);
		return true;
	}
	return false;
}

float func_130(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

bool func_131(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar0 = func_42(uParam2);
	func_264(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_43(uParam2);
		return true;
	}
	return false;
}

float func_132(var uParam0)
{
	fVar0 = 0f;
	return fVar0;
}

float func_133(var uParam0)
{
	fVar0 = 3f;
	return fVar0;
}

bool func_134(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return true;
	}
	if (!func_40(uParam4))
	{
		func_41(uParam4);
	}
	fVar2 = func_42(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_263((*uParam2)[iVar3], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_43(uParam4);
		return true;
	}
	return false;
}

float func_135(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

bool func_136(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return true;
	}
	if (!func_40(uParam4))
	{
		func_41(uParam4);
	}
	fVar2 = func_42(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_264((*uParam2)[iVar3], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_43(uParam4);
		return true;
	}
	return false;
}

float func_137(var uParam0)
{
	fVar0 = 0.3f;
	return fVar0;
}

float func_138(var uParam0)
{
	fVar0 = 5f;
	return fVar0;
}

float func_139(var uParam0)
{
	fVar0 = 1f;
	return fVar0;
}

char* func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
		case 1:
			return "PBL_OPEN_SLOW";
		case 2:
			return "PBL_CLOSE_SLOW";
		case 3:
			return "PBL_IDLE_OPEN";
		default:
			break;
	}
	return "FAIL";
}

char* func_141()
{
	return "script@shows@curtains@curtains";
}

bool func_142(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (!_0x23e33cb9f4a3f547(iParam0, sParam1) && !_0x0df57f86fe71dbe5(iParam0, sParam1))
	{
		_0xdf7b5144e25cd3fe(iParam0, sParam1);
	}
	if (!_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		return false;
	}
	return true;
}

void func_143(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_144()
{
	return "CURTAIN";
}

void func_145(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(iParam0, sParam1, true);
}

void func_146(int iParam0, char* sParam1, char* sParam2)
{
	if (_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		_0xae6ada8fe7e84acc(iParam0, sParam1);
	}
}

int func_147()
{
	return Global_1310750->f_16037;
}

bool func_148(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_149(int iParam0, int iParam1)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_150(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	if (func_58(64) && func_265(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_151(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_152(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_148(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_266(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_153(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

bool func_154()
{
	if (func_260() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_155(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_267(uParam0, iParam1, sParam2))
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

char* func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CROWD_ODDFELLOWS_01";
		case 1:
			return "CROWD_ODDFELLOWS_02";
		case 2:
			return "CROWD_ODDFELLOWS_03";
		case 3:
			return "CROWD_ODDFELLOWS_04";
		case 4:
			return "CROWD_ODDFELLOWS_05";
		case 5:
			return "CROWD_ODDFELLOWS_06";
		case 6:
			return "CROWD_ODDFELLOWS_07";
		case 7:
			return "CROWD_ODDFELLOWS_08";
		case 8:
			return "CROWD_ODDFELLOWS_01";
		case 9:
			return "CROWD_ODDFELLOWS_02";
		case 10:
			return "CROWD_ODDFELLOWS_03";
		case 11:
			return "CROWD_ODDFELLOWS_04";
		case 12:
			return "CROWD_ODDFELLOWS_05";
		case 13:
			return "CROWD_ODDFELLOWS_06";
		case 14:
			return "CROWD_ODDFELLOWS_07";
		case 15:
			return "CROWD_ODDFELLOWS_08";
		case 16:
			return "CROWD_ODDFELLOWS_09";
		default:
			break;
	}
	return "";
}

char* func_157()
{
	return "script_shows@show_audience@ig_arthur_applause";
}

bool func_158(int iParam0)
{
	return _0x5e420ff293ee5472();
}

bool func_159(int iParam0)
{
	bVar0 = false;
	if (!func_40(&(iParam0->f_23)))
	{
		func_41(&(iParam0->f_23));
	}
	else if (func_42(&(iParam0->f_23)) > 10f)
	{
		bVar0 = true;
	}
	if (func_2(iParam0->f_17, 1))
	{
		sVar1 = func_55(*iParam0);
		sVar2 = func_56(*iParam0);
		if (is_string_null_or_empty(sVar1) || is_string_null_or_empty(sVar2))
		{
			bVar0 = true;
		}
		else if (load_stream(sVar1, sVar2))
		{
			bVar0 = true;
			_0x839c9f124be74d94(_0x0556c784fa056628(sVar1, sVar2), 0, 2548.749f, -1305.267f, 50.01453f);
			_0x839c9f124be74d94(_0x0556c784fa056628(sVar1, sVar2), 1, 2543.801f, -1305.251f, 50.01453f);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_43(&(iParam0->f_23));
		return true;
	}
	return false;
}

bool func_160(var uParam0, int iParam1, vector3 vParam2)
{
	if (!has_model_loaded(iParam1))
	{
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		*uParam0 = create_object(iParam1, vParam2, true, true, false, false, true);
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	return true;
}

char* func_161()
{
	return "script@shows@curtains@curtains";
}

char* func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
		case 1:
			return "PBL_OPEN_SLOW";
		case 2:
			return "PBL_CLOSE_SLOW";
		case 3:
			return "PBL_IDLE_OPEN";
		default:
			break;
	}
	return "FAIL";
}

bool func_163(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (_does_anim_scene_exist(*uParam0) && _is_anim_scene_loaded(*uParam0, true, false))
	{
		func_3(uParam1, 1);
		return true;
	}
	if (!func_2(*uParam1, 1) && !_does_anim_scene_exist(*uParam0))
	{
		if (bParam4)
		{
			*uParam0 = _create_anim_scene(sParam2, 0, sParam3, false, true);
		}
		load_anim_scene(*uParam0);
		func_7(uParam1, 1);
	}
	return false;
}

bool func_164(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	if (!has_model_loaded(iParam1))
	{
		return false;
	}
	bVar0 = true;
	bVar1 = false;
	iVar2 = func_268(iParam1);
	if (iVar2 != 41788943)
	{
		bVar0 = false;
		bVar1 = true;
	}
	if (!does_entity_exist(*uParam0))
	{
		*uParam0 = func_179(iParam1, vParam2, fParam5, 1, 1, 0, 1, 1, bVar0, 0, bVar1, 0, 0);
		return false;
	}
	if (does_entity_exist(*uParam0) && _0xa0bc8faed8cfeb3c(*uParam0))
	{
		if (!bVar0)
		{
			func_199(*uParam0, iVar2);
		}
		func_186(*uParam0, 0);
		return true;
	}
	return false;
}

bool func_165(int iParam0)
{
	return true;
}

void func_166(int iParam0)
{
	if (!is_entity_dead(&(iParam0->f_81[0])))
	{
		set_blocking_of_non_temporary_events(&(iParam0->f_81[0]), true);
	}
	if (!is_entity_dead(&(iParam0->f_81[1])))
	{
		set_blocking_of_non_temporary_events(&(iParam0->f_81[1]), true);
	}
	if (!is_entity_dead(&(iParam0->f_81[2])))
	{
		set_blocking_of_non_temporary_events(&(iParam0->f_81[2]), true);
	}
	if (!does_entity_exist(&(iParam0->f_66[0])))
	{
		iParam0->f_66[0] = create_object(&(iParam0->f_58[0]), 2553.193f, -1310.103f, 49.21665f, true, true, false, false, true);
	}
	iParam0->f_12 = &iParam0->f_81[0];
}

void func_167(int iParam0)
{
	set_anim_scene_entity(iParam0->f_48, "CS_GENSTORYFEMALE", &(iParam0->f_81[0]), 0);
	set_anim_scene_entity(iParam0->f_48, "CS_ODDFELLOWSPINHEAD", &(iParam0->f_81[1]), 0);
	set_anim_scene_entity(iParam0->f_48, "CS_MAGNIFICO", &(iParam0->f_81[2]), 0);
	set_anim_scene_entity(iParam0->f_48, "p_cs_bullwhip01x", &(iParam0->f_66[0]), 0);
}

struct<11> func_168(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
		case 2:
			switch (iParam0)
			{
				case 0:
					Var0 = { 2695.674f, -1354.701f, 48.474f };
					Var0.f_3 = { 0f, 0f, 42.536f };
					Var0.f_6 = { 12.531f, 9.1f, 9f };
					Var0.f_9 = "SHOW_FOCUS_CAM";
					Var0.f_10 = -1612834106;
					break;
				case 1:
					Var0 = { 2694.922f, -1351.853f, 47.97008f };
					Var0.f_3 = { 0f, 0f, 41.00079f };
					Var0.f_6 = { 7.095272f, 3.680561f, 4.124079f };
					Var0.f_9 = "SHOW_SEATS_LEFT";
					Var0.f_10 = -1612834106;
					break;
				case 2:
					Var0 = { 2698.459f, -1355.921f, 47.97008f };
					Var0.f_3 = { 0f, 0f, 41.00079f };
					Var0.f_6 = { 7.095272f, 3.680561f, 4.124079f };
					Var0.f_9 = "SHOW_SEATS_RIGHT";
					Var0.f_10 = -1612834106;
					break;
				case 3:
					Var0 = { 2686.465f, -1362.323f, 47.97008f };
					Var0.f_3 = { 0f, 0f, 41.00078f };
					Var0.f_6 = { 4.481431f, 8.317011f, 4.124079f };
					Var0.f_9 = "SHOW_FRONT_BUFFER";
					Var0.f_10 = -1612834106;
					break;
				case 4:
					Var0 = { 2695.047f, -1355.205f, 49.07318f };
					Var0.f_3 = { 0f, 0f, 39.99998f };
					Var0.f_6 = { 19.67865f, 9.058702f, 4.067907f };
					Var0.f_9 = "SHOW_CROWD_DELETE";
					Var0.f_10 = -1612834106;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					Var0 = { -780.252f, -1362.48f, 45.687f };
					Var0.f_3 = { 0f, 0f, 0.496f };
					Var0.f_6 = { 11.467f, 8.9f, 8f };
					Var0.f_9 = "SHOW_FOCUS_CAM";
					Var0.f_10 = -1612834106;
					break;
				case 1:
					Var0 = { -779.944f, -1359.784f, 44.57523f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 11.65175f, 4.094016f, 3.77397f };
					Var0.f_9 = "SHOW_SEATS_LEFT";
					Var0.f_10 = -1612834106;
					break;
				case 2:
					Var0 = { -779.944f, -1365.717f, 44.57523f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 11.65175f, 4.094016f, 3.77397f };
					Var0.f_9 = "SHOW_SEATS_RIGHT";
					Var0.f_10 = -1612834106;
					break;
				case 3:
					Var0 = { -788.271f, -1362.526f, 44.57523f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 6.064409f, 8.635888f, 3.77397f };
					Var0.f_9 = "SHOW_FRONT_BUFFER";
					Var0.f_10 = -1612834106;
					break;
				case 4:
					Var0 = { -778.6844f, -1362.457f, 45.677f };
					Var0.f_3 = { 0f, 0f, 0.496382f };
					Var0.f_6 = { 16f, 8.9f, 8f };
					Var0.f_9 = "SHOW_CROWD_DELETE";
					Var0.f_10 = -1612834106;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					Var0 = { -347.867f, 697.444f, 117.8f };
					Var0.f_3 = { 0f, 0f, 39.038f };
					Var0.f_6 = { 12.531f, 9.1f, 9f };
					Var0.f_9 = "SHOW_FOCUS_CAM";
					Var0.f_10 = -1612834106;
					break;
				case 1:
					Var0 = { -345.8821f, 697.2924f, 117.5554f };
					Var0.f_3 = { 0f, 0f, 14.26797f };
					Var0.f_6 = { 3.162789f, 6.641141f, 2.407862f };
					Var0.f_9 = "SHOW_SEATS_LEFT";
					Var0.f_10 = -1612834106;
					break;
				case 2:
					Var0 = { -349.6249f, 696.3406f, 117.5554f };
					Var0.f_3 = { 0f, 0f, 14.26797f };
					Var0.f_6 = { 2.509765f, 6.641141f, 2.407862f };
					Var0.f_9 = "SHOW_SEATS_RIGHT";
					Var0.f_10 = -1612834106;
					break;
				case 3:
					Var0 = { -350.7378f, 705.5359f, 117.5554f };
					Var0.f_3 = { 0f, 0f, 14.26797f };
					Var0.f_6 = { 8.752253f, 6.118175f, 4.255467f };
					Var0.f_9 = "SHOW_FRONT_BUFFER";
					Var0.f_10 = -1612834106;
					break;
				case 4:
					Var0 = { -347.6639f, 696.6296f, 118.3223f };
					Var0.f_3 = { 0f, 0f, 15.66641f };
					Var0.f_6 = { 7.262365f, 9.866415f, 4.317828f };
					Var0.f_9 = "SHOW_CROWD_DELETE";
					Var0.f_10 = -1612834106;
					break;
			}
			break;
	}
	return Var0;
}

bool func_169(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 8:
			return true;
		case 4:
			switch (iParam1)
			{
				case 11:
				case 13:
				case 19:
					return false;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 6:
				case 8:
				case 10:
				case 14:
				case 15:
				case 17:
					return false;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 11:
				case 12:
				case 13:
				case 14:
				case 16:
				case 18:
				case 19:
					return false;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return false;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return false;
			}
			break;
	}
	return true;
}

char* func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
		case 1:
			return "script_shows@show_audience@ig2_reaction_oneshot";
		case 2:
			return "script_shows@show_audience@ig1_reaction_loops@t02_regular_rowdy";
		case 3:
			return "script_shows@show_audience@ig1_reaction_loops@t04_musical";
		case 4:
			return "script_shows@show_audience@ig1_reaction_loops@t05_dancing";
		case 5:
			return "script_shows@show_audience@ig1_reaction_loops@t06_comedic_displeased";
		case 6:
			return "script_shows@show_audience@ig1_reaction_loops@t07_suspense_applause";
		case 7:
			return "script_shows@show_audience@ig1_reaction_loops@t08_applause_horrified";
		case 8:
			return "script_shows@show_audience@ig1_reaction_loops@t09_blocked";
		case 9:
			return "script_shows@escapeartist@escapeartist_react";
		case 10:
			return "script_shows@show_audience@ig5_hatfire_react@t01_hatfire_right";
		case 11:
			return "script_shows@show_audience@ig5_hatfire_react@t05_hatfire_front";
		default:
			break;
	}
	return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
}

char* func_171(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return func_269(iParam1);
		case 0:
			return func_270(iParam1);
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_VERSION";
}

bool func_172(var uParam0, char* sParam1, char* sParam2)
{
	if (_does_anim_scene_exist(*uParam0) && _is_anim_scene_loaded(*uParam0, true, false))
	{
		uParam0->f_1 = 1;
		return true;
	}
	if (!_does_anim_scene_exist(*uParam0))
	{
		*uParam0 = _create_anim_scene(sParam1, 0, sParam2, false, true);
		load_anim_scene(*uParam0);
	}
	return false;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 56;
		case 1:
		case 2:
			return 22;
		case 3:
			return 10;
		case 4:
			return 23;
	}
	return 0;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -7009108;
		case 1:
			return -7009108;
		case 3:
			return 99634802;
		case 4:
			return 10098011;
	}
	return -7009108;
}

int func_175(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return 2;
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return 2;
				case 17:
					return 1;
				case 18:
					return 1;
				case 20:
					return 2;
				case 31:
					return 2;
				case 32:
					return 2;
				case 39:
					return 2;
				case 53:
				case 54:
				case 55:
					return 2;
				default:
					break;
			}
			break;
		case 3:
			break;
	}
	return 0;
}

Vector3 func_176(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2541.954f, -1303.652f, 47.51162f;
				case 1:
					return 2542.625f, -1303.628f, 47.50835f;
				case 2:
					return 2543.253f, -1303.504f, 47.51194f;
				case 3:
					return 2543.914f, -1303.447f, 47.50978f;
				case 4:
					return 2544.554f, -1303.35f, 47.51124f;
				case 5:
					return 2545.212f, -1303.286f, 47.48675f;
				case 6:
					return 2540.851f, -1302.391f, 47.83032f;
				case 7:
					return 2541.405f, -1302.162f, 47.83151f;
				case 8:
					return 2542.039f, -1301.995f, 47.83165f;
				case 9:
					return 2542.659f, -1301.895f, 47.83114f;
				case 10:
					return 2543.281f, -1301.785f, 47.83141f;
				case 11:
					return 2543.887f, -1301.719f, 47.8308f;
				case 12:
					return 2544.536f, -1301.635f, 47.831f;
				case 13:
					return 2545.165f, -1301.591f, 47.81311f;
				case 14:
					return 2540.816f, -1300.638f, 48.12306f;
				case 15:
					return 2541.43f, -1300.473f, 48.12244f;
				case 16:
					return 2542.034f, -1300.312f, 48.12096f;
				case 17:
					return 2542.644f, -1300.153f, 48.12228f;
				case 18:
					return 2543.269f, -1300.039f, 48.12248f;
				case 19:
					return 2543.896f, -1299.926f, 48.12423f;
				case 20:
					return 2545.169f, -1299.818f, 48.10023f;
				case 21:
					return 2540.844f, -1298.88f, 48.39516f;
				case 22:
					return 2541.442f, -1298.742f, 48.39409f;
				case 23:
					return 2542.07f, -1298.587f, 48.39284f;
				case 24:
					return 2543.302f, -1298.275f, 48.39411f;
				case 25:
					return 2543.898f, -1298.179f, 48.39465f;
				case 26:
					return 2544.536f, -1298.092f, 48.39633f;
				case 27:
					return 2550.958f, -1303.615f, 47.48922f;
				case 28:
					return 2550.302f, -1303.543f, 47.48922f;
				case 29:
					return 2549.651f, -1303.483f, 47.48394f;
				case 30:
					return 2549.005f, -1303.43f, 47.48394f;
				case 31:
					return 2548.356f, -1303.367f, 47.48394f;
				case 32:
					return 2547.713f, -1303.341f, 47.48394f;
				case 33:
					return 2552.097f, -1302.355f, 47.80622f;
				case 34:
					return 2551.509f, -1302.193f, 47.80622f;
				case 35:
					return 2550.899f, -1302.034f, 47.80622f;
				case 36:
					return 2550.298f, -1301.884f, 47.80622f;
				case 37:
					return 2549.661f, -1301.76f, 47.80622f;
				case 38:
					return 2549.037f, -1301.683f, 47.80622f;
				case 39:
					return 2548.413f, -1301.624f, 47.80622f;
				case 40:
					return 2552.122f, -1300.556f, 48.09521f;
				case 41:
					return 2551.499f, -1300.414f, 48.09521f;
				case 42:
					return 2550.871f, -1300.243f, 48.09521f;
				case 43:
					return 2550.255f, -1300.129f, 48.09521f;
				case 44:
					return 2549.635f, -1300.029f, 48.09521f;
				case 45:
					return 2549.016f, -1299.949f, 48.09521f;
				case 46:
					return 2552.115f, -1298.813f, 48.36841f;
				case 47:
					return 2551.499f, -1298.658f, 48.36841f;
				case 48:
					return 2550.254f, -1298.388f, 48.36841f;
				case 49:
					return 2549.629f, -1298.312f, 48.36841f;
				case 50:
					return 2549.001f, -1298.207f, 48.36841f;
				case 51:
					return 2548.368f, -1298.123f, 48.36841f;
				case 52:
					return 2547.733f, -1298.041f, 48.36841f;
				case 53:
					return 2553.102f, -1299.667f, 49.214f;
				case 54:
					return 2553.129f, -1302.399f, 49.214f;
				case 55:
					return 2539.789f, -1302.37f, 49.214f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -349.1009f, 693.7693f, 116.8875f;
				case 1:
					return -348.4168f, 693.9259f, 116.8925f;
				case 2:
					return -345.9169f, 694.5858f, 116.8741f;
				case 3:
					return -344.2555f, 695.0604f, 116.876f;
				case 4:
					return -349.5025f, 695.6313f, 117.0018f;
				case 5:
					return -345.2958f, 696.7811f, 117.0189f;
				case 6:
					return -350.5786f, 697.272f, 117.1134f;
				case 7:
					return -346.918f, 698.2223f, 117.1139f;
				case 8:
					return -345.2069f, 698.744f, 117.1184f;
				case 9:
					return -350.4303f, 699.0625f, 117.1308f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2701.17f, -1354.493f, 47.77215f;
				case 1:
					return 2700.708f, -1354.073f, 47.77014f;
				case 2:
					return 2700.242f, -1353.635f, 47.76572f;
				case 3:
					return 2699.766f, -1353.23f, 47.74422f;
				case 4:
					return 2697.559f, -1350.386f, 47.76871f;
				case 5:
					return 2697.222f, -1349.843f, 47.76798f;
				case 6:
					return 2696.885f, -1349.309f, 47.76988f;
				case 7:
					return 2699.731f, -1355.699f, 47.94025f;
				case 8:
					return 2699.25f, -1355.287f, 47.93497f;
				case 9:
					return 2698.764f, -1354.877f, 47.93819f;
				case 10:
					return 2695.774f, -1351.042f, 47.93525f;
				case 11:
					return 2695.439f, -1350.499f, 47.93626f;
				case 12:
					return 2698.316f, -1356.914f, 48.10247f;
				case 13:
					return 2697.834f, -1356.48f, 48.09552f;
				case 14:
					return 2694.688f, -1352.778f, 48.10484f;
				case 15:
					return 2694.39f, -1352.196f, 48.09603f;
				case 16:
					return 2694.055f, -1351.671f, 48.0974f;
				case 17:
					return 2696.514f, -1357.575f, 48.25399f;
				case 18:
					return 2696.022f, -1357.168f, 48.25772f;
				case 19:
					return 2695.554f, -1356.731f, 48.23498f;
				case 20:
					return 2693.692f, -1354.44f, 48.26648f;
				case 21:
					return 2693.319f, -1353.92f, 48.26515f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -776.0957f, -1365.928f, 43.26698f;
				case 1:
					return -776.1156f, -1365.257f, 43.26892f;
				case 2:
					return -776.1213f, -1364.023f, 43.26947f;
				case 3:
					return -776.0749f, -1361.318f, 43.29291f;
				case 4:
					return -776.0781f, -1360.655f, 43.26656f;
				case 5:
					return -776.107f, -1359.996f, 43.26938f;
				case 6:
					return -777.7452f, -1365.929f, 43.43242f;
				case 7:
					return -778.02f, -1365.272f, 43.45926f;
				case 8:
					return -777.9575f, -1361.315f, 43.4812f;
				case 9:
					return -777.9938f, -1360.662f, 43.45993f;
				case 10:
					return -777.9775f, -1360f, 43.45834f;
				case 11:
					return -779.8451f, -1365.909f, 43.6443f;
				case 12:
					return -779.8615f, -1365.263f, 43.64589f;
				case 13:
					return -779.8595f, -1364.639f, 43.64569f;
				case 14:
					return -779.835f, -1361.3f, 43.67118f;
				case 15:
					return -779.8181f, -1360.642f, 43.64128f;
				case 16:
					return -781.7369f, -1365.253f, 43.83224f;
				case 17:
					return -781.7541f, -1364.628f, 43.83392f;
				case 18:
					return -781.7646f, -1364f, 43.83494f;
				case 19:
					return -781.7217f, -1360.638f, 43.83135f;
				case 20:
					return -781.7209f, -1359.973f, 43.83129f;
				case 21:
					return -781.7397f, -1359.346f, 43.83311f;
				case 22:
					return -781.7122f, -1358.722f, 43.83042f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_177(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 189.76f;
				case 1:
					return 194.54f;
				case 2:
					return 185.02f;
				case 3:
					return 185.67f;
				case 4:
					return 186.48f;
				case 5:
					return 189.64f;
				case 6:
					return 194.87f;
				case 7:
					return 197.45f;
				case 8:
					return 192.94f;
				case 9:
					return 190.4f;
				case 10:
					return 187.74f;
				case 11:
					return 188.21f;
				case 12:
					return 191.46f;
				case 13:
					return 187.8f;
				case 14:
					return 197.77f;
				case 15:
					return 197.28f;
				case 16:
					return 195.7f;
				case 17:
					return 194.38f;
				case 18:
					return 189.91f;
				case 19:
					return 187.19f;
				case 20:
					return 183.35f;
				case 21:
					return 195.68f;
				case 22:
					return 195.08f;
				case 23:
					return 197.6f;
				case 24:
					return 192.22f;
				case 25:
					return 187.31f;
				case 26:
					return 186.63f;
				case 27:
					return 174.21f;
				case 28:
					return 175.4f;
				case 29:
					return 177.33f;
				case 30:
					return 177.62f;
				case 31:
					return 175.4f;
				case 32:
					return 176.59f;
				case 33:
					return 165.32f;
				case 34:
					return 170.16f;
				case 35:
					return 170.37f;
				case 36:
					return 174.13f;
				case 37:
					return 175.59f;
				case 38:
					return 173.64f;
				case 39:
					return 178.62f;
				case 40:
					return 169.96f;
				case 41:
					return 171.41f;
				case 42:
					return 170.19f;
				case 43:
					return 171.15f;
				case 44:
					return 174.93f;
				case 45:
					return 177.61f;
				case 46:
					return 169.6f;
				case 47:
					return 171.53f;
				case 48:
					return 172.77f;
				case 49:
					return 174.2f;
				case 50:
					return 175.33f;
				case 51:
					return 175.1f;
				case 52:
					return 176.09f;
				case 53:
					return 152.8307f;
				case 54:
					return 152.8307f;
				case 55:
					return 190.6648f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -164f;
				case 1:
					return -164f;
				case 2:
					return -164f;
				case 3:
					return -164f;
				case 4:
					return -164f;
				case 5:
					return -164f;
				case 6:
					return -164f;
				case 7:
					return -164f;
				case 8:
					return -164f;
				case 9:
					return -164f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return -37.72f;
				case 1:
					return -39.69f;
				case 2:
					return -39.97f;
					return -39.02f;
					return -52.61f;
					return -55.28f;
					return -56.79f;
					return -39.3f;
					return -38.34f;
					return -39.92f;
					return -57.96f;
					return -56.65f;
					return -38.24f;
					return -39.76f;
					return -56.13f;
					return -58.55f;
					return -54.07f;
					return -40.84f;
					return -40.21f;
					return -44.17f;
					return -52.32f;
					return -54.76f;
					Jump @1322; //curOff = 1308
					return -88.69f;
					return -175.57f;
				}

bool func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return true;
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return true;
				case 17:
					return 2;
				case 18:
					return 2;
				case 20:
				case 31:
					return true;
				case 32:
					return true;
				case 39:
					return true;
				case 53:
				case 54:
				case 55:
					return true;
				default:
					break;
			}
			break;
		case 3:
			break;
	}
	return false;
}

int func_179(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_271(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_180(var uParam0, int iParam1)
{
	if (func_272(iParam1) != -1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= func_272(iParam1))
		{
			if (!_does_volume_exist(&(uParam0->f_22[iVar0])))
			{
				Var1 = { func_273(iParam1, iVar0) };
				uParam0->f_22[iVar0] = _create_volume_by_hash_with_custom_name(Var1.f_9, Var1, Var1.f_3, Var1.f_6, Var1.f_10);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= func_272(iParam1))
		{
			if (_does_volume_exist(&(uParam0->f_22[iVar0])))
			{
				_0x4c39c95ae5db1329(&(uParam0->f_22[iVar0]), 0, 2);
			}
			iVar0++;
		}
		return true;
	}
	else
	{
		return true;
	}
	return false;
}

bool func_181(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 2:
				case 3:
				case 4:
				case 5:
					return true;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 10:
				case 11:
				case 12:
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 3:
				case 4:
				case 8:
				case 9:
				case 10:
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
					return true;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

char* func_182(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 2:
							return "Male5";
						case 3:
							return "Male1";
						case 4:
							return "Male3";
						case 5:
							return "Male0";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 1:
							return "Male5";
						case 10:
							return "Male1";
						case 11:
							return "Male3";
						case 12:
							return "Male0";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
						case 4:
							return "Male5";
						case 8:
							return "Male3";
						case 9:
							return "Male0";
						case 10:
							return "Male1";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						default:
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						case 17:
							return "Male3";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
						case 10:
							return "Male3";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
						case 10:
							return "Male2";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male3";
						default:
							break;
					}
					break;
			}
			break;
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 2:
							return "Male5";
						case 3:
							return "Male1";
						case 4:
							return "Male3";
						case 5:
							return "Male0";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 1:
							return "Male5";
						case 10:
							return "Male1";
						case 11:
							return "Male3";
						case 12:
							return "Male0";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
						case 4:
							return "Male5";
						case 8:
							return "Male3";
						case 9:
							return "Male0";
						case 10:
							return "Male1";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						default:
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						case 17:
							return "Male3";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
						case 10:
							return "Male3";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
						case 10:
							return "Male2";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male3";
						default:
							break;
					}
					break;
			}
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_HANDLE";
}

bool func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 3:
			return true;
		case 1:
		case 2:
			return true;
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

void func_184(var uParam0, int iParam1)
{
	if (!is_ped_using_any_scenario(*uParam0))
	{
		task_start_scenario_at_position(*uParam0, -1426662425, func_176(iParam1, uParam0->f_2), func_177(iParam1, uParam0->f_2), -1, false, true, 0, 0.25f, false);
	}
}

void func_185(var uParam0, int iParam1)
{
	if (does_entity_exist(*uParam0))
	{
		iVar0 = 2;
		if (is_ped_male(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_176(iParam1, uParam0->f_2) };
		fVar4 = func_177(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_274(iParam1, uParam0->f_2);
		uParam0->f_5 = 1;
		uParam0->f_6 = -1;
		uParam0->f_7 = func_275(uParam0->f_5);
		uParam0->f_8 = func_276(uParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			task_play_anim_advanced(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, func_277(), 2, 1, 0);
		}
		else
		{
			task_play_anim_advanced(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, func_277(), 2, 0, 0);
		}
	}
}

void func_186(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_278(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_187(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_188(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_190() - fParam1);
	func_279(uParam0, 1);
	func_280(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_189(var uParam0)
{
	return func_187(*uParam0, 2);
}

float func_190()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_191(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
			return true;
	}
	return false;
}

void func_192(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_193()
{
	return 594254304;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1647947738;
		default:
			break;
	}
	return 1647947738;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_196(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2693.964f, -1356.467f, 50.81907f;
		case 2:
			return 2688.162f, -1362.869f, 54.23667f;
		case 0:
			return 0f, 0f, 0f;
		case 4:
			return -782.7046f, -1364.543f, 46.42249f;
		case 3:
			return -350.1178f, 702.2504f, 117.7055f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_197(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -52.52f;
		case 2:
			return 16.48f;
		case 0:
			return 0f;
		case 4:
			return -20f;
		case 3:
			return -164.26f;
		default:
			break;
	}
	return 0f;
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2124438728;
		default:
			break;
	}
	return 0;
}

void func_199(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_281(iParam0, iParam1))
		{
			if (func_282(iParam0, iParam1))
			{
				if (func_283(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_284(iParam0);
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

Vector3 func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -349.8668f, 701.5555f, 118.5235f;
		case 1:
			return -349.7668f, 701.5555f, 118.5235f;
		case 2:
			return -349.5668f, 701.5555f, 118.5235f;
		case 3:
			return -349.9668f, 701.3555f, 118.5235f;
		case 4:
			return -349.7668f, 701.3555f, 118.5235f;
		default:
			break;
	}
	return -349.8668f, 701.5555f, 118.5235f;
}

char* func_201(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "script@shows@magic_lantern@ig2_projectionist@thebear";
		case 22:
		case 32:
			return "script@shows@magic_lantern@ig2_projectionist@legendofblackwater";
		case 23:
		case 33:
			return "script@shows@magic_lantern@ig2_projectionist@manflight";
		case 24:
		case 34:
			return "script@shows@magic_lantern@ig2_projectionist@saviorsandsavages";
		case 25:
		case 35:
			return "script@shows@magic_lantern@ig2_projectionist@ghastlyserenade";
	}
	return "script@shows@magic_lantern@ig2_projectionist@thebear";
}

char* func_202(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "pl_action";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 22:
		case 32:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 23:
		case 33:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 24:
		case 34:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 25:
		case 35:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
	}
	return "[SHOW_PROJECTIONIST_GET_PLAYLIST] fail - no playlist";
}

Vector3 func_203(int iParam0)
{
	switch (iParam0)
	{
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return -350.055f, 701.392f, 117.679f;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 2694.933f, -1356.293f, 50.879f;
	}
	return -350.055f, 701.392f, 117.679f;
}

Vector3 func_204(int iParam0)
{
	switch (iParam0)
	{
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0f, 0f, 30f;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 7.1f, 0f, 145.6f;
	}
	return 0f, 0f, 30f;
}

char* func_205(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "PROJECTIONIST";
		case 22:
		case 32:
			return "PROJECTIONIST";
		case 23:
		case 33:
			return "PROJECTIONIST";
		case 24:
		case 34:
			return "PROJECTIONIST";
		case 25:
		case 35:
			return "PROJECTIONIST";
	}
	return "PROJECTIONIST";
}

char* func_206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 22:
		case 32:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 23:
		case 33:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 24:
		case 34:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 25:
		case 35:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
	}
	return "SLIDE0";
}

int func_207(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	if (fParam13 <= 0f)
	{
		iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_285(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_286(iVar0);
	return iVar1;
}

int func_208()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

char* func_209(int iParam0)
{
	switch (iParam0)
	{
		case 21:
			return "ML_Bear_Story_Soundset";
		case 22:
			return "ML_Blackwater_Soundset";
		case 23:
			return "ML_Man_Flight_Soundset";
		case 24:
			return "ML_See_The_World_Soundset";
		case 25:
			return "ML_Ghost_Story_Soundset";
		case 31:
			return "ML_Bear_Story_Soundset_Tent";
		case 32:
			return "ML_Blackwater_Soundset_Tent";
		case 33:
			return "ML_Man_Flight_Soundset_Tent";
		case 34:
			return "ML_See_The_World_Soundset_Tent";
		case 35:
			return "ML_Ghost_Story_Soundset_Tent";
		case 26:
		case 36:
			return "Cartoon_Direct_Current_Soundset";
		case 27:
		case 37:
			return "Cartoon_Farmers_Daughter_Soundset";
		case 28:
		case 38:
			return "Cartoon_Modern_Medicine_Soundset";
		case 29:
		case 39:
			return "Cartoon_Strongest_Man_Soundset";
		case 30:
		case 40:
			return "Cartoon_Sketching_For_Sweetheart_Soundset";
	}
	return "ERROR!";
}

void func_210()
{
	Global_40.f_9028.f_15++;
	Global_40.f_9028.f_13++;
}

void func_211()
{
	Global_40.f_9028.f_16++;
	Global_40.f_9028.f_13++;
}

char* func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "shows_sd_vaudeville";
		case 1:
		case 2:
			return "shows_sd_magic";
		case 3:
			return "shows_val_magic";
		case 4:
			return "shows_bla_movie";
		default:
			break;
	}
	return "shows_sd_vaudeville";
}

void func_213(var uParam0, var uParam1, int iParam2)
{
	bVar0 = func_14(get_player_index(), 1, 0, 1);
	iVar1 = func_173(iParam2);
	fVar2 = 0f;
	if (func_40(&(uParam0->f_8)))
	{
		fVar2 = func_42(&(uParam0->f_8));
	}
	iVar5 = 0;
	while (iVar5 <= (iVar1 - 1))
	{
		if (!does_entity_exist(uParam1[iVar5]) || is_entity_dead(uParam1[iVar5]))
		{
		}
		else
		{
			set_ped_reset_flag(uParam1[iVar5], 153, true);
			if (Global_1394141->f_1334)
			{
				if (func_287(*uParam0, iVar5) && (*uParam1)[iVar5]->f_1 != 5)
				{
					(*uParam1)[iVar5]->f_1 = 5;
				}
			}
			else if (func_287(*uParam0, iVar5) && (*uParam1)[iVar5]->f_1 == 5)
			{
				func_288(&(uParam0->f_11), 0);
				(*uParam1)[iVar5]->f_1 = 3;
			}
			if (uParam0->f_19 && func_289(iParam2))
			{
				if (!func_40(&(uParam0->f_8)))
				{
					func_7(&(uParam0->f_18), 1);
					func_7(&(uParam0->f_18), 8);
					func_41(&(uParam0->f_8));
				}
				else if ((*uParam1)[iVar5]->f_1 < 7)
				{
					if (func_290(iParam2, iVar5) >= 0f && fVar2 > func_290(iParam2, iVar5))
					{
						(*uParam1)[iVar5]->f_1 = 7;
					}
				}
			}
			if ((!uParam0->f_19 && !func_287(*uParam0, iVar5)) && (*uParam1)[iVar5]->f_1 != 5)
			{
				if ((*uParam1)[iVar5]->f_9)
				{
					fVar6 = func_291(Global_35, uParam1[iVar5], 1, 1);
					if (fVar6 > 2f || !func_292((*uParam1)[iVar5]))
					{
						(*uParam1)[iVar5]->f_9 = 0;
						uParam0->f_21 = 0;
						(*uParam1)[iVar5]->f_5 = 2;
						func_293((*uParam1)[iVar5], iParam2);
					}
				}
				else if (!uParam0->f_21 && (*uParam1)[iVar5]->f_1 != 6)
				{
					fVar6 = func_291(Global_35, uParam1[iVar5], 1, 1);
					if (fVar6 < 1.5f && func_292((*uParam1)[iVar5]))
					{
						(*uParam1)[iVar5]->f_5 = func_294(iVar5);
						func_293((*uParam1)[iVar5], iParam2);
						(*uParam1)[iVar5]->f_9 = 1;
						uParam0->f_21 = 1;
					}
				}
			}
			switch ((*uParam1)[iVar5]->f_1)
			{
				case 0:
					break;
				case 1:
					if (func_295(iParam2, iVar5))
					{
						func_297((*uParam1)[iVar5], func_296(iParam2), 500);
					}
					break;
				case 3:
					func_298((*uParam1)[iVar5], iParam2);
					(*uParam1)[iVar5]->f_1 = 4;
					break;
				case 4:
					bVar7 = false;
					if ((*uParam1)[iVar5]->f_6 == -1)
					{
						func_293((*uParam1)[iVar5], iParam2);
						(*uParam1)[iVar5]->f_1 = 1;
						return;
					}
					if (is_entity_playing_anim(uParam1[iVar5], (*uParam1)[iVar5]->f_7, (*uParam1)[iVar5]->f_8, 1))
					{
						if (_get_entity_anim_current_time(uParam1[iVar5], (*uParam1)[iVar5]->f_7, (*uParam1)[iVar5]->f_8) > 0.97f)
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						func_293((*uParam1)[iVar5], iParam2);
						(*uParam1)[iVar5]->f_1 = 1;
					}
					break;
				case 5:
					if (!uParam0->f_19)
					{
						func_299(uParam0, (*uParam1)[iVar5]);
					}
					break;
				case 6:
					if (_does_anim_scene_exist(&(uParam0->f_12[1])))
					{
						if (!is_entity_dead(uParam1[iVar5]))
						{
							set_ped_reset_flag(uParam1[iVar5], 261, true);
						}
						if (_0x005e6f28dd7ed58d(&(uParam0->f_12[1]), func_182(1, iVar5, uParam0->f_17)) || _is_anim_scene_finished(&(uParam0->f_12[1]), false))
						{
							func_185((*uParam1)[iVar5], iParam2);
							(*uParam1)[iVar5]->f_1 = 1;
						}
						if (!_0x3ab6c7b0bb0df4b1(uParam1[iVar5], &(uParam0->f_12[1])))
						{
							func_185((*uParam1)[iVar5], iParam2);
							(*uParam1)[iVar5]->f_1 = 1;
						}
					}
					break;
				case 2:
					task_start_scenario_at_position(uParam1[iVar5], -1426662425, func_176(iParam2, iVar5), func_177(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
					(*uParam1)[iVar5]->f_1 = 1;
					break;
				case 7:
					if (!func_2(uParam0->f_18, 4))
					{
						return;
					}
					if (func_274(iParam2, iVar5) == 0 && !func_183(iParam2))
					{
						task_start_scenario_at_position(uParam1[iVar5], -1426662425, func_176(iParam2, iVar5), func_177(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
						_0x2208438012482a1a(uParam1[iVar5], false, false);
						(*uParam1)[iVar5]->f_1 = 8;
					}
					else
					{
						(*uParam1)[iVar5]->f_1 = 9;
					}
					break;
				case 8:
					if (does_entity_exist(uParam1[iVar5]) && !is_entity_dead(uParam1[iVar5]))
					{
						if (is_ped_active_in_scenario(uParam1[iVar5], 0))
						{
							_0x463803429297117c(uParam1[iVar5], 2546.344f, -1307.994f, 48.42698f, 0, 0);
							set_blocking_of_non_temporary_events(uParam1[iVar5], true);
							(*uParam1)[iVar5]->f_1 = 9;
						}
						else if (fVar2 > (func_290(iParam2, iVar5) + 2f))
						{
							(*uParam1)[iVar5]->f_1 = 9;
						}
					}
					break;
				case 9:
					if (func_253(iParam2))
					{
						if (func_2(uParam0->f_18, 16))
						{
							task_follow_waypoint_recording(uParam1[iVar5], func_212(iParam2), 0, 10, -1, 0, 0, -1);
							(*uParam1)[iVar5]->f_1 = 10;
						}
					}
					else
					{
						task_follow_nav_mesh_to_coord(uParam1[iVar5], func_300(iParam2), 1f, -1, 0.25f, 5373953, 40000f);
						_0x2208438012482a1a(uParam1[iVar5], false, false);
						(*uParam1)[iVar5]->f_1 = 10;
					}
					break;
				case 10:
					if ((bVar0 || is_ped_shooting(Global_35)) || func_2(uParam0->f_18, 32))
					{
						func_7(&(uParam0->f_18), 32);
						(*uParam1)[iVar5]->f_1 = 12;
						return;
					}
					if (func_253(iParam2))
					{
						if (get_script_task_status(uParam1[iVar5], 658540077, true) == 1)
						{
							(*uParam1)[iVar5]->f_1 = 11;
						}
						else if (fVar2 > (func_290(iParam2, iVar5) + 3f))
						{
							(*uParam1)[iVar5]->f_1 = 9;
						}
					}
					else if (!func_301(get_entity_coords(uParam1[iVar5], true, false)))
					{
						set_ped_config_flag(uParam1[iVar5], 301, false);
						set_ped_can_be_targetted(uParam1[iVar5], true);
						set_ped_relationship_group_hash(uParam1[iVar5], 623901053);
						set_blocking_of_non_temporary_events(uParam1[iVar5], false);
						set_ped_as_no_longer_needed((*uParam1)[iVar5]);
						(*uParam1)[iVar5]->f_1 = 14;
					}
					else if (get_script_task_status(uParam1[iVar5], 713668775, true) != 1 && fVar2 > (func_290(iParam2, iVar5) + 3f))
					{
						(*uParam1)[iVar5]->f_1 = 9;
					}
					break;
				case 11:
					if ((bVar0 || is_ped_shooting(Global_35)) || func_2(uParam0->f_18, 32))
					{
						func_7(&(uParam0->f_18), 32);
						(*uParam1)[iVar5]->f_1 = 12;
						return;
					}
					waypoint_recording_get_num_points(func_212(iParam2), &iVar3);
					waypoint_recording_get_closest_waypoint(func_212(iParam2), get_entity_coords(uParam1[iVar5], true, false), &iVar4);
					if (get_script_task_status(uParam1[iVar5], 658540077, true) != 1 || iVar4 >= (iVar3 - 2))
					{
						set_ped_config_flag(uParam1[iVar5], 301, false);
						set_ped_can_be_targetted(uParam1[iVar5], true);
						set_ped_relationship_group_hash(uParam1[iVar5], 623901053);
						set_blocking_of_non_temporary_events(uParam1[iVar5], false);
						set_ped_as_no_longer_needed((*uParam1)[iVar5]);
						(*uParam1)[iVar5]->f_1 = 14;
					}
					break;
				case 12:
					set_ped_config_flag(uParam1[iVar5], 301, false);
					set_ped_can_be_targetted(uParam1[iVar5], true);
					set_ped_relationship_group_hash(uParam1[iVar5], 623901053);
					set_blocking_of_non_temporary_events(uParam1[iVar5], false);
					_task_smart_flee_style_ped(uParam1[iVar5], Global_35, 3, 0, -1082130432, -1, 0);
					set_ped_as_no_longer_needed((*uParam1)[iVar5]);
					(*uParam1)[iVar5]->f_1 = 14;
					break;
				case 13:
					if (get_script_task_status(uParam1[iVar5], 713668775, true) != 1 && !is_ped_active_in_scenario(uParam1[iVar5], 0))
					{
						delete_ped((*uParam1)[iVar5]);
						(*uParam1)[iVar5]->f_1 = 14;
					}
					else
					{
						(*uParam1)[iVar5]->f_1 = 8;
					}
					break;
				case 14:
					break;
			}
		}
		iVar5++;
	}
}

struct<21> func_214(int iParam0, int iParam1, int iParam2)
{
	Var0 = 4;
	Var0.f_5 = 4;
	Var0.f_10 = 4;
	Var0.f_15 = 4;
	Var0[0] = -1;
	Var0[1] = -1;
	Var0[2] = -1;
	Var0[3] = -1;
	Var0.f_5[0] = 0;
	Var0.f_5[1] = 0;
	Var0.f_5[2] = 0;
	Var0.f_5[3] = 0;
	Var0.f_10[0] = -1;
	Var0.f_10[1] = -1;
	Var0.f_10[2] = -1;
	Var0.f_10[3] = -1;
	Var0.f_15[0] = 0;
	Var0.f_15[1] = 0;
	Var0.f_15[2] = 0;
	Var0.f_15[3] = 0;
	Var0.f_20 = "";
	if (iParam2 == 49)
	{
		Var0.f_10[0] = 35;
	}
	if (iParam2 == 48)
	{
		Var0.f_10[0] = 2;
		Var0.f_15[0] = 100;
	}
	switch (iParam0)
	{
		case 9:
			switch (iParam2)
			{
				case 1:
					Var0[0] = 16;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					Var0.f_20 = "mc_set1_int_mc_appears";
					break;
				case 2:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 90;
					Var0.f_15[1] = 10;
					Var0.f_20 = "mc_set1_int_name_applause";
					break;
				case 3:
					Var0.f_20 = "mc_set1_int_ticket_price_applause";
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 5:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					Var0.f_20 = "mc_bulc_int_act_discovery";
					break;
				case 6:
					Var0[0] = 24;
					Var0.f_5[0] = 75;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					break;
				case 7:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					Var0.f_20 = "mc_bulc_int_name_applause";
					break;
				case 8:
					Var0[0] = 21;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					Var0.f_20 = "mc_outro_pos_finishes";
					break;
				case 9:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 100;
					break;
				case 10:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					Var0.f_20 = "mc_outro_neg_applause";
					break;
				case 11:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "mc_outro_neg_finishes";
					break;
				case 12:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 100;
					Var0.f_20 = "mc_outro_neg_finishes";
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_20 = "bullet_catch_initial_banter";
					break;
				case 14:
					Var0.f_20 = "bullet_catch_horrible_disease";
					break;
				case 15:
					Var0[0] = 22;
					Var0.f_5[0] = 75;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_gun_reveal";
					break;
				case 16:
					Var0[0] = 20;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_bedding_my_wife";
					break;
				case 17:
					Var0[0] = 24;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					Var0.f_20 = "bullet_catch_i_joke";
					break;
				case 18:
					Var0[0] = 23;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					Var0.f_20 = "bullet_catch_in_my_teeth";
					break;
				case 19:
					break;
				case 20:
					Var0.f_10[0] = 9;
					Var0.f_15[0] = 100;
					break;
				case 21:
					Var0[0] = 19;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 22:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_as_if_it_were_nothing";
					break;
				case 23:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					break;
				case 24:
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				case 25:
					Var0[0] = 20;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_lets_do_that_again";
					break;
				case 26:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
				case 27:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 28:
					Var0[0] = 19;
					Var0[1] = 24;
					Var0.f_5[0] = 60;
					Var0.f_5[1] = 40;
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 29:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 30:
					Var0[0] = 16;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_player_volunteers";
					break;
				case 31:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_take_aim";
					break;
				case 32:
					Var0.f_20 = "bullet_catch_waiting_for_shot";
					break;
				case 33:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot";
					break;
				case 34:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot_reveal";
					break;
				case 35:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot_stomach";
					break;
				case 36:
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 6;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					Var0.f_20 = "bullet_catch_supposed_to_shoot_head";
					break;
				case 37:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_20 = "bullet_catch_absolute_pillock";
					break;
				case 38:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					Var0.f_20 = "bullet_catch_npc_volunteers";
					break;
				case 39:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_aims";
					break;
				case 40:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shoots";
					break;
				case 41:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shot_reveal";
					break;
				case 42:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_volunteers";
					break;
				case 43:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_aims";
					break;
				case 44:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shoots";
					break;
				case 45:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shot_reveal";
					break;
			}
			break;
		case 12:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 2:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 6;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 3:
					Var0[0] = 25;
					Var0[1] = 24;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 6:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 6;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				case 15:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 40;
					break;
				case 17:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 19:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 70;
					break;
				case 21:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				case 22:
					Var0[0] = 23;
					Var0[1] = 20;
					Var0[2] = 16;
					Var0[3] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_5[3] = 30;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 23:
					Var0[0] = 25;
					Var0[1] = 23;
					Var0[2] = 16;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 50;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 40;
					break;
				case 24:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0[2] = 16;
					Var0[3] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[1] = 10;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
				case 25:
					Var0[0] = 17;
					Var0.f_5[0] = 10;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
				case 26:
					Var0[0] = 31;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 7:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 3:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 4:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 14:
					Var0[0] = 24;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 15:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 16:
					Var0[0] = 24;
					Var0[1] = 16;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 17:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 18:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 5:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 5:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 7:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 30;
					break;
				case 13:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 14:
					Var0[0] = 25;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 90;
					break;
				case 16:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 11;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 50;
					Var0.f_15[3] = 10;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 50;
					break;
				case 18:
					Var0[0] = 17;
					Var0.f_5[0] = 5;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 19:
					Var0[0] = 17;
					Var0.f_5[0] = 60;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 16:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 13:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				case 15:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				case 17:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 40;
					break;
				case 19:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 20:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 40;
					break;
				case 22:
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 60;
					break;
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 25;
					Var0.f_5[1] = 25;
					Var0.f_5[2] = 25;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 18:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 6:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 3:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 14:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 15:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 16:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					break;
				case 18:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 19:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 21:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 22:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 23:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				case 25:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 17:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 5:
					break;
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 7:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 10;
					break;
				case 13:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 15:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 80;
					break;
				case 17:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 10;
					break;
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 19:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				case 20:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 15;
					Var0.f_15[1] = 85;
					break;
				case 22:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 3:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0[0] = 23;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 15:
					Var0[0] = 23;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 16:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 17:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 18:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 15;
					Var0.f_5[1] = 15;
					Var0.f_5[2] = 15;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 19:
					Var0[0] = 26;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 20:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 15:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 4:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					break;
				case 5:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 13:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 5;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 60;
					break;
				case 14:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 10;
					break;
				case 15:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 16:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 5;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 18:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 19:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 20:
					Var0[0] = 25;
					Var0[1] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 21:
					Var0[0] = 24;
					Var0[1] = 25;
					Var0.f_5[0] = 40;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 22:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 23:
					Var0[0] = 23;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				case 24:
					Var0[0] = 24;
					Var0[1] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 25:
					Var0[0] = 23;
					Var0[1] = 24;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				case 26:
					Var0[0] = 23;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				case 27:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 28:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 29:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 15;
					Var0.f_15[2] = 15;
					Var0.f_15[3] = 20;
					break;
			}
			break;
		case 11:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					break;
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 60;
					break;
				case 4:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 70;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					break;
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 13:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 14:
					break;
				case 15:
					Var0[0] = 19;
					Var0.f_5[0] = 10;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 16:
					Var0[0] = 24;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				case 17:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 18:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 19:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 20:
					Var0[0] = 20;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				case 21:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 9;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 30;
					break;
				case 22:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 10;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					break;
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 23;
					Var0[3] = 22;
					Var0.f_5[0] = 25;
					Var0.f_5[1] = 25;
					Var0.f_5[2] = 25;
					Var0.f_5[3] = 25;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_10[3] = 6;
					Var0.f_15[0] = 25;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					Var0.f_15[3] = 25;
					break;
				case 24:
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_10[3] = 6;
					Var0.f_15[0] = 25;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					Var0.f_15[3] = 25;
					break;
			}
			break;
		case 13:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 4:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 5:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 6:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 10;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 15:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 17:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 18:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
				case 19:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 21:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 22:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0[2] = 19;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 23:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
			}
			break;
		case 14:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 16:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 17:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 18:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 19:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 20:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 21:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				case 22:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 23:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 30;
					break;
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 10;
					break;
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 14:
					Var0[0] = 16;
					Var0[1] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 4;
					Var0.f_15[0] = 100;
					break;
				case 15:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 18:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 19:
					Var0[0] = 25;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 8:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					break;
				case 3:
					Var0[0] = 16;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				case 14:
					Var0.f_10[0] = 4;
					Var0.f_15[0] = 50;
					break;
				case 15:
					Var0[0] = 16;
					Var0[1] = 17;
					Var0.f_5[0] = 80;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 6:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 3:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 13:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 14:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 90;
					break;
				case 16:
					Var0[0] = 25;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				case 17:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 18:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 30;
					break;
				case 19:
					Var0[0] = 25;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					Var0.f_15[3] = 10;
					break;
				case 21:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 22:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 10;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 23:
					Var0[0] = 17;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 20:
			switch (iParam2)
			{
				case 1:
					switch (iParam1)
					{
						case 9:
							Var0[0] = 16;
							Var0.f_5[0] = 100;
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 3;
							Var0.f_15[0] = 75;
							Var0.f_15[1] = 25;
							Var0.f_20 = "mc_set1_int_mc_appears";
							break;
						case 5:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						case 8:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						case 17:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						case 13:
							Var0.f_10[0] = 10;
							Var0.f_10[1] = 11;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 9:
							Var0[0] = 16;
							Var0.f_5[0] = 50;
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 3;
							Var0.f_15[0] = 90;
							Var0.f_15[1] = 10;
							Var0.f_20 = "mc_set1_int_name_applause";
							break;
						case 5:
							Var0.f_10[0] = 1;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 3;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 10;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 20;
							Var0.f_15[3] = 20;
							break;
						case 8:
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 0;
							Var0.f_10[2] = 8;
							Var0.f_15[0] = 60;
							Var0.f_15[1] = 30;
							Var0.f_15[2] = 10;
							break;
						case 17:
							Var0.f_10[0] = 4;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 8;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 10;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 20;
							Var0.f_15[3] = 20;
							break;
						case 13:
							Var0.f_10[0] = 1;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 3;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 20;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 10;
							Var0.f_15[3] = 20;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							Var0.f_20 = "mc_set1_int_ticket_price_applause";
							break;
						case 5:
							Var0[0] = 24;
							Var0.f_5[0] = 40;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						case 8:
							Var0[0] = 16;
							Var0.f_5[0] = 20;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						case 17:
							Var0[0] = 24;
							Var0.f_5[0] = 30;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						case 13:
							Var0.f_10[0] = 10;
							Var0.f_10[1] = 11;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 2;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
						case 5:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_10[2] = 3;
							Var0.f_15[0] = 40;
							Var0.f_15[1] = 40;
							Var0.f_15[2] = 20;
							break;
						case 8:
							break;
						case 17:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 40;
							Var0.f_15[1] = 60;
							break;
						case 13:
							break;
					}
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 6:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 7:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 8:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 13:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 6;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 30;
					break;
				case 14:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 15:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 16:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 18:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 19:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 20:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 21:
					Var0[0] = 20;
					Var0[1] = 19;
					Var0[2] = 23;
					Var0[3] = 22;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_5[3] = 20;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 22:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 23:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 25:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 26:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 27:
					Var0[0] = 24;
					Var0[1] = 23;
					Var0[2] = 22;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 40;
					break;
				case 28:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 29:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 10;
					break;
			}
			break;
	}
	return Var0;
}

void func_215(var uParam0, var uParam1, int iParam2, struct<16> Param3, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	iVar0 = func_173(iParam2);
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = Param3.f_10;
	iVar7 = Param3;
	iVar2 = 0;
	while (iVar2 <= (iVar6 - 1))
	{
		iVar4 = (&Param3.f_15[iVar2] + iVar4);
		iVar2++;
	}
	func_41(&(uParam0->f_2));
	func_41(&(uParam0->f_5));
	if (!is_string_null_or_empty(Param3.f_20))
	{
		trigger_music_event(Param3.f_20);
	}
	if (&Param3[0] == -1 && &Param3.f_10[0] == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((*uParam1)[iVar1]->f_1 == 6)
		{
		}
		else if (&Param3.f_10[0] == 35)
		{
			(*uParam1)[iVar1]->f_1 = 13;
		}
		else
		{
			if (&Param3[0] != -1)
			{
				iVar3 = get_random_int_in_range(0, 100);
				iVar5 = 0;
				iVar2 = 0;
				while (iVar2 <= (iVar7 - 1))
				{
					iVar5 = (&Param3.f_5[iVar2] + iVar5);
					if (iVar3 <= iVar5)
					{
						(*uParam1)[iVar1]->f_3 = get_random_int_in_range(100, 700);
						(*uParam1)[iVar1]->f_6 = &Param3[iVar2];
						Jump @290; //curOff = 266
					}
					else
					{
						(*uParam1)[iVar1]->f_6 = -1;
					}
					iVar2++;
				}
			}
			else
			{
				(*uParam1)[iVar1]->f_6 = -1;
			}
			if (&Param3.f_10[0] != -1)
			{
				iVar3 = get_random_int_in_range(0, iVar4);
				iVar5 = 0;
				iVar2 = 0;
				while (iVar2 <= (iVar6 - 1))
				{
					iVar5 = (&Param3.f_15[iVar2] + iVar5);
					if (iVar3 <= iVar5)
					{
						(*uParam1)[iVar1]->f_5 = &Param3.f_10[iVar2];
						Jump @397; //curOff = 373
					}
					else
					{
						(*uParam1)[iVar1]->f_5 = -1;
					}
					iVar2++;
				}
			}
			else
			{
				(*uParam1)[iVar1]->f_5 = -1;
			}
			(*uParam1)[iVar1]->f_1 = 3;
		}
		iVar1++;
	}
}

Vector3 func_216(vector3 vParam0)
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

float func_217(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_218(var uParam0)
{
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = *uParam0;
	Var0.f_4 = 21030;
	Var0.f_8 = 4;
	Var0.f_19 = 3;
	Var0.f_20 = 2;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_13 = 3;
	Var0.f_7 = 500;
	_0x66f9eb44342bb4c5(Global_35, &Var0);
}

void func_219(int iParam0)
{
	if (func_222(&(iParam0->f_1053[1])))
	{
		func_239(iParam0->f_1053[1], 1, 1);
	}
	if (func_222(&(iParam0->f_1053[0])))
	{
		func_239(iParam0->f_1053[0], 1, 1);
	}
	if (func_222(&(iParam0->f_1053[2])))
	{
		func_239(iParam0->f_1053[2], 1, 1);
	}
}

void func_220(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_221(var uParam0)
{
	return uParam0;
}

bool func_222(int iParam0)
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

int func_223(int iParam0, var uParam1)
{
	if (!func_4(Global_35, Global_1394141->f_7[*iParam0]->f_4, 1, 0))
	{
		return 0;
	}
	if (!func_230(iParam0->f_1053[1], uParam1, "SHOW_POS_RESPONSE", -163964935))
	{
		return 0;
	}
	_uiprompt_set_group((*Global_1945938)[func_302(&(iParam0->f_1053[1]))]->f_3, _uiprompt_get_group_id_for_target_entity(iParam0->f_12), 0);
	if (!func_230(iParam0->f_1053[0], uParam1, "SHOW_NEG_RESPONSE", 648122183))
	{
		return 0;
	}
	_uiprompt_set_group((*Global_1945938)[func_302(&(iParam0->f_1053[0]))]->f_3, _uiprompt_get_group_id_for_target_entity(iParam0->f_12), 0);
	return 1;
}

void func_224(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_222(iParam0))
	{
		return;
	}
	iVar0 = func_302(iParam0);
	if (bParam1)
	{
		func_303(iParam0, 4);
		func_304(iVar0, 1);
		func_305(iVar0, 1);
	}
	else
	{
		func_306(iParam0, 4);
		func_305(iVar0, 0);
	}
}

bool func_225(int iParam0, bool bParam1)
{
	if (bParam1 && !func_222(iParam0))
	{
		return false;
	}
	return !func_307(iParam0, 4);
}

bool func_226(var uParam0)
{
	if (func_222(*uParam0))
	{
		if (func_233(*uParam0, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_227(int iParam0)
{
	bVar0 = false;
	if ((func_40(&(iParam0->f_950)) && iParam0->f_18 < func_308(*iParam0)) && func_47(&(iParam0->f_950)) > 35000)
	{
		iParam0->f_18++;
		vVar1 = { func_309(*iParam0, 0, 1) };
		bVar0 = true;
	}
	else if (func_310(*iParam0) && !func_311(36))
	{
		iVar4 = get_random_int_in_range(0, 10);
		if (iVar4 < 5)
		{
			vVar1 = { func_309(*iParam0, 2, 1) };
		}
		else
		{
			vVar1 = { func_309(*iParam0, 1, 1) };
		}
	}
	else
	{
		vVar1 = { func_309(*iParam0, 1, 1) };
	}
	if (func_312(iParam0))
	{
		vVar1 = { func_309(*iParam0, 3, 1) };
	}
	if (func_313(&(iParam0->f_954), vVar1, 1, -1, 0, 0))
	{
		iParam0->f_1052++;
		func_314(iParam0);
		if (bVar0)
		{
			func_41(&(iParam0->f_950));
		}
		func_7(&(iParam0->f_16), 16);
		return true;
	}
	return false;
}

void func_228()
{
	if (get_script_task_status(Global_35, -2017877118, true) == 1)
	{
		return;
	}
	bVar0 = false;
	if (is_ped_active_in_scenario(Global_35, 1) || (func_311(36) && _0x3ab6c7b0bb0df4b1(Global_35, -1)))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		task_play_anim(Global_35, func_157(), func_315(1), 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
	}
	else
	{
		task_play_anim(Global_35, func_157(), func_315(0), 8f, -8f, -1, 67108880, 0f, false, 1114114, false, 0, false);
	}
}

bool func_229(int iParam0)
{
	bVar0 = false;
	if ((func_40(&(iParam0->f_950)) && iParam0->f_19 < func_308(*iParam0)) && func_47(&(iParam0->f_950)) > 35000)
	{
		iParam0->f_19++;
		vVar1 = { func_309(*iParam0, 0, 0) };
		bVar0 = true;
	}
	else if (func_310(*iParam0) && !func_311(36))
	{
		iVar4 = get_random_int_in_range(0, 10);
		if (iVar4 < 5)
		{
			vVar1 = { func_309(*iParam0, 2, 0) };
		}
		else
		{
			vVar1 = { func_309(*iParam0, 1, 0) };
		}
	}
	else
	{
		vVar1 = { func_309(*iParam0, 1, 0) };
	}
	if (func_312(iParam0))
	{
		vVar1 = { func_309(*iParam0, 3, 0) };
	}
	if (func_313(&(iParam0->f_954), vVar1, 1, -1, 0, 0))
	{
		iParam0->f_1052 = (iParam0->f_1052 - 1);
		func_316(iParam0);
		if (bVar0)
		{
			func_41(&(iParam0->f_950));
		}
		func_7(&(iParam0->f_16), 32);
		return true;
	}
	return false;
}

bool func_230(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	if (!func_222(*uParam0))
	{
		*uParam0 = func_317(sParam2, iParam3, *uParam1, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	}
	if (!func_222(*uParam0))
	{
		return false;
	}
	return true;
}

int func_231(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_232(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_233(int iParam0, bool bParam1)
{
	if (bParam1 && !func_222(iParam0))
	{
		return false;
	}
	iVar0 = func_302(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_234(var uParam0)
{
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = Global_35;
	Var0.f_4 = 21030;
	Var0.f_8 = 4;
	Var0.f_19 = 3;
	Var0.f_20 = 2;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_13 = 3;
	Var0.f_7 = 500;
	_0x66f9eb44342bb4c5(*uParam0, &Var0);
}

void func_235(int iParam0)
{
	if (_0x8d81e7824b7753f7(iParam0->f_48, "s_Performance_P1", 1))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = iVar0;
			if (has_anim_event_fired(&(iParam0->f_81[0]), &(iLocal_1143[iVar1])))
			{
				if (iVar1 == 1)
				{
					func_7(&(Global_1394141->f_1326), 32768);
				}
				Global_1394141->f_1332 = func_318(iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 8;
		while (iVar0 <= 16)
		{
			iVar2 = iVar0;
			if (has_anim_event_fired(&(iParam0->f_81[0]), &(iLocal_1143[iVar2])))
			{
				Global_1394141->f_1332 = func_318(iVar2);
			}
			iVar0++;
		}
	}
}

void func_236(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_237()
{
	if (func_260() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_238(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_319(iParam0, 0);
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
		func_320(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_239(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_222(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_302(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_321(iVar0);
	*uParam0 = 0;
}

Vector3 func_240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return -347.6828f, 695.3319f, 118.3399f;
				case 1:
					return -348.5953f, 698.8133f, 119.6875f;
				case 2:
					return -348.8144f, 699.8091f, 118.9698f;
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2546.278f, -1301.387f, 49.2503f;
				case 1:
					return 2546.278f, -1301.387f, 49.2503f;
				case 2:
					return 2546.278f, -1301.387f, 49.2503f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2698.999f, -1351.896f, 48.8643f;
				case 1:
					return 2696.904f, -1353.697f, 50.4856f;
				case 2:
					return 2699.875f, -1351.404f, 49.7629f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -776.4824f, -1362.639f, 44.7983f;
				case 1:
					return -781.2149f, -1362.732f, 45.4177f;
				case 2:
					return -780.0249f, -1362.867f, 47.5554f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_241(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1.3561f, 0f, -165.0047f;
				case 1:
					return -15.1795f, 0f, -165.8691f;
				case 2:
					return -3.653f, 0f, -165.8691f;
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1.2492f, 0f, -179.3095f;
				case 1:
					return 1.2492f, 0f, -179.3095f;
				case 2:
					return 1.2492f, 0f, -179.3095f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5.5654f, 0f, -49.4849f;
				case 1:
					return -12.2595f, 0f, -50.4561f;
				case 2:
					return -3.2839f, 0f, -49.6209f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 5.1961f, 0f, -90.3272f;
				case 1:
					return -3.1228f, 1.0856f, -90.1785f;
				case 2:
					return -25.3626f, 1.0856f, -88.2647f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_242(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_243(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_307(iVar0, 2))
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
		func_322(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_244(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_222(iParam0))
	{
		return;
	}
	iVar0 = func_302(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

bool func_245(int iParam0, bool bParam1)
{
	if (bParam1 && !func_222(iParam0))
	{
		return false;
	}
	iVar0 = func_302(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_246(var uParam0)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		func_323(uParam0[iVar1]);
		iVar1++;
	}
}

void func_247(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 >= 56)
	{
		iParam2 = 55;
	}
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (does_entity_exist(uParam0[iVar0]))
		{
			set_ped_can_be_targetted(uParam0[iVar0], true);
			set_blocking_of_non_temporary_events(uParam0[iVar0], false);
			set_ped_relationship_group_hash(uParam0[iVar0], 623901053);
			set_ped_as_no_longer_needed((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_248()
{
	return Global_1894899->f_2;
}

bool func_249()
{
	iVar0 = get_interior_at_coords(-348.416f, 699.4218f, 117.6852f);
	if (is_valid_interior(iVar0) && is_interior_ready(iVar0))
	{
		bVar1 = true;
		if (!is_interior_entity_set_active(iVar0, "val_magiclantern_intgroup_closed"))
		{
			activate_interior_entity_set(iVar0, "val_magiclantern_intgroup_closed", 0);
			bVar1 = false;
		}
		if (is_interior_entity_set_active(iVar0, "val_magiclantern_intgroup_open"))
		{
			deactivate_interior_entity_set(iVar0, "val_magiclantern_intgroup_open", true);
			bVar1 = false;
		}
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

bool func_250(int iParam0)
{
	func_324(iParam0, 0, 0);
	if (func_325(iParam0))
	{
		return (door_system_get_door_state(iParam0) == 2 || door_system_get_door_state(iParam0) == 1);
	}
	return false;
}

int func_251(int iParam0)
{
	return func_326(iParam0, 23);
}

void func_252(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_324(iParam0, 0, 0);
	if (func_325(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_327(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_328(iParam0, 1);
			}
			else
			{
				func_329(iParam0, 1);
			}
		}
		else
		{
			func_330(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_331())
	{
	}
	else if (network_is_in_session())
	{
	}
}

bool func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 3:
			return true;
		case 1:
		case 2:
			return true;
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

bool func_254(int iParam0)
{
	func_324(iParam0, 0, 0);
	if (func_325(iParam0))
	{
		return !is_door_closed(iParam0);
	}
	return false;
}

bool func_255(int iParam0)
{
	func_324(iParam0, 0, 0);
	if (func_325(iParam0))
	{
		return door_system_get_door_state(iParam0) == 0;
	}
	return false;
}

void func_256(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if ((*uParam0)[iVar0]->f_1 != 0 && _0x1ff441d7954f8709((*uParam0)[iVar0]->f_1))
		{
			_0xd2b9c78537ed5759((*uParam0)[iVar0]->f_1);
		}
		iVar0++;
	}
}

int func_257()
{
	return &Global_1899515;
}

void func_258(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_332(iParam0, iParam1, 1))
	{
		iVar0 = func_333(iParam1);
		iVar1 = func_334(iParam0);
		iVar2 = (func_334(iParam0) - func_334(iParam1));
		iVar3 = (func_333(iParam0) - func_333(iParam1));
		iVar4 = (func_335(iParam0) - func_335(iParam1));
		iVar5 = (func_336(iParam0) - func_336(iParam1));
		iVar6 = (func_337(iParam0) - func_337(iParam1));
		iVar7 = (func_338(iParam0) - func_338(iParam1));
	}
	else
	{
		iVar0 = func_333(iParam0);
		iVar1 = func_334(iParam1);
		iVar2 = (func_334(iParam1) - func_334(iParam0));
		iVar3 = (func_333(iParam1) - func_333(iParam0));
		iVar4 = (func_335(iParam1) - func_335(iParam0));
		iVar5 = (func_336(iParam1) - func_336(iParam0));
		iVar6 = (func_337(iParam1) - func_337(iParam0));
		iVar7 = (func_338(iParam1) - func_338(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_339(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_340(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

void func_259(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_260()
{
	return Global_1572887->f_12;
}

bool func_261()
{
	iVar0 = get_interior_at_coords(-348.416f, 699.4218f, 117.6852f);
	if (is_valid_interior(iVar0) && is_interior_ready(iVar0))
	{
		bVar1 = true;
		if (is_interior_entity_set_active(iVar0, "val_magiclantern_intgroup_closed"))
		{
			deactivate_interior_entity_set(iVar0, "val_magiclantern_intgroup_closed", true);
			bVar1 = false;
		}
		if (!is_interior_entity_set_active(iVar0, "val_magiclantern_intgroup_open"))
		{
			activate_interior_entity_set(iVar0, "val_magiclantern_intgroup_open", 0);
			bVar1 = false;
		}
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

void func_262(int iParam0, int iParam1, bool bParam2)
{
	func_324(iParam0, 0, 0);
	if (func_325(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_263(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	if (does_entity_exist(*uParam0))
	{
		if (uParam0->f_2 > fParam1 && uParam0->f_2 > uParam0->f_3)
		{
			fVar1 = (fParam3 - fParam2);
			fVar0 = (fVar1 / fParam3);
			uParam0->f_2 = func_341(fParam1, uParam0->f_4, fVar0);
			if (uParam0->f_2 < fParam1)
			{
				uParam0->f_2 = fParam1;
			}
		}
		fVar2 = pow(uParam0->f_2, to_float(iParam4));
		_0xf49574e2332a8f06(*uParam0, fVar2);
	}
}

void func_264(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	if (does_entity_exist(*uParam0))
	{
		if (uParam0->f_2 < fParam1 && uParam0->f_2 < uParam0->f_4)
		{
			fVar0 = (fParam2 / fParam3);
			uParam0->f_2 = func_341(uParam0->f_3, fParam1, fVar0);
			if (uParam0->f_2 > fParam1)
			{
				uParam0->f_2 = fParam1;
			}
			fVar1 = pow(uParam0->f_2, to_float(iParam4));
			_0xf49574e2332a8f06(*uParam0, fVar1);
		}
	}
}

bool func_265(int iParam0)
{
	return func_149(iParam0, Global_1310750->f_16072 | 64);
}

void func_266(int iParam0)
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

bool func_267(var uParam0, int iParam1, char* sParam2)
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

int func_268(int iParam0)
{
	if (iParam0 == -1458432563)
	{
		return -761111297;
	}
	else if (iParam0 == -2053326164)
	{
		return -761111297;
	}
	else if (iParam0 == 1599685341)
	{
		return -761111297;
	}
	return 41788943;
}

char* func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_01";
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_02";
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_03";
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_04";
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_05";
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_06";
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_07";
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_08";
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_09";
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_10";
		default:
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_ENTER";
}

char* func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_01";
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_02";
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_03";
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_04";
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_05";
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_06";
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_07";
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_08";
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_09";
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_10";
		default:
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_IDLE";
}

void func_271(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_342(iParam1))
		{
			func_199(iParam0, 41788943);
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
			func_343(iParam0, 0, 1);
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
			func_344(iParam0, 0);
			bVar0 = true;
		}
		func_345(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1;
		case 1:
			return -1;
		case 2:
			return -1;
		case 0:
			return 7;
		case 3:
			return -1;
		default:
			break;
	}
	return -1;
}

struct<11> func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2543.514f, -1303.811f, 47.16364f };
					Var0.f_3 = { 0f, 0f, 9.568836f };
					Var0.f_6 = { 4.336886f, 2f, 2.155625f };
					Var0.f_10 = "SHOW_BLOCKING_ROW1_LEFT";
					Var0.f_9 = -1612834106;
					break;
				case 1:
					Var0 = { 2549.294f, -1303.83f, 47.04182f };
					Var0.f_3 = { 0f, 0f, -9.89514f };
					Var0.f_6 = { 4.260345f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW1_RIGHT";
					Var0.f_9 = -1612834106;
					break;
				case 2:
					Var0 = { 2543.097f, -1302.039f, 47.34119f };
					Var0.f_3 = { 0f, 0f, 8.842982f };
					Var0.f_6 = { 5.463117f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW2_LEFT";
					Var0.f_9 = -1612834106;
					break;
				case 3:
					Var0 = { 2550.183f, -1302.069f, 47.34119f };
					Var0.f_3 = { 0f, 0f, -10.03278f };
					Var0.f_6 = { 4.277905f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW2_RIGHT";
					Var0.f_9 = -1612834106;
					break;
				case 4:
					Var0 = { 2542.933f, -1300.3f, 47.63106f };
					Var0.f_3 = { 0f, 0f, 9.537826f };
					Var0.f_6 = { 5.29451f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW3_LEFT";
					Var0.f_9 = -1612834106;
					break;
				case 5:
					Var0 = { 2550.596f, -1300.471f, 47.63106f };
					Var0.f_3 = { 0f, 0f, -9.448911f };
					Var0.f_6 = { 3.957135f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW3_RIGHT";
					Var0.f_9 = -1612834106;
					break;
				case 6:
					Var0 = { 2542.582f, -1298.776f, 47.90404f };
					Var0.f_3 = { 0f, 0f, 9.277945f };
					Var0.f_6 = { 4.706136f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW4_LEFT";
					Var0.f_9 = -1612834106;
					break;
				case 7:
					Var0 = { 2549.868f, -1298.625f, 47.904f };
					Var0.f_3 = { 0f, 0f, -9.896723f };
					Var0.f_6 = { 5.116724f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW4_RIGHT";
					Var0.f_9 = -1612834106;
					break;
			}
			break;
	}
	return Var0;
}

int func_274(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 53:
				case 54:
					return 2;
				case 55:
				case 56:
					return 1;
				default:
					break;
			}
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
	}
	return 0;
}

char* func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_170(0);
		case 1:
			return func_170(0);
		case 2:
			return func_170(2);
		case 3:
			return func_170(2);
		case 4:
			return func_170(3);
		case 5:
			return func_170(4);
		case 6:
			return func_170(5);
		case 7:
			return func_170(5);
		case 8:
			return func_170(6);
		case 9:
			return func_170(6);
		case 10:
			return func_170(6);
		case 11:
			return func_170(6);
		case 12:
			return func_170(7);
		case 13:
			return func_170(7);
		case 14:
			return func_170(8);
		case 15:
			return func_170(8);
		case 16:
			return func_170(1);
		case 17:
			return func_170(1);
		case 18:
			return func_170(1);
		case 19:
			return func_170(1);
		case 20:
			return func_170(1);
		case 21:
			return func_170(1);
		case 22:
			return func_170(1);
		case 23:
			return func_170(1);
		case 24:
			return func_170(1);
		case 25:
			return func_170(1);
		case 26:
			return func_170(9);
		case 27:
			return func_170(9);
		case 28:
			return func_170(9);
		case 29:
			return func_170(9);
		case 30:
			return func_170(9);
		case 31:
			return func_170(10);
		case 32:
			return func_170(10);
		case 33:
			return func_170(10);
		case 34:
			return func_170(11);
		default:
			break;
	}
	return "FAIL";
}

char* func_276(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_347(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_348(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_349(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_350(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_351(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_352(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_353(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_354(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_355(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_356(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_357(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_358(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_359(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_360(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_361(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_362(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_363(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_364(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_365(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_366(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_367(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_368(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_369(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_370(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_371(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_372(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_373(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_374(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_375(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_376(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_377(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_378(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_379(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_380(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_381(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_382(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_383(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_384(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_385(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_386(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_387(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_388(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_389(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_390(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_391(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_392(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_393(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_394(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_395(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_396(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_397(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_398(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_399(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_400(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_401(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_402(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_403(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_404(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_405(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_406(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_407(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_408(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_409(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_410(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_411(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_412(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_413(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_414(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_415(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_416(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_417(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_418(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_419(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_420(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_421(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_422(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_423(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_424(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_425(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_426(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_427(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_404(get_random_int_in_range(0, func_346(16, iParam1, iParam2)));
						case 2:
							return func_405(get_random_int_in_range(0, func_346(16, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_428(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_429(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_430(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_431(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_432(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_433(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_434(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_435(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_436(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_437(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_438(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_439(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_440(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 26:
			break;
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_441(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_442(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_443(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_444(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_445(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_442(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_443(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_446(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_447(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_442(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_443(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_448(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_449(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_442(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_443(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_450(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
			}
			break;
		case 31:
			break;
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_451(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_452(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_453(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_454(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_455(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_456(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_457(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_458(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_459(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_460(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_461(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 1:
							return func_458(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
						case 2:
							return func_459(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_462(get_random_int_in_range(0, func_346(iParam0, iParam1, iParam2)));
			}
			break;
	}
	return "FAIL";
}

float func_277()
{
	return get_random_float_in_range(0f, 0.25f);
}

int func_278(int iParam0)
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

void func_279(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_280(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_281(int iParam0, int iParam1)
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

bool func_282(int iParam0, int iParam1)
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

bool func_283(int iParam0, int iParam1)
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
	if (!func_281(iParam0, iVar0))
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

void func_284(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_285(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = get_indexed_item_in_itemset(iVar5, iVar0);
			iVar2 = iVar1;
			if ((does_entity_exist(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_463(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !decor_exist_on(iVar2, "bIgnoreThisPed"))
				{
					if (!func_464(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < get_num_models_in_population_set(iParam7))
							{
								if (is_ped_model(iVar2, get_ped_model_name_in_population_set(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!is_entity_dead(iVar2))
								{
									set_blocking_of_non_temporary_events(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	destroy_itemset(iVar0);
	return iVar4;
}

void func_286(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_287(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 5:
					return true;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 31:
					return true;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 39:
					return true;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 32:
					return true;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 4:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

void func_288(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_289(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
		case 4:
			return 1;
		case 0:
			if (func_465((*Global_1835011)[36]->f_1))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
		case 2:
			return 1;
	}
	return 0;
}

float func_290(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1f;
				case 1:
					return -1f;
				case 2:
					return 140f;
				case 3:
					return 137f;
				case 4:
					return 13f;
				case 5:
					return 4f;
				case 6:
					return -1f;
				case 7:
					return -1f;
				case 8:
					return -1f;
				case 9:
					return 134f;
				case 10:
					return 90f;
				case 11:
					return 52.5f;
				case 12:
					return 34.5f;
				case 13:
					return 7f;
				case 14:
					return -1f;
				case 15:
					return -1f;
				case 16:
					return -1f;
				case 17:
					return 149f;
				case 18:
					return 105f;
				case 19:
					return 75f;
				case 20:
					return 57f;
				case 21:
					return -1f;
				case 22:
					return -1f;
				case 23:
					return -1f;
				case 24:
					return 125f;
				case 25:
					return 109f;
				case 26:
					return 84f;
				case 27:
					return -1f;
				case 28:
					return -1f;
				case 29:
					return -1f;
				case 30:
					return 70.5f;
				case 31:
					return 47.5f;
				case 32:
					return 8.5f;
				case 33:
					return -1f;
				case 34:
					return -1f;
				case 35:
					return -1f;
				case 36:
					return 130f;
				case 37:
					return 114f;
				case 38:
					return 94f;
				case 39:
					return 0f;
				case 40:
					return -1f;
				case 41:
					return -1f;
				case 42:
					return -1f;
				case 43:
					return 145f;
				case 44:
					return 40f;
				case 45:
					return 27f;
				case 46:
					return -1f;
				case 47:
					return -1f;
				case 48:
					return -1f;
				case 49:
					return 120f;
				case 50:
					return 100f;
				case 51:
					return 81f;
				case 52:
					return 62f;
				case 53:
					return 0.5f;
				case 54:
					return 1.5f;
				case 55:
					return 1f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 44f;
				case 1:
					return 17f;
				case 2:
					return 23f;
				case 3:
					return 56f;
				case 4:
					return 60f;
				case 5:
					return 0f;
				case 6:
					return 10f;
				case 7:
					return 30f;
				case 8:
					return 37f;
				case 9:
					return 52f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 60f;
				case 1:
					return 46f;
				case 2:
					return 24f;
				case 3:
					return 8f;
				case 4:
					return 12f;
				case 5:
					return 31f;
				case 6:
					return 44f;
				case 7:
					return 40f;
				case 8:
					return 21f;
				case 9:
					return 0f;
				case 10:
					return 4f;
				case 11:
					return 54f;
				case 12:
					return 58f;
				case 13:
					return 36f;
				case 14:
					return 17f;
				case 15:
					return 28f;
				case 16:
					return 70f;
				case 17:
					return 65f;
				case 18:
					return 50f;
				case 19:
					return 33f;
				case 20:
					return 1.5f;
				case 21:
					return 62f;
				default:
					break;
			}
			return 75f;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 60f;
				case 1:
					return 46f;
				case 2:
					return 24f;
				case 3:
					return 8f;
				case 4:
					return 12f;
				case 5:
					return 31f;
				case 6:
					return 44f;
				case 7:
					return 40f;
				case 8:
					return 21f;
				case 9:
					return 0f;
				case 10:
					return 4f;
				case 11:
					return 54f;
				case 12:
					return 58f;
				case 13:
					return 36f;
				case 14:
					return 17f;
				case 15:
					return 28f;
				case 16:
					return 70f;
				case 17:
					return 65f;
				case 18:
					return 50f;
				case 19:
					return 33f;
				case 20:
					return 1.5f;
				case 21:
					return 62f;
				case 22:
					return 72f;
				default:
					break;
			}
			return 75f;
	}
	return 20f;
}

float func_291(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_292(var uParam0)
{
	vVar0 = { get_entity_coords(*uParam0, true, false) };
	vVar3 = { Global_36 - vVar0 };
	vVar6 = { Vector(49.51665f, -1308.839f, 2546.548f) - vVar0 };
	vVar3 = { func_216(vVar3) };
	vVar6 = { func_216(vVar6) };
	if (func_217(vVar6, vVar3) > 0.95f)
	{
		return true;
	}
	return false;
}

void func_293(int* iParam0, int iParam1)
{
	if ((does_entity_exist(*iParam0) && !iParam0->f_9) && iParam0->f_5 != -1)
	{
		iVar0 = 2;
		if (is_ped_male(*iParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_176(iParam1, iParam0->f_2) };
		fVar4 = func_177(iParam1, iParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_274(iParam1, iParam0->f_2);
		iParam0->f_6 = -1;
		iParam0->f_7 = func_275(iParam0->f_5);
		iParam0->f_8 = func_276(iParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			task_play_anim_advanced(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, func_277(), 2, 1, 0);
		}
		else
		{
			task_play_anim_advanced(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, func_277(), 2, 0, 0);
		}
	}
	if (!iParam0->f_9)
	{
		iParam0->f_5 = -1;
		iParam0->f_6 = -1;
	}
}

int func_294(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 15;
	}
	else if (iParam0 >= 27 && iParam0 <= 52)
	{
		return 14;
	}
	else if (iParam0 >= 53 && iParam0 <= 55)
	{
		return 2;
	}
	return 2;
}

bool func_295(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return false;
				case 1:
					return false;
				case 2:
					return false;
				case 3:
					return false;
				case 4:
					return false;
				case 5:
					return false;
				case 6:
					return false;
				case 7:
					return false;
				case 8:
					return false;
				case 9:
					return false;
				case 10:
					return false;
				case 11:
					return false;
				case 12:
					return false;
				case 13:
					return false;
				case 14:
					return false;
				case 15:
					return false;
				case 16:
					return false;
				case 17:
					return false;
				case 18:
					return false;
				case 19:
					return false;
				case 20:
					return false;
				case 21:
					return false;
				case 22:
					return false;
				case 23:
					return false;
				case 24:
					return false;
				case 25:
					return false;
				case 26:
					return false;
				case 27:
					return false;
				case 28:
					return false;
				case 29:
					return false;
				case 30:
					return false;
				case 31:
					return false;
				case 32:
					return false;
				case 33:
					return false;
				case 34:
					return false;
				case 35:
					return false;
				case 36:
					return false;
				case 37:
					return false;
				case 38:
					return false;
				case 39:
					return false;
				case 40:
					return false;
				case 41:
					return false;
				case 42:
					return false;
				case 43:
					return false;
				case 44:
					return false;
				case 45:
					return false;
				case 46:
					return false;
				case 47:
					return false;
				case 48:
					return false;
				case 49:
					return false;
				case 50:
					return false;
				case 51:
					return false;
				case 52:
					return false;
				case 53:
					return false;
				case 54:
					return false;
				case 55:
					return false;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					return true;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
					return true;
				case 9:
					return false;
				case 10:
				case 11:
					return true;
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
					return false;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
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
					return true;
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
					return false;
				default:
					break;
			}
			break;
	}
	return false;
}

Vector3 func_296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 3:
			return -346.8185f, 692.4758f, 118.2631f;
		case 1:
		case 2:
			return 2700.367f, -1349.699f, 49.78757f;
		case 4:
			return -772.6649f, -1362.613f, 45.39102f;
	}
	return 0f, 0f, 0f;
}

void func_297(var uParam0, vector3 vParam1, int iParam4)
{
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0 = { vParam1 };
	Var0.f_3 = 0;
	Var0.f_8 = 4;
	Var0.f_13 = 3;
	Var0.f_7 = iParam4;
	_0x66f9eb44342bb4c5(*uParam0, &Var0);
}

void func_298(var uParam0, int iParam1)
{
	if ((does_entity_exist(*uParam0) && uParam0->f_6 != -1) && !uParam0->f_9)
	{
		iVar0 = 2;
		if (is_ped_male(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_176(iParam1, uParam0->f_2) };
		fVar4 = func_177(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_274(iParam1, uParam0->f_2);
		if (uParam0->f_6 == 26)
		{
			iVar9 = func_466(uParam0->f_2);
			uParam0->f_6 = iVar9;
			uParam0->f_7 = func_275(uParam0->f_6);
			uParam0->f_8 = func_276(uParam0->f_6, iVar0, iVar8);
		}
		else if (uParam0->f_6 == 31)
		{
			iVar10 = func_467(uParam0->f_2);
			uParam0->f_6 = iVar10;
			uParam0->f_7 = func_275(uParam0->f_6);
			uParam0->f_8 = func_276(uParam0->f_6, iVar0, iVar8);
		}
		else
		{
			uParam0->f_7 = func_275(uParam0->f_6);
			uParam0->f_8 = func_276(uParam0->f_6, iVar0, iVar8);
		}
		if (iVar8 == 0)
		{
			task_play_anim_advanced(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 1, 0);
		}
		else
		{
			task_play_anim_advanced(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 0, 0);
		}
	}
}

void func_299(var uParam0, int* iParam1)
{
	fVar0 = 0f;
	bVar1 = false;
	if (_does_anim_scene_exist(Global_1394141->f_1335))
	{
		fVar0 = _get_anim_scene_progress(Global_1394141->f_1335);
		bVar1 = true;
	}
	switch (*uParam0)
	{
		case 9:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (_0x1f0e401031e20146(Global_1394141->f_1335, "PL_A_Performance") && fVar0 > 0.82f)
						{
							set_anim_scene_entity(Global_1394141->f_1335, "Crowd_Member", *iParam1, 0);
							func_288(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (_0x1f0e401031e20146(Global_1394141->f_1335, "PL_A_Performance") && fVar0 > 0.9f)
						{
							func_293(iParam1, 0);
							func_288(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (_0x1f0e401031e20146(Global_1394141->f_1335, "PL_D_LOOP_2_Challenge_Crowd") && fVar0 > 0.95f)
						{
							set_anim_scene_entity(Global_1394141->f_1335, "Crowd_Member", *iParam1, 0);
							func_288(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 12:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (_0x1f0e401031e20146(Global_1394141->f_1335, "Pl_BreathLoop"))
						{
							set_anim_scene_entity(Global_1394141->f_1335, "male", *iParam1, 0);
							func_288(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (_0x1f0e401031e20146(Global_1394141->f_1335, "Pl_BreathFail") && _0x005e6f28dd7ed58d(Global_1394141->f_1335, "male"))
						{
							force_ped_motion_state(*iParam1, -668482597, false, 0, false);
							task_follow_nav_mesh_to_coord(*iParam1, 2504.978f, -1245.074f, 48.2112f, 1f, -1, 0.25f, 0, 40000f);
							func_288(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (func_468(*iParam1, 713668775))
						{
							set_ped_keep_task(*iParam1, true);
							func_323(*iParam1);
							*iParam1 = 0;
							Global_1394141->f_1334 = 0;
							func_288(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 10:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (get_anim_scene_bool(Global_1394141->f_1335, "BoolLoop"))
						{
							delete_ped(iParam1);
							*iParam1 = 0;
							Global_1394141->f_1334 = 0;
							func_288(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						break;
				}
			}
			break;
		case 15:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (_0x1f0e401031e20146(Global_1394141->f_1335, "pbl_CrowdChallenge_P2") && _0x005e6f28dd7ed58d(Global_1394141->f_1335, "CrowdMember"))
						{
							delete_ped(iParam1);
							*iParam1 = 0;
							func_288(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						Global_1394141->f_1334 = 0;
						break;
				}
			}
			else if (does_entity_exist(*iParam1))
			{
				delete_ped(iParam1);
				*iParam1 = 0;
				Global_1394141->f_1334 = 0;
			}
			break;
		case 20:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (((_does_anim_scene_exist(Global_1394141->f_1335) && _is_anim_scene_started(Global_1394141->f_1335, false)) && _0x1f0e401031e20146(Global_1394141->f_1335, "pl_Performance")) && _0x8d81e7824b7753f7(Global_1394141->f_1335, "s_Performance_P2", 1))
						{
							func_288(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (func_2(Global_1394141->f_1326, 2048) && _get_anim_scene_progress(Global_1394141->f_1335) > 0.96f)
						{
							remove_anim_scene_entity(Global_1394141->f_1335, "CS_GENSTORYMALE", *iParam1);
							set_entity_coords(*iParam1, 2538.857f, -1312.293f, 48.21665f, true, false, true, true);
							delete_ped(iParam1);
							*iParam1 = 0;
							Global_1394141->f_1334 = 0;
							func_288(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						break;
				}
			}
			else
			{
				iParam1->f_5 = 2;
				func_293(iParam1, 0);
				Global_1394141->f_1334 = 0;
			}
			break;
	}
}

Vector3 func_300(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -307.226f, 789.081f, 116.7509f;
		case 4:
			return -836.5425f, -1317.775f, 42.55259f;
		case 1:
		case 2:
			return 2631.464f, -1288.41f, 51.26936f;
		case 0:
			return 2546.444f, -1287.778f, 48.21795f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_301(vector3 vParam0)
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

int func_302(int iParam0)
{
	return iParam0;
}

void func_303(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_304(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_307(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_305(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_306(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_307(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 3;
		case 7:
			return 4;
		case 8:
			return 3;
		case 5:
			return 4;
		case 6:
			return 4;
		case 10:
			return 3;
		case 11:
			return 3;
		case 15:
			return 3;
		case 18:
			return 3;
		case 12:
			return 5;
		case 16:
			return 5;
		case 17:
			return 5;
		case 20:
			return 2;
		case 13:
			return 5;
		case 14:
			return 5;
		case 19:
			return 3;
		default:
			break;
	}
	return 0;
}

Vector3 func_309(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(1) };
						}
						else
						{
							vVar0 = { func_469(3) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(0) };
					}
					else
					{
						vVar0 = { func_469(2) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(13) };
						}
						else
						{
							vVar0 = { func_469(15) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(12) };
					}
					else
					{
						vVar0 = { func_469(14) };
					}
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(25) };
						}
						else
						{
							vVar0 = { func_469(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(24) };
					}
					else
					{
						vVar0 = { func_469(26) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(25) };
						}
						else
						{
							vVar0 = { func_469(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(24) };
					}
					else
					{
						vVar0 = { func_469(26) };
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(1) };
						}
						else
						{
							vVar0 = { func_469(3) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(0) };
					}
					else
					{
						vVar0 = { func_469(2) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(17) };
						}
						else
						{
							vVar0 = { func_469(19) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(16) };
					}
					else
					{
						vVar0 = { func_469(18) };
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(29) };
						}
						else
						{
							vVar0 = { func_469(31) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(28) };
					}
					else
					{
						vVar0 = { func_469(30) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(33) };
						}
						else
						{
							vVar0 = { func_469(35) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(32) };
					}
					else
					{
						vVar0 = { func_469(34) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(37) };
						}
						else
						{
							vVar0 = { func_469(39) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(36) };
					}
					else
					{
						vVar0 = { func_469(38) };
					}
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(41) };
						}
						else
						{
							vVar0 = { func_469(43) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(40) };
					}
					else
					{
						vVar0 = { func_469(42) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(21) };
						}
						else
						{
							vVar0 = { func_469(23) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(20) };
					}
					else
					{
						vVar0 = { func_469(22) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(25) };
						}
						else
						{
							vVar0 = { func_469(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(24) };
					}
					else
					{
						vVar0 = { func_469(26) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(29) };
						}
						else
						{
							vVar0 = { func_469(31) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(28) };
					}
					else
					{
						vVar0 = { func_469(30) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(33) };
						}
						else
						{
							vVar0 = { func_469(35) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(32) };
					}
					else
					{
						vVar0 = { func_469(34) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(37) };
						}
						else
						{
							vVar0 = { func_469(39) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(36) };
					}
					else
					{
						vVar0 = { func_469(38) };
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(45) };
						}
						else
						{
							vVar0 = { func_469(47) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(44) };
					}
					else
					{
						vVar0 = { func_469(46) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(49) };
						}
						else
						{
							vVar0 = { func_469(51) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(48) };
					}
					else
					{
						vVar0 = { func_469(50) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(53) };
						}
						else
						{
							vVar0 = { func_469(55) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(52) };
					}
					else
					{
						vVar0 = { func_469(54) };
					}
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(25) };
						}
						else
						{
							vVar0 = { func_469(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(24) };
					}
					else
					{
						vVar0 = { func_469(26) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(61) };
						}
						else
						{
							vVar0 = { func_469(63) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(60) };
					}
					else
					{
						vVar0 = { func_469(62) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(65) };
						}
						else
						{
							vVar0 = { func_469(67) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(64) };
					}
					else
					{
						vVar0 = { func_469(66) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(73) };
						}
						else
						{
							vVar0 = { func_469(75) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(72) };
					}
					else
					{
						vVar0 = { func_469(74) };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(5) };
						}
						else
						{
							vVar0 = { func_469(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(4) };
					}
					else
					{
						vVar0 = { func_469(6) };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_469(9) };
						}
						else
						{
							vVar0 = { func_469(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_469(8) };
					}
					else
					{
						vVar0 = { func_469(10) };
					}
					break;
				case 3:
					break;
			}
			break;
	}
	return vVar0;
}

bool func_310(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 15:
		case 18:
		case 20:
			return false;
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 16:
		case 17:
		case 19:
			return true;
		default:
			break;
	}
	return false;
}

bool func_311(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_465((*Global_1835011)[iParam0]->f_1);
}

bool func_312(int iParam0)
{
	if (!_does_anim_scene_exist(iParam0->f_48) || !_is_anim_scene_started(iParam0->f_48, false))
	{
		return false;
	}
	fVar0 = _get_anim_scene_progress(iParam0->f_48);
	switch (*iParam0)
	{
		case 9:
			if (_0x1f0e401031e20146(iParam0->f_48, "PL_A_Performance"))
			{
				if (fVar0 > 0.73f && fVar0 < 0.76f)
				{
					return true;
				}
			}
			break;
		case 7:
			if (_0x1f0e401031e20146(iParam0->f_48, "PL_P1"))
			{
				if (fVar0 > 0.26f && fVar0 < 0.28f)
				{
					return true;
				}
				if (fVar0 > 0.72f && fVar0 < 0.8f)
				{
					return true;
				}
			}
			break;
		case 8:
			break;
		case 10:
			break;
		case 11:
			break;
		case 15:
			if (_0x1f0e401031e20146(iParam0->f_48, "pbl_CrowdChallenge_P1"))
			{
				return true;
			}
			break;
		case 20:
			break;
		case 18:
			if (_0x1f0e401031e20146(iParam0->f_48, "Pbl_Intro"))
			{
				if (fVar0 > 0.95f && fVar0 < 1f)
				{
					return true;
				}
			}
			break;
		case 5:
		case 6:
			break;
		case 12:
			if (_0x1f0e401031e20146(iParam0->f_48, "Pl_BreathLoop"))
			{
				return true;
			}
			break;
		case 13:
		case 14:
			break;
		case 16:
			if (_0x1f0e401031e20146(iParam0->f_48, "PL_KissLoop"))
			{
				return true;
			}
			break;
		case 17:
			if (_0x1f0e401031e20146(iParam0->f_48, "PL_KissLoop"))
			{
				return true;
			}
			break;
		case 19:
			return false;
	}
	return false;
}

bool func_313(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_470(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

void func_314(int iParam0)
{
	switch (iParam0->f_1052)
	{
		case 0:
		case 1:
		case 2:
			iParam0->f_944 = 0;
			func_54(func_52(0), func_53());
			break;
		case 3:
		case 4:
			iParam0->f_944 = 1;
			func_54(func_52(1), func_53());
			break;
		default:
			iParam0->f_944 = 2;
			func_54(func_52(2), func_53());
			break;
	}
}

char* func_315(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_08_maryjohnapplause";
		case 1:
			return "idle_08_maryjohnapplause_standing";
		default:
			break;
	}
	return "idle_08_maryjohnapplause_standing";
}

void func_316(int iParam0)
{
	switch (iParam0->f_1052)
	{
		case 0:
			iParam0->f_944 = 0;
			func_54(func_52(0), func_53());
			break;
		case -2:
		case -1:
			iParam0->f_944 = 3;
			func_54(func_52(3), func_53());
			break;
		case -4:
		case -3:
			iParam0->f_944 = 4;
			func_54(func_52(4), func_53());
			break;
		default:
			iParam0->f_944 = 5;
			func_54(func_52(5), func_53());
			break;
	}
}

int func_317(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_307(iVar0, 2))
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
				func_322(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		case 1:
			return 14;
		case 2:
			return 15;
		case 3:
			return 16;
		case 4:
			return 17;
		case 5:
			return 18;
		case 6:
			return 19;
		case 7:
			return 20;
		case 8:
			return 21;
		case 9:
			return 22;
		case 10:
			return 23;
		case 11:
			return 24;
		case 12:
			return 25;
		case 13:
			return 26;
		case 14:
			return 27;
		case 15:
			return 28;
		case 16:
			return 29;
		default:
			break;
	}
	return 0;
}

void func_319(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_471(1);
	}
}

void func_320(int iParam0)
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
			func_319(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_471(1);
	}
}

void func_321(int iParam0)
{
	if (!func_472(iParam0))
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

void func_322(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_304(iParam0, 1);
	func_305(iParam0, 1);
	func_306(iParam0, 128);
}

void func_323(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		set_ped_can_be_targetted(iParam0, true);
		set_blocking_of_non_temporary_events(iParam0, false);
		set_ped_relationship_group_hash(iParam0, 623901053);
		set_ped_as_no_longer_needed(&iParam0);
	}
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

bool func_325(int iParam0)
{
	if (func_473(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

int func_326(int iParam0, int iParam1)
{
	if (func_260() == 0)
	{
		return 0;
	}
	func_324(iParam0, 0, 0);
	if (func_325(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, 0);
		if (iVar0 != 0)
		{
			return _0x0943113e02322164(get_object_index_from_entity_index(iVar0), iParam1);
		}
	}
	return 0;
}

void func_327(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_325(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_328(int iParam0, bool bParam1)
{
	if (func_325(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_329(int iParam0, bool bParam1)
{
	if (func_325(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_330(int iParam0, bool bParam1)
{
	if (func_325(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_331()
{
	return true;
}

bool func_332(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_474(iParam1) || !func_474(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_333(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_334(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_475(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_335(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_336(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_337(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_338(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_339(int iParam0, int iParam1)
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

float func_340(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

float func_341(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_342(int iParam0)
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

void func_343(int iParam0, int iParam1, bool bParam2)
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

void func_344(int iParam0, bool bParam1)
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

void func_345(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

int func_346(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 26:
			return 0;
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 1;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 12;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

char* func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(4);
		case 1:
			return func_476(5);
		case 2:
			return func_476(6);
		case 3:
			return func_476(7);
		default:
			break;
	}
	return func_476(4);
}

char* func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(14);
		default:
			break;
	}
	return func_476(14);
}

char* func_349(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(16);
		default:
			break;
	}
	return func_476(16);
}

char* func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(0);
		case 1:
			return func_476(1);
		default:
			break;
	}
	return func_476(0);
}

char* func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(8);
		case 1:
			return func_476(9);
		case 2:
			return func_476(10);
		case 3:
			return func_476(11);
		default:
			break;
	}
	return func_476(8);
}

char* func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(15);
		default:
			break;
	}
	return func_476(15);
}

char* func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(17);
		default:
			break;
	}
	return func_476(17);
}

char* func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(2);
		case 1:
			return func_476(3);
		default:
			break;
	}
	return func_476(2);
}

char* func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(8);
		case 1:
			return func_477(9);
		case 2:
			return func_477(12);
		case 3:
			return func_477(13);
		case 4:
			return func_477(14);
		case 5:
			return func_477(15);
		case 6:
			return func_477(18);
		case 7:
			return func_477(19);
		default:
			break;
	}
	return func_477(8);
}

char* func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(26);
		case 1:
			return func_477(27);
		default:
			break;
	}
	return func_477(26);
}

char* func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(30);
		case 1:
			return func_477(31);
		default:
			break;
	}
	return func_477(30);
}

char* func_358(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(0);
		case 1:
			return func_477(1);
		case 2:
			return func_477(4);
		case 3:
			return func_477(5);
		default:
			break;
	}
	return func_477(0);
}

char* func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(10);
		case 1:
			return func_477(11);
		case 2:
			return func_477(16);
		case 3:
			return func_477(17);
		case 4:
			return func_477(20);
		case 5:
			return func_477(21);
		default:
			break;
	}
	return func_477(10);
}

char* func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(28);
		case 1:
			return func_477(29);
		default:
			break;
	}
	return func_477(28);
}

char* func_361(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(32);
		case 1:
			return func_477(33);
		default:
			break;
	}
	return func_477(32);
}

char* func_362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(2);
		case 1:
			return func_477(3);
		case 2:
			return func_477(6);
		case 3:
			return func_477(7);
		default:
			break;
	}
	return func_477(2);
}

char* func_363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(2);
		case 1:
			return func_478(3);
		case 2:
			return func_478(4);
		case 3:
			return func_478(5);
		default:
			break;
	}
	return func_478(2);
}

char* func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(7);
		default:
			break;
	}
	return func_478(7);
}

char* func_365(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(8);
		default:
			break;
	}
	return func_478(8);
}

char* func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(0);
		case 1:
			return func_478(1);
		default:
			break;
	}
	return func_478(0);
}

char* func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(4);
		case 1:
			return func_479(5);
		case 2:
			return func_479(6);
		case 3:
			return func_479(7);
		case 4:
			return func_479(8);
		case 5:
			return func_479(9);
		case 6:
			return func_479(10);
		case 7:
			return func_479(11);
		default:
			break;
	}
	return func_479(4);
}

char* func_368(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(14);
		case 1:
			return func_479(15);
		default:
			break;
	}
	return func_479(14);
}

char* func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(16);
		case 1:
			return func_479(17);
		default:
			break;
	}
	return func_479(16);
}

char* func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(0);
		case 1:
			return func_479(1);
		case 2:
			return func_479(2);
		case 3:
			return func_479(3);
		default:
			break;
	}
	return func_479(0);
}

char* func_371(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(8);
		case 1:
			return func_480(9);
		case 2:
			return func_480(12);
		case 3:
			return func_480(13);
		case 4:
			return func_480(16);
		case 5:
			return func_480(17);
		default:
			break;
	}
	return func_480(8);
}

char* func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(24);
		case 1:
			return func_480(25);
		default:
			break;
	}
	return func_480(24);
}

char* func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(28);
		case 1:
			return func_480(29);
		default:
			break;
	}
	return func_480(28);
}

char* func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(0);
		case 1:
			return func_480(1);
		case 2:
			return func_480(4);
		case 3:
			return func_480(5);
		default:
			break;
	}
	return func_480(0);
}

char* func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(10);
		case 1:
			return func_480(11);
		case 2:
			return func_480(14);
		case 3:
			return func_480(15);
		case 4:
			return func_480(18);
		case 5:
			return func_480(19);
		default:
			break;
	}
	return func_480(10);
}

char* func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(26);
		case 1:
			return func_480(27);
		default:
			break;
	}
	return func_480(26);
}

char* func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(30);
		case 1:
			return func_480(31);
		default:
			break;
	}
	return func_480(30);
}

char* func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(2);
		case 1:
			return func_480(3);
		case 2:
			return func_480(6);
		case 3:
			return func_480(7);
		default:
			break;
	}
	return func_480(2);
}

char* func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(11);
		case 1:
			return func_481(15);
		case 2:
			return func_481(19);
		default:
			break;
	}
	return func_481(11);
}

char* func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(27);
		default:
			break;
	}
	return func_481(27);
}

char* func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(31);
		default:
			break;
	}
	return func_481(31);
}

char* func_382(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(3);
		case 1:
			return func_481(7);
		default:
			break;
	}
	return func_481(3);
}

char* func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(10);
		case 1:
			return func_481(14);
		case 2:
			return func_481(18);
		default:
			break;
	}
	return func_481(10);
}

char* func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(26);
		default:
			break;
	}
	return func_481(26);
}

char* func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(30);
		default:
			break;
	}
	return func_481(30);
}

char* func_386(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(2);
		case 1:
			return func_481(6);
		default:
			break;
	}
	return func_481(2);
}

char* func_387(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(9);
		case 1:
			return func_481(13);
		case 2:
			return func_481(17);
		default:
			break;
	}
	return func_481(9);
}

char* func_388(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(25);
		default:
			break;
	}
	return func_481(25);
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(29);
		default:
			break;
	}
	return func_481(29);
}

char* func_390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(1);
		case 1:
			return func_481(5);
		default:
			break;
	}
	return func_481(0);
}

char* func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(8);
		case 1:
			return func_481(12);
		case 2:
			return func_481(16);
		default:
			break;
	}
	return func_481(8);
}

char* func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(24);
		default:
			break;
	}
	return func_481(24);
}

char* func_393(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(28);
		default:
			break;
	}
	return func_481(28);
}

char* func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_481(0);
		case 1:
			return func_481(4);
		default:
			break;
	}
	return func_481(0);
}

char* func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_482(4);
		case 1:
			return func_482(6);
		case 2:
			return func_482(8);
		default:
			break;
	}
	return func_482(4);
}

char* func_396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_482(12);
		default:
			break;
	}
	return func_482(12);
}

char* func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_482(14);
		default:
			break;
	}
	return func_482(14);
}

char* func_398(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_482(0);
		case 1:
			return func_482(2);
		default:
			break;
	}
	return func_482(0);
}

char* func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_482(5);
		case 1:
			return func_482(7);
		case 2:
			return func_482(9);
		default:
			break;
	}
	return func_482(5);
}

char* func_400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_482(13);
		default:
			break;
	}
	return func_482(13);
}

char* func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_482(15);
		default:
			break;
	}
	return func_482(15);
}

char* func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_482(1);
		case 1:
			return func_482(3);
		default:
			break;
	}
	return func_482(1);
}

char* func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(56);
		case 1:
			return func_483(70);
		case 2:
			return func_483(84);
		default:
			break;
	}
	return func_483(56);
}

char* func_404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(0);
		default:
			break;
	}
	return func_483(0);
}

char* func_405(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(14);
		default:
			break;
	}
	return func_483(14);
}

char* func_406(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(28);
		case 1:
			return func_483(42);
		default:
			break;
	}
	return func_483(42);
}

char* func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(57);
		case 1:
			return func_483(58);
		case 2:
			return func_483(71);
		case 3:
			return func_483(72);
		case 4:
			return func_483(85);
		case 5:
			return func_483(86);
		default:
			break;
	}
	return func_483(57);
}

char* func_408(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(1);
		case 1:
			return func_483(2);
		default:
			break;
	}
	return func_483(1);
}

char* func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(15);
		case 1:
			return func_483(16);
		default:
			break;
	}
	return func_483(15);
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(29);
		case 1:
			return func_483(30);
		case 2:
			return func_483(43);
		case 3:
			return func_483(44);
		default:
			break;
	}
	return func_483(43);
}

char* func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(59);
		case 1:
			return func_483(60);
		case 2:
			return func_483(73);
		case 3:
			return func_483(74);
		case 4:
			return func_483(87);
		case 5:
			return func_483(88);
		default:
			break;
	}
	return func_483(59);
}

char* func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(3);
		case 1:
			return func_483(4);
		default:
			break;
	}
	return func_483(3);
}

char* func_413(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(17);
		case 1:
			return func_483(18);
		default:
			break;
	}
	return func_483(17);
}

char* func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(31);
		case 1:
			return func_483(32);
		case 2:
			return func_483(45);
		case 3:
			return func_483(46);
		default:
			break;
	}
	return func_483(42);
}

char* func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(63);
		case 1:
			return func_483(77);
		case 2:
			return func_483(91);
		default:
			break;
	}
	return func_483(63);
}

char* func_416(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(7);
		default:
			break;
	}
	return func_483(7);
}

char* func_417(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(21);
		default:
			break;
	}
	return func_483(21);
}

char* func_418(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(35);
		case 1:
			return func_483(49);
		default:
			break;
	}
	return func_483(35);
}

char* func_419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(62);
		case 1:
			return func_483(76);
		case 2:
			return func_483(90);
		default:
			break;
	}
	return func_483(62);
}

char* func_420(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(6);
		default:
			break;
	}
	return func_483(6);
}

char* func_421(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(20);
		default:
			break;
	}
	return func_483(20);
}

char* func_422(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(34);
		case 1:
			return func_483(48);
		default:
			break;
	}
	return func_483(34);
}

char* func_423(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(61);
		case 1:
			return func_483(75);
		case 2:
			return func_483(89);
		default:
			break;
	}
	return func_483(61);
}

char* func_424(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(5);
		default:
			break;
	}
	return func_483(5);
}

char* func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(19);
		default:
			break;
	}
	return func_483(19);
}

char* func_426(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(33);
		case 1:
			return func_483(47);
		default:
			break;
	}
	return func_483(33);
}

char* func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(65);
		case 1:
			return func_483(79);
		case 2:
			return func_483(93);
		default:
			break;
	}
	return func_483(65);
}

char* func_428(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(37);
		case 1:
			return func_483(51);
		default:
			break;
	}
	return func_483(37);
}

char* func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(64);
		case 1:
			return func_483(78);
		case 2:
			return func_483(92);
		default:
			break;
	}
	return func_483(64);
}

char* func_430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(8);
		default:
			break;
	}
	return func_483(8);
}

char* func_431(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(22);
		default:
			break;
	}
	return func_483(22);
}

char* func_432(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(36);
		case 1:
			return func_483(50);
		default:
			break;
	}
	return func_483(36);
}

char* func_433(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(66);
		case 1:
			return func_483(67);
		case 2:
			return func_483(80);
		case 3:
			return func_483(81);
		case 4:
			return func_483(94);
		case 5:
			return func_483(95);
		default:
			break;
	}
	return func_483(66);
}

char* func_434(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(10);
		case 1:
			return func_483(11);
		default:
			break;
	}
	return func_483(10);
}

char* func_435(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(24);
		case 1:
			return func_483(25);
		default:
			break;
	}
	return func_483(24);
}

char* func_436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(38);
		case 1:
			return func_483(39);
		case 2:
			return func_483(52);
		case 3:
			return func_483(53);
		default:
			break;
	}
	return func_483(38);
}

char* func_437(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(68);
		case 1:
			return func_483(69);
		case 2:
			return func_483(82);
		case 3:
			return func_483(83);
		case 4:
			return func_483(96);
		case 5:
			return func_483(97);
		default:
			break;
	}
	return func_483(68);
}

char* func_438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(12);
		case 1:
			return func_483(13);
		default:
			break;
	}
	return func_483(12);
}

char* func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(26);
		case 1:
			return func_483(27);
		default:
			break;
	}
	return func_483(26);
}

char* func_440(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(40);
		case 1:
			return func_483(41);
		case 2:
			return func_483(54);
		case 3:
			return func_483(55);
		default:
			break;
	}
	return func_483(40);
}

char* func_441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(109);
		case 1:
			return func_483(110);
		case 2:
			return func_483(111);
		default:
			break;
	}
	return func_483(109);
}

char* func_442(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(98);
		default:
			break;
	}
	return func_483(98);
}

char* func_443(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(99);
		default:
			break;
	}
	return func_483(99);
}

char* func_444(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(102);
		case 1:
			return func_483(103);
		default:
			break;
	}
	return func_483(102);
}

char* func_445(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(108);
		default:
			break;
	}
	return func_483(108);
}

char* func_446(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(100);
		case 1:
			return func_483(101);
		default:
			break;
	}
	return func_483(100);
}

char* func_447(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(112);
		case 1:
			return func_483(113);
		case 2:
			return func_483(114);
		default:
			break;
	}
	return func_483(112);
}

char* func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(104);
		case 1:
			return func_483(105);
		default:
			break;
	}
	return func_483(104);
}

char* func_449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(115);
		case 1:
			return func_483(116);
		case 2:
			return func_483(117);
		default:
			break;
	}
	return func_483(115);
}

char* func_450(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(106);
		case 1:
			return func_483(107);
		default:
			break;
	}
	return func_483(106);
}

char* func_451(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(122);
		case 1:
			return func_483(124);
		case 2:
			return func_483(126);
		case 3:
			return func_483(128);
		case 4:
			return func_483(130);
		case 5:
			return func_483(132);
		default:
			break;
	}
	return func_483(122);
}

char* func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(118);
		case 1:
			return func_483(120);
		default:
			break;
	}
	return func_483(118);
}

char* func_453(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(123);
		case 1:
			return func_483(125);
		case 2:
			return func_483(127);
		case 3:
			return func_483(129);
		case 4:
			return func_483(131);
		case 5:
			return func_483(133);
		default:
			break;
	}
	return func_483(123);
}

char* func_454(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(119);
		case 1:
			return func_483(121);
		default:
			break;
	}
	return func_483(119);
}

char* func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(138);
		case 1:
			return func_483(139);
		case 2:
			return func_483(140);
		case 3:
			return func_483(141);
		case 4:
			return func_483(142);
		case 5:
			return func_483(143);
		case 6:
			return func_483(144);
		case 7:
			return func_483(145);
		case 8:
			return func_483(146);
		case 9:
			return func_483(147);
		case 10:
			return func_483(148);
		case 11:
			return func_483(149);
		default:
			break;
	}
	return func_483(138);
}

char* func_456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_483(134);
		case 1:
			return func_483(135);
		case 2:
			return func_483(136);
		case 3:
			return func_483(137);
		default:
			break;
	}
	return func_483(134);
}

char* func_457(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_484(6);
		case 1:
			return func_484(7);
		case 2:
			return func_484(9);
		case 3:
			return func_484(10);
		case 4:
			return func_484(12);
		case 5:
			return func_484(13);
		default:
			break;
	}
	return func_484(6);
}

char* func_458(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_484(16);
		case 1:
			return func_484(19);
		default:
			break;
	}
	return func_484(16);
}

char* func_459(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_484(17);
		case 1:
			return func_484(20);
		default:
			break;
	}
	return func_484(17);
}

char* func_460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_484(0);
		case 1:
			return func_484(1);
		case 2:
			return func_484(3);
		case 3:
			return func_484(4);
		default:
			break;
	}
	return func_484(0);
}

char* func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_484(6);
		case 1:
			return func_484(8);
		case 2:
			return func_484(9);
		case 3:
			return func_484(11);
		case 4:
			return func_484(12);
		case 5:
			return func_484(14);
		default:
			break;
	}
	return func_484(6);
}

char* func_462(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_484(0);
		case 1:
			return func_484(2);
		case 2:
			return func_484(3);
		case 3:
			return func_484(5);
		default:
			break;
	}
	return func_484(0);
}

bool func_463(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!bParam5 && !is_ped_human(iParam0))
	{
		return false;
	}
	if (is_ped_a_player(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (is_entity_a_mission_entity(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_485(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (is_ped_on_mount(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_486(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_464(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_465(int iParam0)
{
	iVar0 = func_487(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_466(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 30;
	}
	else if (iParam0 >= 27 && iParam0 <= 32)
	{
		return 27;
	}
	else if (iParam0 >= 33 && iParam0 <= 38)
	{
		return 29;
	}
	else if (iParam0 >= 39 && iParam0 <= 56)
	{
		return 28;
	}
	return 23;
}

int func_467(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 34;
	}
	else if (iParam0 >= 27 && iParam0 <= 32)
	{
		if (get_random_int_in_range(0, 100) >= 50)
		{
			return 32;
		}
		else
		{
			return 33;
		}
	}
	else if (iParam0 >= 33 && iParam0 <= 54)
	{
		return 34;
	}
	return 19;
}

bool func_468(int iParam0, int iParam1)
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

Vector3 func_469(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			StringCopy(&cVar0, "", 24);
			break;
		case 0:
			StringCopy(&cVar0, "SHRCT_PRCHEER_A", 24);
			break;
		case 1:
			StringCopy(&cVar0, "SHRCT_PRCHEER_J", 24);
			break;
		case 2:
			StringCopy(&cVar0, "SHRCT_PRBOO_A", 24);
			break;
		case 3:
			StringCopy(&cVar0, "SHRCT_PRBOO_J", 24);
			break;
		case 4:
			StringCopy(&cVar0, "SHRCT_GENCHEERA", 24);
			break;
		case 5:
			StringCopy(&cVar0, "SHRCT_GENCHEERJ", 24);
			break;
		case 6:
			StringCopy(&cVar0, "SHRCT_GENBOOA", 24);
			break;
		case 7:
			StringCopy(&cVar0, "SHRCT_GENBOOJ", 24);
			break;
		case 8:
			StringCopy(&cVar0, "SHRCT_FEMCHEERA", 24);
			break;
		case 9:
			StringCopy(&cVar0, "SHRCT_FEMCHEERJ", 24);
			break;
		case 10:
			StringCopy(&cVar0, "SHRCT_FEMBOOA", 24);
			break;
		case 11:
			StringCopy(&cVar0, "SHRCT_FEMBOOJ", 24);
			break;
		case 12:
			StringCopy(&cVar0, "SHBC_CHEER_A", 24);
			break;
		case 13:
			StringCopy(&cVar0, "SHBC_CHEER_J", 24);
			break;
		case 14:
			StringCopy(&cVar0, "SHBC_BOO_A", 24);
			break;
		case 15:
			StringCopy(&cVar0, "SHBC_BOO_J", 24);
			break;
		case 16:
			StringCopy(&cVar0, "BND1_CHEER_A", 24);
			break;
		case 17:
			StringCopy(&cVar0, "BND1_CHEER_J", 24);
			break;
		case 18:
			StringCopy(&cVar0, "BND1_BOO_A", 24);
			break;
		case 19:
			StringCopy(&cVar0, "BND1_BOO_J", 24);
			break;
		case 20:
			StringCopy(&cVar0, "BND2_CHEER_A", 24);
			break;
		case 21:
			StringCopy(&cVar0, "BND2_CHEER_J", 24);
			break;
		case 22:
			StringCopy(&cVar0, "BND2_BOO_A", 24);
			break;
		case 23:
			StringCopy(&cVar0, "BND2_BOO_J", 24);
			break;
		case 24:
			StringCopy(&cVar0, "SFIRE_CHEER_A", 24);
			break;
		case 25:
			StringCopy(&cVar0, "SFIRE_CHEER_J", 24);
			break;
		case 26:
			StringCopy(&cVar0, "SFIRE_BOO_A", 24);
			break;
		case 27:
			StringCopy(&cVar0, "SFIRE_BOO_J", 24);
			break;
		case 28:
			StringCopy(&cVar0, "SHCAN_CHEER_A", 24);
			break;
		case 29:
			StringCopy(&cVar0, "SHCAN_CHEER_J", 24);
			break;
		case 30:
			StringCopy(&cVar0, "SHCAN_BOO_A", 24);
			break;
		case 31:
			StringCopy(&cVar0, "SHCAN_BOO_J", 24);
			break;
		case 32:
			StringCopy(&cVar0, "SSNKE_CHEER_A", 24);
			break;
		case 33:
			StringCopy(&cVar0, "SSNKE_CHEER_J", 24);
			break;
		case 34:
			StringCopy(&cVar0, "SSNKE_BOO_A", 24);
			break;
		case 35:
			StringCopy(&cVar0, "SSNKE_BOO_J", 24);
			break;
		case 36:
			StringCopy(&cVar0, "SSNKE_BRN_POS_A", 24);
			break;
		case 37:
			StringCopy(&cVar0, "SSNKE_BRN_POS_J", 24);
			break;
		case 38:
			StringCopy(&cVar0, "SSNKE_BRN_NEG_A", 24);
			break;
		case 39:
			StringCopy(&cVar0, "SSNKE_BRN_NEG_J", 24);
			break;
		case 40:
			StringCopy(&cVar0, "SHFOS_CHEER_A", 24);
			break;
		case 41:
			StringCopy(&cVar0, "SHFOS_CHEER_J", 24);
			break;
		case 42:
			StringCopy(&cVar0, "SHFOS_BOO_A", 24);
			break;
		case 43:
			StringCopy(&cVar0, "SHFOS_BOO_J", 24);
			break;
		case 44:
			StringCopy(&cVar0, "SHEA_CHEER_A", 24);
			break;
		case 45:
			StringCopy(&cVar0, "SHEA_CHEER_J", 24);
			break;
		case 46:
			StringCopy(&cVar0, "SHEA_BOO_A", 24);
			break;
		case 47:
			StringCopy(&cVar0, "SHEA_BOO_J", 24);
			break;
		case 48:
			StringCopy(&cVar0, "SHFF_CHEER_A", 24);
			break;
		case 49:
			StringCopy(&cVar0, "SHFF_CHEER_J", 24);
			break;
		case 50:
			StringCopy(&cVar0, "SHFF_BOO_A", 24);
			break;
		case 51:
			StringCopy(&cVar0, "SHFF_BOO_J", 24);
			break;
		case 52:
			StringCopy(&cVar0, "SHFF_FAUDC_A", 24);
			break;
		case 53:
			StringCopy(&cVar0, "SHFF_FAUDC_J", 24);
			break;
		case 54:
			StringCopy(&cVar0, "SHFF_FAUDB_A", 24);
			break;
		case 55:
			StringCopy(&cVar0, "SHFF_FAUDB_J", 24);
			break;
		case 56:
			StringCopy(&cVar0, "SHEA_APPEARC_A", 24);
			break;
		case 57:
			StringCopy(&cVar0, "SHEA_APPEARC_J", 24);
			break;
		case 58:
			StringCopy(&cVar0, "SHEA_APPEARB_A", 24);
			break;
		case 59:
			StringCopy(&cVar0, "SHEA_APPEARB_J", 24);
			break;
		case 60:
			StringCopy(&cVar0, "SHSD_CHEER_A", 24);
			break;
		case 61:
			StringCopy(&cVar0, "SHSD_CHEER_J", 24);
			break;
		case 62:
			StringCopy(&cVar0, "SHSD_BOO_A", 24);
			break;
		case 63:
			StringCopy(&cVar0, "SHSD_BOO_J", 24);
			break;
		case 64:
			StringCopy(&cVar0, "SHEN_CHEER_A", 24);
			break;
		case 65:
			StringCopy(&cVar0, "SHEN_CHEER_J", 24);
			break;
		case 66:
			StringCopy(&cVar0, "SHEN_BOO_A", 24);
			break;
		case 67:
			StringCopy(&cVar0, "SHEN_BOO_J", 24);
			break;
		case 68:
			StringCopy(&cVar0, "SHEN_HANGED_A", 24);
			break;
		case 69:
			StringCopy(&cVar0, "SHEN_HANGED_J", 24);
			break;
		case 70:
			StringCopy(&cVar0, "SHEN_SHOTDWN_A", 24);
			break;
		case 71:
			StringCopy(&cVar0, "SHEN_SHOTDWN_J", 24);
			break;
		case 72:
			StringCopy(&cVar0, "RODDF_CHEER_A", 24);
			break;
		case 73:
			StringCopy(&cVar0, "RODDF_CHEER_J", 24);
			break;
		case 74:
			StringCopy(&cVar0, "RODDF_BOO_A", 24);
			break;
		case 75:
			StringCopy(&cVar0, "RODDF_BOO_J", 24);
			break;
	}
	return cVar0;
}

void func_470(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

void func_471(bool bParam0)
{
	if (bParam0)
	{
		func_488(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_489(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_472(int iParam0)
{
	return func_307(iParam0, 2);
}

bool func_473(int iParam0)
{
	return iParam0 != 0;
}

bool func_474(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_338(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_337(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_336(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_334(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_333(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_335(iParam0);
	if (iVar5 < 1 || iVar5 > func_339(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_475(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_476(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_enthralled_b";
		case 1:
			return "seated_loop_female1_enthralled_b";
		case 2:
			return "seated_loop_female0_waiting_a";
		case 3:
			return "seated_loop_female1_waiting_a";
		case 4:
			return "seated_loop_male1_enthralled_b";
		case 5:
			return "seated_loop_male2_enthralled_b";
		case 6:
			return "seated_loop_male3_enthralled_b";
		case 7:
			return "seated_loop_male4_enthralled_b";
		case 8:
			return "seated_loop_male1_waiting_a";
		case 9:
			return "seated_loop_male2_waiting_a";
		case 10:
			return "seated_loop_male3_waiting_a";
		case 11:
			return "seated_loop_male4_waiting_a";
		case 12:
			return "railing_loop_male0_enthralled_b";
		case 13:
			return "railing_loop_male0_waiting_a";
		case 14:
			return "railingl_male0_enthralled_b";
		case 15:
			return "railingl_male0_waiting_a";
		case 16:
			return "railingr_male5_enthralled_b";
		case 17:
			return "railingr_male5_waiting_a";
		default:
			break;
	}
	return "seated_loop_male1_waiting_a";
}

char* func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_regular_a";
		case 1:
			return "seated_loop_female0_regular_b";
		case 2:
			return "seated_loop_female0_rowdy_b";
		case 3:
			return "seated_loop_female0_rowdy_c";
		case 4:
			return "seated_loop_female1_regular_a";
		case 5:
			return "seated_loop_female1_regular_b";
		case 6:
			return "seated_loop_female1_rowdy_b";
		case 7:
			return "seated_loop_female1_rowdy_c";
		case 8:
			return "seated_loop_male1_regular_a";
		case 9:
			return "seated_loop_male1_regular_b";
		case 10:
			return "seated_loop_male1_rowdy_b";
		case 11:
			return "seated_loop_male1_rowdy_c";
		case 12:
			return "seated_loop_male2_regular_a";
		case 13:
			return "seated_loop_male2_regular_b";
		case 14:
			return "seated_loop_male3_regular_a";
		case 15:
			return "seated_loop_male3_regular_b";
		case 16:
			return "seated_loop_male3_rowdy_b";
		case 17:
			return "seated_loop_male3_rowdy_c";
		case 18:
			return "seated_loop_male4_regular_a";
		case 19:
			return "seated_loop_male4_regular_b";
		case 20:
			return "seated_loop_male4_rowdy_b";
		case 21:
			return "seated_loop_male4_rowdy_c";
		case 22:
			return "railing_loop_male0_regular_a";
		case 23:
			return "railing_loop_male0_regular_b";
		case 24:
			return "railing_loop_male0_rowdy_b";
		case 25:
			return "railing_loop_male0_rowdy_c";
		case 26:
			return "railingl_male0_regular_a";
		case 27:
			return "railingl_male0_regular_b";
		case 28:
			return "railingl_male0_rowdy_b";
		case 29:
			return "railingl_male0_rowdy_c";
		case 30:
			return "railingr_male5_regular_a";
		case 31:
			return "railingr_male5_regular_b";
		case 32:
			return "railingr_male5_rowdy_b";
		case 33:
			return "railingr_male5_rowdy_c";
		default:
			break;
	}
	return "seated_loop_male1_regular_a";
}

char* func_478(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_musical_b";
		case 1:
			return "seated_loop_female1_musical_b";
		case 2:
			return "seated_loop_mail0_musical_b";
		case 3:
			return "seated_loop_male2_musical_b";
		case 4:
			return "seated_loop_male3_musical_b";
		case 5:
			return "seated_loop_male4_musical_b";
		case 6:
			return "railing_loop_male1_musical_b";
		case 7:
			return "railingl_male1_musical_b";
		case 8:
			return "railingr_male5_musical_b";
		default:
			break;
	}
	return "seated_loop_mail0_musical_b";
}

char* func_479(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_dancing_b";
		case 1:
			return "seated_loop_female0_dancing_c";
		case 2:
			return "seated_loop_female1_dancing_b";
		case 3:
			return "seated_loop_female1_dancing_c";
		case 4:
			return "seated_loop_male0_dancing_b";
		case 5:
			return "seated_loop_male0_dancing_c";
		case 6:
			return "seated_loop_male2_dancing_b";
		case 7:
			return "seated_loop_male2_dancing_c";
		case 8:
			return "seated_loop_male3_dancing_b";
		case 9:
			return "seated_loop_male3_dancing_c";
		case 10:
			return "seated_loop_male4_dancing_b";
		case 11:
			return "seated_loop_male4_dancing_c";
		case 12:
			return "railing_loop_male1_dancing_b";
		case 13:
			return "railing_loop_male1_dancing_c";
		case 14:
			return "railingl_male1_dancing_b";
		case 15:
			return "railingl_male1_dancing_c";
		case 16:
			return "railingr_male5_dancing_b";
		case 17:
			return "railingr_male5_dancing_c";
		default:
			break;
	}
	return "seated_loop_male0_dancing_b";
}

char* func_480(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_comedic_b";
		case 1:
			return "seated_loop_female0_comedic_c";
		case 2:
			return "seated_loop_female0_displeased_b";
		case 3:
			return "seated_loop_female0_displeased_c";
		case 4:
			return "seated_loop_female1_comedic_b";
		case 5:
			return "seated_loop_female1_comedic_c";
		case 6:
			return "seated_loop_female1_displeased_b";
		case 7:
			return "seated_loop_female1_displeased_c";
		case 8:
			return "seated_loop_male0_comedic_b";
		case 9:
			return "seated_loop_male0_comedic_c";
		case 10:
			return "seated_loop_male0_displeased_b";
		case 11:
			return "seated_loop_male0_displeased_c";
		case 12:
			return "seated_loop_male2_comedic_b";
		case 13:
			return "seated_loop_male2_comedic_c";
		case 14:
			return "seated_loop_male2_displeased_b";
		case 15:
			return "seated_loop_male2_displeased_c";
		case 16:
			return "seated_loop_male3_comedic_b";
		case 17:
			return "seated_loop_male3_comedic_c";
		case 18:
			return "seated_loop_male3_displeased_b";
		case 19:
			return "seated_loop_male3_displeased_c";
		case 20:
			return "railing_loop_male1_comedic_b";
		case 21:
			return "railing_loop_male1_comedic_c";
		case 22:
			return "railing_loop_male1_displeased_b";
		case 23:
			return "railing_loop_male1_displeased_c";
		case 24:
			return "railingl_male1_comedic_b";
		case 25:
			return "railingl_male1_comedic_c";
		case 26:
			return "railingl_male1_displeased_b";
		case 27:
			return "railingl_male1_displeased_c";
		case 28:
			return "railingr_male4_comedic_b";
		case 29:
			return "railingr_male4_comedic_c";
		case 30:
			return "railingr_male4_displeased_b";
		case 31:
			return "railingr_male4_displeased_c";
		default:
			break;
	}
	return "seated_loop_male0_comedic_b";
}

char* func_481(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_med_b";
		case 1:
			return "seated_loop_female0_applause_small_a";
		case 2:
			return "seated_loop_female0_suspense_neg_b";
		case 3:
			return "seated_loop_female0_suspense_pos_b";
		case 4:
			return "seated_loop_female1_applause_med_b";
		case 5:
			return "seated_loop_female1_applause_small_a";
		case 6:
			return "seated_loop_female1_suspense_neg_b";
		case 7:
			return "seated_loop_female1_suspense_pos_b";
		case 8:
			return "seated_loop_male0_applause_med_b";
		case 9:
			return "seated_loop_male0_applause_small_a";
		case 10:
			return "seated_loop_male0_suspense_neg_b";
		case 11:
			return "seated_loop_male0_suspense_pos_b";
		case 12:
			return "seated_loop_male2_applause_med_b";
		case 13:
			return "seated_loop_male2_applause_small_a";
		case 14:
			return "seated_loop_male2_suspense_neg_b";
		case 15:
			return "seated_loop_male2_suspense_pos_b";
		case 16:
			return "seated_loop_male3_applause_med_b";
		case 17:
			return "seated_loop_male3_applause_small_a";
		case 18:
			return "seated_loop_male3_suspense_neg_b";
		case 19:
			return "seated_loop_male3_suspense_pos_b";
		case 20:
			return "railing_loop_male1_applause_med_b";
		case 21:
			return "railing_loop_male1_applause_small_a";
		case 22:
			return "railing_loop_male1_suspense_neg_b";
		case 23:
			return "railing_loop_male1_suspense_pos_b";
		case 24:
			return "railingl_male1_applause_med_b";
		case 25:
			return "railingl_male1_applause_small_a";
		case 26:
			return "railingl_male1_suspense_neg_b";
		case 27:
			return "railingl_male1_suspense_pos_b";
		case 28:
			return "railingr_male4_applause_med_b";
		case 29:
			return "railingr_male4_applause_small_a";
		case 30:
			return "railingr_male4_suspense_neg_b";
		case 31:
			return "railingr_male4_suspense_pos_b";
		default:
			break;
	}
	return "seated_loop_male0_applause_med_b";
}

char* func_482(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_big_c";
		case 1:
			return "seated_loop_female0_horrified_c";
		case 2:
			return "seated_loop_female2_applause_big_c";
		case 3:
			return "seated_loop_female2_horrified_c";
		case 4:
			return "seated_loop_male0_applause_big_c";
		case 5:
			return "seated_loop_male0_horrified_c";
		case 6:
			return "seated_loop_male2_applause_big_c";
		case 7:
			return "seated_loop_male2_horrified_c";
		case 8:
			return "seated_loop_male3_applause_big_c";
		case 9:
			return "seated_loop_male3_horrified_c";
		case 10:
			return "railing_loop_male1_applause_big_c";
		case 11:
			return "railing_loop_male1_horrified_c";
		case 12:
			return "railingl_male1_applause_big_c";
		case 13:
			return "railingl_male1_horrified_c";
		case 14:
			return "railingr_male4_applause_big_c";
		case 15:
			return "railingr_male4_horrified_c";
		default:
			break;
	}
	return "seated_loop_male0_applause_big_c";
}

char* func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "railingl_male0_applause_quick";
		case 1:
			return "railingl_male0_applause_standing_01";
		case 2:
			return "railingl_male0_applause_standing_02";
		case 3:
			return "railingl_male0_boo_high";
		case 4:
			return "railingl_male0_boo_low";
		case 5:
			return "railingl_male0_horrified_amused";
		case 6:
			return "railingl_male0_horrified_high";
		case 7:
			return "railingl_male0_horrified_low";
		case 8:
			return "railingl_male0_impressed_high";
		case 9:
			return "railingl_male0_impressed_low";
		case 10:
			return "railingl_male0_laugh";
		case 11:
			return "railingl_male0_laugh_02";
		case 12:
			return "railingl_male0_raunchy";
		case 13:
			return "railingl_male0_raunchy_02";
		case 14:
			return "railingr_male4_applause_quick";
		case 15:
			return "railingr_male4_applause_standing_01";
		case 16:
			return "railingr_male4_applause_standing_02";
		case 17:
			return "railingr_male4_boo_high";
		case 18:
			return "railingr_male4_boo_low";
		case 19:
			return "railingr_male4_horrified_amused";
		case 20:
			return "railingr_male4_horrified_high";
		case 21:
			return "railingr_male4_horrified_low";
		case 22:
			return "railingr_male4_impressed_high";
		case 23:
			return "railingr_male4_impressed_low";
		case 24:
			return "railingr_male4_laugh";
		case 25:
			return "railingr_male4_laugh_02";
		case 26:
			return "railingr_male4_raunchy";
		case 27:
			return "railingr_male4_raunchy_02";
		case 28:
			return "seated_loop_female0_applause_quick";
		case 29:
			return "seated_loop_female0_applause_standing_01";
		case 30:
			return "seated_loop_female0_applause_standing_02";
		case 31:
			return "seated_loop_female0_boo_high";
		case 32:
			return "seated_loop_female0_boo_low";
		case 33:
			return "seated_loop_female0_horrified_amused";
		case 34:
			return "seated_loop_female0_horrified_high";
		case 35:
			return "seated_loop_female0_horrified_low";
		case 36:
			return "seated_loop_female0_impressed_high";
		case 37:
			return "seated_loop_female0_impressed_low";
		case 38:
			return "seated_loop_female0_laugh";
		case 39:
			return "seated_loop_female0_laugh_02";
		case 40:
			return "seated_loop_female0_raunchy";
		case 41:
			return "seated_loop_female0_raunchy_02";
		case 42:
			return "seated_loop_female1_applause_quick";
		case 43:
			return "seated_loop_female1_applause_standing_01";
		case 44:
			return "seated_loop_female1_applause_standing_02";
		case 45:
			return "seated_loop_female1_boo_high";
		case 46:
			return "seated_loop_female1_boo_low";
		case 47:
			return "seated_loop_female1_horrified_amused";
		case 48:
			return "seated_loop_female1_horrified_high";
		case 49:
			return "seated_loop_female1_horrified_low";
		case 50:
			return "seated_loop_female1_impressed_high";
		case 51:
			return "seated_loop_female1_impressed_low";
		case 52:
			return "seated_loop_female1_laugh";
		case 53:
			return "seated_loop_female1_laugh_02";
		case 54:
			return "seated_loop_female1_raunchy";
		case 55:
			return "seated_loop_female1_raunchy_02";
		case 56:
			return "seated_loop_male1_applause_quick";
		case 57:
			return "seated_loop_male1_applause_standing_01";
		case 58:
			return "seated_loop_male1_applause_standing_02";
		case 59:
			return "seated_loop_male1_boo_high";
		case 60:
			return "seated_loop_male1_boo_low";
		case 61:
			return "seated_loop_male1_horrified_amused";
		case 62:
			return "seated_loop_male1_horrified_high";
		case 63:
			return "seated_loop_male1_horrified_low";
		case 64:
			return "seated_loop_male1_impressed_high";
		case 65:
			return "seated_loop_male1_impressed_low";
		case 66:
			return "seated_loop_male1_laugh";
		case 67:
			return "seated_loop_male1_laugh_02";
		case 68:
			return "seated_loop_male1_raunchy";
		case 69:
			return "seated_loop_male1_raunchy_02";
		case 70:
			return "seated_loop_male2_applause_quick";
		case 71:
			return "seated_loop_male2_applause_standing_01";
		case 72:
			return "seated_loop_male2_applause_standing_02";
		case 73:
			return "seated_loop_male2_boo_high";
		case 74:
			return "seated_loop_male2_boo_low";
		case 75:
			return "seated_loop_male2_horrified_amused";
		case 76:
			return "seated_loop_male2_horrified_high";
		case 77:
			return "seated_loop_male2_horrified_low";
		case 78:
			return "seated_loop_male2_impressed_high";
		case 79:
			return "seated_loop_male2_impressed_low";
		case 80:
			return "seated_loop_male2_laugh";
		case 81:
			return "seated_loop_male2_laugh_02";
		case 82:
			return "seated_loop_male2_raunchy";
		case 83:
			return "seated_loop_male2_raunchy_02";
		case 84:
			return "seated_loop_male3_applause_quick";
		case 85:
			return "seated_loop_male3_applause_standing_01";
		case 86:
			return "seated_loop_male3_applause_standing_02";
		case 87:
			return "seated_loop_male3_boo_high";
		case 88:
			return "seated_loop_male3_boo_low";
		case 89:
			return "seated_loop_male3_horrified_amused";
		case 90:
			return "seated_loop_male3_horrified_high";
		case 91:
			return "seated_loop_male3_horrified_low";
		case 92:
			return "seated_loop_male3_impressed_high";
		case 93:
			return "seated_loop_male3_impressed_low";
		case 94:
			return "seated_loop_male3_laugh";
		case 95:
			return "seated_loop_male3_laugh_02";
		case 96:
			return "seated_loop_male3_raunchy";
		case 97:
			return "seated_loop_male3_raunchy_02";
		case 98:
			return "railsl_oneshot_male_escapeartistreact_a_male4";
		case 99:
			return "railsr_oneshot_male_escapeartistreact_a_male4";
		case 100:
			return "seated_oneshot_female_escapeartistreact_backward_a_female0";
		case 101:
			return "seated_oneshot_female_escapeartistreact_backward_b_female0";
		case 102:
			return "seated_oneshot_female_escapeartistreact_forward_a_female0";
		case 103:
			return "seated_oneshot_female_escapeartistreact_forward_b_female0";
		case 104:
			return "seated_oneshot_female_escapeartistreact_left_a_female0";
		case 105:
			return "seated_oneshot_female_escapeartistreact_left_b_female0";
		case 106:
			return "seated_oneshot_female_escapeartistreact_right_a_female0";
		case 107:
			return "seated_oneshot_female_escapeartistreact_right_b_female0";
		case 108:
			return "seated_oneshot_male_escapeartistreact_backward_a_male4";
		case 109:
			return "seated_oneshot_male_escapeartistreact_forward_a_male4";
		case 110:
			return "seated_oneshot_male_escapeartistreact_forward_b_male4";
		case 111:
			return "seated_oneshot_male_escapeartistreact_forward_c_male4";
		case 112:
			return "seated_oneshot_male_escapeartistreact_left_a_male4";
		case 113:
			return "seated_oneshot_male_escapeartistreact_left_b_male4";
		case 114:
			return "seated_oneshot_male_escapeartistreact_left_c_male4";
		case 115:
			return "seated_oneshot_male_escapeartistreact_right_a_male4";
		case 116:
			return "seated_oneshot_male_escapeartistreact_right_b_male4";
		case 117:
			return "seated_oneshot_male_escapeartistreact_right_c_male4";
		case 118:
			return "seated_oneshot_female0_hatfire_close_rt_a";
		case 119:
			return "seated_oneshot_female0_hatfire_concerned_rt_a";
		case 120:
			return "seated_oneshot_female1_hatfire_close_rt_a";
		case 121:
			return "seated_oneshot_female1_hatfire_concerned_rt_a";
		case 122:
			return "seated_oneshot_male0_hatfire_close_rt_a";
		case 123:
			return "seated_oneshot_male0_hatfire_concerned_rt_a";
		case 124:
			return "seated_oneshot_male1_hatfire_close_rt_a";
		case 125:
			return "seated_oneshot_male1_hatfire_concerned_rt_a";
		case 126:
			return "seated_oneshot_male2_hatfire_close_rt_a";
		case 127:
			return "seated_oneshot_male2_hatfire_concerned_rt_a";
		case 128:
			return "seated_oneshot_male3_hatfire_close_rt_a";
		case 129:
			return "seated_oneshot_male3_hatfire_concerned_rt_a";
		case 130:
			return "seated_oneshot_male4_hatfire_close_rt_a";
		case 131:
			return "seated_oneshot_male4_hatfire_concerned_rt_a";
		case 132:
			return "seated_oneshot_male5_hatfire_close_rt_a";
		case 133:
			return "seated_oneshot_male5_hatfire_concerned_rt_a";
		case 134:
			return "seated_oneshot_female0_hatfire_laugh_ft_a";
		case 135:
			return "seated_oneshot_female0_hatfire_laugh_ft_b";
		case 136:
			return "seated_oneshot_female1_hatfire_laugh_ft_a";
		case 137:
			return "seated_oneshot_female1_hatfire_laugh_ft_b";
		case 138:
			return "seated_oneshot_male0_hatfire_laugh_ft_a";
		case 139:
			return "seated_oneshot_male0_hatfire_laugh_ft_b";
		case 140:
			return "seated_oneshot_male1_hatfire_laugh_ft_a";
		case 141:
			return "seated_oneshot_male1_hatfire_laugh_ft_b";
		case 142:
			return "seated_oneshot_male2_hatfire_laugh_ft_a";
		case 143:
			return "seated_oneshot_male2_hatfire_laugh_ft_b";
		case 144:
			return "seated_oneshot_male3_hatfire_laugh_ft_a";
		case 145:
			return "seated_oneshot_male3_hatfire_laugh_ft_b";
		case 146:
			return "seated_oneshot_male4_hatfire_laugh_ft_a";
		case 147:
			return "seated_oneshot_male4_hatfire_laugh_ft_b";
		case 148:
			return "seated_oneshot_male5_hatfire_laugh_ft_a";
		case 149:
			return "seated_oneshot_male5_hatfire_laugh_ft_b";
		default:
			break;
	}
	return "seated_loop_male1_applause_quick";
}

char* func_484(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_blocked_a";
		case 1:
			return "seated_loop_female0_blocked_left_a";
		case 2:
			return "seated_loop_female0_blocked_right_a";
		case 3:
			return "seated_loop_female1_blocked_a";
		case 4:
			return "seated_loop_female1_blocked_left_a";
		case 5:
			return "seated_loop_female1_blocked_right_a";
		case 6:
			return "seated_loop_male0_blocked_a";
		case 7:
			return "seated_loop_male0_blocked_left_a";
		case 8:
			return "seated_loop_male0_blocked_right_a";
		case 9:
			return "seated_loop_male2_blocked_a";
		case 10:
			return "seated_loop_male2_blocked_left_a";
		case 11:
			return "seated_loop_male2_blocked_right_a";
		case 12:
			return "seated_loop_male3_blocked_a";
		case 13:
			return "seated_loop_male3_blocked_left_a";
		case 14:
			return "seated_loop_male3_blocked_right_a";
		case 15:
			return "railingl_male1_blocked_a";
		case 16:
			return "railingl_male1_blocked_left_a";
		case 17:
			return "railingl_male1_blocked_right_a";
		case 18:
			return "railingr_male4_blocked_a";
		case 19:
			return "railingr_male4_blocked_left_a";
		case 20:
			return "railingr_male4_blocked_right_a";
		default:
			break;
	}
	return "seated_loop_male0_blocked_a";
}

bool func_485(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_490(), 1))
	{
		return true;
	}
	return false;
}

int func_486(int iParam0, bool bParam1)
{
	return func_491(iParam0, Global_1894899->f_2, bParam1);
}

int func_487(int iParam0)
{
	if (!func_492(iParam0))
	{
		return -1;
	}
	return func_493(iParam0);
}

void func_488(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_489(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_490()
{
	return get_player_group(get_player_index());
}

int func_491(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_494(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_495(iParam0, iVar0, iVar1, bParam2);
}

bool func_492(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_493(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_496(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_494(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_260() != -1;
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

int func_495(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_497(iVar2) != 0 && _0x800df3fc913355f3(func_498(iVar2)))
		{
			if (func_498(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_496(int iParam0)
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

int func_497(int iParam0)
{
	if (!func_499(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

int func_498(int iParam0)
{
	if (!func_499(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_499(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

