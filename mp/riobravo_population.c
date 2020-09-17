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
	iLocal_15 = _create_volume_cylinder_with_custom_name(-4212.5f, -3455f, 35f, 0f, 0f, 0f, 110f, 110f, 15f, "m_volFortMercer_Restriction");
	func_6(iLocal_15);
	iLocal_16 = _create_volume_cylinder_with_custom_name(-5270.212f, -3465.903f, -21.0166f, 0f, 0f, 0f, 101.75f, 130f, 50f, "m_volBenedictPoint_Restriction");
	func_6(iLocal_16);
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
	_0xb56d41a694e42e86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(2228479, 16384, 0, -1, -1, iParam0);
}

