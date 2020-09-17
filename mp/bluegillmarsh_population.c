void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	func_2();
	create_model_hide(3366.87f, -680.8071f, 41.6795f, 1f, 1281919024, true);
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
	iLocal_15 = _create_volume_aggregate_with_custom_name("m_volCanebreakManor_Restriction");
	_0x39816f6f94f385ad(iLocal_15, 2482.625f, -400.4976f, 45f, 0f, 0f, 34f, 25f, 35f, 30f);
	_0x39816f6f94f385ad(iLocal_15, 2493.368f, -424.8734f, 45f, 0f, 0f, 34f, 25f, 22.5f, 30f);
	func_6(iLocal_15, 0, 0);
	iLocal_16 = _create_volume_aggregate_with_custom_name("m_volAquatic_Restriction");
	_0x39816f6f94f385ad(iLocal_16, 2212.785f, -513.7505f, 42.64256f, 0f, 0f, 7.584539f, 120.1986f, 73.42303f, 13.12508f);
	_0x39816f6f94f385ad(iLocal_16, 2123.317f, -450.1633f, 42.35445f, 0f, 0f, 19.19169f, 52.02959f, 103.7867f, 11.12478f);
	_0x39816f6f94f385ad(iLocal_16, 2079.136f, -508.0375f, 40.54353f, 0f, 0f, 32.83384f, 30.26976f, 12.10188f, 4.106483f);
	_0x39816f6f94f385ad(iLocal_16, 2072.09f, -541.5287f, 41.15696f, 0f, 0f, -50.04893f, 49.11419f, 29.08003f, 4.101138f);
	_0x39816f6f94f385ad(iLocal_16, 1961.46f, -546.4242f, 41.59623f, 0f, 0f, 39.87652f, 7.433012f, 46.59014f, 14.38113f);
	_0x39816f6f94f385ad(iLocal_16, 1943.024f, -490.1118f, 41.59623f, 0f, 0f, 7.680464f, 8.796555f, 80.45963f, 14.38113f);
	_0x39816f6f94f385ad(iLocal_16, 1940.411f, -433.7933f, 41.75349f, 0f, 0f, -9.29702f, 7.885364f, 34.76966f, 14.38113f);
	_0x39816f6f94f385ad(iLocal_16, 2116.133f, -512.6361f, 40.47285f, 0f, 0f, -9.836303f, 46.08441f, 5.162654f, 4.285973f);
	func_7(iLocal_16);
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
	remove_model_hide(3366.87f, -680.8071f, 41.6795f, 1f, 1281919024, 0);
}

void func_6(int iParam0, int iParam1, bool bParam2)
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
	_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
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

void func_8(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

