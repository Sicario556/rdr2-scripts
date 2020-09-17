void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	_0x187d65f3aec5d679(-402695257, "TallTrees/Tal_Trapper_1");
	if (_0x800df3fc913355f3(_0x112ddf56300bc6e5(-402695257)))
	{
		_0xd4b614179bcd0654(_0x112ddf56300bc6e5(-402695257));
	}
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
	iLocal_14 = _create_volume_cylinder_with_custom_name(-1975f, -1615f, 125f, 0f, 0f, 0f, 100f, 100f, 50f, "m_volManzanitaPost_Restriction");
	func_4(iLocal_14, 1);
	iLocal_15 = _create_volume_cylinder_with_custom_name(-1699.8f, -2103.5f, 92f, 0f, 0f, 0f, 75f, 75f, 50f, "m_volPacUnionRR_Restriction");
	func_4(iLocal_15, 1);
	iLocal_16 = _create_volume_cylinder_with_custom_name(-2578.4f, -1380.4f, 161f, 0f, 0f, 0f, 15f, 15f, 20f, "m_volAuroraBasinShack_Restriction");
	func_4(iLocal_16, 1);
	if (func_5() == 8)
	{
		iLocal_17 = _create_volume_aggregate_with_custom_name("m_volBeechersHope_Restriction");
		_0xbce668aaf83608be(iLocal_17, -1628.978f, -1384.765f, 87.31792f, 0f, 0f, 1.805961f, 117.1854f, 142.6396f, 34.00172f);
		_0xbce668aaf83608be(iLocal_17, -1583.582f, -1286.059f, 83.24481f, 0f, 0f, 1.805961f, 65.34718f, 62.69049f, 35.94681f);
		func_6(iLocal_17, 0, 0, 1);
	}
	iLocal_18 = _create_volume_cylinder_with_custom_name(-1405.399f, -2279.227f, 70f, 0f, 0f, 7f, 65f, 107.5f, 40f, "m_volThievesLanding_Restriction");
	func_7(iLocal_18, 0, 0, 1);
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
	_0xb56d41a694e42e86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		_0x2161278c6322f740(2228479, 16384, 0, -1, -1, iParam0);
	}
}

int func_5()
{
	return Global_40.f_4283;
}

void func_6(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_8(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_7(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_8(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_8(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

