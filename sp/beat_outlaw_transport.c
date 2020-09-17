void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_490 = 15f;
	fLocal_892 = 150f;
	iLocal_895 = 1;
	sLocal_898 = "";
	iLocal_917 = -859420242;
	fLocal_952 = 0f;
	if (has_force_cleanup_occurred(523))
	{
		iLocal_896 = 1;
		func_1(get_cause_of_most_recent_force_cleanup(), 106);
	}
	if (!bVar894)
	{
		Local_37.f_3 = func_2(&vScriptParam_0);
		Local_37.f_161 = func_3(vScriptParam_0.z, 2);
		uLocal_913 = uVar911;
		func_4(&Local_37, 1);
		func_5(&(Local_37.f_5), 1);
		func_6(&(Local_37.f_5), 1);
		func_7(&(Local_37.f_5), 1);
		func_8(&(Local_37.f_5), 0);
	}
	while (true)
	{
		func_10(bVar894, 1025, 0);
		if (bVar894)
		{
			wait(0);
		}
		else
		{
			switch (iVar913)
			{
				case 0:
					if (func_11())
					{
						iLocal_915 = 1;
					}
					break;
				case 1:
					if (func_12(&Local_37, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_13(&Local_37, &uLocal_974, &uLocal_973);
						func_14();
						func_15();
						func_16(0);
						func_17(&uLocal_910, -432403087, vLocal_825, 0f, 0f, 0f, 20f, 20f, 20f);
						iLocal_915 = 3;
					}
					else if (Local_37.f_160)
					{
						func_9();
					}
					break;
				case 3:
					if (func_18())
					{
						func_19();
						func_20(&uLocal_809, &Local_239, 0);
						func_21();
						if (iVar463 == 6 || iVar463 == 7)
						{
							iLocal_911 = _create_volume_box_with_custom_name(vLocal_825, 0f, 0f, 0f, 30f, 40f, 20f, "m_volWagonProximity");
							if (does_entity_exist(iVar816))
							{
								_0x7c00cfc48a782dc0(uVar909, iVar816, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
							}
						}
						iLocal_915 = 4;
					}
					break;
				case 4:
					if (!func_22(&Local_37, &uLocal_801, iVar463, 0, 1, 0, 1, 0))
					{
						func_9();
					}
					if (func_23())
					{
						func_24(&uLocal_819, 256);
						func_9();
					}
					if (!Local_37.f_46)
					{
						if ((func_25(&uLocal_801, &(Local_37.f_5), &uLocal_916, &uLocal_884, 0, 6, 1) || func_26()) || func_27())
						{
							Local_37.f_46 = 1;
							func_28(0, 1);
							func_29(0);
							func_8(&(Local_37.f_5), 1);
							func_7(&(Local_37.f_5), 0);
							func_30(&(Local_37.f_5), 0);
							func_31();
							func_32(&uLocal_593);
							func_32(&uLocal_628);
							func_32(&uLocal_663);
							func_32(&Local_758);
							func_24(&uLocal_496, 2048);
							func_33(&(Local_37.f_5), &uLocal_916);
							func_34(&iLocal_907);
							func_35();
							if (func_36(&(uLocal_801[5]), 0, 1))
							{
								set_entity_can_be_damaged(&(uLocal_801[5]), true);
								set_ped_combat_attributes(&(uLocal_801[5]), 3, true);
								func_37();
							}
							set_relationship_between_groups(6, iVar951, 1862763509);
							iLocal_36 = 4;
						}
					}
					if (func_38())
					{
						Local_37.f_50 = 1;
						func_9();
					}
					if (func_39(&Local_37, &uLocal_801, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_37.f_50 = 1;
						func_9();
					}
					break;
			}
			wait(Local_37.f_158);
		}
	}
}

void func_1(int iParam0, int iParam1)
{
	iVar0 = 1;
	while (iVar0 <= 512)
	{
		if (func_40(iParam0, iVar0))
		{
		}
		iVar0 *= 2;
	}
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
	func_41(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_42("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_5(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_43(&(uParam0->f_1), 256);
	}
	else
	{
		func_44(&(uParam0->f_1), 256);
	}
}

void func_6(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_43(&(uParam0->f_1), 4);
	}
	else
	{
		func_44(&(uParam0->f_1), 4);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_43(&(uParam0->f_1), 16384);
	}
	else
	{
		func_44(&(uParam0->f_1), 16384);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_43(&(uParam0->f_1), 16);
	}
	else
	{
		func_44(&(uParam0->f_1), 16);
	}
}

void func_9()
{
	func_45(iVar816);
	func_34(uLocal_793[4]);
	func_34(uLocal_793[5]);
	func_34(uLocal_793[6]);
	if (iVar867 != -1)
	{
		remove_shocking_event(iVar867);
	}
	func_46();
	func_47();
	func_29(0);
	if (func_36(&(uLocal_801[5]), 0, 1))
	{
		set_entity_can_be_damaged(&(uLocal_801[5]), true);
	}
	if (func_36(&(uLocal_801[5]), 0, 1))
	{
		set_ped_config_flag(&(uLocal_801[5]), 6, false);
	}
	if (Local_37.f_50)
	{
		func_48();
	}
	func_49(&Local_37, &uLocal_801, &uLocal_793, iVar463, uVar972, uVar971, 0, 1, 0, 1);
	func_16(1);
	func_31();
	cancel_music_event("REOT_START");
	cancel_music_event("REOT_FIGHT");
	if (!func_36(Global_35, 0, 1))
	{
		trigger_music_event("REOT_END");
	}
	else if (func_50(iVar877, 2) && !func_50(iVar877, 8))
	{
		trigger_music_event("REOT_END");
	}
	if (!is_string_null_or_empty(sVar896))
	{
		if (get_is_waypoint_recording_loaded(sVar896))
		{
			remove_waypoint_recording(sVar896);
		}
	}
	terminate_this_thread();
}

void func_10(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_51(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_11()
{
	switch (iVar912)
	{
		case 0:
			if (func_52(&Local_37))
			{
				iLocal_466 = func_53();
				func_54();
				func_55(&Local_239);
				func_56();
				func_57(-258459266, 15, 0, 0);
				request_model(iVar915, false);
				func_58();
				iLocal_914 = 1;
			}
			break;
		case 1:
			if (!func_59(&uLocal_14))
			{
				return false;
			}
			if (!func_60(-258459266))
			{
				return false;
			}
			if (!has_model_loaded(iVar915))
			{
				return false;
			}
			if (!prepare_music_event("REOT_START"))
			{
				return false;
			}
			if (!prepare_music_event("REOT_FIGHT"))
			{
				return false;
			}
			if (!prepare_music_event("REOT_END"))
			{
				return false;
			}
			if (!func_61(&Local_239))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_12(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_62(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_63(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_64(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_65(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_66(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 1;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 5:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
		case 6:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 8:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
	}
}

void func_14()
{
	if (func_53() == 1)
	{
		if (Local_37.f_51.f_4 == 0)
		{
			if (Global_36 > Local_37.f_51)
			{
				iLocal_465 = 0;
			}
			else
			{
				iLocal_465 = 1;
			}
		}
		else if (Local_37.f_51.f_4 == 1)
		{
			if (Global_36 < -1433.62f)
			{
				iLocal_465 = 3;
			}
			else
			{
				iLocal_465 = 2;
			}
		}
		else if (Local_37.f_51.f_4 == 2)
		{
			if (Global_36.f_1 > -537.92f)
			{
				iLocal_465 = 4;
			}
			else
			{
				iLocal_465 = 5;
			}
		}
	}
	else if (func_53() == 9)
	{
		if (Local_37.f_51.f_4 == 3)
		{
			if (Global_36 > Local_37.f_51)
			{
				iLocal_465 = 6;
			}
			else
			{
				iLocal_465 = 7;
			}
		}
		else if (Local_37.f_51.f_4 == 4)
		{
			if (Global_36 < 66.13f || Global_36.f_1 < 419.79f)
			{
				iLocal_465 = 8;
			}
			else
			{
				iLocal_465 = 9;
			}
		}
		else if (Local_37.f_51.f_4 == 5)
		{
			if (Global_36 > -577f || Global_36.f_1 < -390f)
			{
				iLocal_465 = 11;
			}
			else
			{
				iLocal_465 = 10;
			}
		}
	}
	else if (Local_37.f_51.f_4 == 6)
	{
		if (Global_36.f_1 < Local_37.f_51.f_1)
		{
			iLocal_465 = 12;
		}
		else
		{
			iLocal_465 = 13;
		}
	}
	else if (Local_37.f_51.f_4 == 7)
	{
		if (Global_36.f_1 < Local_37.f_51.f_1)
		{
			iLocal_465 = 14;
		}
		else
		{
			iLocal_465 = 15;
		}
	}
	else if (Local_37.f_51.f_4 == 8)
	{
		if (Global_36.f_1 < Local_37.f_51.f_1)
		{
			iLocal_465 = 16;
		}
		else
		{
			iLocal_465 = 17;
		}
	}
}

void func_15()
{
	switch (iVar463)
	{
		case 0:
			iLocal_467 = 0;
			fLocal_820 = 2f;
			*vLocal_858[0] = { -1556.223f, 151.768f, 104.0678f };
			fLocal_865[0] = 20f;
			*vLocal_828[0] = { -1500.821f, 169.6227f, 97.6695f };
			fLocal_850[0] = 83.1641f;
			*vLocal_828[1] = { -1493.951f, 175.7655f, 97.83224f };
			fLocal_850[1] = 276.7777f;
			vLocal_825 = { -1494.505f, 172.633f, 97.8168f };
			fLocal_821 = 100.3969f;
			func_67(Local_239[0], -1510.864f, 168.2959f, 97.8019f, 111.0872f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { -1511.587f, 162.738f, 99.1268f };
			Local_239[0]->f_9 = 294.7737f;
			func_67(Local_239[1], -1509.905f, 175.791f, 97.8192f, 109.8645f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { -1508.164f, 182.5582f, 102.862f };
			Local_239[1]->f_9 = 211.3001f;
			func_67(Local_239[2], -1505.766f, 177.5996f, 98.2881f, 114.6563f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { -1478.476f, 163.0841f, 97.2835f };
			Local_239[2]->f_9 = 36.821f;
			Local_239[4]->f_9 = 81.7317f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 81.7317f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 0f, -2.5f, 0f) };
			Local_239[6]->f_9 = 81.7317f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
		case 1:
			iLocal_467 = 0;
			fLocal_820 = 2f;
			*vLocal_858[0] = { -1556.223f, 151.768f, 104.0678f };
			fLocal_865[0] = 20f;
			*vLocal_828[0] = { -1531.533f, 165.7056f, 100.0283f };
			fLocal_850[0] = 301.6144f;
			*vLocal_828[1] = { -1532.701f, 156.5461f, 100.5576f };
			fLocal_850[1] = 125.3008f;
			vLocal_825 = { -1534.001f, 160.8736f, 100.0165f };
			fLocal_821 = 290.944f;
			func_67(Local_239[0], -1518.859f, 171.2153f, 98.0891f, 289.1573f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { -1522.066f, 177.6031f, 101.7984f };
			Local_239[0]->f_9 = 142.3823f;
			func_67(Local_239[1], -1512.161f, 167.5011f, 97.99107f, 313.9908f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { -1520.905f, 150.2132f, 101.0773f };
			Local_239[1]->f_9 = 44.9025f;
			func_67(Local_239[2], -1523.827f, 162.3623f, 99.032f, 309.922f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { -1537.31f, 174.3755f, 103.8986f };
			Local_239[2]->f_9 = 224.3844f;
			Local_239[4]->f_9 = 285.6996f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 285.6996f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 0f, -2.5f, 0f) };
			Local_239[6]->f_9 = 285.6996f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
		case 2:
			iLocal_467 = 0;
			fLocal_820 = 2f;
			*vLocal_858[0] = { -1400.701f, 311.7986f, 90.43845f };
			fLocal_865[0] = 15f;
			*vLocal_828[0] = { -1422.482f, 322.0319f, 92.0656f };
			fLocal_850[0] = 74.4118f;
			*vLocal_828[1] = { -1408.708f, 311.0391f, 91.37631f };
			fLocal_850[1] = 275.582f;
			vLocal_825 = { -1412.954f, 314.3301f, 91.6327f };
			fLocal_821 = 79.5136f;
			func_67(Local_239[0], -1430.08f, 327.3774f, 93.8258f, 96.5214f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { -1423.697f, 306.6875f, 91.4905f };
			Local_239[0]->f_9 = 281.9473f;
			func_67(Local_239[1], -1426.037f, 324.9713f, 92.9833f, 67.7073f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { -1408.787f, 307.1925f, 90.7398f };
			Local_239[1]->f_9 = 50.5499f;
			func_67(Local_239[2], -1432.709f, 319.8728f, 93.6468f, 52.9476f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { -1408.89f, 321.6672f, 92.9365f };
			Local_239[2]->f_9 = 179.4938f;
			Local_239[4]->f_9 = 81.7317f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 81.7317f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 0f, -2.5f, 0f) };
			Local_239[6]->f_9 = 81.7317f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
		case 3:
			iLocal_467 = 0;
			fLocal_820 = 2f;
			*vLocal_858[0] = { -1400.701f, 311.7986f, 90.43845f };
			fLocal_865[0] = 15f;
			*vLocal_828[0] = { -1428.416f, 320.9277f, 92.95705f };
			fLocal_850[0] = 253.4133f;
			*vLocal_828[1] = { -1442.875f, 325.4203f, 95.54578f };
			fLocal_850[1] = 60.0666f;
			vLocal_825 = { -1438.09f, 326.9698f, 94.8576f };
			fLocal_821 = 257.5408f;
			func_67(Local_239[0], -1420.085f, 314.1519f, 91.7942f, 247.53f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { -1419.893f, 327.2741f, 93.4326f };
			Local_239[0]->f_9 = 70.0353f;
			func_67(Local_239[1], -1424.248f, 315.9883f, 92.1925f, 249.1532f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { -1430.641f, 317.4984f, 93.0692f };
			Local_239[1]->f_9 = 59.8329f;
			func_67(Local_239[2], -1411.898f, 319.7484f, 92.2955f, 242.6579f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { -1443.094f, 334.2126f, 96.62f };
			Local_239[2]->f_9 = 230.8191f;
			Local_239[4]->f_9 = 81.7317f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 81.7317f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 0f, -2.5f, 0f) };
			Local_239[6]->f_9 = 81.7317f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
		case 4:
			iLocal_467 = 0;
			fLocal_820 = 3f;
			*vLocal_858[0] = { -811.9772f, -625.0752f, 57.89875f };
			fLocal_865[0] = 15f;
			*vLocal_828[0] = { -831.3303f, -596.9818f, 57.16374f };
			fLocal_850[0] = 341.8523f;
			*vLocal_828[1] = { -836.2535f, -605.1869f, 57.85366f };
			fLocal_850[1] = 201.2724f;
			vLocal_825 = { -834.9296f, -598.1884f, 57.01674f };
			fLocal_821 = 209.866f;
			func_24(&uLocal_819, 134217728);
			func_67(Local_239[0], -825.8143f, -607.1245f, 57.7616f, 225.5572f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { -823.1014f, -606.4529f, 57.54094f };
			Local_239[0]->f_9 = 42.7311f;
			func_67(Local_239[1], -830.7621f, -614.6332f, 58.0846f, 220.1228f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { -837.6114f, -617.8367f, 59.2477f };
			Local_239[1]->f_9 = 355.7909f;
			func_67(Local_239[2], -828.5683f, -600.3096f, 57.24877f, 198.0949f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { -846.3002f, -580.6132f, 63.0232f };
			Local_239[2]->f_9 = 215.992f;
			Local_239[4]->f_9 = 51.7385f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 51.7385f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, -1.5f, 0f, 0f) };
			Local_239[6]->f_9 = 51.7385f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
		case 5:
			iLocal_467 = 0;
			fLocal_820 = 3f;
			*vLocal_858[0] = { -811.9772f, -625.0752f, 57.89875f };
			fLocal_865[0] = 15f;
			*vLocal_828[0] = { -833.371f, -611.0511f, 58.04785f };
			fLocal_850[0] = 201.2724f;
			*vLocal_828[1] = { -832.0419f, -596.993f, 57.1709f };
			fLocal_850[1] = 10.7945f;
			vLocal_825 = { -829.0509f, -607.3783f, 57.67001f };
			fLocal_821 = 29.866f;
			func_24(&uLocal_819, 134217728);
			func_67(Local_239[0], -825.6719f, -587.2246f, 55.9061f, 289.7913f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { -847.1343f, -583.1589f, 63.0116f };
			Local_239[0]->f_9 = 251.5886f;
			func_67(Local_239[1], -832.1575f, -583.0646f, 56.5149f, 311.8824f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { -837.5118f, -580.7359f, 58.6239f };
			Local_239[1]->f_9 = 187.2213f;
			func_67(Local_239[2], -829.8048f, -589.4736f, 56.34995f, 292.7913f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { -814.145f, -616.4996f, 58.1127f };
			Local_239[2]->f_9 = 42.4975f;
			Local_239[4]->f_9 = 231.7385f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 231.7385f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, -1.5f, 0f, 0f) };
			Local_239[6]->f_9 = 231.7385f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
		case 6:
			iLocal_467 = 0;
			fLocal_820 = 2f;
			*vLocal_858[0] = { -1004.611f, 129.9216f, 72.30019f };
			fLocal_865[0] = 20f;
			*vLocal_828[0] = { -1003.999f, 125.6048f, 72.68596f };
			fLocal_850[0] = 310.5331f;
			*vLocal_828[1] = { -1020.411f, 116.4789f, 69.4001f };
			fLocal_850[1] = 72.7301f;
			vLocal_825 = { -1010.224f, 125.2351f, 70.97005f };
			fLocal_821 = 125.5689f;
			func_24(&uLocal_819, 134217728);
			func_67(Local_239[0], -1027.392f, 114.8436f, 68.09959f, 69.29f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { -1009.202f, 108.9323f, 76.2559f };
			Local_239[0]->f_9 = 353.2514f;
			func_67(Local_239[1], -1018.04f, 113.29f, 72.82f, 81.55f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { -1028.756f, 126.1135f, 69.4954f };
			Local_239[1]->f_9 = 256.7396f;
			func_67(Local_239[2], -1022.22f, 121.89f, 70.35f, 99.41f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { -993.7722f, 129.6259f, 75.8562f };
			Local_239[2]->f_9 = 105.7212f;
			Local_239[4]->f_9 = 132.663f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 132.663f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 0f, -2.5f, 0f) };
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			Local_239[6]->f_9 = 132.663f;
			break;
		case 7:
			iLocal_467 = 0;
			fLocal_820 = 2f;
			*vLocal_858[0] = { -1004.611f, 129.9216f, 72.30019f };
			fLocal_865[0] = 20f;
			vLocal_825 = { -1011.767f, 124.182f, 71.00416f };
			fLocal_821 = 305.3223f;
			*vLocal_828[0] = { -1003.961f, 127.2794f, 72.20172f };
			fLocal_850[0] = 310.5331f;
			*vLocal_828[1] = { -1017.507f, 117.8593f, 69.9827f };
			fLocal_850[1] = 83.0304f;
			func_67(Local_239[0], -999.46f, 137.27f, 75.05f, -70.44f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { -994.528f, 122.1575f, 77.51329f };
			Local_239[0]->f_9 = 138.765f;
			func_67(Local_239[1], -997.9648f, 130.7243f, 73.87307f, -29.26f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { -1003.123f, 112.8621f, 77.5771f };
			Local_239[1]->f_9 = 73.8898f;
			func_67(Local_239[2], -1001.149f, 127.9554f, 73.10985f, -41.15f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { -1028.668f, 125.2893f, 69.50851f };
			Local_239[2]->f_9 = 239.0794f;
			Local_239[4]->f_9 = 249.4158f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[4]->f_9, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 249.4158f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[5]->f_9, 3f, 3f, 0f) };
			Local_239[6]->f_9 = 249.4158f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[4]->f_9, 3f, 4f, 0f) };
			break;
		case 8:
			iLocal_467 = 0;
			fLocal_820 = 2f;
			*vLocal_858[0] = { 86.94299f, 418.758f, 127.3084f };
			fLocal_865[0] = 15f;
			vLocal_825 = { 79.92635f, 414.0797f, 126.7658f };
			fLocal_821 = 298.3983f;
			*vLocal_828[0] = { 97.6349f, 426.4335f, 128.9154f };
			fLocal_850[0] = 266.7853f;
			*vLocal_828[1] = { 76.7515f, 408.2211f, 126.2621f };
			fLocal_850[1] = 146.6765f;
			func_67(Local_239[0], 103.4521f, 425.002f, 129.6968f, 331.8615f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { 93.9432f, 431.4667f, 130.2437f };
			Local_239[0]->f_9 = 141.0928f;
			func_67(Local_239[1], 98.20078f, 421.2861f, 129.2124f, 305.5729f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { 98.18281f, 413.1198f, 131.8151f };
			Local_239[1]->f_9 = 99.0403f;
			func_67(Local_239[2], 98.0499f, 429.1096f, 129.5241f, 289.5797f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { 78.8953f, 405.001f, 125.4559f };
			Local_239[2]->f_9 = 355.6684f;
			Local_239[4]->f_9 = 249.4158f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[4]->f_9, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 249.4158f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[5]->f_9, 3f, 3f, 0f) };
			Local_239[6]->f_9 = 249.4158f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[4]->f_9, 3f, 4f, 0f) };
			break;
		case 9:
			iLocal_467 = 0;
			fLocal_820 = 2f;
			*vLocal_858[0] = { 86.94299f, 418.758f, 127.3084f };
			fLocal_865[0] = 15f;
			vLocal_825 = { 82.5366f, 415.8692f, 126.9237f };
			fLocal_821 = 127.3605f;
			*vLocal_828[0] = { 78.85643f, 409.2942f, 126.1543f };
			fLocal_850[0] = 130.6169f;
			*vLocal_828[1] = { 91.38785f, 419.299f, 127.5959f };
			fLocal_850[1] = 266.7853f;
			func_67(Local_239[0], 70.58f, 403.05f, 125.63f, 154.25f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { 77.5996f, 398.6881f, 125.6577f };
			Local_239[0]->f_9 = 354.2745f;
			func_67(Local_239[1], 72.56f, 407.09f, 126.52f, 153.18f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { 68.7435f, 407.7441f, 127.0784f };
			Local_239[1]->f_9 = 315.4485f;
			func_67(Local_239[2], 77.5736f, 405.9805f, 125.639f, 128.4076f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { 98.6366f, 413.9579f, 131.5657f };
			Local_239[2]->f_9 = 62.1008f;
			Local_239[4]->f_9 = 249.4158f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[4]->f_9, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 249.4158f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[5]->f_9, 3f, 3f, 0f) };
			Local_239[6]->f_9 = 249.4158f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[4]->f_9, 3f, 4f, 0f) };
			break;
		case 11:
			iLocal_467 = 0;
			fLocal_820 = 2f;
			*vLocal_858[0] = { -671.2455f, -444.0216f, 50.35337f };
			fLocal_865[0] = 15f;
			vLocal_825 = { -641.3599f, -466.7303f, 49.47265f };
			fLocal_821 = 50.7912f;
			*vLocal_828[0] = { -651.1834f, -455.7384f, 49.965f };
			fLocal_850[0] = 37.2522f;
			*vLocal_828[1] = { -634.6815f, -473.9248f, 49.21977f };
			fLocal_850[1] = 223.8161f;
			func_67(Local_239[0], -655.4734f, -450.9495f, 50.204f, 39.8084f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { -656.7864f, -463.106f, 50.0323f };
			Local_239[0]->f_9 = 233.3374f;
			func_67(Local_239[1], -652.4568f, -450.2765f, 50.3792f, 82.498f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { -650.1803f, -447.3828f, 50.8123f };
			Local_239[1]->f_9 = 258.2947f;
			func_67(Local_239[2], -664.7078f, -455.9738f, 49.9334f, 32.9423f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { -629.6065f, -466.0795f, 50.8699f };
			Local_239[2]->f_9 = 79.0803f;
			Local_239[4]->f_9 = 249.4158f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[4]->f_9, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 249.4158f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[5]->f_9, 3f, 3f, 0f) };
			Local_239[6]->f_9 = 249.4158f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[4]->f_9, 3f, 4f, 0f) };
			break;
		case 10:
			iLocal_467 = 0;
			fLocal_820 = 2f;
			*vLocal_858[0] = { -671.2455f, -444.0216f, 50.35337f };
			fLocal_865[0] = 15f;
			vLocal_825 = { -668.4734f, -447.0565f, 50.2387f };
			fLocal_821 = 228.0405f;
			*vLocal_828[0] = { -674.996f, -435.364f, 50.7738f };
			fLocal_850[0] = 15.5568f;
			*vLocal_828[1] = { -657.0853f, -452.6443f, 49.9651f };
			fLocal_850[1] = 225.3074f;
			func_67(Local_239[0], -649.9948f, -466.5987f, 49.8172f, 227.705f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { -646.0984f, -450.2193f, 50.6574f };
			Local_239[0]->f_9 = 47.3538f;
			func_67(Local_239[1], -652.746f, -463.6404f, 49.8544f, 226.6886f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { -661.4514f, -463.3876f, 50.19f };
			Local_239[1]->f_9 = 356.9851f;
			func_67(Local_239[2], -647.3698f, -458.6558f, 49.8318f, 188.2184f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { -679.6821f, -454.8751f, 50.2795f };
			Local_239[2]->f_9 = 288.7532f;
			Local_239[4]->f_9 = 249.4158f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[4]->f_9, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 249.4158f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[5]->f_9, 3f, 3f, 0f) };
			Local_239[6]->f_9 = 249.4158f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, Local_239[4]->f_9, 3f, 4f, 0f) };
			break;
		case 12:
			iLocal_467 = 2;
			fLocal_820 = 2f;
			*vLocal_858[0] = { 1643.217f, -1855.541f, 48.64422f };
			fLocal_865[0] = 15f;
			vLocal_825 = { 1626.214f, -1791.068f, 51.54275f };
			fLocal_821 = 150.8119f;
			*vLocal_828[0] = { 1634.415f, -1849.179f, 48.85052f };
			fLocal_850[0] = 27.4151f;
			*vLocal_828[1] = { 1646.146f, -1846.158f, 49.15145f };
			fLocal_850[1] = 205.2957f;
			vLocal_825 = { 1639.857f, -1849.955f, 48.66737f };
			fLocal_821 = 30f;
			func_67(Local_239[0], 1634.506f, -1835.677f, 49.2753f, 26.489f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { 1622.941f, -1840.365f, 49.483f };
			Local_239[0]->f_9 = 236.5854f;
			func_67(Local_239[1], 1625.91f, -1837.238f, 49.5715f, 32.8898f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { 1642.445f, -1836.777f, 49.7995f };
			Local_239[1]->f_9 = 175.344f;
			func_67(Local_239[2], 1638.11f, -1840.348f, 49.09816f, 49.2464f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { 1658.554f, -1855.583f, 50.5777f };
			Local_239[2]->f_9 = 71.7462f;
			Local_239[4]->f_9 = 145.5519f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 145.5519f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 0f, -2.5f, 0f) };
			Local_239[6]->f_9 = 285.6996f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
		case 13:
			iLocal_467 = 2;
			fLocal_820 = 2f;
			*vLocal_858[0] = { 1643.217f, -1855.541f, 48.64422f };
			fLocal_865[0] = 15f;
			vLocal_825 = { 1626.214f, -1791.068f, 51.54275f };
			fLocal_821 = 150.8119f;
			*vLocal_828[0] = { 1646.993f, -1854.865f, 48.67211f };
			fLocal_850[0] = 210f;
			*vLocal_828[1] = { 1632.569f, -1847.732f, 48.96754f };
			fLocal_850[1] = 30f;
			vLocal_825 = { 1639.857f, -1849.955f, 48.66737f };
			fLocal_821 = 210f;
			func_67(Local_239[0], 1645.694f, -1868.695f, 48.7296f, 212f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { 1658.554f, -1855.583f, 50.5777f };
			Local_239[0]->f_9 = 40f;
			func_67(Local_239[1], 1644.855f, -1863.511f, 48.66517f, 215.5854f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { 1639.02f, -1866.191f, 48.48401f };
			Local_239[1]->f_9 = 45f;
			func_67(Local_239[2], 1653.433f, -1862.691f, 48.65617f, 210f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { 1621.512f, -1851.568f, 49.13602f };
			Local_239[2]->f_9 = 220f;
			Local_239[4]->f_9 = 210f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 210f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 0f, -2.5f, 0f) };
			Local_239[6]->f_9 = 210f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
		case 14:
			iLocal_467 = 2;
			fLocal_820 = 3f;
			*vLocal_858[0] = { 811.9707f, -813.9228f, 58.05459f };
			fLocal_865[0] = 25f;
			*vLocal_828[0] = { 815.7085f, -825.6512f, 57.84882f };
			fLocal_850[0] = 175.4601f;
			*vLocal_828[1] = { 813.0789f, -807.8889f, 58.11379f };
			fLocal_850[1] = 344.538f;
			vLocal_825 = { 814.0459f, -816.8135f, 58.00174f };
			fLocal_821 = 349.4839f;
			func_67(Local_239[0], 820.6183f, -802.4326f, 58.53233f, 358.8976f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { 826.9985f, -824.9645f, 59.74659f };
			Local_239[0]->f_9 = 4.9197f;
			func_67(Local_239[1], 811.5932f, -796.2785f, 57.65773f, 354.1235f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { 809.0819f, -794.6357f, 57.54206f };
			Local_239[1]->f_9 = 132.4866f;
			func_67(Local_239[2], 820.8944f, -807.2293f, 58.92766f, 13.7088f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { 803.6412f, -821.3384f, 56.96154f };
			Local_239[2]->f_9 = 345.655f;
			Local_239[4]->f_9 = 353.8956f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 353.8956f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 0f, -2.5f, 0f) };
			Local_239[6]->f_9 = 353.8956f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
		case 15:
			iLocal_467 = 2;
			fLocal_820 = 3f;
			*vLocal_858[0] = { 811.9707f, -813.9228f, 58.05459f };
			fLocal_865[0] = 25f;
			*vLocal_828[0] = { 815.6641f, -825.6733f, 57.84795f };
			fLocal_850[0] = 175.4601f;
			*vLocal_828[1] = { 812.857f, -810.4115f, 58.07066f };
			fLocal_850[1] = 344.538f;
			vLocal_825 = { 814.0459f, -816.8135f, 58.00174f };
			fLocal_821 = 169.4839f;
			func_67(Local_239[0], 807.4211f, -837.3418f, 56.24652f, 178f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { 803.6412f, -821.3384f, 56.96154f };
			Local_239[0]->f_9 = 345.655f;
			func_67(Local_239[1], 807.9091f, -831.1231f, 57.16988f, 174.1f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { 809.0819f, -794.6357f, 57.54206f };
			Local_239[1]->f_9 = 132.4866f;
			func_67(Local_239[2], 817.0563f, -830.9707f, 57.58141f, 183f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { 829.0944f, -812.0473f, 60.51184f };
			Local_239[2]->f_9 = 4.9197f;
			Local_239[4]->f_9 = 353.8956f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 353.8956f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 0f, -2.5f, 0f) };
			Local_239[6]->f_9 = 353.8956f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
		case 16:
			iLocal_467 = 2;
			fLocal_820 = 2f;
			*vLocal_858[0] = { 1613.828f, -577.5974f, 46.41675f };
			fLocal_865[0] = 10f;
			*vLocal_828[0] = { 1615.977f, -573.8312f, 46.57114f };
			fLocal_850[0] = 335f;
			*vLocal_828[1] = { 1609.122f, -590.9915f, 46.18689f };
			fLocal_850[1] = 155f;
			vLocal_825 = { 1610.171f, -583.1312f, 46.2253f };
			fLocal_821 = 329.76f;
			func_67(Local_239[0], 1616.213f, -567.8082f, 46.47621f, 340.8976f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { 1606.077f, -565.2966f, 49.184f };
			Local_239[0]->f_9 = 184.9197f;
			func_67(Local_239[1], 1620.277f, -572.8229f, 46.61721f, 354.1235f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { 1620.122f, -573.0367f, 46.6216f };
			Local_239[1]->f_9 = 132.4866f;
			func_67(Local_239[2], 1618.134f, -578.7419f, 46.71025f, 344.7088f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { 1612.957f, -596.072f, 45.13599f };
			Local_239[2]->f_9 = 354.655f;
			Local_239[4]->f_9 = 353.8956f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 353.8956f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 0f, -2.5f, 0f) };
			Local_239[6]->f_9 = 353.8956f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
		case 17:
			iLocal_467 = 2;
			fLocal_820 = 2f;
			*vLocal_858[0] = { 1613.828f, -577.5974f, 46.41675f };
			fLocal_865[0] = 10f;
			*vLocal_828[0] = { 1608.182f, -594.1235f, 46.12186f };
			fLocal_850[0] = 174.1f;
			*vLocal_828[1] = { 1611.464f, -573.4911f, 46.62285f };
			fLocal_850[1] = 316.6401f;
			vLocal_825 = { 1610.171f, -583.1312f, 46.2253f };
			fLocal_821 = 149.76f;
			func_67(Local_239[0], 1606.335f, -601.1454f, 45.8224f, 171.7088f, 0, 1, Local_239[0]->f_12);
			Local_239[0]->f_6 = { 1614.34f, -597.1913f, 44.78312f };
			Local_239[0]->f_9 = 354.655f;
			func_67(Local_239[1], 1599.949f, -598.5707f, 45.83612f, 174.1f, 0, 1, Local_239[1]->f_12);
			Local_239[1]->f_6 = { 1597.677f, -589.6971f, 49.0152f };
			Local_239[1]->f_9 = 332.4866f;
			func_67(Local_239[2], 1600.48f, -594.1583f, 46.36286f, 183f, 0, 1, Local_239[2]->f_12);
			Local_239[2]->f_6 = { 1611.437f, -570.0382f, 47.03f };
			Local_239[2]->f_9 = 174.9197f;
			Local_239[4]->f_9 = 353.8956f;
			Local_239[4]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 5f, 0f) };
			Local_239[5]->f_9 = 353.8956f;
			Local_239[5]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 0f, -2.5f, 0f) };
			Local_239[6]->f_9 = 353.8956f;
			Local_239[6]->f_6 = { _get_object_offset_from_coords(vLocal_825, fVar819, 3f, 4f, 0f) };
			break;
	}
	if (func_68(iVar465, 0))
	{
		bLocal_868 = func_69(iVar465, -1);
	}
}

void func_16(bool bParam0)
{
	if (bParam0)
	{
		if (!func_70(*vLocal_858[0]))
		{
			func_71(*vLocal_858[0], &(fLocal_865[0]), 5);
		}
	}
	else if (!func_70(*vLocal_858[0]))
	{
		func_72(*vLocal_858[0], &(fLocal_865[0]), 0, 0, 4);
	}
}

void func_17(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8)
{
	func_73(*uParam0);
	*uParam0 = _create_volume_by_hash(iParam1, vParam2, vParam5, vParam8);
	_0xb56d41a694e42e86(*uParam0, 0, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(*uParam0, 0, 0, 0, -1, -1, 0);
}

bool func_18()
{
	switch (iVar952)
	{
		case 0:
			func_74(vLocal_825, 30f, 1, 0, 0, 0, 0);
			iLocal_954 = 1;
			break;
		case 1:
			if (!func_75(Local_37.f_51, Local_37.f_51.f_3, &Local_239, &uLocal_801, 1, 0, -1, 1))
			{
				return false;
			}
			iLocal_954 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_19()
{
	add_relationship_group("m_relGang", &uLocal_953);
	if (!is_entity_dead(&(uLocal_801[0])))
	{
		remove_all_ped_weapons(&(uLocal_801[0]), true, true);
		iLocal_955[0] = func_76(&(uLocal_801[0]), -594562071, -1, 0, 0, 1056964608, 1065353216, 0);
		set_current_ped_weapon(&(uLocal_801[0]), &(iLocal_955[0]), true, 0, false, false);
		set_ped_combat_attributes(&(uLocal_801[0]), 30, true);
		set_ped_relationship_group_hash(&(uLocal_801[0]), iVar951);
		set_ped_config_flag(&(uLocal_801[0]), 6, true);
		func_77(&(Local_37.f_5), &(uLocal_801[0]), 0);
		func_78(&(Local_37.f_5), Local_239[0]->f_11, 0);
	}
	if (!is_entity_dead(&(uLocal_801[1])))
	{
		remove_all_ped_weapons(&(uLocal_801[1]), true, true);
		iLocal_955[1] = func_76(&(uLocal_801[1]), -594562071, -1, 0, 0, 1056964608, 1065353216, 0);
		set_current_ped_weapon(&(uLocal_801[1]), &(iLocal_955[1]), true, 0, false, false);
		set_ped_combat_attributes(&(uLocal_801[1]), 30, true);
		set_ped_relationship_group_hash(&(uLocal_801[1]), iVar951);
		set_ped_config_flag(&(uLocal_801[1]), 6, true);
		func_77(&(Local_37.f_5), &(uLocal_801[1]), 0);
		func_78(&(Local_37.f_5), Local_239[1]->f_11, 0);
	}
	if (!is_entity_dead(&(uLocal_801[2])))
	{
		remove_all_ped_weapons(&(uLocal_801[2]), true, true);
		iLocal_955[2] = func_76(&(uLocal_801[2]), -594562071, -1, 0, 0, 1056964608, 1065353216, 0);
		set_current_ped_weapon(&(uLocal_801[2]), &(iLocal_955[2]), true, 0, false, false);
		set_ped_combat_attributes(&(uLocal_801[2]), 30, true);
		set_ped_relationship_group_hash(&(uLocal_801[2]), iVar951);
		set_ped_config_flag(&(uLocal_801[2]), 6, true);
		func_77(&(Local_37.f_5), &(uLocal_801[2]), 0);
		func_78(&(Local_37.f_5), Local_239[2]->f_11, 0);
	}
	if (!is_entity_dead(&(uLocal_801[4])))
	{
		remove_all_ped_weapons(&(uLocal_801[4]), true, true);
		iLocal_955[4] = func_76(&(uLocal_801[4]), -594562071, -1, 0, 0, 1056964608, 1065353216, 0);
		set_current_ped_weapon(&(uLocal_801[4]), &(iLocal_955[4]), true, 0, false, false);
		set_ped_can_be_targetted(&(uLocal_801[4]), true);
		set_entity_is_target_priority(&(uLocal_801[4]), true, 90f);
		func_80(&(uLocal_801[4]), func_79(1072590268, 0, -1));
		func_81(&(uLocal_801[4]), 1);
		func_77(&(Local_37.f_5), &(uLocal_801[4]), 1);
		set_ped_config_flag(&(uLocal_801[4]), 413, true);
		set_ped_config_flag(&(uLocal_801[4]), 330, true);
		set_ped_config_flag(&(uLocal_801[4]), 22, true);
	}
	if (!is_entity_dead(&(uLocal_801[5])))
	{
		remove_all_ped_weapons(&(uLocal_801[5]), true, true);
		iLocal_955[5] = func_76(&(uLocal_801[5]), -594562071, -1, 0, 0, 1056964608, 1065353216, 0);
		set_current_ped_weapon(&(uLocal_801[5]), &(iLocal_955[5]), true, 0, false, false);
		set_ped_can_be_targetted(&(uLocal_801[5]), true);
		set_entity_is_target_priority(&(uLocal_801[5]), true, 100f);
		func_80(&(uLocal_801[5]), func_79(1072590268, 0, -1));
		set_ped_config_flag(&(uLocal_801[5]), 65, true);
		func_81(&(uLocal_801[5]), 1);
		func_77(&(Local_37.f_5), &(uLocal_801[5]), 1);
		set_ped_config_flag(&(uLocal_801[5]), 6, true);
		set_ped_config_flag(&(uLocal_801[5]), 413, true);
		set_ped_config_flag(&(uLocal_801[5]), 330, true);
		set_ped_config_flag(&(uLocal_801[5]), 22, true);
	}
	if (!is_entity_dead(&(uLocal_801[6])))
	{
		remove_all_ped_weapons(&(uLocal_801[6]), true, true);
		func_82(&(uLocal_801[6]));
		set_combat_float(&(uLocal_801[6]), 40, 1f);
		set_ped_can_be_targetted(&(uLocal_801[6]), false);
		set_ped_config_flag(&(uLocal_801[6]), 23, false);
		set_entity_lod_dist(&(uLocal_801[6]), 150);
		set_ped_lod_multiplier(&(uLocal_801[6]), 5f);
		func_83(uLocal_801[6], 1);
		func_77(&(Local_37.f_5), &(uLocal_801[0]), 1);
	}
	func_84();
	func_85(uLocal_801[4], &iLocal_818, -1, 1);
	func_85(uLocal_801[5], &iLocal_818, 0, 1);
	func_85(uLocal_801[6], &iLocal_818, 3, 1);
	func_86(&(uLocal_801[2]), &Local_37, 0);
	func_86(&(uLocal_801[1]), &Local_37, 0);
	func_86(iVar816, &Local_37, 0);
	set_relationship_between_groups(6, iVar951, 707888648);
	set_relationship_between_groups(6, 707888648, iVar951);
	func_29(1);
}

void func_20(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2 && *uParam0 != *iParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (does_entity_exist((*iParam1)[iVar0]->f_11))
		{
			(*uParam0)[iVar0] = (*iParam1)[iVar0]->f_11;
		}
		iVar0++;
	}
}

void func_21()
{
	Local_231 = _create_anim_scene(Local_231.f_4, 0, func_87(0), false, true);
	Local_231.f_1 = _create_anim_scene(Local_231.f_5, 0, func_87(5), false, true);
	set_anim_scene_entity(Local_231, "Prisoner", &(uLocal_801[6]), 0);
	set_anim_scene_entity(Local_231, "Wagon", iVar816, 0);
	set_anim_scene_entity(Local_231.f_1, "Prisoner", &(uLocal_801[6]), 0);
	set_anim_scene_entity(Local_231.f_1, "Wagon", iVar816, 0);
	if (!is_string_null_or_empty(Local_231.f_4))
	{
		if (!_is_anim_scene_loaded(Local_231, true, false))
		{
			load_anim_scene(Local_231);
		}
	}
	if (!is_string_null_or_empty(Local_231.f_5))
	{
		if (!_is_anim_scene_loaded(Local_231.f_1, true, false))
		{
			load_anim_scene(Local_231.f_1);
		}
	}
	set_anim_scene_bool(Local_231, func_88(0), false, false);
	set_anim_scene_bool(Local_231.f_1, func_88(0), false, false);
	set_anim_scene_bool(Local_231.f_1, func_88(1), false, false);
	set_anim_scene_bool(Local_231.f_1, func_88(2), false, false);
}

bool func_22(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_89(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_90(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_91(&(uParam0->f_5));
			}
			func_44(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_92(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_93(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_94(&(uParam0->f_121));
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
					func_95(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_96(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_64(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_97(uParam0, uParam1[0]);
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

bool func_23()
{
	if (Local_37.f_48)
	{
		return false;
	}
	if (func_50(iVar817, 268435456))
	{
		if (!func_98(&uLocal_948))
		{
			func_99(&uLocal_948);
		}
		else if (func_100(&uLocal_948) > 60f)
		{
			if (is_entity_occluded(iVar816))
			{
				return true;
			}
		}
	}
	return false;
}

void func_24(var uParam0, int iParam1)
{
	func_101(uParam0, iParam1);
}

int func_25(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_102(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_103(uParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

int func_26()
{
	if (func_50(iVar817, 262144))
	{
		return 0;
	}
	if ((!is_entity_dead(iVar816) && !is_entity_dead(Global_35)) && is_ped_in_vehicle(Global_35, iVar816, true))
	{
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	if (func_50(iVar817, 4096) || func_50(iVar494, 4))
	{
		if (func_98(&uLocal_486))
		{
			if (func_100(&uLocal_486) > 1.5f)
			{
				return 1;
			}
		}
		if (!func_98(&uLocal_930))
		{
			func_99(&uLocal_930);
		}
		else
		{
			if (func_50(iVar494, 4) && iVar815 != 0)
			{
				if (iVar815 == &uLocal_801[6])
				{
					iVar0 = func_105(30f);
				}
				else
				{
					iVar0 = iVar815;
				}
			}
			else
			{
				iVar0 = func_105(30f);
			}
			if (iVar0 != 0)
			{
				if (func_50(iVar494, 4))
				{
					if (func_98(&uLocal_468) && func_100(&uLocal_468) > (1.5f + 1.5f))
					{
						func_106(iVar0);
						return 1;
					}
				}
				else
				{
					if (func_98(&uLocal_930))
					{
						fVar1 = func_100(&uLocal_930);
					}
					if (func_107(Global_35, iVar0, 1, 1) < (22f / 2f))
					{
						if (fVar1 > fVar488 && !func_98(&uLocal_486))
						{
							func_106(iVar0);
							func_99(&uLocal_486);
						}
						else if (func_98(&uLocal_468) && func_100(&uLocal_468) > 1.5f)
						{
							func_106(iVar0);
							return 1;
						}
						else if (!func_98(&uLocal_468))
						{
							if (fVar1 > (fVar488 * 0.5f))
							{
								if (func_108(0, 1, iVar0, 1) && func_108(0, 1, Global_35, 1))
								{
									func_109(iVar0);
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_28(bool bParam0, bool bParam1)
{
	if (!func_36(&(iLocal_814[0]), 0, 1))
	{
		iLocal_814[0] = func_110(&(iLocal_814[1]));
	}
	if (func_36(&(iLocal_814[0]), 0, 1))
	{
		vVar0 = { _get_object_offset_from_coords(get_entity_coords(&(iLocal_814[0]), true, false), get_entity_heading(&(iLocal_814[0])), 0f, 2.25f, 0f) };
		func_111(&vVar0, 2f);
		if (!func_70(vVar0) || bParam1)
		{
			if (bParam1)
			{
				if (_get_ped_in_draft_seat(iVar814, 1) == &iLocal_814[0] || _get_ped_in_draft_seat(iVar814, 0) == &iLocal_814[0])
				{
					_0xb36d3ec70963be60(iVar814, &(iLocal_814[0]));
				}
				clear_ped_tasks(&(iLocal_814[0]), 1, 0);
				_task_smart_flee_style_coord(&(iLocal_814[0]), Local_37.f_51, 3, 0, -1082130432, -1, 0);
				set_ped_config_flag(&(iLocal_814[0]), 136, true);
				set_ped_config_flag(&(iLocal_814[0]), 214, true);
				set_blocking_of_non_temporary_events(&(iLocal_814[0]), false);
				set_ped_as_no_longer_needed(iLocal_814[0]);
			}
			else if (bParam0)
			{
				set_blocking_of_non_temporary_events(&(iLocal_814[0]), true);
				if (_get_ped_in_draft_seat(iVar814, 1) == &iLocal_814[0] || _get_ped_in_draft_seat(iVar814, 0) == &iLocal_814[0])
				{
					_0xb36d3ec70963be60(iVar814, &(iLocal_814[0]));
				}
				clear_ped_tasks(&(iLocal_814[0]), 1, 0);
				task_follow_nav_mesh_to_coord(&(iLocal_814[0]), vVar0, 1f, 20000, 0.75f, 0, get_entity_heading(&(iLocal_814[0])));
				set_entity_can_be_damaged_by_relationship_group(&(iLocal_814[0]), false, iVar949);
			}
		}
	}
}

void func_29(bool bParam0)
{
	set_entity_only_damaged_by_player(&(uLocal_801[0]), bParam0);
	set_entity_only_damaged_by_player(Local_239[0]->f_11, bParam0);
	set_entity_only_damaged_by_player(&(uLocal_801[1]), bParam0);
	set_entity_only_damaged_by_player(Local_239[1]->f_11, bParam0);
	set_entity_only_damaged_by_player(&(uLocal_801[2]), bParam0);
	set_entity_only_damaged_by_player(Local_239[2]->f_11, bParam0);
	if (bParam0)
	{
	}
}

void func_30(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_44(iParam0, 16);
	}
	else
	{
		func_43(iParam0, 67108864);
		func_43(iParam0, 16);
	}
}

void func_31()
{
	if (func_50(iVar817, 16))
	{
		if (does_entity_exist(iVar816))
		{
			func_8(&(Local_37.f_5), 1);
			set_entity_proofs(iVar816, 0, false);
			func_112(&uLocal_819, 16);
		}
	}
}

void func_32(var uParam0)
{
	func_113((*uParam0)[0], 0, 0);
	func_113((*uParam0)[1], 0, 0);
}

void func_33(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_114();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_115(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

void func_34(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_35()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_116(&(uLocal_801[iVar0]), uLocal_793[iVar0], 831283580, 0, 0, 0);
		iVar0++;
	}
}

bool func_36(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_117(iParam0, iParam1);
}

void func_37()
{
	iVar0 = 4;
	while (iVar0 <= 5)
	{
		if (func_36(&(uLocal_801[iVar0]), 0, 1))
		{
			if (get_entity_health(&(uLocal_801[iVar0])) > 15)
			{
				_set_entity_health(&(uLocal_801[iVar0]), 15, 0);
			}
			_0x735662994e60a710(&(uLocal_801[iVar0]), 1);
			_0x91bab9e064f036cd(&(uLocal_801[iVar0]), 1f);
			func_24(&uLocal_495, 32);
		}
		iVar0++;
	}
}

bool func_38()
{
	func_118();
	if (iLocal_36 > 1)
	{
		func_119(uLocal_491[0], Local_231, "BOOL_BASE", 536870912);
		func_119(uLocal_491[0], Local_231.f_1, "BOOL_BASE", 536870912);
		func_119(uLocal_491[1], Local_231.f_1, "BOOL_COWER", 1073741824);
		func_119(uLocal_491[2], Local_231.f_1, "BOOL_DEJECTED", -2147483648);
	}
	func_120();
	func_121(&(uLocal_801[4]), iLocal_964[0]);
	func_121(&(uLocal_801[5]), iLocal_964[1]);
	func_122(&(uLocal_801[0]), &(uLocal_809[0]), &(uLocal_899[0]), 0, &uLocal_593);
	func_122(&(uLocal_801[1]), &(uLocal_809[1]), &(uLocal_899[1]), 1, &uLocal_628);
	func_122(&(uLocal_801[2]), &(uLocal_809[2]), &(uLocal_899[2]), 2, &uLocal_663);
	func_123();
	func_124(&(uLocal_801[6]));
	func_125();
	func_126();
	func_127();
	func_128();
	func_129();
	func_130();
	if (iLocal_36 > 4)
	{
		func_131();
	}
	switch (iLocal_36)
	{
		case 0:
			if (func_132())
			{
				func_133(iVar816, 0);
				set_entity_can_be_damaged(&(uLocal_801[6]), false);
				set_entity_can_be_damaged(&(uLocal_801[5]), false);
				func_134();
				func_135();
				_set_anim_scene_playback_list_bool(Local_231, func_87(0), true);
				start_anim_scene(Local_231);
				func_136();
				_0xbc4735f48cd983ef(iVar816, 1);
				Local_37.f_178 = 1;
				iLocal_36 = 1;
			}
			break;
		case 1:
			if (func_137(&Local_37, 1f, 1114636288, 55f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
			{
				if (func_36(&(uLocal_801[5]), 0, 1))
				{
					set_entity_can_be_damaged(&(uLocal_801[5]), true);
				}
				func_99(&uLocal_0);
				func_94(&(Local_37.f_121));
				iLocal_36 = 2;
			}
			else
			{
				func_138();
				func_139();
				func_140();
			}
			break;
		case 2:
			func_141();
			func_140();
			if (func_100(&uLocal_0) > 2.5f)
			{
				func_24(&uLocal_819, 65536);
				iLocal_36 = 3;
			}
			break;
		case 3:
			func_141();
			func_140();
			if (func_50(iVar817, 131072))
			{
				func_29(0);
				iLocal_36 = 6;
			}
			break;
		case 4:
			func_142(3, 1);
			func_142(2, 1);
			func_142(5, 1);
			func_142(6, 1);
			func_133(iVar816, 1);
			set_entity_can_be_damaged(&(uLocal_801[6]), true);
			if (iVar961 == 4 && func_50(iVar817, 1))
			{
			}
			else
			{
				iLocal_963 = 2;
			}
			iLocal_964[0] = 5;
			iLocal_964[1] = 5;
			iLocal_967[0] = 5;
			iLocal_967[1] = 5;
			iLocal_967[2] = 5;
			iLocal_967[3] = 5;
			func_37();
			if (!func_50(iVar817, 65536))
			{
				func_24(&uLocal_819, 65536);
			}
			iLocal_36 = 5;
			break;
		case 5:
			func_143();
			func_144();
			func_145();
			func_146(6);
			if (func_147() || func_148())
			{
				Local_37.f_44 = 1;
				iLocal_36 = 6;
			}
			break;
		case 6:
			if (!func_50(iVar817, 2048))
			{
				_0xbc4735f48cd983ef(iVar816, 0);
				func_24(&uLocal_819, 2048);
			}
			if (!func_36(&(uLocal_801[6]), 0, 1))
			{
				iLocal_36 = 8;
			}
			else
			{
				if (func_50(iVar817, 1))
				{
					Local_37.f_44 = 1;
					iLocal_36 = 7;
				}
				Jump @1004; //curOff = 851
				func_133(iVar816, 1);
				set_entity_can_be_damaged(&(uLocal_801[6]), true);
				if (func_36(&(uLocal_801[6]), 0, 1))
				{
					if (func_50(iVar817, 262144))
					{
						func_34(&iLocal_907);
						iLocal_36 = 8;
					}
				}
				else
				{
					func_34(&iLocal_907);
					iLocal_36 = 8;
				}
				Jump @1004; //curOff = 927
				func_149();
				if (!Local_37.f_46)
				{
					func_150();
				}
				if (Local_37.f_44 == 0)
				{
					Local_37.f_44 = 1;
				}
				if (func_151(1117782016))
				{
					if (!func_50(iVar877, 8))
					{
						trigger_music_event("REOT_END");
						func_24(&uLocal_879, 8);
					}
				}
			}
			return false;
			default:
				break;
	}
}

bool func_39(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_152())
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
			else if (func_153(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_64(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_64(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_64(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_154(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_154(Global_36, vVar1) > fVar0)
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

bool func_40(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_41(int iParam0)
{
	func_7(iParam0, 0);
	func_155(iParam0, 0);
	func_5(iParam0, 1);
	func_30(iParam0, 1);
	func_156(iParam0, 0);
	func_157(iParam0, 1);
	func_158(iParam0, 1, 1, 1);
}

var func_42(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_159(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_160(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_159(sVar0, iParam1, 0, 0, 1, 1);
}

void func_43(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_44(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_45(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (func_161(iParam0) == 0)
		{
			_0x04f0579dbdd32f34(iParam0);
		}
	}
}

void func_46()
{
	if (!Local_37.f_48 || func_50(iVar817, 256))
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (does_entity_exist(&(uLocal_801[iVar0])))
			{
				if (!func_162(&(uLocal_801[iVar0]), 1114636288))
				{
					delete_ped(uLocal_801[iVar0]);
				}
				else
				{
					task_smart_flee_ped(&(uLocal_801[iVar0]), Global_35, 500f, -1, 0, 1077936128, 0);
					_0x39a2fc5af55a52b1(&(uLocal_801[iVar0]), -1);
					func_163(&(uLocal_801[iVar0]), 0);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (does_entity_exist(&(uLocal_809[iVar0])))
			{
				if (!func_164(&(uLocal_809[iVar0]), 1116471296, -1082130432, -1082130432, -1082130432))
				{
					delete_ped(uLocal_809[iVar0]);
				}
				else
				{
					task_smart_flee_ped(&(uLocal_809[iVar0]), Global_35, 500f, -1, 0, 1077936128, 0);
					_0x39a2fc5af55a52b1(&(uLocal_809[iVar0]), -1);
					func_163(&(uLocal_809[iVar0]), 0);
				}
			}
			iVar0++;
		}
		if (does_entity_exist(iVar816))
		{
			if ((_0x7f9b9791d4cb71f6(Global_35, iVar816, false, 0) == 0 || func_165(iVar816, 1, 1) > 80f) || func_50(iVar817, 256))
			{
				delete_vehicle(&iLocal_818);
			}
			else
			{
				set_vehicle_as_no_longer_needed(&iLocal_818);
				_0xc399cc89fba05da0(iVar816, 1);
			}
		}
		func_74(vLocal_825, 8f, 1, 0, 0, 0, 0);
		_0x9851de7aec10b4e1(vLocal_825, 8f, 1, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (does_entity_exist(&(uLocal_801[iVar0])))
			{
				func_166(&(uLocal_801[iVar0]), 0, -1082130432, -1082130432, -1, -1, -1, -1082130432);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (does_entity_exist(&(uLocal_809[iVar0])))
			{
				func_166(&(uLocal_801[iVar0]), 0, -1082130432, -1082130432, -1, -1, -1, -1082130432);
			}
			iVar0++;
		}
	}
}

void func_47()
{
	if (_does_anim_scene_exist(Local_231))
	{
		_delete_anim_scene(Local_231);
	}
	if (_does_anim_scene_exist(Local_231.f_1))
	{
		_delete_anim_scene(Local_231.f_1);
	}
}

void func_48()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iVar0 != 4 && iVar0 != 5)
		{
			if (func_36(&(uLocal_801[iVar0]), 0, 1))
			{
				if ((iVar0 == 6 && iVar961 == 12) || (iVar0 != 6 && &iLocal_967[iVar0] == 10))
				{
					task_smart_flee_ped(&(uLocal_801[iVar0]), Global_35, 500f, -1, 0, 1077936128, 0);
					_0x39a2fc5af55a52b1(&(uLocal_801[iVar0]), -1);
					if (get_mount(&(uLocal_801[iVar0])) != 0)
					{
						_0x39a2fc5af55a52b1(get_mount(&(uLocal_801[iVar0])), -1);
					}
					set_ped_keep_task(&(uLocal_801[iVar0]), true);
				}
			}
		}
		iVar0++;
	}
}

void func_49(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_167(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_168(uParam0->f_3, 524288);
		}
	}
	if (func_36(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_36(uParam1[iVar0], 0, 0))
			{
				func_163(uParam1[iVar0], bVar3);
				if (func_169(uParam0, (*uParam1)[iVar0]))
				{
					func_170((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_36(uParam1[iVar0], 0, 1))
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
							func_172(uParam1[iVar0], 1073741824, func_171(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_173(uParam0);
	}
	func_174(uParam0);
	if (!uParam0->f_186)
	{
		func_89(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_175(uParam0->f_3, uParam0->f_185);
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
		func_176(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

bool func_50(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_51(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_177(iVar0))
	{
		return false;
	}
	if (func_40(iVar0, 1) || func_40(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_52(var uParam0)
{
	iVar0 = func_178(uParam0->f_3);
	iVar1 = func_179(1);
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

int func_53()
{
	return Global_1897952->f_41;
}

void func_54()
{
	switch (iVar464)
	{
		case 1:
		case 9:
			Local_239[0]->f_1 = 347599949;
			Local_239[0] = 22;
			StringCopy(&(Local_239[0]->f_23), "1018_G_M_M_UniDuster_01_IRISH_01", 64);
			Local_239[0]->f_3 = 1631452107;
			Local_239[0]->f_12 = func_180(0, 1, 0);
			func_181(&(Local_239[0]->f_22));
			Local_239[1]->f_1 = 347599949;
			Local_239[1] = 22;
			StringCopy(&(Local_239[1]->f_23), "0362_G_M_M_UniDuster_03_WHITE_02", 64);
			Local_239[1]->f_3 = -416348257;
			Local_239[1]->f_12 = func_180(0, 2, 0);
			func_181(&(Local_239[1]->f_22));
			Local_239[2]->f_1 = 347599949;
			Local_239[2] = 22;
			StringCopy(&(Local_239[2]->f_23), "0356_G_M_M_UniDuster_01_WHITE_02", 64);
			Local_239[2]->f_3 = -194993662;
			Local_239[2]->f_12 = func_180(0, 3, 0);
			func_181(&(Local_239[2]->f_22));
			Local_239[6]->f_1 = 347599949;
			Local_239[6] = 4;
			StringCopy(&(Local_239[6]->f_23), "0360_G_M_M_UniDuster_03_IRISH_01", 64);
			Local_239[6]->f_3 = -1713807682;
			func_181(&(Local_239[6]->f_22));
			Local_239[4]->f_1 = -1891246613;
			Local_239[4] = 6;
			StringCopy(&(Local_239[4]->f_23), "0984_S_M_M_AmbientLawRural_White_07", 64);
			Local_239[5]->f_1 = -1891246613;
			Local_239[5] = 6;
			StringCopy(&(Local_239[5]->f_23), "0993_S_M_M_DispatchLawRural_White_08", 64);
			func_182(&Local_37, 0);
			break;
		case 0:
		case 11:
			Local_239[0]->f_1 = -628956517;
			Local_239[0] = 22;
			StringCopy(&(Local_239[0]->f_23), "1026_G_M_Y_UniExConfeds_01_WHITE_04", 64);
			Local_239[0]->f_3 = 1631452107;
			Local_239[0]->f_12 = func_180(2, 1, 0);
			Local_239[1]->f_1 = -628956517;
			Local_239[1] = 22;
			StringCopy(&(Local_239[1]->f_23), "0176_G_M_O_UniExConfeds_01_WHITE_03", 64);
			Local_239[1]->f_3 = -416348257;
			Local_239[1]->f_12 = func_180(2, 2, 0);
			Local_239[2]->f_1 = -628956517;
			Local_239[2] = 22;
			StringCopy(&(Local_239[2]->f_23), "0175_G_M_O_UniExConfeds_01_WHITE_02", 64);
			Local_239[2]->f_3 = -194993662;
			Local_239[2]->f_12 = func_180(2, 3, 0);
			Local_239[6]->f_1 = -628956517;
			Local_239[6] = 4;
			Local_239[6]->f_3 = -1713807682;
			StringCopy(&(Local_239[6]->f_23), "0178_G_M_Y_UniExConfeds_01_WHITE_02", 64);
			Local_239[4]->f_1 = -1891246613;
			Local_239[4] = 6;
			StringCopy(&(Local_239[4]->f_23), "0991_S_M_M_DispatchLawRural_White_06", 64);
			Local_239[5]->f_1 = -1891246613;
			Local_239[5] = 6;
			StringCopy(&(Local_239[5]->f_23), "0985_S_M_M_AmbientLawRural_White_08", 64);
			func_182(&Local_37, 2);
			break;
	}
}

void func_55(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_183(&((*iParam0)[iVar0]->f_1));
		func_183(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_56()
{
	Local_231.f_4 = "script@beat@wilderness@outlawTransport@re_ot_gang_frees";
	Local_231.f_5 = "script@beat@wilderness@outlawTransport@re_ot_player_frees";
}

int func_57(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return _request_scenario_type(iParam0, iParam1, iParam2, iParam3);
}

void func_58()
{
	Local_31[0] = "script_re@outlaw_transportgang_release";
	Local_31[1] = "script_re@outlaw_transportplayer_release";
	func_184(&(Local_31[0]), &uLocal_14);
	func_184(&(Local_31[1]), &uLocal_14);
}

bool func_59(var uParam0)
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

bool func_60(int iParam0)
{
	return _has_scenario_type_loaded(iParam0, false);
}

bool func_61(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_185((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_62(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_186(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_187(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_92(iParam0, 128))
			{
				if (!func_188(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_189(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_190(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_70(*uParam1))
				{
					return func_191(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_192(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_187(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_193(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_194(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_195(vdist(Global_36, *uParam1), iParam0))
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
			if (func_92(iParam0, 128))
			{
				if (!func_196(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_191(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_189(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_193(uParam1))
					{
						return func_191(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_197(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_187(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_191(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_42("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_42("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_63(var uParam0, int iParam1)
{
	if (func_64(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_199(iParam1, func_198(uParam0), &(uParam0->f_172)))
		{
			if (func_36(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_64(int iParam0, int iParam1)
{
	if (!func_200(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_65(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_201(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_64(uParam0->f_3, 1) && !func_64(uParam0->f_3, 32))
	{
		func_201(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_64(uParam0->f_3, 2) && !func_64(uParam0->f_3, 32))
	{
		func_201(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_202(uParam0->f_171, 1);
	}
	if (func_64(uParam0->f_3, 1))
	{
		func_201(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_203(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_66(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

void func_67(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (iParam7 == 0)
	{
		iParam7 = func_204(997958153, 1);
	}
	if (iParam7 == 0)
	{
		iParam7 = -1038436471;
	}
	uParam0->f_12 = iParam7;
	uParam0->f_15 = { vParam1 };
	uParam0->f_18 = fParam4;
	uParam0->f_13 = iParam5;
	uParam0->f_19 = iParam6;
}

bool func_68(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

bool func_69(int iParam0, int iParam1)
{
	if (!func_205(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = func_206(iParam0);
	}
	bVar1 = get_random_int_in_range(0, 100) < iVar0;
	return bVar1;
}

bool func_70(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_71(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_207(vVar0, vVar3, 0f) };
	vVar9 = { func_208(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_72(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_207(vVar0, vVar3, 0f) };
	vVar9 = { func_208(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		set_roads_back_to_original(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		set_roads_in_area(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		_0xafe2ae66f6251c66(vVar6, vVar9, iParam6, 1);
	}
}

void func_73(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_74(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	clear_area(vParam0, fParam3, iVar0);
}

bool func_75(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
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
		if (func_209() || !func_210((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_211(iParam3, 1);
	bVar1 = func_211(iParam3, 2);
	bVar2 = !func_211(iParam3, 4);
	bVar3 = func_211(iParam3, 8);
	bVar4 = !func_211(iParam3, 16);
	bVar5 = func_211(iParam3, 32);
	bVar6 = func_211(iParam3, 64);
	return func_212(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_77(var uParam0, int iParam1, int iParam2)
{
	if (!is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_78(var uParam0, int iParam1, int iParam2)
{
	if (is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseTeamA", true);
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	decor_set_int(iParam1, "HorseScriptCreator", get_hash_of_this_script_name());
}

int func_79(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_213(1811977508, 1, 0))
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
			if (func_214(iVar25, 0) && func_215(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_80(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_216(iParam0);
		return func_217(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_81(int iParam0, bool bParam1)
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

void func_82(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		decor_set_bool(iParam0, "loot_empty", true);
	}
}

int func_83(var uParam0, bool bParam1)
{
	if (!is_entity_dead(*uParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(*uParam0, 186, false);
			decor_set_bool(*uParam0, "bDeadOrAlive", true);
		}
		decor_set_bool(*uParam0, "bIsCriminal", true);
		func_218(4);
		return 1;
	}
	return 0;
}

void func_84()
{
	get_closest_vehicle_node_with_heading(vLocal_825, &uVar1, &uVar0, 1, 3f, 0);
	iLocal_818 = func_219(iVar915, vLocal_825, uVar819, 1, 1, 0);
	set_vehicle_on_ground_properly(iVar816, 0f);
	set_entity_can_be_damaged_by_relationship_group(iVar816, false, iVar951);
	set_entity_proofs(iVar816, 2, false);
	func_220(iVar816);
	func_24(&uLocal_819, 16);
	iLocal_869 = add_shocking_event_for_entity(513747494, iVar816, 0f, 30f, 50f, -1f, -1f, 180f, false, false, -1, -1);
	if (!func_50(iVar817, 134217728))
	{
	}
	func_97(&Local_37, iVar816);
}

int func_85(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(*uParam0))
	{
		return 0;
	}
	if (!is_vehicle_driveable(*iParam1, false, false))
	{
		return 0;
	}
	if (get_ped_in_vehicle_seat(*iParam1, iParam2) != *uParam0)
	{
		if (!is_vehicle_seat_free(*iParam1, iParam2))
		{
			if (iParam3 && func_221(*iParam1))
			{
				iParam2 = func_222(*iParam1);
			}
			else
			{
				return 0;
			}
		}
		if (is_ped_on_mount(*uParam0))
		{
			_remove_ped_from_mount(*uParam0, true, false);
		}
		set_ped_into_vehicle(*uParam0, *iParam1, iParam2);
	}
	return 1;
}

int func_86(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_223(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

char* func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_BASE_LOOPS";
		case 1:
			return "PBL_HELL_YEAH_BOYS";
		case 2:
			return "PBL_GO_ON_SHOOT";
		case 3:
			return "PBL_GET_ON_WITH_IT";
		case 4:
			return "PBL_SHOOTS_LOCK";
		case 5:
			return "PBL_BASE_IDLE";
		case 6:
			return "PBL_BASE_TO_DEJECTED";
		case 7:
			return "PBL_DEJECTED_LOOP";
		case 12:
			return "PBL_DEJECTED_TO_BASE";
		case 8:
			return "PBL_COWER_TO_DEJECTED";
		case 9:
			return "PBL_COWER_TO_FREE";
		case 10:
			return "PBL_DEJECTED_TO_COWER";
		case 11:
			return "PBL_DEJECTED_TO_FREE";
		case 13:
			return "PBL_HIDE_TO_BASE";
		case 14:
			return "PBL_IDLE_TO_COWER";
		case 15:
			return "PBL_EXCITED_BL";
		case 16:
			return "PBL_EXCITED_BR";
		case 17:
			return "PBL_EXCITED_FRONT";
		case 18:
			return "PBL_EXCITED_RIGHT";
		case 19:
			return "PBL_I_JUST_BET";
		case 20:
			return "PBL_TELL_THE_LAW_BACK_LEFT";
		case 21:
			return "PBL_TELL_THE_LAW_BACK_RIGHT";
		case 22:
			return "PBL_TELL_THE_LAW_FRONT";
		case 23:
			return "PBL_TELL_THE_LAW_RIGHT";
		case 24:
			return "PBL_THE_LAW_GOT_ME";
		case 25:
			return "PBL_WHERES_THE_SPORT";
		case 26:
			return "PBL_YOU_KILLED_BACK_LEFT";
		case 27:
			return "PBL_YOU_KILLED_BACK_RIGHT";
		case 28:
			return "PBL_YOU_KILLED_FRONT";
		case 29:
			return "PBL_YOU_KILLED_RIGHT";
		case 30:
			return "PBL_YOU_SHOOT_THAT_LOCK";
		case 31:
			return "PBL_YOU_SON_OF_A_BACK_LEFT";
		case 32:
			return "PBL_YOU_SON_OF_A_BACK_RIGHT";
		case 33:
			return "PBL_YOU_SON_OF_A_FRONT";
		case 34:
			return "PBL_YOU_SON_OF_A_RIGHT";
		case 35:
			return "PBL_UPSET_BR";
		case 36:
			return "PBL_UPSET_BL";
		case 37:
			return "PBL_UPSET_FRONT";
		case 38:
			return "PBL_UPSET_RIGHT";
		case 39:
			return "PBL_BASE_IDLE_TO_FREE";
		default:
			break;
	}
	return "";
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BOOL_BASE";
		case 1:
			return "BOOL_COWER";
		case 2:
			return "BOOL_DEJECTED";
		default:
			break;
	}
	return "";
}

void func_89(var uParam0, int iParam1)
{
	vVar0 = { func_224(uParam0) };
	iVar3 = func_175(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_90(var uParam0, var uParam1)
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

void func_91(var uParam0)
{
	func_5(uParam0, 1);
	func_225(uParam0, 20);
}

bool func_92(int iParam0, int iParam1)
{
	if (!func_200(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_93(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_200(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_226())
	{
		func_227(1);
	}
	func_228(iParam2, uParam0->f_43);
	func_229(iParam2, 0, 0, 0, 0);
	if (func_230(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_167(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_231(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_94(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_95(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_232())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_92(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_93(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_94(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_233(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_234(uParam0, bVar0);
		func_235(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_236(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_93(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_94(&(uParam0->f_121));
		}
	}
}

bool func_96(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_64(uParam2->f_3, 1))
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
			if (func_237())
			{
				fVar0 = 15f;
			}
		}
		if (func_238(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_239(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_238(uParam2, fVar1))
		{
			if (!func_240((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_241(uParam2->f_3, 2) && func_242(2))
		{
			return false;
		}
		if (func_64(iParam0, 4194304) || func_64(iParam0, 33554432))
		{
			if (func_243(1))
			{
				return false;
			}
		}
	}
	if (func_244(Global_35))
	{
		return false;
	}
	if (func_245(0, 1, 1) && !func_246(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_64(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_247(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_239(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_248())
		{
			return false;
		}
		iVar2 = func_250(func_249());
		if (func_251(iVar2))
		{
			if (func_252(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_253(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_254(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_97(var uParam0, int iParam1)
{
	if (func_255(uParam0->f_51))
	{
		func_256(uParam0->f_51, 0);
		fVar0 = func_257(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_258());
		bVar1 = func_171(!func_64(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_260(iVar2, func_259(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_98(var uParam0)
{
	return func_261(*uParam0, 1);
}

void func_99(var uParam0)
{
	func_262(uParam0, 0f);
}

float func_100(var uParam0)
{
	if (!func_98(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_263(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_264() - uParam0->f_1);
}

void func_101(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_102(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_103(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_265(iParam2, 1, iVar0);
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
			if (func_266(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_267(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_268(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_267(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_269(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_267(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_270(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_267(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_239(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_267(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_271(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_272(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_267(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_273(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_267(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_274(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_267(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_274(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_267(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_275(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_267(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_276(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_267(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_277(iParam2, 4000))
				{
					if ((func_278(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_279(iParam2, iParam0)) && func_280(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_267(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_278(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_279(iParam2, iParam0)) && func_280(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_267(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_281(iParam0, Global_1935630->f_41))
							{
								func_282();
								*uParam3 = 2;
								func_267(iParam0, iParam2, *uParam3);
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
						if (func_281(iParam0, Global_1935630->f_41))
						{
							func_282();
							*uParam3 = 2;
							func_267(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_283(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_114() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_282();
						*uParam3 = 2;
						func_267(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_284())
					{
						if (func_281(iParam0, Global_1935630->f_42))
						{
							func_282();
							*uParam3 = 2;
							func_267(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_285(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_267(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_286(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_267(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_287(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_267(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_288(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_267(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_289(iParam2, 4000))
				{
					if (func_290(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_267(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_291(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_267(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_292(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_267(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_104()
{
	if (&Local_37.f_98[6] < 7f)
	{
		if (!func_98(&uLocal_945))
		{
			func_99(&uLocal_945);
		}
		if (func_100(&uLocal_945) > 1.25f)
		{
			return true;
		}
	}
	else if (func_98(&uLocal_945))
	{
		func_293(&uLocal_945);
	}
	return false;
}

int func_105(float fParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_36(&(uLocal_801[iVar0]), 0, 1))
		{
			if (&Local_37.f_98[iVar0] < fParam0)
			{
				uVar1 = &uLocal_801[iVar0];
			}
		}
		iVar0++;
	}
	return uVar1;
}

void func_106(int iParam0)
{
	if (func_50(iVar494, 32))
	{
		return;
	}
	if (bVar865)
	{
		func_295(iParam0, Global_35, func_294("AGGRO_FEUD", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 0, 0, 0);
	}
	else if (func_50(iVar816, 4096))
	{
		func_295(iParam0, Global_35, func_294("WARN_AGGRO", iParam0), "", 75f, 0, 0, 0, 1, 0, 1, 1808677283, 0, 0, 0);
	}
	else
	{
		func_296(iParam0, "OPENS_FIRE", 1744022339, Global_35, 1, 0, 0, 1);
	}
	func_24(&uLocal_497, 32);
}

float func_107(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_108(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_297(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_298(fParam0))
	{
		return false;
	}
	return true;
}

void func_109(int iParam0)
{
	if (!func_50(iVar816, 8192))
	{
		if (iParam0 == &uLocal_801[1] && iVar464 == 0)
		{
			func_295(iParam0, Global_35, "HEADS_UP_CONFRONT", "", 75f, 2, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		}
		else
		{
			func_295(iParam0, Global_35, "HEADS_UP_CONFRONT", "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		}
		fLocal_490 = (fVar487 + 7f);
		func_24(&uLocal_819, 8192);
	}
}

int func_110(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!is_entity_dead(iVar815))
		{
			iVar1 = _get_ped_in_draft_seat(iVar815, iVar0);
			if (iVar1 == iParam0)
			{
			}
			else if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
			{
				if (_0xb36d3ec70963be60(iVar815, iVar1))
				{
					return iVar1;
				}
			}
			iVar0++;
			return 0;
		}
	}
}

int func_111(var uParam0, float fParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

void func_112(int iParam0, int iParam1)
{
	func_299(iParam0, iParam1);
}

void func_113(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_300(iParam0, 13))
	{
		func_301(iParam0, 0);
	}
	else
	{
		func_302(iParam0, 0);
	}
	if (func_303(iParam0->f_6))
	{
		if (bParam2)
		{
			func_304(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_114()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_115(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_44(iParam0, 134217728);
	}
	else
	{
		func_43(iParam0, 134217728);
	}
}

void func_116(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_117(int iParam0, int iParam1)
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
	if (func_50(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_50(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_50(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_118()
{
	if (func_50(iVar817, 1) || iVar907 != 0)
	{
		return;
	}
	if (does_entity_exist(iVar816))
	{
		if (&Local_37.f_98[6] < 130f && &Local_37.f_98[6] != 0f)
		{
			if (_0x2fa86833e3617e2d(iVar816) > 0)
			{
				iVar0 = _0x58f2244c1286d09a(iVar816, 0);
				if (iVar0 != 0)
				{
					iLocal_909 = iVar0;
				}
			}
		}
	}
}

void func_119(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!_does_anim_scene_exist(iParam1) || !_is_anim_scene_started(iParam1, false))
	{
		return;
	}
	if (func_50(iVar813, iParam3))
	{
		if (*uParam0 > 1)
		{
			if (are_strings_equal(sParam2, func_88(1)))
			{
				if (!_0x8d81e7824b7753f7(iParam1, func_305(3), 1))
				{
					bVar0 = true;
				}
			}
			else if (are_strings_equal(sParam2, func_88(0)) || are_strings_equal(sParam2, func_305(1)))
			{
				if (!_0x8d81e7824b7753f7(iParam1, func_305(0), 1) && !_0x8d81e7824b7753f7(iParam1, func_305(1), 1))
				{
					bVar0 = true;
				}
			}
			else if (are_strings_equal(sParam2, func_88(2)))
			{
				if (!_0x8d81e7824b7753f7(iParam1, func_305(2), 1))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				set_anim_scene_bool(iParam1, sParam2, false, false);
				func_112(&uLocal_819, iParam3);
			}
		}
		*uParam0++;
	}
}

void func_120()
{
	if (func_50(iVar494, 1))
	{
		return;
	}
	if (func_50(iVar494, 2048))
	{
		if (!func_98(&uLocal_480))
		{
			func_99(&uLocal_480);
		}
		else if (func_100(&uLocal_480) > 2f)
		{
			func_306(Local_508[0], &uLocal_593);
			func_306(Local_508[1], &uLocal_628);
			func_306(Local_508[2], &uLocal_663);
			func_306(Local_508[3], &uLocal_698);
			func_24(&uLocal_496, 1);
		}
	}
}

void func_121(int iParam0, var uParam1)
{
	if (*uParam1 > 3 || Local_37.f_46)
	{
		if (!func_36(iParam0, 0, 1))
		{
			return;
		}
	}
	switch (*uParam1)
	{
		case 0:
			if (iParam0 == &uLocal_801[4])
			{
				func_307(&iParam0, iVar814, -1);
				func_308(&(uLocal_801[4]), 0, 0);
			}
			else
			{
				set_ped_accuracy(&(uLocal_801[5]), 10);
				func_307(&iParam0, iVar814, 0);
			}
			*uParam1 = 1;
			break;
		case 1:
			if (func_50(iVar875, 1))
			{
				if (iParam0 == &uLocal_801[4])
				{
					func_308(&(uLocal_801[4]), 0, 0);
				}
				else if (iParam0 == &uLocal_801[5])
				{
					if (func_36(iParam0, 0, 1))
					{
						set_ped_combat_attributes(&(uLocal_801[5]), 3, false);
						register_hated_targets_around_ped(&(uLocal_801[5]), 100f);
						func_309(&(uLocal_801[5]), get_entity_coords(&(uLocal_801[5]), true, false), 3f, 0, 0);
					}
				}
				*uParam1 = 2;
			}
			break;
		case 2:
			if (func_50(iVar815, 65536) || iLocal_36 > 1)
			{
				if (iParam0 == &uLocal_801[5])
				{
					if (func_36(iParam0, 0, 1))
					{
						register_hated_targets_around_ped(&(uLocal_801[5]), 100f);
						task_combat_hated_targets(&(uLocal_801[5]), -1f);
					}
				}
				*uParam1 = 3;
			}
			else if (iParam0 == &uLocal_801[5])
			{
				func_310(&(uLocal_801[5]), &(uLocal_801[1]), &(uLocal_899[5]), 8192, 1);
			}
			break;
		case 3:
			if (iParam0 == &uLocal_801[4])
			{
				if (func_36(&(uLocal_801[4]), 0, 1))
				{
					func_308(&(uLocal_801[4]), 0, 0);
				}
			}
			else if (iParam0 == &uLocal_801[5])
			{
				if (!func_50(iVar815, 1024))
				{
					if (func_36(&(uLocal_801[5]), 0, 1))
					{
						set_ped_accuracy(&(uLocal_801[5]), 10);
					}
					if (!func_311(iParam0))
					{
						set_ped_sphere_defensive_area(iParam0, get_entity_coords(iParam0, true, false), 5f, 0, false, 0);
						register_hated_targets_around_ped(iParam0, 100f);
						task_combat_hated_targets_around_ped(iParam0, 30f, 0, 0);
						set_ped_combat_attributes(iParam0, 1, false);
						func_37();
						func_24(&uLocal_819, 1024);
					}
				}
				*uParam1 = 4;
			}
			break;
		case 4:
			if (func_98(&uLocal_927))
			{
				func_312();
			}
			break;
		case 5:
			func_313(iParam0);
			*uParam1 = 6;
			break;
		case 6:
			func_312();
			break;
	}
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (&iLocal_967[iParam3] > 3)
	{
		if (!func_36(iParam0, 0, 1))
		{
			return;
		}
	}
	if (&iLocal_967[iParam3] > 1)
	{
		func_314(iParam3, uParam4);
		func_315();
	}
	switch (&iLocal_967[iParam3])
	{
		case 0:
			if (func_50(iVar872, 1))
			{
				if (func_36(iParam0, 0, 1))
				{
					task_aim_at_entity(iParam0, iVar811, -1, 0, 0);
					iLocal_967[iParam3] = 1;
				}
			}
			break;
		case 1:
			if (func_50(iVar812, 65536))
			{
				if (func_36(iParam0, 0, 1))
				{
					clear_ped_tasks(iParam0, 1, 0);
					clear_sequence_task(&iParam2);
					if (iParam0 == &uLocal_801[0])
					{
						open_sequence_task(&iParam2);
						if (iVar458 != 12)
						{
							task_go_to_coord_while_aiming_at_entity(0, *vLocal_828[0], &(uLocal_801[5]), uVar813, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
							task_dismount_animal(0, 0, 0, 0, 0, 0);
						}
						task_combat_ped(0, &(uLocal_801[5]), 0, 0);
						func_316(&(uLocal_801[0]), &iParam2, 0, 0, 1, 1);
					}
					else if (iParam0 == &uLocal_801[1])
					{
						open_sequence_task(&iParam2);
						if (iVar458 != 12)
						{
							task_go_to_coord_while_aiming_at_entity(0, *vLocal_828[1], &(uLocal_801[5]), uVar813, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
							task_dismount_animal(0, 0, 0, 0, 0, 0);
						}
						task_combat_ped(0, &(uLocal_801[5]), 0, 0);
						func_316(&(uLocal_801[1]), &iParam2, 0, 0, 1, 1);
					}
					else if (iParam0 == &uLocal_801[2])
					{
						open_sequence_task(&iParam2);
						if (!is_ped_on_mount(&(uLocal_801[2])))
						{
							task_shoot_at_entity(0, &(uLocal_801[5]), 10000, -687903391, 0);
						}
						if (!func_70(*vLocal_828[2]))
						{
							task_go_to_coord_while_aiming_at_entity(0, *vLocal_828[2], &(uLocal_801[5]), uVar813, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
						}
						task_combat_ped(0, &(uLocal_801[5]), 0, 0);
						func_316(&(uLocal_801[2]), &iParam2, 0f, 0.75f, 1, 1);
					}
					else if (iParam0 == &uLocal_801[3])
					{
						open_sequence_task(&iParam2);
						if (!is_ped_on_mount(&(uLocal_801[3])))
						{
							task_shoot_at_entity(0, &(uLocal_801[5]), 10000, -687903391, 0);
						}
						if (!func_70(*vLocal_828[3]))
						{
							task_go_to_coord_while_aiming_at_entity(0, *vLocal_828[3], &(uLocal_801[5]), uVar813, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
						}
						task_combat_ped(0, &(uLocal_801[5]), 0, 0);
						func_316(&(uLocal_801[3]), &iParam2, 0f, 0.75f, 1, 1);
					}
					iLocal_967[iParam3] = 3;
				}
			}
			else if (iParam0 == &uLocal_801[0])
			{
				func_310(iParam0, iVar811, iParam2, 1024, 0);
			}
			else if (iParam0 == &uLocal_801[1])
			{
				func_310(iParam0, iVar811, iParam2, 2048, 0);
			}
			else if (iParam0 == &uLocal_801[2])
			{
				func_310(iParam0, iVar811, iParam2, 4096, 0);
			}
			break;
		case 3:
			if (func_50(iVar812, 131072))
			{
				iLocal_912 = &uLocal_801[2];
				iLocal_885 = 2;
				if (iParam0 != iVar905)
				{
					func_317(iParam3, 1);
				}
				func_318(&(uLocal_801[iParam3]), iParam3);
				iLocal_967[iParam3] = 4;
			}
			else if (!func_98(&uLocal_939))
			{
				func_99(&uLocal_939);
				if (func_36(&(uLocal_801[0]), 0, 1))
				{
					set_ped_accuracy(&(uLocal_801[0]), 100);
					func_319(&(uLocal_801[0]), 0);
				}
				if (func_36(&(uLocal_801[1]), 0, 1))
				{
					set_ped_accuracy(&(uLocal_801[1]), 100);
					func_319(&(uLocal_801[1]), 1);
				}
				if (func_36(&(uLocal_801[2]), 0, 1))
				{
					set_ped_accuracy(&(uLocal_801[2]), 100);
					func_319(&(uLocal_801[2]), 2);
				}
				if (func_36(&(uLocal_801[3]), 0, 1))
				{
					set_ped_accuracy(&(uLocal_801[3]), 100);
					func_319(&(uLocal_801[3]), 3);
				}
			}
			break;
		case 4:
			if (iParam0 != iVar905)
			{
				func_317(iParam3, 1);
			}
			else
			{
				iLocal_870 = 0;
			}
			iLocal_967[iParam3] = 6;
			break;
		case 6:
			if (!Local_37.f_46)
			{
				if (!func_36(iVar905, 0, 1))
				{
					iLocal_912 = func_320();
				}
				else if (func_321(iParam0, iParam3))
				{
					if (func_36(&(uLocal_801[iParam3]), 0, 1))
					{
						if (func_322(iParam3, 1))
						{
							func_323(1, &(uLocal_801[iParam3]));
							func_24(&uLocal_819, 32768);
							iLocal_967[iParam3] = 7;
						}
					}
				}
				else
				{
					if (iParam0 == iVar905)
					{
						func_324(iVar905, iParam2, iVar878);
					}
					if (func_50(iVar812, 8388608))
					{
						if (iParam0 != iVar905)
						{
							if (get_script_task_status(iParam0, 2121492476, true) != 1 && !func_50(iVar812, 262144))
							{
								if (iParam0 == &uLocal_801[0] && !func_50(iVar490, 1))
								{
									_0xe7fa07624574b79a(iParam0, &(uLocal_801[6]), 3, 3, get_random_float_in_range(4f, 6f), 1, 0, 0, 0);
									task_look_at_entity(iParam0, &(uLocal_801[6]), get_random_int_in_range(4000, 6000), 0, 51, 1);
									func_24(&uLocal_497, 1);
								}
								else if (iParam0 == &uLocal_801[1] && !func_50(iVar490, 2))
								{
									_0xe7fa07624574b79a(iParam0, &(uLocal_801[6]), 3, 2, get_random_float_in_range(4f, 6f), 1, 0, 0, 0);
									task_look_at_entity(iParam0, &(uLocal_801[6]), get_random_int_in_range(4000, 6000), 0, 51, 1);
									func_24(&uLocal_497, 2);
								}
							}
						}
					}
					if (has_anim_event_fired(iVar905, 790957124) || func_50(iVar812, 16777216))
					{
						iLocal_967[iParam3] = 8;
					}
				}
			}
			break;
		case 7:
			if (!func_325(Global_35, 1101004800))
			{
				if (&Local_37.f_98[iParam3] > (22f + 1f) || !func_325(iParam0, 35f))
				{
					if (iParam0 != iVar905)
					{
						func_317(iParam3, 1);
					}
					iLocal_870 = 0;
					iLocal_967[iParam3] = 4;
				}
				else
				{
					if (func_50(iVar812, 262144))
					{
						if (iParam3 == 0)
						{
							func_24(&uLocal_497, 64);
						}
						else if (iParam3 == 1)
						{
							func_24(&uLocal_497, 128);
						}
						iLocal_967[iParam3] = 8;
					}
					Jump @2299; //curOff = 1627
					if (func_36(iParam0, 0, 1))
					{
						clear_sequence_task(&iParam2);
						open_sequence_task(&iParam2);
						if (iParam0 == &uLocal_801[0] || iParam0 == &uLocal_801[1])
						{
							if (func_36(iParam1, 0, 1) && _get_rider_of_mount(iParam1, false) == 0)
							{
								func_326(iParam1);
								task_mount_animal(0, iParam1, 20000, -1, 1073741824, 1, 0, 0);
							}
							else
							{
								task_smart_flee_ped(0, Global_35, 500f, -1, 0, 1077936128, 0);
							}
						}
						else if (!is_ped_on_mount(iParam0))
						{
							if (func_36(iParam1, 0, 1))
							{
								func_326(iParam1);
								task_mount_animal(0, iParam1, 20000, -1, 1073741824, 1, 0, 0);
							}
							else
							{
								iVar0 = func_110(&(iLocal_814[0]));
								if (func_36(iVar0, 0, 1))
								{
									iLocal_814[1] = iVar0;
									task_mount_animal(0, &(iLocal_814[1]), 20000, -1, 1073741824, 1, 0, 0);
								}
							}
						}
						if (iParam3 == 2)
						{
							func_316(iParam0, &iParam2, 0, 0, 1, 1);
						}
						else if ((iParam3 == 0 && func_50(iVar490, 64)) || (iParam3 == 1 && func_50(iVar490, 128)))
						{
							func_316(iParam0, &iParam2, 0.25f, 1f, 1, 1);
						}
						else
						{
							func_316(iParam0, &iParam2, 0.25f, 1f, 1, 1);
						}
						iLocal_967[iParam3] = 9;
					}
					Jump @2299; //curOff = 1970
					func_327(iParam3);
					if (func_328())
					{
						func_329(1);
						if (iVar965 == -1)
						{
							_task_move_in_traffic(&(uLocal_801[iParam3]), 2f, 0, 0);
						}
						else if (iParam3 == iVar965)
						{
							_task_move_in_traffic(&(uLocal_801[iParam3]), 2f, 0, 0);
						}
						else
						{
							clear_ped_tasks(&(uLocal_801[iParam3]), 1, 0);
							if (get_mount(&(uLocal_801[iParam3])) != 0)
							{
								clear_ped_tasks(get_mount(&(uLocal_801[iParam3])), 1, 0);
							}
						}
						iLocal_967[iParam3] = 10;
					}
					Jump @2299; //curOff = 2094
					func_318(&(uLocal_801[iParam3]), iParam3);
					if (!func_50(iVar490, 32))
					{
						if (func_36(&(uLocal_801[iParam3]), 0, 1))
						{
							func_330(iParam3);
							func_24(&uLocal_497, 32);
						}
					}
					register_target(iParam0, Global_35, 1);
					iLocal_967[iParam3] = 11;
					Jump @2299; //curOff = 2173
					func_327(iParam3);
					func_331();
					Jump @2299; //curOff = 2186
					if (func_332(&(uLocal_801[iParam3]), -258459266))
					{
						if (_0x802092b07e3b1eea(&(uLocal_801[iParam3]), Global_36, 3))
						{
							register_hated_targets_around_ped(iParam0, 100f);
							task_combat_hated_targets(iParam0, -1f);
							iLocal_967[iParam3] = 12;
						}
					}
					else
					{
						register_hated_targets_around_ped(iParam0, 100f);
						task_combat_hated_targets(iParam0, -1f);
						iLocal_967[iParam3] = 12;
					}
				}
			}
			default:
				break;
	}
}

void func_123()
{
	if (iVar961 > 1)
	{
		if (!func_36(&(uLocal_801[6]), 0, 1))
		{
			return;
		}
	}
	if (iVar961 > 1)
	{
		func_333();
		func_334();
		if (!func_50(iVar817, 16777216))
		{
			if (iVar961 > 1)
			{
				func_335();
				func_336();
			}
			if (has_anim_event_fired(&(uLocal_801[6]), 1403772282))
			{
				func_81(&(uLocal_801[6]), 0);
				func_24(&uLocal_819, 16777216);
			}
		}
	}
	if (iVar961 >= 5)
	{
		func_337();
	}
	switch (iVar961)
	{
		case 0:
			iLocal_963 = 1;
			break;
		case 1:
			if (func_50(iVar817, 131072))
			{
				iLocal_963 = 3;
			}
			break;
		case 2:
			if (func_50(iVar817, 1))
			{
				set_ped_relationship_group_hash(&(uLocal_801[6]), iVar951);
				register_target(&(uLocal_801[6]), Global_35, 1);
				register_hated_targets_around_ped(&(uLocal_801[6]), 100f);
				open_sequence_task(uLocal_899[6]);
				if (is_ped_in_any_vehicle(&(uLocal_801[6]), false))
				{
					task_leave_any_vehicle(0, 0, 0);
				}
				task_combat_hated_targets(0, -1f);
				_task_flee_from_coord(0, get_entity_coords(&(uLocal_801[6]), true, false), 0f, 0f, 0f, 150f, -1, 0, 1077936128, 0);
				task_wander_standard(0, 40000f, 0);
				func_316(&(uLocal_801[6]), uLocal_899[6], 0.1f, 1f, 1, 1);
				iLocal_963 = 13;
			}
			else
			{
				iLocal_963 = 3;
			}
			break;
		case 3:
			if (!_0x23e33cb9f4a3f547(Local_231, func_87(13)))
			{
				_0xdf7b5144e25cd3fe(Local_231, func_87(13));
			}
			if (!Local_37.f_46)
			{
				if (!func_50(iVar817, 2097152))
				{
					if (func_50(iVar817, 1048576))
					{
						if (!_0x23e33cb9f4a3f547(Local_231, func_87(4)))
						{
							_0xdf7b5144e25cd3fe(Local_231, func_87(4));
						}
						else if (func_338() || &Local_37.f_98[6] < 20f)
						{
							func_24(&uLocal_819, 2097152);
							_set_anim_scene_playback_list_bool(Local_231, func_87(4), true);
							set_anim_scene_bool(Local_231, func_88(0), true, false);
							iLocal_963 = 4;
						}
					}
					else
					{
						func_339();
					}
				}
			}
			else if (_0x8d81e7824b7753f7(Local_231, func_305(0), 1))
			{
				if (!_0x23e33cb9f4a3f547(Local_231.f_1, func_87(5)))
				{
					_0xdf7b5144e25cd3fe(Local_231.f_1, func_87(5));
				}
				else
				{
					iLocal_963 = 5;
				}
			}
			else if (_0x8d81e7824b7753f7(Local_231, func_305(4), 1))
			{
				if (!func_50(iVar817, 1))
				{
					if (!func_50(iVar817, 64))
					{
						if (!_0x23e33cb9f4a3f547(Local_231, func_87(13)))
						{
							_0xdf7b5144e25cd3fe(Local_231, func_87(13));
						}
						if (has_anim_event_fired(&(uLocal_801[6]), 1743861621))
						{
							set_anim_scene_bool(Local_231, func_88(0), false, false);
							_set_anim_scene_playback_list_bool(Local_231, func_87(13), false);
							func_24(&uLocal_819, 64);
						}
					}
				}
				else if (func_50(iVar817, 262144))
				{
					iLocal_963 = 4;
				}
			}
			else if (!_is_anim_scene_started(Local_231, false))
			{
				iLocal_963 = 5;
			}
			break;
		case 5:
			if (!_is_anim_scene_started(Local_231.f_1, false))
			{
				func_340(Local_231);
				_set_anim_scene_playback_list_bool(Local_231.f_1, func_87(5), true);
				start_anim_scene(Local_231.f_1);
				set_anim_scene_bool(Local_231.f_1, func_88(0), false, false);
				set_anim_scene_bool(Local_231.f_1, func_88(1), false, false);
				_0xdf7b5144e25cd3fe(Local_231.f_1, func_87(11));
				_0xdf7b5144e25cd3fe(Local_231.f_1, func_87(15));
				_0xdf7b5144e25cd3fe(Local_231.f_1, func_87(16));
				_0xdf7b5144e25cd3fe(Local_231.f_1, func_87(17));
				_0xdf7b5144e25cd3fe(Local_231.f_1, func_87(18));
				iLocal_963 = 7;
			}
			break;
		case 6:
			if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(2), 1))
			{
				set_anim_scene_bool(Local_231.f_1, func_88(0), false, false);
				set_anim_scene_bool(Local_231.f_1, func_88(1), false, false);
				iLocal_963 = 8;
			}
			break;
		case 7:
			if (func_50(iVar817, 1))
			{
				if (func_341())
				{
					func_24(&uLocal_819, 4194304);
					iLocal_963 = 4;
				}
			}
			else
			{
				if (!func_342())
				{
					func_343();
					func_344();
				}
				else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(1), 1))
				{
					iLocal_963 = 8;
				}
				Jump @2598; //curOff = 1107
				if (func_50(iVar817, 1))
				{
					if (func_341())
					{
						func_24(&uLocal_819, 4194304);
						iLocal_963 = 4;
					}
				}
				else
				{
					if (func_342())
					{
						if (!func_50(iVar817, 33554432))
						{
							func_345();
							if (&Local_37.f_98[6] <= 10f)
							{
								if (func_50(iVar495, 8) || func_346())
								{
									func_99(&uLocal_471);
									func_24(&uLocal_819, 33554432);
								}
							}
						}
						else
						{
							func_347();
						}
					}
					Jump @2598; //curOff = 1237
					if (func_50(iVar817, 262144))
					{
						set_ped_can_be_targetted(&(uLocal_801[6]), true);
						if (!func_342())
						{
							if (Local_37.f_46)
							{
								set_ped_relationship_group_hash(&(uLocal_801[6]), iVar951);
								register_target(&(uLocal_801[6]), Global_35, 1);
								register_hated_targets_around_ped(&(uLocal_801[6]), 100f);
								task_combat_hated_targets(&(uLocal_801[6]), -1f);
								iLocal_963 = 13;
							}
							else
							{
								func_28(1, 0);
								if (func_36(&(iLocal_814[0]), 0, 1))
								{
									func_326(&(iLocal_814[0]));
									open_sequence_task(uLocal_899[6]);
									task_mount_animal(0, &(iLocal_814[0]), 20000, -1, 1073741824, 1, 0, 0);
									func_316(&(uLocal_801[6]), uLocal_899[6], 0, 0, 1, 1);
									set_ped_keep_task(&(uLocal_801[6]), true);
									iLocal_963 = 9;
								}
								else
								{
									open_sequence_task(uLocal_899[6]);
									_task_smart_flee_style_ped(0, Global_35, 3, 256, 500f, -1, 0);
									func_316(&(uLocal_801[6]), uLocal_899[6], 0, 0, 1, 1);
									set_ped_keep_task(&(uLocal_801[6]), true);
									func_24(&uLocal_819, 2);
									iLocal_963 = 12;
								}
							}
						}
						else
						{
							open_sequence_task(uLocal_899[6]);
							if (func_36(&(iLocal_814[0]), 0, 1))
							{
								func_326(&(iLocal_814[0]));
								task_mount_animal(0, &(iLocal_814[0]), 20000, -1, 1073741824, 1, 0, 0);
							}
							else if (func_36(&(uLocal_809[0]), 0, 1))
							{
								func_326(&(iLocal_814[0]));
								task_mount_animal(0, &(uLocal_809[0]), 20000, -1, 1073741824, 1, 0, 0);
							}
							else if (func_36(&(uLocal_809[1]), 0, 1))
							{
								func_326(&(iLocal_814[1]));
								task_mount_animal(0, &(uLocal_809[1]), 20000, -1, 1073741824, 1, 0, 0);
							}
							task_smart_flee_ped(0, Global_35, 500f, -1, 256, 1077936128, 0);
							func_316(&(uLocal_801[6]), uLocal_899[6], 0, 0, 1, 1);
							iLocal_963 = 10;
						}
					}
					else
					{
						func_335();
						if (func_50(iVar817, 16777216) || (!_is_anim_scene_started(Local_231, false) && !_is_anim_scene_started(Local_231.f_1, false)))
						{
							_0x8886d83a430537fd(&(uLocal_801[6]), 0);
							func_24(&uLocal_819, 262144);
						}
						else if (_0x8d81e7824b7753f7(Local_231, func_305(4), 1))
						{
							if (!func_50(iVar817, 1))
							{
								if (!func_50(iVar817, 64))
								{
									if (func_348() || func_50(iVar495, 32768))
									{
										if (!func_50(iVar495, 32768))
										{
											func_24(&uLocal_497, 32768);
										}
										if (!_0x23e33cb9f4a3f547(Local_231, func_87(13)))
										{
											_0xdf7b5144e25cd3fe(Local_231, func_87(13));
										}
										if (has_anim_event_fired(&(uLocal_801[6]), 1743861621))
										{
											set_anim_scene_bool(Local_231, func_88(0), false, false);
											_set_anim_scene_playback_list_bool(Local_231, func_87(13), true);
											func_112(&uLocal_497, 32768);
											func_24(&uLocal_819, 64);
										}
									}
									else if (iVar815 == 0)
									{
									}
								}
							}
							else if (!Local_37.f_46)
							{
								if (has_anim_event_fired(&(uLocal_801[6]), 362740695))
								{
									if (iVar465 == 0)
									{
										func_295(&(uLocal_801[6]), 0, "RE_OT_BGV_V1_FREE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									}
									else if (func_295(&(uLocal_801[6]), 0, "RE_OT_SCM_V1_FREE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
									{
									}
								}
							}
						}
						else if (_0x1f0e401031e20146(Local_231, func_87(13)))
						{
							if (_0x8d81e7824b7753f7(Local_231, func_305(0), 1))
							{
								func_112(&uLocal_819, 64);
								func_112(&uLocal_819, 2097152);
								iLocal_963 = 3;
							}
						}
					}
					Jump @2598; //curOff = 2174
					if (func_36(&(iLocal_814[0]), 0, 1))
					{
						if (get_script_task_status(&(uLocal_801[6]), 1435919172, true) != 1 && get_mount(&(uLocal_801[6])) != &iLocal_814[0])
						{
							func_326(&(iLocal_814[0]));
							if (_0x9d1eca9337be9fc3(Local_231.f_1, "Prisoner"))
							{
								remove_anim_scene_entity(Local_231.f_1, "Prisoner", &(uLocal_801[6]));
							}
							task_mount_animal(&(uLocal_801[6]), &(iLocal_814[0]), 20000, -1, 1073741824, 1, 0, 0);
						}
						if (func_328())
						{
							if (iVar970 != -1)
							{
								set_ped_as_group_member(&(uLocal_801[6]), iVar906);
								set_ped_config_flag(&(uLocal_801[6]), 279, true);
								clear_ped_tasks(&(uLocal_801[6]), 1, 0);
								if (get_mount(&(uLocal_801[6])) != 0)
								{
									clear_ped_tasks(get_mount(&(uLocal_801[6])), 1, 0);
								}
								iLocal_963 = 12;
							}
						}
					}
					else if (get_script_task_status(&(uLocal_801[6]), 1435919172, true) != 1)
					{
						task_smart_flee_ped(&(uLocal_801[6]), Global_35, 500f, -1, 256, 1077936128, 0);
					}
					Jump @2598; //curOff = 2445
					if (!func_349(&(uLocal_801[6]), &(Global_1935630->f_34)) && !is_ped_ragdoll(&(uLocal_801[6])))
					{
						if (func_108(2f, 1, &(uLocal_801[6]), 1))
						{
							func_295(&(uLocal_801[6]), Global_35, func_294("LEAVE_PLR_FREE", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
							iLocal_963 = 12;
						}
					}
					else
					{
						iLocal_963 = 11;
					}
					Jump @2598; //curOff = 2557
					if (func_108(2f, 1, &(uLocal_801[6]), 1))
					{
						func_350();
						iLocal_963 = 12;
					}
					Jump @2598; //curOff = 2585
					Jump @2598; //curOff = 2588
					func_351();
				}
			}
			default:
				break;
	}
}

void func_124(int iParam0)
{
	if (bVar894 || iLocal_36 <= 1)
	{
		if (!get_ped_config_flag(iParam0, 6, true))
		{
			if (!get_ped_config_flag(iParam0, 4, true))
			{
				if (!get_ped_config_flag(iParam0, 494, true))
				{
					return;
				}
			}
		}
	}
	if (!func_352())
	{
		if (!is_entity_dead(iParam0))
		{
			if (_is_ped_hogtied(iParam0))
			{
				if (func_353(Global_35))
				{
					if (func_354(Global_35) == func_355(iParam0))
					{
						iLocal_897 = 1;
						func_170(&iParam0);
					}
				}
			}
		}
	}
}

void func_125()
{
	if (iLocal_36 < 3)
	{
	}
	else if (!func_50(iVar817, 512))
	{
		func_99(&uLocal_927);
		func_24(&uLocal_819, 512);
	}
	else
	{
		func_356();
		if (!func_50(iVar817, 131072))
		{
			if (func_357())
			{
				func_31();
				if (func_356())
				{
					func_24(&uLocal_819, 131072);
				}
			}
		}
	}
}

void func_126()
{
	if (func_50(iVar877, 1))
	{
		if (!func_50(iVar877, 2))
		{
			if (!func_70(func_358()))
			{
				trigger_music_event("REOT_START");
				func_24(&uLocal_879, 2);
			}
		}
	}
	else if (!func_50(iVar877, 1))
	{
		if (&Local_37.f_98[6] > 0f)
		{
			if (&Local_37.f_98[6] < 110f || !is_entity_occluded(iVar816))
			{
				func_24(&uLocal_879, 1);
			}
		}
	}
	if (iLocal_36 > 2)
	{
		if (func_50(iVar817, 65536) || Local_37.f_46)
		{
			if (!func_50(iVar877, 4))
			{
				trigger_music_event("REOT_FIGHT");
				func_24(&uLocal_879, 4);
			}
			else if (!func_50(iVar877, 8))
			{
				if (func_342())
				{
					trigger_music_event("REOT_END");
					func_24(&uLocal_879, 8);
				}
			}
		}
	}
}

void func_127()
{
	if (func_50(iVar877, 1) && !Local_37.f_46)
	{
		vVar0 = { func_358() };
		if (!func_70(vVar0))
		{
			func_359(1066055203, vVar0, 1);
			if (!func_50(iVar817, 268435456))
			{
				uLocal_733 = iVar731 + 1;
				if (iVar731 >= 5)
				{
					func_360(536870912, 1, 0, 1);
					func_24(&uLocal_819, 268435456);
				}
			}
		}
	}
}

void func_128()
{
	if (func_50(iVar817, 4096) && !Local_37.f_46)
	{
		if (!func_50(iVar494, 1024))
		{
			if (!func_98(&uLocal_477))
			{
				func_99(&uLocal_477);
			}
			else if (func_100(&uLocal_477) > 1f)
			{
				func_24(&uLocal_496, 1024);
			}
		}
	}
	else if (func_50(iVar494, 1024))
	{
		func_112(&uLocal_496, 1024);
	}
}

void func_129()
{
	if (!Local_37.f_46)
	{
		return;
	}
	if (iVar949 >= 4)
	{
		return;
	}
	if (!func_98(&uLocal_942))
	{
		func_99(&uLocal_942);
	}
	else if (func_100(&uLocal_942) > fVar950)
	{
		if (func_36(&(uLocal_809[iVar949]), 0, 1))
		{
			func_99(&uLocal_942);
			func_361(uLocal_809[iVar949], 0, 1, 0);
			fLocal_952 = get_random_float_in_range(0.5f, 0.75f);
		}
		uLocal_951 = iVar949 + 1;
	}
}

void func_130()
{
	if (func_50(iVar817, 4096))
	{
		if (!func_50(iVar495, 16384))
		{
			func_35();
			func_24(&uLocal_497, 16384);
		}
	}
}

int func_131()
{
	if (func_50(iVar817, 1))
	{
		return 1;
	}
	bVar0 = false;
	if (_0xe015cf1f2c0959d8(iVar816) == 3)
	{
		bVar0 = true;
	}
	if (_0xe015cf1f2c0959d8(iVar816) == 4)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		set_vehicle_doors_shut(iVar816, true);
		func_28(1, 0);
		func_362(&(Local_37.f_5), 0);
		func_24(&uLocal_819, 1);
		return 1;
	}
	return 0;
}

bool func_132()
{
	if (_is_anim_scene_loaded(Local_231, true, false) && _is_anim_scene_loaded(Local_231.f_1, true, false))
	{
		return true;
	}
	return false;
}

void func_133(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
		{
			set_entity_can_be_damaged(iVar1, bParam1);
		}
		iVar0++;
	}
}

void func_134()
{
	if (!does_group_exist(iVar906))
	{
		iLocal_908 = create_group(0);
	}
	func_329(0);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_36(&(uLocal_801[iVar0]), 0, 1))
		{
			if (iVar0 == 4 && iVar0 == 5)
			{
				set_ped_config_flag(&(uLocal_801[iVar0]), 279, true);
			}
		}
		iVar0++;
	}
}

void func_135()
{
	if (is_vehicle_driveable(iVar816, false, false))
	{
		if (_is_anim_scene_metadata_loaded(Local_231, false))
		{
			attach_anim_scene_to_entity(Local_231, iVar816, 0);
			set_anim_scene_origin(Local_231, 0f, 0f, 0f, 0f, 0f, 0f, 2);
		}
		if (_is_anim_scene_metadata_loaded(Local_231.f_1, false))
		{
			attach_anim_scene_to_entity(Local_231.f_1, iVar816, 0);
			set_anim_scene_origin(Local_231.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2);
		}
	}
}

void func_136()
{
	iLocal_963 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iLocal_964[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_967[iVar0] = 0;
		iVar0++;
	}
}

bool func_137(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_234(uParam0, bVar1);
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
	if (uParam0->f_178 && func_232())
	{
		bVar1 = true;
		fVar3 = func_171(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_235(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_235(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_236(&(uParam0->f_121), iParam4, fParam1))
		{
			func_94(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_175(uParam0->f_3, uParam0->f_185), 0);
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
						func_93(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_94(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_175(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_138()
{
	if (!func_50(iVar493, 16))
	{
		if (!is_entity_dead(iVar816))
		{
			iVar0 = _get_ped_in_draft_seat(iVar816, 1);
			if (func_36(iVar0, 0, 1))
			{
				if (_0xb36d3ec70963be60(iVar816, iVar0))
				{
					func_308(iVar0, 0, 0);
					func_24(&uLocal_495, 16);
				}
			}
			iVar1 = _get_ped_in_draft_seat(iVar816, 0);
			if (func_36(iVar1, 0, 1))
			{
				iLocal_814[0] = iVar1;
				set_entity_can_be_damaged_by_relationship_group(&(iLocal_814[0]), false, iVar951);
				set_blocking_of_non_temporary_events(&(iLocal_814[0]), true);
			}
		}
	}
}

void func_139()
{
	switch (iVar884)
	{
		case 0:
			if (&Local_37.f_98[5] < 75f && &Local_37.f_98[5] != 0f)
			{
				if (iVar465 == 0)
				{
					func_295(&(uLocal_801[5]), 0, func_294("DISTRESS_A", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					func_295(&(uLocal_801[4]), 0, func_294("DISTRESS_B", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				uLocal_886 = iVar884 + 1;
			}
			break;
		case 1:
			if ((!is_scripted_speech_playing(&(uLocal_801[4])) && !is_scripted_speech_playing(&(uLocal_801[5]))) && !is_scripted_speech_playing(&(uLocal_801[0])))
			{
				func_295(&(uLocal_801[0]), 0, func_294("STOP", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				uLocal_886 = iVar884 + 1;
			}
			break;
		case 2:
			break;
	}
}

void func_140()
{
	if (!func_98(&uLocal_483))
	{
		func_99(&uLocal_483);
		fLocal_489 = get_random_float_in_range(4000f, 6000f);
		func_24(&uLocal_497, 512);
	}
	else
	{
		if (Local_37.f_48)
		{
			if (fVar487 != -1f)
			{
				fLocal_489 = -1f;
			}
		}
		if (func_50(iVar495, 512))
		{
			if (IntToFloat(func_363(&uLocal_483)) >= fVar487 && !Local_37.f_48)
			{
				fLocal_489 = get_random_float_in_range(5000f, 8000f);
				func_99(&uLocal_483);
				func_112(&uLocal_497, 512);
			}
		}
		else if (IntToFloat(func_363(&uLocal_483)) >= fVar487 || Local_37.f_48)
		{
			if (!Local_37.f_48)
			{
				fLocal_489 = get_random_float_in_range(1000f, 4000f);
			}
			func_99(&uLocal_483);
			func_24(&uLocal_497, 512);
		}
	}
}

void func_141()
{
	switch (iVar885)
	{
		case 0:
			if (!is_scripted_speech_playing(&(uLocal_801[0])))
			{
				if (func_36(&(uLocal_801[4]), 0, 1) || func_36(&(uLocal_801[5]), 0, 1))
				{
					func_295(&(uLocal_801[0]), 0, func_294("STOPPED", 0), "", 75f, 0, 0, 0, 1, 0, 0, 1744022339, 1, 0, 0);
					uLocal_887 = iVar885 + 1;
				}
				else
				{
					uLocal_887 = iVar885 + 1;
				}
			}
			break;
		case 1:
			if (!func_50(iVar817, 128))
			{
				if (func_36(&(uLocal_801[4]), 0, 1))
				{
					if (((&Local_37.f_98[4] < 75f && !is_scripted_speech_playing(&(uLocal_801[4]))) && !is_scripted_speech_playing(&(uLocal_801[5]))) && !is_scripted_speech_playing(&(uLocal_801[0])))
					{
						func_295(&(uLocal_801[4]), 0, func_294("DISTRESS_B", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
						func_24(&uLocal_819, 128);
						uLocal_887 = iVar885 + 1;
					}
				}
				else if (func_36(&(uLocal_801[5]), 0, 1))
				{
					if (((&Local_37.f_98[5] < 75f && !is_scripted_speech_playing(&(uLocal_801[4]))) && !is_scripted_speech_playing(&(uLocal_801[5]))) && !is_scripted_speech_playing(&(uLocal_801[0])))
					{
						func_295(&(uLocal_801[5]), 0, func_294("DISTRESS_B", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
						func_24(&uLocal_819, 128);
						uLocal_887 = iVar885 + 1;
					}
				}
				else
				{
					uLocal_887 = iVar885 + 1;
				}
			}
			break;
		case 2:
			if ((!is_scripted_speech_playing(&(uLocal_801[2])) && !is_scripted_speech_playing(&(uLocal_801[4]))) && !is_scripted_speech_playing(&(uLocal_801[5])))
			{
				func_295(&(uLocal_801[2]), &(uLocal_801[2]), func_294("PROMISE", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				uLocal_887 = iVar885 + 1;
			}
			break;
		case 3:
			break;
	}
}

void func_142(int iParam0, bool bParam1)
{
	if (!func_364(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_bit(&(Global_1395482->f_117), iParam0);
	}
	else
	{
		clear_bit(&(Global_1395482->f_117), iParam0);
	}
}

void func_143()
{
	if (!bVar892)
	{
		if (!func_36(&(uLocal_801[4]), 0, 1))
		{
			if (is_vehicle_driveable(iVar816, false, false) && !is_vehicle_stopped(iVar816))
			{
				bring_vehicle_to_halt(iVar816, 5f, 1, false);
				iLocal_894 = 1;
			}
		}
	}
}

int func_144()
{
	iVar2 = 0;
	if (does_entity_exist(iVar816) && !is_entity_dead(iVar816))
	{
		if (bVar893)
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = _get_ped_in_draft_seat(iVar816, iVar0);
				if (does_entity_exist(iVar1))
				{
					if (has_entity_been_damaged_by_entity(iVar1, Global_35, 1, 1))
					{
						bring_vehicle_to_halt(iVar816, 5f, 1, false);
						iLocal_895 = 0;
						iVar2 = 1;
					}
				}
				iVar0++;
			}
		}
		else
		{
			return 1;
		}
	}
	if (iVar2 == 1)
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	if (func_50(iVar817, 16384))
	{
		if (func_36(&(uLocal_801[2]), 0, 1))
		{
			if (func_36(&(uLocal_801[5]), 0, 1))
			{
				func_295(&(uLocal_801[2]), &(uLocal_801[2]), func_294("PROMISE", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			else
			{
				func_295(&(uLocal_801[6]), &(uLocal_801[6]), func_294("AMBUSH_THREAT", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			func_24(&uLocal_819, 16384);
		}
	}
}

void func_146(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (does_entity_exist(&(uLocal_801[iVar0])))
		{
			if (!func_36(&(uLocal_801[iVar0]), 0, 1))
			{
				if (get_ped_config_flag(&(uLocal_801[iVar0]), iParam0, false))
				{
					set_ped_config_flag(&(uLocal_801[iVar0]), iParam0, true);
				}
			}
		}
		iVar0++;
	}
}

int func_147()
{
	if (func_36(&(uLocal_801[4]), 0, 1))
	{
		if (&Local_37.f_98[4] < 80f)
		{
			return 0;
		}
	}
	if (func_36(&(uLocal_801[5]), 0, 1))
	{
		if (&Local_37.f_98[5] < 80f)
		{
			return 0;
		}
	}
	return 1;
}

int func_148()
{
	if ((&Local_37.f_98[4] > fVar890 && &Local_37.f_98[5] > fVar890) && is_ped_in_vehicle(Global_35, iVar816, false))
	{
		func_34(uLocal_793[4]);
		func_34(uLocal_793[5]);
		return 1;
	}
	return 0;
}

void func_149()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (does_blip_exist(&(uLocal_793[iVar0])))
		{
			if (&Local_37.f_98[iVar0] > 80f && !is_entity_visible(&(uLocal_801[iVar0])))
			{
				remove_blip(uLocal_793[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_150()
{
	if (!func_36(&(uLocal_801[6]), 0, 1))
	{
		return;
	}
	switch (iVar878)
	{
		case 0:
			if (((!is_scripted_speech_playing(&(uLocal_801[0])) && !is_scripted_speech_playing(&(uLocal_801[1]))) && !is_scripted_speech_playing(&(uLocal_801[2]))) && !is_scripted_speech_playing(&(uLocal_801[6])))
			{
				iVar0 = func_365(&(uLocal_801[6]));
				func_295(iVar0, &(uLocal_801[6]), func_294("RIDE_OFF", iVar0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				uLocal_880 = iVar878 + 1;
			}
			break;
		case 1:
			if (func_366())
			{
				if (((!is_scripted_speech_playing(&(uLocal_801[0])) && !is_scripted_speech_playing(&(uLocal_801[1]))) && !is_scripted_speech_playing(&(uLocal_801[2]))) && !is_scripted_speech_playing(&(uLocal_801[6])))
				{
					func_295(&(uLocal_801[6]), iVar910, "RE_OT_SCM_V1_RESCUE", "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					uLocal_880 = iVar878 + 1;
				}
			}
			else
			{
				uLocal_880 = iVar878 + 1;
			}
			break;
		case 2:
			if (func_108(-3f, 1, 0, 0))
			{
				iVar0 = func_365(&(uLocal_801[6]));
				func_295(&(uLocal_801[6]), iVar0, func_294("THANK", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				uLocal_880 = iVar878 + 1;
			}
			break;
		case 3:
			if (func_108(0, 1, &(uLocal_801[6]), 1))
			{
				if (func_36(&(uLocal_801[0]), 0, 1))
				{
					func_295(&(uLocal_801[0]), &(uLocal_801[6]), func_294("END_A", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					uLocal_880 = iVar878 + 1;
				}
			}
			break;
		case 4:
			if (func_108(0, 1, &(uLocal_801[0]), 1))
			{
				if (func_36(&(uLocal_801[0]), 0, 1) && func_36(&(uLocal_801[1]), 0, 1))
				{
					func_295(&(uLocal_801[1]), &(uLocal_801[6]), func_294("END_B", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					uLocal_880 = iVar878 + 1;
				}
				else
				{
					uLocal_880 = iVar878 + 1;
				}
			}
			break;
		case 5:
			if (func_36(&(uLocal_801[2]), 0, 1))
			{
				if (!is_scripted_speech_playing(&(uLocal_801[0])) && !is_scripted_speech_playing(&(uLocal_801[1])))
				{
					if (iVar465 == 0)
					{
						func_295(&(uLocal_801[2]), &(uLocal_801[6]), func_294("END_C", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					}
					else
					{
						func_295(&(uLocal_801[2]), &(uLocal_801[6]), "GIDDY_UP", "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					}
					uLocal_880 = iVar878 + 1;
				}
			}
			else
			{
				uLocal_880 = iVar878 + 1;
			}
			break;
		case 6:
			break;
	}
}

bool func_151(float fParam0)
{
	iVar0 = func_367(&uLocal_801, Global_36, 0, 1, 0, -1);
	if (iVar0 == -1)
	{
		return true;
	}
	else if (func_107(&(uLocal_801[iVar0]), Global_35, 1, 1) > fParam0)
	{
		return true;
	}
	return false;
}

bool func_152()
{
	if (!func_364(Global_1395482->f_1))
	{
		return false;
	}
	return func_368(Global_1395482->f_1, 32);
}

bool func_153(int iParam0)
{
	if (func_64(iParam0, 1))
	{
		return false;
	}
	return (1 == func_369(iParam0) || 2 == func_369(iParam0));
}

float func_154(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_155(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_43(&(uParam0->f_1), 2048);
	}
	else
	{
		func_44(&(uParam0->f_1), 2048);
	}
}

void func_156(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_43(&(iParam0->f_1), 128);
	}
	else
	{
		func_44(&(iParam0->f_1), 128);
	}
}

void func_157(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_44(iParam0, 256);
	}
	else
	{
		func_43(iParam0, 256);
	}
}

void func_158(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_44(iParam0, 268435456);
	}
	else
	{
		func_43(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_44(iParam0, 1073741824);
	}
	else
	{
		func_43(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_44(iParam0, 536870912);
	}
	else
	{
		func_43(iParam0, 536870912);
	}
}

var func_159(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_160(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_370(sParam1));
}

int func_161(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_162(int iParam0, float fParam1)
{
	if (is_entity_on_screen(iParam0) && func_371(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

void func_163(int iParam0, bool bParam1)
{
	if (func_36(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_372(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_164(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_373(iParam0, Global_36, 1);
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

float func_165(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_107(Global_35, iParam0, bParam1, bParam2);
}

void func_166(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	fVar0 = func_373(iParam0, Global_36, 1);
	switch (iParam1)
	{
		case 1:
			fParam2 = 100f;
			fParam3 = 200f;
			iParam4 = 3000;
			iParam5 = 1000;
			iParam6 = 4000;
			break;
		case 2:
			fParam2 = 60f;
			fParam3 = 120f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1000;
			break;
		case 0:
			fParam2 = 75f;
			fParam3 = 140f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1500;
			break;
		case 3:
			if (fParam2 < 0f)
			{
			}
			if (fParam3 < 0f)
			{
			}
			if (iParam4 < 0)
			{
			}
			if (iParam5 < 0)
			{
			}
			break;
	}
	if (fParam2 >= fParam3)
	{
	}
	_0x39a2fc5af55a52b1(iParam0, iParam6);
	if (fParam7 > 0f)
	{
		_0x7c08e7cb8d951b70(iParam0, fParam7);
	}
	_0x36e4b61dc56de77c(iParam0, fParam2, fParam3, iParam4, iParam5);
}

char* func_167(int iParam0)
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

void func_168(int iParam0, int iParam1)
{
	if (!func_200(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

bool func_169(var uParam0, var uParam1)
{
	if (func_64(uParam0->f_3, 16777216))
	{
		if (func_374(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_170(int iParam0)
{
	set_ped_config_flag(*iParam0, 6, false);
	set_ped_config_flag(*iParam0, 4, false);
	set_ped_config_flag(*iParam0, 494, true);
}

float func_171(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_172(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_36(iParam0, 0, 1)))
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
			fVar2 = func_171(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_375(&iParam0);
			}
			else if (does_entity_exist(iParam0))
			{
				open_sequence_task(&iVar0);
				task_smart_flee_ped(0, Global_35, 1000f, -1, 0, iParam1, 0);
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

void func_173(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_376(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_377(uParam0);
	func_378(uParam0);
	func_379(uParam0);
	if (!func_380(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_256(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_381();
	}
	if (!func_382(uParam0->f_3) && !func_64(uParam0->f_3, 256))
	{
		func_383(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_73(uParam0->f_173);
	func_73(uParam0->f_172);
}

void func_174(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_175(int iParam0, int iParam1)
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

void func_176(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_384() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_177(int iParam0)
{
	if (((func_40(iParam0, 1) && func_40(iParam0, 2)) && func_40(iParam0, 8)) && func_40(iParam0, 512))
	{
		return true;
	}
	return false;
}

int func_178(int iParam0)
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

int func_179(bool bParam0)
{
	if (bParam0)
	{
		return func_385(Global_1359489->f_4);
	}
	get_group_size(func_386(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_386(), iVar3);
		if (func_387(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_180(int iParam0, int iParam1, int iParam2)
{
	iVar2 = 0;
	iVar1 = func_388(iParam0);
	if ((func_3(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = get_random_int_in_range(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = -247265944;
					break;
				case 1:
					iVar2 = 1696286663;
					break;
				case 2:
					iVar2 = -1038436471;
					break;
				case 3:
					iVar2 = -85890205;
					break;
				case 4:
					iVar2 = -727455979;
					break;
				case 5:
					iVar2 = -1679658797;
					break;
				default:
					if (func_389())
					{
						iVar2 = -247265944;
					}
					else
					{
						iVar2 = 1696286663;
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1072019803;
					break;
				case 1:
					iVar2 = -1038436471;
					break;
				case 2:
					iVar2 = -1261814606;
					break;
				case 3:
					iVar2 = -1554827654;
					break;
				default:
					if (func_389())
					{
						iVar2 = -1038436471;
					}
					else
					{
						iVar2 = 1072019803;
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = 2024948086;
					break;
				case 1:
					iVar2 = -1265030920;
					break;
				case 2:
					iVar2 = 937246805;
					break;
				case 3:
					iVar2 = -1599683008;
					break;
				case 4:
					iVar2 = -450053710;
					break;
				default:
					if (func_389())
					{
						iVar2 = 2024948086;
					}
					else
					{
						iVar2 = -1265030920;
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1230359523;
					break;
				case 1:
					iVar2 = 96930969;
					break;
				case 2:
					iVar2 = -586898625;
					break;
				case 3:
					iVar2 = 36009259;
					break;
				default:
					if (func_389())
					{
						iVar2 = 1230359523;
					}
					else
					{
						iVar2 = 96930969;
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = -727455979;
					break;
				case 1:
					iVar2 = 2119038574;
					break;
				case 2:
					iVar2 = -1180427609;
					break;
				case 3:
					iVar2 = -1250098797;
					break;
				default:
					if (func_389())
					{
						iVar2 = -727455979;
					}
					else
					{
						iVar2 = 2119038574;
					}
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = 917402668;
					break;
				case 1:
					iVar2 = -914712122;
					break;
				case 2:
					iVar2 = -598917269;
					break;
				case 3:
					iVar2 = -598917269;
					break;
				default:
					iVar2 = 917402668;
					break;
			}
			break;
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = -1250098797;
					break;
				case 1:
					iVar2 = 2130094044;
					break;
				case 2:
					iVar2 = 1861665605;
					break;
				case 3:
					iVar2 = -1924405794;
					break;
				case 4:
					iVar2 = -1180427609;
					break;
				default:
					iVar2 = -1250098797;
					break;
			}
			break;
		default:
			iVar2 = -1038436471;
			break;
	}
	return iVar2;
}

void func_181(var uParam0)
{
	func_24(uParam0, 256);
}

void func_182(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

void func_183(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

void func_184(char* sParam0, var uParam1)
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

bool func_185(var uParam0)
{
	if (!func_390(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_390(uParam0->f_12))
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

Vector3 func_186(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_200(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_391(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_392(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_187(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_64(iParam0, 32))
	{
		if (func_393(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_394(Global_35, &(uParam1->f_12)) };
				if (!func_70(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_395(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_257(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_258());
		if (func_396(Global_1310750[iParam0], 33554432))
		{
			func_260(iVar0, func_259(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_260(iVar0, func_259(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_64(iParam0, 1))
		{
			func_397(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_398(iParam0);
}

bool func_188(int iParam0, var uParam1)
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
			func_399(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_92(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_400(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_400(iParam0));
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

void func_189(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_401(iParam0))
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
			if (!func_64(iParam0, 1))
			{
				if (func_92(iParam0, 2))
				{
				}
			}
			func_402(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_403(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_403(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_153(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_190(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_391(iParam1))
	{
		if (!func_404(iParam1, iVar0))
		{
			vVar4 = { func_186(iParam1, iVar0) };
			if (!func_70(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_195(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_405(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_70(vVar4))
	{
	}
	return vVar1;
}

int func_191(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_42("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_192(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_391(iParam0))
	{
		vVar1 = { func_186(iParam0, iVar0) };
		if (func_406(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_193(var uParam0)
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

int func_194(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_407(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_408(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_70(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_409(uParam0);
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
	return func_191(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_195(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_189(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_64(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_196(var uParam0, bool bParam1)
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

bool func_197(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_410(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_411(iParam0, uParam2))
	{
		return false;
	}
	if (!func_412(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_413(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_198(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_199(int iParam0, int iParam1, var uParam2)
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

bool func_200(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_201(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_202(int iParam0, int iParam1)
{
	if (func_414(iParam0))
	{
		return;
	}
	if (func_415(iParam0) == iParam1)
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

void func_203(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_43(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_204(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return get_random_model_from_population_set(1468170991, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 918497150:
			return get_random_model_from_population_set(-62570976, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 356361174:
			return get_random_model_from_population_set(-165971473, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -1771663379:
			return get_random_model_from_population_set(-2049218219, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -311956671:
			return get_random_model_from_population_set(989061023, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return get_random_model_from_population_set(1468170991, 0, -1190799868, true, false, 0f, 0f, 0f);
}

bool func_205(int iParam0, bool bParam1)
{
	if (!func_68(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0]->f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0]->f_1 == 4));
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

Vector3 func_207(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_208(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

bool func_209()
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

bool func_210(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_416(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_417(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_418(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_419(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_420(uParam0->f_11, 0);
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
					Var2 = { func_416(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_417(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_421(&(uParam0->f_22)));
					Var2 = { func_416(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_417(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_418(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_422(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_423(*uParam1, &(uParam0->f_23), 0);
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

bool func_211(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_212(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_424(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_424(iVar4) && iVar4 != iVar0)
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
	if (func_384() == -1 && !func_425(iVar0))
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
				if (func_425(-183018591))
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
		if (iParam0 != Global_35 && func_424(iVar0))
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
		func_426(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_427(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_428(iVar0))
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

bool func_213(int iParam0, int iParam1, bool bParam2)
{
	if (!func_214(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_429(iParam0);
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
		if (!func_430(iParam0, 1))
		{
			return false;
		}
	}
	return func_431(iParam0, 0, bParam2) >= iParam1;
}

bool func_214(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_215(int iParam0, int iParam1)
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

int func_216(int iParam0)
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

var func_217(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_218(int iParam0)
{
	Global_1395482->f_10 = (Global_1395482->f_10 || iParam0);
}

int func_219(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7)
{
	iVar0 = create_vehicle(iParam0, vParam1, fParam4, bParam5, bParam6, bParam7, false);
	_0xa91e6cf94404e8c9(iVar0);
	return iVar0;
}

void func_220(int iParam0)
{
	if ((_is_draft_vehicle(iParam0) || func_432(iParam0)) && !is_entity_dead(iParam0))
	{
		_0xd826690b5cf3beff(iParam0, 0f);
		_0x850ce59dec2028f3(iParam0, 0);
		set_vehicle_wheels_can_break(iParam0, false);
	}
}

int func_221(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return -1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 0;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

bool func_223(int iParam0, var uParam1)
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

Vector3 func_224(var uParam0)
{
	return uParam0->f_51;
}

void func_225(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_226()
{
	return &Global_1935436 == 2;
}

void func_227(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_228(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_64(iParam0, 2))
	{
		func_434(iParam0, func_433(iParam1));
	}
	else
	{
		func_435(iParam0, func_53());
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
	func_436(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_437(iParam0, 0);
	func_438(iParam0);
	func_439(1);
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
	if (!func_64(iParam0, 16))
	{
		func_229(iParam0, 0, 0, 0, 0);
	}
}

void func_229(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_440() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_200(iVar1) && !func_64(iVar1, iParam2)) && (!bParam3 || !func_246(iVar1))) && (!bParam4 || !func_441(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_442(iVar0);
			}
		}
		iVar0++;
	}
}

int func_230(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_231(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_396(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_64(uParam0->f_3, 1073741824))
			{
				func_443(2, -1, 0, 0, 0);
			}
			else
			{
				func_443(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_443(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_444(1, uParam0->f_177))
				{
					func_445(16, uParam0->f_177);
					func_446(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_447(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_443(8, -1, 0, 0, 0);
	}
}

int func_232()
{
	if (func_424(Global_1935630->f_44))
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
		else if (func_448())
		{
			return 1;
		}
	}
	return 0;
}

bool func_233(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_234(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_64(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_64(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_64(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_64(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_64(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_64(uParam0->f_3, 1))
		{
		}
		else if (func_64(uParam0->f_3, 2))
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

int func_235(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_449(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_450(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_264() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_236(var uParam0, int iParam1, float fParam2)
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
	func_94(uParam0);
	return true;
}

bool func_237()
{
	return (Global_1894899 & 1 != 0 && func_249() != -1);
}

bool func_238(var uParam0, float fParam1)
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

int func_239(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_451(bParam1, bParam2, bParam3);
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

bool func_240(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_453(func_452());
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

bool func_241(int iParam0, int iParam1)
{
	return (func_230(iParam0) && iParam1) != 0;
}

bool func_242(int iParam0)
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
	if (iParam0 & 1 == 1 && func_454(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_455(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_456(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_457(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_458(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_459(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_460(iVar3))
	{
		return true;
	}
	return false;
}

bool func_243(bool bParam0)
{
	if (func_461(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_244(int iParam0)
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

bool func_245(int iParam0, bool bParam1, bool bParam2)
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
		if (func_462())
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
		iVar0 = func_463(&(Global_1898164->f_1[0]));
		if (func_464(iVar0) && func_465((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_466(&(Global_1898164->f_1[0])))
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

bool func_246(int iParam0)
{
	if (!func_200(iParam0))
	{
		return false;
	}
	if (func_467(64) && func_468(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_247(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_469(iVar0) || func_470(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_248()
{
	return Global_1894899 & 4 != 0;
}

int func_249()
{
	return Global_1894899->f_2;
}

int func_250(int iParam0)
{
	if (!func_471(iParam0))
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

bool func_251(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_252(vector3 vParam0, int iParam3)
{
	if (!func_251(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_253(vector3 vParam0)
{
	if (func_70(vParam0))
	{
		return false;
	}
	fVar0 = func_171(func_237(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_254(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_99(uParam0);
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
		func_99(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_98(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_472(uParam0, fParam2))
		{
			return true;
		}
		if (func_98(uParam0))
		{
			func_293(uParam0);
		}
	}
	return false;
}

bool func_255(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_256(vector3 vParam0, int iParam3)
{
	if (func_70(vParam0))
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
			if (func_406(vVar2, vParam0, 2f, 1))
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

float func_257(int iParam0)
{
	if (!func_200(iParam0))
	{
		return 0f;
	}
	if (!func_473(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_258()
{
	return "unnamed";
}

char* func_259(int iParam0)
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

int func_260(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_397(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_261(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_262(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_264() - fParam1);
	func_474(uParam0, 1);
	func_475(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_263(var uParam0)
{
	return func_261(*uParam0, 2);
}

float func_264()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_265(int iParam0, bool bParam1, int iParam2)
{
	func_476(iParam2);
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
		iParam0->f_13 = func_477(0);
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
							func_44(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_243(1))
						{
							func_44(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_243(1) || *iParam0 & 8192 != 0))
				{
					func_43(iParam0, 33554432);
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
			if (func_478(iParam0))
			{
				iParam0->f_15 = func_114();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_114() - iParam0->f_15) > 500)
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
	func_479(iParam0);
}

bool func_266(int iParam0, int iParam1)
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
			if (!func_480(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_481(iParam0, iVar2) <= func_482(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_483(iParam2, 1, 1, 1, 0))
	{
		func_44(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_115(iParam1, 1);
	func_381();
}

bool func_268(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_484(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_485(iParam1);
			if (func_486(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_487(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_115(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_115(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_269(int iParam0, int iParam1, int iParam2)
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
	if (func_488(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_485(iParam2);
		if (func_486(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_487(iParam2)
				{
					func_115(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_270(int iParam0, int iParam1)
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
	if (func_480(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_487(iParam1)
		{
			fVar3 = func_485(iParam1);
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

bool func_271(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_114();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_272(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_489(iParam2);
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
			if (func_280(iParam2, iParam1))
			{
				func_115(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_273(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_490(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_280(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_115(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_274(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_491(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_115(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_115(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_492(iParam1, vVar0, vVar4))
					{
						func_115(iParam2, 1);
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
					func_115(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_492(iParam1, vVar0, vVar7))
					{
						func_115(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_275(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_480(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_493(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_494(&(Global_1935630->f_34[iVar0])))
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
			if (func_495(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_496(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_497(iParam1, iParam0, fVar1, iVar0))
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

bool func_276(int iParam0, int iParam1)
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

bool func_277(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_114();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_278(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_498(iVar0, &iVar2))
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
	if (func_499(iVar0, iParam0))
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

int func_279(int iParam0, int iParam1)
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

bool func_280(int iParam0, int iParam1)
{
	if (func_500(iParam0))
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

bool func_281(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_107(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_282()
{
}

bool func_283(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_501(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_114();
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
						if (func_373(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_114();
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

bool func_284()
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
	if ((func_114() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_285(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_482(iParam0);
	if (iParam0->f_12 > func_502(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_503(iParam1);
	iVar1 = func_504(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_286(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_505(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_287(int iParam0, int iParam1)
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
		if (func_506(iParam0, iParam1, 1))
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
					if (!func_507(iParam1, iParam0))
					{
						if (func_373(iVar4, Global_36, 1) < 7f)
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

bool func_288(int iParam0, int iParam1)
{
	if (!func_508(0))
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

bool func_289(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_114();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_290(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_291(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_114();
	}
	else if (func_114() - iParam1->f_4) > func_509(iParam1)
	{
		return func_510(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_292(int iParam0, int iParam1)
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

void func_293(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

char* func_294(char* sParam0, int iParam1)
{
	StringCopy(&cVar0, "RE_OT_", 64);
	switch (iVar461)
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
		case 11:
			StringConCat(&cVar0, "BGV_V1_", 64);
			break;
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			StringConCat(&cVar0, "SCM_V1_", 64);
			break;
	}
	if (!is_string_null_or_empty(sParam0))
	{
		StringConCat(&cVar0, sParam0, 64);
	}
	if (does_entity_exist(iParam1))
	{
		if (iParam1 == &uLocal_801[0])
		{
			StringConCat(&cVar0, "_A", 64);
		}
		else if (iParam1 == &uLocal_801[1])
		{
			StringConCat(&cVar0, "_B", 64);
		}
		else if (iParam1 == &uLocal_801[2])
		{
			StringConCat(&cVar0, "_C", 64);
		}
		else if (iParam1 == &uLocal_801[3])
		{
			StringConCat(&cVar0, "_D", 64);
		}
	}
	uVar8 = func_511(cVar0);
	return uVar8;
}

bool func_295(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_512(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_296(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_513(iParam0, &Var0);
}

bool func_297(int iParam0, bool bParam1)
{
	if (func_36(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_298(float fParam0)
{
	if (func_514(1))
	{
		return true;
	}
	if (func_98(&uLocal_0) && !func_515(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_299(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_300(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_301(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_302(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_303(int iParam0)
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

void func_304(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_303(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_516(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_517(iVar0);
	*uParam0 = 0;
}

char* func_305(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BASE_LOOPS";
		case 1:
			return "BASE_IDLE";
		case 2:
			return "DEJECTED_BASE";
		case 3:
			return "COWER_IDLES";
		case 4:
			return "GAND_1_SHOOTS_LOCK";
		default:
			break;
	}
	return "";
}

void func_306(int* iParam0, var uParam1)
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
	func_518(iParam0, uParam1, 1);
	func_519(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_307(int iParam0, int iParam1, int iParam2)
{
	if (is_vehicle_driveable(iParam1, false, false))
	{
		if (func_36(*iParam0, 0, 1))
		{
			if (!is_ped_in_vehicle(*iParam0, iParam1, false))
			{
				set_ped_into_vehicle(*iParam0, iParam1, iParam2);
			}
		}
	}
}

void func_308(int iParam0, bool bParam1, bool bParam2)
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

void func_309(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, bParam6);
		set_ped_sphere_defensive_area(iParam0, vParam1, fParam4, iParam5, bParam6, 0);
	}
}

void func_310(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_50(iVar490, 512))
	{
		if (bParam4)
		{
			if (!func_50(iVar490, iParam3))
			{
				register_hated_targets_around_ped(iParam0, 30f);
				open_sequence_task(&iParam2);
				task_combat_hated_targets_around_ped_timed(0, 30f, round(fVar482), 0);
				task_aim_at_entity(0, iParam1, -1, 1, 0);
				func_316(iParam0, &iParam2, 0.1f, 1f, 1, 1);
				func_24(&uLocal_497, iParam3);
			}
		}
		else if (iParam1 != 0)
		{
			if (!func_50(iVar490, iParam3))
			{
				open_sequence_task(&iParam2);
				if (func_389())
				{
					if (iParam0 == &uLocal_801[0])
					{
						task_shoot_at_entity(0, iParam1, round(fVar482), -687903391, 0);
					}
					else if (iParam0 == &uLocal_801[1])
					{
						task_shoot_at_entity(0, iParam1, round((fVar482 / 2f)), -687903391, 0);
					}
					else if (iParam0 == &uLocal_801[2])
					{
						task_shoot_at_entity(0, iParam1, round((fVar482 * 0.67f)), -687903391, 0);
					}
				}
				else if (iParam0 == &uLocal_801[0])
				{
					task_shoot_at_entity(0, iParam1, round((fVar482 * 0.67f)), -687903391, 0);
				}
				else if (iParam0 == &uLocal_801[1])
				{
					task_shoot_at_entity(0, iParam1, round((fVar482 / 2f)), -687903391, 0);
				}
				else if (iParam0 == &uLocal_801[2])
				{
					task_shoot_at_entity(0, iParam1, round(fVar482), -687903391, 0);
				}
				task_aim_at_entity(0, iParam1, -1, 1, 0);
				func_316(iParam0, &iParam2, 0.1f, 0.5f, 1, 1);
				func_24(&uLocal_497, iParam3);
			}
		}
	}
	else if (func_50(iVar490, iParam3))
	{
		func_112(&uLocal_497, iParam3);
	}
}

bool func_311(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

void func_312()
{
	if (func_50(iVar493, 32))
	{
		if (func_36(&(uLocal_801[5]), 0, 1))
		{
			if (func_98(&uLocal_927))
			{
				if (func_515(&uLocal_927, 7f) || func_342())
				{
					func_308(&(uLocal_801[5]), 0, 0);
				}
			}
			else
			{
				func_99(&uLocal_927);
			}
		}
	}
}

void func_313(int iParam0)
{
	if (iParam0 == &uLocal_801[4])
	{
		set_ped_config_flag(iParam0, 188, true);
		if (bVar892)
		{
			if (does_entity_exist(iVar815) && is_vehicle_driveable(iVar815, false, false))
			{
				task_vehicle_mission_ped_target(iParam0, iVar815, Global_35, 8, 7f, 0, 300f, -1f, true);
			}
		}
		else
		{
			task_combat_ped(iParam0, Global_35, 0, 0);
			set_ped_combat_attributes(iParam0, 1, false);
		}
		if (func_36(iParam0, 0, 1))
		{
			set_ped_relationship_group_hash(iParam0, 707888648);
		}
		if (get_script_task_status(iParam0, -1273030092, true) == 1)
		{
			register_hated_targets_around_ped(iParam0, 100f);
			task_combat_hated_targets(iParam0, -1f);
		}
	}
	else if (iParam0 == &uLocal_801[5])
	{
		if (func_36(iParam0, 0, 1))
		{
			set_ped_relationship_group_hash(iParam0, 707888648);
			task_combat_ped(iParam0, Global_35, 0, 0);
			set_ped_config_flag(iParam0, 188, true);
		}
	}
}

void func_314(int iParam0, var uParam1)
{
	if (iLocal_36 <= 0 || func_50(iVar492, 1))
	{
		return;
	}
	if (&iLocal_498[iParam0] > 0)
	{
		iLocal_503[iParam0] = func_521(uLocal_801[iParam0], Local_508[iParam0], 30f, uParam1, &(Local_37.f_192), 0f, 1, 0, "", func_520(3, 0, 0), 0, 0, 2, 0, -1082130432, 0);
	}
	switch (&iLocal_498[iParam0])
	{
		case 0:
			func_523((*uParam1)[0], func_522(7), "", -163964935, 0, 0, 0, 1, 0);
			func_523((*uParam1)[1], func_522(10), "", 648122183, 0, 0, 0, 1, 0);
			func_113((*uParam1)[0], 0, 0);
			func_113((*uParam1)[1], 0, 0);
			iLocal_498[iParam0] = 1;
			break;
		case 1:
			if (func_50(iVar492, 1024))
			{
				func_524(Local_508[iParam0], 0);
				func_523((*uParam1)[0], func_522(8), "", -163964935, 0, 0, 0, 1, 0);
				func_523((*uParam1)[1], func_522(10), "", 648122183, 0, 0, 0, 1, 0);
				func_113((*uParam1)[0], 1, 0);
				func_113((*uParam1)[1], 1, 0);
				iLocal_498[iParam0] = 2;
			}
			break;
		case 2:
			if (func_50(iVar815, 16777216))
			{
				if (!func_525(player_id(), uLocal_801[iParam0]))
				{
					func_524(Local_508[iParam0], 0);
					func_523((*uParam1)[0], func_522(7), "", -163964935, 0, 0, 0, 1, 0);
					func_523((*uParam1)[1], func_522(10), "", 648122183, 0, 0, 0, 1, 0);
				}
				func_113((*uParam1)[0], 0, 0);
				if (!func_50(iVar492, 4))
				{
					func_113((*uParam1)[1], 1, 0);
				}
				iLocal_498[iParam0] = 9;
			}
			else
			{
				if (!func_50(iVar492, 4))
				{
					if (func_50(iVar492, 2))
					{
						if (func_526((*uParam1)[0], 1, 0))
						{
							func_113((*uParam1)[0], 0, 0);
							func_113((*uParam1)[1], 1, 0);
						}
					}
					switch (&iLocal_503[iParam0])
					{
						case 0:
							if (!func_50(iVar492, 2))
							{
								fLocal_490 = (fVar486 + 5f);
								func_295(Global_35, &(uLocal_801[iParam0]), func_294("GRT_DEFUSE", 0), 0, -1082130432, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								func_113((*uParam1)[0], 0, 0);
								func_113((*uParam1)[1], 1, 0);
								func_24(&uLocal_496, 2);
							}
							break;
						case 1:
							func_99(&uLocal_468);
							func_295(Global_35, &(uLocal_801[iParam0]), func_294("GRT_ANTAGONIZE", 0), 0, -1082130432, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							func_113((*uParam1)[0], 0, 0);
							func_113((*uParam1)[1], 0, 0);
							func_24(&uLocal_496, 4);
							uLocal_817 = &uLocal_801[iParam0];
							iLocal_498[iParam0] = 3;
							break;
					}
				}
				else
				{
					func_113((*uParam1)[1], 0, 0);
					iLocal_498[iParam0] = 3;
				}
				Jump @979; //curOff = 789
				if (!func_50(iVar492, 4))
				{
					switch (&iLocal_503[iParam0])
					{
						case 0:
							break;
						case 1:
							func_99(&uLocal_468);
							func_113((*uParam1)[1], 0, 0);
							uLocal_817 = &uLocal_801[iParam0];
							func_295(Global_35, iVar813, func_294("GRT_ANTAGONIZE", 0), 0, -1082130432, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							func_24(&uLocal_496, 4);
							break;
					}
				}
				else
				{
					if (func_526((*uParam1)[0], 1, 0))
					{
						func_113((*uParam1)[0], 0, 0);
					}
					if (!func_526((*uParam1)[1], 1, 0))
					{
						func_113((*uParam1)[1], 0, 0);
					}
					iLocal_498[iParam0] = 3;
				}
			}
			default:
				break;
	}
}

void func_315()
{
	if (!func_50(iVar817, 524288))
	{
		if (func_50(iVar817, 16777216))
		{
			if (!is_scripted_speech_playing(&(uLocal_801[6])))
			{
				func_295(iVar910, &(uLocal_801[6]), func_294("LEAVE", iVar910), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_24(&uLocal_819, 524288);
			}
		}
	}
}

void func_316(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_317(int iParam0, bool bParam1)
{
	clear_sequence_task(&iVar0);
	open_sequence_task(&iVar0);
	if (func_50(iVar815, 32768))
	{
		_0x8acc0506743a8a5c(&(uLocal_801[iParam0]), 166028666, 1, -1082130432);
		if (func_373(&(uLocal_801[iParam0]), *vLocal_828[iParam0], 1) < 10f)
		{
			task_go_to_coord_while_aiming_at_entity_using_combat_style(0, *vLocal_828[iParam0], Global_35, 1.5f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
		}
		else
		{
			task_go_to_coord_while_aiming_at_entity_using_combat_style(0, *vLocal_828[iParam0], Global_35, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
		}
		task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
	}
	else
	{
		task_follow_nav_mesh_to_coord(0, *vLocal_828[iParam0], fVar816, 20000, 0.25f, 0, &(fLocal_850[iParam0]));
	}
	if (bParam1)
	{
		func_527(0, -258459266, 0, 1, 0, -1082130432);
	}
	func_316(&(uLocal_801[iParam0]), &iVar0, 0.1f, 1.5f, 1, 1);
	if (func_50(iVar815, 32768))
	{
	}
}

void func_318(int iParam0, int iParam1)
{
	if (func_36(iParam0, 0, 1) && iParam1 != -1)
	{
		if (&iLocal_871[iParam1] > 0)
		{
			set_ped_accuracy(iParam0, &(iLocal_871[iParam1]));
		}
	}
}

void func_319(int iParam0, int iParam1)
{
	if (func_36(iParam0, 0, 1))
	{
		if (&iLocal_871[iParam1] != 100)
		{
			iLocal_871[iParam1] = get_ped_accuracy(iParam0);
		}
	}
}

int func_320()
{
	if (!func_36(iVar910, 0, 1))
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (iVar0 == 0)
			{
				if (func_36(&(uLocal_801[iVar1]), 0, 1))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else
	{
		return iVar910;
	}
	return iVar0;
}

bool func_321(int iParam0, int iParam1)
{
	if (iParam0 == iVar908)
	{
		if ((&Local_37.f_98[iParam1] < (22f / 2f) && _0x7f9b9791d4cb71f6(iParam0, Global_35, false, 0) == 1) && !func_50(iVar815, 8))
		{
			return true;
		}
	}
	else if (func_325(Global_35, 35f))
	{
		if ((&Local_37.f_98[iParam1] < 22f && _0x7f9b9791d4cb71f6(iParam0, Global_35, false, 0) == 1) || func_373(Global_35, *vLocal_828[iParam1], 1) < 12f)
		{
			return true;
		}
	}
	return false;
}

bool func_322(int iParam0, bool bParam1)
{
	if (does_blip_exist(&(uLocal_793[iParam0])))
	{
	}
	else
	{
		func_116(&(uLocal_801[iParam0]), uLocal_793[iParam0], 831283580, 580546400, 0, 0);
	}
	if (!is_ped_using_any_scenario(&(uLocal_801[iParam0])) || (is_ped_using_any_scenario(&(uLocal_801[iParam0])) && _0x802092b07e3b1eea(&(uLocal_801[iParam0]), Global_36, 3)))
	{
		_0x2208438012482a1a(&(uLocal_801[iParam0]), false, false);
		clear_sequence_task(&iVar0);
		open_sequence_task(&iVar0);
		if (bParam1)
		{
			_0x8acc0506743a8a5c(&(uLocal_801[iParam0]), 166028666, 1, -1082130432);
			task_go_to_entity_while_aiming_at_entity_using_combat_style(0, Global_35, Global_35, 1.5f, 0, 7f, 1082130432, 1, 0, -687903391, 0);
		}
		task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
		func_316(&(uLocal_801[iParam0]), &iVar0, 0, 0, 1, 1);
		return true;
	}
	return false;
}

void func_323(bool bParam0, int iParam1)
{
	if (!func_50(iVar815, 4096))
	{
		if (bParam0)
		{
			if (does_entity_exist(iParam1) && func_36(iParam1, 0, 1))
			{
				func_295(iParam1, Global_35, func_294("WARN", iParam1), "", 75f, 0, 0, 0, 2, 0, 1, -500314840, 1, 0, 0);
				func_24(&uLocal_819, 4096);
			}
		}
		else
		{
			iVar0 = func_105(20f);
			if (iVar0 != 0)
			{
				func_295(iVar0, Global_35, func_294("WARN", iVar0), "", 75f, 0, 0, 0, 2, 0, 1, -500314840, 1, 0, 0);
				func_24(&uLocal_819, 4096);
			}
		}
	}
	else if (!func_50(iVar815, 8192))
	{
	}
}

void func_324(int iParam0, int iParam1, int iParam2)
{
	switch (iVar865)
	{
		case 0:
			if (get_entity_speed(iVar813) < 1f)
			{
				func_319(iParam0, iParam2);
				if (func_36(iParam0, 0, 1))
				{
					set_ped_accuracy(iParam0, 100);
				}
				if (is_ped_on_mount(iParam0))
				{
					iVar0 = get_mount(iParam0);
					if (func_36(iVar0, 0, 1))
					{
						set_blocking_of_non_temporary_events(iVar0, true);
						task_stand_still(iVar0, -1);
						set_ped_config_flag(iVar0, 145, true);
					}
				}
				vLocal_889 = { func_528() };
				clear_ped_tasks(iParam0, 1, 0);
				if (!func_70(vLocal_889))
				{
					clear_sequence_task(&iParam1);
					open_sequence_task(&iParam1);
					if (is_ped_on_mount(iParam0))
					{
						if (func_373(iParam0, vLocal_889, 1) > 20f)
						{
							task_follow_nav_mesh_to_coord(0, vLocal_889, 1.5f, 20000, 15f, 0, 40000f);
						}
						task_dismount_animal(0, 0, 0, 0, 0, 0);
					}
					if (_0x7f9b9791d4cb71f6(iParam0, Global_35, false, 0) == 1)
					{
						_0x8acc0506743a8a5c(iParam0, 166028666, 1, -1082130432);
						task_go_to_coord_while_aiming_at_entity_using_combat_style(0, vLocal_889, Global_35, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
					}
					else if (func_373(iParam0, vLocal_889, 1) > 10f)
					{
						task_follow_nav_mesh_to_coord(0, vLocal_889, 2f, 20000, 5f, 524289, func_529(vLocal_889, get_entity_coords(iVar813, true, false), 1));
					}
					else if (func_373(iParam0, vLocal_889, 1) > 5f)
					{
						task_follow_nav_mesh_to_coord(0, vLocal_889, 1.5f, 20000, 5f, 524289, func_529(vLocal_889, get_entity_coords(iVar813, true, false), 1));
					}
					task_follow_nav_mesh_to_coord(0, vLocal_889, 1f, 20000, 0.75f, 0, func_529(vLocal_889, get_entity_coords(iVar813, true, false), 1));
					func_316(iParam0, &iParam1, 0, 0, 1, 1);
				}
				func_112(&uLocal_819, 1048576);
				iLocal_870 = iVar865 + 1;
			}
			break;
		case 1:
			if ((get_script_task_status(iParam0, 242628503, true) != 1 || get_script_task_status(iParam0, 242628503, true) == 8) || is_entity_playing_anim(iParam0, &(Local_31[0]), "base_loops_MALE_A", 1))
			{
				if (func_373(iParam0, vLocal_889, 1) > 10f)
				{
					iLocal_870 = 0;
				}
				else
				{
					func_24(&uLocal_819, 1048576);
					iLocal_870 = iVar865 + 1;
				}
			}
			break;
		case 2:
			if ((func_50(iVar814, 2097152) && _0x8d81e7824b7753f7(Local_231, func_305(4), 1)) && !func_50(iVar492, 32768))
			{
				func_24(&uLocal_819, 8);
				func_319(iParam0, iParam2);
				if (func_36(iParam0, 0, 1))
				{
					set_ped_accuracy(iParam0, 100);
				}
				task_play_anim(iParam0, &(Local_31[0]), "Gang_1_Shoots_Lock_MALE_A", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
				func_318(iParam0, iParam2);
				iLocal_870 = iVar865 + 1;
			}
			break;
		case 3:
			func_131();
			if (!func_50(iVar814, 1))
			{
				if (is_entity_playing_anim(iParam0, &(Local_31[0]), "Gang_1_Shoots_Lock_MALE_A", 1))
				{
					if (_get_entity_anim_current_time(iParam0, &(Local_31[0]), "Gang_1_Shoots_Lock_MALE_A") >= 0.38f)
					{
						if (does_entity_exist(iVar904))
						{
							func_24(&uLocal_819, 8388608);
							_0x4c57f27d1554e6b0(iParam0, get_entity_coords(iVar904, true, false), 1, -1082130432, 0, -1082130432);
							set_vehicle_doors_shut(iVar813, true);
							iLocal_870 = iVar865 + 1;
						}
					}
				}
			}
			break;
		case 4:
			if (does_entity_exist(iVar904))
			{
				set_entity_as_mission_entity(iVar904, true, false);
				delete_object(&iLocal_909);
			}
			iLocal_870 = iVar865 + 1;
			break;
		case 5:
			if (is_entity_playing_anim(iParam0, &(Local_31[0]), "Gang_1_Shoots_Lock_MALE_A", 1))
			{
				set_anim_rate(iParam0, 1.25f, 2, false);
			}
			else
			{
				iLocal_870 = iVar865 + 1;
			}
			break;
		case 6:
			break;
	}
}

bool func_325(int iParam0, float fParam1)
{
	if (func_107(iParam0, iVar814, 1, 1) < fParam1)
	{
		return true;
	}
	return false;
}

void func_326(int iParam0)
{
	_0x06d26a96ca1bca75(iParam0, 3, 0f, 0);
	_0x2eb75fb86c41f026(iParam0, 3, 0);
}

void func_327(int iParam0)
{
	if (&Local_37.f_98[iParam0] < 10f)
	{
		if (!func_50(iVar816, 32768))
		{
			func_323(1, &(uLocal_801[iParam0]));
			func_24(&uLocal_819, 32768);
		}
	}
}

bool func_328()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_36(&(uLocal_801[iVar0]), 0, 1))
		{
			if (iVar0 != 4 && iVar0 != 5)
			{
				if (get_mount(&(uLocal_801[iVar0])) == 0)
				{
					if (iVar0 == 6 && func_50(iVar817, 2))
					{
					}
					else if (iVar0 == 6)
					{
						if (func_36(&(iLocal_814[0]), 0, 1))
						{
							return false;
						}
					}
					else if (iVar0 == 0)
					{
						if (func_36(&(uLocal_809[0]), 0, 1))
						{
							return false;
						}
					}
					else if (iVar0 == 1)
					{
						if (func_36(&(uLocal_809[1]), 0, 1))
						{
							return false;
						}
					}
					else if (iVar0 == 2)
					{
						if (func_36(&(uLocal_809[2]), 0, 1))
						{
							return false;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_329(bool bParam0)
{
	if (iVar969 == -1 && func_36(&(uLocal_801[iVar969]), 0, 1))
	{
		return;
	}
	iLocal_972 = func_530();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_36(&(uLocal_801[iVar0]), 0, 1))
		{
			if (iVar969 == -1)
			{
				if ((bParam0 && get_mount(&(uLocal_801[iVar0])) != 0) || !bParam0)
				{
					iLocal_972 = iVar0;
					set_ped_as_group_leader(&(uLocal_801[iVar969]), iVar905, true);
				}
				else
				{
					Jump @162; //curOff = 130
					set_ped_as_group_member(&(uLocal_801[iVar0]), iVar905);
					set_ped_config_flag(&(uLocal_801[iVar0]), 279, true);
					iVar0++;
				}
			}
		}
	}
}

void func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = func_294("AGGRO", &(uLocal_801[iParam0]));
			break;
		case 1:
			sVar0 = func_294("AGGRO", &(uLocal_801[iParam0]));
			break;
		case 2:
			sVar0 = func_294("AGGRO", &(uLocal_801[iParam0]));
			break;
		case 3:
			sVar0 = func_294("AGGRO", &(uLocal_801[iParam0]));
			break;
		case 4:
			sVar0 = "GENERIC_ANGRY_REACTION";
			break;
		case 5:
			sVar0 = "GENERIC_ANGRY_REACTION";
			break;
		case 6:
			sVar0 = func_294("AGGRO_CAPTIVE", &(uLocal_801[iParam0]));
			break;
	}
	func_295(&(uLocal_801[iParam0]), Global_35, sVar0, "", 75f, 0, 0, 0, 1, 0, 1, 1808677283, 0, 0, 0);
}

void func_331()
{
	if (!func_50(iVar495, 65536))
	{
		if (iVar970 == -1)
		{
			bVar0 = true;
		}
		else if (!func_36(&(uLocal_801[iVar970]), 0, 1) || get_mount(&(uLocal_801[iVar970])) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (func_36(&(uLocal_801[iVar1]), 0, 1))
				{
					_task_move_in_traffic(&(uLocal_801[iVar1]), 2f, 0, 0);
				}
				iVar1++;
			}
			func_24(&uLocal_497, 65536);
		}
	}
}

bool func_332(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

void func_333()
{
	if (iLocal_36 <= 0 || func_50(iVar494, 512))
	{
		return;
	}
	if (!Local_37.f_46)
	{
		if (iVar733 < 8)
		{
			if (func_50(iVar817, 262144))
			{
				if (!func_526(Local_758[1], 1, 0))
				{
					func_113(Local_758[1], 1, 0);
				}
				if (!func_50(iVar495, 16384))
				{
					func_34(uLocal_793[6]);
				}
				iLocal_735 = 8;
			}
		}
	}
	else if (_is_ped_lassoed(&(uLocal_801[6])))
	{
		func_306(&iLocal_737, &Local_758);
		func_24(&uLocal_496, 512);
	}
	if (iVar733 > 0)
	{
		iLocal_736 = func_521(uLocal_801[6], &iLocal_737, 15f, &Local_758, &(Local_37.f_192), 0f, 1, 0, "", func_520(3, 0, 0), 0, 0, 2, 0, -1082130432, 0);
	}
	switch (iVar733)
	{
		case 0:
			func_523(Local_758[0], func_522(7), "", -163964935, 0, 0, 0, 1, 0);
			func_523(Local_758[1], func_522(10), "", 648122183, 0, 0, 0, 1, 0);
			func_113(Local_758[0], 0, 0);
			func_113(Local_758[1], 0, 0);
			iLocal_735 = 1;
			break;
		case 1:
			if (func_342() && func_50(iVar494, 64))
			{
				func_81(&(uLocal_801[6]), 1);
				func_524(&iLocal_737, 0);
				func_523(Local_758[0], func_522(7), "", -163964935, 0, 0, 0, 1, 0);
				func_523(Local_758[1], func_522(10), "", 648122183, 0, 0, 0, 1, 0);
				func_113(Local_758[0], 0, 0);
				func_113(Local_758[1], 1, 0);
				iLocal_735 = 5;
			}
			else if (func_50(iVar494, 1024))
			{
				func_524(&iLocal_737, 0);
				func_523(Local_758[0], func_522(8), "", -163964935, 0, 0, 0, 1, 0);
				func_523(Local_758[1], func_522(10), "", 648122183, 0, 0, 0, 1, 0);
				func_113(Local_758[0], 1, 0);
				func_113(Local_758[1], 1, 0);
				iLocal_735 = 4;
			}
			break;
		case 4:
			if (func_342() && func_50(iVar494, 64))
			{
				func_524(&iLocal_737, 0);
				func_523(Local_758[0], func_522(7), "", -163964935, 0, 0, 0, 1, 0);
				func_523(Local_758[1], func_522(10), "", 648122183, 0, 0, 0, 1, 0);
				func_113(Local_758[0], 0, 0);
				func_113(Local_758[1], 1, 0);
				iLocal_735 = 5;
			}
			else if (!func_50(iVar494, 4))
			{
				if (func_50(iVar494, 2))
				{
					if (func_526(Local_758[0], 1, 0))
					{
						func_113(Local_758[0], 0, 0);
					}
				}
				switch (iVar734)
				{
					case 0:
						if (!func_50(iVar494, 2))
						{
							fLocal_490 = (fVar488 + 5f);
							func_295(Global_35, &(uLocal_801[6]), func_294("GRT_DEFUSE", 0), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							func_113(Local_758[0], 0, 0);
							func_24(&uLocal_496, 2);
						}
						break;
					case 1:
						func_99(&uLocal_468);
						func_295(Global_35, &(uLocal_801[6]), func_294("GRT_ANTAGONIZE", 0), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						func_113(Local_758[1], 0, 0);
						func_24(&uLocal_496, 4);
						iLocal_735 = 3;
						break;
				}
			}
			else
			{
				func_113(Local_758[0], 0, 0);
				func_113(Local_758[1], 0, 0);
				iLocal_735 = 5;
			}
			break;
		case 5:
			if (func_50(iVar817, 1))
			{
				if (func_50(iVar817, 262144))
				{
					if (!func_526(Local_758[1], 1, 0))
					{
						func_113(Local_758[1], 1, 0);
					}
				}
				else if (!func_50(iVar817, 262144))
				{
					if (func_526(Local_758[1], 1, 0))
					{
						func_113(Local_758[1], 0, 0);
					}
				}
			}
			if (func_50(iVar494, 64))
			{
				if (!func_526(Local_758[1], 1, 0))
				{
					if (!func_50(iVar494, 128))
					{
						func_113(Local_758[1], 1, 0);
					}
				}
			}
			else if (func_526(Local_758[1], 1, 0))
			{
				func_113(Local_758[1], 0, 0);
			}
			switch (iVar734)
			{
				case 0:
					break;
				case 1:
					if (func_50(iVar817, 1))
					{
						func_295(Global_35, &(uLocal_801[6]), func_294("GRT_INSULT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_113(Local_758[1], 0, 0);
						iLocal_735 = 6;
					}
					else
					{
						if (!func_50(iVar494, 4096))
						{
							func_295(Global_35, &(uLocal_801[6]), func_294("GRT_THREAT_WAGON", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_24(&uLocal_496, 4096);
						}
						else
						{
							func_295(Global_35, &(uLocal_801[6]), func_294("GRT_THREAT_WAGON_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_24(&uLocal_496, 8192);
						}
						func_113(Local_758[1], 0, 0);
						func_24(&uLocal_496, 128);
						iLocal_735 = 7;
					}
					break;
			}
			break;
		case 7:
			if (!func_50(iVar494, 32))
			{
				if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(2), 1))
				{
					sVar0 = func_87(12);
					if (!_0x1f0e401031e20146(Local_231.f_1, sVar0))
					{
						if (!_0x23e33cb9f4a3f547(Local_231.f_1, sVar0))
						{
							_0xdf7b5144e25cd3fe(Local_231.f_1, sVar0);
						}
						else
						{
							func_531(uLocal_491[2], Local_231.f_1, func_88(2), -2147483648);
							_set_anim_scene_playback_list_bool(Local_231.f_1, sVar0, true);
						}
					}
				}
				else
				{
					iLocal_464 = func_532(iVar816, Global_35, 0f);
					switch (iVar462)
					{
						case 0:
							if (func_532(iVar816, Global_35, 1f) == 3)
							{
								sVar1 = func_87(31);
							}
							else
							{
								sVar1 = func_87(33);
							}
							break;
						case 1:
							iLocal_464 = func_532(iVar816, Global_35, 1060437492);
							switch (iVar462)
							{
								case 3:
									sVar1 = func_87(31);
									break;
								case 2:
									sVar1 = func_87(33);
									break;
								case 1:
									sVar1 = func_87(34);
									break;
							}
							break;
					}
					if (!is_string_null_or_empty(sVar1))
					{
						if (!_0x23e33cb9f4a3f547(Local_231.f_1, sVar1))
						{
							_0xdf7b5144e25cd3fe(Local_231.f_1, sVar1);
						}
						else if (func_108(0, 1, Global_35, 1))
						{
							if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(1), 1))
							{
								func_531(uLocal_491[0], Local_231.f_1, func_88(0), 536870912);
								_set_anim_scene_playback_list_bool(Local_231.f_1, sVar1, true);
								if (iVar465 == 0)
								{
									func_295(&(uLocal_801[6]), &(uLocal_801[6]), func_294("THREAT", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
								}
								else
								{
									func_295(&(uLocal_801[6]), &(uLocal_801[6]), func_294("THREAT_ALT", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
								}
								func_24(&uLocal_496, 32);
							}
							else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(3), 1))
							{
								if (iVar465 == 0)
								{
									func_295(&(uLocal_801[6]), &(uLocal_801[6]), func_294("THREAT", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
								}
								else
								{
									func_295(&(uLocal_801[6]), &(uLocal_801[6]), func_294("THREAT_ALT", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
								}
								func_24(&uLocal_496, 32);
							}
						}
					}
				}
			}
			else if (func_108(-4f, 1, &(uLocal_801[6]), 0))
			{
				if (!func_50(iVar494, 8192))
				{
					func_112(&uLocal_496, 128);
					func_113(Local_758[1], 1, 0);
				}
				iLocal_735 = 5;
			}
			break;
		case 6:
			if ((func_108(-2f, 1, Global_35, 1) && !is_any_speech_playing(&(uLocal_801[6]))) && func_50(iVar817, 262144))
			{
				if (iVar465 == 0)
				{
					func_295(&(uLocal_801[6]), Global_35, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					func_295(&(uLocal_801[6]), Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				func_113(Local_758[0], 0, 0);
				func_113(Local_758[1], 0, 0);
				iLocal_735 = 3;
			}
			break;
		case 8:
			switch (iVar734)
			{
				case 0:
					break;
				case 1:
					if (!func_50(iVar494, 4))
					{
						func_295(Global_35, &(uLocal_801[6]), func_294("GRT_INSULT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_113(Local_758[1], 0, 0);
						func_99(&uLocal_468);
						func_24(&uLocal_496, 4);
					}
					else
					{
						if (func_526(Local_758[0], 1, 0))
						{
							func_113(Local_758[0], 0, 0);
						}
						if (!func_526(Local_758[1], 1, 0))
						{
							func_113(Local_758[1], 0, 0);
						}
						iLocal_735 = 3;
					}
					break;
			}
			break;
		case 3:
			break;
	}
}

void func_334()
{
	if (func_50(iVar817, 16777216))
	{
		if (!func_50(iVar495, 131072))
		{
			set_ped_can_be_targetted(&(uLocal_801[6]), true);
			set_ped_config_flag(&(uLocal_801[6]), 253, false);
			func_24(&uLocal_497, 131072);
		}
	}
	else if (has_anim_event_fired(&(uLocal_801[6]), -358482787))
	{
		if (func_50(iVar495, 131072))
		{
			set_ped_can_be_targetted(&(uLocal_801[6]), false);
			set_ped_config_flag(&(uLocal_801[6]), 253, true);
			func_112(&uLocal_497, 131072);
		}
	}
	else if (!func_50(iVar495, 131072))
	{
		set_ped_can_be_targetted(&(uLocal_801[6]), true);
		set_ped_config_flag(&(uLocal_801[6]), 253, false);
		func_24(&uLocal_497, 131072);
	}
}

void func_335()
{
	if (does_entity_exist(iVar816))
	{
		if (!func_50(iVar817, 16777216))
		{
			if (_0x159ef5b6edce00e8(&(uLocal_801[6]), iVar816))
			{
				if (has_anim_event_fired(&(uLocal_801[6]), 1403772282))
				{
					func_24(&uLocal_819, 16777216);
					func_81(&(uLocal_801[6]), 0);
					if (_0x159ef5b6edce00e8(&(uLocal_801[6]), iVar816))
					{
						_0x8886d83a430537fd(&(uLocal_801[6]), 0);
					}
				}
			}
		}
		else if (_0x159ef5b6edce00e8(&(uLocal_801[6]), iVar816))
		{
			_0x8886d83a430537fd(&(uLocal_801[6]), 0);
		}
	}
}

void func_336()
{
	if (func_50(iVar817, 131072))
	{
		if (does_entity_exist(iVar816))
		{
			if (is_entity_on_fire(iVar816))
			{
				if (func_36(&(uLocal_801[6]), 0, 1) && !func_50(iVar817, 262144))
				{
					vVar1 = { get_entity_coords(&(uLocal_801[6]), true, false) };
					iVar0 = get_number_of_fires_in_range(vVar1, 1.5f);
					if (iVar0 >= 1)
					{
						if (!is_entity_on_fire(&(uLocal_801[6])))
						{
							start_entity_fire(&(uLocal_801[6]), 0, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_337()
{
	if (!func_50(iVar495, 8))
	{
		if (func_103(&(uLocal_801[6]), 0, &(Local_37.f_5), &uLocal_916, 0, 0))
		{
			func_99(&uLocal_474);
			func_362(&(Local_37.f_5), 1);
			func_24(&uLocal_497, 8);
		}
	}
	else if (!func_98(&uLocal_474))
	{
		func_99(&uLocal_474);
	}
	else
	{
		fVar0 = func_100(&uLocal_474);
		if (fVar0 > 1f)
		{
			if (func_103(&(uLocal_801[6]), 0, &(Local_37.f_5), &uLocal_916, 0, 0) && !func_50(iVar817, 1))
			{
				func_33(&(Local_37.f_5), &uLocal_916);
			}
			else
			{
				func_112(&uLocal_497, 8);
				func_33(&(Local_37.f_5), &uLocal_916);
			}
		}
	}
}

bool func_338()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_36(&(uLocal_801[iVar0]), 0, 1))
		{
			if (!is_entity_occluded(&(uLocal_801[iVar0])))
			{
				return true;
			}
		}
		iVar0++;
	}
	if (does_entity_exist(iVar816))
	{
		if (!is_entity_occluded(iVar816))
		{
			return true;
		}
	}
	return false;
}

void func_339()
{
	if (!is_scripted_speech_playing(&(uLocal_801[6])))
	{
		if (!func_50(iVar817, 1))
		{
			if (!func_342())
			{
				switch (iVar879)
				{
					case 0:
						if (func_366())
						{
							uLocal_881 = iVar879 + 1;
						}
						else if (!_0x23e33cb9f4a3f547(Local_231, func_87(1)))
						{
							_0xdf7b5144e25cd3fe(Local_231, func_87(1));
						}
						else
						{
							func_531(uLocal_491[0], Local_231, func_88(0), 536870912);
							_set_anim_scene_playback_list_bool(Local_231, func_87(1), true);
							uLocal_881 = iVar879 + 1;
						}
						break;
					case 1:
						if (!_0x23e33cb9f4a3f547(Local_231, func_87(2)))
						{
							_0xdf7b5144e25cd3fe(Local_231, func_87(2));
						}
						else if (_0x8d81e7824b7753f7(Local_231, func_305(0), 1))
						{
							func_531(uLocal_491[0], Local_231, func_88(0), 536870912);
							_set_anim_scene_playback_list_bool(Local_231, func_87(2), true);
							uLocal_881 = iVar879 + 1;
						}
						break;
					case 2:
						if (!_0x23e33cb9f4a3f547(Local_231, func_87(3)))
						{
							_0xdf7b5144e25cd3fe(Local_231, func_87(3));
						}
						else if (_0x8d81e7824b7753f7(Local_231, func_305(0), 1))
						{
							func_531(uLocal_491[0], Local_231, func_88(0), 536870912);
							_set_anim_scene_playback_list_bool(Local_231, func_87(3), true);
							uLocal_881 = iVar879 + 1;
						}
						break;
					case 3:
						break;
				}
			}
		}
	}
}

void func_340(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			_delete_anim_scene(iParam0);
		}
	}
}

bool func_341()
{
	if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(1), 1))
	{
		if (!_0x23e33cb9f4a3f547(Local_231.f_1, func_87(39)))
		{
			_0xdf7b5144e25cd3fe(Local_231.f_1, func_87(39));
		}
		else
		{
			func_531(uLocal_491[0], Local_231.f_1, func_88(0), 536870912);
			_set_anim_scene_playback_list_bool(Local_231.f_1, func_87(39), true);
			return true;
		}
	}
	else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(2), 1))
	{
		if (!_0x23e33cb9f4a3f547(Local_231.f_1, func_87(11)))
		{
			_0xdf7b5144e25cd3fe(Local_231.f_1, func_87(11));
		}
		else
		{
			func_531(uLocal_491[2], Local_231.f_1, func_88(2), -2147483648);
			_set_anim_scene_playback_list_bool(Local_231.f_1, func_87(11), true);
			return true;
		}
	}
	else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(3), 1))
	{
		if (!_0x23e33cb9f4a3f547(Local_231.f_1, func_87(9)))
		{
			_0xdf7b5144e25cd3fe(Local_231.f_1, func_87(9));
		}
		else
		{
			func_531(uLocal_491[1], Local_231.f_1, func_88(1), 1073741824);
			_set_anim_scene_playback_list_bool(Local_231.f_1, func_87(9), true);
			return true;
		}
	}
	else if (!_0x23e33cb9f4a3f547(Local_231.f_1, func_87(11)))
	{
		_0xdf7b5144e25cd3fe(Local_231.f_1, func_87(11));
	}
	else
	{
		func_531(uLocal_491[2], Local_231.f_1, func_88(2), -2147483648);
		_set_anim_scene_playback_list_bool(Local_231.f_1, func_87(11), true);
		return true;
	}
	return false;
}

bool func_342()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_36(&(uLocal_801[iVar0]), 0, 1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_343()
{
	switch (iVar886)
	{
		case 0:
			if (!func_98(&uLocal_924))
			{
				func_99(&uLocal_924);
			}
			else if (func_100(&uLocal_924) > 4f)
			{
				func_99(&uLocal_924);
				func_295(&(uLocal_801[6]), &(uLocal_801[6]), func_294("COMBAT_WAGON_A", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				uLocal_888 = iVar886 + 1;
			}
			break;
		case 1:
			if (!is_scripted_speech_playing(&(uLocal_801[6])))
			{
				func_99(&uLocal_924);
				uLocal_888 = iVar886 + 1;
			}
			break;
		case 2:
			if (func_100(&uLocal_924) > 8f)
			{
				func_99(&uLocal_924);
				func_295(&(uLocal_801[6]), &(uLocal_801[6]), func_294("COMBAT_WAGON_B", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				uLocal_888 = iVar886 + 1;
			}
			break;
		case 3:
			if (!is_scripted_speech_playing(&(uLocal_801[6])))
			{
				func_99(&uLocal_924);
				uLocal_888 = iVar886 + 1;
			}
			break;
		case 4:
			if (func_100(&uLocal_924) > 10f)
			{
				func_99(&uLocal_924);
				func_295(&(uLocal_801[6]), &(uLocal_801[6]), func_294("COMBAT_WAGON_C", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				uLocal_888 = iVar886 + 1;
			}
			break;
		case 5:
			break;
	}
}

void func_344()
{
	if (!_is_anim_scene_started(Local_231.f_1, false))
	{
		return;
	}
	func_533();
	if (!func_50(iVar817, 1))
	{
		if (!func_342() && Local_37.f_46)
		{
			if (!func_98(&uLocal_936))
			{
				func_99(&uLocal_936);
			}
			else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(1), 1))
			{
				if (func_100(&uLocal_936) > fVar891 || (func_50(iVar817, 32) && func_100(&uLocal_936) > 1f))
				{
					if (func_50(iVar817, 32))
					{
						func_534();
						func_112(&uLocal_819, 32);
					}
					else
					{
						func_535();
					}
				}
			}
		}
	}
}

void func_345()
{
	if (!_is_anim_scene_started(Local_231.f_1, false))
	{
		return;
	}
	if (!func_50(iVar817, 1))
	{
		if (func_342())
		{
			switch (iVar880)
			{
				case 0:
					func_99(&uLocal_930);
					uLocal_882 = iVar880 + 1;
					break;
				case 1:
					if ((func_100(&uLocal_930) > 1f && func_481(&(uLocal_801[6]), Global_35) < 22f) && !is_entity_occluded(&(uLocal_801[6])))
					{
						iLocal_464 = func_532(iVar816, Global_35, 1060437492);
						switch (iVar462)
						{
							case 0:
								if (func_532(iVar816, Global_35, 1f) == 3)
								{
									sVar0 = func_87(20);
								}
								else
								{
									sVar0 = func_87(22);
								}
								break;
							case 1:
								iLocal_464 = func_532(iVar816, Global_35, 1060437492);
								switch (iVar462)
								{
									case 3:
										sVar0 = func_87(20);
										break;
									case 2:
										sVar0 = func_87(22);
										break;
									case 1:
										sVar0 = func_87(23);
										break;
								}
								break;
						}
						if (!is_string_null_or_empty(sVar0))
						{
							if (!_0x23e33cb9f4a3f547(Local_231.f_1, sVar0))
							{
								_0xdf7b5144e25cd3fe(Local_231.f_1, sVar0);
							}
							else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(2), 1))
							{
								func_531(uLocal_491[2], Local_231.f_1, func_88(2), -2147483648);
								_set_anim_scene_playback_list_bool(Local_231.f_1, sVar0, true);
								if (iVar465 == 2)
								{
									func_295(&(uLocal_801[6]), &(uLocal_801[6]), "RE_OT_SCM_V1_THREAT_ALT_B", "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
								}
								else
								{
									func_295(&(uLocal_801[6]), &(uLocal_801[6]), func_294("THREAT_TIME", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
								}
								func_99(&uLocal_921);
								uLocal_882 = iVar880 + 1;
							}
							else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(1), 1))
							{
								if (!_0x1f0e401031e20146(Local_231.f_1, func_87(6)))
								{
									if (!_0x23e33cb9f4a3f547(Local_231.f_1, func_87(6)))
									{
										_0xdf7b5144e25cd3fe(Local_231.f_1, func_87(6));
									}
									else
									{
										func_531(uLocal_491[0], Local_231.f_1, func_88(0), 536870912);
										_set_anim_scene_playback_list_bool(Local_231.f_1, func_87(6), true);
									}
								}
							}
						}
					}
					break;
				case 2:
					if (func_100(&uLocal_921) > 3f)
					{
						func_99(&uLocal_921);
						func_24(&uLocal_496, 64);
						uLocal_882 = iVar880 + 1;
					}
					break;
				case 3:
					if (func_50(iVar494, 32))
					{
						uLocal_882 = iVar880 + 1;
					}
					else if (func_100(&uLocal_921) > 8f && func_526(Local_758[1], 1, 0))
					{
						if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(2), 1))
						{
							func_112(&uLocal_496, 64);
							uLocal_882 = iVar880 + 1;
						}
						else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(1), 1))
						{
							sVar0 = func_87(6);
							if (!_0x23e33cb9f4a3f547(Local_231.f_1, sVar0))
							{
								_0xdf7b5144e25cd3fe(Local_231.f_1, sVar0);
							}
							else
							{
								func_531(uLocal_491[0], Local_231.f_1, func_88(0), 536870912);
								_set_anim_scene_playback_list_bool(Local_231.f_1, sVar0, true);
								func_112(&uLocal_496, 64);
								uLocal_882 = iVar880 + 1;
							}
						}
					}
					break;
				case 4:
					if (func_108(4f, 1, &(uLocal_801[6]), 0))
					{
						if (func_481(&(uLocal_801[6]), Global_35) < 22f)
						{
							uLocal_882 = iVar880 + 1;
						}
					}
					break;
				case 5:
					if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(2), 1))
					{
						func_24(&uLocal_496, 64);
						uLocal_882 = iVar880 + 1;
					}
					else
					{
						uLocal_882 = iVar880 + 1;
					}
					break;
				case 6:
					if (!func_50(iVar494, 64))
					{
						if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(2), 1))
						{
							func_24(&uLocal_496, 64);
						}
					}
					break;
			}
		}
	}
}

bool func_346()
{
	if (does_entity_exist(iVar907))
	{
		if (get_player_target_entity(player_id(), &iVar0))
		{
			if (is_entity_an_object(iVar0))
			{
				if (get_object_index_from_entity_index(iVar0) == iVar907)
				{
					return true;
				}
			}
		}
		if (is_player_free_aiming_at_entity(player_id(), iVar907))
		{
			return true;
		}
	}
	return false;
}

void func_347()
{
	if (!_is_anim_scene_started(Local_231.f_1, false))
	{
		return;
	}
	if (!func_50(iVar817, 1))
	{
		if (func_342())
		{
			if ((func_50(iVar494, 128) && func_50(iVar494, 32)) || !func_50(iVar494, 128))
			{
				if (!func_98(&uLocal_918))
				{
					func_99(&uLocal_918);
				}
				if (!func_50(iVar817, 67108864) && func_346())
				{
					if (func_108(0, 1, &(uLocal_801[6]), 1))
					{
						sVar1 = "AIM_LOCK";
					}
				}
				else if (func_108(0, 1, &(uLocal_801[6]), 1))
				{
					if (iVar881 == 0)
					{
						sVar1 = "AIM_FLINCH_A";
					}
					else if (iVar881 == 1)
					{
						sVar1 = "AIM_FLINCH_B";
					}
					else if (iVar881 == 2)
					{
						sVar1 = "AIM_FLINCH_C";
					}
				}
				else
				{
					sVar1 = "";
				}
				switch (iVar732)
				{
					case 0:
						if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(3), 1))
						{
							if (!func_50(iVar817, 67108864) && func_346())
							{
								sVar0 = func_87(30);
							}
							else if (iVar881 == 0)
							{
								sVar0 = func_87(19);
							}
							else if (iVar881 == 1)
							{
								sVar0 = func_87(25);
							}
							else if (iVar881 == 2)
							{
								sVar0 = func_87(24);
							}
							else
							{
								sVar0 = func_87(19);
							}
							if (!is_string_null_or_empty(sVar0))
							{
								if (!_0x23e33cb9f4a3f547(Local_231.f_1, sVar0))
								{
									_0xdf7b5144e25cd3fe(Local_231.f_1, sVar0);
								}
								else
								{
									func_531(uLocal_491[1], Local_231.f_1, func_88(1), 1073741824);
									_set_anim_scene_playback_list_bool(Local_231.f_1, sVar0, true);
									if (!is_string_null_or_empty(sVar1))
									{
										if (are_strings_equal(sVar1, "AIM_LOCK"))
										{
											func_24(&uLocal_819, 67108864);
										}
										func_295(&(uLocal_801[6]), Global_35, func_294(sVar1, 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
										uLocal_883 = iVar881 + 1;
									}
									func_99(&uLocal_918);
									if (are_strings_equal(sVar0, func_87(30)))
									{
										func_24(&uLocal_819, 67108864);
									}
									iLocal_734 = iVar732 + 1;
								}
							}
						}
						else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(1), 1))
						{
							sVar0 = func_87(14);
							if (!_0x1f0e401031e20146(Local_231.f_1, sVar0))
							{
								if (!is_string_null_or_empty(sVar0))
								{
									if (!_0x23e33cb9f4a3f547(Local_231.f_1, sVar0))
									{
										_0xdf7b5144e25cd3fe(Local_231.f_1, sVar0);
									}
									else
									{
										func_531(uLocal_491[0], Local_231.f_1, func_88(0), 536870912);
										func_99(&uLocal_918);
										_set_anim_scene_playback_list_bool(Local_231.f_1, sVar0, true);
										if (!is_string_null_or_empty(sVar1))
										{
											func_295(&(uLocal_801[6]), Global_35, func_294(sVar1, 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
											uLocal_883 = iVar881 + 1;
										}
										if (are_strings_equal(sVar0, func_87(30)))
										{
											func_24(&uLocal_819, 67108864);
										}
										iLocal_734 = iVar732 + 1;
									}
								}
							}
						}
						else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(2), 1))
						{
							sVar0 = func_87(10);
							if (!_0x1f0e401031e20146(Local_231.f_1, sVar0))
							{
								if (!is_string_null_or_empty(sVar0))
								{
									if (!_0x23e33cb9f4a3f547(Local_231.f_1, sVar0))
									{
										_0xdf7b5144e25cd3fe(Local_231.f_1, sVar0);
									}
									else
									{
										func_531(uLocal_491[2], Local_231.f_1, func_88(2), -2147483648);
										_set_anim_scene_playback_list_bool(Local_231.f_1, sVar0, true);
										if (!is_string_null_or_empty(sVar1))
										{
											func_295(&(uLocal_801[6]), Global_35, func_294(sVar1, 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
											uLocal_883 = iVar881 + 1;
										}
										func_99(&uLocal_918);
										if (are_strings_equal(sVar0, func_87(30)))
										{
											func_24(&uLocal_819, 67108864);
										}
										iLocal_734 = iVar732 + 1;
									}
								}
							}
						}
						break;
					case 1:
						if (func_100(&uLocal_918) > (1f + 1f))
						{
							if (func_50(iVar495, 8) || func_346())
							{
								if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(3), 1))
								{
									func_99(&uLocal_918);
									iLocal_734 = 0;
								}
							}
							else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(3), 1))
							{
								sVar0 = func_87(8);
								if (!_0x23e33cb9f4a3f547(Local_231.f_1, sVar0))
								{
									_0xdf7b5144e25cd3fe(Local_231.f_1, sVar0);
								}
								else
								{
									func_531(uLocal_491[1], Local_231.f_1, func_88(1), 1073741824);
									_set_anim_scene_playback_list_bool(Local_231.f_1, sVar0, true);
									func_99(&uLocal_918);
									iLocal_734 = 0;
									func_112(&uLocal_819, 33554432);
								}
							}
						}
						break;
				}
			}
		}
	}
}

bool func_348()
{
	if (iVar910 != 0)
	{
		if (iVar910 == &uLocal_801[0])
		{
			iVar0 = 0;
		}
		else if (iVar910 == &uLocal_801[1])
		{
			iVar0 = 1;
		}
		else if (iVar910 == &uLocal_801[2])
		{
			iVar0 = 2;
		}
		else if (iVar910 == &uLocal_801[3])
		{
			iVar0 = 3;
		}
		if (&iLocal_967[iVar0] == 7)
		{
			return true;
		}
	}
	return false;
}

bool func_349(int iParam0, var uParam1)
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

void func_350()
{
	if (!func_50(iVar495, 16))
	{
		if ((func_36(&(uLocal_801[6]), 0, 1) && &Local_37.f_98[6] < 50f) && func_108(0, 1, &(uLocal_801[6]), 1))
		{
			if (iVar465 == 0)
			{
				func_295(&(uLocal_801[6]), Global_35, "RE_OT_AGGRO_POST", "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			else
			{
				func_295(&(uLocal_801[6]), Global_35, func_294("AGGRO_POST", 0), "", 75f, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			func_24(&uLocal_497, 16);
		}
	}
}

void func_351()
{
	if (func_50(iVar495, 16))
	{
		return;
	}
	if (!func_36(&(uLocal_801[6]), 0, 1))
	{
		func_24(&uLocal_497, 16);
	}
	else if (!is_any_speech_playing(&(uLocal_801[6])))
	{
		if (Local_37.f_46 && func_342())
		{
			func_350();
		}
	}
}

bool func_352()
{
	if (!func_536())
	{
		func_537(2);
	}
	else
	{
		func_218(2);
	}
	return func_538();
}

bool func_353(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x4642182a298187d0(iParam0, -1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 2, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 4, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 5, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 10, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	return false;
}

int func_354(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_0x4642182a298187d0(iParam0, -1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 2, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 4, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 5, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 10, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_355(int iParam0)
{
	return iParam0;
}

bool func_356()
{
	if ((does_entity_exist(iVar816) && !is_vehicle_stopped(iVar816)) && !func_539(Global_35, iVar816, 0))
	{
		bring_vehicle_to_halt(iVar816, 1f, 1, false);
		if (!func_98(&uLocal_933))
		{
			func_99(&uLocal_933);
		}
		if (func_100(&uLocal_933) > 0.25f)
		{
			fVar0 = get_entity_speed(iVar816);
			if (fVar0 > 0f)
			{
				if (fVar0 <= 1f)
				{
					set_vehicle_forward_speed(iVar816, 0f);
				}
				else
				{
					set_vehicle_forward_speed(iVar816, (fVar0 - 1f));
				}
			}
			func_99(&uLocal_933);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_357()
{
	if (func_50(iVar493, 8))
	{
		return true;
	}
	if (!func_36(&(uLocal_801[4]), 0, 1) && !func_36(&(uLocal_801[5]), 0, 1))
	{
		func_24(&uLocal_495, 8);
		return true;
	}
	return false;
}

Vector3 func_358()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_540(uLocal_801[iVar0]))
		{
			vVar1 = { get_entity_coords(&(uLocal_801[iVar0]), true, false) };
		}
		iVar0++;
	}
	return vVar1;
}

void func_359(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	trigger_sonar_blip(iParam0, vParam1);
}

void func_360(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_396(Global_1310750[iVar0], iParam0))
		{
			if (!func_382(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_541(iVar0) < func_542(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_436(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_361(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_362(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_44(iParam0, 32768);
	}
	else
	{
		func_43(iParam0, 32768);
	}
}

int func_363(var uParam0)
{
	if (!func_98(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_263(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_114() - round((uParam0->f_1 * 1000f)));
}

bool func_364(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

int func_365(int iParam0)
{
	fVar2 = 999f;
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		if (func_36(&(uLocal_801[iVar3]), 0, 1))
		{
			fVar1 = func_107(iParam0, &(uLocal_801[iVar3]), 1, 1);
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				uVar0 = &uLocal_801[iVar3];
			}
		}
		iVar3++;
	}
	return uVar0;
}

bool func_366()
{
	switch (iVar463)
	{
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			return true;
	}
	return false;
}

int func_367(var uParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *uParam0)
	{
		iParam7 = (*uParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam4 != uParam0[iVar0] && (!bParam5 || (!is_entity_dead(uParam0[iVar0]) && !is_entity_on_fire(uParam0[iVar0]))))
		{
			fVar3 = vdist2(get_entity_coords(uParam0[iVar0], true, false), vParam1);
			if (iVar1 < 0 || fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < 0)
	{
	}
	return iVar1;
}

bool func_368(int iParam0, int iParam1)
{
	if (!func_364(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_369(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

char* func_370(char* sParam0)
{
	return sParam0;
}

bool func_371(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_543(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_544(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

int func_372(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

float func_373(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_374(int iParam0)
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

void func_375(int* iParam0)
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

void func_376(int iParam0)
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

void func_377(var uParam0)
{
	if (func_303(uParam0->f_162))
	{
		func_304(&(uParam0->f_162), 1, 1);
	}
	if (func_303(uParam0->f_163))
	{
		func_304(&(uParam0->f_163), 1, 1);
	}
	if (func_303(uParam0->f_164))
	{
		func_304(&(uParam0->f_164), 1, 1);
	}
	if (func_303(uParam0->f_165))
	{
		func_304(&(uParam0->f_165), 1, 1);
	}
}

void func_378(var uParam0)
{
	if (uParam0->f_170)
	{
		func_545();
	}
}

void func_379(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_546(32);
		func_383(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_380(var uParam0)
{
	if (func_547(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_548(uParam0->f_3);
		func_231(uParam0, 0, 1);
		func_549(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_550(0, 0);
		return true;
	}
	return false;
}

void func_381()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_382(int iParam0)
{
	if (!func_200(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_383(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_369(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_384() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_384()
{
	return Global_1572887->f_12;
}

int func_385(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_299(&iVar1, -2147483648);
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

int func_386()
{
	return get_player_group(get_player_index());
}

bool func_387(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_384() != -1)
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

int func_388(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 4;
		case 5:
			return 4;
		case 1:
			return 4;
		case 10:
			return 5;
		default:
			break;
	}
	return 1;
}

bool func_389()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_390(int iParam0)
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

int func_391(int iParam0)
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

int func_392(int iParam0)
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

bool func_393(int iParam0, int iParam1, var uParam2)
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

Vector3 func_394(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_70(*(*uParam1)[iVar0]))
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

void func_395(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_42("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_396(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_397(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_70(vParam0))
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
		if (func_255(vParam0))
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
	func_551(iVar0, bParam8);
	return iVar0;
}

void func_398(int iParam0)
{
	if (!func_200(iParam0))
	{
		return;
	}
	func_552(iParam0);
}

void func_399(var uParam0, vector3 vParam1)
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

int func_400(int iParam0)
{
	if (func_92(iParam0, 2))
	{
		return 200;
	}
	if (func_92(iParam0, 4))
	{
		return 70;
	}
	if (func_92(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_401(int iParam0)
{
	if (func_64(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_53() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_64(iParam0, 2);
		bVar1 = func_64(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_237())
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

void func_402(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_92(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_403(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_92(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_92(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_404(int iParam0, int iParam1)
{
	iVar0 = (func_392(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_405(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_70(vParam1))
	{
		return false;
	}
	if (func_410(iParam0, vParam1))
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
	if (func_153(iParam0))
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

bool func_406(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_407(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	fVar0 = func_171(bParam6, iParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_413(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_114();
			iParam4->f_2 = func_373(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_413(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_114();
		iParam4->f_2 = func_373(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_408(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_114() - *uParam0) >= iParam1;
	}
	return false;
}

int func_409(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_70(*uParam0->f_12[iVar0]))
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

bool func_410(int iParam0, vector3 vParam1)
{
	if (!func_64(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_553(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_64(iParam0, 33554432))
	{
		if (func_554(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_411(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_92(iParam0, 128))
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
	if (func_64(iParam0, 1) && !func_64(iParam0, 2))
	{
		if (func_64(iParam0, 4096) || func_64(iParam0, 2048))
		{
			if (func_555(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_412(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_2(&uParam0);
	if (!func_556())
	{
		return false;
	}
	return true;
}

bool func_413(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_557(vVar0, vParam0) > func_557(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_414(int iParam0)
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

int func_415(int iParam0)
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

Vector3 func_416(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_417(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_558((fParam0 + fParam1));
}

int func_418(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_559(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_560(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_561(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_561(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_562(iVar0))
		{
			func_423(iVar0, &(uParam1->f_23), 0);
		}
		if (func_562(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_563(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_564(&(uParam1->f_22)));
			func_308(iVar0, func_565(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_566(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_567(&(uParam1->f_22)))
		{
			func_568(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_569(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_50(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_562(iVar0))
		{
			func_571(iVar0, !func_570(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_572(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_573(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_573(&(uParam1->f_22)));
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

bool func_419(int iParam0, int iParam1)
{
	if (func_574(iParam0) != -1)
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

void func_420(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_575(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_421(var uParam0)
{
	return func_50(*uParam0, 32);
}

int func_422(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_423(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_36(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

bool func_424(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_425(int iParam0)
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

int func_426(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_576(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_577((386 + iVar28), 1);
			if (func_578(iParam0, &Var0, iVar5, 0))
			{
				if (func_579(iParam0, &Var6, iVar5))
				{
					Var29 = { func_580(iParam0, Var0, iVar5, 0) };
					func_581(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_582(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_583(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_584(iParam0, iParam1);
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

void func_427(int iParam0, int iParam1, float fParam2)
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

bool func_428(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_429(int iParam0)
{
	if (!func_214(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_430(int iParam0, int iParam1)
{
	if (!func_214(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_585(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_586("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_587(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_424(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_588(iVar1);
				return true;
			}
			iVar3++;
		}
		func_588(iVar1);
	}
	return false;
}

int func_431(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_214(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_429(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_585(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_589(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_590(bParam2), iParam0, 0);
	return uVar2;
}

bool func_432(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	if (iVar0 == 1172094279)
	{
		return true;
	}
	return false;
}

int func_433(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_591(1);
	}
	else
	{
		iVar0 = func_592(iParam0);
	}
	return iVar0;
}

void func_434(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_593(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_594(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

void func_435(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_92(iParam0, 8192))
	{
		iVar0 = func_594(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_436(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_383(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_437(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_64(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_360(262144, iVar0, 0, 1);
		}
	}
	if (func_64(iParam0, 128))
	{
		func_360(128, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 524288))
	{
		func_360(524288, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 536870912))
	{
		func_360(536870912, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 4194304))
	{
		func_360(4194304, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 8388608))
	{
		func_360(8388608, iVar0, 0, 1);
	}
}

void func_438(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_439(bool bParam0)
{
	if (!bParam0 && func_595(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_440()
{
	return Global_1310750->f_16037;
}

bool func_441(int iParam0)
{
	if (!func_200(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_442(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_200(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_596(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_443(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_597(Global_1393447, 1);
	func_598();
	func_599();
	func_600((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_114() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_601();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_360(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_360(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_360(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_602(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_603(to_float(iVar0), 1, 0);
	}
	else
	{
		func_603((to_float(200) / 3f), 1, 0);
	}
}

bool func_444(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_445(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_446(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_447(int iParam0)
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

bool func_448()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_449(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_450(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_449(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_264() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_451(bool bParam0, bool bParam1, bool bParam2)
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

int func_452()
{
	return &Global_1899515;
}

int func_453(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_454(int iParam0)
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

bool func_455(int iParam0)
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

bool func_456(int iParam0)
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

bool func_457(int iParam0)
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

bool func_458(int iParam0)
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

bool func_459(int iParam0)
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

bool func_460(int iParam0)
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

bool func_461(bool bParam0, int iParam1, int iParam2)
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

bool func_462()
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

int func_463(int iParam0)
{
	if (!func_466(iParam0))
	{
		return -1;
	}
	return func_605(func_604(iParam0));
}

bool func_464(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_465(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_466(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_467(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_468(int iParam0)
{
	return func_64(iParam0, Global_1310750->f_16072 | 64);
}

int func_469(int iParam0)
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

int func_470(int iParam0)
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

bool func_471(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_472(var uParam0, float fParam1)
{
	if (!func_98(uParam0))
	{
		return false;
	}
	if (func_100(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_473(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

void func_474(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_475(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_476(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_606();
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
			func_607(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_477(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_478(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_384() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_608(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_608(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_504(iVar0) == -1)
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

void func_479(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_609(iParam0);
	}
}

bool func_480(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_504(iParam2);
	}
	else
	{
		iVar1 = func_503(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_504(iParam0);
	}
	else
	{
		iVar0 = func_503(iParam0);
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

float func_481(int iParam0, int iParam1)
{
	return func_107(iParam0, iParam1, 1, 1);
}

float func_482(int iParam0)
{
	return iParam0->f_26;
}

bool func_483(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

bool func_484(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_107(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_610(iVar0, 0)))
		{
			if (func_611(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_485(int iParam0)
{
	return iParam0->f_17;
}

bool func_486(int iParam0, int iParam1, float fParam2, float fParam3)
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

int func_487(int iParam0)
{
	return iParam0->f_18;
}

bool func_488(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_610(iVar0, 0)))
		{
			if (func_612(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_489(int iParam0)
{
	return iParam0->f_23;
}

int func_490(int iParam0)
{
	return iParam0->f_21;
}

int func_491(int iParam0)
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

bool func_492(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_613(iParam0, vParam4, 0.5f))
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

int func_493(int iParam0)
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
	if (func_614(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_494(int iParam0)
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

bool func_495(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_244(iParam1))
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

bool func_496(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_244(iParam1))
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

bool func_497(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_244(iParam1))
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

bool func_498(int iParam0, int iParam1)
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

bool func_499(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_615(iParam0, 1, 0, 0) != 2055893578)
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

bool func_500(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_501(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_373(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_502(int iParam0)
{
	return iParam0->f_24;
}

int func_503(int iParam0)
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

int func_504(int iParam0)
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

int func_505(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_498(Global_35, &iVar1))
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
		fVar2 = func_107(iParam0, player_ped_id(), 0, 1);
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
		if (func_107(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_506(int iParam0, int iParam1, bool bParam2)
{
	func_461(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_507(iParam1, iVar0))
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
				if (!bParam2 || !func_507(iParam1, iVar1))
				{
					if (func_373(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_507(int iParam0, int iParam1)
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

int func_508(int iParam0)
{
	if (func_616())
	{
		return 0;
	}
	return func_617((*Global_1347702)[58]->f_15, 1);
}

int func_509(int iParam0)
{
	return iParam0->f_20;
}

int func_510(int iParam0, int iParam1, bool bParam2, float fParam3)
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

var func_511(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_512(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_237())
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
				if (func_165(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_107(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_99(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_618(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_619(func_296(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_513(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_514(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_515(var uParam0, float fParam1)
{
	if (func_472(uParam0, fParam1))
	{
		func_293(uParam0);
		return true;
	}
	return false;
}

int func_516(int iParam0)
{
	return iParam0;
}

void func_517(int iParam0)
{
	if (!func_620(iParam0))
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

void func_518(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_304(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_524(iParam0, 0);
		}
	}
}

void func_519(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_303((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_304(&((*uParam0)[iVar0]->f_6), 1, 1);
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

int func_520(int iParam0, int iParam1, int iParam2)
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

int func_521(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_621(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_622(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_623(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_624(558))
				{
					func_625(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_522(int iParam0)
{
	if (func_626(iParam0))
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

void func_523(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_303(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_627(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_628(iParam0->f_6, iParam0->f_5, 0);
			}
			func_629(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_630(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_524(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_293(&(iParam0->f_18));
}

bool func_525(int iParam0, var uParam1)
{
	uVar0 = *uParam1;
	if (_0x3ee1f7a8c32f24e1(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

bool func_526(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_303(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_631(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_527(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

Vector3 func_528()
{
	vVar0 = { get_entity_coords(iVar816, true, false) };
	fVar3 = get_entity_heading(iVar816);
	vVar4 = { _get_object_offset_from_coords(vVar0, fVar3, 0f, -5f, 0f) };
	func_111(&vVar4, 1.5f);
	return vVar4;
}

float func_529(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_530()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_36(&(uLocal_801[iVar0]), 0, 1))
		{
			if (_0x878b68960c1c2a35(&(uLocal_801[iVar0]), uVar906))
			{
				return uVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_531(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_50(iVar813, iParam3))
	{
		set_anim_scene_bool(iParam1, sParam2, true, false);
		func_24(&uLocal_819, iParam3);
		func_632(uParam0);
	}
}

int func_532(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_633(iParam0, vVar0, fParam2);
}

void func_533()
{
	if (!func_50(iVar817, 32))
	{
		if (!func_50(iVar493, 1))
		{
			if (!func_36(&(uLocal_801[0]), 0, 1))
			{
				vLocal_822 = { get_entity_coords(&(uLocal_801[0]), true, false) };
				func_24(&uLocal_495, 1);
				func_24(&uLocal_819, 32);
				return;
			}
		}
		if (!func_50(iVar493, 2))
		{
			if (!func_36(&(uLocal_801[1]), 0, 1))
			{
				vLocal_822 = { get_entity_coords(&(uLocal_801[1]), true, false) };
				func_24(&uLocal_495, 2);
				func_24(&uLocal_819, 32);
				return;
			}
		}
		if (!func_50(iVar493, 4))
		{
			if (!func_36(&(uLocal_801[2]), 0, 1))
			{
				vLocal_822 = { get_entity_coords(&(uLocal_801[2]), true, false) };
				func_24(&uLocal_495, 4);
				func_24(&uLocal_819, 32);
				return;
			}
		}
	}
}

void func_534()
{
	iLocal_464 = func_633(iVar816, vLocal_822, 1060437492);
	switch (iVar462)
	{
		case 0:
			if (func_633(iVar816, vLocal_822, 1f) == 3)
			{
				sVar0 = func_87(36);
			}
			break;
		case 2:
			sVar0 = func_87(37);
			break;
		case 3:
			if (func_633(iVar816, vLocal_822, 0f) == 1)
			{
				sVar0 = func_87(35);
			}
			else
			{
				sVar0 = func_87(36);
			}
			break;
		case 1:
			sVar0 = func_87(38);
			break;
	}
	if (!is_string_null_or_empty(sVar0))
	{
		if (!_0x23e33cb9f4a3f547(Local_231.f_1, sVar0))
		{
			_0xdf7b5144e25cd3fe(Local_231.f_1, sVar0);
		}
		else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(1), 1))
		{
			func_531(uLocal_491[0], Local_231.f_1, func_88(0), 536870912);
			_set_anim_scene_playback_list_bool(Local_231.f_1, sVar0, true);
			func_99(&uLocal_936);
			fLocal_893 = get_random_float_in_range(3f, 8f);
		}
	}
}

void func_535()
{
	iVar1 = func_634();
	iLocal_464 = func_532(iVar816, iVar1, 1060437492);
	switch (iVar462)
	{
		case 0:
			if (func_532(iVar816, iVar1, 1f) == 3)
			{
				sVar0 = func_87(15);
			}
			break;
		case 2:
			sVar0 = func_87(17);
			break;
		case 3:
			if (func_532(iVar816, iVar1, 0f) == 1)
			{
				sVar0 = func_87(16);
			}
			else
			{
				sVar0 = func_87(15);
			}
			break;
		case 1:
			sVar0 = func_87(18);
			break;
	}
	if (!is_string_null_or_empty(sVar0))
	{
		if (!_0x23e33cb9f4a3f547(Local_231.f_1, sVar0))
		{
			_0xdf7b5144e25cd3fe(Local_231.f_1, sVar0);
		}
		else if (_0x8d81e7824b7753f7(Local_231.f_1, func_305(1), 1))
		{
			func_531(uLocal_491[0], Local_231.f_1, func_88(0), 536870912);
			_set_anim_scene_playback_list_bool(Local_231.f_1, sVar0, true);
			func_99(&uLocal_936);
			fLocal_893 = get_random_float_in_range(3f, 8f);
		}
	}
}

bool func_536()
{
	if (func_616())
	{
		if (!func_635(69))
		{
			return false;
		}
	}
	else if (func_636())
	{
		if (!func_635(7))
		{
			return false;
		}
	}
	return true;
}

void func_537(int iParam0)
{
	Global_1395482->f_10 = (Global_1395482->f_10 - (Global_1395482->f_10 && iParam0));
}

bool func_538()
{
	return func_637(2);
}

bool func_539(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, false, false))
		{
			if (!is_entity_dead(iParam0))
			{
				return is_ped_in_vehicle(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

bool func_540(var uParam0)
{
	if (!func_117(*uParam0, 0))
	{
		return false;
	}
	return is_ped_shooting(*uParam0);
}

int func_541(int iParam0)
{
	if (func_200(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_542(int iParam0)
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

bool func_543(int iParam0, int iParam1, float fParam2)
{
	return func_613(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_544(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_545()
{
	func_638(23);
}

void func_546(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_547(var uParam0)
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

void func_548(int iParam0)
{
	iVar0 = func_639(iParam0);
	if (iVar0 != 0)
	{
		func_640(-1, 24, 0, iVar0);
	}
}

void func_549(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_642(func_641(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_64(iParam0, 2))
	{
		func_643(iParam0, func_433(iParam3));
	}
	if (func_64(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_53();
		}
		func_644(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_92(iParam0, 65536))
	{
		func_645(iParam0, iParam1);
		func_646(iParam0, func_186(iParam0, iParam1));
		func_546(128);
	}
	func_436(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_437(iParam0, 1);
	if (!bParam2)
	{
		func_546(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_647(524288);
	}
	if (func_648(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_648(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_550(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_649(&Global_0, 8);
	}
	if (!func_650() || func_384() != -1)
	{
		return;
	}
	func_649(&Global_0, 1);
}

int func_551(int iParam0, bool bParam1)
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

void func_552(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_553(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_70(vParam0))
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

bool func_554(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_70(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_555(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_70(*Global_1310750->f_16043[iVar0]))
		{
			if (func_154(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_556()
{
	iVar0 = func_651(func_249());
	if (iVar0 == 8)
	{
		iVar1 = func_250(func_249());
		if (func_252(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_652(func_591(0)))
	{
		return false;
	}
	if (func_653())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_557(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_558(float fParam0)
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

int func_559(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_654(&uParam1))
	{
		return 1;
	}
	if (!func_655(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_560(var uParam0)
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

int func_561(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_656(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_562(int iParam0)
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

bool func_563(var uParam0)
{
	return func_50(*uParam0, 4);
}

bool func_564(var uParam0)
{
	return func_50(*uParam0, 64);
}

bool func_565(var uParam0)
{
	return func_50(*uParam0, 8);
}

bool func_566(var uParam0)
{
	return func_50(*uParam0, 128);
}

bool func_567(var uParam0)
{
	return func_50(*uParam0, 2048);
}

void func_568(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_569(var uParam0)
{
	return func_50(*uParam0, 1024);
}

bool func_570(var uParam0)
{
	return func_50(*uParam0, 256);
}

void func_571(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_572(var uParam0)
{
	return func_50(*uParam0, 512);
}

bool func_573(var uParam0)
{
	return func_50(*uParam0, 4096);
}

int func_574(int iParam0)
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

int func_575(int iParam0)
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

struct<5> func_576(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_657(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_429(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_580(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_658(bParam1) };
			if (bParam2 && func_659(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_578(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_578(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_579(iParam0, &Var5, 1728382685))
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
			Var0 = { func_660(bParam1) };
			switch (func_661(iParam0))
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
			if (func_662(iParam0, -1823706425))
			{
				Var0 = { func_580(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_662(iParam0, -1483207246))
			{
				Var0 = { func_580(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_663(Var0, &Var27, bParam1, 0))
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

int func_577(int iParam0, int iParam1)
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
			return -1824203570;
			return -1654197998;
			return 798987653;
			return 976923323;
			return 1167442289;
			return 986998820;
			return -2119169513;
			return -2015960939;
			return 1132377945;
			return 739936401;
			return 1201880974;
			return 819728896;
			return 1746010219;
			return 1433393959;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return 1090546265;
			return -1783120823;
			return -1535745896;
			return -2086922122;
			return -1675198649;
			return 1189497682;
			return -1565675519;
			return -268973591;
			return 1039159916;
			return 1111816631;
			return 405591388;
			return 897456793;
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return 316207340;
			return -1909200748;
			return -939652363;
			return -1990194462;
			return -375447933;
			return 537014919;
			return 1784584921;
			return -140655024;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1360128126;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685;
			return -649335959;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
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

bool func_578(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_664(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_579(int iParam0, var uParam1, int iParam2)
{
	if (func_665(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_580(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_214(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_590(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_581(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_666(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_663(*uParam1, &Var0, bParam6, 0))
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
	if (!func_582(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_590(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_582(bool bParam0)
{
	if (func_384() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_590(bParam0));
}

int func_583(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_667(iParam0))
	{
		return 0;
	}
	if (!func_582(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_584(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_102(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_585(int iParam0, int iParam1)
{
	if (!func_214(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_429(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_215(iParam0, 1399091007))
	{
		func_668(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_586(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_590(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_587(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_588(int iParam0)
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

int func_589(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_669(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_670(&Var0, func_658(0));
	}
	if (!func_671(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_588(iVar14);
	return uVar15;
}

int func_590(bool bParam0)
{
	if (func_384() == -1)
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

int func_591(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_672(1, 0, 0);
	}
	else
	{
		iVar0 = func_249();
	}
	return func_592(iVar0);
}

int func_592(int iParam0)
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

int func_593(int iParam0)
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

int func_594(int iParam0, int iParam1)
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

bool func_595(int iParam0)
{
	iVar0 = func_673(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_596(int iParam0)
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

void func_597(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_598()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_674(iVar0, 128))
		{
			func_675(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_599()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_674(iVar0, 128) && func_674(iVar0, 1))
		{
			func_675(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_600(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_601()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_64(iVar0, 16777216))
		{
			if (!func_676(iVar0))
			{
				func_677(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_602(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_383(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_383(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_383(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_383(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_383(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_383(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_603(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_264();
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

int func_604(int iParam0)
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

int func_605(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_606()
{
	if (func_678())
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

void func_607(var uParam0, var uParam1)
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

int func_608(int iParam0)
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

void func_609(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_43(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_44(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_610(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_611(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_612(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_612(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_613(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_614(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_615(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_616()
{
	if (func_384() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_617(int iParam0, bool bParam1)
{
	switch (func_679(iParam0))
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

bool func_618(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_619(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_620(int iParam0)
{
	return func_680(iParam0, 2);
}

void func_621(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_622(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_621(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_171(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_99(&(iParam1->f_13));
		}
		if (func_681(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_682(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_622(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_683(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_684(*uParam0, 1, 1);
						}
					}
					else if (func_685(iParam1, 22))
					{
						func_684(*uParam0, 0, 1);
					}
				}
				if (func_686(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_687(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_688(iParam8);
					if (func_689(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_690(uParam3);
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
					func_691(iParam1, uParam3, fVar8);
					if (func_692(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_519(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_693(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_686(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_694(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_689(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_687(uParam0, func_686(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_688(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_519(uParam3, 0, 0, 1, 1);
					}
					func_695(iParam1, 1);
				}
				func_691(iParam1, uParam3, fVar8);
				if (func_693(uParam0, iParam1, fParam4, bVar6))
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
			func_306(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_623(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_696(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_295(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_624(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_384() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_625(int iParam0, bool bParam1)
{
	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_699(iVar0, iVar1);
}

bool func_626(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_627(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_303(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_628(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_303(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_629(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_303(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (bParam1)
	{
		func_700(iParam0, 4);
		func_701(iVar0, 1);
		func_702(iVar0, 1);
	}
	else
	{
		func_703(iParam0, 4);
		func_702(iVar0, 0);
	}
}

void func_630(int* iParam0, char* sParam1)
{
	if (func_303(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_628(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_302(iParam0, 1);
}

bool func_631(int iParam0, bool bParam1)
{
	if (bParam1 && !func_303(iParam0))
	{
		return false;
	}
	return !func_680(iParam0, 4);
}

void func_632(var uParam0)
{
	*uParam0 = 0;
}

int func_633(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_704(vVar3, vVar6);
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
	if (func_705(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_634()
{
	iVar0 = get_random_int_in_range(0, 2);
	if (func_36(&(uLocal_801[iVar0]), 0, 1))
	{
		return &(uLocal_801[iVar0]);
	}
	else
	{
		return Global_35;
	}
	return 0;
}

bool func_635(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_617((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_636()
{
	if (func_384() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_637(int iParam0)
{
	return (Global_1395482->f_10 && iParam0) != 0;
}

void func_638(int iParam0)
{
	if (func_384() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_117(func_706(iVar0), 0))
		{
			if (is_ped_group_member(func_706(iVar0), func_386(), 1))
			{
				func_707(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_639(int iParam0)
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

void func_640(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_708() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_708();
					}
					func_709(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_43(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> func_641(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_642(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_643(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_593(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_594(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_644(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_92(iParam0, 8192))
	{
		iVar0 = func_594(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_645(int iParam0, int iParam1)
{
	iVar0 = (func_392(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_646(int iParam0, vector3 vParam1)
{
	if (func_64(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_70(vParam1))
	{
		return;
	}
	if (!func_200(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_70(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_406(vVar2, vParam1, 1f, 1))
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

void func_647(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_677(iVar0, iParam0);
		iVar0++;
	}
}

int func_648(int iParam0)
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

void func_649(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_650()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_651(int iParam0)
{
	if (!func_471(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_652(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_653()
{
	return Global_1894899 & 2 != 0;
}

bool func_654(var uParam0)
{
	return func_50(*uParam0, 1);
}

bool func_655(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_710(*uParam0, 0f, 0f, 0f))
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

void func_656(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_711(iParam1))
		{
			func_712(iParam0, 41788943);
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
			func_713(iParam0, 0, 1);
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
			func_714(iParam0, 0);
			bVar0 = true;
		}
		func_715(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

struct<4> func_657(bool bParam0)
{
	return func_580(1328661203, func_716(), -1591664384, bParam0);
}

struct<4> func_658(bool bParam0)
{
	iVar0 = func_590(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_580(923904168, func_657(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_580(923904168, func_657(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_580(923904168, func_657(bParam0), -740156546, 0);
}

bool func_659(int iParam0, bool bParam1)
{
	if (func_661(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_717(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_660(bool bParam0)
{
	iVar0 = func_590(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_580(271701509, func_657(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_580(271701509, func_657(bParam0), 12999093, 0);
}

int func_661(int iParam0)
{
	if (!func_214(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_662(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_661(iParam0);
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

bool func_663(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_590(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_664(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_214(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_580(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_590(bParam6), &Var0, 0);
	return uVar4;
}

bool func_665(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_590(0);
	*uParam1 = { func_580(iParam0, func_658(0), iParam3, 0) };
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

bool func_666(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_667(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

void func_668(int iParam0, var uParam1, var uParam2)
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

struct<14> func_669(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_670(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_671(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_590(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_672(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_718(iVar2))
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

int func_673(int iParam0, int iParam1)
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

bool func_674(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_675(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_676(int iParam0)
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

void func_677(int iParam0, int iParam1)
{
	if (!func_200(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_678()
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

int func_679(int iParam0)
{
	if (!func_466(iParam0))
	{
		return -1;
	}
	return func_719(iParam0);
}

bool func_680(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_681(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_720(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_519(uParam2, 0, 0, 1, 0);
				func_44(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_721(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_43(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_682(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		func_518(iParam1, uParam2, 0);
		iVar5 = func_722(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_519(uParam2, 0, 0, 1, 0);
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
		if (func_685(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_685(iParam1, 26))
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
				iParam6 = func_723(uParam0);
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
				iVar8 = func_724(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_725(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_685(iParam1, 23))
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
				func_684(*uParam0, 1, 1);
			}
			else
			{
				func_684(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_683(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_684(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_685(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_686(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_726(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_687(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_727(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_688(int iParam0)
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

bool func_689(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_728(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_729(Global_35)) || func_730(Global_35)) || func_731(Global_35));
	fVar12 = -1f;
	if (func_98(&(iParam1->f_13)))
	{
		fVar12 = func_100(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_303((*uParam4)[iVar0]->f_6);
		func_732(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_733(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_734(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_519(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_735(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_518(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_736(iParam1, fParam6, iParam1->f_9))
					{
						func_99(&(iParam1->f_18));
						if (bVar6)
						{
							func_735(uParam4, 0, 0);
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
		func_737(iParam1, fParam2);
	}
	return bVar5;
}

void func_690(var uParam0)
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

void func_691(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_738((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_737(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_692(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_739(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_740(iParam1, 0);
				func_518(iParam1, uParam2, func_685(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_693(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_99(&(iParam1->f_18));
			return false;
		}
		else if (func_98(&(iParam1->f_18)))
		{
			func_293(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_98(&(iParam1->f_18)))
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
	return func_515(&(iParam1->f_18), fParam2);
	return true;
}

void func_694(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_732(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_695(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_696(int* iParam0)
{
	if (func_685(iParam0, 0))
	{
		if (func_741(iParam0))
		{
			func_695(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_697(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_698(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_742(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_743(iParam0))
	{
		return false;
	}
	if (func_744(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_745(iParam0, 1)) || func_746(32768))
	{
		if (!func_745(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_747())
	{
		return false;
	}
	return true;
}

void func_699(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_700(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_701(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_680(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_702(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_703(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

float func_704(vector3 vParam0, vector3 vParam3)
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

bool func_705(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_706(int iParam0)
{
	if (!func_748(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_707(int iParam0, int iParam1)
{
	if (!func_749(iParam0))
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

int func_708()
{
	return &Global_1899515;
}

void func_709(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_750(*uParam0);
	iVar1 = func_751(*uParam0);
	iVar2 = func_752(*uParam0);
	iVar3 = func_453(*uParam0);
	iVar4 = func_753(*uParam0);
	iVar5 = func_754(*uParam0);
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
	iVar6 = func_755(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_755(iVar1, iVar0);
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
	func_756(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_710(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_711(int iParam0)
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

void func_712(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_757(iParam0, iParam1))
		{
			if (func_758(iParam0, iParam1))
			{
				if (func_759(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_760(iParam0);
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

void func_713(int iParam0, int iParam1, bool bParam2)
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

void func_714(int iParam0, bool bParam1)
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

void func_715(int iParam0, int iParam1)
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

struct<4> func_716()
{
	return Var0;
}

bool func_717(int iParam0)
{
	if (!func_761(iParam0))
	{
		return false;
	}
	return func_762(iParam0);
}

bool func_718(int iParam0)
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

int func_719(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_763(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_720(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_764((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_721(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_738((*uParam0)[iVar0]))
		{
			func_301((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_722(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_765(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_303((*uParam2)[iVar0]->f_6))
		{
			func_301((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_723(var uParam0)
{
	iVar0 = func_374(*uParam0);
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

int func_724(var uParam0, int iParam1)
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

void func_725(int* iParam0, int* iParam1)
{
	if (!func_685(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_301(iParam1, 19);
			func_740(iParam0, 23);
			func_766(iParam1, 2);
		}
	}
}

bool func_726(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_767(16))
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
					func_768(16);
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

void func_727(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_765(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_728(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_729(int iParam0)
{
	return (func_769(iParam0, 4) || func_769(iParam0, 5));
}

int func_730(int iParam0)
{
	return func_769(iParam0, 7);
}

int func_731(int iParam0)
{
	return func_769(iParam0, 6);
}

void func_732(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_738(iParam1))
		{
			clear_bit(iParam1, 14);
			func_765(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_733(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_770(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_631(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_629(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_629(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_771(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_734(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_772(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_773(iParam1, 1))
	{
		func_774(iParam1, 1);
		return true;
	}
	return false;
}

void func_735(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_113((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_736(int* iParam0, float fParam1, bool bParam2)
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

void func_737(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_738(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_739(int iParam0)
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

void func_740(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_741(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_742(int iParam0, int iParam1)
{
	if (func_384() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_743(int iParam0)
{
	if (func_384() != -1)
	{
		if (func_745(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_745(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_744(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_745(iParam0, 65536) && !func_745(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_745(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_745(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_745(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_746(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_747()
{
	return Global_1905944->f_5694;
}

bool func_748(int iParam0)
{
	return iParam0 > -1;
}

bool func_749(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_750(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_619(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_751(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_752(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_753(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_754(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_755(int iParam0, int iParam1)
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

void func_756(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_775(uParam0, iParam6);
	func_776(uParam0, iParam5);
	func_777(uParam0, iParam4);
	func_778(uParam0, iParam3);
	func_779(uParam0, iParam2);
	func_780(uParam0, iParam1);
}

bool func_757(int iParam0, int iParam1)
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

bool func_758(int iParam0, int iParam1)
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

bool func_759(int iParam0, int iParam1)
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
	if (!func_757(iParam0, iVar0))
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

void func_760(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_761(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_762(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_763(int iParam0)
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

int func_764(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_765(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_303(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_304(&(iParam1->f_6), 0, 1);
	}
	if (!func_303(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_738(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_781(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_303(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_771(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_782(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_783(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_627(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_782(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_629(iParam1->f_6, 0, 1);
				}
				else
				{
					func_629(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_766(int* iParam0, int iParam1)
{
	if (!func_300(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_301(iParam0, 14);
		}
	}
}

bool func_767(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_768(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_769(int iParam0, int iParam1)
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

bool func_770(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_771(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_303(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	func_782(iParam0, 18, 0, 1);
	func_782(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_772(int iParam0, bool bParam1)
{
	if (bParam1 && !func_303(iParam0))
	{
		return false;
	}
	iVar0 = func_516(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_773(int iParam0, bool bParam1)
{
	if (bParam1 && !func_303(iParam0))
	{
		return false;
	}
	iVar0 = func_516(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_774(int iParam0, bool bParam1)
{
	if (bParam1 && !func_303(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

void func_775(var uParam0, int iParam1)
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

void func_776(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_777(var uParam0, int iParam1)
{
	iVar0 = func_751(*uParam0);
	iVar1 = func_750(*uParam0);
	if (iParam1 < 1 || iParam1 > func_755(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_778(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_779(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_780(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

int func_781(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_680(iVar0, 2))
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
				func_784(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_782(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_303(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_783(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_303(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

void func_784(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_701(iParam0, 1);
	func_702(iParam0, 1);
	func_703(iParam0, 128);
}

