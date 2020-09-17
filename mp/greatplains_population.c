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
	iLocal_15 = _create_volume_aggregate_with_custom_name("m_volBlackwaterRestriction");
	_0x39816f6f94f385ad(iLocal_15, -887.5f, -1330f, 50f, 0f, 0f, 0f, 325f, 350f, 200f);
	_0x39816f6f94f385ad(iLocal_15, -912.5f, -1130f, 50f, 0f, 0f, 0f, 275f, 50f, 200f);
	func_6(iLocal_15);
	iLocal_16 = _create_volume_box_with_custom_name(-869f, -1640.5f, 75f, 0f, 0f, -31f, 30f, 40f, 25f, "m_volWealthyHomeRestriction");
	func_6(iLocal_16);
	iLocal_17 = _create_volume_aggregate_with_custom_name("m_volWindmillHouseRestriction");
	_0x39816f6f94f385ad(iLocal_17, -1061.7f, -1641.6f, 77.5f, 0f, 0f, -9f, 15f, 15f, 12.5f);
	_0x39816f6f94f385ad(iLocal_17, -1031.1f, -1623.7f, 80f, 0f, 0f, -13f, 50f, 35f, 20f);
	_0x39816f6f94f385ad(iLocal_17, -1038.8f, -1664f, 91f, 0f, 0f, 0f, 20f, 20f, 35f);
	func_6(iLocal_17);
	iLocal_18 = _create_volume_aggregate_with_custom_name("m_volFlatIronLakeIslandRestriction");
	_0xbce668aaf83608be(iLocal_18, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	_0xbce668aaf83608be(iLocal_18, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	_0x39816f6f94f385ad(iLocal_18, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	func_7(iLocal_18, 0, 0);
	iLocal_19 = _create_volume_cylinder_with_custom_name(-1405.399f, -2279.227f, 70f, 0f, 0f, 7f, 65f, 107.5f, 40f, "m_volThievesLandingRestriction");
	func_8(iLocal_19, 0, 0);
	iLocal_20 = _create_volume_box_with_custom_name(-715.9856f, -1387.087f, 40.43677f, 0f, 0f, 40f, 25f, 55f, 15f, "m_volBlackwaterLakeSturgeonRestriction");
	_0xb56d41a694e42e86(iLocal_20, 2228255, 0, 0, -598613581, -1, 2);
	_0x18262cafebb5fbe1(iLocal_20, 2228255, 0, 0, -598613581, -1, 0);
	_0x2161278c6322f740(2228255, 0, 0, -598613581, -1, iLocal_20);
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

void func_7(int iParam0, int iParam1, bool bParam2)
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
	_0x2161278c6322f740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_8(int iParam0, int iParam1, bool bParam2)
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
	_0x2161278c6322f740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_9(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

