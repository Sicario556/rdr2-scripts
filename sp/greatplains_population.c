void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	bVar0 = true;
	while (bVar0)
	{
		wait(0);
	}
	func_3();
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
		func_3();
		terminate_this_thread();
	}
}

void func_2()
{
	iLocal_14 = _create_volume_aggregate_with_custom_name("m_volBlackwaterRestriction");
	_0x39816f6f94f385ad(iLocal_14, -887.5f, -1330f, 50f, 0f, 0f, 0f, 325f, 350f, 200f);
	_0x39816f6f94f385ad(iLocal_14, -912.5f, -1130f, 50f, 0f, 0f, 0f, 275f, 50f, 200f);
	func_4(iLocal_14, 1);
	iLocal_15 = _create_volume_box_with_custom_name(-869f, -1640.5f, 75f, 0f, 0f, -31f, 30f, 40f, 25f, "m_volWealthyHomeRestriction");
	func_4(iLocal_15, 1);
	iLocal_16 = _create_volume_aggregate_with_custom_name("m_volWindmillHouseRestriction");
	_0x39816f6f94f385ad(iLocal_16, -1061.7f, -1641.6f, 77.5f, 0f, 0f, -9f, 15f, 15f, 12.5f);
	_0x39816f6f94f385ad(iLocal_16, -1031.1f, -1623.7f, 80f, 0f, 0f, -13f, 50f, 35f, 20f);
	_0x39816f6f94f385ad(iLocal_16, -1038.8f, -1664f, 91f, 0f, 0f, 0f, 20f, 20f, 35f);
	func_4(iLocal_16, 1);
	iLocal_17 = _create_volume_aggregate_with_custom_name("m_volFlatIronLakeIslandRestriction");
	_0xbce668aaf83608be(iLocal_17, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	_0xbce668aaf83608be(iLocal_17, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	_0x39816f6f94f385ad(iLocal_17, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	func_5(iLocal_17, 0, 0, 1);
	if (func_6() == 8)
	{
		iLocal_18 = _create_volume_aggregate_with_custom_name("m_volBeechersHopeRestriction");
		_0xbce668aaf83608be(iLocal_18, -1628.978f, -1384.765f, 87.31792f, 0f, 0f, 1.805961f, 117.1854f, 142.6396f, 34.00172f);
		_0xbce668aaf83608be(iLocal_18, -1583.582f, -1286.059f, 83.24481f, 0f, 0f, 1.805961f, 65.34718f, 62.69049f, 35.94681f);
		func_7(iLocal_18, 0, 0, 1);
	}
	iLocal_19 = _create_volume_cylinder_with_custom_name(-1405.399f, -2279.227f, 70f, 0f, 0f, 7f, 65f, 107.5f, 40f, "m_volThievesLandingRestriction");
	func_8(iLocal_19, 0, 0, 1);
}

void func_3()
{
}

void func_4(int iParam0, bool bParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 231, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 231, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		_0x2161278c6322f740(231, 16384, 0, -1, -1, iParam0);
	}
}

void func_5(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_9(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

int func_6()
{
	return Global_40.f_4283;
}

void func_7(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_9(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_8(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_9(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_9(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

