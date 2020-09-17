void __EntryFunction__()
{
	if (has_force_cleanup_occurred(523))
	{
		func_1();
	}
	if (!_is_app_active(1976336482))
	{
		bVar0 = ScriptParam_0.f_3;
		iVar1 = 2;
		if (bVar0)
		{
			iVar1 = _launch_app_by_hash_with_entry(1976336482, 1261159557);
		}
		else
		{
			iVar1 = _launch_app_by_hash(1976336482);
		}
		if (iVar1 != 0)
		{
			func_1();
		}
	}
	while (!func_2())
	{
		wait(0);
	}
	func_1();
}

void func_1()
{
	_close_app_by_hash(1976336482);
	terminate_this_thread();
}

bool func_2()
{
	if (func_3(1, 1))
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		return true;
	}
	if (!_is_app_active(1976336482))
	{
		return true;
	}
	return false;
}

bool func_3(bool bParam0, bool bParam1)
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

