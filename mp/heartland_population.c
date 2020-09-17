void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	fLocal_15 = 7f;
	fLocal_16 = 0f;
	fLocal_17 = 0f;
	fLocal_18 = 100f;
	fLocal_19 = 100f;
	fLocal_20 = 0f;
	func_1();
	func_2();
	func_3();
	iVar0 = _create_volume_cylinder(-128f, 153f, 92.509f, 0f, 0f, 0f, 7.5f, 7.5f, 10f);
	if (!_is_scenario_group_enabled_hash(-1554291097))
	{
		_set_scenario_group_enabled_hash(-1554291097, true);
	}
	_0xd17672447692478e(iVar0, 0);
	bVar1 = true;
	while (bVar1)
	{
		if (func_4() == -1)
		{
		}
		else
		{
			Global_1896622->f_51 = _0xfb9eced5b68f3b78(Global_1896622->f_42);
			if (func_5(1, 1))
			{
				bVar1 = false;
			}
		}
		wait(0);
	}
	func_6();
	terminate_this_thread();
}

void func_1()
{
	if (network_is_game_in_progress())
	{
		network_set_script_is_safe_for_network_game();
		set_this_script_can_be_paused(false);
		register_script_with_audio(1);
	}
	else if (has_force_cleanup_occurred(523))
	{
		if (network_get_this_script_is_network_script())
		{
		}
		func_6();
		terminate_this_thread();
	}
}

void func_2()
{
	vVar0 = { fLocal_15, fLocal_16, fLocal_17 };
	vVar3 = { fLocal_18, fLocal_19, fLocal_20 };
	_0xf2cca7b68cfab2b9(904876610, 725.8305f, -468.8784f, 149f, vVar0, vVar3, 9.5f, 50f, 1f, 6f);
}

void func_3()
{
	iLocal_21 = _create_volume_cylinder_with_custom_name(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	func_7(iLocal_21);
	iLocal_22 = _create_volume_cylinder_with_custom_name(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_7(iLocal_22);
	iLocal_24 = _create_volume_aggregate_with_custom_name("HRT_volCornwall_Restriction");
	_0xbce668aaf83608be(iLocal_24, 557.5f, 585f, 120f, 0f, 0f, -16f, 60f, 100f, 15f);
	_0xbce668aaf83608be(iLocal_24, 495f, 650f, 120f, 0f, 0f, 0f, 80f, 80f, 15f);
	_0xbce668aaf83608be(iLocal_24, 582.5f, 695f, 120f, 0f, 0f, 0f, 25f, 25f, 15f);
	if (func_8())
	{
		_0xb56d41a694e42e86(iLocal_24, 2238463, 0, 0, -1, -1, 0);
		_0x18262cafebb5fbe1(iLocal_24, 2238463, 0, 0, -1, -1, 0);
	}
	else
	{
		func_9(iLocal_24, 0, 0);
	}
	iLocal_25 = _create_volume_box_with_custom_name(1120f, 432.5f, 94.789f, 0f, 0f, 45f, 150f, 135f, 20f, "m_volCropFarm_Restriction");
	func_7(iLocal_25);
	iLocal_26 = _create_volume_cylinder_with_custom_name(892.5f, 260f, 102.5f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volLarnedSod_Restriction");
	func_7(iLocal_26);
	iLocal_27 = _create_volume_cylinder_with_custom_name(-62.5f, -397.5f, 75f, 0f, 0f, 0f, 25f, 25f, 15f, "m_volSouthernShack_Restriction");
	func_9(iLocal_27, 0, 0);
	iLocal_28 = _create_volume_cylinder_with_custom_name(-340.7f, -349.1f, 127.9f, 0f, 0f, 0f, 50f, 50f, 50f, "m_volFlatneckStation_Restriction");
	func_10(iLocal_28);
	iLocal_29 = _create_volume_aggregate_with_custom_name("m_volValentine_Restriction");
	_0xbce668aaf83608be(iLocal_29, -205f, 670f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	_0xbce668aaf83608be(iLocal_29, -330f, 795f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	_0xbce668aaf83608be(iLocal_29, -205f, 820f, 130f, 0f, 0f, -55f, 125f, 50f, 20f);
	_0xbce668aaf83608be(iLocal_29, -385f, 655f, 115f, 0f, 0f, 0f, 100f, 100f, 15f);
	_0xbce668aaf83608be(iLocal_29, -390f, 920f, 115f, 0f, 0f, 0f, 60f, 60f, 15f);
	_0xbce668aaf83608be(iLocal_29, -250f, 935f, 130f, 0f, 0f, 0f, 70f, 70f, 20f);
	_0xbce668aaf83608be(iLocal_29, -330f, 970f, 125f, 0f, 0f, 0f, 60f, 60f, 15f);
	func_11(iLocal_29);
	iLocal_31 = _create_volume_cylinder_with_custom_name(311.33f, 301.2739f, 147.3381f, 0f, 0f, 0f, 25f, 25f, 50f, "m_volGiantRock_Restriction1");
	_0xb56d41a694e42e86(iLocal_31, 2228479, 16384, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iLocal_31, 2228479, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(2228479, 16384, 0, -1, -1, iLocal_31);
	iLocal_32 = _create_volume_cylinder_with_custom_name(295.4558f, 335.8347f, 144.3733f, 0f, 0f, 0f, 7f, 7f, 5f, "m_volGiantRock_Restriction2");
	_0xb56d41a694e42e86(iLocal_32, 2228479, 16384, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iLocal_32, 2228479, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(2228479, 16384, 0, -1, -1, iLocal_32);
	iLocal_33 = _create_volume_cylinder_with_custom_name(372.3861f, 149.449f, 144.5227f, 0f, 0f, 27.75f, 37.75f, 44.75f, 21.5f, "m_volGiantRock_Restriction3");
	_0xb56d41a694e42e86(iLocal_33, 2228479, 16384, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iLocal_33, 2228479, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(2228479, 16384, 0, -1, -1, iLocal_33);
	iLocal_30 = _create_volume_box_with_custom_name(1520f, 440f, 92.5f, 0f, 0f, 0f, 20f, 50f, 10f, "m_volER_Trainstation_Restriction");
	func_7(iLocal_30);
	iLocal_34 = _create_volume_cylinder_with_custom_name(-838f, 343f, 95.5f, 0f, 0f, 0f, 80f, 50f, 44f, "m_volDownesRanch_Restriction");
	func_9(iLocal_34, 0, 0);
	iLocal_35 = _create_volume_cylinder_with_custom_name(1416.5f, 321.5f, 93f, 0f, 0f, -21f, 70f, 80f, 25f, "m_volEmeraldRanch_Restriction");
	func_12(iLocal_35, 0, 0);
	iLocal_36 = _create_volume_box_with_custom_name(1185.274f, -101.3631f, 105f, 0f, 0f, 0f, 15f, 10f, 30f, "m_volRuinsNorthOfHorseShop_Restriction");
	func_9(iLocal_36, 0, 0);
	iLocal_37 = _create_volume_aggregate_with_custom_name("m_volFlatIronLakeIsland_Restriction");
	_0xbce668aaf83608be(iLocal_37, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	_0xbce668aaf83608be(iLocal_37, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	_0x39816f6f94f385ad(iLocal_37, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	func_13(iLocal_37, 0, 0);
	iLocal_23 = _create_volume_cylinder_with_custom_name(-435.5f, 498f, 107f, 0f, 0f, -7f, 27f, 17f, 20f, "m_volCastorsPond_Restriction");
	func_12(iLocal_23, 0, 0);
	iLocal_38 = _create_volume_aggregate_with_custom_name("m_volSixPointCabin_Restriction");
	_0x39816f6f94f385ad(iLocal_38, -61.78288f, 1236.599f, 171.7316f, 0f, 0f, 30.49994f, 17.57404f, 11.67279f, 13.05081f);
	_0xbce668aaf83608be(iLocal_38, -26.60302f, 1223.117f, 175.0363f, 0f, 0f, 0f, 17.60465f, 14.42418f, 5.206519f);
	func_14(iLocal_38, 0, 0);
	iLocal_39 = _create_volume_aggregate_with_custom_name("m_volBardsCrossing_Restriction");
	_0x39816f6f94f385ad(iLocal_39, -730.6474f, -548.0654f, 77.02292f, 0f, 0f, 27f, 353.0691f, 8.967957f, 13.35221f);
	_0x39816f6f94f385ad(iLocal_39, -892.4706f, -627.4682f, 77.26994f, 0f, 0f, 18.91964f, 20.99991f, 7.632857f, 11.3815f);
	func_14(iLocal_39, 0, 0);
	iLocal_40 = _create_volume_aggregate_with_custom_name("m_volLimpany_Restriction");
	_0x39816f6f94f385ad(iLocal_40, -344.2052f, -155.7421f, 51.92712f, 0f, 0f, -25.599f, 7.007796f, 12.39152f, 9.160034f);
	_0x39816f6f94f385ad(iLocal_40, -326.2495f, -151.1143f, 51.75295f, 0f, 0f, -40.79212f, 9.133691f, 7.226022f, 8.362908f);
	_0x39816f6f94f385ad(iLocal_40, -337.7838f, -123.2315f, 49.78259f, 0f, 0f, -30.27581f, 12.47807f, 6.990203f, 9.129834f);
	_0x39816f6f94f385ad(iLocal_40, -368.2776f, -141.5811f, 49.43251f, 0f, 0f, -25.07936f, 8.474558f, 7.734136f, 6.674875f);
	_0x39816f6f94f385ad(iLocal_40, -381.1944f, -138.4523f, 48.6927f, 0f, 0f, -26.4314f, 10.54735f, 16.19453f, 11.17168f);
	_0x39816f6f94f385ad(iLocal_40, -359.6013f, -115.6031f, 48.09516f, 0f, 0f, -36.89244f, 15.66171f, 18.04947f, 13.86367f);
	_0x39816f6f94f385ad(iLocal_40, -317.6271f, -131.9343f, 51.76871f, 0f, 0f, 0f, 6.531308f, 7.349917f, 8.040896f);
	_0x39816f6f94f385ad(iLocal_40, -314.7265f, -105.8513f, 50.30021f, 0f, 0f, 33.49742f, 11.55198f, 8.022533f, 6.21626f);
	_0x39816f6f94f385ad(iLocal_40, -372.8026f, -109.9615f, 47.05131f, 0f, 0f, -34.51117f, 5.588199f, 6.904874f, 7.632836f);
	func_12(iLocal_40, 0, 0);
	iLocal_41 = _create_volume_aggregate_with_custom_name("m_volBurnedSettlement_Restriction");
	_0xbce668aaf83608be(iLocal_41, -355f, -132.5f, 50f, 0f, 0f, -20f, 50f, 30f, 25f);
	_0xbce668aaf83608be(iLocal_41, -320f, -115f, 50f, 0f, 0f, 0f, 20f, 20f, 25f);
	func_9(iLocal_41, 0, 0);
	iLocal_42 = _create_volume_aggregate_with_custom_name("m_volFishermansShack_Restriction");
	_0x39816f6f94f385ad(iLocal_42, 343.054f, -669.0029f, 42.165f, 0f, 0f, -31.01126f, 11.02041f, 15.73973f, 10.95584f);
	_0x39816f6f94f385ad(iLocal_42, 338.9478f, -681.7498f, 43.02779f, 0f, 0f, -31.24687f, 3.800817f, 10.34941f, 9.244935f);
	func_14(iLocal_42, 0, 0);
}

int func_4()
{
	return Global_1572887->f_13;
}

bool func_5(bool bParam0, bool bParam1)
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

void func_6()
{
	_0xfb16f08f47b83b4c(904876610);
}

void func_7(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 231, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 231, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(231, 16384, 0, -1, -1, iParam0);
}

bool func_8()
{
	return false;
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	_0x2161278c6322f740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_10(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(2228479, 16384, 0, -1, -1, iParam0);
}

void func_11(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 2229503, 0, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2229503, 0, 0, -1, -1, 0);
	_0x2161278c6322f740(2229503, 0, 0, -1, -1, iParam0);
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_13(int iParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	_0x2161278c6322f740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_14(int iParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	_0x2161278c6322f740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_15(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

