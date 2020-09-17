void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	func_2();
	bVar0 = true;
	while (bVar0)
	{
		if (func_3() == -1)
		{
		}
		else
		{
			Global_1896622->f_51 = _0xfb9eced5b68f3b78(Global_1896622->f_42);
			if (func_4(1, 1))
			{
				bVar0 = false;
			}
		}
		wait(0);
	}
	func_5();
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
		func_5();
		terminate_this_thread();
	}
}

void func_2()
{
	iLocal_15 = _create_volume_cylinder_with_custom_name(4150f, -3650f, 105f, 0f, 0f, 0f, 95f, 95f, 35f, "m_volTemple_Restriction");
	func_6(iLocal_15);
	iLocal_16 = _create_volume_cylinder_with_custom_name(3935f, -3340f, 65f, 0f, 0f, 0f, 125f, 125f, 35f, "m_volVilla_Restriction");
	func_6(iLocal_16);
	iLocal_17 = _create_volume_cylinder_with_custom_name(3900f, -3200f, 60f, 0f, 0f, 0f, 15f, 15f, 20f, "m_volLightHouse_Restriction");
	func_6(iLocal_17);
	iLocal_18 = _create_volume_cylinder_with_custom_name(3910f, -3820f, 65f, 0f, 0f, 42f, 100f, 70f, 35f, "m_volManicato_Restriction");
	func_6(iLocal_18);
	iLocal_19 = _create_volume_aggregate_with_custom_name("m_volAquatic_Restriction");
	_0x39816f6f94f385ad(iLocal_19, 1198.392f, -6996.118f, 40.56991f, 0f, 0f, -13.19622f, 107.2032f, 48.4901f, 16.01354f);
	_0x39816f6f94f385ad(iLocal_19, 1122.764f, -6966.072f, 41.7932f, 0f, 0f, -13.23685f, 54.31777f, 34.31042f, 13.34025f);
	_0xbce668aaf83608be(iLocal_19, 1061.422f, -6968.24f, 41.39648f, 0f, 0f, 0f, 46.10505f, 24.56085f, 7.935126f);
	_0x39816f6f94f385ad(iLocal_19, 1004.815f, -6902.04f, 40.91697f, 0f, 0f, 22.01897f, 20.89131f, 114.5361f, 13.15669f);
	func_7(iLocal_19);
}

int func_3()
{
	return Global_1572887->f_13;
}

bool func_4(bool bParam0, bool bParam1)
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

void func_5()
{
}

void func_6(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 231, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 231, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(231, 16384, 0, -1, -1, iParam0);
}

void func_7(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 2228767, 0, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228767, 0, 0, -1, -1, 0);
	_0x2161278c6322f740(2228767, 0, 0, -1, -1, iParam0);
}

