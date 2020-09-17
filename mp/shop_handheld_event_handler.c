void __EntryFunction__()
{
	if (has_force_cleanup_occurred(523))
	{
		func_1(-1828211665);
	}
	if (Global_1572887->f_13 == 0)
	{
	}
	else
	{
		return;
	}
	bVar0 = false;
	while (!func_2(1, 1))
	{
		bVar0 = false;
		if (_0x9e4ef615e307fbbe())
		{
			bVar0 = true;
		}
		if (!Global_1915715->f_22504)
		{
			bVar0 = true;
		}
		if (func_3())
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			clear_ped_secondary_task(player_ped_id());
			func_1(-1828211665);
		}
		else
		{
			if (has_anim_event_fired(Global_34, 407174929))
			{
				func_4(2);
			}
			if (has_anim_event_fired(Global_34, -1543672280))
			{
				func_1(-1543672280);
			}
			else if (has_anim_event_fired(Global_34, -1441911379))
			{
				func_1(-1441911379);
			}
			else if (has_anim_event_fired(Global_34, 562684602))
			{
				func_1(562684602);
			}
			else if (has_anim_event_fired(Global_34, -1275814714))
			{
				func_1(-1275814714);
			}
			else if (has_anim_event_fired(Global_34, -917343754))
			{
				func_1(-917343754);
			}
			else if (has_anim_event_fired(Global_34, -1308691423))
			{
				func_1(-1308691423);
			}
			wait(0);
		}
	}
	func_1(-1828211665);
}

void func_1(int iParam0)
{
	Global_1915715->f_22504.f_4 = iParam0;
}

bool func_2(bool bParam0, bool bParam1)
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

bool func_3()
{
	return Global_1102219->f_3664;
}

void func_4(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 || iParam0);
}

