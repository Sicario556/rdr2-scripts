void __EntryFunction__()
{
	if (has_force_cleanup_occurred(523))
	{
		func_1();
	}
	Local_13 = vScriptParam_0.x;
	Local_13.f_1 = vScriptParam_0.y;
	if (func_2(Local_13.f_1) && func_3(Local_13))
	{
		while (!func_4(1) && !func_5(32768))
		{
			if (func_6(vScriptParam_0.f_2))
			{
			}
			else
			{
				wait(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	terminate_this_thread();
}

int func_2(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return 0;
	}
	return 1;
}

int func_3(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return 0;
	}
	return 1;
}

bool func_4(bool bParam0)
{
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
	return false;
}

bool func_5(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_6(vector3 vParam0)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (!&Global_1940018->f_5[Local_13.f_1])
		{
			if (get_distance_between_coords(Global_35, vParam0, true) > 20f)
			{
				return true;
			}
		}
		if (func_7(&Global_1940258, 4194304))
		{
			return true;
		}
	}
	return false;
}

bool func_7(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

