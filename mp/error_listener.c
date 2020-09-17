void __EntryFunction__()
{
	func_1();
	network_set_script_is_safe_for_network_game();
	network_set_script_ready_for_events(true);
	bVar0 = false;
	while (!bVar0)
	{
		if (func_2() == -1)
		{
			bVar0 = _0x9e4ef615e307fbbe();
		}
		else
		{
			bVar0 = func_3(1, 1);
		}
		func_4();
		wait(0);
	}
	func_5();
	terminate_this_thread();
}

void func_1()
{
	Global_26009.f_324[0] = 0.5f;
	Global_26009.f_324[0]->f_1 = 0.085f;
	Global_26009.f_324[0]->f_2 = 0.9f;
	Global_26009.f_324[0]->f_3 = 0.12f;
	Global_26009.f_324[1] = 0.5f;
	Global_26009.f_324[1]->f_1 = 0.16f;
	Global_26009.f_324[1]->f_2 = 0.9f;
	Global_26009.f_324[1]->f_3 = 0.03f;
	Global_26009.f_324[1]->f_4 = 100;
	Global_26009.f_324[1]->f_5 = 60;
	Global_26009.f_324[1]->f_6 = 58;
	Global_26009.f_324[1]->f_7 = 200;
	Global_26009.f_197[0] = 1;
	Global_26009.f_197[0]->f_3 = 0.5f;
	Global_26009.f_197[0]->f_4 = 0.03f;
	Global_26009.f_197[0]->f_1 = 0.1f;
	Global_26009.f_197[0]->f_2 = 0.5f;
	Global_26009.f_197[1] = 1;
	Global_26009.f_197[1]->f_3 = 0.5f;
	Global_26009.f_197[1]->f_4 = 0.065f;
	Global_26009.f_197[1]->f_1 = 0.1f;
	Global_26009.f_197[1]->f_2 = 0.5f;
	Global_26009.f_197[2] = 1;
	Global_26009.f_197[2]->f_3 = 0.5f;
	Global_26009.f_197[2]->f_4 = 0.1f;
	Global_26009.f_197[2]->f_1 = 0.1f;
	Global_26009.f_197[2]->f_2 = 0.5f;
	Global_26009.f_197[3] = 1;
	Global_26009.f_197[3]->f_3 = 0.89f;
	Global_26009.f_197[3]->f_4 = 0.03f;
	Global_26009.f_197[3]->f_1 = 0f;
	Global_26009.f_197[3]->f_2 = 0.294f;
	StringCopy(&(Global_26009.f_197[3]->f_5), "Ctrl + Num8 - Show/Hide", 128);
	Global_26009.f_197[4] = 1;
	Global_26009.f_197[4]->f_3 = 0.088f;
	Global_26009.f_197[4]->f_4 = 0.03f;
	Global_26009.f_197[4]->f_1 = 0f;
	Global_26009.f_197[4]->f_2 = 0.294f;
	Global_26009.f_197[5] = 1;
	Global_26009.f_197[5]->f_3 = 0.5f;
	Global_26009.f_197[5]->f_4 = 0.148f;
	Global_26009.f_197[5]->f_1 = 0.1f;
	Global_26009.f_197[5]->f_2 = 0.3f;
	StringCopy(&(Global_26009.f_197[5]->f_5), "Critical error detected, this might cause unexpected behaviour. Please restart the game.", 128);
}

int func_2()
{
	return Global_1572887->f_13;
}

int func_3(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return 0;
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
			return 1;
		}
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_4()
{
	func_6();
	if (func_7())
	{
		if (Global_26009.f_196)
		{
			Global_26009.f_192 = 1;
		}
		else
		{
			Global_26009.f_192 = func_8() > 1;
		}
		Global_26009.f_193 = func_9();
		Global_26009.f_194 = func_9();
	}
	else
	{
		Global_26009.f_196 = 0;
		Global_26009.f_192 = Global_26009.f_195;
		Global_26009.f_194 = Global_26009.f_195;
		Global_26009.f_193 = Global_26009.f_195;
		return;
	}
	func_10(1);
	func_11(Global_26009.f_1[0]);
	func_12();
	func_10(0);
}

void func_5()
{
	func_10(0);
}

void func_6()
{
	iVar1 = 0;
	while (iVar1 < get_number_of_events(4))
	{
		iVar2 = get_event_at_index(4, iVar1);
		if (get_event_data(4, iVar1, &iVar0, 1))
		{
			if (func_13(iVar0, iVar2))
			{
			}
		}
		iVar1++;
	}
}

bool func_7()
{
	return Global_26009.f_195;
}

int func_8()
{
	return Global_26009;
}

bool func_9()
{
	return Global_26009.f_1[0]->f_17 != 0;
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
		set_script_gfx_draw_behind_pausemenu(true);
		set_script_gfx_draw_order(7);
	}
	else
	{
		set_script_gfx_draw_behind_pausemenu(false);
		set_script_gfx_draw_order(4);
	}
}

void func_11(char* sParam0)
{
	if (!Global_26009.f_193)
	{
		return;
	}
	fVar0 = (IntToFloat(get_game_timer()) / 1000f);
	fVar1 = ((0.5f * sin((250f * (fVar0 - 0f)))) + 0.5f);
	Global_26009.f_324[0]->f_4 = floor(func_14(200f, 100f, fVar1));
	Global_26009.f_324[0]->f_5 = floor(func_14(4f, 60f, fVar1));
	Global_26009.f_324[0]->f_6 = floor(func_14(0f, 58f, fVar1));
	Global_26009.f_324[0]->f_7 = floor(func_14(200f, 200f, fVar1));
	func_15(Global_26009.f_324[0]);
	StringCopy(&(Global_26009.f_197[0]->f_5), "Script: '", 128);
	StringConCat(&(Global_26009.f_197[0]->f_5), sParam0, 128);
	StringConCat(&(Global_26009.f_197[0]->f_5), "'", 128);
	func_16(Global_26009.f_197[0]);
	StringCopy(&(Global_26009.f_197[1]->f_5), func_17(sParam0->f_17), 128);
	func_16(Global_26009.f_197[1]);
	StringCopy(&(Global_26009.f_197[2]->f_5), "Frame: ", 128);
	StringIntConCat(&(Global_26009.f_197[2]->f_5), sParam0->f_18, 128);
	func_16(Global_26009.f_197[2]);
	StringCopy(&(Global_26009.f_197[4]->f_5), "Error Count: ", 128);
	StringIntConCat(&(Global_26009.f_197[4]->f_5), func_8(), 128);
	func_16(Global_26009.f_197[4]);
}

void func_12()
{
	if (!Global_26009.f_194)
	{
		return;
	}
	func_15(Global_26009.f_324[1]);
	func_16(Global_26009.f_197[5]);
}

bool func_13(int iParam0, int iParam1)
{
	iVar0 = 9;
	while (iVar0 >= 0)
	{
		if (iVar0 == 0)
		{
			StringCopy(Global_26009.f_1[iVar0], func_18(iParam0), 128);
			Global_26009.f_1[iVar0]->f_16 = iParam0;
			Global_26009.f_1[iVar0]->f_17 = iParam1;
			Global_26009.f_1[iVar0]->f_18 = get_frame_count();
		}
		iVar1 = (iVar0 - 1);
		if (iVar1 < 0)
		{
		}
		else
		{
			_copy_memory(Global_26009.f_1[iVar0], Global_26009.f_1[iVar1], 19);
		}
		iVar0 = (iVar0 + -1);
	}
	Global_26009++;
	return true;
}

float func_14(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_15(var uParam0)
{
	draw_rect(*uParam0, uParam0->f_1, uParam0->f_2, uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6, uParam0->f_7, false, true);
}

void func_16(var uParam0)
{
	if (*uParam0)
	{
		set_text_centre(true);
	}
	set_text_dropshadow(0, 0, 0, 0, 255);
	set_text_scale(uParam0->f_1, uParam0->f_2);
	func_19(uParam0->f_3, uParam0->f_4, "STRING", &(uParam0->f_5));
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case -921472336:
			return "UNKNOWN ERROR";
		case -992702923:
			return "ARRAY OVERRUN";
		case 397004310:
			return "INSTRUCTION LIMIT";
		case 2004694700:
			return "STACK OVERFLOW";
		case -1009774763:
			return "GLOBAL BLOCK INACCESSIBLE";
		case 1028822748:
			return "GLOBAL BLOCK NOT RESIDENT";
		default:
			break;
	}
	return func_18(iParam0);
}

char* func_18(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

void func_19(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	_display_text(_create_var_string(10, "VAR_STRING_1", func_20(sParam3, 109029619)), fParam0, fParam1);
}

char* func_20(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_21(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_21(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

