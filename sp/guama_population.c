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
	iLocal_14 = _create_volume_cylinder_with_custom_name(4150f, -3650f, 105f, 0f, 0f, 0f, 95f, 95f, 35f, "m_volTemple_Restriction");
	func_4(iLocal_14, 1);
	iLocal_15 = _create_volume_cylinder_with_custom_name(3935f, -3340f, 65f, 0f, 0f, 0f, 125f, 125f, 35f, "m_volVilla_Restriction");
	func_4(iLocal_15, 1);
	iLocal_16 = _create_volume_cylinder_with_custom_name(3900f, -3200f, 60f, 0f, 0f, 0f, 15f, 15f, 20f, "m_volLightHouse_Restriction");
	func_4(iLocal_16, 1);
	iLocal_17 = _create_volume_cylinder_with_custom_name(3910f, -3820f, 65f, 0f, 0f, 42f, 100f, 70f, 35f, "m_volManicato_Restriction");
	func_4(iLocal_17, 1);
	iLocal_18 = _create_volume_aggregate_with_custom_name("m_volAquatic_Restriction");
	_0x39816f6f94f385ad(iLocal_18, 1198.392f, -6996.118f, 40.56991f, 0f, 0f, -13.19622f, 107.2032f, 48.4901f, 16.01354f);
	_0x39816f6f94f385ad(iLocal_18, 1122.764f, -6966.072f, 41.7932f, 0f, 0f, -13.23685f, 54.31777f, 34.31042f, 13.34025f);
	_0xbce668aaf83608be(iLocal_18, 1061.422f, -6968.24f, 41.39648f, 0f, 0f, 0f, 46.10505f, 24.56085f, 7.935126f);
	_0x39816f6f94f385ad(iLocal_18, 1004.815f, -6902.04f, 40.91697f, 0f, 0f, 22.01897f, 20.89131f, 114.5361f, 13.15669f);
	func_5(iLocal_18, 1);
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

