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
	iLocal_14 = _create_volume_aggregate_with_custom_name("m_volCanebreakManor_Restriction");
	_0x39816f6f94f385ad(iLocal_14, 2482.625f, -400.4976f, 45f, 0f, 0f, 34f, 25f, 35f, 30f);
	_0x39816f6f94f385ad(iLocal_14, 2493.368f, -424.8734f, 45f, 0f, 0f, 34f, 25f, 22.5f, 30f);
	func_4(iLocal_14, 0, 0, 0);
	iLocal_15 = _create_volume_aggregate_with_custom_name("m_volAquatic_Restriction");
	_0x39816f6f94f385ad(iLocal_15, 2212.785f, -513.7505f, 42.64256f, 0f, 0f, 7.584539f, 120.1986f, 73.42303f, 13.12508f);
	_0x39816f6f94f385ad(iLocal_15, 2123.317f, -450.1633f, 42.35445f, 0f, 0f, 19.19169f, 52.02959f, 103.7867f, 11.12478f);
	_0x39816f6f94f385ad(iLocal_15, 2079.136f, -508.0375f, 40.54353f, 0f, 0f, 32.83384f, 30.26976f, 12.10188f, 4.106483f);
	_0x39816f6f94f385ad(iLocal_15, 2072.09f, -541.5287f, 41.15696f, 0f, 0f, -50.04893f, 49.11419f, 29.08003f, 4.101138f);
	func_5(iLocal_15, 0);
}

void func_3()
{
}

void func_4(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_6(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_5(int iParam0, bool bParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 2228767, 0, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228767, 0, 0, -1, -1, 0);
	if (bParam1)
	{
		_0x2161278c6322f740(2228767, 0, 0, -1, -1, iParam0);
	}
}

void func_6(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

